// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ModularMeshComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MODULARMESHES_ModularMeshComponent_generated_h
#error "ModularMeshComponent.generated.h already included, missing '#pragma once' in ModularMeshComponent.h"
#endif
#define MODULARMESHES_ModularMeshComponent_generated_h

#define FID_Users_rober_OneDrive_Documents_Game_Dev_Portfolio_UnrealEngine_Plugins_ModularMeshes_Source_ModularMeshes_Public_ModularMeshComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execClampPreset); \
	DECLARE_FUNCTION(execClampMaterials); \
	DECLARE_FUNCTION(execClampRelativeTransform); \
	DECLARE_FUNCTION(execClampStaticMesh); \
	DECLARE_FUNCTION(execCustomOnRegister); \
	DECLARE_FUNCTION(execRandomizeMesh);


#if WITH_EDITOR
#define FID_Users_rober_OneDrive_Documents_Game_Dev_Portfolio_UnrealEngine_Plugins_ModularMeshes_Source_ModularMeshes_Public_ModularMeshComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS_EOD \
	DECLARE_FUNCTION(execRandomize);
#else // WITH_EDITOR
#define FID_Users_rober_OneDrive_Documents_Game_Dev_Portfolio_UnrealEngine_Plugins_ModularMeshes_Source_ModularMeshes_Public_ModularMeshComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS_EOD
#endif // WITH_EDITOR


#define FID_Users_rober_OneDrive_Documents_Game_Dev_Portfolio_UnrealEngine_Plugins_ModularMeshes_Source_ModularMeshes_Public_ModularMeshComponent_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUModularMeshComponent(); \
	friend struct Z_Construct_UClass_UModularMeshComponent_Statics; \
public: \
	DECLARE_CLASS(UModularMeshComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ModularMeshes"), NO_API) \
	DECLARE_SERIALIZER(UModularMeshComponent)


#define FID_Users_rober_OneDrive_Documents_Game_Dev_Portfolio_UnrealEngine_Plugins_ModularMeshes_Source_ModularMeshes_Public_ModularMeshComponent_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UModularMeshComponent(UModularMeshComponent&&); \
	UModularMeshComponent(const UModularMeshComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UModularMeshComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UModularMeshComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UModularMeshComponent) \
	NO_API virtual ~UModularMeshComponent();


#define FID_Users_rober_OneDrive_Documents_Game_Dev_Portfolio_UnrealEngine_Plugins_ModularMeshes_Source_ModularMeshes_Public_ModularMeshComponent_h_11_PROLOG
#define FID_Users_rober_OneDrive_Documents_Game_Dev_Portfolio_UnrealEngine_Plugins_ModularMeshes_Source_ModularMeshes_Public_ModularMeshComponent_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_rober_OneDrive_Documents_Game_Dev_Portfolio_UnrealEngine_Plugins_ModularMeshes_Source_ModularMeshes_Public_ModularMeshComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_rober_OneDrive_Documents_Game_Dev_Portfolio_UnrealEngine_Plugins_ModularMeshes_Source_ModularMeshes_Public_ModularMeshComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS_EOD \
	FID_Users_rober_OneDrive_Documents_Game_Dev_Portfolio_UnrealEngine_Plugins_ModularMeshes_Source_ModularMeshes_Public_ModularMeshComponent_h_14_INCLASS_NO_PURE_DECLS \
	FID_Users_rober_OneDrive_Documents_Game_Dev_Portfolio_UnrealEngine_Plugins_ModularMeshes_Source_ModularMeshes_Public_ModularMeshComponent_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MODULARMESHES_API UClass* StaticClass<class UModularMeshComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_rober_OneDrive_Documents_Game_Dev_Portfolio_UnrealEngine_Plugins_ModularMeshes_Source_ModularMeshes_Public_ModularMeshComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
