// Copyright 2024 Robert Fowlie all rights reserved

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "CustomPlaceActorsDataAsset.generated.h"

/**
 *
 */

UCLASS(BlueprintType)
class CUSTOMPLACEACTORS_API UCustomPlaceActorsDataAsset : public UDataAsset
{
	GENERATED_BODY()

	virtual void PreSave(FObjectPreSaveContext SaveContext) override;
	virtual void PostEditChangeChainProperty(FPropertyChangedChainEvent& PropertyChangedEvent) override;

protected:
	UFUNCTION()
	static void ResetCategories();
	
public:
	// UPROPERTY(EditAnywhere, BlueprintReadOnly)
	// FName Category;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta = (ToolTip = "lower numbers will be ordered first"))
	int32 SortOrder = 0;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TArray<UObject*> Items;

	UFUNCTION(BlueprintCallable)
	void AddItems(TArray<FAssetData> AssetData);

	UFUNCTION(BlueprintCallable)
	void RemoveItems(TArray<FAssetData> AssetData);
};
