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
	GetCameraBoom()->TargetArmLength -= 100.f;
}

void ATopDownPlayerCharacter::ZoomOut()
{
	GetCameraBoom()->TargetArmLength += 100.f;
	
}