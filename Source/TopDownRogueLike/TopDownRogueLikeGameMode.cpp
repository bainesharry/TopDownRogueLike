// Fill out your copyright notice in the Description page of Project Settings.


#include "TopDownRogueLikeGameMode.h"
#include "Kismet/GameplayStatics.h"
#include "TopDownGameInstance.h"

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
	//Get reference to game instance and sets its final score variable.
	UTopDownGameInstance* GI = Cast<UTopDownGameInstance>(UGameplayStatics::GetGameInstance(GetWorld()));
	if (GI)
	{
		GI->FinalScore = Score;
	}
	UGameplayStatics::OpenLevel(GetWorld(), "TopDownGameOver");
}

void ATopDownRogueLikeGameMode::BeginPlay()
{
	//Sets gamemode to increase difficulty after an amount of time.
	GetWorldTimerManager().SetTimer(TimerHandler_DiffTimer, this, &ATopDownRogueLikeGameMode::IncreaseDifficulty, (TimeBetweenDifficultyIncreases), true);
}

void ATopDownRogueLikeGameMode::IncreaseDifficulty()
{
	Difficulty++;
}

