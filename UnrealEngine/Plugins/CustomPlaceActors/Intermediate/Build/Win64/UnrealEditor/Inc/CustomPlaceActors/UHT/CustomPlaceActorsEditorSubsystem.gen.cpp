// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CustomPlaceActors/Public/CustomPlaceActorsEditorSubsystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCustomPlaceActorsEditorSubsystem() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FAssetData();
CUSTOMPLACEACTORS_API UClass* Z_Construct_UClass_UCustomPlaceActorsEditorSubsystem();
CUSTOMPLACEACTORS_API UClass* Z_Construct_UClass_UCustomPlaceActorsEditorSubsystem_NoRegister();
EDITORSUBSYSTEM_API UClass* Z_Construct_UClass_UEditorSubsystem();
UPackage* Z_Construct_UPackage__Script_CustomPlaceActors();
// End Cross Module References

// Begin Class UCustomPlaceActorsEditorSubsystem Function OnCustomActorAssetDeleted
struct Z_Construct_UFunction_UCustomPlaceActorsEditorSubsystem_OnCustomActorAssetDeleted_Statics
{
	struct CustomPlaceActorsEditorSubsystem_eventOnCustomActorAssetDeleted_Parms
	{
		TArray<UClass*> DeletedAssets;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CustomPlaceActorsEditorSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeletedAssets_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_DeletedAssets_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DeletedAssets;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UCustomPlaceActorsEditorSubsystem_OnCustomActorAssetDeleted_Statics::NewProp_DeletedAssets_Inner = { "DeletedAssets", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCustomPlaceActorsEditorSubsystem_OnCustomActorAssetDeleted_Statics::NewProp_DeletedAssets = { "DeletedAssets", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CustomPlaceActorsEditorSubsystem_eventOnCustomActorAssetDeleted_Parms, DeletedAssets), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeletedAssets_MetaData), NewProp_DeletedAssets_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomPlaceActorsEditorSubsystem_OnCustomActorAssetDeleted_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomPlaceActorsEditorSubsystem_OnCustomActorAssetDeleted_Statics::NewProp_DeletedAssets_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomPlaceActorsEditorSubsystem_OnCustomActorAssetDeleted_Statics::NewProp_DeletedAssets,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomPlaceActorsEditorSubsystem_OnCustomActorAssetDeleted_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomPlaceActorsEditorSubsystem_OnCustomActorAssetDeleted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomPlaceActorsEditorSubsystem, nullptr, "OnCustomActorAssetDeleted", nullptr, nullptr, Z_Construct_UFunction_UCustomPlaceActorsEditorSubsystem_OnCustomActorAssetDeleted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomPlaceActorsEditorSubsystem_OnCustomActorAssetDeleted_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCustomPlaceActorsEditorSubsystem_OnCustomActorAssetDeleted_Statics::CustomPlaceActorsEditorSubsystem_eventOnCustomActorAssetDeleted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomPlaceActorsEditorSubsystem_OnCustomActorAssetDeleted_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCustomPlaceActorsEditorSubsystem_OnCustomActorAssetDeleted_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCustomPlaceActorsEditorSubsystem_OnCustomActorAssetDeleted_Statics::CustomPlaceActorsEditorSubsystem_eventOnCustomActorAssetDeleted_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCustomPlaceActorsEditorSubsystem_OnCustomActorAssetDeleted()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCustomPlaceActorsEditorSubsystem_OnCustomActorAssetDeleted_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCustomPlaceActorsEditorSubsystem::execOnCustomActorAssetDeleted)
{
	P_GET_TARRAY_REF(UClass*,Z_Param_Out_DeletedAssets);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnCustomActorAssetDeleted(Z_Param_Out_DeletedAssets);
	P_NATIVE_END;
}
// End Class UCustomPlaceActorsEditorSubsystem Function OnCustomActorAssetDeleted

// Begin Class UCustomPlaceActorsEditorSubsystem Function RegisterAssets
struct Z_Construct_UFunction_UCustomPlaceActorsEditorSubsystem_RegisterAssets_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CustomPlaceActorsEditorSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomPlaceActorsEditorSubsystem_RegisterAssets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomPlaceActorsEditorSubsystem, nullptr, "RegisterAssets", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomPlaceActorsEditorSubsystem_RegisterAssets_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCustomPlaceActorsEditorSubsystem_RegisterAssets_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UCustomPlaceActorsEditorSubsystem_RegisterAssets()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCustomPlaceActorsEditorSubsystem_RegisterAssets_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCustomPlaceActorsEditorSubsystem::execRegisterAssets)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RegisterAssets();
	P_NATIVE_END;
}
// End Class UCustomPlaceActorsEditorSubsystem Function RegisterAssets

