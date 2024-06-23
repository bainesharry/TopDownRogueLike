// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "TopDownUpgradeStationBase.h"
#include "TopDownUpgradeStationRange.generated.h"

/**
 * 
 */
UCLASS()
class TOPDOWNROGUELIKE_API ATopDownUpgradeStationRange : public ATopDownUpgradeStationBase
{
	GENERATED_BODY()

public:

	void UpgradeStat() override;
};
