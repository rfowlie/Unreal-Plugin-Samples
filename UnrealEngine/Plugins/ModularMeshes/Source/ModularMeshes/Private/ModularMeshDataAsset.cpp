// Copyright 2023 Beamdog

#include "ModularMeshDataAsset.h"



int32 UModularMeshDataAsset::GetRandomStaticMeshIndex() const
{
	return StaticMeshVariations.IsEmpty() ? 0 : FMath::RandRange(0, StaticMeshVariations.Num() - 1);
}

int32 UModularMeshDataAsset::GetRandomTransformIndex() const
{
	return RelativeTransformVariations.IsEmpty() ? 0 : FMath::RandRange(0, RelativeTransformVariations.Num() - 1);
}

TArray<int32> UModularMeshDataAsset::GetRandomMaterialIndex(const int32 StaticMeshVariation)
{
	TArray<int32> Output;
	if (StaticMeshVariations.IsEmpty()) { return Output; }
	FStaticMeshVariation SMV = StaticMeshVariations[StaticMeshVariation];
	for (auto Pair : SMV.MaterialSlotTagMap)
	{
		Output.Add(FMath::RandRange(0, MaterialThemes[Pair.Value].Materials.Num() - 1));
	}
	
	return Output;
}

void UModularMeshDataAsset::SetStaticMeshComponentAlt(UStaticMeshComponent* StaticMeshComponent,
	int32 StaticMeshVariationIndex, int32 RelativeTransformVariationIndex, TArray<FMaterialVariationContainer> MaterialVariationContainers)
{
	if (!IsValid(StaticMeshComponent))
	{
		return;
	}

	StaticMeshComponent->SetStaticMesh(nullptr);
	StaticMeshComponent->EmptyOverrideMaterials();

	// set static mesh
	if (!StaticMeshVariations.IsEmpty())
	{
		StaticMeshVariationIndex = FMath::Clamp(StaticMeshVariationIndex, 0, StaticMeshVariations.Num() - 1);
		FStaticMeshVariation StaticMeshVariation = StaticMeshVariations[StaticMeshVariationIndex];
		if (UStaticMesh* StaticMesh = Cast<UStaticMesh>(GetSoftObjectLoadSynchronously(StaticMeshVariation.StaticMesh)))
		{
			StaticMeshComponent->SetStaticMesh(StaticMesh);
			StaticMeshComponent->SetRelativeTransform(StaticMeshVariation.Offset);
		}
	}

	// set relative transform
	if (!RelativeTransformVariations.IsEmpty())
	{
		RelativeTransformVariationIndex =
			FMath::Clamp(RelativeTransformVariationIndex, 0, RelativeTransformVariations.Num() - 1);
		StaticMeshComponent->SetRelativeTransform(RelativeTransformVariations[RelativeTransformVariationIndex]);
	}

	// redo materials for struct change
	for (auto [Slot, Theme, Index] : MaterialVariationContainers)
	{
		// just in case something goes funky
		if (!StaticMeshVariations[StaticMeshVariationIndex].MaterialSlotTagMap.Contains(Slot))
		{
			continue;
		}
		
		if (MaterialThemes.Contains(Theme))
		{
			if (MaterialThemes[Theme].Materials.IsValidIndex(Index))
			{
				TSoftObjectPtr<UMaterialInterface> MaterialSoftObjectPtr = MaterialThemes[Theme].Materials[Index];
				UMaterialInterface* MaterialInterface = MaterialSoftObjectPtr.LoadSynchronous();
				StaticMeshComponent->SetMaterial(Slot, MaterialInterface);
			}
		}
	}

	StaticMeshComponent->MarkRenderStateDirty();
}

int32 UModularMeshDataAsset::CheckValueStaticMesh(int32 Value) const
{
	return StaticMeshVariations.Num() == 0 ? 0 : FMath::Clamp(Value, 0, StaticMeshVariations.Num() - 1);
}

int32 UModularMeshDataAsset::CheckValueRelativeTransform(int32 Value) const
{
	return RelativeTransformVariations.Num() == 0 ? 0 : FMath::Clamp(Value, 0, RelativeTransformVariations.Num() - 1);
}

