// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "TopDownRogueLikeCharacter.h"
#include "TopDownPlayerCharacter.generated.h"

/**
 * 
 */
UCLASS()
class TOPDOWNROGUELIKE_API ATopDownPlayerCharacter : public ATopDownRogueLikeCharacter
{
	GENERATED_BODY()
public:
	ATopDownPlayerCharacter();

	void SetupPlayerInputComponent(UInputComponent* PlayerInputComponent);

	void ZoomIn();
	void ZoomOut();
	void PreShootPrep();
	//Various functions for player exclusive inputs are defined here.

private:

	class USpringArmComponent* CameraBoom;
	//Reference to a CameraBoom, used to set the camera above the player.
};
