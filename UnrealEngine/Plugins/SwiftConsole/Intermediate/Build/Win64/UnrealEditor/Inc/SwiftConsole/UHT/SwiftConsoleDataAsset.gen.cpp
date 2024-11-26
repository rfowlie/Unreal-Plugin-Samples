// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SwiftConsole/Public/SwiftConsoleDataAsset.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSwiftConsoleDataAsset() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
SWIFTCONSOLE_API UClass* Z_Construct_UClass_USwiftConsoleDataAsset();
SWIFTCONSOLE_API UClass* Z_Construct_UClass_USwiftConsoleDataAsset_NoRegister();
SWIFTCONSOLE_API UScriptStruct* Z_Construct_UScriptStruct_FConsoleCommandSet();
UPackage* Z_Construct_UPackage__Script_SwiftConsole();
// End Cross Module References

// Begin ScriptStruct FConsoleCommandSet
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ConsoleCommandSet;
class UScriptStruct* FConsoleCommandSet::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ConsoleCommandSet.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ConsoleCommandSet.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FConsoleCommandSet, (UObject*)Z_Construct_UPackage__Script_SwiftConsole(), TEXT("ConsoleCommandSet"));
	}
	return Z_Registration_Info_UScriptStruct_ConsoleCommandSet.OuterSingleton;
}
template<> SWIFTCONSOLE_API UScriptStruct* StaticStruct<FConsoleCommandSet>()
{
	return FConsoleCommandSet::StaticStruct();
}
struct Z_Construct_UScriptStruct_FConsoleCommandSet_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SwiftConsoleDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CommandsToEnable_MetaData[] = {
		{ "Category", "ConsoleCommandSet" },
		{ "ModuleRelativePath", "Public/SwiftConsoleDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UndoCommandsToEnable_MetaData[] = {
		{ "Category", "ConsoleCommandSet" },
		{ "ModuleRelativePath", "Public/SwiftConsoleDataAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "stat none does not undo all commands, place undo commands for enabled commands here" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnablePersistentCommands_MetaData[] = {
		{ "Category", "ConsoleCommandSet" },
		{ "ModuleRelativePath", "Public/SwiftConsoleDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PersistentCommandsToDisable_MetaData[] = {
		{ "Category", "ConsoleCommandSet" },
		{ "EditCondition", "EnablePersistentCommands" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/SwiftConsoleDataAsset.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_CommandsToEnable_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CommandsToEnable;
	static const UECodeGen_Private::FStrPropertyParams NewProp_UndoCommandsToEnable_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_UndoCommandsToEnable;
	static void NewProp_EnablePersistentCommands_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_EnablePersistentCommands;
	static const UECodeGen_Private::FStrPropertyParams NewProp_PersistentCommandsToDisable_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PersistentCommandsToDisable;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FConsoleCommandSet>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FConsoleCommandSet_Statics::NewProp_CommandsToEnable_Inner = { "CommandsToEnable", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FConsoleCommandSet_Statics::NewProp_CommandsToEnable = { "CommandsToEnable", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FConsoleCommandSet, CommandsToEnable), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CommandsToEnable_MetaData), NewProp_CommandsToEnable_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FConsoleCommandSet_Statics::NewProp_UndoCommandsToEnable_Inner = { "UndoCommandsToEnable", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FConsoleCommandSet_Statics::NewProp_UndoCommandsToEnable = { "UndoCommandsToEnable", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FConsoleCommandSet, UndoCommandsToEnable), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UndoCommandsToEnable_MetaData), NewProp_UndoCommandsToEnable_MetaData) };
void Z_Construct_UScriptStruct_FConsoleCommandSet_Statics::NewProp_EnablePersistentCommands_SetBit(void* Obj)
{
	((FConsoleCommandSet*)Obj)->EnablePersistentCommands = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FConsoleCommandSet_Statics::NewProp_EnablePersistentCommands = { "EnablePersistentCommands", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FConsoleCommandSet), &Z_Construct_UScriptStruct_FConsoleCommandSet_Statics::NewProp_EnablePersistentCommands_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnablePersistentCommands_MetaData), NewProp_EnablePersistentCommands_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FConsoleCommandSet_Statics::NewProp_PersistentCommandsToDisable_Inner = { "PersistentCommandsToDisable", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FConsoleCommandSet_Statics::NewProp_PersistentCommandsToDisable = { "PersistentCommandsToDisable", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FConsoleCommandSet, PersistentCommandsToDisable), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PersistentCommandsToDisable_MetaData), NewProp_PersistentCommandsToDisable_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FConsoleCommandSet_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConsoleCommandSet_Statics::NewProp_CommandsToEnable_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConsoleCommandSet_Statics::NewProp_CommandsToEnable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConsoleCommandSet_Statics::NewProp_UndoCommandsToEnable_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConsoleCommandSet_Statics::NewProp_UndoCommandsToEnable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConsoleCommandSet_Statics::NewProp_EnablePersistentCommands,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConsoleCommandSet_Statics::NewProp_PersistentCommandsToDisable_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConsoleCommandSet_Statics::NewProp_PersistentCommandsToDisable,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConsoleCommandSet_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FConsoleCommandSet_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SwiftConsole,
	nullptr,
	&NewStructOps,
	"ConsoleCommandSet",
	Z_Construct_UScriptStruct_FConsoleCommandSet_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConsoleCommandSet_Statics::PropPointers),
	sizeof(FConsoleCommandSet),
	alignof(FConsoleCommandSet),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConsoleCommandSet_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FConsoleCommandSet_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FConsoleCommandSet()
{
	if (!Z_Registration_Info_UScriptStruct_ConsoleCommandSet.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ConsoleCommandSet.InnerSingleton, Z_Construct_UScriptStruct_FConsoleCommandSet_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ConsoleCommandSet.InnerSingleton;
}
// End ScriptStruct FConsoleCommandSet

// Begin Class USwiftConsoleDataAsset Function OnDataUpdated
struct Z_Construct_UFunction_USwiftConsoleDataAsset_OnDataUpdated_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "ModuleRelativePath", "Public/SwiftConsoleDataAsset.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USwiftConsoleDataAsset_OnDataUpdated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USwiftConsoleDataAsset, nullptr, "OnDataUpdated", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USwiftConsoleDataAsset_OnDataUpdated_Statics::Function_MetaDataParams), Z_Construct_UFunction_USwiftConsoleDataAsset_OnDataUpdated_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_USwiftConsoleDataAsset_OnDataUpdated()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USwiftConsoleDataAsset_OnDataUpdated_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USwiftConsoleDataAsset::execOnDataUpdated)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnDataUpdated();
	P_NATIVE_END;
}
// End Class USwiftConsoleDataAsset Function OnDataUpdated

// Begin Class USwiftConsoleDataAsset
void USwiftConsoleDataAsset::StaticRegisterNativesUSwiftConsoleDataAsset()
{
	UClass* Class = USwiftConsoleDataAsset::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnDataUpdated", &USwiftConsoleDataAsset::execOnDataUpdated },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USwiftConsoleDataAsset);
UClass* Z_Construct_UClass_USwiftConsoleDataAsset_NoRegister()
{
	return USwiftConsoleDataAsset::StaticClass();
}
struct Z_Construct_UClass_USwiftConsoleDataAsset_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SwiftConsoleDataAsset.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SwiftConsoleDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Group_MetaData[] = {
		{ "Category", "SwiftConsoleDataAsset" },
		{ "ModuleRelativePath", "Public/SwiftConsoleDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tooltip_MetaData[] = {
		{ "Category", "SwiftConsoleDataAsset" },
		{ "ModuleRelativePath", "Public/SwiftConsoleDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PersistentCommands_MetaData[] = {
		{ "Category", "SwiftConsoleDataAsset" },
		{ "ModuleRelativePath", "Public/SwiftConsoleDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConsoleCommandSets_MetaData[] = {
		{ "Category", "SwiftConsoleDataAsset" },
		{ "ModuleRelativePath", "Public/SwiftConsoleDataAsset.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Group;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Tooltip;
	static const UECodeGen_Private::FStrPropertyParams NewProp_PersistentCommands_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PersistentCommands;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ConsoleCommandSets_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ConsoleCommandSets;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USwiftConsoleDataAsset_OnDataUpdated, "OnDataUpdated" }, // 3456274964
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USwiftConsoleDataAsset>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_USwiftConsoleDataAsset_Statics::NewProp_Group = { "Group", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USwiftConsoleDataAsset, Group), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Group_MetaData), NewProp_Group_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_USwiftConsoleDataAsset_Statics::NewProp_Tooltip = { "Tooltip", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USwiftConsoleDataAsset, Tooltip), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tooltip_MetaData), NewProp_Tooltip_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_USwiftConsoleDataAsset_Statics::NewProp_PersistentCommands_Inner = { "PersistentCommands", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USwiftConsoleDataAsset_Statics::NewProp_PersistentCommands = { "PersistentCommands", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USwiftConsoleDataAsset, PersistentCommands), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PersistentCommands_MetaData), NewProp_PersistentCommands_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USwiftConsoleDataAsset_Statics::NewProp_ConsoleCommandSets_Inner = { "ConsoleCommandSets", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FConsoleCommandSet, METADATA_PARAMS(0, nullptr) }; // 3485967223
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USwiftConsoleDataAsset_Statics::NewProp_ConsoleCommandSets = { "ConsoleCommandSets", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USwiftConsoleDataAsset, ConsoleCommandSets), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConsoleCommandSets_MetaData), NewProp_ConsoleCommandSets_MetaData) }; // 3485967223
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USwiftConsoleDataAsset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USwiftConsoleDataAsset_Statics::NewProp_Group,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USwiftConsoleDataAsset_Statics::NewProp_Tooltip,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USwiftConsoleDataAsset_Statics::NewProp_PersistentCommands_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USwiftConsoleDataAsset_Statics::NewProp_PersistentCommands,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USwiftConsoleDataAsset_Statics::NewProp_ConsoleCommandSets_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USwiftConsoleDataAsset_Statics::NewProp_ConsoleCommandSets,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USwiftConsoleDataAsset_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USwiftConsoleDataAsset_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_SwiftConsole,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USwiftConsoleDataAsset_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USwiftConsoleDataAsset_Statics::ClassParams = {
	&USwiftConsoleDataAsset::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USwiftConsoleDataAsset_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USwiftConsoleDataAsset_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USwiftConsoleDataAsset_Statics::Class_MetaDataParams), Z_Construct_UClass_USwiftConsoleDataAsset_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USwiftConsoleDataAsset()
{
	if (!Z_Registration_Info_UClass_USwiftConsoleDataAsset.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USwiftConsoleDataAsset.OuterSingleton, Z_Construct_UClass_USwiftConsoleDataAsset_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USwiftConsoleDataAsset.OuterSingleton;
}
template<> SWIFTCONSOLE_API UClass* StaticClass<USwiftConsoleDataAsset>()
{
	return USwiftConsoleDataAsset::StaticClass();
}
USwiftConsoleDataAsset::USwiftConsoleDataAsset(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USwiftConsoleDataAsset);
USwiftConsoleDataAsset::~USwiftConsoleDataAsset() {}
// End Class USwiftConsoleDataAsset

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_rober_OneDrive_Documents_Game_Dev_Portfolio_UnrealEngine_Plugins_SwiftConsole_Source_SwiftConsole_Public_SwiftConsoleDataAsset_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FConsoleCommandSet::StaticStruct, Z_Construct_UScriptStruct_FConsoleCommandSet_Statics::NewStructOps, TEXT("ConsoleCommandSet"), &Z_Registration_Info_UScriptStruct_ConsoleCommandSet, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FConsoleCommandSet), 3485967223U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USwiftConsoleDataAsset, USwiftConsoleDataAsset::StaticClass, TEXT("USwiftConsoleDataAsset"), &Z_Registration_Info_UClass_USwiftConsoleDataAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USwiftConsoleDataAsset), 251939068U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_rober_OneDrive_Documents_Game_Dev_Portfolio_UnrealEngine_Plugins_SwiftConsole_Source_SwiftConsole_Public_SwiftConsoleDataAsset_h_2866031002(TEXT("/Script/SwiftConsole"),
	Z_CompiledInDeferFile_FID_Users_rober_OneDrive_Documents_Game_Dev_Portfolio_UnrealEngine_Plugins_SwiftConsole_Source_SwiftConsole_Public_SwiftConsoleDataAsset_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_rober_OneDrive_Documents_Game_Dev_Portfolio_UnrealEngine_Plugins_SwiftConsole_Source_SwiftConsole_Public_SwiftConsoleDataAsset_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Users_rober_OneDrive_Documents_Game_Dev_Portfolio_UnrealEngine_Plugins_SwiftConsole_Source_SwiftConsole_Public_SwiftConsoleDataAsset_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_rober_OneDrive_Documents_Game_Dev_Portfolio_UnrealEngine_Plugins_SwiftConsole_Source_SwiftConsole_Public_SwiftConsoleDataAsset_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
