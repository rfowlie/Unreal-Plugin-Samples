// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ModularMeshDataAsset.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
 
class UObject;
class UStaticMesh;
class UStaticMeshComponent;
struct FMaterialVariationContainer;
#ifdef MODULARMESHES_ModularMeshDataAsset_generated_h
#error "ModularMeshDataAsset.generated.h already included, missing '#pragma once' in ModularMeshDataAsset.h"
#endif
#define MODULARMESHES_ModularMeshDataAsset_generated_h

#define FID_Users_rober_OneDrive_Documents_Game_Dev_Portfolio_UnrealEngine_Plugins_ModularMeshes_Source_ModularMeshes_Public_ModularMeshDataAsset_h_13_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMaterialVariationContainer_Statics; \
	MODULARMESHES_API static class UScriptStruct* StaticStruct();


template<> MODULARMESHES_API UScriptStruct* StaticStruct<struct FMaterialVariationContainer>();

#define FID_Users_rober_OneDrive_Documents_Game_Dev_Portfolio_UnrealEngine_Plugins_ModularMeshes_Source_ModularMeshes_Public_ModularMeshDataAsset_h_28_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FStaticMeshVariation_Statics; \
	MODULARMESHES_API static class UScriptStruct* StaticStruct();


template<> MODULARMESHES_API UScriptStruct* StaticStruct<struct FStaticMeshVariation>();

#define FID_Users_rober_OneDrive_Documents_Game_Dev_Portfolio_UnrealEngine_Plugins_ModularMeshes_Source_ModularMeshes_Public_ModularMeshDataAsset_h_43_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMaterialVariation_Statics; \
	MODULARMESHES_API static class UScriptStruct* StaticStruct();


template<> MODULARMESHES_API UScriptStruct* StaticStruct<struct FMaterialVariation>();

#define FID_Users_rober_OneDrive_Documents_Game_Dev_Portfolio_UnrealEngine_Plugins_ModularMeshes_Source_ModularMeshes_Public_ModularMeshDataAsset_h_55_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMaterialInstanceArray_Statics; \
	MODULARMESHES_API static class UScriptStruct* StaticStruct();


template<> MODULARMESHES_API UScriptStruct* StaticStruct<struct FMaterialInstanceArray>();

#define FID_Users_rober_OneDrive_Documents_Game_Dev_Portfolio_UnrealEngine_Plugins_ModularMeshes_Source_ModularMeshes_Public_ModularMeshDataAsset_h_64_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FModularMeshPreset_Statics; \
	MODULARMESHES_API static class UScriptStruct* StaticStruct();


template<> MODULARMESHES_API UScriptStruct* StaticStruct<struct FModularMeshPreset>();

#define FID_Users_rober_OneDrive_Documents_Game_Dev_Portfolio_UnrealEngine_Plugins_ModularMeshes_Source_ModularMeshes_Public_ModularMeshDataAsset_h_85_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetSoftObjectLoadSynchronously); \
	DECLARE_FUNCTION(execMakeRandomThemeMap); \
	DECLARE_FUNCTION(execSetThemesRandom); \
	DECLARE_FUNCTION(execSetThemes); \
	DECLARE_FUNCTION(execSetMaterialVariations); \
	DECLARE_FUNCTION(execSetStaticMesh); \
	DECLARE_FUNCTION(execGetOffset); \
	DECLARE_FUNCTION(execGetStaticMesh); \
	DECLARE_FUNCTION(execCheckValuePreset); \
	DECLARE_FUNCTION(execCheckValuesThemes); \
	DECLARE_FUNCTION(execCheckValueMaterials); \
	DECLARE_FUNCTION(execCheckValueRelativeTransform); \
	DECLARE_FUNCTION(execCheckValueStaticMesh); \
	DECLARE_FUNCTION(execSetStaticMeshComponentAlt); \
	DECLARE_FUNCTION(execGetRandomMaterialIndex); \
	DECLARE_FUNCTION(execGetRandomTransformIndex); \
	DECLARE_FUNCTION(execGetRandomStaticMeshIndex);


#define FID_Users_rober_OneDrive_Documents_Game_Dev_Portfolio_UnrealEngine_Plugins_ModularMeshes_Source_ModularMeshes_Public_ModularMeshDataAsset_h_85_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUModularMeshDataAsset(); \
	friend struct Z_Construct_UClass_UModularMeshDataAsset_Statics; \
public: \
	DECLARE_CLASS(UModularMeshDataAsset, UDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ModularMeshes"), NO_API) \
	DECLARE_SERIALIZER(UModularMeshDataAsset)


#define FID_Users_rober_OneDrive_Documents_Game_Dev_Portfolio_UnrealEngine_Plugins_ModularMeshes_Source_ModularMeshes_Public_ModularMeshDataAsset_h_85_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UModularMeshDataAsset(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UModularMeshDataAsset(UModularMeshDataAsset&&); \
	UModularMeshDataAsset(const UModularMeshDataAsset&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UModularMeshDataAsset); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UModularMeshDataAsset); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UModularMeshDataAsset) \
	NO_API virtual ~UModularMeshDataAsset();


#define FID_Users_rober_OneDrive_Documents_Game_Dev_Portfolio_UnrealEngine_Plugins_ModularMeshes_Source_ModularMeshes_Public_ModularMeshDataAsset_h_82_PROLOG
#define FID_Users_rober_OneDrive_Documents_Game_Dev_Portfolio_UnrealEngine_Plugins_ModularMeshes_Source_ModularMeshes_Public_ModularMeshDataAsset_h_85_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_rober_OneDrive_Documents_Game_Dev_Portfolio_UnrealEngine_Plugins_ModularMeshes_Source_ModularMeshes_Public_ModularMeshDataAsset_h_85_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_rober_OneDrive_Documents_Game_Dev_Portfolio_UnrealEngine_Plugins_ModularMeshes_Source_ModularMeshes_Public_ModularMeshDataAsset_h_85_INCLASS_NO_PURE_DECLS \
	FID_Users_rober_OneDrive_Documents_Game_Dev_Portfolio_UnrealEngine_Plugins_ModularMeshes_Source_ModularMeshes_Public_ModularMeshDataAsset_h_85_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MODULARMESHES_API UClass* StaticClass<class UModularMeshDataAsset>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_rober_OneDrive_Documents_Game_Dev_Portfolio_UnrealEngine_Plugins_ModularMeshes_Source_ModularMeshes_Public_ModularMeshDataAsset_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
