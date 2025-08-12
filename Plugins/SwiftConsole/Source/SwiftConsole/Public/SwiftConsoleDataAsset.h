// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "SwiftConsoleDataAsset.generated.h"


USTRUCT(BlueprintType)
struct FConsoleCommandSet
{
	GENERATED_BODY()
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	TArray<FString> CommandsToEnable;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, meta=(
		ToolTip = "stat none does not undo all commands, place undo commands for enabled commands here"))
	TArray<FString> UndoCommandsToEnable;
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	bool EnablePersistentCommands = true;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, meta=(EditCondition="EnablePersistentCommands", EditConditionHides))
	TArray<FString> PersistentCommandsToDisable;
};


UCLASS(Blueprintable)
class SWIFTCONSOLE_API USwiftConsoleDataAsset : public UDataAsset
{
	GENERATED_BODY()


public:
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	FName Group;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	FString Tooltip;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	TArray<FString> PersistentCommands;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	TArray<FConsoleCommandSet> ConsoleCommandSets;

	// helper
	bool GetCommandAt(int32 Index, FString& OutCommand) const;
	
	// broadcasting
	FSimpleMulticastDelegate DataUpdateDelegate;
	
	UFUNCTION(CallInEditor)
	void OnDataUpdated() const;
};
