// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "TopDownRogueLikeCharacter.h"
#include "TopDownRogueLikePlayerController.h"
#include "AIController.h"
#include "TopDownEnemyCharacter.generated.h"

/**
 * 
 */
UCLASS()
class TOPDOWNROGUELIKE_API ATopDownEnemyCharacter : public ATopDownRogueLikeCharacter
{
	GENERATED_BODY()

public:

	ATopDownEnemyCharacter();
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;

protected:
	FTimerHandle TimerHandle_Refire;
	//The penalty to accuracy that an enemy recieves, enemies will shoot in a random position of this variables radius around the player.
	//Therefore, lower makes for more accurate ai.
	UPROPERTY(EditDefaultsOnly, BluePrintReadWrite, meta = (AllowPrivateAccess = "true"))
	float ShootingMargainOfError;


	//The amount a money and score that the enemy will provide when killed.
	UPROPERTY(EditDefaultsOnly, BluePrintReadWrite, meta = (AllowPrivateAccess = "true"))
	float ScoreYield;

	void Die() override;
	//void StartShooting() override;
	//void StopShooting() override;
	void PreShootPrep() override;
	void DamageTest();
	void MoveToPlayer();

	ATopDownRogueLikePlayerController* PlayerControllerRef;
	AAIController* AiControllerRef;
	ACharacter* PlayerCharacterRef;


};
