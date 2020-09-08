// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PARKOUR_ParkourCharacter_generated_h
#error "ParkourCharacter.generated.h already included, missing '#pragma once' in ParkourCharacter.h"
#endif
#define PARKOUR_ParkourCharacter_generated_h

#define Parkour_Source_Parkour_ParkourCharacter_h_14_SPARSE_DATA
#define Parkour_Source_Parkour_ParkourCharacter_h_14_RPC_WRAPPERS
#define Parkour_Source_Parkour_ParkourCharacter_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define Parkour_Source_Parkour_ParkourCharacter_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAParkourCharacter(); \
	friend struct Z_Construct_UClass_AParkourCharacter_Statics; \
public: \
	DECLARE_CLASS(AParkourCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Parkour"), NO_API) \
	DECLARE_SERIALIZER(AParkourCharacter)


#define Parkour_Source_Parkour_ParkourCharacter_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAParkourCharacter(); \
	friend struct Z_Construct_UClass_AParkourCharacter_Statics; \
public: \
	DECLARE_CLASS(AParkourCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Parkour"), NO_API) \
	DECLARE_SERIALIZER(AParkourCharacter)


#define Parkour_Source_Parkour_ParkourCharacter_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AParkourCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AParkourCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AParkourCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AParkourCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AParkourCharacter(AParkourCharacter&&); \
	NO_API AParkourCharacter(const AParkourCharacter&); \
public:


#define Parkour_Source_Parkour_ParkourCharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AParkourCharacter(AParkourCharacter&&); \
	NO_API AParkourCharacter(const AParkourCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AParkourCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AParkourCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AParkourCharacter)


#define Parkour_Source_Parkour_ParkourCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Mesh1P() { return STRUCT_OFFSET(AParkourCharacter, Mesh1P); } \
	FORCEINLINE static uint32 __PPO__FP_Gun() { return STRUCT_OFFSET(AParkourCharacter, FP_Gun); } \
	FORCEINLINE static uint32 __PPO__FP_MuzzleLocation() { return STRUCT_OFFSET(AParkourCharacter, FP_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__VR_Gun() { return STRUCT_OFFSET(AParkourCharacter, VR_Gun); } \
	FORCEINLINE static uint32 __PPO__VR_MuzzleLocation() { return STRUCT_OFFSET(AParkourCharacter, VR_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__FirstPersonCameraComponent() { return STRUCT_OFFSET(AParkourCharacter, FirstPersonCameraComponent); } \
	FORCEINLINE static uint32 __PPO__R_MotionController() { return STRUCT_OFFSET(AParkourCharacter, R_MotionController); } \
	FORCEINLINE static uint32 __PPO__L_MotionController() { return STRUCT_OFFSET(AParkourCharacter, L_MotionController); }


#define Parkour_Source_Parkour_ParkourCharacter_h_11_PROLOG
#define Parkour_Source_Parkour_ParkourCharacter_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Parkour_Source_Parkour_ParkourCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	Parkour_Source_Parkour_ParkourCharacter_h_14_SPARSE_DATA \
	Parkour_Source_Parkour_ParkourCharacter_h_14_RPC_WRAPPERS \
	Parkour_Source_Parkour_ParkourCharacter_h_14_INCLASS \
	Parkour_Source_Parkour_ParkourCharacter_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Parkour_Source_Parkour_ParkourCharacter_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Parkour_Source_Parkour_ParkourCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	Parkour_Source_Parkour_ParkourCharacter_h_14_SPARSE_DATA \
	Parkour_Source_Parkour_ParkourCharacter_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	Parkour_Source_Parkour_ParkourCharacter_h_14_INCLASS_NO_PURE_DECLS \
	Parkour_Source_Parkour_ParkourCharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PARKOUR_API UClass* StaticClass<class AParkourCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Parkour_Source_Parkour_ParkourCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