TMap<FName, int32> UModularMeshDataAsset::CheckValueMaterials(TMap<FName, int32> MaterialVariationMap)
{
	TMap<FName, int32> ToChange;
	for (auto Pair : MaterialThemes)
	{
		if (!MaterialVariationMap.Contains(Pair.Key))
		{
			// add pair
			UE_LOG(LogTemp, Error, TEXT("Material Variation Map Does Not Contain Key: %s"), *Pair.Key.ToString());
			ToChange.Add(Pair.Key, 0);
		}
		else
		{
			ToChange.Add(Pair.Key,
						 FMath::Clamp(MaterialVariationMap[Pair.Key], 0, MaterialThemes[Pair.Key].Materials.Num() - 1));
		}
	}

	for (auto Pair : ToChange)
	{
		MaterialVariationMap.Add(Pair);
	}

	TMap<FName, int32> ToRemove;
	for (auto Pair : MaterialVariationMap)
	{
		if (!MaterialThemes.Contains(Pair.Key))
		{
			ToRemove.Add(Pair);
		}
	}

	for (auto Pair : ToRemove)
	{
		MaterialVariationMap.Remove(Pair.Key);
	}

	return MaterialVariationMap;
}


TArray<FMaterialVariationContainer> UModularMeshDataAsset::CheckValuesThemes(
	const int32 StaticMeshVariationIndex,
	TArray<FMaterialVariationContainer> MaterialVariationContainers) const
{
	if (!StaticMeshVariations.IsValidIndex(StaticMeshVariationIndex))
	{
		UE_LOG(LogTemp, Error, TEXT("ModularMeshDataAsset does not contain static mesh variations index: %d"),
			StaticMeshVariationIndex);
		return MaterialVariationContainers;
	}

	TArray<FMaterialVariationContainer> Output;
	TMap<int32, FMaterialVariationContainer> OutputMap = TMap<int32, FMaterialVariationContainer>();
	TArray<FName> Themes;
	StaticMeshVariations[StaticMeshVariationIndex].MaterialSlotTagMap.GenerateValueArray(Themes);
	for (auto [Slot, Theme, Index] : MaterialVariationContainers)
	{
		auto TagMap = StaticMeshVariations[StaticMeshVariationIndex].MaterialSlotTagMap;
		// if data asset does not list any values for a selected theme do not show an option
		if (MaterialThemes.Contains(Theme))
		{
			if (StaticMeshVariations[StaticMeshVariationIndex].MaterialSlotTagMap.Contains(Slot))
			{
				OutputMap.Add(
					Slot, 
					FMaterialVariationContainer {
						Slot,
				TagMap[Slot],
				FMath::Clamp(
						Index, 0, MaterialThemes[Theme].Materials.Num() - 1)
				});
			}
		}
	}

	for (const auto Pair : StaticMeshVariations[StaticMeshVariationIndex].MaterialSlotTagMap)
	{
		// if data asset does not list any values for a selected theme do not show an option
		if (MaterialThemes.Contains(Pair.Value))
		{
			if (!OutputMap.Contains(Pair.Key))
			{
				OutputMap.Add(
					Pair.Key,
					FMaterialVariationContainer {
						Pair.Key,
						Pair.Value,
						0
					}
				);
			}
		}		
	}

	OutputMap.GenerateValueArray(Output);
	return Output;
}

int32 UModularMeshDataAsset::CheckValuePreset(int32 Value) const
{
	return PresetVariations.Num() == 0 ? 0 : FMath::Clamp(Value, 0, PresetVariations.Num() - 1);
}

UStaticMesh* UModularMeshDataAsset::GetStaticMesh(int32 StaticMeshVariationIndex)
{
	UStaticMesh* OutStaticMesh = nullptr;
	if (!StaticMeshVariations.IsEmpty())
	{
		StaticMeshVariationIndex = FMath::Clamp(StaticMeshVariationIndex, 0, StaticMeshVariations.Num() - 1);
		const FStaticMeshVariation StaticMeshVariation = StaticMeshVariations[StaticMeshVariationIndex];
		if (UStaticMesh* StaticMesh = Cast<UStaticMesh>(GetSoftObjectLoadSynchronously(StaticMeshVariation.StaticMesh)))
		{
			OutStaticMesh = StaticMesh;
		}
	}

	return OutStaticMesh;
}

