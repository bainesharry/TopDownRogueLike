// Copyright Epic Games, Inc. All Rights Reserved.

#include "TopDownRogueLikeCharacter.h"
#include "UObject/ConstructorHelpers.h"
#include "Camera/CameraComponent.h"
#include "Components/DecalComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Kismet/GameplayStatics.h"
#include "GameFramework/PlayerController.h"
#include "GameFramework/SpringArmComponent.h"
#include "Materials/Material.h"
#include "Engine/World.h"
#include "DrawDebugHelpers.h"

ATopDownRogueLikeCharacter::ATopDownRogueLikeCharacter()
{
	// Set size for player capsule
	GetCapsuleComponent()->InitCapsuleSize(42.f, 96.0f);

	// Don't rotate character to camera direction
	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;
	bUseControllerRotationRoll = false;

	// Configure character movement
	GetCharacterMovement()->bOrientRotationToMovement = true; // Rotate character to moving direction
	GetCharacterMovement()->RotationRate = FRotator(0.f, 640.f, 0.f);
	GetCharacterMovement()->bConstrainToPlane = true;
	GetCharacterMovement()->bSnapToPlaneAtStart = true;

	// Create a camera boom...
	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(RootComponent);
	CameraBoom->SetUsingAbsoluteRotation(true); // Don't want arm to rotate when character does
	CameraBoom->TargetArmLength = 800.f;
	CameraBoom->SetRelativeRotation(FRotator(-60.f, 0.f, 0.f));
	CameraBoom->bDoCollisionTest = false; // Don't want to pull camera in when it collides with level

	// Create a camera...
	TopDownCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("TopDownCamera"));
	TopDownCameraComponent->SetupAttachment(CameraBoom, USpringArmComponent::SocketName);
	TopDownCameraComponent->bUsePawnControlRotation = false; // Camera does not rotate relative to arm

	EquippedWeapon = CreateDefaultSubobject<UChildActorComponent>(TEXT("EquippedWeapon"));
	EquippedWeapon->SetupAttachment(RootComponent);


	//Creating Character meshes.
	CharMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("CharMesh"));
	CharMesh->SetupAttachment(RootComponent);

	CharHead = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("CharHead"));
	CharHead->SetupAttachment(RootComponent);

	// Activate ticking in order to update the cursor every frame.
	PrimaryActorTick.bCanEverTick = true;
	PrimaryActorTick.bStartWithTickEnabled = true;

	//Initialises the character as being able to fire (they haven't shot at all at game start.

	canFire = true;

}

void ATopDownRogueLikeCharacter::Tick(float DeltaSeconds)
{
    Super::Tick(DeltaSeconds);
}

void ATopDownRogueLikeCharacter::Shoot()
{
	//Function Contains Shooting Logic Shared by Player And Enemies. Player and Enemies have a "Preparation" function exclusive to them.
	//Gets location of character
	FVector WorldLocation = RootComponent->GetComponentLocation();
	//Gets forward vector of character, with length being dependent on their range stat.
	FVector ForwardVector = RootComponent->GetForwardVector() * Range;
	//Sets the end of the linetrace to the forwardvectors end position in worldspace
	FVector LineTraceEnd = WorldLocation + ForwardVector;
	//Provisional variables to fill Linetrace parameters.
	FHitResult blank;
	FCollisionQueryParams TraceParams;
	//Prevents linetracer from hitting self.
	TraceParams.AddIgnoredActor(this);

	//Spawns in a LineTrace along with debug lines from the players location to the defined "end" variable earlier in function.
	GetWorld()->LineTraceSingleByChannel(blank, WorldLocation, LineTraceEnd, ECC_Visibility, TraceParams);

	//Draws line and collision sphere.
	DrawDebugLine(GetWorld(), WorldLocation, LineTraceEnd, FColor::Orange, false, 0.5f);
	DrawDebugSphere(GetWorld(), blank.Location, 10, 10, FColor::Red, 0, 0.5f);
	AActor* HitActor = blank.GetActor();
	if (HitActor)
	{
		if (UGameplayStatics::ApplyDamage(HitActor, this->Damage, this->GetController(), nullptr, nullptr))
		{
			//GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, TEXT("Hit!"));
		}
	}
	//Stops the character 
	Controller->StopMovement();
	//Stops the character from being able to fire again until CanFire is true (time dependent on fire rate.)
	canFire = false;



}

