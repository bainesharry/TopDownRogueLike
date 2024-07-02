// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "TopDownUpgradeStationBase.h"
#include "TopDownUpgradeStationMaxHealth.generated.h"

/**
 * 
 */
UCLASS()
class TOPDOWNROGUELIKE_API ATopDownUpgradeStationMaxHealth : public ATopDownUpgradeStationBase
{
	GENERATED_BODY()

public:
	ATopDownUpgradeStationMaxHealth();
	void UpgradeStat() override;
private:


	
};
