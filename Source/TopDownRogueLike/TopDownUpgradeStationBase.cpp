// Fill out your copyright notice in the Description page of Project Settings.


#include "TopDownUpgradeStationBase.h"
#include "Kismet/GameplayStatics.h"
#include "TopDownRogueLikeGameMode.h"

// Sets default values
ATopDownUpgradeStationBase::ATopDownUpgradeStationBase()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
	//Creates default root component so that mesh isn't assigned at root component as default.
	DefaultSceneRoot = CreateDefaultSubobject<USceneComponent>(TEXT("DefaultSceneRoot"));
	RootComponent = DefaultSceneRoot;

	//Creates Static Mesh 
	StationMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	StationMesh->SetupAttachment(RootComponent);


	//Creates Collision Box for interaction.
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
	//Interact Interfact code.
	//Gets a reference to game mode-should be moved later and validated., inefficient cast currently.
	ATopDownRogueLikeGameMode* GameModeRef = Cast<ATopDownRogueLikeGameMode>(GetWorld()->GetAuthGameMode());
	//Checks whether player has enough money to buy an upgrade.
	if (GameModeRef->Money >= UpgradeCost)
	{
		//Deducts money from player depending on cost.
		GameModeRef->Money -= UpgradeCost;
		//Increases cost of future upgrades.
		UpgradeCost += CostIncreaseValue;
		//Upgrades respective stat.
		UpgradeStat();
	}
	
	
}



