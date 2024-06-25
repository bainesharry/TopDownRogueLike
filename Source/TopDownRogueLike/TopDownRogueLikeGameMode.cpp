// Fill out your copyright notice in the Description page of Project Settings.


#include "TopDownRogueLikeGameMode.h"
#include "Kismet/GameplayStatics.h"

ATopDownRogueLikeGameMode::ATopDownRogueLikeGameMode()
{
	Money = 5000;
	Difficulty = 0;
	TimeBetweenDifficultyIncreases = 3;
}

void ATopDownRogueLikeGameMode::IncreaseScore(int score)
{
	Score += score;
	Money += score;
}

void ATopDownRogueLikeGameMode::GameOver()
{
	UGameplayStatics::OpenLevel(GetWorld(), "TopDownGameOver");
}

void ATopDownRogueLikeGameMode::BeginPlay()
{
	GetWorldTimerManager().SetTimer(TimerHandler_DiffTimer, this, &ATopDownRogueLikeGameMode::IncreaseDifficulty, (TimeBetweenDifficultyIncreases), true);
}

void ATopDownRogueLikeGameMode::IncreaseDifficulty()
{
	GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, TEXT("Difficulty Up"));
	Difficulty++;
}

