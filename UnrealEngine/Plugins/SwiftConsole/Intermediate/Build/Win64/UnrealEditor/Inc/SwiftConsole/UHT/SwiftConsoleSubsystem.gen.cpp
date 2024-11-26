// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SwiftConsole/Public/SwiftConsoleSubsystem.h"
#include "EnhancedInput/Public/InputActionValue.h"
#include "Runtime/Engine/Classes/Engine/GameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSwiftConsoleSubsystem() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
ENHANCEDINPUT_API UScriptStruct* Z_Construct_UScriptStruct_FInputActionValue();
SWIFTCONSOLE_API UClass* Z_Construct_UClass_USwiftConsoleDataAsset_NoRegister();
SWIFTCONSOLE_API UClass* Z_Construct_UClass_USwiftConsoleSubsystem();
SWIFTCONSOLE_API UClass* Z_Construct_UClass_USwiftConsoleSubsystem_NoRegister();
SWIFTCONSOLE_API UFunction* Z_Construct_UDelegateFunction_SwiftConsole_SwiftConsoleUpdate__DelegateSignature();
UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_SwiftConsole();
// End Cross Module References

// Begin Delegate FSwiftConsoleUpdate
struct Z_Construct_UDelegateFunction_SwiftConsole_SwiftConsoleUpdate__DelegateSignature_Statics
{
	struct _Script_SwiftConsole_eventSwiftConsoleUpdate_Parms
	{
		TArray<FString> OutCommands;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SwiftConsoleSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutCommands_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_OutCommands_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutCommands;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_SwiftConsole_SwiftConsoleUpdate__DelegateSignature_Statics::NewProp_OutCommands_Inner = { "OutCommands", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_SwiftConsole_SwiftConsoleUpdate__DelegateSignature_Statics::NewProp_OutCommands = { "OutCommands", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SwiftConsole_eventSwiftConsoleUpdate_Parms, OutCommands), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutCommands_MetaData), NewProp_OutCommands_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SwiftConsole_SwiftConsoleUpdate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SwiftConsole_SwiftConsoleUpdate__DelegateSignature_Statics::NewProp_OutCommands_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SwiftConsole_SwiftConsoleUpdate__DelegateSignature_Statics::NewProp_OutCommands,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SwiftConsole_SwiftConsoleUpdate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SwiftConsole_SwiftConsoleUpdate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SwiftConsole, nullptr, "SwiftConsoleUpdate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_SwiftConsole_SwiftConsoleUpdate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SwiftConsole_SwiftConsoleUpdate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SwiftConsole_SwiftConsoleUpdate__DelegateSignature_Statics::_Script_SwiftConsole_eventSwiftConsoleUpdate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SwiftConsole_SwiftConsoleUpdate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SwiftConsole_SwiftConsoleUpdate__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_SwiftConsole_SwiftConsoleUpdate__DelegateSignature_Statics::_Script_SwiftConsole_eventSwiftConsoleUpdate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SwiftConsole_SwiftConsoleUpdate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SwiftConsole_SwiftConsoleUpdate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FSwiftConsoleUpdate_DelegateWrapper(const FMulticastScriptDelegate& SwiftConsoleUpdate, TArray<FString> const& OutCommands)
{
	struct _Script_SwiftConsole_eventSwiftConsoleUpdate_Parms
	{
		TArray<FString> OutCommands;
	};
	_Script_SwiftConsole_eventSwiftConsoleUpdate_Parms Parms;
	Parms.OutCommands=OutCommands;
	SwiftConsoleUpdate.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FSwiftConsoleUpdate

// Begin Class USwiftConsoleSubsystem Function ActionClear
struct Z_Construct_UFunction_USwiftConsoleSubsystem_ActionClear_Statics
{
	struct SwiftConsoleSubsystem_eventActionClear_Parms
	{
		FInputActionValue Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SwiftConsoleSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USwiftConsoleSubsystem_ActionClear_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SwiftConsoleSubsystem_eventActionClear_Parms, Value), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) }; // 494646648
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USwiftConsoleSubsystem_ActionClear_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USwiftConsoleSubsystem_ActionClear_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USwiftConsoleSubsystem_ActionClear_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USwiftConsoleSubsystem_ActionClear_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USwiftConsoleSubsystem, nullptr, "ActionClear", nullptr, nullptr, Z_Construct_UFunction_USwiftConsoleSubsystem_ActionClear_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USwiftConsoleSubsystem_ActionClear_Statics::PropPointers), sizeof(Z_Construct_UFunction_USwiftConsoleSubsystem_ActionClear_Statics::SwiftConsoleSubsystem_eventActionClear_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USwiftConsoleSubsystem_ActionClear_Statics::Function_MetaDataParams), Z_Construct_UFunction_USwiftConsoleSubsystem_ActionClear_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USwiftConsoleSubsystem_ActionClear_Statics::SwiftConsoleSubsystem_eventActionClear_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USwiftConsoleSubsystem_ActionClear()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USwiftConsoleSubsystem_ActionClear_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USwiftConsoleSubsystem::execActionClear)
{
	P_GET_STRUCT_REF(FInputActionValue,Z_Param_Out_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ActionClear(Z_Param_Out_Value);
	P_NATIVE_END;
}
// End Class USwiftConsoleSubsystem Function ActionClear

// Begin Class USwiftConsoleSubsystem Function ActionCommand
struct Z_Construct_UFunction_USwiftConsoleSubsystem_ActionCommand_Statics
{
	struct SwiftConsoleSubsystem_eventActionCommand_Parms
	{
		int32 Index;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SwiftConsoleSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USwiftConsoleSubsystem_ActionCommand_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SwiftConsoleSubsystem_eventActionCommand_Parms, Index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USwiftConsoleSubsystem_ActionCommand_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USwiftConsoleSubsystem_ActionCommand_Statics::NewProp_Index,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USwiftConsoleSubsystem_ActionCommand_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USwiftConsoleSubsystem_ActionCommand_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USwiftConsoleSubsystem, nullptr, "ActionCommand", nullptr, nullptr, Z_Construct_UFunction_USwiftConsoleSubsystem_ActionCommand_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USwiftConsoleSubsystem_ActionCommand_Statics::PropPointers), sizeof(Z_Construct_UFunction_USwiftConsoleSubsystem_ActionCommand_Statics::SwiftConsoleSubsystem_eventActionCommand_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USwiftConsoleSubsystem_ActionCommand_Statics::Function_MetaDataParams), Z_Construct_UFunction_USwiftConsoleSubsystem_ActionCommand_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USwiftConsoleSubsystem_ActionCommand_Statics::SwiftConsoleSubsystem_eventActionCommand_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USwiftConsoleSubsystem_ActionCommand()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USwiftConsoleSubsystem_ActionCommand_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USwiftConsoleSubsystem::execActionCommand)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ActionCommand(Z_Param_Index);
	P_NATIVE_END;
}
// End Class USwiftConsoleSubsystem Function ActionCommand

