// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ModularMeshes/Public/ModularMeshDataAsset.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeModularMeshDataAsset() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInstance_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
MODULARMESHES_API UClass* Z_Construct_UClass_UModularMeshDataAsset();
MODULARMESHES_API UClass* Z_Construct_UClass_UModularMeshDataAsset_NoRegister();
MODULARMESHES_API UScriptStruct* Z_Construct_UScriptStruct_FMaterialInstanceArray();
MODULARMESHES_API UScriptStruct* Z_Construct_UScriptStruct_FMaterialVariation();
MODULARMESHES_API UScriptStruct* Z_Construct_UScriptStruct_FMaterialVariationContainer();
MODULARMESHES_API UScriptStruct* Z_Construct_UScriptStruct_FModularMeshPreset();
MODULARMESHES_API UScriptStruct* Z_Construct_UScriptStruct_FStaticMeshVariation();
UPackage* Z_Construct_UPackage__Script_ModularMeshes();
// End Cross Module References

// Begin ScriptStruct FMaterialVariationContainer
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MaterialVariationContainer;
class UScriptStruct* FMaterialVariationContainer::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MaterialVariationContainer.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MaterialVariationContainer.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMaterialVariationContainer, (UObject*)Z_Construct_UPackage__Script_ModularMeshes(), TEXT("MaterialVariationContainer"));
	}
	return Z_Registration_Info_UScriptStruct_MaterialVariationContainer.OuterSingleton;
}
template<> MODULARMESHES_API UScriptStruct* StaticStruct<FMaterialVariationContainer>()
{
	return FMaterialVariationContainer::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMaterialVariationContainer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ModularMeshDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Slot_MetaData[] = {
		{ "Category", "MaterialVariationContainer" },
		{ "ModuleRelativePath", "Public/ModularMeshDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Theme_MetaData[] = {
		{ "Category", "MaterialVariationContainer" },
		{ "ModuleRelativePath", "Public/ModularMeshDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Index_MetaData[] = {
		{ "Category", "MaterialVariationContainer" },
		{ "ModuleRelativePath", "Public/ModularMeshDataAsset.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Slot;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Theme;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMaterialVariationContainer>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMaterialVariationContainer_Statics::NewProp_Slot = { "Slot", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMaterialVariationContainer, Slot), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Slot_MetaData), NewProp_Slot_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FMaterialVariationContainer_Statics::NewProp_Theme = { "Theme", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMaterialVariationContainer, Theme), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Theme_MetaData), NewProp_Theme_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMaterialVariationContainer_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMaterialVariationContainer, Index), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Index_MetaData), NewProp_Index_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMaterialVariationContainer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialVariationContainer_Statics::NewProp_Slot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialVariationContainer_Statics::NewProp_Theme,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialVariationContainer_Statics::NewProp_Index,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialVariationContainer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMaterialVariationContainer_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ModularMeshes,
	nullptr,
	&NewStructOps,
	"MaterialVariationContainer",
	Z_Construct_UScriptStruct_FMaterialVariationContainer_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialVariationContainer_Statics::PropPointers),
	sizeof(FMaterialVariationContainer),
	alignof(FMaterialVariationContainer),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialVariationContainer_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMaterialVariationContainer_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMaterialVariationContainer()
{
	if (!Z_Registration_Info_UScriptStruct_MaterialVariationContainer.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MaterialVariationContainer.InnerSingleton, Z_Construct_UScriptStruct_FMaterialVariationContainer_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MaterialVariationContainer.InnerSingleton;
}
// End ScriptStruct FMaterialVariationContainer

// Begin ScriptStruct FStaticMeshVariation
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StaticMeshVariation;
class UScriptStruct* FStaticMeshVariation::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StaticMeshVariation.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StaticMeshVariation.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStaticMeshVariation, (UObject*)Z_Construct_UPackage__Script_ModularMeshes(), TEXT("StaticMeshVariation"));
	}
	return Z_Registration_Info_UScriptStruct_StaticMeshVariation.OuterSingleton;
}
template<> MODULARMESHES_API UScriptStruct* StaticStruct<FStaticMeshVariation>()
{
	return FStaticMeshVariation::StaticStruct();
}
struct Z_Construct_UScriptStruct_FStaticMeshVariation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ModularMeshDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaticMesh_MetaData[] = {
		{ "Category", "StaticMeshVariation" },
		{ "ModuleRelativePath", "Public/ModularMeshDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Offset_MetaData[] = {
		{ "Category", "StaticMeshVariation" },
		{ "ModuleRelativePath", "Public/ModularMeshDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialSlotTagMap_MetaData[] = {
		{ "Category", "StaticMeshVariation" },
		{ "ModuleRelativePath", "Public/ModularMeshDataAsset.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_StaticMesh;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Offset;
	static const UECodeGen_Private::FNamePropertyParams NewProp_MaterialSlotTagMap_ValueProp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaterialSlotTagMap_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_MaterialSlotTagMap;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStaticMeshVariation>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FStaticMeshVariation_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x0014000000010015, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStaticMeshVariation, StaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaticMesh_MetaData), NewProp_StaticMesh_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStaticMeshVariation_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStaticMeshVariation, Offset), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Offset_MetaData), NewProp_Offset_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FStaticMeshVariation_Statics::NewProp_MaterialSlotTagMap_ValueProp = { "MaterialSlotTagMap", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FStaticMeshVariation_Statics::NewProp_MaterialSlotTagMap_Key_KeyProp = { "MaterialSlotTagMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FStaticMeshVariation_Statics::NewProp_MaterialSlotTagMap = { "MaterialSlotTagMap", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStaticMeshVariation, MaterialSlotTagMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialSlotTagMap_MetaData), NewProp_MaterialSlotTagMap_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStaticMeshVariation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticMeshVariation_Statics::NewProp_StaticMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticMeshVariation_Statics::NewProp_Offset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticMeshVariation_Statics::NewProp_MaterialSlotTagMap_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticMeshVariation_Statics::NewProp_MaterialSlotTagMap_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticMeshVariation_Statics::NewProp_MaterialSlotTagMap,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticMeshVariation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStaticMeshVariation_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ModularMeshes,
	nullptr,
	&NewStructOps,
	"StaticMeshVariation",
	Z_Construct_UScriptStruct_FStaticMeshVariation_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticMeshVariation_Statics::PropPointers),
	sizeof(FStaticMeshVariation),
	alignof(FStaticMeshVariation),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticMeshVariation_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FStaticMeshVariation_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FStaticMeshVariation()
{
	if (!Z_Registration_Info_UScriptStruct_StaticMeshVariation.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StaticMeshVariation.InnerSingleton, Z_Construct_UScriptStruct_FStaticMeshVariation_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_StaticMeshVariation.InnerSingleton;
}
// End ScriptStruct FStaticMeshVariation

// Begin ScriptStruct FMaterialVariation
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MaterialVariation;
class UScriptStruct* FMaterialVariation::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MaterialVariation.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MaterialVariation.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMaterialVariation, (UObject*)Z_Construct_UPackage__Script_ModularMeshes(), TEXT("MaterialVariation"));
	}
	return Z_Registration_Info_UScriptStruct_MaterialVariation.OuterSingleton;
}
template<> MODULARMESHES_API UScriptStruct* StaticStruct<FMaterialVariation>()
{
	return FMaterialVariation::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMaterialVariation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ModularMeshDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialTag_MetaData[] = {
		{ "Category", "MaterialVariation" },
		{ "ModuleRelativePath", "Public/ModularMeshDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Materials_MetaData[] = {
		{ "Category", "MaterialVariation" },
		{ "ModuleRelativePath", "Public/ModularMeshDataAsset.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_MaterialTag;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_Materials_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Materials;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMaterialVariation>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FMaterialVariation_Statics::NewProp_MaterialTag = { "MaterialTag", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMaterialVariation, MaterialTag), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialTag_MetaData), NewProp_MaterialTag_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FMaterialVariation_Statics::NewProp_Materials_Inner = { "Materials", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMaterialInstance_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMaterialVariation_Statics::NewProp_Materials = { "Materials", nullptr, (EPropertyFlags)0x0014000000010015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMaterialVariation, Materials), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Materials_MetaData), NewProp_Materials_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMaterialVariation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialVariation_Statics::NewProp_MaterialTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialVariation_Statics::NewProp_Materials_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialVariation_Statics::NewProp_Materials,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialVariation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMaterialVariation_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ModularMeshes,
	nullptr,
	&NewStructOps,
	"MaterialVariation",
	Z_Construct_UScriptStruct_FMaterialVariation_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialVariation_Statics::PropPointers),
	sizeof(FMaterialVariation),
	alignof(FMaterialVariation),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialVariation_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMaterialVariation_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMaterialVariation()
{
	if (!Z_Registration_Info_UScriptStruct_MaterialVariation.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MaterialVariation.InnerSingleton, Z_Construct_UScriptStruct_FMaterialVariation_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MaterialVariation.InnerSingleton;
}
// End ScriptStruct FMaterialVariation

// Begin ScriptStruct FMaterialInstanceArray
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MaterialInstanceArray;
class UScriptStruct* FMaterialInstanceArray::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MaterialInstanceArray.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MaterialInstanceArray.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMaterialInstanceArray, (UObject*)Z_Construct_UPackage__Script_ModularMeshes(), TEXT("MaterialInstanceArray"));
	}
	return Z_Registration_Info_UScriptStruct_MaterialInstanceArray.OuterSingleton;
}
template<> MODULARMESHES_API UScriptStruct* StaticStruct<FMaterialInstanceArray>()
{
	return FMaterialInstanceArray::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMaterialInstanceArray_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ModularMeshDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Materials_MetaData[] = {
		{ "Category", "MaterialInstanceArray" },
		{ "ModuleRelativePath", "Public/ModularMeshDataAsset.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_Materials_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Materials;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMaterialInstanceArray>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FMaterialInstanceArray_Statics::NewProp_Materials_Inner = { "Materials", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMaterialInstanceArray_Statics::NewProp_Materials = { "Materials", nullptr, (EPropertyFlags)0x0014000000010015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMaterialInstanceArray, Materials), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Materials_MetaData), NewProp_Materials_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMaterialInstanceArray_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialInstanceArray_Statics::NewProp_Materials_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialInstanceArray_Statics::NewProp_Materials,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialInstanceArray_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMaterialInstanceArray_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ModularMeshes,
	nullptr,
	&NewStructOps,
	"MaterialInstanceArray",
	Z_Construct_UScriptStruct_FMaterialInstanceArray_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialInstanceArray_Statics::PropPointers),
	sizeof(FMaterialInstanceArray),
	alignof(FMaterialInstanceArray),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialInstanceArray_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMaterialInstanceArray_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMaterialInstanceArray()
{
	if (!Z_Registration_Info_UScriptStruct_MaterialInstanceArray.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MaterialInstanceArray.InnerSingleton, Z_Construct_UScriptStruct_FMaterialInstanceArray_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MaterialInstanceArray.InnerSingleton;
}
// End ScriptStruct FMaterialInstanceArray

// Begin ScriptStruct FModularMeshPreset
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ModularMeshPreset;
class UScriptStruct* FModularMeshPreset::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ModularMeshPreset.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ModularMeshPreset.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FModularMeshPreset, (UObject*)Z_Construct_UPackage__Script_ModularMeshes(), TEXT("ModularMeshPreset"));
	}
	return Z_Registration_Info_UScriptStruct_ModularMeshPreset.OuterSingleton;
}
template<> MODULARMESHES_API UScriptStruct* StaticStruct<FModularMeshPreset>()
{
	return FModularMeshPreset::StaticStruct();
}
struct Z_Construct_UScriptStruct_FModularMeshPreset_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ModularMeshDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EditStaticMesh_MetaData[] = {
		{ "Category", "ModularMeshPreset" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/ModularMeshDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaticMeshVariation_MetaData[] = {
		{ "Category", "ModularMeshPreset" },
		{ "editcondition", "EditStaticMesh" },
		{ "ModuleRelativePath", "Public/ModularMeshDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EditRelativeVariation_MetaData[] = {
		{ "Category", "ModularMeshPreset" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/ModularMeshDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RelativeTransformVariation_MetaData[] = {
		{ "Category", "ModularMeshPreset" },
		{ "editcondition", "EditRelativeVariation" },
		{ "ModuleRelativePath", "Public/ModularMeshDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EditMaterials_MetaData[] = {
		{ "Category", "ModularMeshPreset" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/ModularMeshDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialThemeMap_MetaData[] = {
		{ "Category", "ModularMeshPreset" },
		{ "editcondition", "EditMaterials" },
		{ "ModuleRelativePath", "Public/ModularMeshDataAsset.h" },
	};
#endif // WITH_METADATA
	static void NewProp_EditStaticMesh_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_EditStaticMesh;
	static const UECodeGen_Private::FIntPropertyParams NewProp_StaticMeshVariation;
	static void NewProp_EditRelativeVariation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_EditRelativeVariation;
	static const UECodeGen_Private::FIntPropertyParams NewProp_RelativeTransformVariation;
	static void NewProp_EditMaterials_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_EditMaterials;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MaterialThemeMap_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_MaterialThemeMap;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FModularMeshPreset>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FModularMeshPreset_Statics::NewProp_EditStaticMesh_SetBit(void* Obj)
{
	((FModularMeshPreset*)Obj)->EditStaticMesh = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FModularMeshPreset_Statics::NewProp_EditStaticMesh = { "EditStaticMesh", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FModularMeshPreset), &Z_Construct_UScriptStruct_FModularMeshPreset_Statics::NewProp_EditStaticMesh_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EditStaticMesh_MetaData), NewProp_EditStaticMesh_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FModularMeshPreset_Statics::NewProp_StaticMeshVariation = { "StaticMeshVariation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModularMeshPreset, StaticMeshVariation), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaticMeshVariation_MetaData), NewProp_StaticMeshVariation_MetaData) };
void Z_Construct_UScriptStruct_FModularMeshPreset_Statics::NewProp_EditRelativeVariation_SetBit(void* Obj)
{
	((FModularMeshPreset*)Obj)->EditRelativeVariation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FModularMeshPreset_Statics::NewProp_EditRelativeVariation = { "EditRelativeVariation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FModularMeshPreset), &Z_Construct_UScriptStruct_FModularMeshPreset_Statics::NewProp_EditRelativeVariation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EditRelativeVariation_MetaData), NewProp_EditRelativeVariation_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FModularMeshPreset_Statics::NewProp_RelativeTransformVariation = { "RelativeTransformVariation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModularMeshPreset, RelativeTransformVariation), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RelativeTransformVariation_MetaData), NewProp_RelativeTransformVariation_MetaData) };
void Z_Construct_UScriptStruct_FModularMeshPreset_Statics::NewProp_EditMaterials_SetBit(void* Obj)
{
	((FModularMeshPreset*)Obj)->EditMaterials = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FModularMeshPreset_Statics::NewProp_EditMaterials = { "EditMaterials", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FModularMeshPreset), &Z_Construct_UScriptStruct_FModularMeshPreset_Statics::NewProp_EditMaterials_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EditMaterials_MetaData), NewProp_EditMaterials_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FModularMeshPreset_Statics::NewProp_MaterialThemeMap_Inner = { "MaterialThemeMap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMaterialVariationContainer, METADATA_PARAMS(0, nullptr) }; // 1914518638
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FModularMeshPreset_Statics::NewProp_MaterialThemeMap = { "MaterialThemeMap", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModularMeshPreset, MaterialThemeMap), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialThemeMap_MetaData), NewProp_MaterialThemeMap_MetaData) }; // 1914518638
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FModularMeshPreset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModularMeshPreset_Statics::NewProp_EditStaticMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModularMeshPreset_Statics::NewProp_StaticMeshVariation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModularMeshPreset_Statics::NewProp_EditRelativeVariation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModularMeshPreset_Statics::NewProp_RelativeTransformVariation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModularMeshPreset_Statics::NewProp_EditMaterials,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModularMeshPreset_Statics::NewProp_MaterialThemeMap_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModularMeshPreset_Statics::NewProp_MaterialThemeMap,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModularMeshPreset_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FModularMeshPreset_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ModularMeshes,
	nullptr,
	&NewStructOps,
	"ModularMeshPreset",
	Z_Construct_UScriptStruct_FModularMeshPreset_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModularMeshPreset_Statics::PropPointers),
	sizeof(FModularMeshPreset),
	alignof(FModularMeshPreset),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModularMeshPreset_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FModularMeshPreset_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FModularMeshPreset()
{
	if (!Z_Registration_Info_UScriptStruct_ModularMeshPreset.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ModularMeshPreset.InnerSingleton, Z_Construct_UScriptStruct_FModularMeshPreset_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ModularMeshPreset.InnerSingleton;
}
// End ScriptStruct FModularMeshPreset

// Begin Class UModularMeshDataAsset Function CheckValueMaterials
struct Z_Construct_UFunction_UModularMeshDataAsset_CheckValueMaterials_Statics
{
	struct ModularMeshDataAsset_eventCheckValueMaterials_Parms
	{
		TMap<FName,int32> MaterialVariationMap;
		TMap<FName,int32> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ModularMeshDataAsset.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaterialVariationMap_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_MaterialVariationMap_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_MaterialVariationMap;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UModularMeshDataAsset_CheckValueMaterials_Statics::NewProp_MaterialVariationMap_ValueProp = { "MaterialVariationMap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UModularMeshDataAsset_CheckValueMaterials_Statics::NewProp_MaterialVariationMap_Key_KeyProp = { "MaterialVariationMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UModularMeshDataAsset_CheckValueMaterials_Statics::NewProp_MaterialVariationMap = { "MaterialVariationMap", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModularMeshDataAsset_eventCheckValueMaterials_Parms, MaterialVariationMap), EMapPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UModularMeshDataAsset_CheckValueMaterials_Statics::NewProp_ReturnValue_ValueProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UModularMeshDataAsset_CheckValueMaterials_Statics::NewProp_ReturnValue_Key_KeyProp = { "ReturnValue_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UModularMeshDataAsset_CheckValueMaterials_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModularMeshDataAsset_eventCheckValueMaterials_Parms, ReturnValue), EMapPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModularMeshDataAsset_CheckValueMaterials_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularMeshDataAsset_CheckValueMaterials_Statics::NewProp_MaterialVariationMap_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularMeshDataAsset_CheckValueMaterials_Statics::NewProp_MaterialVariationMap_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularMeshDataAsset_CheckValueMaterials_Statics::NewProp_MaterialVariationMap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularMeshDataAsset_CheckValueMaterials_Statics::NewProp_ReturnValue_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularMeshDataAsset_CheckValueMaterials_Statics::NewProp_ReturnValue_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularMeshDataAsset_CheckValueMaterials_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UModularMeshDataAsset_CheckValueMaterials_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UModularMeshDataAsset_CheckValueMaterials_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModularMeshDataAsset, nullptr, "CheckValueMaterials", nullptr, nullptr, Z_Construct_UFunction_UModularMeshDataAsset_CheckValueMaterials_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModularMeshDataAsset_CheckValueMaterials_Statics::PropPointers), sizeof(Z_Construct_UFunction_UModularMeshDataAsset_CheckValueMaterials_Statics::ModularMeshDataAsset_eventCheckValueMaterials_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UModularMeshDataAsset_CheckValueMaterials_Statics::Function_MetaDataParams), Z_Construct_UFunction_UModularMeshDataAsset_CheckValueMaterials_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UModularMeshDataAsset_CheckValueMaterials_Statics::ModularMeshDataAsset_eventCheckValueMaterials_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UModularMeshDataAsset_CheckValueMaterials()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UModularMeshDataAsset_CheckValueMaterials_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UModularMeshDataAsset::execCheckValueMaterials)
{
	P_GET_TMAP(FName,int32,Z_Param_MaterialVariationMap);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TMap<FName,int32>*)Z_Param__Result=P_THIS->CheckValueMaterials(Z_Param_MaterialVariationMap);
	P_NATIVE_END;
}
// End Class UModularMeshDataAsset Function CheckValueMaterials

// Begin Class UModularMeshDataAsset Function CheckValuePreset
struct Z_Construct_UFunction_UModularMeshDataAsset_CheckValuePreset_Statics
{
	struct ModularMeshDataAsset_eventCheckValuePreset_Parms
	{
		int32 Value;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ModularMeshDataAsset.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Value;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UModularMeshDataAsset_CheckValuePreset_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModularMeshDataAsset_eventCheckValuePreset_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UModularMeshDataAsset_CheckValuePreset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModularMeshDataAsset_eventCheckValuePreset_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModularMeshDataAsset_CheckValuePreset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularMeshDataAsset_CheckValuePreset_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularMeshDataAsset_CheckValuePreset_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UModularMeshDataAsset_CheckValuePreset_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UModularMeshDataAsset_CheckValuePreset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModularMeshDataAsset, nullptr, "CheckValuePreset", nullptr, nullptr, Z_Construct_UFunction_UModularMeshDataAsset_CheckValuePreset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModularMeshDataAsset_CheckValuePreset_Statics::PropPointers), sizeof(Z_Construct_UFunction_UModularMeshDataAsset_CheckValuePreset_Statics::ModularMeshDataAsset_eventCheckValuePreset_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UModularMeshDataAsset_CheckValuePreset_Statics::Function_MetaDataParams), Z_Construct_UFunction_UModularMeshDataAsset_CheckValuePreset_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UModularMeshDataAsset_CheckValuePreset_Statics::ModularMeshDataAsset_eventCheckValuePreset_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UModularMeshDataAsset_CheckValuePreset()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UModularMeshDataAsset_CheckValuePreset_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UModularMeshDataAsset::execCheckValuePreset)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->CheckValuePreset(Z_Param_Value);
	P_NATIVE_END;
}
// End Class UModularMeshDataAsset Function CheckValuePreset

// Begin Class UModularMeshDataAsset Function CheckValueRelativeTransform
struct Z_Construct_UFunction_UModularMeshDataAsset_CheckValueRelativeTransform_Statics
{
	struct ModularMeshDataAsset_eventCheckValueRelativeTransform_Parms
	{
		int32 Value;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ModularMeshDataAsset.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Value;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UModularMeshDataAsset_CheckValueRelativeTransform_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModularMeshDataAsset_eventCheckValueRelativeTransform_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UModularMeshDataAsset_CheckValueRelativeTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModularMeshDataAsset_eventCheckValueRelativeTransform_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModularMeshDataAsset_CheckValueRelativeTransform_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularMeshDataAsset_CheckValueRelativeTransform_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularMeshDataAsset_CheckValueRelativeTransform_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UModularMeshDataAsset_CheckValueRelativeTransform_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UModularMeshDataAsset_CheckValueRelativeTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModularMeshDataAsset, nullptr, "CheckValueRelativeTransform", nullptr, nullptr, Z_Construct_UFunction_UModularMeshDataAsset_CheckValueRelativeTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModularMeshDataAsset_CheckValueRelativeTransform_Statics::PropPointers), sizeof(Z_Construct_UFunction_UModularMeshDataAsset_CheckValueRelativeTransform_Statics::ModularMeshDataAsset_eventCheckValueRelativeTransform_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UModularMeshDataAsset_CheckValueRelativeTransform_Statics::Function_MetaDataParams), Z_Construct_UFunction_UModularMeshDataAsset_CheckValueRelativeTransform_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UModularMeshDataAsset_CheckValueRelativeTransform_Statics::ModularMeshDataAsset_eventCheckValueRelativeTransform_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UModularMeshDataAsset_CheckValueRelativeTransform()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UModularMeshDataAsset_CheckValueRelativeTransform_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UModularMeshDataAsset::execCheckValueRelativeTransform)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->CheckValueRelativeTransform(Z_Param_Value);
	P_NATIVE_END;
}
// End Class UModularMeshDataAsset Function CheckValueRelativeTransform

// Begin Class UModularMeshDataAsset Function CheckValueStaticMesh
struct Z_Construct_UFunction_UModularMeshDataAsset_CheckValueStaticMesh_Statics
{
	struct ModularMeshDataAsset_eventCheckValueStaticMesh_Parms
	{
		int32 Value;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ModularMeshDataAsset.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Value;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UModularMeshDataAsset_CheckValueStaticMesh_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModularMeshDataAsset_eventCheckValueStaticMesh_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UModularMeshDataAsset_CheckValueStaticMesh_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModularMeshDataAsset_eventCheckValueStaticMesh_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModularMeshDataAsset_CheckValueStaticMesh_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularMeshDataAsset_CheckValueStaticMesh_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularMeshDataAsset_CheckValueStaticMesh_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UModularMeshDataAsset_CheckValueStaticMesh_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UModularMeshDataAsset_CheckValueStaticMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModularMeshDataAsset, nullptr, "CheckValueStaticMesh", nullptr, nullptr, Z_Construct_UFunction_UModularMeshDataAsset_CheckValueStaticMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModularMeshDataAsset_CheckValueStaticMesh_Statics::PropPointers), sizeof(Z_Construct_UFunction_UModularMeshDataAsset_CheckValueStaticMesh_Statics::ModularMeshDataAsset_eventCheckValueStaticMesh_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UModularMeshDataAsset_CheckValueStaticMesh_Statics::Function_MetaDataParams), Z_Construct_UFunction_UModularMeshDataAsset_CheckValueStaticMesh_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UModularMeshDataAsset_CheckValueStaticMesh_Statics::ModularMeshDataAsset_eventCheckValueStaticMesh_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UModularMeshDataAsset_CheckValueStaticMesh()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UModularMeshDataAsset_CheckValueStaticMesh_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UModularMeshDataAsset::execCheckValueStaticMesh)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->CheckValueStaticMesh(Z_Param_Value);
	P_NATIVE_END;
}
// End Class UModularMeshDataAsset Function CheckValueStaticMesh

// Begin Class UModularMeshDataAsset Function CheckValuesThemes
struct Z_Construct_UFunction_UModularMeshDataAsset_CheckValuesThemes_Statics
{
	struct ModularMeshDataAsset_eventCheckValuesThemes_Parms
	{
		int32 StaticMeshVariationIndex;
		TArray<FMaterialVariationContainer> MaterialVariationContainers;
		TArray<FMaterialVariationContainer> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ModularMeshDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaticMeshVariationIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_StaticMeshVariationIndex;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MaterialVariationContainers_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_MaterialVariationContainers;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UModularMeshDataAsset_CheckValuesThemes_Statics::NewProp_StaticMeshVariationIndex = { "StaticMeshVariationIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModularMeshDataAsset_eventCheckValuesThemes_Parms, StaticMeshVariationIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaticMeshVariationIndex_MetaData), NewProp_StaticMeshVariationIndex_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UModularMeshDataAsset_CheckValuesThemes_Statics::NewProp_MaterialVariationContainers_Inner = { "MaterialVariationContainers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMaterialVariationContainer, METADATA_PARAMS(0, nullptr) }; // 1914518638
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UModularMeshDataAsset_CheckValuesThemes_Statics::NewProp_MaterialVariationContainers = { "MaterialVariationContainers", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModularMeshDataAsset_eventCheckValuesThemes_Parms, MaterialVariationContainers), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 1914518638
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UModularMeshDataAsset_CheckValuesThemes_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMaterialVariationContainer, METADATA_PARAMS(0, nullptr) }; // 1914518638
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UModularMeshDataAsset_CheckValuesThemes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModularMeshDataAsset_eventCheckValuesThemes_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 1914518638
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModularMeshDataAsset_CheckValuesThemes_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularMeshDataAsset_CheckValuesThemes_Statics::NewProp_StaticMeshVariationIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularMeshDataAsset_CheckValuesThemes_Statics::NewProp_MaterialVariationContainers_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularMeshDataAsset_CheckValuesThemes_Statics::NewProp_MaterialVariationContainers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularMeshDataAsset_CheckValuesThemes_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularMeshDataAsset_CheckValuesThemes_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UModularMeshDataAsset_CheckValuesThemes_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UModularMeshDataAsset_CheckValuesThemes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModularMeshDataAsset, nullptr, "CheckValuesThemes", nullptr, nullptr, Z_Construct_UFunction_UModularMeshDataAsset_CheckValuesThemes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModularMeshDataAsset_CheckValuesThemes_Statics::PropPointers), sizeof(Z_Construct_UFunction_UModularMeshDataAsset_CheckValuesThemes_Statics::ModularMeshDataAsset_eventCheckValuesThemes_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UModularMeshDataAsset_CheckValuesThemes_Statics::Function_MetaDataParams), Z_Construct_UFunction_UModularMeshDataAsset_CheckValuesThemes_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UModularMeshDataAsset_CheckValuesThemes_Statics::ModularMeshDataAsset_eventCheckValuesThemes_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UModularMeshDataAsset_CheckValuesThemes()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UModularMeshDataAsset_CheckValuesThemes_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UModularMeshDataAsset::execCheckValuesThemes)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_StaticMeshVariationIndex);
	P_GET_TARRAY(FMaterialVariationContainer,Z_Param_MaterialVariationContainers);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FMaterialVariationContainer>*)Z_Param__Result=P_THIS->CheckValuesThemes(Z_Param_StaticMeshVariationIndex,Z_Param_MaterialVariationContainers);
	P_NATIVE_END;
}
// End Class UModularMeshDataAsset Function CheckValuesThemes

// Begin Class UModularMeshDataAsset Function GetOffset
struct Z_Construct_UFunction_UModularMeshDataAsset_GetOffset_Statics
{
	struct ModularMeshDataAsset_eventGetOffset_Parms
	{
		int32 StaticMeshVariationIndex;
		FTransform ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ModularMeshDataAsset.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_StaticMeshVariationIndex;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UModularMeshDataAsset_GetOffset_Statics::NewProp_StaticMeshVariationIndex = { "StaticMeshVariationIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModularMeshDataAsset_eventGetOffset_Parms, StaticMeshVariationIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UModularMeshDataAsset_GetOffset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModularMeshDataAsset_eventGetOffset_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModularMeshDataAsset_GetOffset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularMeshDataAsset_GetOffset_Statics::NewProp_StaticMeshVariationIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularMeshDataAsset_GetOffset_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UModularMeshDataAsset_GetOffset_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UModularMeshDataAsset_GetOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModularMeshDataAsset, nullptr, "GetOffset", nullptr, nullptr, Z_Construct_UFunction_UModularMeshDataAsset_GetOffset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModularMeshDataAsset_GetOffset_Statics::PropPointers), sizeof(Z_Construct_UFunction_UModularMeshDataAsset_GetOffset_Statics::ModularMeshDataAsset_eventGetOffset_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UModularMeshDataAsset_GetOffset_Statics::Function_MetaDataParams), Z_Construct_UFunction_UModularMeshDataAsset_GetOffset_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UModularMeshDataAsset_GetOffset_Statics::ModularMeshDataAsset_eventGetOffset_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UModularMeshDataAsset_GetOffset()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UModularMeshDataAsset_GetOffset_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UModularMeshDataAsset::execGetOffset)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_StaticMeshVariationIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FTransform*)Z_Param__Result=P_THIS->GetOffset(Z_Param_StaticMeshVariationIndex);
	P_NATIVE_END;
}
// End Class UModularMeshDataAsset Function GetOffset

// Begin Class UModularMeshDataAsset Function GetRandomMaterialIndex
struct Z_Construct_UFunction_UModularMeshDataAsset_GetRandomMaterialIndex_Statics
{
	struct ModularMeshDataAsset_eventGetRandomMaterialIndex_Parms
	{
		int32 StaticMeshVariation;
		TArray<int32> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ModularMeshDataAsset.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_StaticMeshVariation;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UModularMeshDataAsset_GetRandomMaterialIndex_Statics::NewProp_StaticMeshVariation = { "StaticMeshVariation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModularMeshDataAsset_eventGetRandomMaterialIndex_Parms, StaticMeshVariation), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UModularMeshDataAsset_GetRandomMaterialIndex_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UModularMeshDataAsset_GetRandomMaterialIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModularMeshDataAsset_eventGetRandomMaterialIndex_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModularMeshDataAsset_GetRandomMaterialIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularMeshDataAsset_GetRandomMaterialIndex_Statics::NewProp_StaticMeshVariation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularMeshDataAsset_GetRandomMaterialIndex_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularMeshDataAsset_GetRandomMaterialIndex_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UModularMeshDataAsset_GetRandomMaterialIndex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UModularMeshDataAsset_GetRandomMaterialIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModularMeshDataAsset, nullptr, "GetRandomMaterialIndex", nullptr, nullptr, Z_Construct_UFunction_UModularMeshDataAsset_GetRandomMaterialIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModularMeshDataAsset_GetRandomMaterialIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_UModularMeshDataAsset_GetRandomMaterialIndex_Statics::ModularMeshDataAsset_eventGetRandomMaterialIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UModularMeshDataAsset_GetRandomMaterialIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_UModularMeshDataAsset_GetRandomMaterialIndex_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UModularMeshDataAsset_GetRandomMaterialIndex_Statics::ModularMeshDataAsset_eventGetRandomMaterialIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UModularMeshDataAsset_GetRandomMaterialIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UModularMeshDataAsset_GetRandomMaterialIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UModularMeshDataAsset::execGetRandomMaterialIndex)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_StaticMeshVariation);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<int32>*)Z_Param__Result=P_THIS->GetRandomMaterialIndex(Z_Param_StaticMeshVariation);
	P_NATIVE_END;
}
// End Class UModularMeshDataAsset Function GetRandomMaterialIndex

// Begin Class UModularMeshDataAsset Function GetRandomStaticMeshIndex
struct Z_Construct_UFunction_UModularMeshDataAsset_GetRandomStaticMeshIndex_Statics
{
	struct ModularMeshDataAsset_eventGetRandomStaticMeshIndex_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ModularMeshDataAsset.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UModularMeshDataAsset_GetRandomStaticMeshIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModularMeshDataAsset_eventGetRandomStaticMeshIndex_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModularMeshDataAsset_GetRandomStaticMeshIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularMeshDataAsset_GetRandomStaticMeshIndex_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UModularMeshDataAsset_GetRandomStaticMeshIndex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UModularMeshDataAsset_GetRandomStaticMeshIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModularMeshDataAsset, nullptr, "GetRandomStaticMeshIndex", nullptr, nullptr, Z_Construct_UFunction_UModularMeshDataAsset_GetRandomStaticMeshIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModularMeshDataAsset_GetRandomStaticMeshIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_UModularMeshDataAsset_GetRandomStaticMeshIndex_Statics::ModularMeshDataAsset_eventGetRandomStaticMeshIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UModularMeshDataAsset_GetRandomStaticMeshIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_UModularMeshDataAsset_GetRandomStaticMeshIndex_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UModularMeshDataAsset_GetRandomStaticMeshIndex_Statics::ModularMeshDataAsset_eventGetRandomStaticMeshIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UModularMeshDataAsset_GetRandomStaticMeshIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UModularMeshDataAsset_GetRandomStaticMeshIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UModularMeshDataAsset::execGetRandomStaticMeshIndex)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetRandomStaticMeshIndex();
	P_NATIVE_END;
}
// End Class UModularMeshDataAsset Function GetRandomStaticMeshIndex

// Begin Class UModularMeshDataAsset Function GetRandomTransformIndex
struct Z_Construct_UFunction_UModularMeshDataAsset_GetRandomTransformIndex_Statics
{
	struct ModularMeshDataAsset_eventGetRandomTransformIndex_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ModularMeshDataAsset.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UModularMeshDataAsset_GetRandomTransformIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModularMeshDataAsset_eventGetRandomTransformIndex_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModularMeshDataAsset_GetRandomTransformIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularMeshDataAsset_GetRandomTransformIndex_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UModularMeshDataAsset_GetRandomTransformIndex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UModularMeshDataAsset_GetRandomTransformIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModularMeshDataAsset, nullptr, "GetRandomTransformIndex", nullptr, nullptr, Z_Construct_UFunction_UModularMeshDataAsset_GetRandomTransformIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModularMeshDataAsset_GetRandomTransformIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_UModularMeshDataAsset_GetRandomTransformIndex_Statics::ModularMeshDataAsset_eventGetRandomTransformIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UModularMeshDataAsset_GetRandomTransformIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_UModularMeshDataAsset_GetRandomTransformIndex_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UModularMeshDataAsset_GetRandomTransformIndex_Statics::ModularMeshDataAsset_eventGetRandomTransformIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UModularMeshDataAsset_GetRandomTransformIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UModularMeshDataAsset_GetRandomTransformIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UModularMeshDataAsset::execGetRandomTransformIndex)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetRandomTransformIndex();
	P_NATIVE_END;
}
// End Class UModularMeshDataAsset Function GetRandomTransformIndex

// Begin Class UModularMeshDataAsset Function GetSoftObjectLoadSynchronously
struct Z_Construct_UFunction_UModularMeshDataAsset_GetSoftObjectLoadSynchronously_Statics
{
	struct ModularMeshDataAsset_eventGetSoftObjectLoadSynchronously_Parms
	{
		TSoftObjectPtr<UObject> SoftObjectPtr;
		UObject* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// for ease of use\n" },
#endif
		{ "ModuleRelativePath", "Public/ModularMeshDataAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "for ease of use" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SoftObjectPtr_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_SoftObjectPtr;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UFunction_UModularMeshDataAsset_GetSoftObjectLoadSynchronously_Statics::NewProp_SoftObjectPtr = { "SoftObjectPtr", nullptr, (EPropertyFlags)0x0014000000000082, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModularMeshDataAsset_eventGetSoftObjectLoadSynchronously_Parms, SoftObjectPtr), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SoftObjectPtr_MetaData), NewProp_SoftObjectPtr_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UModularMeshDataAsset_GetSoftObjectLoadSynchronously_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModularMeshDataAsset_eventGetSoftObjectLoadSynchronously_Parms, ReturnValue), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModularMeshDataAsset_GetSoftObjectLoadSynchronously_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularMeshDataAsset_GetSoftObjectLoadSynchronously_Statics::NewProp_SoftObjectPtr,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularMeshDataAsset_GetSoftObjectLoadSynchronously_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UModularMeshDataAsset_GetSoftObjectLoadSynchronously_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UModularMeshDataAsset_GetSoftObjectLoadSynchronously_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModularMeshDataAsset, nullptr, "GetSoftObjectLoadSynchronously", nullptr, nullptr, Z_Construct_UFunction_UModularMeshDataAsset_GetSoftObjectLoadSynchronously_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModularMeshDataAsset_GetSoftObjectLoadSynchronously_Statics::PropPointers), sizeof(Z_Construct_UFunction_UModularMeshDataAsset_GetSoftObjectLoadSynchronously_Statics::ModularMeshDataAsset_eventGetSoftObjectLoadSynchronously_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UModularMeshDataAsset_GetSoftObjectLoadSynchronously_Statics::Function_MetaDataParams), Z_Construct_UFunction_UModularMeshDataAsset_GetSoftObjectLoadSynchronously_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UModularMeshDataAsset_GetSoftObjectLoadSynchronously_Statics::ModularMeshDataAsset_eventGetSoftObjectLoadSynchronously_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UModularMeshDataAsset_GetSoftObjectLoadSynchronously()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UModularMeshDataAsset_GetSoftObjectLoadSynchronously_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UModularMeshDataAsset::execGetSoftObjectLoadSynchronously)
{
	P_GET_SOFTOBJECT(TSoftObjectPtr<UObject>,Z_Param_SoftObjectPtr);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UObject**)Z_Param__Result=UModularMeshDataAsset::GetSoftObjectLoadSynchronously(Z_Param_SoftObjectPtr);
	P_NATIVE_END;
}
// End Class UModularMeshDataAsset Function GetSoftObjectLoadSynchronously

// Begin Class UModularMeshDataAsset Function GetStaticMesh
struct Z_Construct_UFunction_UModularMeshDataAsset_GetStaticMesh_Statics
{
	struct ModularMeshDataAsset_eventGetStaticMesh_Parms
	{
		int32 StaticMeshVariationIndex;
		UStaticMesh* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ModularMeshDataAsset.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_StaticMeshVariationIndex;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UModularMeshDataAsset_GetStaticMesh_Statics::NewProp_StaticMeshVariationIndex = { "StaticMeshVariationIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModularMeshDataAsset_eventGetStaticMesh_Parms, StaticMeshVariationIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UModularMeshDataAsset_GetStaticMesh_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModularMeshDataAsset_eventGetStaticMesh_Parms, ReturnValue), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModularMeshDataAsset_GetStaticMesh_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularMeshDataAsset_GetStaticMesh_Statics::NewProp_StaticMeshVariationIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularMeshDataAsset_GetStaticMesh_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UModularMeshDataAsset_GetStaticMesh_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UModularMeshDataAsset_GetStaticMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModularMeshDataAsset, nullptr, "GetStaticMesh", nullptr, nullptr, Z_Construct_UFunction_UModularMeshDataAsset_GetStaticMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModularMeshDataAsset_GetStaticMesh_Statics::PropPointers), sizeof(Z_Construct_UFunction_UModularMeshDataAsset_GetStaticMesh_Statics::ModularMeshDataAsset_eventGetStaticMesh_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UModularMeshDataAsset_GetStaticMesh_Statics::Function_MetaDataParams), Z_Construct_UFunction_UModularMeshDataAsset_GetStaticMesh_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UModularMeshDataAsset_GetStaticMesh_Statics::ModularMeshDataAsset_eventGetStaticMesh_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UModularMeshDataAsset_GetStaticMesh()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UModularMeshDataAsset_GetStaticMesh_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UModularMeshDataAsset::execGetStaticMesh)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_StaticMeshVariationIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UStaticMesh**)Z_Param__Result=P_THIS->GetStaticMesh(Z_Param_StaticMeshVariationIndex);
	P_NATIVE_END;
}
// End Class UModularMeshDataAsset Function GetStaticMesh

// Begin Class UModularMeshDataAsset Function MakeRandomThemeMap
struct Z_Construct_UFunction_UModularMeshDataAsset_MakeRandomThemeMap_Statics
{
	struct ModularMeshDataAsset_eventMakeRandomThemeMap_Parms
	{
		TMap<FName,int32> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// for each theme in this data asset get a random variation value\n" },
#endif
		{ "ModuleRelativePath", "Public/ModularMeshDataAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "for each theme in this data asset get a random variation value" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UModularMeshDataAsset_MakeRandomThemeMap_Statics::NewProp_ReturnValue_ValueProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UModularMeshDataAsset_MakeRandomThemeMap_Statics::NewProp_ReturnValue_Key_KeyProp = { "ReturnValue_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UModularMeshDataAsset_MakeRandomThemeMap_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModularMeshDataAsset_eventMakeRandomThemeMap_Parms, ReturnValue), EMapPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModularMeshDataAsset_MakeRandomThemeMap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularMeshDataAsset_MakeRandomThemeMap_Statics::NewProp_ReturnValue_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularMeshDataAsset_MakeRandomThemeMap_Statics::NewProp_ReturnValue_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularMeshDataAsset_MakeRandomThemeMap_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UModularMeshDataAsset_MakeRandomThemeMap_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UModularMeshDataAsset_MakeRandomThemeMap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModularMeshDataAsset, nullptr, "MakeRandomThemeMap", nullptr, nullptr, Z_Construct_UFunction_UModularMeshDataAsset_MakeRandomThemeMap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModularMeshDataAsset_MakeRandomThemeMap_Statics::PropPointers), sizeof(Z_Construct_UFunction_UModularMeshDataAsset_MakeRandomThemeMap_Statics::ModularMeshDataAsset_eventMakeRandomThemeMap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UModularMeshDataAsset_MakeRandomThemeMap_Statics::Function_MetaDataParams), Z_Construct_UFunction_UModularMeshDataAsset_MakeRandomThemeMap_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UModularMeshDataAsset_MakeRandomThemeMap_Statics::ModularMeshDataAsset_eventMakeRandomThemeMap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UModularMeshDataAsset_MakeRandomThemeMap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UModularMeshDataAsset_MakeRandomThemeMap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UModularMeshDataAsset::execMakeRandomThemeMap)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TMap<FName,int32>*)Z_Param__Result=P_THIS->MakeRandomThemeMap();
	P_NATIVE_END;
}
// End Class UModularMeshDataAsset Function MakeRandomThemeMap

// Begin Class UModularMeshDataAsset Function SetMaterialVariations
struct Z_Construct_UFunction_UModularMeshDataAsset_SetMaterialVariations_Statics
{
	struct ModularMeshDataAsset_eventSetMaterialVariations_Parms
	{
		UStaticMeshComponent* StaticMeshComponent;
		int32 StaticMeshVariationIndex;
		TMap<FName,int32> MaterialVariationMap;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ModularMeshDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaticMeshComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMeshComponent;
	static const UECodeGen_Private::FIntPropertyParams NewProp_StaticMeshVariationIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaterialVariationMap_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_MaterialVariationMap_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_MaterialVariationMap;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UModularMeshDataAsset_SetMaterialVariations_Statics::NewProp_StaticMeshComponent = { "StaticMeshComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModularMeshDataAsset_eventSetMaterialVariations_Parms, StaticMeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaticMeshComponent_MetaData), NewProp_StaticMeshComponent_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UModularMeshDataAsset_SetMaterialVariations_Statics::NewProp_StaticMeshVariationIndex = { "StaticMeshVariationIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModularMeshDataAsset_eventSetMaterialVariations_Parms, StaticMeshVariationIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UModularMeshDataAsset_SetMaterialVariations_Statics::NewProp_MaterialVariationMap_ValueProp = { "MaterialVariationMap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UModularMeshDataAsset_SetMaterialVariations_Statics::NewProp_MaterialVariationMap_Key_KeyProp = { "MaterialVariationMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UModularMeshDataAsset_SetMaterialVariations_Statics::NewProp_MaterialVariationMap = { "MaterialVariationMap", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModularMeshDataAsset_eventSetMaterialVariations_Parms, MaterialVariationMap), EMapPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModularMeshDataAsset_SetMaterialVariations_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularMeshDataAsset_SetMaterialVariations_Statics::NewProp_StaticMeshComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularMeshDataAsset_SetMaterialVariations_Statics::NewProp_StaticMeshVariationIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularMeshDataAsset_SetMaterialVariations_Statics::NewProp_MaterialVariationMap_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularMeshDataAsset_SetMaterialVariations_Statics::NewProp_MaterialVariationMap_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularMeshDataAsset_SetMaterialVariations_Statics::NewProp_MaterialVariationMap,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UModularMeshDataAsset_SetMaterialVariations_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UModularMeshDataAsset_SetMaterialVariations_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModularMeshDataAsset, nullptr, "SetMaterialVariations", nullptr, nullptr, Z_Construct_UFunction_UModularMeshDataAsset_SetMaterialVariations_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModularMeshDataAsset_SetMaterialVariations_Statics::PropPointers), sizeof(Z_Construct_UFunction_UModularMeshDataAsset_SetMaterialVariations_Statics::ModularMeshDataAsset_eventSetMaterialVariations_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UModularMeshDataAsset_SetMaterialVariations_Statics::Function_MetaDataParams), Z_Construct_UFunction_UModularMeshDataAsset_SetMaterialVariations_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UModularMeshDataAsset_SetMaterialVariations_Statics::ModularMeshDataAsset_eventSetMaterialVariations_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UModularMeshDataAsset_SetMaterialVariations()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UModularMeshDataAsset_SetMaterialVariations_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UModularMeshDataAsset::execSetMaterialVariations)
{
	P_GET_OBJECT(UStaticMeshComponent,Z_Param_StaticMeshComponent);
	P_GET_PROPERTY(FIntProperty,Z_Param_StaticMeshVariationIndex);
	P_GET_TMAP(FName,int32,Z_Param_MaterialVariationMap);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMaterialVariations(Z_Param_StaticMeshComponent,Z_Param_StaticMeshVariationIndex,Z_Param_MaterialVariationMap);
	P_NATIVE_END;
}
// End Class UModularMeshDataAsset Function SetMaterialVariations

// Begin Class UModularMeshDataAsset Function SetStaticMesh
struct Z_Construct_UFunction_UModularMeshDataAsset_SetStaticMesh_Statics
{
	struct ModularMeshDataAsset_eventSetStaticMesh_Parms
	{
		UStaticMeshComponent* StaticMeshComponent;
		int32 StaticMeshVariationIndex;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ModularMeshDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaticMeshComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMeshComponent;
	static const UECodeGen_Private::FIntPropertyParams NewProp_StaticMeshVariationIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UModularMeshDataAsset_SetStaticMesh_Statics::NewProp_StaticMeshComponent = { "StaticMeshComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModularMeshDataAsset_eventSetStaticMesh_Parms, StaticMeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaticMeshComponent_MetaData), NewProp_StaticMeshComponent_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UModularMeshDataAsset_SetStaticMesh_Statics::NewProp_StaticMeshVariationIndex = { "StaticMeshVariationIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModularMeshDataAsset_eventSetStaticMesh_Parms, StaticMeshVariationIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModularMeshDataAsset_SetStaticMesh_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularMeshDataAsset_SetStaticMesh_Statics::NewProp_StaticMeshComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularMeshDataAsset_SetStaticMesh_Statics::NewProp_StaticMeshVariationIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UModularMeshDataAsset_SetStaticMesh_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UModularMeshDataAsset_SetStaticMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModularMeshDataAsset, nullptr, "SetStaticMesh", nullptr, nullptr, Z_Construct_UFunction_UModularMeshDataAsset_SetStaticMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModularMeshDataAsset_SetStaticMesh_Statics::PropPointers), sizeof(Z_Construct_UFunction_UModularMeshDataAsset_SetStaticMesh_Statics::ModularMeshDataAsset_eventSetStaticMesh_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UModularMeshDataAsset_SetStaticMesh_Statics::Function_MetaDataParams), Z_Construct_UFunction_UModularMeshDataAsset_SetStaticMesh_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UModularMeshDataAsset_SetStaticMesh_Statics::ModularMeshDataAsset_eventSetStaticMesh_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UModularMeshDataAsset_SetStaticMesh()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UModularMeshDataAsset_SetStaticMesh_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UModularMeshDataAsset::execSetStaticMesh)
{
	P_GET_OBJECT(UStaticMeshComponent,Z_Param_StaticMeshComponent);
	P_GET_PROPERTY(FIntProperty,Z_Param_StaticMeshVariationIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetStaticMesh(Z_Param_StaticMeshComponent,Z_Param_StaticMeshVariationIndex);
	P_NATIVE_END;
}
// End Class UModularMeshDataAsset Function SetStaticMesh

// Begin Class UModularMeshDataAsset Function SetStaticMeshComponentAlt
struct Z_Construct_UFunction_UModularMeshDataAsset_SetStaticMeshComponentAlt_Statics
{
	struct ModularMeshDataAsset_eventSetStaticMeshComponentAlt_Parms
	{
		UStaticMeshComponent* StaticMeshComponent;
		int32 StaticMeshVariationIndex;
		int32 RelativeTransformVariationIndex;
		TArray<FMaterialVariationContainer> MaterialVariationContainers;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ModularMeshDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaticMeshComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMeshComponent;
	static const UECodeGen_Private::FIntPropertyParams NewProp_StaticMeshVariationIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_RelativeTransformVariationIndex;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MaterialVariationContainers_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_MaterialVariationContainers;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UModularMeshDataAsset_SetStaticMeshComponentAlt_Statics::NewProp_StaticMeshComponent = { "StaticMeshComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModularMeshDataAsset_eventSetStaticMeshComponentAlt_Parms, StaticMeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaticMeshComponent_MetaData), NewProp_StaticMeshComponent_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UModularMeshDataAsset_SetStaticMeshComponentAlt_Statics::NewProp_StaticMeshVariationIndex = { "StaticMeshVariationIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModularMeshDataAsset_eventSetStaticMeshComponentAlt_Parms, StaticMeshVariationIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UModularMeshDataAsset_SetStaticMeshComponentAlt_Statics::NewProp_RelativeTransformVariationIndex = { "RelativeTransformVariationIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModularMeshDataAsset_eventSetStaticMeshComponentAlt_Parms, RelativeTransformVariationIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UModularMeshDataAsset_SetStaticMeshComponentAlt_Statics::NewProp_MaterialVariationContainers_Inner = { "MaterialVariationContainers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMaterialVariationContainer, METADATA_PARAMS(0, nullptr) }; // 1914518638
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UModularMeshDataAsset_SetStaticMeshComponentAlt_Statics::NewProp_MaterialVariationContainers = { "MaterialVariationContainers", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModularMeshDataAsset_eventSetStaticMeshComponentAlt_Parms, MaterialVariationContainers), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 1914518638
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModularMeshDataAsset_SetStaticMeshComponentAlt_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularMeshDataAsset_SetStaticMeshComponentAlt_Statics::NewProp_StaticMeshComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularMeshDataAsset_SetStaticMeshComponentAlt_Statics::NewProp_StaticMeshVariationIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularMeshDataAsset_SetStaticMeshComponentAlt_Statics::NewProp_RelativeTransformVariationIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularMeshDataAsset_SetStaticMeshComponentAlt_Statics::NewProp_MaterialVariationContainers_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularMeshDataAsset_SetStaticMeshComponentAlt_Statics::NewProp_MaterialVariationContainers,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UModularMeshDataAsset_SetStaticMeshComponentAlt_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UModularMeshDataAsset_SetStaticMeshComponentAlt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModularMeshDataAsset, nullptr, "SetStaticMeshComponentAlt", nullptr, nullptr, Z_Construct_UFunction_UModularMeshDataAsset_SetStaticMeshComponentAlt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModularMeshDataAsset_SetStaticMeshComponentAlt_Statics::PropPointers), sizeof(Z_Construct_UFunction_UModularMeshDataAsset_SetStaticMeshComponentAlt_Statics::ModularMeshDataAsset_eventSetStaticMeshComponentAlt_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UModularMeshDataAsset_SetStaticMeshComponentAlt_Statics::Function_MetaDataParams), Z_Construct_UFunction_UModularMeshDataAsset_SetStaticMeshComponentAlt_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UModularMeshDataAsset_SetStaticMeshComponentAlt_Statics::ModularMeshDataAsset_eventSetStaticMeshComponentAlt_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UModularMeshDataAsset_SetStaticMeshComponentAlt()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UModularMeshDataAsset_SetStaticMeshComponentAlt_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UModularMeshDataAsset::execSetStaticMeshComponentAlt)
{
	P_GET_OBJECT(UStaticMeshComponent,Z_Param_StaticMeshComponent);
	P_GET_PROPERTY(FIntProperty,Z_Param_StaticMeshVariationIndex);
	P_GET_PROPERTY(FIntProperty,Z_Param_RelativeTransformVariationIndex);
	P_GET_TARRAY(FMaterialVariationContainer,Z_Param_MaterialVariationContainers);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetStaticMeshComponentAlt(Z_Param_StaticMeshComponent,Z_Param_StaticMeshVariationIndex,Z_Param_RelativeTransformVariationIndex,Z_Param_MaterialVariationContainers);
	P_NATIVE_END;
}
// End Class UModularMeshDataAsset Function SetStaticMeshComponentAlt

// Begin Class UModularMeshDataAsset Function SetThemes
struct Z_Construct_UFunction_UModularMeshDataAsset_SetThemes_Statics
{
	struct ModularMeshDataAsset_eventSetThemes_Parms
	{
		TArray<FMaterialVariationContainer> MaterialVariationContainers;
		TMap<FName,int32> ThemeVariationMap;
		TArray<FMaterialVariationContainer> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// #if WITH_EDITOR\n// testing\n// given a map of themes and a variation value, return a BP container will updated values for matching themes\n" },
#endif
		{ "ModuleRelativePath", "Public/ModularMeshDataAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "#if WITH_EDITOR\ntesting\ngiven a map of themes and a variation value, return a BP container will updated values for matching themes" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_MaterialVariationContainers_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_MaterialVariationContainers;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ThemeVariationMap_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ThemeVariationMap_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_ThemeVariationMap;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UModularMeshDataAsset_SetThemes_Statics::NewProp_MaterialVariationContainers_Inner = { "MaterialVariationContainers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMaterialVariationContainer, METADATA_PARAMS(0, nullptr) }; // 1914518638
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UModularMeshDataAsset_SetThemes_Statics::NewProp_MaterialVariationContainers = { "MaterialVariationContainers", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModularMeshDataAsset_eventSetThemes_Parms, MaterialVariationContainers), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 1914518638
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UModularMeshDataAsset_SetThemes_Statics::NewProp_ThemeVariationMap_ValueProp = { "ThemeVariationMap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UModularMeshDataAsset_SetThemes_Statics::NewProp_ThemeVariationMap_Key_KeyProp = { "ThemeVariationMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UModularMeshDataAsset_SetThemes_Statics::NewProp_ThemeVariationMap = { "ThemeVariationMap", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModularMeshDataAsset_eventSetThemes_Parms, ThemeVariationMap), EMapPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UModularMeshDataAsset_SetThemes_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMaterialVariationContainer, METADATA_PARAMS(0, nullptr) }; // 1914518638
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UModularMeshDataAsset_SetThemes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModularMeshDataAsset_eventSetThemes_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 1914518638
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModularMeshDataAsset_SetThemes_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularMeshDataAsset_SetThemes_Statics::NewProp_MaterialVariationContainers_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularMeshDataAsset_SetThemes_Statics::NewProp_MaterialVariationContainers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularMeshDataAsset_SetThemes_Statics::NewProp_ThemeVariationMap_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularMeshDataAsset_SetThemes_Statics::NewProp_ThemeVariationMap_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularMeshDataAsset_SetThemes_Statics::NewProp_ThemeVariationMap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularMeshDataAsset_SetThemes_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularMeshDataAsset_SetThemes_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UModularMeshDataAsset_SetThemes_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UModularMeshDataAsset_SetThemes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModularMeshDataAsset, nullptr, "SetThemes", nullptr, nullptr, Z_Construct_UFunction_UModularMeshDataAsset_SetThemes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModularMeshDataAsset_SetThemes_Statics::PropPointers), sizeof(Z_Construct_UFunction_UModularMeshDataAsset_SetThemes_Statics::ModularMeshDataAsset_eventSetThemes_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UModularMeshDataAsset_SetThemes_Statics::Function_MetaDataParams), Z_Construct_UFunction_UModularMeshDataAsset_SetThemes_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UModularMeshDataAsset_SetThemes_Statics::ModularMeshDataAsset_eventSetThemes_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UModularMeshDataAsset_SetThemes()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UModularMeshDataAsset_SetThemes_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UModularMeshDataAsset::execSetThemes)
{
	P_GET_TARRAY(FMaterialVariationContainer,Z_Param_MaterialVariationContainers);
	P_GET_TMAP(FName,int32,Z_Param_ThemeVariationMap);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FMaterialVariationContainer>*)Z_Param__Result=P_THIS->SetThemes(Z_Param_MaterialVariationContainers,Z_Param_ThemeVariationMap);
	P_NATIVE_END;
}
// End Class UModularMeshDataAsset Function SetThemes

// Begin Class UModularMeshDataAsset Function SetThemesRandom
struct Z_Construct_UFunction_UModularMeshDataAsset_SetThemesRandom_Statics
{
	struct ModularMeshDataAsset_eventSetThemesRandom_Parms
	{
		TArray<FMaterialVariationContainer> MaterialVariationContainers;
		TArray<FMaterialVariationContainer> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// for each theme slot on current static mesh variation set a random variation\n" },
#endif
		{ "ModuleRelativePath", "Public/ModularMeshDataAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "for each theme slot on current static mesh variation set a random variation" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_MaterialVariationContainers_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_MaterialVariationContainers;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UModularMeshDataAsset_SetThemesRandom_Statics::NewProp_MaterialVariationContainers_Inner = { "MaterialVariationContainers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMaterialVariationContainer, METADATA_PARAMS(0, nullptr) }; // 1914518638
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UModularMeshDataAsset_SetThemesRandom_Statics::NewProp_MaterialVariationContainers = { "MaterialVariationContainers", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModularMeshDataAsset_eventSetThemesRandom_Parms, MaterialVariationContainers), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 1914518638
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UModularMeshDataAsset_SetThemesRandom_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMaterialVariationContainer, METADATA_PARAMS(0, nullptr) }; // 1914518638
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UModularMeshDataAsset_SetThemesRandom_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModularMeshDataAsset_eventSetThemesRandom_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 1914518638
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModularMeshDataAsset_SetThemesRandom_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularMeshDataAsset_SetThemesRandom_Statics::NewProp_MaterialVariationContainers_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularMeshDataAsset_SetThemesRandom_Statics::NewProp_MaterialVariationContainers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularMeshDataAsset_SetThemesRandom_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularMeshDataAsset_SetThemesRandom_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UModularMeshDataAsset_SetThemesRandom_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UModularMeshDataAsset_SetThemesRandom_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModularMeshDataAsset, nullptr, "SetThemesRandom", nullptr, nullptr, Z_Construct_UFunction_UModularMeshDataAsset_SetThemesRandom_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModularMeshDataAsset_SetThemesRandom_Statics::PropPointers), sizeof(Z_Construct_UFunction_UModularMeshDataAsset_SetThemesRandom_Statics::ModularMeshDataAsset_eventSetThemesRandom_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UModularMeshDataAsset_SetThemesRandom_Statics::Function_MetaDataParams), Z_Construct_UFunction_UModularMeshDataAsset_SetThemesRandom_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UModularMeshDataAsset_SetThemesRandom_Statics::ModularMeshDataAsset_eventSetThemesRandom_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UModularMeshDataAsset_SetThemesRandom()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UModularMeshDataAsset_SetThemesRandom_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UModularMeshDataAsset::execSetThemesRandom)
{
	P_GET_TARRAY(FMaterialVariationContainer,Z_Param_MaterialVariationContainers);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FMaterialVariationContainer>*)Z_Param__Result=P_THIS->SetThemesRandom(Z_Param_MaterialVariationContainers);
	P_NATIVE_END;
}
// End Class UModularMeshDataAsset Function SetThemesRandom

// Begin Class UModularMeshDataAsset
void UModularMeshDataAsset::StaticRegisterNativesUModularMeshDataAsset()
{
	UClass* Class = UModularMeshDataAsset::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CheckValueMaterials", &UModularMeshDataAsset::execCheckValueMaterials },
		{ "CheckValuePreset", &UModularMeshDataAsset::execCheckValuePreset },
		{ "CheckValueRelativeTransform", &UModularMeshDataAsset::execCheckValueRelativeTransform },
		{ "CheckValueStaticMesh", &UModularMeshDataAsset::execCheckValueStaticMesh },
		{ "CheckValuesThemes", &UModularMeshDataAsset::execCheckValuesThemes },
		{ "GetOffset", &UModularMeshDataAsset::execGetOffset },
		{ "GetRandomMaterialIndex", &UModularMeshDataAsset::execGetRandomMaterialIndex },
		{ "GetRandomStaticMeshIndex", &UModularMeshDataAsset::execGetRandomStaticMeshIndex },
		{ "GetRandomTransformIndex", &UModularMeshDataAsset::execGetRandomTransformIndex },
		{ "GetSoftObjectLoadSynchronously", &UModularMeshDataAsset::execGetSoftObjectLoadSynchronously },
		{ "GetStaticMesh", &UModularMeshDataAsset::execGetStaticMesh },
		{ "MakeRandomThemeMap", &UModularMeshDataAsset::execMakeRandomThemeMap },
		{ "SetMaterialVariations", &UModularMeshDataAsset::execSetMaterialVariations },
		{ "SetStaticMesh", &UModularMeshDataAsset::execSetStaticMesh },
		{ "SetStaticMeshComponentAlt", &UModularMeshDataAsset::execSetStaticMeshComponentAlt },
		{ "SetThemes", &UModularMeshDataAsset::execSetThemes },
		{ "SetThemesRandom", &UModularMeshDataAsset::execSetThemesRandom },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UModularMeshDataAsset);
UClass* Z_Construct_UClass_UModularMeshDataAsset_NoRegister()
{
	return UModularMeshDataAsset::StaticClass();
}
struct Z_Construct_UClass_UModularMeshDataAsset_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ModularMeshDataAsset.h" },
		{ "ModuleRelativePath", "Public/ModularMeshDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaticMeshVariations_MetaData[] = {
		{ "Category", "ModularMeshDataAsset" },
		{ "ModuleRelativePath", "Public/ModularMeshDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RelativeTransformVariations_MetaData[] = {
		{ "Category", "ModularMeshDataAsset" },
		{ "ModuleRelativePath", "Public/ModularMeshDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialThemes_MetaData[] = {
		{ "Category", "ModularMeshDataAsset" },
		{ "ModuleRelativePath", "Public/ModularMeshDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PresetVariations_MetaData[] = {
		{ "Category", "ModularMeshDataAsset" },
		{ "ModuleRelativePath", "Public/ModularMeshDataAsset.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_StaticMeshVariations_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_StaticMeshVariations;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RelativeTransformVariations_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_RelativeTransformVariations;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MaterialThemes_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_MaterialThemes_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_MaterialThemes;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PresetVariations_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PresetVariations;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UModularMeshDataAsset_CheckValueMaterials, "CheckValueMaterials" }, // 328461580
		{ &Z_Construct_UFunction_UModularMeshDataAsset_CheckValuePreset, "CheckValuePreset" }, // 4190665837
		{ &Z_Construct_UFunction_UModularMeshDataAsset_CheckValueRelativeTransform, "CheckValueRelativeTransform" }, // 2048881381
		{ &Z_Construct_UFunction_UModularMeshDataAsset_CheckValueStaticMesh, "CheckValueStaticMesh" }, // 2670711667
		{ &Z_Construct_UFunction_UModularMeshDataAsset_CheckValuesThemes, "CheckValuesThemes" }, // 1230894401
		{ &Z_Construct_UFunction_UModularMeshDataAsset_GetOffset, "GetOffset" }, // 2898898569
		{ &Z_Construct_UFunction_UModularMeshDataAsset_GetRandomMaterialIndex, "GetRandomMaterialIndex" }, // 1423510070
		{ &Z_Construct_UFunction_UModularMeshDataAsset_GetRandomStaticMeshIndex, "GetRandomStaticMeshIndex" }, // 1836292657
		{ &Z_Construct_UFunction_UModularMeshDataAsset_GetRandomTransformIndex, "GetRandomTransformIndex" }, // 2470941021
		{ &Z_Construct_UFunction_UModularMeshDataAsset_GetSoftObjectLoadSynchronously, "GetSoftObjectLoadSynchronously" }, // 3962558286
		{ &Z_Construct_UFunction_UModularMeshDataAsset_GetStaticMesh, "GetStaticMesh" }, // 1537528233
		{ &Z_Construct_UFunction_UModularMeshDataAsset_MakeRandomThemeMap, "MakeRandomThemeMap" }, // 2445149418
		{ &Z_Construct_UFunction_UModularMeshDataAsset_SetMaterialVariations, "SetMaterialVariations" }, // 3324130455
		{ &Z_Construct_UFunction_UModularMeshDataAsset_SetStaticMesh, "SetStaticMesh" }, // 216803355
		{ &Z_Construct_UFunction_UModularMeshDataAsset_SetStaticMeshComponentAlt, "SetStaticMeshComponentAlt" }, // 2258016758
		{ &Z_Construct_UFunction_UModularMeshDataAsset_SetThemes, "SetThemes" }, // 933271857
		{ &Z_Construct_UFunction_UModularMeshDataAsset_SetThemesRandom, "SetThemesRandom" }, // 4276307318
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UModularMeshDataAsset>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UModularMeshDataAsset_Statics::NewProp_StaticMeshVariations_Inner = { "StaticMeshVariations", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FStaticMeshVariation, METADATA_PARAMS(0, nullptr) }; // 3014425167
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UModularMeshDataAsset_Statics::NewProp_StaticMeshVariations = { "StaticMeshVariations", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UModularMeshDataAsset, StaticMeshVariations), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaticMeshVariations_MetaData), NewProp_StaticMeshVariations_MetaData) }; // 3014425167
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UModularMeshDataAsset_Statics::NewProp_RelativeTransformVariations_Inner = { "RelativeTransformVariations", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UModularMeshDataAsset_Statics::NewProp_RelativeTransformVariations = { "RelativeTransformVariations", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UModularMeshDataAsset, RelativeTransformVariations), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RelativeTransformVariations_MetaData), NewProp_RelativeTransformVariations_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UModularMeshDataAsset_Statics::NewProp_MaterialThemes_ValueProp = { "MaterialThemes", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FMaterialInstanceArray, METADATA_PARAMS(0, nullptr) }; // 1917830258
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UModularMeshDataAsset_Statics::NewProp_MaterialThemes_Key_KeyProp = { "MaterialThemes_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UModularMeshDataAsset_Statics::NewProp_MaterialThemes = { "MaterialThemes", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UModularMeshDataAsset, MaterialThemes), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialThemes_MetaData), NewProp_MaterialThemes_MetaData) }; // 1917830258
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UModularMeshDataAsset_Statics::NewProp_PresetVariations_Inner = { "PresetVariations", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FModularMeshPreset, METADATA_PARAMS(0, nullptr) }; // 775386363
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UModularMeshDataAsset_Statics::NewProp_PresetVariations = { "PresetVariations", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UModularMeshDataAsset, PresetVariations), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PresetVariations_MetaData), NewProp_PresetVariations_MetaData) }; // 775386363
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UModularMeshDataAsset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModularMeshDataAsset_Statics::NewProp_StaticMeshVariations_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModularMeshDataAsset_Statics::NewProp_StaticMeshVariations,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModularMeshDataAsset_Statics::NewProp_RelativeTransformVariations_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModularMeshDataAsset_Statics::NewProp_RelativeTransformVariations,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModularMeshDataAsset_Statics::NewProp_MaterialThemes_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModularMeshDataAsset_Statics::NewProp_MaterialThemes_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModularMeshDataAsset_Statics::NewProp_MaterialThemes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModularMeshDataAsset_Statics::NewProp_PresetVariations_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModularMeshDataAsset_Statics::NewProp_PresetVariations,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UModularMeshDataAsset_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UModularMeshDataAsset_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_ModularMeshes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UModularMeshDataAsset_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UModularMeshDataAsset_Statics::ClassParams = {
	&UModularMeshDataAsset::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UModularMeshDataAsset_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UModularMeshDataAsset_Statics::PropPointers),
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UModularMeshDataAsset_Statics::Class_MetaDataParams), Z_Construct_UClass_UModularMeshDataAsset_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UModularMeshDataAsset()
{
	if (!Z_Registration_Info_UClass_UModularMeshDataAsset.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UModularMeshDataAsset.OuterSingleton, Z_Construct_UClass_UModularMeshDataAsset_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UModularMeshDataAsset.OuterSingleton;
}
template<> MODULARMESHES_API UClass* StaticClass<UModularMeshDataAsset>()
{
	return UModularMeshDataAsset::StaticClass();
}
UModularMeshDataAsset::UModularMeshDataAsset(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UModularMeshDataAsset);
UModularMeshDataAsset::~UModularMeshDataAsset() {}
// End Class UModularMeshDataAsset

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_rober_OneDrive_Documents_Game_Dev_Portfolio_UnrealEngine_Plugins_ModularMeshes_Source_ModularMeshes_Public_ModularMeshDataAsset_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FMaterialVariationContainer::StaticStruct, Z_Construct_UScriptStruct_FMaterialVariationContainer_Statics::NewStructOps, TEXT("MaterialVariationContainer"), &Z_Registration_Info_UScriptStruct_MaterialVariationContainer, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMaterialVariationContainer), 1914518638U) },
		{ FStaticMeshVariation::StaticStruct, Z_Construct_UScriptStruct_FStaticMeshVariation_Statics::NewStructOps, TEXT("StaticMeshVariation"), &Z_Registration_Info_UScriptStruct_StaticMeshVariation, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStaticMeshVariation), 3014425167U) },
		{ FMaterialVariation::StaticStruct, Z_Construct_UScriptStruct_FMaterialVariation_Statics::NewStructOps, TEXT("MaterialVariation"), &Z_Registration_Info_UScriptStruct_MaterialVariation, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMaterialVariation), 3077761629U) },
		{ FMaterialInstanceArray::StaticStruct, Z_Construct_UScriptStruct_FMaterialInstanceArray_Statics::NewStructOps, TEXT("MaterialInstanceArray"), &Z_Registration_Info_UScriptStruct_MaterialInstanceArray, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMaterialInstanceArray), 1917830258U) },
		{ FModularMeshPreset::StaticStruct, Z_Construct_UScriptStruct_FModularMeshPreset_Statics::NewStructOps, TEXT("ModularMeshPreset"), &Z_Registration_Info_UScriptStruct_ModularMeshPreset, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FModularMeshPreset), 775386363U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UModularMeshDataAsset, UModularMeshDataAsset::StaticClass, TEXT("UModularMeshDataAsset"), &Z_Registration_Info_UClass_UModularMeshDataAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UModularMeshDataAsset), 672586443U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_rober_OneDrive_Documents_Game_Dev_Portfolio_UnrealEngine_Plugins_ModularMeshes_Source_ModularMeshes_Public_ModularMeshDataAsset_h_700536094(TEXT("/Script/ModularMeshes"),
	Z_CompiledInDeferFile_FID_Users_rober_OneDrive_Documents_Game_Dev_Portfolio_UnrealEngine_Plugins_ModularMeshes_Source_ModularMeshes_Public_ModularMeshDataAsset_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_rober_OneDrive_Documents_Game_Dev_Portfolio_UnrealEngine_Plugins_ModularMeshes_Source_ModularMeshes_Public_ModularMeshDataAsset_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Users_rober_OneDrive_Documents_Game_Dev_Portfolio_UnrealEngine_Plugins_ModularMeshes_Source_ModularMeshes_Public_ModularMeshDataAsset_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_rober_OneDrive_Documents_Game_Dev_Portfolio_UnrealEngine_Plugins_ModularMeshes_Source_ModularMeshes_Public_ModularMeshDataAsset_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
