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




protected:


	//Various functions for player exclusive inputs are defined here.
	void ZoomIn();
	void ZoomOut();
	void PreShootPrep();

	//Functions to Enable automatic fire via Mouse Hold. Not in parent class as AI do not get carpal tunnel syndrome.
	void StartShooting();
	void StopShooting();

	FTimerHandle TimerHandle_Refire;

	

private:

	//Reference to a CameraBoom, used to set the camera above the player.
	class USpringArmComponent* CameraBoom;


	
};
