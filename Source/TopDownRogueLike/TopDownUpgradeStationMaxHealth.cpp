// Fill out your copyright notice in the Description page of Project Settings.


#include "TopDownUpgradeStationMaxHealth.h"

void ATopDownUpgradeStationMaxHealth::UpgradeStat()
{

	if (PlayerCharacterReference)
	{
		ATopDownUpgradeStationBase::PlayerCharacterReference->UpgradeHealth();
	}
	else
	{
		GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, TEXT("You roke!!!!"));
	}
}