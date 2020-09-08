// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef PARKOUR_ParkourProjectile_generated_h
#error "ParkourProjectile.generated.h already included, missing '#pragma once' in ParkourProjectile.h"
#endif
#define PARKOUR_ParkourProjectile_generated_h

#define Parkour_Source_Parkour_ParkourProjectile_h_12_SPARSE_DATA
#define Parkour_Source_Parkour_ParkourProjectile_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnHit(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define Parkour_Source_Parkour_ParkourProjectile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnHit(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define Parkour_Source_Parkour_ParkourProjectile_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAParkourProjectile(); \
	friend struct Z_Construct_UClass_AParkourProjectile_Statics; \
public: \
	DECLARE_CLASS(AParkourProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Parkour"), NO_API) \
	DECLARE_SERIALIZER(AParkourProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define Parkour_Source_Parkour_ParkourProjectile_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAParkourProjectile(); \
	friend struct Z_Construct_UClass_AParkourProjectile_Statics; \
public: \
	DECLARE_CLASS(AParkourProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Parkour"), NO_API) \
	DECLARE_SERIALIZER(AParkourProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define Parkour_Source_Parkour_ParkourProjectile_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AParkourProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AParkourProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AParkourProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AParkourProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AParkourProjectile(AParkourProjectile&&); \
	NO_API AParkourProjectile(const AParkourProjectile&); \
public:


#define Parkour_Source_Parkour_ParkourProjectile_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AParkourProjectile(AParkourProjectile&&); \
	NO_API AParkourProjectile(const AParkourProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AParkourProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AParkourProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AParkourProjectile)


#define Parkour_Source_Parkour_ParkourProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CollisionComp() { return STRUCT_OFFSET(AParkourProjectile, CollisionComp); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(AParkourProjectile, ProjectileMovement); }


#define Parkour_Source_Parkour_ParkourProjectile_h_9_PROLOG
#define Parkour_Source_Parkour_ParkourProjectile_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Parkour_Source_Parkour_ParkourProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	Parkour_Source_Parkour_ParkourProjectile_h_12_SPARSE_DATA \
	Parkour_Source_Parkour_ParkourProjectile_h_12_RPC_WRAPPERS \
	Parkour_Source_Parkour_ParkourProjectile_h_12_INCLASS \
	Parkour_Source_Parkour_ParkourProjectile_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Parkour_Source_Parkour_ParkourProjectile_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Parkour_Source_Parkour_ParkourProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	Parkour_Source_Parkour_ParkourProjectile_h_12_SPARSE_DATA \
	Parkour_Source_Parkour_ParkourProjectile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Parkour_Source_Parkour_ParkourProjectile_h_12_INCLASS_NO_PURE_DECLS \
	Parkour_Source_Parkour_ParkourProjectile_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PARKOUR_API UClass* StaticClass<class AParkourProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Parkour_Source_Parkour_ParkourProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
