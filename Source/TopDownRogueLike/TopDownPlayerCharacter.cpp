// Fill out your copyright notice in the Description page of Project Settings.


#include "TopDownPlayerCharacter.h"
#include "GameFramework/SpringArmComponent.h"
#include "WeaponBase.h"
#include "TopDownRogueLikePlayerController.h"

ATopDownPlayerCharacter::ATopDownPlayerCharacter()
{
}

void ATopDownPlayerCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAction("ZoomOut", IE_Pressed, this, &ATopDownPlayerCharacter::ZoomOut);
	PlayerInputComponent->BindAction("ZoomIn", IE_Pressed, this, &ATopDownPlayerCharacter::ZoomIn);
	PlayerInputComponent->BindAction("ShootWeapon", IE_Pressed, this, &ATopDownPlayerCharacter::StartShooting);
	PlayerInputComponent->BindAction("ShootWeapon", IE_Released, this, &ATopDownPlayerCharacter::StopShooting);

	//Binds Inputs to various functions.

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

void ATopDownPlayerCharacter::StartShooting()
{

	if (canFire)
	{
		PreShootPrep();

		GetWorldTimerManager().SetTimer(TimerHandle_Refire, this, &ATopDownPlayerCharacter::PreShootPrep, (1.0f / FireRate), true);
		isShooting = true;
	}
	
}

void ATopDownPlayerCharacter::StopShooting()
{
	if (isShooting == true)
	{
		GetWorldTimerManager().ClearTimer(TimerHandle_Refire);
		isShooting = false;
		TickUpTimeSinceLastShot();
	}
}

void ATopDownPlayerCharacter::PreShootPrep()
{
	ATopDownRogueLikePlayerController* PlayerController = (ATopDownRogueLikePlayerController*)GetWorld()->GetFirstPlayerController();
	//PlayerController->DeprojectMousePositionToWorld(MouseLocation, MouseDirection);
	FHitResult Hit;
	FVector HitLocation;
	FVector ActorLocation;
	PlayerController->GetHitResultUnderCursor(ECC_Visibility, true, Hit);
	HitLocation = Hit.Location;
	ActorLocation = RootComponent->GetComponentLocation();
	FRotator rotator = FRotationMatrix::MakeFromX(HitLocation - ActorLocation).Rotator();
	rotator.Pitch = 0.0f;
	rotator.Roll = 0.0f;
	this->SetActorRotation(rotator, ETeleportType::None);
	ATopDownRogueLikeCharacter::Shoot();
}