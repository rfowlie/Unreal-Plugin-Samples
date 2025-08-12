// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "InputCoreTypes.h"

#include "SwiftConsoleProjectSettings.generated.h"


/**
 * 
 */
// UCLASS(config = EditorPerProjectUserSettings)
UCLASS(config = SwiftConsoleSettings)
class SWIFTCONSOLE_API USwiftConsoleProjectSettings : public UObject
{
	GENERATED_BODY()	

public:
	USwiftConsoleProjectSettings()
	{
		Clear = EKeys::NumPadZero;
	}

	UPROPERTY(EditAnywhere, Config, Category = Workflow)
	FKey Clear;

	UPROPERTY(EditAnywhere, Config, Category = Workflow)
	FKey GroupNext;
	
	UPROPERTY(EditAnywhere, Config, Category = Workflow)
	FKey GroupPrevious;
	
	UPROPERTY(EditAnywhere, Config, Category = Workflow)
	FKey RowNext;

	UPROPERTY(EditAnywhere, Config, Category = Workflow)
	FKey RowPrevious;

	UPROPERTY(EditAnywhere, Config, Category = Workflow)
	TArray<FKey> SwiftConsoleKeys;

	// UFUNCTION()
	// bool IsValidKey(const FKey& Key) const;

	// widget
	UPROPERTY(EditAnywhere, Config, Category = Workflow)
	TSubclassOf<UUserWidget> DisplayWidget;
};