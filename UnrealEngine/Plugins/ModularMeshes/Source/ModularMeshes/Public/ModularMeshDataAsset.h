// Copyright 2023 Robert Fowlie

#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ModularMeshDataAsset.generated.h"


USTRUCT(BlueprintType)
struct FMaterialVariationContainer
{
	GENERATED_BODY()

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	int32 Slot = 0;
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	FName Theme;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	int32 Index = 0;
};

USTRUCT(BlueprintType)
struct FStaticMeshVariation
{
	GENERATED_BODY()

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	TSoftObjectPtr<UStaticMesh> StaticMesh;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	FTransform Offset = FTransform(FVector::Zero());

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	TMap<int32, FName> MaterialSlotTagMap;
};

USTRUCT(BlueprintType)
struct FMaterialVariation
{
	GENERATED_BODY()

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	FName MaterialTag;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	TArray<TSoftObjectPtr<UMaterialInstance>> Materials;
};

USTRUCT(BlueprintType)
struct FMaterialInstanceArray
{
	GENERATED_BODY()

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	TArray<TSoftObjectPtr<UMaterialInterface>> Materials;
};

USTRUCT(BlueprintType)
struct FModularMeshPreset
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, meta = (InlineEditConditionToggle))
	bool EditStaticMesh = false;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (editcondition = "EditStaticMesh"))
	int32 StaticMeshVariation = 0;

	UPROPERTY(EditAnywhere, meta = (InlineEditConditionToggle))
	bool EditRelativeVariation = false;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (editcondition = "EditRelativeVariation"))
	int32 RelativeTransformVariation = 0;

	UPROPERTY(EditAnywhere, meta = (InlineEditConditionToggle))
	bool EditMaterials = false;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (editcondition = "EditMaterials"))
	TArray<FMaterialVariationContainer> MaterialThemeMap;
};

UCLASS(BlueprintType)
class UModularMeshDataAsset : public UDataAsset
{
	GENERATED_BODY()

public:
	UFUNCTION()
	int32 GetRandomStaticMeshIndex() const;
	UFUNCTION()
	int32 GetRandomTransformIndex() const;
	UFUNCTION()
	TArray<int32> GetRandomMaterialIndex(int32 StaticMeshVariation);
	
public:
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	TArray<FStaticMeshVariation> StaticMeshVariations;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	TArray<FTransform> RelativeTransformVariations;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	TMap<FName, FMaterialInstanceArray> MaterialThemes;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	TArray<FModularMeshPreset> PresetVariations;
	
	UFUNCTION(BlueprintCallable)
	void SetStaticMeshComponentAlt(UStaticMeshComponent* StaticMeshComponent, int32 StaticMeshVariationIndex,
								int32 RelativeTransformVariationIndex, TArray<FMaterialVariationContainer> MaterialVariationContainers);
	
	UFUNCTION()
	int32 CheckValueStaticMesh(int32 Value) const;

	UFUNCTION()
	int32 CheckValueRelativeTransform(int32 Value) const;

	UFUNCTION()
	TMap<FName, int32> CheckValueMaterials(TMap<FName, int32> MaterialVariationMap);
	
	UFUNCTION()
	TArray<FMaterialVariationContainer> CheckValuesThemes(
		const int32 StaticMeshVariationIndex, TArray<FMaterialVariationContainer> MaterialVariationContainers) const;

	UFUNCTION()
	int32 CheckValuePreset(int32 Value) const;
	
	UFUNCTION(BlueprintCallable)
	UStaticMesh* GetStaticMesh(int32 StaticMeshVariationIndex);

	UFUNCTION(BlueprintCallable)
	FTransform GetOffset(int32 StaticMeshVariationIndex);

	UFUNCTION(BlueprintCallable)
	void SetStaticMesh(UStaticMeshComponent* StaticMeshComponent, int32 StaticMeshVariationIndex);
	
// #if WITH_EDITOR
	// testing
	// given a map of themes and a variation value, return a BP container will update values for matching themes
	UFUNCTION(BlueprintCallable)
	TArray<FMaterialVariationContainer> SetThemes(
		TArray<FMaterialVariationContainer> MaterialVariationContainers, TMap<FName, int32> ThemeVariationMap);

	// for each theme slot on current static mesh variation set a random variation
	UFUNCTION(BlueprintCallable)
	TArray<FMaterialVariationContainer> SetThemesRandom(TArray<FMaterialVariationContainer> MaterialVariationContainers);

	// for each theme in this data asset get a random variation value
	UFUNCTION(BlueprintCallable)
	TMap<FName, int32> MakeRandomThemeMap();
// #endif


	// for ease of use
	UFUNCTION()
	static UObject* GetSoftObjectLoadSynchronously(const TSoftObjectPtr<UObject> SoftObjectPtr);
};
