// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GelatinousWidget/Public/GelatinousWidgetBFL.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGelatinousWidgetBFL() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
GELATINOUSWIDGET_API UClass* Z_Construct_UClass_UGelatinousWidgetBFL();
GELATINOUSWIDGET_API UClass* Z_Construct_UClass_UGelatinousWidgetBFL_NoRegister();
UPackage* Z_Construct_UPackage__Script_GelatinousWidget();
// End Cross Module References

// Begin Class UGelatinousWidgetBFL Function ReadStringMapFromJson
struct Z_Construct_UFunction_UGelatinousWidgetBFL_ReadStringMapFromJson_Statics
{
	struct GelatinousWidgetBFL_eventReadStringMapFromJson_Parms
	{
		FString FilePath;
		TMap<FString,FString> OutJsonMap;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Gelatinous Widget Helpers" },
		{ "ModuleRelativePath", "Public/GelatinousWidgetBFL.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FilePath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_FilePath;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OutJsonMap_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OutJsonMap_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_OutJsonMap;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGelatinousWidgetBFL_ReadStringMapFromJson_Statics::NewProp_FilePath = { "FilePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GelatinousWidgetBFL_eventReadStringMapFromJson_Parms, FilePath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FilePath_MetaData), NewProp_FilePath_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGelatinousWidgetBFL_ReadStringMapFromJson_Statics::NewProp_OutJsonMap_ValueProp = { "OutJsonMap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGelatinousWidgetBFL_ReadStringMapFromJson_Statics::NewProp_OutJsonMap_Key_KeyProp = { "OutJsonMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UGelatinousWidgetBFL_ReadStringMapFromJson_Statics::NewProp_OutJsonMap = { "OutJsonMap", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GelatinousWidgetBFL_eventReadStringMapFromJson_Parms, OutJsonMap), EMapPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UGelatinousWidgetBFL_ReadStringMapFromJson_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((GelatinousWidgetBFL_eventReadStringMapFromJson_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGelatinousWidgetBFL_ReadStringMapFromJson_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GelatinousWidgetBFL_eventReadStringMapFromJson_Parms), &Z_Construct_UFunction_UGelatinousWidgetBFL_ReadStringMapFromJson_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGelatinousWidgetBFL_ReadStringMapFromJson_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGelatinousWidgetBFL_ReadStringMapFromJson_Statics::NewProp_FilePath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGelatinousWidgetBFL_ReadStringMapFromJson_Statics::NewProp_OutJsonMap_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGelatinousWidgetBFL_ReadStringMapFromJson_Statics::NewProp_OutJsonMap_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGelatinousWidgetBFL_ReadStringMapFromJson_Statics::NewProp_OutJsonMap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGelatinousWidgetBFL_ReadStringMapFromJson_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGelatinousWidgetBFL_ReadStringMapFromJson_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGelatinousWidgetBFL_ReadStringMapFromJson_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGelatinousWidgetBFL, nullptr, "ReadStringMapFromJson", nullptr, nullptr, Z_Construct_UFunction_UGelatinousWidgetBFL_ReadStringMapFromJson_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGelatinousWidgetBFL_ReadStringMapFromJson_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGelatinousWidgetBFL_ReadStringMapFromJson_Statics::GelatinousWidgetBFL_eventReadStringMapFromJson_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGelatinousWidgetBFL_ReadStringMapFromJson_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGelatinousWidgetBFL_ReadStringMapFromJson_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGelatinousWidgetBFL_ReadStringMapFromJson_Statics::GelatinousWidgetBFL_eventReadStringMapFromJson_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGelatinousWidgetBFL_ReadStringMapFromJson()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGelatinousWidgetBFL_ReadStringMapFromJson_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGelatinousWidgetBFL::execReadStringMapFromJson)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_FilePath);
	P_GET_TMAP_REF(FString,FString,Z_Param_Out_OutJsonMap);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UGelatinousWidgetBFL::ReadStringMapFromJson(Z_Param_FilePath,Z_Param_Out_OutJsonMap);
	P_NATIVE_END;
}
// End Class UGelatinousWidgetBFL Function ReadStringMapFromJson

// Begin Class UGelatinousWidgetBFL Function WriteStringMapToJson
struct Z_Construct_UFunction_UGelatinousWidgetBFL_WriteStringMapToJson_Statics
{
	struct GelatinousWidgetBFL_eventWriteStringMapToJson_Parms
	{
		FString FilePath;
		TMap<FString,FString> MapData;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Gelatinous Widget Helpers" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// save a TMap<FString, FString> to file\n" },
#endif
		{ "ModuleRelativePath", "Public/GelatinousWidgetBFL.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "save a TMap<FString, FString> to file" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FilePath_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MapData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_FilePath;
	static const UECodeGen_Private::FStrPropertyParams NewProp_MapData_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_MapData_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_MapData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGelatinousWidgetBFL_WriteStringMapToJson_Statics::NewProp_FilePath = { "FilePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GelatinousWidgetBFL_eventWriteStringMapToJson_Parms, FilePath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FilePath_MetaData), NewProp_FilePath_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGelatinousWidgetBFL_WriteStringMapToJson_Statics::NewProp_MapData_ValueProp = { "MapData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGelatinousWidgetBFL_WriteStringMapToJson_Statics::NewProp_MapData_Key_KeyProp = { "MapData_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UGelatinousWidgetBFL_WriteStringMapToJson_Statics::NewProp_MapData = { "MapData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GelatinousWidgetBFL_eventWriteStringMapToJson_Parms, MapData), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MapData_MetaData), NewProp_MapData_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGelatinousWidgetBFL_WriteStringMapToJson_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGelatinousWidgetBFL_WriteStringMapToJson_Statics::NewProp_FilePath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGelatinousWidgetBFL_WriteStringMapToJson_Statics::NewProp_MapData_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGelatinousWidgetBFL_WriteStringMapToJson_Statics::NewProp_MapData_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGelatinousWidgetBFL_WriteStringMapToJson_Statics::NewProp_MapData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGelatinousWidgetBFL_WriteStringMapToJson_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGelatinousWidgetBFL_WriteStringMapToJson_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGelatinousWidgetBFL, nullptr, "WriteStringMapToJson", nullptr, nullptr, Z_Construct_UFunction_UGelatinousWidgetBFL_WriteStringMapToJson_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGelatinousWidgetBFL_WriteStringMapToJson_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGelatinousWidgetBFL_WriteStringMapToJson_Statics::GelatinousWidgetBFL_eventWriteStringMapToJson_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGelatinousWidgetBFL_WriteStringMapToJson_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGelatinousWidgetBFL_WriteStringMapToJson_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGelatinousWidgetBFL_WriteStringMapToJson_Statics::GelatinousWidgetBFL_eventWriteStringMapToJson_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGelatinousWidgetBFL_WriteStringMapToJson()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGelatinousWidgetBFL_WriteStringMapToJson_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGelatinousWidgetBFL::execWriteStringMapToJson)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_FilePath);
	P_GET_TMAP_REF(FString,FString,Z_Param_Out_MapData);
	P_FINISH;
	P_NATIVE_BEGIN;
	UGelatinousWidgetBFL::WriteStringMapToJson(Z_Param_FilePath,Z_Param_Out_MapData);
	P_NATIVE_END;
}
// End Class UGelatinousWidgetBFL Function WriteStringMapToJson

