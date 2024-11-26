// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealEngine/UnrealEngineGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUnrealEngineGameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
UNREALENGINE_API UClass* Z_Construct_UClass_AUnrealEngineGameMode();
UNREALENGINE_API UClass* Z_Construct_UClass_AUnrealEngineGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_UnrealEngine();
// End Cross Module References

// Begin Class AUnrealEngineGameMode
void AUnrealEngineGameMode::StaticRegisterNativesAUnrealEngineGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AUnrealEngineGameMode);
UClass* Z_Construct_UClass_AUnrealEngineGameMode_NoRegister()
{
	return AUnrealEngineGameMode::StaticClass();
}
struct Z_Construct_UClass_AUnrealEngineGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "UnrealEngineGameMode.h" },
		{ "ModuleRelativePath", "UnrealEngineGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUnrealEngineGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AUnrealEngineGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_UnrealEngine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AUnrealEngineGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AUnrealEngineGameMode_Statics::ClassParams = {
	&AUnrealEngineGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008802ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AUnrealEngineGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AUnrealEngineGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AUnrealEngineGameMode()
{
	if (!Z_Registration_Info_UClass_AUnrealEngineGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AUnrealEngineGameMode.OuterSingleton, Z_Construct_UClass_AUnrealEngineGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AUnrealEngineGameMode.OuterSingleton;
}
template<> UNREALENGINE_API UClass* StaticClass<AUnrealEngineGameMode>()
{
	return AUnrealEngineGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AUnrealEngineGameMode);
AUnrealEngineGameMode::~AUnrealEngineGameMode() {}
// End Class AUnrealEngineGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_rober_OneDrive_Documents_Game_Dev_Portfolio_UnrealEngine_Source_UnrealEngine_UnrealEngineGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AUnrealEngineGameMode, AUnrealEngineGameMode::StaticClass, TEXT("AUnrealEngineGameMode"), &Z_Registration_Info_UClass_AUnrealEngineGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AUnrealEngineGameMode), 2820094293U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_rober_OneDrive_Documents_Game_Dev_Portfolio_UnrealEngine_Source_UnrealEngine_UnrealEngineGameMode_h_668482931(TEXT("/Script/UnrealEngine"),
	Z_CompiledInDeferFile_FID_Users_rober_OneDrive_Documents_Game_Dev_Portfolio_UnrealEngine_Source_UnrealEngine_UnrealEngineGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_rober_OneDrive_Documents_Game_Dev_Portfolio_UnrealEngine_Source_UnrealEngine_UnrealEngineGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
