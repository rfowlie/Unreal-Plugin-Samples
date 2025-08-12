// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "EditorSubsystem.h"
#include "StriderEditorSubsystem.generated.h"

UENUM()
enum EFilterMode
{
	All,
	Some,
	None
};

USTRUCT(BlueprintType)
struct FFilterStaticMesh
{
	GENERATED_BODY()

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	bool RemoveNonStaticMeshComponents = true;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	bool FilterContains = true;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	TArray<TSoftObjectPtr<UStaticMesh>> FilterMeshes;
};

/**
 * 
 */
UCLASS()
class STRIDER_API UStriderEditorSubsystem : public UEditorSubsystem
{
	GENERATED_BODY()

	
public:
	UFUNCTION(BlueprintCallable)
	TArray<UClass*> GetClassesImplementingInterface(const UClass* InterfaceClass);
	
	UFUNCTION(BlueprintCallable)
	TArray<UActorComponent*> FilterStaticMesh(
		TArray<UActorComponent*> Components,
		const TArray<UStaticMesh*> FilterMeshes,
		const bool FilterContains,
		const bool RemoveNonMatchingComponents = false);	
	
	UFUNCTION(BlueprintCallable)
	TArray<UActorComponent*> FilterSkeletalMesh(
		TArray<UActorComponent*> Components,
		TArray<USkeletalMesh*> FilterMeshes,
		const bool FilterContains,
		const bool RemoveNonMatchingComponents = false);

	UFUNCTION(BlueprintCallable)
	bool FilterCollision(TArray<FHitResult> OutHits, TArray<TSubclassOf<AActor>> CollisionClasses);

	UFUNCTION(BlueprintCallable)
	TArray<UActorComponent*> FilterVirtualTextures(TArray<UActorComponent*> Components);


	
	//////////////////////////////////////////////////////////////////
	// copies from other subsystems, easier this way for now

	// Generic Editor Subsystem
	UFUNCTION(BlueprintCallable)
	void SyncBrowserToObjects(TArray<UObject*> InObjectsToSync, bool bFocusContentBrowser = true) const;

	UFUNCTION(BlueprintCallable)
	void SyncBrowserToClass(const UClass* Class) const;

	// Viewport Editor Subsystem
	UFUNCTION(BlueprintCallable)
	void MoveViewportCamerasToActors(TArray<AActor*> Actors, bool bActiveViewportOnly) const;
};