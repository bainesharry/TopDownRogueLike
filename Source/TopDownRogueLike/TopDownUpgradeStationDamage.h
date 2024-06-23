// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "TopDownUpgradeStationBase.h"
#include "TopDownUpgradeStationDamage.generated.h"

/**
 * 
 */
UCLASS()
class TOPDOWNROGUELIKE_API ATopDownUpgradeStationDamage : public ATopDownUpgradeStationBase
{
	GENERATED_BODY()
public:

	void UpgradeStat() override;
};
