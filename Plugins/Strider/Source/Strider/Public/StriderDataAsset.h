// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "StriderDataAsset.generated.h"


/**
 * hold all the saved presets that a project might have accumulated over time. Can be
 * quite annoying to constantly remake the filters, especially when changing levels
 */
UCLASS()
class STRIDER_API UStriderDataAsset : public UDataAsset
{
	GENERATED_BODY()	
};
