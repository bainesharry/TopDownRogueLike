// Fill out your copyright notice in the Description page of Project Settings.


#include "TopDownRogueLikeSpawnActor.h"

// Sets default values
ATopDownRogueLikeSpawnActor::ATopDownRogueLikeSpawnActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
	CollisionMesh = CreateDefaultSubobject<USphereComponent>(TEXT("CollisionMesh"));
	CollisionMesh->SetSphereRadius(150.0f);
	CollisionMesh->SetCollisionProfileName(TEXT("Trigger"));
	CollisionMesh->SetupAttachment(RootComponent);
	
	CollisionMesh->OnComponentBeginOverlap.AddDynamic(this, &ATopDownRogueLikeSpawnActor::BeginOverlap);
	CollisionMesh->OnComponentEndOverlap.AddDynamic(this, &ATopDownRogueLikeSpawnActor::EndOverlap);

	CanSpawn = true;
	SpawnImmediately = false;
}

// Called when the game starts or when spawned
void ATopDownRogueLikeSpawnActor::BeginPlay()
{
	Super::BeginPlay();




	//Gets a reference to the Game mode
	GameModeRef = Cast<ATopDownRogueLikeGameMode>(GetWorld()->GetAuthGameMode());
	if (SpawnImmediately == true)
	{
		SpawnEnemy();
	}
	//Sets a Looping Timer to spawn an enemy after a set time.
	GetWorldTimerManager().SetTimer(TimerHandler_SpawnInterval, this, &ATopDownRogueLikeSpawnActor::SpawnEnemy, FMath::RandRange(MinRandomTime, MaxRandomTime), true);
}

// Called every frame
void ATopDownRogueLikeSpawnActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ATopDownRogueLikeSpawnActor::SpawnEnemy()
{
	if (CanSpawn)
	{
		SpawnedEnemy = GetWorld()->SpawnActor<ATopDownEnemyCharacter>(EnemySpawnRef, this->GetActorLocation(), FRotator::ZeroRotator, SpawnParams);
		if (SpawnedEnemy)
		{
			SpawnedEnemy->UpgradeAllStats(GameModeRef->Difficulty);
			//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::Printf(TEXT("Enemy max health is %f"), SpawnedEnemy->GetMaxHP()));
		}
	}
}

void ATopDownRogueLikeSpawnActor::BeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
	UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep,
	const FHitResult& SweepResult)
{
	if ((OtherActor && (OtherActor != this) && OtherComp) && (CanSpawn == true))
	{
		CanSpawn = false;
		//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Overlap Begin"));
	}
}

void ATopDownRogueLikeSpawnActor::EndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
	UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	if ((OtherActor && (OtherActor != this) && OtherComp) && (CanSpawn == false))
	{
		CanSpawn = true;
		//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Overlap End"));
	}
}

