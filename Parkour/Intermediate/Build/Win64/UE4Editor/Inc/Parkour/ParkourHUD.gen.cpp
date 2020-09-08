// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Parkour/ParkourHUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParkourHUD() {}
// Cross Module References
	PARKOUR_API UClass* Z_Construct_UClass_AParkourHUD_NoRegister();
	PARKOUR_API UClass* Z_Construct_UClass_AParkourHUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_Parkour();
// End Cross Module References
	void AParkourHUD::StaticRegisterNativesAParkourHUD()
	{
	}
	UClass* Z_Construct_UClass_AParkourHUD_NoRegister()
	{
		return AParkourHUD::StaticClass();
	}
	struct Z_Construct_UClass_AParkourHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AParkourHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_Parkour,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AParkourHUD_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "ParkourHUD.h" },
		{ "ModuleRelativePath", "ParkourHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AParkourHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AParkourHUD>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AParkourHUD_Statics::ClassParams = {
		&AParkourHUD::StaticClass,
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
		0x008002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AParkourHUD_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AParkourHUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AParkourHUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AParkourHUD_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AParkourHUD, 756552536);
	template<> PARKOUR_API UClass* StaticClass<AParkourHUD>()
	{
		return AParkourHUD::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AParkourHUD(Z_Construct_UClass_AParkourHUD, &AParkourHUD::StaticClass, TEXT("/Script/Parkour"), TEXT("AParkourHUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AParkourHUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
