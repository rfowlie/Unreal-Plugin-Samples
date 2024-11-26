// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SwiftConsole/Public/SwiftConsoleDeveloperSettings.h"
#include "Runtime/InputCore/Classes/InputCoreTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSwiftConsoleDeveloperSettings() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
INPUTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FKey();
SWIFTCONSOLE_API UClass* Z_Construct_UClass_USwiftConsoleDeveloperSettings();
SWIFTCONSOLE_API UClass* Z_Construct_UClass_USwiftConsoleDeveloperSettings_NoRegister();
SWIFTCONSOLE_API UClass* Z_Construct_UClass_USwiftConsoleWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_SwiftConsole();
// End Cross Module References

// Begin Class USwiftConsoleDeveloperSettings Function IsValidKey
struct Z_Construct_UFunction_USwiftConsoleDeveloperSettings_IsValidKey_Statics
{
	struct SwiftConsoleDeveloperSettings_eventIsValidKey_Parms
	{
		FKey Key;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SwiftConsoleDeveloperSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Key;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USwiftConsoleDeveloperSettings_IsValidKey_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SwiftConsoleDeveloperSettings_eventIsValidKey_Parms, Key), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) }; // 658672854
void Z_Construct_UFunction_USwiftConsoleDeveloperSettings_IsValidKey_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SwiftConsoleDeveloperSettings_eventIsValidKey_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USwiftConsoleDeveloperSettings_IsValidKey_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SwiftConsoleDeveloperSettings_eventIsValidKey_Parms), &Z_Construct_UFunction_USwiftConsoleDeveloperSettings_IsValidKey_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USwiftConsoleDeveloperSettings_IsValidKey_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USwiftConsoleDeveloperSettings_IsValidKey_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USwiftConsoleDeveloperSettings_IsValidKey_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USwiftConsoleDeveloperSettings_IsValidKey_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USwiftConsoleDeveloperSettings_IsValidKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USwiftConsoleDeveloperSettings, nullptr, "IsValidKey", nullptr, nullptr, Z_Construct_UFunction_USwiftConsoleDeveloperSettings_IsValidKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USwiftConsoleDeveloperSettings_IsValidKey_Statics::PropPointers), sizeof(Z_Construct_UFunction_USwiftConsoleDeveloperSettings_IsValidKey_Statics::SwiftConsoleDeveloperSettings_eventIsValidKey_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USwiftConsoleDeveloperSettings_IsValidKey_Statics::Function_MetaDataParams), Z_Construct_UFunction_USwiftConsoleDeveloperSettings_IsValidKey_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USwiftConsoleDeveloperSettings_IsValidKey_Statics::SwiftConsoleDeveloperSettings_eventIsValidKey_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USwiftConsoleDeveloperSettings_IsValidKey()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USwiftConsoleDeveloperSettings_IsValidKey_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USwiftConsoleDeveloperSettings::execIsValidKey)
{
	P_GET_STRUCT_REF(FKey,Z_Param_Out_Key);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsValidKey(Z_Param_Out_Key);
	P_NATIVE_END;
}
// End Class USwiftConsoleDeveloperSettings Function IsValidKey

// Begin Class USwiftConsoleDeveloperSettings
void USwiftConsoleDeveloperSettings::StaticRegisterNativesUSwiftConsoleDeveloperSettings()
{
	UClass* Class = USwiftConsoleDeveloperSettings::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "IsValidKey", &USwiftConsoleDeveloperSettings::execIsValidKey },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USwiftConsoleDeveloperSettings);
