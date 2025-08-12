// Copyright 2023 Beamdog

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GelatinousWidgetBFL.generated.h"

/**
 *
 */
UCLASS()
class GELATINOUSWIDGET_API UGelatinousWidgetBFL : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	// save a TMap<FString, FString> to file
	UFUNCTION(BlueprintCallable, Category = "Gelatinous Widget Helpers")
	static void WriteStringMapToJson(const FString& FilePath, const TMap<FString, FString>& MapData);

	UFUNCTION(BlueprintCallable, Category = "Gelatinous Widget Helpers")
	static bool ReadStringMapFromJson(const FString& FilePath, TMap<FString, FString>& OutJsonMap);
};
