// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "TopDownRogueLikeGameMode.generated.h"

/**
 * 
 */
UCLASS()
class TOPDOWNROGUELIKE_API ATopDownRogueLikeGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	ATopDownRogueLikeGameMode();

	UPROPERTY(EditAnywhere,BluePrintReadWrite)
	int Money;
	
};
