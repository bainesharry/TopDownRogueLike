// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "TopDownRogueLikeGameMode.generated.h"

/**
 * 
 */
UCLASS()
class TOPDOWNROGUELIKE_API ATopDownRogueLikeGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	ATopDownRogueLikeGameMode();

	void IncreaseScore(int score);
	void GameOver();

	

	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, BluePrintReadWrite)
	int Money;

	UPROPERTY(EditAnywhere, BluePrintReadWrite)
	int Difficulty;
protected:
	
	
	UPROPERTY(EditAnywhere, BluePrintReadWrite)
	int Score;
	
	void IncreaseDifficulty();

	UPROPERTY(EditDefaultsOnly, BluePrintReadWrite)
	int TimeBetweenDifficultyIncreases;

private:

	FTimerHandle TimerHandler_DiffTimer;

};