FTransform UModularMeshDataAsset::GetOffset(int32 StaticMeshVariationIndex)
{
	FTransform OutTransform;
	if (!StaticMeshVariations.IsEmpty())
	{
		StaticMeshVariationIndex = FMath::Clamp(StaticMeshVariationIndex, 0, StaticMeshVariations.Num() - 1);
		const FStaticMeshVariation StaticMeshVariation = StaticMeshVariations[StaticMeshVariationIndex];
		OutTransform = StaticMeshVariation.Offset;
	}

	return OutTransform;
}

void UModularMeshDataAsset::SetStaticMesh(UStaticMeshComponent* StaticMeshComponent, int32 StaticMeshVariationIndex)
{
	if (!IsValid(StaticMeshComponent)) { return; }
	if (!StaticMeshVariations.IsEmpty())
	{
		StaticMeshVariationIndex = FMath::Clamp(StaticMeshVariationIndex, 0, StaticMeshVariations.Num() - 1);
		FStaticMeshVariation StaticMeshVariation = StaticMeshVariations[StaticMeshVariationIndex];
		if (UStaticMesh* StaticMesh = Cast<UStaticMesh>(GetSoftObjectLoadSynchronously(StaticMeshVariation.StaticMesh)))
		{
			StaticMeshComponent->SetStaticMesh(StaticMesh);			
			StaticMeshComponent->SetRelativeTransform(
				StaticMeshComponent->GetRelativeTransform() + StaticMeshVariation.Offset);
		}
	}
}

// #if WITH_EDITOR
TArray<FMaterialVariationContainer> UModularMeshDataAsset::SetThemes(
	TArray<FMaterialVariationContainer> MaterialVariationContainers, TMap<FName, int32> ThemeVariationMap)
{
	TArray<FMaterialVariationContainer> MaterialVariationContainersOutput;
	for (auto Container : MaterialVariationContainers)
	{
		if (MaterialThemes.Contains(Container.Theme) && ThemeVariationMap.Contains(Container.Theme))
		{
			Container.Index = FMath::Clamp(ThemeVariationMap[Container.Theme], 0,
				MaterialThemes.Find(Container.Theme)->Materials.Num() - 1);
			MaterialVariationContainersOutput.Add(Container);
		}
	}

	return MaterialVariationContainersOutput;
}

TArray<FMaterialVariationContainer> UModularMeshDataAsset::SetThemesRandom(
	TArray<FMaterialVariationContainer> MaterialVariationContainers)
{
	// this will set a random value for every material theme on a current static mesh
	TArray<FMaterialVariationContainer> MaterialVariationContainersOutput;
	for (auto Container : MaterialVariationContainers)
	{
		if (MaterialThemes.Contains(Container.Theme))
		{
			Container.Index = FMath::RandRange(0, MaterialThemes.Find(Container.Theme)->Materials.Num() - 1);
			MaterialVariationContainersOutput.Add(Container);
		}
	}

	return MaterialVariationContainersOutput;
}

TMap<FName, int32> UModularMeshDataAsset::MakeRandomThemeMap()
{
	TMap<FName, int32> Output;
	for (auto Pair : MaterialThemes)
	{
		Output.Add(Pair.Key, FMath::RandRange(0, Pair.Value.Materials.Num() - 1));
	}
	return Output;
}
// #endif

UObject* UModularMeshDataAsset::GetSoftObjectLoadSynchronously(const TSoftObjectPtr<UObject> SoftObjectPtr)
{
	UObject* Object;
	if (SoftObjectPtr.IsPending())
	{
		Object = Cast<UObject>(SoftObjectPtr.LoadSynchronous());
	}
	else
	{
		Object = Cast<UObject>(SoftObjectPtr.Get());
	}

	return Object;
}