// Fill out your copyright notice in the Description page of Project Settings.


#include "WeaponBase.h"
#include "Components/StaticMeshComponent.h"


// Sets default values
AWeaponBase::AWeaponBase()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	RootComponent = WeaponMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("WeaponMesh"));
	WeaponMesh->SetCollisionProfileName(TEXT("NoCollision"));
}

// Called when the game starts or when spawned
void AWeaponBase::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AWeaponBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AWeaponBase::Shoot(APawn* instigator)
{
	USceneComponent* RootComponent = instigator->GetRootComponent();
	AController* Controller = instigator->GetController();
	FVector WorldLocation = RootComponent->GetComponentLocation();
	FVector ForwardVector = RootComponent->GetForwardVector() * Range;
	FVector LineTraceEnd = WorldLocation + ForwardVector;
	FHitResult blank;

	Controller->StopMovement();
	GetWorld()->LineTraceSingleByChannel(blank, WorldLocation, LineTraceEnd, ECC_Visibility);
}