// Begin Class USwiftConsoleSubsystem Function ActionRowNext
struct Z_Construct_UFunction_USwiftConsoleSubsystem_ActionRowNext_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SwiftConsoleSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USwiftConsoleSubsystem_ActionRowNext_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USwiftConsoleSubsystem, nullptr, "ActionRowNext", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USwiftConsoleSubsystem_ActionRowNext_Statics::Function_MetaDataParams), Z_Construct_UFunction_USwiftConsoleSubsystem_ActionRowNext_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_USwiftConsoleSubsystem_ActionRowNext()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USwiftConsoleSubsystem_ActionRowNext_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USwiftConsoleSubsystem::execActionRowNext)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ActionRowNext();
	P_NATIVE_END;
}
// End Class USwiftConsoleSubsystem Function ActionRowNext

// Begin Class USwiftConsoleSubsystem Function ActionRowPrevious
struct Z_Construct_UFunction_USwiftConsoleSubsystem_ActionRowPrevious_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SwiftConsoleSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USwiftConsoleSubsystem_ActionRowPrevious_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USwiftConsoleSubsystem, nullptr, "ActionRowPrevious", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USwiftConsoleSubsystem_ActionRowPrevious_Statics::Function_MetaDataParams), Z_Construct_UFunction_USwiftConsoleSubsystem_ActionRowPrevious_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_USwiftConsoleSubsystem_ActionRowPrevious()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USwiftConsoleSubsystem_ActionRowPrevious_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USwiftConsoleSubsystem::execActionRowPrevious)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ActionRowPrevious();
	P_NATIVE_END;
}
// End Class USwiftConsoleSubsystem Function ActionRowPrevious