// Begin Class UCustomPlaceActorsEditorSubsystem Function ResetCategories
struct Z_Construct_UFunction_UCustomPlaceActorsEditorSubsystem_ResetCategories_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CustomPlaceActorsEditorSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomPlaceActorsEditorSubsystem_ResetCategories_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomPlaceActorsEditorSubsystem, nullptr, "ResetCategories", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomPlaceActorsEditorSubsystem_ResetCategories_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCustomPlaceActorsEditorSubsystem_ResetCategories_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UCustomPlaceActorsEditorSubsystem_ResetCategories()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCustomPlaceActorsEditorSubsystem_ResetCategories_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCustomPlaceActorsEditorSubsystem::execResetCategories)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ResetCategories();
	P_NATIVE_END;
}
// End Class UCustomPlaceActorsEditorSubsystem Function ResetCategories

// Begin Class UCustomPlaceActorsEditorSubsystem Function UnRegisterAssets
struct Z_Construct_UFunction_UCustomPlaceActorsEditorSubsystem_UnRegisterAssets_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CustomPlaceActorsEditorSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomPlaceActorsEditorSubsystem_UnRegisterAssets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomPlaceActorsEditorSubsystem, nullptr, "UnRegisterAssets", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomPlaceActorsEditorSubsystem_UnRegisterAssets_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCustomPlaceActorsEditorSubsystem_UnRegisterAssets_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UCustomPlaceActorsEditorSubsystem_UnRegisterAssets()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCustomPlaceActorsEditorSubsystem_UnRegisterAssets_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCustomPlaceActorsEditorSubsystem::execUnRegisterAssets)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UnRegisterAssets();
	P_NATIVE_END;
}
// End Class UCustomPlaceActorsEditorSubsystem Function UnRegisterAssets

// Begin Class UCustomPlaceActorsEditorSubsystem
void UCustomPlaceActorsEditorSubsystem::StaticRegisterNativesUCustomPlaceActorsEditorSubsystem()
{
	UClass* Class = UCustomPlaceActorsEditorSubsystem::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnCustomActorAssetDeleted", &UCustomPlaceActorsEditorSubsystem::execOnCustomActorAssetDeleted },
		{ "RegisterAssets", &UCustomPlaceActorsEditorSubsystem::execRegisterAssets },
		{ "ResetCategories", &UCustomPlaceActorsEditorSubsystem::execResetCategories },
		{ "UnRegisterAssets", &UCustomPlaceActorsEditorSubsystem::execUnRegisterAssets },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCustomPlaceActorsEditorSubsystem);
