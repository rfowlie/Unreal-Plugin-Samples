// Copyright 2023 Beamdog

#include "ModularMeshComponent.h"S


// Sets default values for this component's properties
UModularMeshComponent::UModularMeshComponent(): DataAsset(nullptr), EditPreset(false), Preset(0),
                                                StaticMeshComponent(nullptr)
{
	PrimaryComponentTick.bCanEverTick = false;

	if (StaticMeshComponent == nullptr)
	{
		StaticMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("RelativeStaticMeshComponent"));
		StaticMeshComponent->SetupAttachment(this);
	}
}

void UModularMeshComponent::RandomizeMesh()
{
	//...
}

// Called when the game starts
void UModularMeshComponent::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void UModularMeshComponent::TickComponent(float DeltaTime, ELevelTick TickType,
										  FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	
}

void UModularMeshComponent::OnRegister()
{
	Super::OnRegister();
	
	if (StaticMeshComponent)
	{
		StaticMeshComponent->SetVisibility(IsVisible());
		StaticMeshComponent->SetHiddenInGame(bHiddenInGame);
		StaticMeshComponent->SetShouldUpdatePhysicsVolume(GetShouldUpdatePhysicsVolume());
		
	}
	
	// general setup from modular mesh data asset
	if (DataAsset)
	{
		DataAsset->SetStaticMeshComponentAlt(StaticMeshComponent, StaticMeshVariation, RelativeTransformVariation,
										  MaterialVariationArray);

		// apply offset
		StaticMeshComponent->SetRelativeLocation(StaticMeshComponent->GetRelativeLocation() + Offset.GetLocation());
		StaticMeshComponent->SetRelativeRotation(StaticMeshComponent->GetRelativeRotation().Quaternion() *
												 Offset.GetRotation());
		StaticMeshComponent->SetRelativeScale3D(StaticMeshComponent->GetRelativeScale3D() * Offset.GetScale3D());
	}
}

#if WITH_EDITOR
// be sure to set values you want serialized here as constructor and OnRegister will re-fire after this
void UModularMeshComponent::	PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent)
{
	// Get the name of the property that was changed
	const FName PropertyName =
		(PropertyChangedEvent.Property != nullptr) ? PropertyChangedEvent.Property->GetFName() : NAME_None;

	// Do something based on the property that was changed
	if (PropertyName == GET_MEMBER_NAME_CHECKED(UModularMeshComponent, DataAsset))
	{
		Offset = FTransform();
		EditStaticMesh = false;
		StaticMeshVariation = 0;
		if (StaticMeshComponent)
		{
			StaticMeshComponent->SetStaticMesh(nullptr);
			StaticMeshComponent->EmptyOverrideMaterials();
		}		
		EditRelativeVariation = false;
		RelativeTransformVariation = 0;
		EditMaterials = false;
		// MaterialVariationMap.Empty();
		MaterialVariationArray.Empty();
		EditPreset = false;
		Preset = 0;

		if (DataAsset)
		{
			UE_LOG(LogTemp, Warning, TEXT("Data Asset Valid, update edit rules"));
			EditStaticMesh = DataAsset->StaticMeshVariations.Num() != 0;
			EditRelativeVariation = !DataAsset->RelativeTransformVariations.IsEmpty();
			EditMaterials = DataAsset->MaterialThemes.Num() != 0 || DataAsset->PresetVariations.Num() != 0;
			EditPreset = DataAsset->PresetVariations.Num() != 0;
			MaterialVariationArray = TArray<FMaterialVariationContainer>();
			MaterialVariationArray = DataAsset->CheckValuesThemes(0, MaterialVariationArray);
		}
	}
	if (PropertyName == GET_MEMBER_NAME_CHECKED(UModularMeshComponent, StaticMeshVariation))
	{
		ClampStaticMesh();
		ClampMaterials();
	}
	if (PropertyName == GET_MEMBER_NAME_CHECKED(UModularMeshComponent, RelativeTransformVariation))
	{
		ClampRelativeTransform();
	}
	if (PropertyName == GET_MEMBER_NAME_CHECKED(UModularMeshComponent, MaterialVariationArray))
	{
		UE_LOG(LogTemp, Warning, TEXT("MaterialVariationMap Property"))
		ClampMaterials();
	}
	if (PropertyName == GET_MEMBER_NAME_CHECKED(UModularMeshComponent, Preset))
	{
		ClampPreset();
	}
	if (PropertyName == GET_MEMBER_NAME_CHECKED(UModularMeshComponent, EditPreset))
	{
		ClampPreset();
	}

	// call the super after making all your changes otherwise will not update properly
	Super::PostEditChangeProperty(PropertyChangedEvent);
}