// Begin Class UGelatinousWidgetBFL
void UGelatinousWidgetBFL::StaticRegisterNativesUGelatinousWidgetBFL()
{
	UClass* Class = UGelatinousWidgetBFL::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ReadStringMapFromJson", &UGelatinousWidgetBFL::execReadStringMapFromJson },
		{ "WriteStringMapToJson", &UGelatinousWidgetBFL::execWriteStringMapToJson },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGelatinousWidgetBFL);
UClass* Z_Construct_UClass_UGelatinousWidgetBFL_NoRegister()
{
	return UGelatinousWidgetBFL::StaticClass();
}
struct Z_Construct_UClass_UGelatinousWidgetBFL_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n */" },
#endif
		{ "IncludePath", "GelatinousWidgetBFL.h" },
		{ "ModuleRelativePath", "Public/GelatinousWidgetBFL.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UGelatinousWidgetBFL_ReadStringMapFromJson, "ReadStringMapFromJson" }, // 3752650139
		{ &Z_Construct_UFunction_UGelatinousWidgetBFL_WriteStringMapToJson, "WriteStringMapToJson" }, // 3054836472
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGelatinousWidgetBFL>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UGelatinousWidgetBFL_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_GelatinousWidget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGelatinousWidgetBFL_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGelatinousWidgetBFL_Statics::ClassParams = {
	&UGelatinousWidgetBFL::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGelatinousWidgetBFL_Statics::Class_MetaDataParams), Z_Construct_UClass_UGelatinousWidgetBFL_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGelatinousWidgetBFL()
{
	if (!Z_Registration_Info_UClass_UGelatinousWidgetBFL.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGelatinousWidgetBFL.OuterSingleton, Z_Construct_UClass_UGelatinousWidgetBFL_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGelatinousWidgetBFL.OuterSingleton;
}
template<> GELATINOUSWIDGET_API UClass* StaticClass<UGelatinousWidgetBFL>()
{
	return UGelatinousWidgetBFL::StaticClass();
}
UGelatinousWidgetBFL::UGelatinousWidgetBFL(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGelatinousWidgetBFL);
UGelatinousWidgetBFL::~UGelatinousWidgetBFL() {}
// End Class UGelatinousWidgetBFL

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_rober_OneDrive_Documents_Game_Dev_Portfolio_UnrealEngine_Plugins_GelatinousWidget_Source_GelatinousWidget_Public_GelatinousWidgetBFL_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGelatinousWidgetBFL, UGelatinousWidgetBFL::StaticClass, TEXT("UGelatinousWidgetBFL"), &Z_Registration_Info_UClass_UGelatinousWidgetBFL, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGelatinousWidgetBFL), 858374087U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_rober_OneDrive_Documents_Game_Dev_Portfolio_UnrealEngine_Plugins_GelatinousWidget_Source_GelatinousWidget_Public_GelatinousWidgetBFL_h_743020518(TEXT("/Script/GelatinousWidget"),
	Z_CompiledInDeferFile_FID_Users_rober_OneDrive_Documents_Game_Dev_Portfolio_UnrealEngine_Plugins_GelatinousWidget_Source_GelatinousWidget_Public_GelatinousWidgetBFL_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_rober_OneDrive_Documents_Game_Dev_Portfolio_UnrealEngine_Plugins_GelatinousWidget_Source_GelatinousWidget_Public_GelatinousWidgetBFL_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
