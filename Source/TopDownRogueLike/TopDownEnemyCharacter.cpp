// Fill out your copyright notice in the Description page of Project Settings.


#include "TopDownEnemyCharacter.h"
#include "TopDownRogueLikePlayerController.h"

ATopDownEnemyCharacter::ATopDownEnemyCharacter()
{
	canFire = false;
	//Atops enemies from spawning and immediately attacking the player.
}


void ATopDownEnemyCharacter::BeginPlay()
{
	Super::BeginPlay();
	//Gets references to player and their utilised controller.
	AiControllerRef = (this->GetController<AAIController>());	
	PlayerControllerRef = (ATopDownRogueLikePlayerController*)GetWorld()->GetFirstPlayerController();
	PlayerCharacterRef = PlayerControllerRef->GetCharacter();
	TickUpTimeSinceLastShot();
}

void ATopDownEnemyCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	//Checks to see whether the player is in range, and if so starts shooting.
	if (FVector::Dist(this->GetActorLocation(), PlayerCharacterRef->GetActorLocation()) < Range)
	{
		StartShooting();
	}
	else if(isShooting)
	{
		//If the player moves out of range, stops shooting.
		StopShooting();
	}
	

}

void ATopDownEnemyCharacter::Die()
{
	Destroy();
	if (GameModeRef)
	{
		GameModeRef->IncreaseScore(ScoreYield);
	}
}

void ATopDownEnemyCharacter::DamageTest()
{
	StartShooting();
}

void ATopDownEnemyCharacter::PreShootPrep()
{
	//Preshootprep gets the character to face towards where they shoot.
	FVector HitLocation;
	FVector ActorLocation;
	//Picks a random area around the player to simulate inaccuracy
	float RandomX = FMath::RandRange(ShootingMargainOfError * -1.0f, ShootingMargainOfError);
	float RandomY = FMath::RandRange(ShootingMargainOfError * -1.0f, ShootingMargainOfError);
	HitLocation = PlayerCharacterRef->GetActorLocation();
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

void ATopDownEnemyCharacter::UpgradeAllStats(int multiplier)
{
	ATopDownRogueLikeCharacter::UpgradeAllStats(multiplier);
	ScoreYield += (ScoreYieldUpGradeFactor * multiplier);
	//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::Printf(TEXT("Enemy score yield is %f"), ScoreYield));
}
//void ATopDownEnemyCharacter::MoveToPlayer()
//{
//	if (AiControllerRef)
//	{
//		ATopDownRogueLikePlayerController* PlayerController = (ATopDownRogueLikePlayerController*)GetWorld()->GetFirstPlayerController();
//		ACharacter* PlayerCharacterRef = PlayerController->GetCharacter();
//		AiControllerRef->MoveToActor(PlayerCharacterRef);
//	}
//}

//void ATopDownEnemyCharacter::StartShooting()
//{
//	//Checks to see whether the player hasn't clicked to shoot too recently.
//	if (canFire)
//	{
//
//		//Calls the code to prepare for shooting, which is then sent to parent shoot function.
//		PreShootPrep();
//
//		//Calls the shootpreparation function on a timer dependent on the guns fire rate until player stops shooting. Allows for automatic fire.
//		GetWorldTimerManager().SetTimer(TimerHandle_Refire, this, &ATopDownEnemyCharacter::PreShootPrep, (1.0f / FireRate), true);
//
//		//Sets the player to be shooting.
//		isShooting = true;
//	}
//}
//
//void ATopDownEnemyCharacter::StopShooting()
//{
//	if (isShooting == true)
//	{
//		//Clears the timer top stop automatic fire
//		GetWorldTimerManager().ClearTimer(TimerHandle_Refire);
//		//Classes the player as no longer shooting.
//		isShooting = false;
//		canFire = true;
//		//Starts countint the time taken since last shot, to see whether player is allowed to shoot again.
//	}
//}