void UModularMeshComponent::PostEditChangeChainProperty(FPropertyChangedChainEvent& PropertyChangedEvent)
{
	// Get the name of the property that was changed
	const FName PropertyName =
		(PropertyChangedEvent.Property != nullptr) ? PropertyChangedEvent.Property->GetFName() : NAME_None;


	const FName ActiveMemberPropertyNode = PropertyChangedEvent.PropertyChain.GetActiveMemberNode()->GetValue()->GetFName();
	if (ActiveMemberPropertyNode == GET_MEMBER_NAME_CHECKED(UModularMeshComponent, MaterialVariationArray))
	{
		UE_LOG(LogTemp, Warning, TEXT("MaterialVariationMap Chain Property"))
		ClampMaterials();
		
	}
	if (PropertyName == GET_MEMBER_NAME_CHECKED(UModularMeshComponent, MaterialVariationArray))
	{
		UE_LOG(LogTemp, Warning, TEXT("MaterialVariationMap Chain Property"))
		ClampMaterials();
	}
	
	Super::PostEditChangeChainProperty(PropertyChangedEvent);
}
#endif

void UModularMeshComponent::CustomOnRegister()
{
	//...
}

void UModularMeshComponent::ClampStaticMesh()
{
	if (!DataAsset)
	{
		StaticMeshVariation = 0;
		StaticMeshComponent->SetStaticMesh(nullptr);
		StaticMeshComponent->EmptyOverrideMaterials();		
	}
	else
	{
		StaticMeshVariation = DataAsset->CheckValueStaticMesh(StaticMeshVariation);
	}	
}

void UModularMeshComponent::ClampRelativeTransform()
{
	if (!DataAsset)
	{
		RelativeTransformVariation = 0;
		StaticMeshComponent->SetRelativeTransform(FTransform(FVector::Zero()));		
	}
	else
	{
		RelativeTransformVariation = DataAsset->CheckValueRelativeTransform(RelativeTransformVariation);
	}	
}

void UModularMeshComponent::ClampMaterials()
{
	if (!DataAsset)
	{
		MaterialVariationArray.Empty();
	}
	else
	{
		MaterialVariationArray = DataAsset->CheckValuesThemes(StaticMeshVariation, MaterialVariationArray);
	}
}

void UModularMeshComponent::ClampPreset()
{
	if (!DataAsset)
	{
		Preset = 0;
	}
	else
	{
		Preset = DataAsset->CheckValuePreset(Preset);

		if (!DataAsset->PresetVariations.IsEmpty() && EditPreset)
		{
			const FModularMeshPreset Temp = DataAsset->PresetVariations[Preset];

			StaticMeshVariation = DataAsset->CheckValueStaticMesh(Temp.StaticMeshVariation);
			RelativeTransformVariation = DataAsset->CheckValueRelativeTransform(Temp.RelativeTransformVariation);
			MaterialVariationArray = Temp.MaterialThemeMap;
		}
	}
}

#if WITH_EDITOR
bool UModularMeshComponent::Randomize()
{
	StaticMeshVariation = DataAsset == nullptr ? 0 : FMath::RandRange(0, DataAsset->StaticMeshVariations.Num() - 1);
	return MarkPackageDirty();
}
# endif
