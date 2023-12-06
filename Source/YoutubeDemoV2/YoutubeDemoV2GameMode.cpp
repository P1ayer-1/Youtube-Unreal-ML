// Copyright Epic Games, Inc. All Rights Reserved.

#include "YoutubeDemoV2GameMode.h"
#include "YoutubeDemoV2Character.h"
#include "UObject/ConstructorHelpers.h"

AYoutubeDemoV2GameMode::AYoutubeDemoV2GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
