// Copyright Epic Games, Inc. All Rights Reserved.

#include "MantleSystemTestGameMode.h"
#include "MantleSystemTestCharacter.h"
#include "UObject/ConstructorHelpers.h"

AMantleSystemTestGameMode::AMantleSystemTestGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
