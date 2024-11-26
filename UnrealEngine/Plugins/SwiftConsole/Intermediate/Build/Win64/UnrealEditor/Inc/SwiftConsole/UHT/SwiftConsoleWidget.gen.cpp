// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SwiftConsole/Public/SwiftConsoleWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSwiftConsoleWidget() {}

// Begin Cross Module References
SWIFTCONSOLE_API UClass* Z_Construct_UClass_USwiftConsoleWidget();
SWIFTCONSOLE_API UClass* Z_Construct_UClass_USwiftConsoleWidget_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_SwiftConsole();
// End Cross Module References

// Begin Class USwiftConsoleWidget Function ReceiveSwiftConsoleUpdate
struct SwiftConsoleWidget_eventReceiveSwiftConsoleUpdate_Parms
{
	TArray<FString> OutCommands;
};
static FName NAME_USwiftConsoleWidget_ReceiveSwiftConsoleUpdate = FName(TEXT("ReceiveSwiftConsoleUpdate"));
void USwiftConsoleWidget::ReceiveSwiftConsoleUpdate(TArray<FString> const& OutCommands)
{
	SwiftConsoleWidget_eventReceiveSwiftConsoleUpdate_Parms Parms;
	Parms.OutCommands=OutCommands;
	ProcessEvent(FindFunctionChecked(NAME_USwiftConsoleWidget_ReceiveSwiftConsoleUpdate),&Parms);
}
struct Z_Construct_UFunction_USwiftConsoleWidget_ReceiveSwiftConsoleUpdate_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SwiftConsoleWidget.h" },
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
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USwiftConsoleWidget_ReceiveSwiftConsoleUpdate_Statics::NewProp_OutCommands_Inner = { "OutCommands", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USwiftConsoleWidget_ReceiveSwiftConsoleUpdate_Statics::NewProp_OutCommands = { "OutCommands", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SwiftConsoleWidget_eventReceiveSwiftConsoleUpdate_Parms, OutCommands), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutCommands_MetaData), NewProp_OutCommands_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USwiftConsoleWidget_ReceiveSwiftConsoleUpdate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USwiftConsoleWidget_ReceiveSwiftConsoleUpdate_Statics::NewProp_OutCommands_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USwiftConsoleWidget_ReceiveSwiftConsoleUpdate_Statics::NewProp_OutCommands,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USwiftConsoleWidget_ReceiveSwiftConsoleUpdate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USwiftConsoleWidget_ReceiveSwiftConsoleUpdate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USwiftConsoleWidget, nullptr, "ReceiveSwiftConsoleUpdate", nullptr, nullptr, Z_Construct_UFunction_USwiftConsoleWidget_ReceiveSwiftConsoleUpdate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USwiftConsoleWidget_ReceiveSwiftConsoleUpdate_Statics::PropPointers), sizeof(SwiftConsoleWidget_eventReceiveSwiftConsoleUpdate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08480800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USwiftConsoleWidget_ReceiveSwiftConsoleUpdate_Statics::Function_MetaDataParams), Z_Construct_UFunction_USwiftConsoleWidget_ReceiveSwiftConsoleUpdate_Statics::Function_MetaDataParams) };
static_assert(sizeof(SwiftConsoleWidget_eventReceiveSwiftConsoleUpdate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USwiftConsoleWidget_ReceiveSwiftConsoleUpdate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USwiftConsoleWidget_ReceiveSwiftConsoleUpdate_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class USwiftConsoleWidget Function ReceiveSwiftConsoleUpdate

// Begin Class USwiftConsoleWidget
void USwiftConsoleWidget::StaticRegisterNativesUSwiftConsoleWidget()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USwiftConsoleWidget);
UClass* Z_Construct_UClass_USwiftConsoleWidget_NoRegister()
{
	return USwiftConsoleWidget::StaticClass();
}
struct Z_Construct_UClass_USwiftConsoleWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "SwiftConsoleWidget.h" },
		{ "ModuleRelativePath", "Public/SwiftConsoleWidget.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USwiftConsoleWidget_ReceiveSwiftConsoleUpdate, "ReceiveSwiftConsoleUpdate" }, // 809332854
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USwiftConsoleWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USwiftConsoleWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_SwiftConsole,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USwiftConsoleWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USwiftConsoleWidget_Statics::ClassParams = {
	&USwiftConsoleWidget::StaticClass,
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
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USwiftConsoleWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_USwiftConsoleWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USwiftConsoleWidget()
{
	if (!Z_Registration_Info_UClass_USwiftConsoleWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USwiftConsoleWidget.OuterSingleton, Z_Construct_UClass_USwiftConsoleWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USwiftConsoleWidget.OuterSingleton;
}
template<> SWIFTCONSOLE_API UClass* StaticClass<USwiftConsoleWidget>()
{
	return USwiftConsoleWidget::StaticClass();
}
USwiftConsoleWidget::USwiftConsoleWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USwiftConsoleWidget);
USwiftConsoleWidget::~USwiftConsoleWidget() {}
// End Class USwiftConsoleWidget

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_rober_OneDrive_Documents_Game_Dev_Portfolio_UnrealEngine_Plugins_SwiftConsole_Source_SwiftConsole_Public_SwiftConsoleWidget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USwiftConsoleWidget, USwiftConsoleWidget::StaticClass, TEXT("USwiftConsoleWidget"), &Z_Registration_Info_UClass_USwiftConsoleWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USwiftConsoleWidget), 2620422355U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_rober_OneDrive_Documents_Game_Dev_Portfolio_UnrealEngine_Plugins_SwiftConsole_Source_SwiftConsole_Public_SwiftConsoleWidget_h_135775707(TEXT("/Script/SwiftConsole"),
	Z_CompiledInDeferFile_FID_Users_rober_OneDrive_Documents_Game_Dev_Portfolio_UnrealEngine_Plugins_SwiftConsole_Source_SwiftConsole_Public_SwiftConsoleWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_rober_OneDrive_Documents_Game_Dev_Portfolio_UnrealEngine_Plugins_SwiftConsole_Source_SwiftConsole_Public_SwiftConsoleWidget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