float ATopDownRogueLikeCharacter::TakeDamage(float DamageAmount, struct FDamageEvent const& DamageEvent, class AController* EventInstigator, AActor* DamageCauser)
{
	
	//Deducts the hit characters health by the amount of damage the enemy shot did.
	Health -= DamageAmount;
	//GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, TEXT("Ow"));
	if (Health <= 0)
	{
		Die();
	}

	return DamageAmount;
}

void ATopDownRogueLikeCharacter::Die()
{
	//GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, TEXT("Death"));
}

void ATopDownRogueLikeCharacter::StartShooting()
{
	//Checks to see whether the player hasn't clicked to shoot too recently.
	if (canFire)
	{

		//Calls the code to prepare for shooting, which is then sent to parent shoot function.
		PreShootPrep();

		//Calls the shootpreparation function on a timer dependent on the guns fire rate until player stops shooting. Allows for automatic fire.
		GetWorldTimerManager().SetTimer(TimerHandle_Refire, this, &ATopDownRogueLikeCharacter::PreShootPrep, (1.0f / FireRate), true);

		//Sets the player to be shooting.
		isShooting = true;
	}

}

void ATopDownRogueLikeCharacter::StopShooting()
{
	if (isShooting == true)
	{
		//Clears the timer top stop automatic fire
		GetWorldTimerManager().ClearTimer(TimerHandle_Refire);
		//Classes the player as no longer shooting.
		isShooting = false;
		//Starts countint the time taken since last shot, to see whether player is allowed to shoot again.
		TickUpTimeSinceLastShot();
	}
}

void ATopDownRogueLikeCharacter::TickUpTimeSinceLastShot()
{
	//If the player is no longer shooting, Starts a timer that ticks up until it reaches the 1 second/ user fire rate, and then allows the player to shoot again.
	if (isShooting == false)
	{

		GetWorld()->GetTimerManager().SetTimer(TimeSinceLastShotHandle, this, &ATopDownRogueLikeCharacter::AllowShooting, 1.0f / FireRate, false);
	}
}

void ATopDownRogueLikeCharacter::AllowShooting()
{
	//Allows the user to shoot again.
	canFire = true;
}



//Getters for references for variables-used within interactables to upgrade attributes. Put in parent class because they may be useful in future.
//Might be ideal to place upgrade factors in parent class as well for enemies to use, unsure currently. Done now :)
float& ATopDownRogueLikeCharacter::GetMaxHealth()
{
	return MaxHealth;
}

float& ATopDownRogueLikeCharacter::GetDamage()
{
	return Damage;
}

float& ATopDownRogueLikeCharacter::GetFireRate()
{
	return FireRate;
}

float& ATopDownRogueLikeCharacter::GetRange()
{
	return Range;
}

float& ATopDownRogueLikeCharacter::GetSpeed()
{
	return GetCharacterMovement()->MaxWalkSpeed;
}

//Getters for references to upgrade factors.
float& ATopDownRogueLikeCharacter::GetUpgradeFactorHealth()
{
	return MaxHealthUpgradeFactor;
}

float& ATopDownRogueLikeCharacter::GetUpgradeFactorDamage()
{
	return DamageUpgradeFactor;
}

float& ATopDownRogueLikeCharacter::GetUpgradeFactorFireRate()
{
	return FireRateUpgradeFactor;
}

float& ATopDownRogueLikeCharacter::GetUpgradeFactorRange()
{
	return RangeUpgradeFactor;
}

float& ATopDownRogueLikeCharacter::GetUpgradeFactorSpeed()
{
	return SpeedUpgradeFactor;
}