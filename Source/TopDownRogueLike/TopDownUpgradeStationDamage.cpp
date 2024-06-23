// Fill out your copyright notice in the Description page of Project Settings.


#include "TopDownUpgradeStationDamage.h"

void ATopDownUpgradeStationMaxHealth::UpgradeStat()
{

	if (PlayerCharacterReference)
	{
		ATopDownUpgradeStationBase::PlayerCharacterReference->UpgradeDamage();
	}
	else
	{
		GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, TEXT("You roke!!!!"));
	}
}