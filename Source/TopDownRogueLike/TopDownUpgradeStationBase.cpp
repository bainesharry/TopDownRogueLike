// Fill out your copyright notice in the Description page of Project Settings.


#include "TopDownUpgradeStationBase.h"
#include "TopDownRogueLikeGameMode.h"

// Sets default values
ATopDownUpgradeStationBase::ATopDownUpgradeStationBase()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ATopDownUpgradeStationBase::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ATopDownUpgradeStationBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ATopDownUpgradeStationBase::Interact()
{
	ATopDownRogueLikeGameMode* GameModeRef = Cast<ATopDownRogueLikeGameMode>(GetWorld()->GetAuthGameMode());
	if (GameModeRef->Money >= UpgradeCost)
	{
		GameModeRef->Money -= UpgradeCost;
		UpgradeCost += CostIncreaseValue;
	}
}



