// Fill out your copyright notice in the Description page of Project Settings.


#include "TopDownUpgradeStationBase.h"
#include "Kismet/GameplayStatics.h"
#include "TopDownRogueLikeGameMode.h"

// Sets default values
ATopDownUpgradeStationBase::ATopDownUpgradeStationBase()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
	DefaultSceneRoot = CreateDefaultSubobject<USceneComponent>(TEXT("DefaultSceneRoot"));
	RootComponent = DefaultSceneRoot;

	StationMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	StationMesh->SetupAttachment(RootComponent);

	CollisionMesh = CreateDefaultSubobject<UBoxComponent>(TEXT("CollisionMesh"));
	CollisionMesh->SetupAttachment(RootComponent);


	
}

// Called when the game starts or when spawned
void ATopDownUpgradeStationBase::BeginPlay()
{
	PlayerCharacterReference = Cast<ATopDownPlayerCharacter>(UGameplayStatics::GetPlayerCharacter(GetWorld(), 0));
	//Gets a reference to the player character on initialisation. Is Used for upgrading character parameters later.
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
	
	UpgradeStat();
}



