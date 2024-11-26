// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CustomPlaceActors/Public/CustomPlaceActorsDataAsset.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCustomPlaceActorsDataAsset() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FAssetData();
CUSTOMPLACEACTORS_API UClass* Z_Construct_UClass_UCustomPlaceActorsDataAsset();
CUSTOMPLACEACTORS_API UClass* Z_Construct_UClass_UCustomPlaceActorsDataAsset_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
UPackage* Z_Construct_UPackage__Script_CustomPlaceActors();
// End Cross Module References

// Begin Class UCustomPlaceActorsDataAsset Function AddItems
struct Z_Construct_UFunction_UCustomPlaceActorsDataAsset_AddItems_Statics
{
	struct FTopLevelAssetPath
	{
		FName PackageName;
		FName AssetName;
	};

	struct CustomPlaceActorsDataAsset_eventAddItems_Parms
	{
		TArray<FAssetData> AssetData;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CustomPlaceActorsDataAsset.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_AssetData_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AssetData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCustomPlaceActorsDataAsset_AddItems_Statics::NewProp_AssetData_Inner = { "AssetData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FAssetData, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCustomPlaceActorsDataAsset_AddItems_Statics::NewProp_AssetData = { "AssetData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CustomPlaceActorsDataAsset_eventAddItems_Parms, AssetData), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomPlaceActorsDataAsset_AddItems_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomPlaceActorsDataAsset_AddItems_Statics::NewProp_AssetData_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomPlaceActorsDataAsset_AddItems_Statics::NewProp_AssetData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomPlaceActorsDataAsset_AddItems_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomPlaceActorsDataAsset_AddItems_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomPlaceActorsDataAsset, nullptr, "AddItems", nullptr, nullptr, Z_Construct_UFunction_UCustomPlaceActorsDataAsset_AddItems_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomPlaceActorsDataAsset_AddItems_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCustomPlaceActorsDataAsset_AddItems_Statics::CustomPlaceActorsDataAsset_eventAddItems_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomPlaceActorsDataAsset_AddItems_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCustomPlaceActorsDataAsset_AddItems_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCustomPlaceActorsDataAsset_AddItems_Statics::CustomPlaceActorsDataAsset_eventAddItems_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCustomPlaceActorsDataAsset_AddItems()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCustomPlaceActorsDataAsset_AddItems_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCustomPlaceActorsDataAsset::execAddItems)
{
	P_GET_TARRAY(FAssetData,Z_Param_AssetData);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddItems(Z_Param_AssetData);
	P_NATIVE_END;
}
// End Class UCustomPlaceActorsDataAsset Function AddItems

// Begin Class UCustomPlaceActorsDataAsset Function RemoveItems
struct Z_Construct_UFunction_UCustomPlaceActorsDataAsset_RemoveItems_Statics
{
	struct FTopLevelAssetPath
	{
		FName PackageName;
		FName AssetName;
	};

	struct CustomPlaceActorsDataAsset_eventRemoveItems_Parms
	{
		TArray<FAssetData> AssetData;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CustomPlaceActorsDataAsset.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_AssetData_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AssetData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCustomPlaceActorsDataAsset_RemoveItems_Statics::NewProp_AssetData_Inner = { "AssetData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FAssetData, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCustomPlaceActorsDataAsset_RemoveItems_Statics::NewProp_AssetData = { "AssetData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CustomPlaceActorsDataAsset_eventRemoveItems_Parms, AssetData), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomPlaceActorsDataAsset_RemoveItems_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomPlaceActorsDataAsset_RemoveItems_Statics::NewProp_AssetData_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomPlaceActorsDataAsset_RemoveItems_Statics::NewProp_AssetData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomPlaceActorsDataAsset_RemoveItems_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomPlaceActorsDataAsset_RemoveItems_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomPlaceActorsDataAsset, nullptr, "RemoveItems", nullptr, nullptr, Z_Construct_UFunction_UCustomPlaceActorsDataAsset_RemoveItems_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomPlaceActorsDataAsset_RemoveItems_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCustomPlaceActorsDataAsset_RemoveItems_Statics::CustomPlaceActorsDataAsset_eventRemoveItems_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomPlaceActorsDataAsset_RemoveItems_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCustomPlaceActorsDataAsset_RemoveItems_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCustomPlaceActorsDataAsset_RemoveItems_Statics::CustomPlaceActorsDataAsset_eventRemoveItems_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCustomPlaceActorsDataAsset_RemoveItems()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCustomPlaceActorsDataAsset_RemoveItems_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCustomPlaceActorsDataAsset::execRemoveItems)
{
	P_GET_TARRAY(FAssetData,Z_Param_AssetData);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveItems(Z_Param_AssetData);
	P_NATIVE_END;
}
// End Class UCustomPlaceActorsDataAsset Function RemoveItems

// Begin Class UCustomPlaceActorsDataAsset Function ResetCategories
struct Z_Construct_UFunction_UCustomPlaceActorsDataAsset_ResetCategories_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CustomPlaceActorsDataAsset.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomPlaceActorsDataAsset_ResetCategories_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomPlaceActorsDataAsset, nullptr, "ResetCategories", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00082401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomPlaceActorsDataAsset_ResetCategories_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCustomPlaceActorsDataAsset_ResetCategories_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UCustomPlaceActorsDataAsset_ResetCategories()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCustomPlaceActorsDataAsset_ResetCategories_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCustomPlaceActorsDataAsset::execResetCategories)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	UCustomPlaceActorsDataAsset::ResetCategories();
	P_NATIVE_END;
}
// End Class UCustomPlaceActorsDataAsset Function ResetCategories

