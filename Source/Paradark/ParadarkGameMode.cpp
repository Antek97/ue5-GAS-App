// Copyright Epic Games, Inc. All Rights Reserved.

#include "ParadarkGameMode.h"
#include "ParadarkCharacter.h"
#include "UObject/ConstructorHelpers.h"

AParadarkGameMode::AParadarkGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