UClass* Z_Construct_UClass_USwiftConsoleDeveloperSettings_NoRegister()
{
	return USwiftConsoleDeveloperSettings::StaticClass();
}
struct Z_Construct_UClass_USwiftConsoleDeveloperSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "SwiftConsoleDeveloperSettings.h" },
		{ "ModuleRelativePath", "Public/SwiftConsoleDeveloperSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Clear_MetaData[] = {
		{ "Category", "SwiftConsoleDeveloperSettings" },
		{ "ModuleRelativePath", "Public/SwiftConsoleDeveloperSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RowNext_MetaData[] = {
		{ "Category", "SwiftConsoleDeveloperSettings" },
		{ "ModuleRelativePath", "Public/SwiftConsoleDeveloperSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RowPrevious_MetaData[] = {
		{ "Category", "SwiftConsoleDeveloperSettings" },
		{ "ModuleRelativePath", "Public/SwiftConsoleDeveloperSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SwiftConsoleKeys_MetaData[] = {
		{ "Category", "SwiftConsoleDeveloperSettings" },
		{ "ModuleRelativePath", "Public/SwiftConsoleDeveloperSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableWidget_MetaData[] = {
		{ "Category", "SwiftConsoleDeveloperSettings" },
		{ "ModuleRelativePath", "Public/SwiftConsoleDeveloperSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DisplayWidget_MetaData[] = {
		{ "Category", "SwiftConsoleDeveloperSettings" },
		{ "ModuleRelativePath", "Public/SwiftConsoleDeveloperSettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Clear;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RowNext;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RowPrevious;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SwiftConsoleKeys_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SwiftConsoleKeys;
	static void NewProp_bEnableWidget_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableWidget;
	static const UECodeGen_Private::FClassPropertyParams NewProp_DisplayWidget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USwiftConsoleDeveloperSettings_IsValidKey, "IsValidKey" }, // 3418644397
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USwiftConsoleDeveloperSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USwiftConsoleDeveloperSettings_Statics::NewProp_Clear = { "Clear", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USwiftConsoleDeveloperSettings, Clear), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Clear_MetaData), NewProp_Clear_MetaData) }; // 658672854
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USwiftConsoleDeveloperSettings_Statics::NewProp_RowNext = { "RowNext", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USwiftConsoleDeveloperSettings, RowNext), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RowNext_MetaData), NewProp_RowNext_MetaData) }; // 658672854
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USwiftConsoleDeveloperSettings_Statics::NewProp_RowPrevious = { "RowPrevious", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USwiftConsoleDeveloperSettings, RowPrevious), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RowPrevious_MetaData), NewProp_RowPrevious_MetaData) }; // 658672854
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USwiftConsoleDeveloperSettings_Statics::NewProp_SwiftConsoleKeys_Inner = { "SwiftConsoleKeys", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(0, nullptr) }; // 658672854
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USwiftConsoleDeveloperSettings_Statics::NewProp_SwiftConsoleKeys = { "SwiftConsoleKeys", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USwiftConsoleDeveloperSettings, SwiftConsoleKeys), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SwiftConsoleKeys_MetaData), NewProp_SwiftConsoleKeys_MetaData) }; // 658672854
void Z_Construct_UClass_USwiftConsoleDeveloperSettings_Statics::NewProp_bEnableWidget_SetBit(void* Obj)
{
	((USwiftConsoleDeveloperSettings*)Obj)->bEnableWidget = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USwiftConsoleDeveloperSettings_Statics::NewProp_bEnableWidget = { "bEnableWidget", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USwiftConsoleDeveloperSettings), &Z_Construct_UClass_USwiftConsoleDeveloperSettings_Statics::NewProp_bEnableWidget_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableWidget_MetaData), NewProp_bEnableWidget_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_USwiftConsoleDeveloperSettings_Statics::NewProp_DisplayWidget = { "DisplayWidget", nullptr, (EPropertyFlags)0x0014000000004001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USwiftConsoleDeveloperSettings, DisplayWidget), Z_Construct_UClass_UClass, Z_Construct_UClass_USwiftConsoleWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DisplayWidget_MetaData), NewProp_DisplayWidget_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USwiftConsoleDeveloperSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USwiftConsoleDeveloperSettings_Statics::NewProp_Clear,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USwiftConsoleDeveloperSettings_Statics::NewProp_RowNext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USwiftConsoleDeveloperSettings_Statics::NewProp_RowPrevious,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USwiftConsoleDeveloperSettings_Statics::NewProp_SwiftConsoleKeys_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USwiftConsoleDeveloperSettings_Statics::NewProp_SwiftConsoleKeys,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USwiftConsoleDeveloperSettings_Statics::NewProp_bEnableWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USwiftConsoleDeveloperSettings_Statics::NewProp_DisplayWidget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USwiftConsoleDeveloperSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USwiftConsoleDeveloperSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_SwiftConsole,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USwiftConsoleDeveloperSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USwiftConsoleDeveloperSettings_Statics::ClassParams = {
	&USwiftConsoleDeveloperSettings::StaticClass,
	"SwiftConsoleSettings",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USwiftConsoleDeveloperSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USwiftConsoleDeveloperSettings_Statics::PropPointers),
	0,
	0x001000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USwiftConsoleDeveloperSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_USwiftConsoleDeveloperSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USwiftConsoleDeveloperSettings()
{
	if (!Z_Registration_Info_UClass_USwiftConsoleDeveloperSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USwiftConsoleDeveloperSettings.OuterSingleton, Z_Construct_UClass_USwiftConsoleDeveloperSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USwiftConsoleDeveloperSettings.OuterSingleton;
}
template<> SWIFTCONSOLE_API UClass* StaticClass<USwiftConsoleDeveloperSettings>()
{
	return USwiftConsoleDeveloperSettings::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USwiftConsoleDeveloperSettings);
USwiftConsoleDeveloperSettings::~USwiftConsoleDeveloperSettings() {}
// End Class USwiftConsoleDeveloperSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_rober_OneDrive_Documents_Game_Dev_Portfolio_UnrealEngine_Plugins_SwiftConsole_Source_SwiftConsole_Public_SwiftConsoleDeveloperSettings_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USwiftConsoleDeveloperSettings, USwiftConsoleDeveloperSettings::StaticClass, TEXT("USwiftConsoleDeveloperSettings"), &Z_Registration_Info_UClass_USwiftConsoleDeveloperSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USwiftConsoleDeveloperSettings), 1206489223U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_rober_OneDrive_Documents_Game_Dev_Portfolio_UnrealEngine_Plugins_SwiftConsole_Source_SwiftConsole_Public_SwiftConsoleDeveloperSettings_h_3479759568(TEXT("/Script/SwiftConsole"),
	Z_CompiledInDeferFile_FID_Users_rober_OneDrive_Documents_Game_Dev_Portfolio_UnrealEngine_Plugins_SwiftConsole_Source_SwiftConsole_Public_SwiftConsoleDeveloperSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_rober_OneDrive_Documents_Game_Dev_Portfolio_UnrealEngine_Plugins_SwiftConsole_Source_SwiftConsole_Public_SwiftConsoleDeveloperSettings_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
