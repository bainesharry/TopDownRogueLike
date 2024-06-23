// Fill out your copyright notice in the Description page of Project Settings.


#include "TopDownUpgradeStationSpeed.h"

void ATopDownUpgradeStationSpeed::UpgradeStat()
{
	//Derived function from Parent class, gets a reference to players attribute and upgrade factor and sends it to player character class to add them together.
	if (PlayerCharacterReference)
	{
		ATopDownUpgradeStationBase::PlayerCharacterReference->UpgradeStats(PlayerCharacterReference->GetSpeed(), PlayerCharacterReference->GetUpgradeFactorSpeed());
	}
	else
	{
		//Validation in the event of no character reference (game will crash otherwise.)
		GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, TEXT("Error! Character Reference is Null"));
	}
}