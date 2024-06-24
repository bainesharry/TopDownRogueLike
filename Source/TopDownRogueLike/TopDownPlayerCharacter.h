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

	void UpgradeStats(float& value1, float& value2);
	virtual void BeginPlay() override;

	float& GetUpgradeFactorHealth();
	float& GetUpgradeFactorDamage();
	float& GetUpgradeFactorFireRate();
	float& GetUpgradeFactorRange();
	float& GetUpgradeFactorSpeed();



protected:


	//Various functions for player exclusive inputs are defined here.
	void ZoomIn();
	void ZoomOut();
	void PreShootPrep() override;

	//Functions to Enable automatic fire via Mouse Hold. Not in parent class as AI do not get carpal tunnel syndrome.
	void StartShooting() override;
	void StopShooting() override;

	void AttemptInteract();

	FTimerHandle TimerHandle_Refire;
	FTimerHandle TimerHandle_Regen;

	void RegenerateHealth();
	

private:

	//Reference to a CameraBoom, used to set the camera above the player.
	class USpringArmComponent* CameraBoom;



	float HealthRegenInterval;

	
};
