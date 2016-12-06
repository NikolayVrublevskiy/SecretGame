// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MYPROJECT3_MyProject3GameMode_generated_h
#error "MyProject3GameMode.generated.h already included, missing '#pragma once' in MyProject3GameMode.h"
#endif
#define MYPROJECT3_MyProject3GameMode_generated_h

#define MyProject3_Source_MyProject3_MyProject3GameMode_h_9_RPC_WRAPPERS
#define MyProject3_Source_MyProject3_MyProject3GameMode_h_9_RPC_WRAPPERS_NO_PURE_DECLS
#define MyProject3_Source_MyProject3_MyProject3GameMode_h_9_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesAMyProject3GameMode(); \
	friend MYPROJECT3_API class UClass* Z_Construct_UClass_AMyProject3GameMode(); \
	public: \
	DECLARE_CLASS(AMyProject3GameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), 0, TEXT("/Script/MyProject3"), MYPROJECT3_API) \
	DECLARE_SERIALIZER(AMyProject3GameMode) \
	/** Indicates whether the class is compiled into the engine */ \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define MyProject3_Source_MyProject3_MyProject3GameMode_h_9_INCLASS \
	private: \
	static void StaticRegisterNativesAMyProject3GameMode(); \
	friend MYPROJECT3_API class UClass* Z_Construct_UClass_AMyProject3GameMode(); \
	public: \
	DECLARE_CLASS(AMyProject3GameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), 0, TEXT("/Script/MyProject3"), MYPROJECT3_API) \
	DECLARE_SERIALIZER(AMyProject3GameMode) \
	/** Indicates whether the class is compiled into the engine */ \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define MyProject3_Source_MyProject3_MyProject3GameMode_h_9_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MYPROJECT3_API AMyProject3GameMode(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMyProject3GameMode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MYPROJECT3_API, AMyProject3GameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyProject3GameMode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	MYPROJECT3_API AMyProject3GameMode(AMyProject3GameMode&&); \
	MYPROJECT3_API AMyProject3GameMode(const AMyProject3GameMode&); \
public:


#define MyProject3_Source_MyProject3_MyProject3GameMode_h_9_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	MYPROJECT3_API AMyProject3GameMode(AMyProject3GameMode&&); \
	MYPROJECT3_API AMyProject3GameMode(const AMyProject3GameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MYPROJECT3_API, AMyProject3GameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyProject3GameMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMyProject3GameMode)


#define MyProject3_Source_MyProject3_MyProject3GameMode_h_9_PRIVATE_PROPERTY_OFFSET
#define MyProject3_Source_MyProject3_MyProject3GameMode_h_6_PROLOG
#define MyProject3_Source_MyProject3_MyProject3GameMode_h_9_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject3_Source_MyProject3_MyProject3GameMode_h_9_PRIVATE_PROPERTY_OFFSET \
	MyProject3_Source_MyProject3_MyProject3GameMode_h_9_RPC_WRAPPERS \
	MyProject3_Source_MyProject3_MyProject3GameMode_h_9_INCLASS \
	MyProject3_Source_MyProject3_MyProject3GameMode_h_9_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProject3_Source_MyProject3_MyProject3GameMode_h_9_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject3_Source_MyProject3_MyProject3GameMode_h_9_PRIVATE_PROPERTY_OFFSET \
	MyProject3_Source_MyProject3_MyProject3GameMode_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
	MyProject3_Source_MyProject3_MyProject3GameMode_h_9_INCLASS_NO_PURE_DECLS \
	MyProject3_Source_MyProject3_MyProject3GameMode_h_9_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MyProject3_Source_MyProject3_MyProject3GameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
