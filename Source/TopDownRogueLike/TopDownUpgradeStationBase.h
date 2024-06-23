// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "InteractInterface.h"
#include "Components/BoxComponent.h"
#include "TopDownPlayerCharacter.h"
#include "TopDownUpgradeStationBase.generated.h"



UCLASS()
class TOPDOWNROGUELIKE_API ATopDownUpgradeStationBase : public AActor, public IInteractInterface
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ATopDownUpgradeStationBase();

	virtual void Interact() override;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	//The base cost for purchasing an upgrade from the statrion.
	UPROPERTY(EditAnywhere, BluePrintReadWrite, meta = (AllowPrivateAccess = "true"))
	int UpgradeCost;

	//The amount the next purchases cost will increase buy when an upgrade is purchased.
	UPROPERTY(EditAnywhere, BluePrintReadWrite, meta = (AllowPrivateAccess = "true"))
	int CostIncreaseValue;

	//The Text that Appears When Near the Upgrade Station.
	UPROPERTY(EditAnywhere, BluePrintReadWrite, meta = (AllowPrivateAccess = "true"))
	int InteractText;

	virtual void UpgradeStat() {};

	class ATopDownPlayerCharacter* PlayerCharacterReference;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:

	UPROPERTY(EditDefaultsOnly, Category = "Mesh")
	class UStaticMeshComponent* StationMesh;

	UPROPERTY(EditDefaultsOnly, Category = "CollisionMesh")
	class UBoxComponent* CollisionMesh;

	USceneComponent* DefaultSceneRoot;


};
