// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Framework/Commands/Commands.h"
#include "GelatinousWidgetStyle.h"

class FGelatinousWidgetCommands : public TCommands<FGelatinousWidgetCommands>
{
public:

	FGelatinousWidgetCommands()
		: TCommands<FGelatinousWidgetCommands>(TEXT("GelatinousWidget"), NSLOCTEXT("Contexts", "GelatinousWidget", "GelatinousWidget Plugin"), NAME_None, FGelatinousWidgetStyle::GetStyleSetName())
	{
	}

	// TCommands<> interface
	virtual void RegisterCommands() override;

public:
	TSharedPtr< FUICommandInfo > PluginAction;
};
