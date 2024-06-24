// Fill out your copyright notice in the Description page of Project Settings.


#include "TopDownPlayerCharacter.h"
#include "GameFramework/SpringArmComponent.h"
#include "WeaponBase.h"
#include "TopDownRogueLikePlayerController.h"
#include "InteractInterface.h"

ATopDownPlayerCharacter::ATopDownPlayerCharacter()
{
	HealthRegenInterval = 0.25f;
}

void ATopDownPlayerCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAction("ZoomOut", IE_Pressed, this, &ATopDownPlayerCharacter::ZoomOut);
	PlayerInputComponent->BindAction("ZoomIn", IE_Pressed, this, &ATopDownPlayerCharacter::ZoomIn);
	PlayerInputComponent->BindAction("ShootWeapon", IE_Pressed, this, &ATopDownPlayerCharacter::StartShooting);
	PlayerInputComponent->BindAction("ShootWeapon", IE_Released, this, &ATopDownPlayerCharacter::StopShooting);
	PlayerInputComponent->BindAction("Interact", IE_Pressed, this, & ATopDownPlayerCharacter::AttemptInteract);

	//Binds Inputs to various functions.

}

void ATopDownPlayerCharacter::BeginPlay()
{
	Super::BeginPlay();
	GetWorldTimerManager().SetTimer(TimerHandle_Regen, this, &ATopDownPlayerCharacter::RegenerateHealth, (HealthRegenInterval), true);
}

void ATopDownPlayerCharacter::ZoomIn()
{
	float NewArmLength = GetCameraBoom()->TargetArmLength;
	//Retrieves the current boom armlength of the camera
	NewArmLength -= 100.0f;
	//Sets the new boom arm length
	NewArmLength = FMath::Clamp(NewArmLength, 400.0f, 2000.0f);
	//Sets the value of the boom arm length 
	GetCameraBoom()->TargetArmLength = NewArmLength;
	
	
}

void ATopDownPlayerCharacter::ZoomOut()
{
	float NewArmLength = GetCameraBoom()->TargetArmLength;
	//Retrieves the current boom armlength of the camera
	NewArmLength += 100.0f;
	//Sets the new boom arm length
	NewArmLength = FMath::Clamp(NewArmLength, 400.0f, 2000.0f);
	//Sets the value of the boom arm length 
	GetCameraBoom()->TargetArmLength = NewArmLength;
	
}



void ATopDownPlayerCharacter::AttemptInteract()
{
	//Checks to see whether it is in overlapping boundaries for any interactable actors.
	TArray<AActor*> ActorArray;
	GetOverlappingActors(ActorArray);
	//Checks overlapping actors to see whether they utilise the interaction interface.
	for(AActor* Actor : ActorArray)
	{
		
		if(Actor->GetClass()->ImplementsInterface(UInteractInterface::StaticClass()))
		{
			//If they do, fire the interaction interface function.
			Cast<IInteractInterface>(Actor)->Interact();
		}

	}
}

void ATopDownPlayerCharacter::RegenerateHealth()
{
	if (Health < MaxHealth)
	{
		if ((Health + (Health / 100)) <= MaxHealth)
		{
			Health = Health += (Health / 100);
		}
		else
		{
			Health = MaxHealth;
		}
	}

}

void ATopDownPlayerCharacter::PreShootPrep()
{
	//Preshootprep gets the player character to face towards the cursor location before they shoot.
	//Gets a reference to the player controller
	ATopDownRogueLikePlayerController* PlayerController = (ATopDownRogueLikePlayerController*)GetWorld()->GetFirstPlayerController();
	//PlayerController->DeprojectMousePositionToWorld(MouseLocation, MouseDirection);

	//Defines variables for cursor location relative to player..
	FHitResult Hit;
	FVector HitLocation;
	FVector ActorLocation;
	PlayerController->GetHitResultUnderCursor(ECC_Visibility, true, Hit);
	HitLocation = Hit.Location;
	ActorLocation = RootComponent->GetComponentLocation();

	//Sets the player to rotate to their mouse.
	FRotator rotator = FRotationMatrix::MakeFromX(HitLocation - ActorLocation).Rotator();
	rotator.Pitch = 0.0f;
	rotator.Roll = 0.0f;
	this->SetActorRotation(rotator, ETeleportType::None);
	//Calls parent shoot function, which sets linetrace.
	ATopDownRogueLikeCharacter::Shoot();
}

//could probably be consolidated into single function-look into.
//Consolidated into single function, added reference getters for variables (should rename functions later for clarity)


//Function sends a player attribute and upgrade factor reference as a parameter, and adds upgrade factor to attribute variable.
void ATopDownPlayerCharacter::UpgradeStats(float& value1, float& value2)
{
	
	value1 += value2;
}





//void ATopDownPlayerCharacter::StartShooting()
//{
//	//Checks to see whether the player hasn't clicked to shoot too recently.
//	if (canFire)
//	{
//
//		//Calls the code to prepare for shooting, which is then sent to parent shoot function.
//		PreShootPrep();
//
//		//Calls the shootpreparation function on a timer dependent on the guns fire rate until player stops shooting. Allows for automatic fire.
//		GetWorldTimerManager().SetTimer(TimerHandle_Refire, this, &ATopDownPlayerCharacter::PreShootPrep, (1.0f / FireRate), true);
//
//		//Sets the player to be shooting.
//		isShooting = true;
//	}
//	
//}
//
//void ATopDownPlayerCharacter::StopShooting()
//{
//	if (isShooting == true)
//	{
//		//Clears the timer top stop automatic fire
//		GetWorldTimerManager().ClearTimer(TimerHandle_Refire);
//		//Classes the player as no longer shooting.
//		isShooting = false;
//		//Starts countint the time taken since last shot, to see whether player is allowed to shoot again.
//		TickUpTimeSinceLastShot();
//	}
//}