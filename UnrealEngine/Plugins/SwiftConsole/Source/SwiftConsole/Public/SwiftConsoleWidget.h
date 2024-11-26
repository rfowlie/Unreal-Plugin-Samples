// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "SwiftConsoleWidget.generated.h"

/**
 * 
 */
UCLASS()
class SWIFTCONSOLE_API USwiftConsoleWidget : public UUserWidget
{
	GENERATED_BODY()
	
	virtual void NativeConstruct() override;

protected:
	UFUNCTION(BlueprintImplementableEvent)
	void ReceiveSwiftConsoleUpdate(const TArray<FString>& OutCommands);
};
