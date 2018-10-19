// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "AoClientGameMode.h"
#include "AoClientCharacter.h"

AAoClientGameMode::AAoClientGameMode()
{
	// Set default pawn class to our character
	DefaultPawnClass = AAoClientCharacter::StaticClass();	
}
