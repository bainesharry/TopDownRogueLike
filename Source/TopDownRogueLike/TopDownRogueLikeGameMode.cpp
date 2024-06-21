// Copyright Epic Games, Inc. All Rights Reserved.

#include "TopDownRogueLikeGameMode.h"
#include "TopDownRogueLikePlayerController.h"
#include "TopDownRogueLikeCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATopDownRogueLikeGameMode::ATopDownRogueLikeGameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = ATopDownRogueLikePlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDown/Blueprints/BP_TopDownPlayerCharacter"));
	if (PlayerPawnBPClass.Class != nullptr)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}

	// set default controller to our Blueprinted controller
	static ConstructorHelpers::FClassFinder<APlayerController> PlayerControllerBPClass(TEXT("/Game/TopDown/Blueprints/BP_TopDownPlayerController"));
	if(PlayerControllerBPClass.Class != NULL)
	{
		PlayerControllerClass = PlayerControllerBPClass.Class;
	}


}