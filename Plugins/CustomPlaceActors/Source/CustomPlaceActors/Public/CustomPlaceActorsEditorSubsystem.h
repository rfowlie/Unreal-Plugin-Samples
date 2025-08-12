// Copyright 2024 Robert Fowlie all rights reserved

#pragma once

#include "CoreMinimal.h"
#include "EditorSubsystem.h"
#include "CustomPlaceActorsEditorSubsystem.generated.h"

/**
 *
 */



UCLASS()
class CUSTOMPLACEACTORS_API UCustomPlaceActorsEditorSubsystem : public UEditorSubsystem
{
	GENERATED_BODY()

	virtual void Initialize(FSubsystemCollectionBase& Collection) override;

	IConsoleCommand* RefreshPlaceActors;
	FDelegateHandle Register;

	const int32 SortOrderStart = 9000;
	const FString CategoryPrefix = "CustomPlaceActors_";
	const FString Tag = "Tag";

	UPROPERTY()
	TArray<FName> RegisteredCategories;

	UPROPERTY()
	TArray<FAssetData> AssetDataArray;
	
	UFUNCTION()
	void RegisterAssets();
	UFUNCTION()
	void UnRegisterAssets();

	UFUNCTION()
	void OnCustomActorAssetDeleted(const TArray<UClass*>& DeletedAssets);
	
public:
	UFUNCTION(BlueprintCallable)
	void ResetCategories();
};
