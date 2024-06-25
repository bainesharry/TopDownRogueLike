// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "TopDownEnemyCharacter.h"
#include "GameFramework/Actor.h"
#include "Components/SphereComponent.h"

#include "TopDownRogueLikeSpawnActor.generated.h"

UCLASS()
class TOPDOWNROGUELIKE_API ATopDownRogueLikeSpawnActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ATopDownRogueLikeSpawnActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UFUNCTION()
	void BeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
		UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep,
		const FHitResult& SweepResult);

	UFUNCTION()
	void EndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
		UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);


	UPROPERTY(EditAnywhere, BluePrintReadWrite, meta = (AllowPrivateAccess = "true"))
	TSubclassOf<ATopDownEnemyCharacter> EnemySpawnRef;
	
	ATopDownEnemyCharacter* SpawnedEnemy;
	FActorSpawnParameters SpawnParams;
	ATopDownRogueLikeGameMode* GameModeRef;
	
	bool CanSpawn;

	UPROPERTY(EditAnywhere, BluePrintReadWrite, meta = (AllowPrivateAccess = "true"))
	float MaxRandomTime;

	UPROPERTY(EditAnywhere, BluePrintReadWrite, meta = (AllowPrivateAccess = "true"))
	float MinRandomTime;

	UPROPERTY(EditAnywhere, BluePrintReadWrite, meta = (AllowPrivateAccess = "true"))
	bool SpawnImmediately;

	void SpawnEnemy();

	FTimerHandle TimerHandler_SpawnInterval;

private:

	UPROPERTY(EditDefaultsOnly, Category = "CollisionMesh")
	class USphereComponent* CollisionMesh;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

		UPROPERTY(EditDefaultsOnly, Category = "Mesh")
	class UStaticMeshComponent* CharMesh;

};
