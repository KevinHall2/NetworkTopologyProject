// Copyright Epic Games, Inc. All Rights Reserved.

#include "NetworkTopologyGameMode.h"
#include "NetworkTopologyCharacter.h"
#include "UObject/ConstructorHelpers.h"

ANetworkTopologyGameMode::ANetworkTopologyGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
