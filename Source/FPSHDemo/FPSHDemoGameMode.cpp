// Copyright Epic Games, Inc. All Rights Reserved.

#include "FPSHDemoGameMode.h"
#include "FPSHDemoHUD.h"
#include "FPSHDemoCharacter.h"
#include "UObject/ConstructorHelpers.h"

AFPSHDemoGameMode::AFPSHDemoGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AFPSHDemoHUD::StaticClass();
}
