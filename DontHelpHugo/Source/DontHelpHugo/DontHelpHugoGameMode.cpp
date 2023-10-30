// Copyright Epic Games, Inc. All Rights Reserved.

#include "DontHelpHugoGameMode.h"
#include "DontHelpHugoCharacter.h"
#include "UObject/ConstructorHelpers.h"

ADontHelpHugoGameMode::ADontHelpHugoGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
