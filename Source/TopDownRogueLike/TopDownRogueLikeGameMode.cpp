// Fill out your copyright notice in the Description page of Project Settings.


#include "TopDownRogueLikeGameMode.h"

ATopDownRogueLikeGameMode::ATopDownRogueLikeGameMode()
{
	Money = 5000;
}

void ATopDownRogueLikeGameMode::IncreaseScore(int score)
{
	Score += score;
	Money += score;
}

