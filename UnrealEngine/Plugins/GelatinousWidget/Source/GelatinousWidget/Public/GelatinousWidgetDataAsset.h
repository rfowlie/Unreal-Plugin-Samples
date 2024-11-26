// Copyright 2023 Beamdog

#pragma once

#include "CoreMinimal.h"
#include "EditorUtilityWidget.h"
#include "Engine/DataAsset.h"
#include "GelatinousWidgetDataAsset.generated.h"

/**
 * 
 */

class UEditorUtilityWidget;

USTRUCT(BlueprintType)
struct FAbsorbedWidgetInfo
{
	GENERATED_BODY()

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	FText DisplayName;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	TArray<FName> SubGroups;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	FString DocumentationURL;	
};

// USTRUCT(BlueprintType)
// struct FAbsorbedWidgetContainer
// {
// 	GENERATED_BODY()
//
// 	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
// 	UEditorUtilityWidget* EditorUtilityWidget = nullptr;
//
// 	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
// 	FAbsorbedWidgetInfo WidgetInfo;
// };

UCLASS(Blueprintable)  
class GELATINOUSWIDGET_API UGelatinousWidgetDataAsset : public UDataAsset
{
	GENERATED_BODY()

public:
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	TMap<TSubclassOf<UEditorUtilityWidget>, FAbsorbedWidgetInfo> WidgetMap;
};
