// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Parkour/ParkourGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParkourGameMode() {}
// Cross Module References
	PARKOUR_API UClass* Z_Construct_UClass_AParkourGameMode_NoRegister();
	PARKOUR_API UClass* Z_Construct_UClass_AParkourGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Parkour();
// End Cross Module References
	void AParkourGameMode::StaticRegisterNativesAParkourGameMode()
	{
	}
	UClass* Z_Construct_UClass_AParkourGameMode_NoRegister()
	{
		return AParkourGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AParkourGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AParkourGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Parkour,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AParkourGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "ParkourGameMode.h" },
		{ "ModuleRelativePath", "ParkourGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AParkourGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AParkourGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AParkourGameMode_Statics::ClassParams = {
		&AParkourGameMode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AParkourGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AParkourGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AParkourGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AParkourGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AParkourGameMode, 1839882065);
	template<> PARKOUR_API UClass* StaticClass<AParkourGameMode>()
	{
		return AParkourGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AParkourGameMode(Z_Construct_UClass_AParkourGameMode, &AParkourGameMode::StaticClass, TEXT("/Script/Parkour"), TEXT("AParkourGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AParkourGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
