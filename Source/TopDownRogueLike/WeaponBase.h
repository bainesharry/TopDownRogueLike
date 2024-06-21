// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "WeaponBase.generated.h"

UCLASS()
class TOPDOWNROGUELIKE_API AWeaponBase : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AWeaponBase();

	void Shoot(APawn* instigator);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(EditDefaultsOnly, Category = "Weapon")
	class UStaticMeshComponent* WeaponMesh;

	UPROPERTY(EditAnywhere, BluePrintReadWrite, meta = (AllowPrivateAccess = "true"))
	FString WeaponName;

	UPROPERTY(EditAnywhere, BluePrintReadWrite, meta = (AllowPrivateAccess = "true"))
	float WeaponDamage;

	UPROPERTY(EditAnywhere, BluePrintReadWrite, meta = (AllowPrivateAccess = "true"))
	float FireRate;

	UPROPERTY(EditAnywhere, BluePrintReadWrite, meta = (AllowPrivateAccess = "true"))
	float Range;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
