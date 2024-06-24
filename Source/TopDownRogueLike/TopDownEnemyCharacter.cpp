// Fill out your copyright notice in the Description page of Project Settings.


#include "TopDownEnemyCharacter.h"
#include "TopDownRogueLikePlayerController.h"

ATopDownEnemyCharacter::ATopDownEnemyCharacter()
{
}


void ATopDownEnemyCharacter::BeginPlay()
{
	Super::BeginPlay();
	StartShooting();
}




void ATopDownEnemyCharacter::Die()
{
	GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, TEXT("I should be dead"));
	Destroy();
}

void ATopDownEnemyCharacter::DamageTest()
{
	StartShooting();
}

void ATopDownEnemyCharacter::StartShooting()
{
	//Checks to see whether the player hasn't clicked to shoot too recently.
	if (canFire)
	{

		//Calls the code to prepare for shooting, which is then sent to parent shoot function.
		PreShootPrep();

		//Calls the shootpreparation function on a timer dependent on the guns fire rate until player stops shooting. Allows for automatic fire.
		GetWorldTimerManager().SetTimer(TimerHandle_Refire, this, &ATopDownEnemyCharacter::PreShootPrep, (1.0f / FireRate), true);

		//Sets the player to be shooting.
		isShooting = true;
	}

}

void ATopDownEnemyCharacter::PreShootPrep()
{
	//Preshootprep gets the player character to face towards the cursor location before they shoot.
	//Gets a reference to the player controller
	//PlayerController->DeprojectMousePositionToWorld(MouseLocation, MouseDirection);
	ATopDownRogueLikePlayerController* PlayerController = (ATopDownRogueLikePlayerController*)GetWorld()->GetFirstPlayerController();
	ACharacter* PlayerCharacterRef = PlayerController->GetCharacter();
	//Defines variables for cursor location relative to player..
	//FHitResult Hit;
	FVector HitLocation;
	FVector ActorLocation;
	float RandomX = FMath::RandRange(ShootingMargainOfError * -1.0f, ShootingMargainOfError);
	float RandomY = FMath::RandRange(ShootingMargainOfError * -1.0f, ShootingMargainOfError);
	HitLocation = PlayerCharacterRef->GetActorLocation();
	GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow,FString::Printf(TEXT("Error! Character Reference is Null %f"), RandomX));
	HitLocation.X += RandomX;
	HitLocation.Y += RandomY;
	ActorLocation = RootComponent->GetComponentLocation();

	//Sets the player to rotate to their mouse.
	FRotator rotator = FRotationMatrix::MakeFromX(HitLocation - ActorLocation).Rotator();
	rotator.Pitch = 0.0f;
	rotator.Roll = 0.0f;
	this->SetActorRotation(rotator, ETeleportType::None);
	//Calls parent shoot function, which sets linetrace.
	ATopDownRogueLikeCharacter::Shoot();
}


