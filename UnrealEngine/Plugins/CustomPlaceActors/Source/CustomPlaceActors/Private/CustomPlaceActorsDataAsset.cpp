// Copyright 2024 Robert Fowlie all rights reserved

#include "CustomPlaceActorsDataAsset.h"

#include "Editor.h"
#include "UObject/ObjectSaveContext.h"
#include "CustomPlaceActorsEditorSubsystem.h"
#include "Framework/Notifications/NotificationManager.h"
#include "Widgets/Notifications/SNotificationList.h"


void UCustomPlaceActorsDataAsset::PreSave(FObjectPreSaveContext SaveContext)
{
	TArray<UObject*> NoDuplicatesArray;
	for (UObject* Item : Items)
	{
		if (IsValid(Item) && Item->GetClass() != ULevel::StaticClass())
		{
			NoDuplicatesArray.AddUnique(Item);
		}
	}

	Items = NoDuplicatesArray;
	
	Super::PreSave(SaveContext);
	
	ResetCategories();
}

void UCustomPlaceActorsDataAsset::PostEditChangeChainProperty(FPropertyChangedChainEvent& PropertyChangedEvent)
{
	Super::PostEditChangeChainProperty(PropertyChangedEvent);

	bool bEdited = false;
	for (int32 Index = 0; Index < Items.Num(); Index++)
	{
		if (IsValid(Items[Index]) && Items[Index]->GetClass() == UWorld::StaticClass())
		{
			bEdited = true;
			Items[Index] = nullptr;
		}
	}

	if (bEdited)
	{
		FNotificationInfo NotificationInfo(FText::FromString("Cannot Add Levels To Place Actors"));
		NotificationInfo.bUseLargeFont = true;
		NotificationInfo.FadeOutDuration = 7.f;

		FSlateNotificationManager::Get().AddNotification(NotificationInfo);
	}
}

void UCustomPlaceActorsDataAsset::ResetCategories()
{
	if (GEditor)
	{
		GEditor->GetEditorSubsystem<UCustomPlaceActorsEditorSubsystem>()->ResetCategories();
	}
}

void UCustomPlaceActorsDataAsset::AddItems(TArray<FAssetData> AssetData)
{
	for (const FAssetData& Data : AssetData)
	{
		if (Data.IsValid() && Data.GetClass() != ULevel::StaticClass())
		{
			Items.AddUnique(Data.GetAsset());
		}
	}

	ResetCategories();
}

void UCustomPlaceActorsDataAsset::RemoveItems(TArray<FAssetData> AssetData)
{
	for (const FAssetData& Data : AssetData)
	{
		if (Data.IsValid())
		{
			Items.Remove(Data.GetAsset());
		}
	}

	ResetCategories();
}