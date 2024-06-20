// Fill out your copyright notice in the Description page of Project Settings.


#include "TopDownPlayerCharacter.h"
#include "GameFramework/SpringArmComponent.h"

ATopDownPlayerCharacter::ATopDownPlayerCharacter()
{
}

void ATopDownPlayerCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAction("ZoomOut", IE_Pressed, this, &ATopDownPlayerCharacter::ZoomOut);
	PlayerInputComponent->BindAction("ZoomIn", IE_Pressed, this, &ATopDownPlayerCharacter::ZoomIn);
}

void ATopDownPlayerCharacter::ZoomIn()
{
	float NewArmLength = GetCameraBoom()->TargetArmLength;
	NewArmLength -= 100.0f;
	//Sets the new boom arm length
	NewArmLength = FMath::Clamp(NewArmLength, 400.0f, 2000.0f);
	//Sets the value of the boom arm length 
	GetCameraBoom()->TargetArmLength = NewArmLength;
	
	
}

void ATopDownPlayerCharacter::ZoomOut()
{
	float NewArmLength = GetCameraBoom()->TargetArmLength;
	NewArmLength += 100.0f;
	//Sets the new boom arm length
	NewArmLength = FMath::Clamp(NewArmLength, 400.0f, 2000.0f);
	//Sets the value of the boom arm length 
	GetCameraBoom()->TargetArmLength = NewArmLength;
	
}