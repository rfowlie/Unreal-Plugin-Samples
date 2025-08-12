// Fill out your copyright notice in the Description page of Project Settings.


#include "StriderEditorSubsystem.h"

#include "ContentBrowserModule.h"
#include "Editor.h"
#include "UObject/Object.h"
#include "Engine/Blueprint.h"
#include "IContentBrowserSingleton.h"
#include "AssetRegistry/AssetRegistryModule.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/SkinnedMeshComponent.h"
// #include "EntitySystem/MovieSceneEntitySystemRunner.h"
// #include "Kismet/KismetSystemLibrary.h"
// #include "Subsystems/EditorActorSubsystem.h"


TArray<UClass*> UStriderEditorSubsystem::GetClassesImplementingInterface(const UClass* InterfaceClass)
{
	TArray<UClass*> Output;
	if (!InterfaceClass || !InterfaceClass->IsChildOf(UInterface::StaticClass()))
	{
		// Invalid interface class
		return Output;
	}

	// Get the asset registry module
	const FAssetRegistryModule& AssetRegistryModule = FModuleManager::LoadModuleChecked<FAssetRegistryModule>("AssetRegistry");

	// Create a filter to find assets implementing the specified interface
	FARFilter InterfaceFilter;
	// InterfaceFilter.ClassNames.Add(InterfaceClass->GetFName());
	InterfaceFilter.ClassPaths.Add(InterfaceClass->GetClassPathName());
	InterfaceFilter.bRecursiveClasses = true;

	// Create an array to store the matching assets
	TArray<FAssetData> AssetData;
	AssetRegistryModule.Get().GetAssets(InterfaceFilter, AssetData);
	
	// Iterate through the asset data and add matching objects to the result array
	for (const FAssetData& Data : AssetData)
	{
		Output.Add(Data.GetClass());
	}

	return Output;
}

TArray<UActorComponent*> UStriderEditorSubsystem::FilterStaticMesh(
	TArray<UActorComponent*> Components, const TArray<UStaticMesh*> FilterMeshes,
	const bool FilterContains, const bool RemoveNonMatchingComponents)
{
	TArray<UActorComponent*> Output;
	if (Components.IsEmpty() || FilterMeshes.IsEmpty())
	{
		return Output;
	}

	const bool NonFilterMeshes = FilterMeshes.IsEmpty();
	
	for (auto Component : Components)
	{
		if (const UStaticMeshComponent* CastComponent = Cast<UStaticMeshComponent>(Component);
			IsValid(CastComponent))
		{
			if (NonFilterMeshes)
			{
				Output.Add(Component);
			}
			else
			{
				const bool Contains = FilterMeshes.Contains(CastComponent->GetStaticMesh());
				if ((Contains && FilterContains) || (!Contains && !FilterContains))
				{
					Output.Add(Component);
				}
			}			
		}
		else if (!RemoveNonMatchingComponents)
		{
			Output.Add(Component);
		}
	}
	
	return Output;
}

TArray<UActorComponent*> UStriderEditorSubsystem::FilterSkeletalMesh(TArray<UActorComponent*> Components,
	TArray<USkeletalMesh*> FilterMeshes, const bool FilterContains, const bool RemoveNonMatchingComponents)
{	
	TArray<UActorComponent*> Output;
	if (Components.IsEmpty())
	{
		return Output;
	}
	
	const bool NonFilterMeshes = FilterMeshes.IsEmpty();
	
	for (auto Component : Components)
	{
		if (const USkeletalMeshComponent* CastComponent = Cast<USkeletalMeshComponent>(Component); IsValid(CastComponent))
		{
			if (const bool Contains = FilterMeshes.Contains(CastComponent->GetSkeletalMeshAsset());
				NonFilterMeshes || (Contains && FilterContains) || (!Contains && !FilterContains))
			{
				Output.Add(Component);
			}
		}
		else if (!RemoveNonMatchingComponents)
		{
			Output.Add(Component);
		}
	}
	
	return Output;	
}

bool UStriderEditorSubsystem::FilterCollision(TArray<FHitResult> OutHits, TArray<TSubclassOf<AActor>> CollisionClasses)
{
	for (auto OutHit : OutHits)
	{
		for (const auto Class : CollisionClasses)
		{
			if (OutHit.GetActor()->IsA(Class))
			{
				return true;
			}
		}
	}

	return false;
}

// TODO: create a filter for virtual textures, and a filter for just general texture searching
TArray<UActorComponent*> UStriderEditorSubsystem::FilterVirtualTextures(TArray<UActorComponent*> Components)
{
	TArray<UActorComponent*> Output;
	if (Components.IsEmpty())
	{
		return Output;
	}
	
	for (const auto Component : Components)
	{
		if (UMeshComponent* MeshComponent = Cast<UMeshComponent>(Component))
		{
			for (const auto Material : MeshComponent->GetMaterials())
			{
				FHashedMaterialParameterInfo ParameterInfo;
				URuntimeVirtualTexture* OutValue = nullptr;
				// Material->GetRuntimeVirtualTextureParameterValue(ParameterInfo, OutValue);
				if (Material->GetRuntimeVirtualTextureParameterValue(ParameterInfo, OutValue))
				{
					Output.Add(Component);
					// break;
				}

				TArray<UTexture*> Textures;
				Material->GetUsedTextures(Textures, EMaterialQualityLevel::Epic, true, ERHIFeatureLevel::SM6, true);
				for (const UTexture* Texture : Textures)
				{
					ITargetPlatformManagerModule* TPM = GetTargetPlatformManager();
					const ITargetPlatform* TargetPlatform = TPM->GetRunningTargetPlatform();
					TArray<TArray<FName>> OutFormats;
					Texture->GetPlatformTextureFormatNamesWithPrefix(TargetPlatform, OutFormats);

					
					auto UsesVT = Texture->VirtualTextureStreaming;
					TEnumAsByte<TextureCompressionSettings> CompressionType = Texture->CompressionSettings;
					auto PixelFormatEnum = Texture->GetPixelFormatEnum();
					// TEnumAsByte<EPixelFormat> Format = (EPixelFormat)PixelFormatEnum->GetValueByName();
					UClass* Class = PixelFormatEnum->GetClass();
					UE_LOG(LogTemp, Warning, TEXT("%s, %d, %d, %p"),
					       *Class->GetDefaultObjectName().ToString(), UsesVT, CompressionType.GetValue(), PixelFormatEnum);
				}
			}
		}
	}
	
	return Output;
}

void UStriderEditorSubsystem::SyncBrowserToObjects(TArray<UObject*> InObjectsToSync, bool bFocusContentBrowser) const
{
	const FContentBrowserModule& ContentBrowserModule = FModuleManager::Get().LoadModuleChecked<FContentBrowserModule>("ContentBrowser");
	ContentBrowserModule.Get().SyncBrowserToAssets(InObjectsToSync, false, bFocusContentBrowser);
}

void UStriderEditorSubsystem::SyncBrowserToClass(const UClass* Class) const
{
	if (Class != nullptr && Class->ClassGeneratedBy != nullptr)
	{
		UBlueprint* Blueprint = Cast<UBlueprint>(Class->ClassGeneratedBy);
		if (ensure(Blueprint != NULL))
		{
			TArray<UObject*> SyncObjects;
			SyncObjects.Add(Blueprint);
			GEditor->SyncBrowserToObjects(SyncObjects);
		}
	}
}

void UStriderEditorSubsystem::MoveViewportCamerasToActors(TArray<AActor*> Actors, bool bActiveViewportOnly) const
{
	GEditor->MoveViewportCamerasToActor(Actors, bActiveViewportOnly);
}
