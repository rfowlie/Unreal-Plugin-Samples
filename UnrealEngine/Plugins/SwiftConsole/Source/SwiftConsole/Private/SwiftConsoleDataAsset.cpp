// Fill out your copyright notice in the Description page of Project Settings.


#include "SwiftConsoleDataAsset.h"

bool USwiftConsoleDataAsset::GetCommandAt(int32 Index, FString& OutCommand) const
{
	if (!ConsoleCommandSets.IsValidIndex(Index)) { return false; }
	for (FString Command : ConsoleCommandSets[Index].CommandsToEnable)
	{
		OutCommand.Append(Command);
	}

	return true;
}

void USwiftConsoleDataAsset::OnDataUpdated() const
{
	if (DataUpdateDelegate.IsBound())
	{
		DataUpdateDelegate.Broadcast();
	}
}
