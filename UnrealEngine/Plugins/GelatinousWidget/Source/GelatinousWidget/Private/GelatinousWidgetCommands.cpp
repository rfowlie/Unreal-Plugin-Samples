// Copyright Epic Games, Inc. All Rights Reserved.

#include "GelatinousWidgetCommands.h"

#define LOCTEXT_NAMESPACE "FGelatinousWidgetModule"

void FGelatinousWidgetCommands::RegisterCommands()
{
	UI_COMMAND(PluginAction, "GelatinousWidget", "Release the Gelatinous Widget!!", EUserInterfaceActionType::Button, FInputChord());
}

#undef LOCTEXT_NAMESPACE