// Begin Class USwiftConsoleSubsystem Function ActionSetDataAsset
struct Z_Construct_UFunction_USwiftConsoleSubsystem_ActionSetDataAsset_Statics
{
	struct SwiftConsoleSubsystem_eventActionSetDataAsset_Parms
	{
		USwiftConsoleDataAsset* DataAsset;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// input action functions\x09\n" },
#endif
		{ "ModuleRelativePath", "Public/SwiftConsoleSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "input action functions" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DataAsset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USwiftConsoleSubsystem_ActionSetDataAsset_Statics::NewProp_DataAsset = { "DataAsset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SwiftConsoleSubsystem_eventActionSetDataAsset_Parms, DataAsset), Z_Construct_UClass_USwiftConsoleDataAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USwiftConsoleSubsystem_ActionSetDataAsset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USwiftConsoleSubsystem_ActionSetDataAsset_Statics::NewProp_DataAsset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USwiftConsoleSubsystem_ActionSetDataAsset_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USwiftConsoleSubsystem_ActionSetDataAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USwiftConsoleSubsystem, nullptr, "ActionSetDataAsset", nullptr, nullptr, Z_Construct_UFunction_USwiftConsoleSubsystem_ActionSetDataAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USwiftConsoleSubsystem_ActionSetDataAsset_Statics::PropPointers), sizeof(Z_Construct_UFunction_USwiftConsoleSubsystem_ActionSetDataAsset_Statics::SwiftConsoleSubsystem_eventActionSetDataAsset_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USwiftConsoleSubsystem_ActionSetDataAsset_Statics::Function_MetaDataParams), Z_Construct_UFunction_USwiftConsoleSubsystem_ActionSetDataAsset_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USwiftConsoleSubsystem_ActionSetDataAsset_Statics::SwiftConsoleSubsystem_eventActionSetDataAsset_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USwiftConsoleSubsystem_ActionSetDataAsset()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USwiftConsoleSubsystem_ActionSetDataAsset_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USwiftConsoleSubsystem::execActionSetDataAsset)
{
	P_GET_OBJECT(USwiftConsoleDataAsset,Z_Param_DataAsset);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ActionSetDataAsset(Z_Param_DataAsset);
	P_NATIVE_END;
}
// End Class USwiftConsoleSubsystem Function ActionSetDataAsset

// Begin Class USwiftConsoleSubsystem Function ClearAll
struct Z_Construct_UFunction_USwiftConsoleSubsystem_ClearAll_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SwiftConsoleSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USwiftConsoleSubsystem_ClearAll_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USwiftConsoleSubsystem, nullptr, "ClearAll", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USwiftConsoleSubsystem_ClearAll_Statics::Function_MetaDataParams), Z_Construct_UFunction_USwiftConsoleSubsystem_ClearAll_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_USwiftConsoleSubsystem_ClearAll()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USwiftConsoleSubsystem_ClearAll_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USwiftConsoleSubsystem::execClearAll)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClearAll();
	P_NATIVE_END;
}
// End Class USwiftConsoleSubsystem Function ClearAll

