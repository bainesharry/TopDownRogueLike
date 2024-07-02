// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "TopDownUpgradeStationBase.h"
#include "TopDownUpgradeStationSpeed.generated.h"

/**
 * 
 */
UCLASS()
class TOPDOWNROGUELIKE_API ATopDownUpgradeStationSpeed : public ATopDownUpgradeStationBase
{
	GENERATED_BODY()

public:
	ATopDownUpgradeStationSpeed();
	void UpgradeStat() override;
};
