// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NetworkTopology/NT_HUD.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNT_HUD() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AHUD();
NETWORKTOPOLOGY_API UClass* Z_Construct_UClass_ANT_HUD();
NETWORKTOPOLOGY_API UClass* Z_Construct_UClass_ANT_HUD_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_NetworkTopology();
// End Cross Module References

// Begin Class ANT_HUD Function GetWidgetInstance
struct Z_Construct_UFunction_ANT_HUD_GetWidgetInstance_Statics
{
	struct NT_HUD_eventGetWidgetInstance_Parms
	{
		UUserWidget* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Returns the UMG widget instance spawned by this class\n" },
#endif
		{ "ModuleRelativePath", "NT_HUD.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the UMG widget instance spawned by this class" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ANT_HUD_GetWidgetInstance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NT_HUD_eventGetWidgetInstance_Parms, ReturnValue), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANT_HUD_GetWidgetInstance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANT_HUD_GetWidgetInstance_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANT_HUD_GetWidgetInstance_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANT_HUD_GetWidgetInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANT_HUD, nullptr, "GetWidgetInstance", nullptr, nullptr, Z_Construct_UFunction_ANT_HUD_GetWidgetInstance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANT_HUD_GetWidgetInstance_Statics::PropPointers), sizeof(Z_Construct_UFunction_ANT_HUD_GetWidgetInstance_Statics::NT_HUD_eventGetWidgetInstance_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANT_HUD_GetWidgetInstance_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANT_HUD_GetWidgetInstance_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ANT_HUD_GetWidgetInstance_Statics::NT_HUD_eventGetWidgetInstance_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANT_HUD_GetWidgetInstance()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANT_HUD_GetWidgetInstance_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANT_HUD::execGetWidgetInstance)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UUserWidget**)Z_Param__Result=P_THIS->GetWidgetInstance();
	P_NATIVE_END;
}
// End Class ANT_HUD Function GetWidgetInstance

// Begin Class ANT_HUD
void ANT_HUD::StaticRegisterNativesANT_HUD()
{
	UClass* Class = ANT_HUD::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetWidgetInstance", &ANT_HUD::execGetWidgetInstance },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ANT_HUD);
UClass* Z_Construct_UClass_ANT_HUD_NoRegister()
{
	return ANT_HUD::StaticClass();
}
struct Z_Construct_UClass_ANT_HUD_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "NT_HUD.h" },
		{ "ModuleRelativePath", "NT_HUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WidgetClass_MetaData[] = {
		{ "Category", "NT_HUD" },
		{ "ModuleRelativePath", "NT_HUD.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WidgetInstance_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "NT_HUD.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_WidgetClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WidgetInstance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ANT_HUD_GetWidgetInstance, "GetWidgetInstance" }, // 2998072853
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANT_HUD>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ANT_HUD_Statics::NewProp_WidgetClass = { "WidgetClass", nullptr, (EPropertyFlags)0x0044000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANT_HUD, WidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WidgetClass_MetaData), NewProp_WidgetClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANT_HUD_Statics::NewProp_WidgetInstance = { "WidgetInstance", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANT_HUD, WidgetInstance), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WidgetInstance_MetaData), NewProp_WidgetInstance_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANT_HUD_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANT_HUD_Statics::NewProp_WidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANT_HUD_Statics::NewProp_WidgetInstance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANT_HUD_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ANT_HUD_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AHUD,
	(UObject* (*)())Z_Construct_UPackage__Script_NetworkTopology,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANT_HUD_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ANT_HUD_Statics::ClassParams = {
	&ANT_HUD::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ANT_HUD_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ANT_HUD_Statics::PropPointers),
	0,
	0x009002ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANT_HUD_Statics::Class_MetaDataParams), Z_Construct_UClass_ANT_HUD_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ANT_HUD()
{
	if (!Z_Registration_Info_UClass_ANT_HUD.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ANT_HUD.OuterSingleton, Z_Construct_UClass_ANT_HUD_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ANT_HUD.OuterSingleton;
}
template<> NETWORKTOPOLOGY_API UClass* StaticClass<ANT_HUD>()
{
	return ANT_HUD::StaticClass();
}
ANT_HUD::ANT_HUD(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ANT_HUD);
ANT_HUD::~ANT_HUD() {}
// End Class ANT_HUD

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_s248029_Documents_Unreal_Projects_NetworkTopology_Source_NetworkTopology_NT_HUD_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ANT_HUD, ANT_HUD::StaticClass, TEXT("ANT_HUD"), &Z_Registration_Info_UClass_ANT_HUD, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ANT_HUD), 837505160U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_s248029_Documents_Unreal_Projects_NetworkTopology_Source_NetworkTopology_NT_HUD_h_1275428178(TEXT("/Script/NetworkTopology"),
	Z_CompiledInDeferFile_FID_Users_s248029_Documents_Unreal_Projects_NetworkTopology_Source_NetworkTopology_NT_HUD_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_s248029_Documents_Unreal_Projects_NetworkTopology_Source_NetworkTopology_NT_HUD_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
