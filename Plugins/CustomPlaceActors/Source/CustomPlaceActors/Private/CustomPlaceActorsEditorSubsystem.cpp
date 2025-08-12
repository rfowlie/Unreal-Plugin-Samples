// Copyright 2024 Robert Fowlie all rights reserved

#include "CustomPlaceActorsEditorSubsystem.h"

#include "CustomPlaceActorsDataAsset.h"
#include "AssetRegistry/AssetRegistryModule.h"
#include "IPlacementModeModule.h"


void UCustomPlaceActorsEditorSubsystem::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);

	FEditorDelegates::OnEditorInitialized.AddUFunction(this, "RegisterAssets");
	FEditorDelegates::OnAssetsDeleted.AddUFunction(this, "OnCustomActorAssetDeleted");	
}

void UCustomPlaceActorsEditorSubsystem::RegisterAssets()
{
	UE_LOG(LogTemp, Log, TEXT("Custom Place Actors Editor Subsystem - Register Assets"))
	
	// get asset registry module
	const FAssetRegistryModule& AssetRegistryModule =
		FModuleManager::LoadModuleChecked<FAssetRegistryModule>("AssetRegistry");

	// create filter
	FARFilter Filter;
	Filter.ClassPaths.Add(UCustomPlaceActorsDataAsset::StaticClass()->GetClassPathName());

	// find all asset data in project
	TArray<FAssetData> TempArray;
	AssetRegistryModule.Get().GetAssets(Filter, TempArray);
	AssetDataArray = TempArray;

	// TODO: data assets could share categories, so create a map and ensure that there are not duplicate categories
	RegisteredCategories.Empty();
	TMap<FName, TArray<UObject*>> CategoryMap;
	TMap<FName, int32> CategorySortMap;
	for (auto AssetData : AssetDataArray)
	{
		if (const UCustomPlaceActorsDataAsset* DataAsset = Cast<UCustomPlaceActorsDataAsset>(AssetData.GetAsset()))
		{
			// do not create categories for empty categories
			if (DataAsset->Items.IsEmpty()) { continue; }
			
			// FName Category = DataAsset->Category.IsNone() ? TEXT("None") : DataAsset->Category;
			FName Category = FName(DataAsset->GetName());
			if (!CategoryMap.Contains(Category))
			{
				CategoryMap.Add(Category, TArray<UObject*>());
			}
			
			for (UObject* Item : DataAsset->Items)
			{
				CategoryMap[Category].AddUnique(Item);
			}

			if (!CategorySortMap.Contains(Category))
			{
				CategorySortMap.Add(Category, 9999);
			}

			if (DataAsset->SortOrder < CategorySortMap[Category])
			{
				CategorySortMap[Category] = DataAsset->SortOrder;
			}			
		}
	}

	// save calculated categories for unregistration later
	CategoryMap.GetKeys(RegisteredCategories);

	IPlacementModeModule& PlacementModeModule = IPlacementModeModule::Get();
	for (auto Pair : CategoryMap)
	{
		FString CategoryAsString = Pair.Key.ToString();
		// NOTE: the inHandle when registering a category becomes the category name to add items
		
		PlacementModeModule.RegisterPlacementCategory(
			FPlacementCategoryInfo(
				FText::FromName(Pair.Key),
				FName(CategoryPrefix + CategoryAsString),
				Tag + CategoryAsString,
				SortOrderStart + CategorySortMap[Pair.Key]));

		int32 SortOrder = 0;
		for (const UObject* Object : Pair.Value)
		{
			if (FAssetData TempData = FAssetData(Object, true); TempData.IsValid())
			{
				PlacementModeModule.RegisterPlaceableItem(
					FName(CategoryPrefix + CategoryAsString),
					MakeShareable(new FPlaceableItem(nullptr, FAssetData(Object, true), SortOrder += 10)));
			}
		}
	}
}

void UCustomPlaceActorsEditorSubsystem::UnRegisterAssets()
{
	IPlacementModeModule& PlacementModeModule = IPlacementModeModule::Get();
	for (auto Category : RegisteredCategories)
	{
		PlacementModeModule.UnregisterPlacementCategory(FName(CategoryPrefix + Category.ToString()));		
	}

	RegisteredCategories.Empty();
}

void UCustomPlaceActorsEditorSubsystem::ResetCategories()
{
	UnRegisterAssets();
	RegisterAssets();
}

void UCustomPlaceActorsEditorSubsystem::OnCustomActorAssetDeleted(const TArray<UClass*>& DeletedAssets)
{
	UE_LOG(LogTemp, Error, TEXT("Asset Deleted"));
	if (DeletedAssets.Contains(UCustomPlaceActorsDataAsset::StaticClass()))
	{
		ResetCategories();
	}
}
