// Copyright Epic Games, Inc. All Rights Reserved.

#include "TopDownRogueLikeCharacter.h"
#include "UObject/ConstructorHelpers.h"
#include "Camera/CameraComponent.h"
#include "Components/DecalComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
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

	//Spawns in a LineTrace along with debug lines from the players location to the defined "end" variable earlier in function.
	GetWorld()->LineTraceSingleByChannel(blank, WorldLocation, LineTraceEnd, ECC_Visibility, TraceParams);
	DrawDebugLine(GetWorld(), WorldLocation, LineTraceEnd, FColor::Orange, false, 2.0f);
	//Stops the character 
	Controller->StopMovement();
	//Stops the character from being able to fire again until CanFire is true (time dependent on fire rate.)
	canFire = false;

	GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, TEXT("Some debug message!"));

}