// Begin Class USwiftConsoleSubsystem Function ClearCurrent
struct Z_Construct_UFunction_USwiftConsoleSubsystem_ClearCurrent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SwiftConsoleSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USwiftConsoleSubsystem_ClearCurrent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USwiftConsoleSubsystem, nullptr, "ClearCurrent", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USwiftConsoleSubsystem_ClearCurrent_Statics::Function_MetaDataParams), Z_Construct_UFunction_USwiftConsoleSubsystem_ClearCurrent_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_USwiftConsoleSubsystem_ClearCurrent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USwiftConsoleSubsystem_ClearCurrent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USwiftConsoleSubsystem::execClearCurrent)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClearCurrent();
	P_NATIVE_END;
}
// End Class USwiftConsoleSubsystem Function ClearCurrent

// Begin Class USwiftConsoleSubsystem Function Disable
struct Z_Construct_UFunction_USwiftConsoleSubsystem_Disable_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SwiftConsoleSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USwiftConsoleSubsystem_Disable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USwiftConsoleSubsystem, nullptr, "Disable", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USwiftConsoleSubsystem_Disable_Statics::Function_MetaDataParams), Z_Construct_UFunction_USwiftConsoleSubsystem_Disable_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_USwiftConsoleSubsystem_Disable()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USwiftConsoleSubsystem_Disable_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USwiftConsoleSubsystem::execDisable)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Disable();
	P_NATIVE_END;
}
// End Class USwiftConsoleSubsystem Function Disable

// Begin Class USwiftConsoleSubsystem Function FindDataAssets
struct Z_Construct_UFunction_USwiftConsoleSubsystem_FindDataAssets_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// data assets\n" },
#endif
		{ "ModuleRelativePath", "Public/SwiftConsoleSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "data assets" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USwiftConsoleSubsystem_FindDataAssets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USwiftConsoleSubsystem, nullptr, "FindDataAssets", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USwiftConsoleSubsystem_FindDataAssets_Statics::Function_MetaDataParams), Z_Construct_UFunction_USwiftConsoleSubsystem_FindDataAssets_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_USwiftConsoleSubsystem_FindDataAssets()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USwiftConsoleSubsystem_FindDataAssets_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USwiftConsoleSubsystem::execFindDataAssets)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->FindDataAssets();
	P_NATIVE_END;
}
// End Class USwiftConsoleSubsystem Function FindDataAssets

// Begin Class USwiftConsoleSubsystem
void USwiftConsoleSubsystem::StaticRegisterNativesUSwiftConsoleSubsystem()
{
	UClass* Class = USwiftConsoleSubsystem::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ActionClear", &USwiftConsoleSubsystem::execActionClear },
		{ "ActionCommand", &USwiftConsoleSubsystem::execActionCommand },
		{ "ActionRowNext", &USwiftConsoleSubsystem::execActionRowNext },
		{ "ActionRowPrevious", &USwiftConsoleSubsystem::execActionRowPrevious },
		{ "ActionSetDataAsset", &USwiftConsoleSubsystem::execActionSetDataAsset },
		{ "ClearAll", &USwiftConsoleSubsystem::execClearAll },
		{ "ClearCurrent", &USwiftConsoleSubsystem::execClearCurrent },
		{ "Disable", &USwiftConsoleSubsystem::execDisable },
		{ "FindDataAssets", &USwiftConsoleSubsystem::execFindDataAssets },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USwiftConsoleSubsystem);
UClass* Z_Construct_UClass_USwiftConsoleSubsystem_NoRegister()
{
	return USwiftConsoleSubsystem::StaticClass();
}
struct Z_Construct_UClass_USwiftConsoleSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "SwiftConsoleSubsystem.h" },
		{ "ModuleRelativePath", "Public/SwiftConsoleSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SwiftConsoleInputMappingContext_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// input mapping context\n" },