UClass* Z_Construct_UClass_UCustomPlaceActorsEditorSubsystem_NoRegister()
{
	return UCustomPlaceActorsEditorSubsystem::StaticClass();
}
struct Z_Construct_UClass_UCustomPlaceActorsEditorSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n */" },
#endif
		{ "IncludePath", "CustomPlaceActorsEditorSubsystem.h" },
		{ "ModuleRelativePath", "Public/CustomPlaceActorsEditorSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RegisteredCategories_MetaData[] = {
		{ "ModuleRelativePath", "Public/CustomPlaceActorsEditorSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssetDataArray_MetaData[] = {
		{ "ModuleRelativePath", "Public/CustomPlaceActorsEditorSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_RegisteredCategories_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_RegisteredCategories;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AssetDataArray_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AssetDataArray;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UCustomPlaceActorsEditorSubsystem_OnCustomActorAssetDeleted, "OnCustomActorAssetDeleted" }, // 2515286064
		{ &Z_Construct_UFunction_UCustomPlaceActorsEditorSubsystem_RegisterAssets, "RegisterAssets" }, // 715254414
		{ &Z_Construct_UFunction_UCustomPlaceActorsEditorSubsystem_ResetCategories, "ResetCategories" }, // 4095623254
		{ &Z_Construct_UFunction_UCustomPlaceActorsEditorSubsystem_UnRegisterAssets, "UnRegisterAssets" }, // 3630992365
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCustomPlaceActorsEditorSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UCustomPlaceActorsEditorSubsystem_Statics::NewProp_RegisteredCategories_Inner = { "RegisteredCategories", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCustomPlaceActorsEditorSubsystem_Statics::NewProp_RegisteredCategories = { "RegisteredCategories", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCustomPlaceActorsEditorSubsystem, RegisteredCategories), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RegisteredCategories_MetaData), NewProp_RegisteredCategories_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCustomPlaceActorsEditorSubsystem_Statics::NewProp_AssetDataArray_Inner = { "AssetDataArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FAssetData, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCustomPlaceActorsEditorSubsystem_Statics::NewProp_AssetDataArray = { "AssetDataArray", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCustomPlaceActorsEditorSubsystem, AssetDataArray), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssetDataArray_MetaData), NewProp_AssetDataArray_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCustomPlaceActorsEditorSubsystem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomPlaceActorsEditorSubsystem_Statics::NewProp_RegisteredCategories_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomPlaceActorsEditorSubsystem_Statics::NewProp_RegisteredCategories,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomPlaceActorsEditorSubsystem_Statics::NewProp_AssetDataArray_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomPlaceActorsEditorSubsystem_Statics::NewProp_AssetDataArray,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomPlaceActorsEditorSubsystem_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCustomPlaceActorsEditorSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEditorSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_CustomPlaceActors,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomPlaceActorsEditorSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCustomPlaceActorsEditorSubsystem_Statics::ClassParams = {
	&UCustomPlaceActorsEditorSubsystem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UCustomPlaceActorsEditorSubsystem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UCustomPlaceActorsEditorSubsystem_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomPlaceActorsEditorSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UCustomPlaceActorsEditorSubsystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCustomPlaceActorsEditorSubsystem()
{
	if (!Z_Registration_Info_UClass_UCustomPlaceActorsEditorSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCustomPlaceActorsEditorSubsystem.OuterSingleton, Z_Construct_UClass_UCustomPlaceActorsEditorSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCustomPlaceActorsEditorSubsystem.OuterSingleton;
}
template<> CUSTOMPLACEACTORS_API UClass* StaticClass<UCustomPlaceActorsEditorSubsystem>()
{
	return UCustomPlaceActorsEditorSubsystem::StaticClass();
}
UCustomPlaceActorsEditorSubsystem::UCustomPlaceActorsEditorSubsystem() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCustomPlaceActorsEditorSubsystem);
UCustomPlaceActorsEditorSubsystem::~UCustomPlaceActorsEditorSubsystem() {}
// End Class UCustomPlaceActorsEditorSubsystem

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_rober_OneDrive_Documents_Game_Dev_Portfolio_UnrealEngine_Plugins_CustomPlaceActors_Source_CustomPlaceActors_Public_CustomPlaceActorsEditorSubsystem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCustomPlaceActorsEditorSubsystem, UCustomPlaceActorsEditorSubsystem::StaticClass, TEXT("UCustomPlaceActorsEditorSubsystem"), &Z_Registration_Info_UClass_UCustomPlaceActorsEditorSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCustomPlaceActorsEditorSubsystem), 1150440497U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_rober_OneDrive_Documents_Game_Dev_Portfolio_UnrealEngine_Plugins_CustomPlaceActors_Source_CustomPlaceActors_Public_CustomPlaceActorsEditorSubsystem_h_2263961738(TEXT("/Script/CustomPlaceActors"),
	Z_CompiledInDeferFile_FID_Users_rober_OneDrive_Documents_Game_Dev_Portfolio_UnrealEngine_Plugins_CustomPlaceActors_Source_CustomPlaceActors_Public_CustomPlaceActorsEditorSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_rober_OneDrive_Documents_Game_Dev_Portfolio_UnrealEngine_Plugins_CustomPlaceActors_Source_CustomPlaceActors_Public_CustomPlaceActorsEditorSubsystem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
