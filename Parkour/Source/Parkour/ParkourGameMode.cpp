// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "ParkourGameMode.h"
#include "ParkourHUD.h"
#include "ParkourCharacter.h"
#include "UObject/ConstructorHelpers.h"

AParkourGameMode::AParkourGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AParkourHUD::StaticClass();
}