// Begin Class UCustomPlaceActorsDataAsset
void UCustomPlaceActorsDataAsset::StaticRegisterNativesUCustomPlaceActorsDataAsset()
{
	UClass* Class = UCustomPlaceActorsDataAsset::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddItems", &UCustomPlaceActorsDataAsset::execAddItems },
		{ "RemoveItems", &UCustomPlaceActorsDataAsset::execRemoveItems },
		{ "ResetCategories", &UCustomPlaceActorsDataAsset::execResetCategories },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCustomPlaceActorsDataAsset);
UClass* Z_Construct_UClass_UCustomPlaceActorsDataAsset_NoRegister()
{
	return UCustomPlaceActorsDataAsset::StaticClass();
}
struct Z_Construct_UClass_UCustomPlaceActorsDataAsset_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n */" },
#endif
		{ "IncludePath", "CustomPlaceActorsDataAsset.h" },
		{ "ModuleRelativePath", "Public/CustomPlaceActorsDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SortOrder_MetaData[] = {
		{ "Category", "CustomPlaceActorsDataAsset" },
		{ "ModuleRelativePath", "Public/CustomPlaceActorsDataAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "lower numbers will be ordered first" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Items_MetaData[] = {
		{ "Category", "CustomPlaceActorsDataAsset" },
		{ "ModuleRelativePath", "Public/CustomPlaceActorsDataAsset.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_SortOrder;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Items_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Items;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UCustomPlaceActorsDataAsset_AddItems, "AddItems" }, // 707232600
		{ &Z_Construct_UFunction_UCustomPlaceActorsDataAsset_RemoveItems, "RemoveItems" }, // 1106576630
		{ &Z_Construct_UFunction_UCustomPlaceActorsDataAsset_ResetCategories, "ResetCategories" }, // 2405601503
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCustomPlaceActorsDataAsset>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCustomPlaceActorsDataAsset_Statics::NewProp_SortOrder = { "SortOrder", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCustomPlaceActorsDataAsset, SortOrder), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SortOrder_MetaData), NewProp_SortOrder_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCustomPlaceActorsDataAsset_Statics::NewProp_Items_Inner = { "Items", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCustomPlaceActorsDataAsset_Statics::NewProp_Items = { "Items", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCustomPlaceActorsDataAsset, Items), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Items_MetaData), NewProp_Items_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCustomPlaceActorsDataAsset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomPlaceActorsDataAsset_Statics::NewProp_SortOrder,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomPlaceActorsDataAsset_Statics::NewProp_Items_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomPlaceActorsDataAsset_Statics::NewProp_Items,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomPlaceActorsDataAsset_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCustomPlaceActorsDataAsset_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_CustomPlaceActors,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomPlaceActorsDataAsset_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCustomPlaceActorsDataAsset_Statics::ClassParams = {
	&UCustomPlaceActorsDataAsset::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UCustomPlaceActorsDataAsset_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UCustomPlaceActorsDataAsset_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomPlaceActorsDataAsset_Statics::Class_MetaDataParams), Z_Construct_UClass_UCustomPlaceActorsDataAsset_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCustomPlaceActorsDataAsset()
{
	if (!Z_Registration_Info_UClass_UCustomPlaceActorsDataAsset.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCustomPlaceActorsDataAsset.OuterSingleton, Z_Construct_UClass_UCustomPlaceActorsDataAsset_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCustomPlaceActorsDataAsset.OuterSingleton;
}
template<> CUSTOMPLACEACTORS_API UClass* StaticClass<UCustomPlaceActorsDataAsset>()
{
	return UCustomPlaceActorsDataAsset::StaticClass();
}
UCustomPlaceActorsDataAsset::UCustomPlaceActorsDataAsset(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCustomPlaceActorsDataAsset);
UCustomPlaceActorsDataAsset::~UCustomPlaceActorsDataAsset() {}
// End Class UCustomPlaceActorsDataAsset

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_rober_OneDrive_Documents_Game_Dev_Portfolio_UnrealEngine_Plugins_CustomPlaceActors_Source_CustomPlaceActors_Public_CustomPlaceActorsDataAsset_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCustomPlaceActorsDataAsset, UCustomPlaceActorsDataAsset::StaticClass, TEXT("UCustomPlaceActorsDataAsset"), &Z_Registration_Info_UClass_UCustomPlaceActorsDataAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCustomPlaceActorsDataAsset), 2972686672U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_rober_OneDrive_Documents_Game_Dev_Portfolio_UnrealEngine_Plugins_CustomPlaceActors_Source_CustomPlaceActors_Public_CustomPlaceActorsDataAsset_h_3478407581(TEXT("/Script/CustomPlaceActors"),
	Z_CompiledInDeferFile_FID_Users_rober_OneDrive_Documents_Game_Dev_Portfolio_UnrealEngine_Plugins_CustomPlaceActors_Source_CustomPlaceActors_Public_CustomPlaceActorsDataAsset_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_rober_OneDrive_Documents_Game_Dev_Portfolio_UnrealEngine_Plugins_CustomPlaceActors_Source_CustomPlaceActors_Public_CustomPlaceActorsDataAsset_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
