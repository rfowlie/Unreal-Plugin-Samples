// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GelatinousWidget/Public/GelatinousWidgetDataAsset.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGelatinousWidgetDataAsset() {}

// Begin Cross Module References
BLUTILITY_API UClass* Z_Construct_UClass_UEditorUtilityWidget_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
GELATINOUSWIDGET_API UClass* Z_Construct_UClass_UGelatinousWidgetDataAsset();
GELATINOUSWIDGET_API UClass* Z_Construct_UClass_UGelatinousWidgetDataAsset_NoRegister();
GELATINOUSWIDGET_API UScriptStruct* Z_Construct_UScriptStruct_FAbsorbedWidgetContainer();
GELATINOUSWIDGET_API UScriptStruct* Z_Construct_UScriptStruct_FAbsorbedWidgetInfo();
UPackage* Z_Construct_UPackage__Script_GelatinousWidget();
// End Cross Module References

// Begin ScriptStruct FAbsorbedWidgetInfo
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AbsorbedWidgetInfo;
class UScriptStruct* FAbsorbedWidgetInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AbsorbedWidgetInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AbsorbedWidgetInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAbsorbedWidgetInfo, (UObject*)Z_Construct_UPackage__Script_GelatinousWidget(), TEXT("AbsorbedWidgetInfo"));
	}
	return Z_Registration_Info_UScriptStruct_AbsorbedWidgetInfo.OuterSingleton;
}
template<> GELATINOUSWIDGET_API UScriptStruct* StaticStruct<FAbsorbedWidgetInfo>()
{
	return FAbsorbedWidgetInfo::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAbsorbedWidgetInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GelatinousWidgetDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[] = {
		{ "Category", "AbsorbedWidgetInfo" },
		{ "ModuleRelativePath", "Public/GelatinousWidgetDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SubGroups_MetaData[] = {
		{ "Category", "AbsorbedWidgetInfo" },
		{ "ModuleRelativePath", "Public/GelatinousWidgetDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DocumentationURL_MetaData[] = {
		{ "Category", "AbsorbedWidgetInfo" },
		{ "ModuleRelativePath", "Public/GelatinousWidgetDataAsset.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_DisplayName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_SubGroups_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SubGroups;
	static const UECodeGen_Private::FStrPropertyParams NewProp_DocumentationURL;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAbsorbedWidgetInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FAbsorbedWidgetInfo_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAbsorbedWidgetInfo, DisplayName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DisplayName_MetaData), NewProp_DisplayName_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAbsorbedWidgetInfo_Statics::NewProp_SubGroups_Inner = { "SubGroups", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAbsorbedWidgetInfo_Statics::NewProp_SubGroups = { "SubGroups", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAbsorbedWidgetInfo, SubGroups), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SubGroups_MetaData), NewProp_SubGroups_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAbsorbedWidgetInfo_Statics::NewProp_DocumentationURL = { "DocumentationURL", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAbsorbedWidgetInfo, DocumentationURL), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DocumentationURL_MetaData), NewProp_DocumentationURL_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAbsorbedWidgetInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAbsorbedWidgetInfo_Statics::NewProp_DisplayName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAbsorbedWidgetInfo_Statics::NewProp_SubGroups_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAbsorbedWidgetInfo_Statics::NewProp_SubGroups,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAbsorbedWidgetInfo_Statics::NewProp_DocumentationURL,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAbsorbedWidgetInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAbsorbedWidgetInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GelatinousWidget,
	nullptr,
	&NewStructOps,
	"AbsorbedWidgetInfo",
	Z_Construct_UScriptStruct_FAbsorbedWidgetInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAbsorbedWidgetInfo_Statics::PropPointers),
	sizeof(FAbsorbedWidgetInfo),
	alignof(FAbsorbedWidgetInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAbsorbedWidgetInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAbsorbedWidgetInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAbsorbedWidgetInfo()
{
	if (!Z_Registration_Info_UScriptStruct_AbsorbedWidgetInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AbsorbedWidgetInfo.InnerSingleton, Z_Construct_UScriptStruct_FAbsorbedWidgetInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AbsorbedWidgetInfo.InnerSingleton;
}
// End ScriptStruct FAbsorbedWidgetInfo

// Begin ScriptStruct FAbsorbedWidgetContainer
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AbsorbedWidgetContainer;
class UScriptStruct* FAbsorbedWidgetContainer::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AbsorbedWidgetContainer.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AbsorbedWidgetContainer.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAbsorbedWidgetContainer, (UObject*)Z_Construct_UPackage__Script_GelatinousWidget(), TEXT("AbsorbedWidgetContainer"));
	}
	return Z_Registration_Info_UScriptStruct_AbsorbedWidgetContainer.OuterSingleton;
}
template<> GELATINOUSWIDGET_API UScriptStruct* StaticStruct<FAbsorbedWidgetContainer>()
{
	return FAbsorbedWidgetContainer::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAbsorbedWidgetContainer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GelatinousWidgetDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EditorUtilityWidget_MetaData[] = {
		{ "Category", "AbsorbedWidgetContainer" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GelatinousWidgetDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WidgetInfo_MetaData[] = {
		{ "Category", "AbsorbedWidgetContainer" },
		{ "ModuleRelativePath", "Public/GelatinousWidgetDataAsset.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EditorUtilityWidget;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WidgetInfo;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAbsorbedWidgetContainer>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAbsorbedWidgetContainer_Statics::NewProp_EditorUtilityWidget = { "EditorUtilityWidget", nullptr, (EPropertyFlags)0x001000000009001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAbsorbedWidgetContainer, EditorUtilityWidget), Z_Construct_UClass_UEditorUtilityWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EditorUtilityWidget_MetaData), NewProp_EditorUtilityWidget_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAbsorbedWidgetContainer_Statics::NewProp_WidgetInfo = { "WidgetInfo", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAbsorbedWidgetContainer, WidgetInfo), Z_Construct_UScriptStruct_FAbsorbedWidgetInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WidgetInfo_MetaData), NewProp_WidgetInfo_MetaData) }; // 906252092
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAbsorbedWidgetContainer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAbsorbedWidgetContainer_Statics::NewProp_EditorUtilityWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAbsorbedWidgetContainer_Statics::NewProp_WidgetInfo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAbsorbedWidgetContainer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAbsorbedWidgetContainer_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GelatinousWidget,
	nullptr,
	&NewStructOps,
	"AbsorbedWidgetContainer",
	Z_Construct_UScriptStruct_FAbsorbedWidgetContainer_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAbsorbedWidgetContainer_Statics::PropPointers),
	sizeof(FAbsorbedWidgetContainer),
	alignof(FAbsorbedWidgetContainer),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000005),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAbsorbedWidgetContainer_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAbsorbedWidgetContainer_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAbsorbedWidgetContainer()
{
	if (!Z_Registration_Info_UScriptStruct_AbsorbedWidgetContainer.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AbsorbedWidgetContainer.InnerSingleton, Z_Construct_UScriptStruct_FAbsorbedWidgetContainer_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AbsorbedWidgetContainer.InnerSingleton;
}
// End ScriptStruct FAbsorbedWidgetContainer

// Begin Class UGelatinousWidgetDataAsset
void UGelatinousWidgetDataAsset::StaticRegisterNativesUGelatinousWidgetDataAsset()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGelatinousWidgetDataAsset);
UClass* Z_Construct_UClass_UGelatinousWidgetDataAsset_NoRegister()
{
	return UGelatinousWidgetDataAsset::StaticClass();
}
struct Z_Construct_UClass_UGelatinousWidgetDataAsset_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "GelatinousWidgetDataAsset.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/GelatinousWidgetDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WidgetMap_MetaData[] = {
		{ "Category", "GelatinousWidgetDataAsset" },
		{ "ModuleRelativePath", "Public/GelatinousWidgetDataAsset.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_WidgetMap_ValueProp;
	static const UECodeGen_Private::FClassPropertyParams NewProp_WidgetMap_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_WidgetMap;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGelatinousWidgetDataAsset>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGelatinousWidgetDataAsset_Statics::NewProp_WidgetMap_ValueProp = { "WidgetMap", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FAbsorbedWidgetInfo, METADATA_PARAMS(0, nullptr) }; // 906252092
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UGelatinousWidgetDataAsset_Statics::NewProp_WidgetMap_Key_KeyProp = { "WidgetMap_Key", nullptr, (EPropertyFlags)0x0004000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UEditorUtilityWidget_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UGelatinousWidgetDataAsset_Statics::NewProp_WidgetMap = { "WidgetMap", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGelatinousWidgetDataAsset, WidgetMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WidgetMap_MetaData), NewProp_WidgetMap_MetaData) }; // 906252092
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGelatinousWidgetDataAsset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGelatinousWidgetDataAsset_Statics::NewProp_WidgetMap_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGelatinousWidgetDataAsset_Statics::NewProp_WidgetMap_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGelatinousWidgetDataAsset_Statics::NewProp_WidgetMap,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGelatinousWidgetDataAsset_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGelatinousWidgetDataAsset_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_GelatinousWidget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGelatinousWidgetDataAsset_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGelatinousWidgetDataAsset_Statics::ClassParams = {
	&UGelatinousWidgetDataAsset::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UGelatinousWidgetDataAsset_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UGelatinousWidgetDataAsset_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGelatinousWidgetDataAsset_Statics::Class_MetaDataParams), Z_Construct_UClass_UGelatinousWidgetDataAsset_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGelatinousWidgetDataAsset()
{
	if (!Z_Registration_Info_UClass_UGelatinousWidgetDataAsset.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGelatinousWidgetDataAsset.OuterSingleton, Z_Construct_UClass_UGelatinousWidgetDataAsset_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGelatinousWidgetDataAsset.OuterSingleton;
}
template<> GELATINOUSWIDGET_API UClass* StaticClass<UGelatinousWidgetDataAsset>()
{
	return UGelatinousWidgetDataAsset::StaticClass();
}
UGelatinousWidgetDataAsset::UGelatinousWidgetDataAsset(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGelatinousWidgetDataAsset);
UGelatinousWidgetDataAsset::~UGelatinousWidgetDataAsset() {}
// End Class UGelatinousWidgetDataAsset

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_rober_OneDrive_Documents_Game_Dev_Portfolio_UnrealEngine_Plugins_GelatinousWidget_Source_GelatinousWidget_Public_GelatinousWidgetDataAsset_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FAbsorbedWidgetInfo::StaticStruct, Z_Construct_UScriptStruct_FAbsorbedWidgetInfo_Statics::NewStructOps, TEXT("AbsorbedWidgetInfo"), &Z_Registration_Info_UScriptStruct_AbsorbedWidgetInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAbsorbedWidgetInfo), 906252092U) },
		{ FAbsorbedWidgetContainer::StaticStruct, Z_Construct_UScriptStruct_FAbsorbedWidgetContainer_Statics::NewStructOps, TEXT("AbsorbedWidgetContainer"), &Z_Registration_Info_UScriptStruct_AbsorbedWidgetContainer, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAbsorbedWidgetContainer), 2448751359U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGelatinousWidgetDataAsset, UGelatinousWidgetDataAsset::StaticClass, TEXT("UGelatinousWidgetDataAsset"), &Z_Registration_Info_UClass_UGelatinousWidgetDataAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGelatinousWidgetDataAsset), 802054334U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_rober_OneDrive_Documents_Game_Dev_Portfolio_UnrealEngine_Plugins_GelatinousWidget_Source_GelatinousWidget_Public_GelatinousWidgetDataAsset_h_736937571(TEXT("/Script/GelatinousWidget"),
	Z_CompiledInDeferFile_FID_Users_rober_OneDrive_Documents_Game_Dev_Portfolio_UnrealEngine_Plugins_GelatinousWidget_Source_GelatinousWidget_Public_GelatinousWidgetDataAsset_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_rober_OneDrive_Documents_Game_Dev_Portfolio_UnrealEngine_Plugins_GelatinousWidget_Source_GelatinousWidget_Public_GelatinousWidgetDataAsset_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Users_rober_OneDrive_Documents_Game_Dev_Portfolio_UnrealEngine_Plugins_GelatinousWidget_Source_GelatinousWidget_Public_GelatinousWidgetDataAsset_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_rober_OneDrive_Documents_Game_Dev_Portfolio_UnrealEngine_Plugins_GelatinousWidget_Source_GelatinousWidget_Public_GelatinousWidgetDataAsset_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
