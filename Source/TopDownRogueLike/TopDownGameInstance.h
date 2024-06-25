// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "TopDownGameInstance.generated.h"

/**
 * 
 */
UCLASS()
class TOPDOWNROGUELIKE_API UTopDownGameInstance : public UGameInstance
{
	GENERATED_BODY()
	
public:
	UPROPERTY(EditAnywhere, BluePrintReadWrite, meta = (AllowPrivateAccess = "true"))
	int FinalScore;

};
