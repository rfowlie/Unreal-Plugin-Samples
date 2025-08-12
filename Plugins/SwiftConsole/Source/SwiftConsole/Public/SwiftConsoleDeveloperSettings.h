// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "InputCoreTypes.h"
#include "SwiftConsoleWidget.h"

#include "SwiftConsoleDeveloperSettings.generated.h"


struct FKey;

/**
 * 
 */
// UCLASS(Config=Game, defaultconfig, meta = (DisplayName="Swift Console Settings"))
UCLASS(Config = SwiftConsoleSettings)
class SWIFTCONSOLE_API USwiftConsoleDeveloperSettings : public UDeveloperSettings
{
	GENERATED_BODY()

public:
	USwiftConsoleDeveloperSettings()
	{
		CategoryName = "Plugins";
		SectionName = "Swift Console Config";
		
		Clear = EKeys::NumPadZero;
		RowNext = EKeys::Add;
		RowPrevious = EKeys::Subtract;
		// GroupNext = EKeys::Multiply;
		// GroupPrevious = EKeys::Divide;
	};
	
	UPROPERTY(EditAnywhere, Config)
	FKey Clear;

	// UPROPERTY(EditAnywhere, Config)
	// FKey GroupNext;
	//
	// UPROPERTY(EditAnywhere, Config)
	// FKey GroupPrevious;
	
	UPROPERTY(EditAnywhere, Config)
	FKey RowNext;

	UPROPERTY(EditAnywhere, Config)
	FKey RowPrevious;

	UPROPERTY(EditAnywhere, Config)
	TArray<FKey> SwiftConsoleKeys;

	UPROPERTY(EditAnywhere, Config)
	bool bEnableWidget = true;
	
	UPROPERTY(EditAnywhere, Config)
	TSubclassOf<USwiftConsoleWidget> DisplayWidget;
	
	UFUNCTION()
	bool IsValidKey(const FKey& Key) const
	{
		// return (Key != Clear) && (Key != RowNext) && (Key != RowPrevious) && (Key != GroupNext) && (Key != GroupPrevious);
		return (Key != Clear) && (Key != RowNext) && (Key != RowPrevious);
	}
};