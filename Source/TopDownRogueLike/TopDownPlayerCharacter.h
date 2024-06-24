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
	void PreShootPrep();

	//Functions to Enable automatic fire via Mouse Hold. Not in parent class as AI do not get carpal tunnel syndrome.
	void StartShooting();
	void StopShooting();

	void AttemptInteract();

	FTimerHandle TimerHandle_Refire;
	FTimerHandle TimerHandle_Regen;

	void RegenerateHealth();
	

private:

	//Reference to a CameraBoom, used to set the camera above the player.
	class USpringArmComponent* CameraBoom;

	//These dictate the increase in stats when an upgrade is purchased. In the future, these will be adjusted in child classes to allow for scaling of various "classes."
	//The amount the characters max health is increased by.
	UPROPERTY(EditAnywhere, BluePrintReadWrite, meta = (AllowPrivateAccess = "true"))
	float MaxHealthUpgradeFactor;

	//The amount the characters damage is increased by.
	UPROPERTY(EditAnywhere, BluePrintReadWrite, meta = (AllowPrivateAccess = "true"))
	float DamageUpgradeFactor;

	//The amount the characters firerrate is increase by.
	UPROPERTY(EditAnywhere, BluePrintReadWrite, meta = (AllowPrivateAccess = "true"))
	float FireRateUpgradeFactor;

	//The amount the characters range is increased by.
	UPROPERTY(EditAnywhere, BluePrintReadWrite, meta = (AllowPrivateAccess = "true"))
	float RangeUpgradeFactor;

	//The amount the characters range is increased by.
	UPROPERTY(EditAnywhere, BluePrintReadWrite, meta = (AllowPrivateAccess = "true"))
	float SpeedUpgradeFactor;

	float HealthRegenInterval;

	
};