#endif
		{ "ModuleRelativePath", "Public/SwiftConsoleSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "input mapping context" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DataAssets_MetaData[] = {
		{ "ModuleRelativePath", "Public/SwiftConsoleSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DataAssetCurrent_MetaData[] = {
		{ "ModuleRelativePath", "Public/SwiftConsoleSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentRow_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// temp values\n" },
#endif
		{ "ModuleRelativePath", "Public/SwiftConsoleSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "temp values" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentRowLength_MetaData[] = {
		{ "ModuleRelativePath", "Public/SwiftConsoleSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentCommandIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/SwiftConsoleSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WidgetPath_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// widget - could create through slate...\n" },
#endif
		{ "ModuleRelativePath", "Public/SwiftConsoleSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "widget - could create through slate..." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WidgetMain_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SwiftConsoleSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSwiftConsoleUpdate_MetaData[] = {
		{ "ModuleRelativePath", "Public/SwiftConsoleSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SwiftConsoleInputMappingContext;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DataAssets_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DataAssets;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DataAssetCurrent;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentRow;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentRowLength;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentCommandIndex;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WidgetPath;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WidgetMain;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSwiftConsoleUpdate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USwiftConsoleSubsystem_ActionClear, "ActionClear" }, // 1943700275
		{ &Z_Construct_UFunction_USwiftConsoleSubsystem_ActionCommand, "ActionCommand" }, // 482378819
		{ &Z_Construct_UFunction_USwiftConsoleSubsystem_ActionRowNext, "ActionRowNext" }, // 1781982110
		{ &Z_Construct_UFunction_USwiftConsoleSubsystem_ActionRowPrevious, "ActionRowPrevious" }, // 297272170
		{ &Z_Construct_UFunction_USwiftConsoleSubsystem_ActionSetDataAsset, "ActionSetDataAsset" }, // 543378081
		{ &Z_Construct_UFunction_USwiftConsoleSubsystem_ClearAll, "ClearAll" }, // 3520391057
		{ &Z_Construct_UFunction_USwiftConsoleSubsystem_ClearCurrent, "ClearCurrent" }, // 55062536
		{ &Z_Construct_UFunction_USwiftConsoleSubsystem_Disable, "Disable" }, // 2037744843
		{ &Z_Construct_UFunction_USwiftConsoleSubsystem_FindDataAssets, "FindDataAssets" }, // 1546239212
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USwiftConsoleSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USwiftConsoleSubsystem_Statics::NewProp_SwiftConsoleInputMappingContext = { "SwiftConsoleInputMappingContext", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USwiftConsoleSubsystem, SwiftConsoleInputMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SwiftConsoleInputMappingContext_MetaData), NewProp_SwiftConsoleInputMappingContext_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USwiftConsoleSubsystem_Statics::NewProp_DataAssets_Inner = { "DataAssets", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_USwiftConsoleDataAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USwiftConsoleSubsystem_Statics::NewProp_DataAssets = { "DataAssets", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USwiftConsoleSubsystem, DataAssets), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DataAssets_MetaData), NewProp_DataAssets_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USwiftConsoleSubsystem_Statics::NewProp_DataAssetCurrent = { "DataAssetCurrent", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USwiftConsoleSubsystem, DataAssetCurrent), Z_Construct_UClass_USwiftConsoleDataAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DataAssetCurrent_MetaData), NewProp_DataAssetCurrent_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USwiftConsoleSubsystem_Statics::NewProp_CurrentRow = { "CurrentRow", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USwiftConsoleSubsystem, CurrentRow), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentRow_MetaData), NewProp_CurrentRow_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USwiftConsoleSubsystem_Statics::NewProp_CurrentRowLength = { "CurrentRowLength", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USwiftConsoleSubsystem, CurrentRowLength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentRowLength_MetaData), NewProp_CurrentRowLength_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USwiftConsoleSubsystem_Statics::NewProp_CurrentCommandIndex = { "CurrentCommandIndex", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USwiftConsoleSubsystem, CurrentCommandIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentCommandIndex_MetaData), NewProp_CurrentCommandIndex_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USwiftConsoleSubsystem_Statics::NewProp_WidgetPath = { "WidgetPath", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USwiftConsoleSubsystem, WidgetPath), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WidgetPath_MetaData), NewProp_WidgetPath_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USwiftConsoleSubsystem_Statics::NewProp_WidgetMain = { "WidgetMain", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USwiftConsoleSubsystem, WidgetMain), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WidgetMain_MetaData), NewProp_WidgetMain_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USwiftConsoleSubsystem_Statics::NewProp_OnSwiftConsoleUpdate = { "OnSwiftConsoleUpdate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USwiftConsoleSubsystem, OnSwiftConsoleUpdate), Z_Construct_UDelegateFunction_SwiftConsole_SwiftConsoleUpdate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSwiftConsoleUpdate_MetaData), NewProp_OnSwiftConsoleUpdate_MetaData) }; // 1631331844
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USwiftConsoleSubsystem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USwiftConsoleSubsystem_Statics::NewProp_SwiftConsoleInputMappingContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USwiftConsoleSubsystem_Statics::NewProp_DataAssets_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USwiftConsoleSubsystem_Statics::NewProp_DataAssets,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USwiftConsoleSubsystem_Statics::NewProp_DataAssetCurrent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USwiftConsoleSubsystem_Statics::NewProp_CurrentRow,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USwiftConsoleSubsystem_Statics::NewProp_CurrentRowLength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USwiftConsoleSubsystem_Statics::NewProp_CurrentCommandIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USwiftConsoleSubsystem_Statics::NewProp_WidgetPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USwiftConsoleSubsystem_Statics::NewProp_WidgetMain,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USwiftConsoleSubsystem_Statics::NewProp_OnSwiftConsoleUpdate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USwiftConsoleSubsystem_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USwiftConsoleSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_SwiftConsole,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USwiftConsoleSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USwiftConsoleSubsystem_Statics::ClassParams = {
	&USwiftConsoleSubsystem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USwiftConsoleSubsystem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USwiftConsoleSubsystem_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USwiftConsoleSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_USwiftConsoleSubsystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USwiftConsoleSubsystem()
{
	if (!Z_Registration_Info_UClass_USwiftConsoleSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USwiftConsoleSubsystem.OuterSingleton, Z_Construct_UClass_USwiftConsoleSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USwiftConsoleSubsystem.OuterSingleton;
}
template<> SWIFTCONSOLE_API UClass* StaticClass<USwiftConsoleSubsystem>()
{
	return USwiftConsoleSubsystem::StaticClass();
}
USwiftConsoleSubsystem::USwiftConsoleSubsystem() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USwiftConsoleSubsystem);
USwiftConsoleSubsystem::~USwiftConsoleSubsystem() {}
// End Class USwiftConsoleSubsystem

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_rober_OneDrive_Documents_Game_Dev_Portfolio_UnrealEngine_Plugins_SwiftConsole_Source_SwiftConsole_Public_SwiftConsoleSubsystem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USwiftConsoleSubsystem, USwiftConsoleSubsystem::StaticClass, TEXT("USwiftConsoleSubsystem"), &Z_Registration_Info_UClass_USwiftConsoleSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USwiftConsoleSubsystem), 1616948854U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_rober_OneDrive_Documents_Game_Dev_Portfolio_UnrealEngine_Plugins_SwiftConsole_Source_SwiftConsole_Public_SwiftConsoleSubsystem_h_2232091134(TEXT("/Script/SwiftConsole"),
	Z_CompiledInDeferFile_FID_Users_rober_OneDrive_Documents_Game_Dev_Portfolio_UnrealEngine_Plugins_SwiftConsole_Source_SwiftConsole_Public_SwiftConsoleSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_rober_OneDrive_Documents_Game_Dev_Portfolio_UnrealEngine_Plugins_SwiftConsole_Source_SwiftConsole_Public_SwiftConsoleSubsystem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
