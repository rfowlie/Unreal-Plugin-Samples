// Copyright 2023 Robert Fowlie

#pragma once

#include "CoreMinimal.h"
#include "ModularMeshDataAsset.h"
#include "Components/ActorComponent.h"
#include "ModularMeshComponent.generated.h"


UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class UModularMeshComponent : public USceneComponent
{
	GENERATED_BODY()

public:
	UModularMeshComponent();

	UFUNCTION(CallInEditor)
	void RandomizeMesh();

	// master lock to block changing anything in editor and to prevent utility tools from editing
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	bool bLockEdits = false;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta = (editcondition = "!bLockEdits"))
	UModularMeshDataAsset* DataAsset;

	UPROPERTY(EditInstanceOnly)
	FTransform Offset;

	UPROPERTY()
	bool EditStaticMesh = true;
	UPROPERTY(EditAnywhere, BlueprintReadWrite,
			  meta = (editcondition = "!bLockEdits && EditStaticMesh && !EditPreset", HideEditConditionToggle))
	int32 StaticMeshVariation = 0;

	UPROPERTY()
	bool EditRelativeVariation = true;
	UPROPERTY(EditAnywhere, BlueprintReadWrite,
			  meta = (editcondition = "!bLockEdits && EditRelativeVariation && !EditPreset", HideEditConditionToggle))
	int32 RelativeTransformVariation = 0;

	UPROPERTY()
	bool EditMaterials = true;
	UPROPERTY(EditAnywhere, BlueprintReadWrite,
			  meta = (editcondition = "!bLockEdits && !EditPreset && EditMaterials", HideEditConditionToggle))
	TArray<FMaterialVariationContainer> MaterialVariationArray;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly,
		meta = (editcondition = "!bLockEdits"))
	bool EditPreset;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, 
		meta = (editcondition = "!bLockEdits && EditPreset", HideEditConditionToggle))
	int32 Preset;

	UPROPERTY(BlueprintReadOnly)
	UStaticMeshComponent* StaticMeshComponent;
	
	virtual void TickComponent(float DeltaTime, ELevelTick TickType,
							   FActorComponentTickFunction* ThisTickFunction) override;

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

	virtual void OnRegister() override;

#if WITH_EDITOR
	virtual void PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent) override;
	virtual void PostEditChangeChainProperty(FPropertyChangedChainEvent& PropertyChangedEvent) override;
#endif

	// created so that subclasses of this can alter the behaviour without strange side effects
	UFUNCTION()
	virtual void CustomOnRegister();

private:
	UFUNCTION()
	void ClampStaticMesh();

	UFUNCTION()
	void ClampRelativeTransform();

	UFUNCTION()
	void ClampMaterials();

	UFUNCTION()
	void ClampPreset();

#if WITH_EDITOR
public:
	UFUNCTION(BlueprintCallable, CallInEditor)
	bool Randomize();
# endif
};
