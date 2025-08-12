// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "SwiftConsoleWidget.generated.h"

class USwiftConsoleDataAsset;

/**
 * 
 */
UCLASS()
class SWIFTCONSOLE_API USwiftConsoleWidget : public UUserWidget
{
	GENERATED_BODY()
	
	virtual void NativeConstruct() override;

public:
	UFUNCTION(BlueprintImplementableEvent)
	void UpdateCommandList(const TMap<FKey, FString>& InCommandList);
	
protected:
	// UFUNCTION(BlueprintImplementableEvent)
	// void ReceiveSwiftConsoleUpdate(const TArray<FString>& OutCommands);
	
	UFUNCTION(BlueprintImplementableEvent)
	void ReceiveSwiftConsoleUpdate(const USwiftConsoleDataAsset* ActiveDataAsset);
};
