
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: DeveloperSettings
/// dependency: Engine

/// Enum /Script/OpenColorIO.EOpenColorIOViewTransformDirection
/// Size: 0x03
enum class EOpenColorIOViewTransformDirection : uint8_t
{
	EOpenColorIOViewTransformDirection__Forward                                      = 0,
	EOpenColorIOViewTransformDirection__Inverse                                      = 1,
	EOpenColorIOViewTransformDirection__EOpenColorIOViewTransformDirection_MAX       = 2
};

/// Class /Script/OpenColorIO.OpenColorIOSettings
/// Size: 0x0008 (0x000038 - 0x000040)
class UOpenColorIOSettings : public UDeveloperSettings
{ 
public:
	bool                                               bUseLegacyProcessor : 1;                                    // 0x0038:0 (0x0001)  
	bool                                               bUse32fLUT : 1;                                             // 0x0038:1 (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0039   (0x0007)  MISSED
};

/// Class /Script/OpenColorIO.OpenColorIOBlueprintLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UOpenColorIOBlueprintLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/OpenColorIO.OpenColorIOBlueprintLibrary.ApplyColorSpaceTransform
	// bool ApplyColorSpaceTransform(class UObject* WorldContextObject, FOpenColorIOColorConversionSettings& ConversionSettings, class UTexture* InputTexture, class UTextureRenderTarget2D* OutputRenderTarget); // [0x17242b0] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/OpenColorIO.OpenColorIOColorTransform
/// Size: 0x00F0 (0x000028 - 0x000118)
class UOpenColorIOColorTransform : public UObject
{ 
public:
	class UOpenColorIOConfiguration*                   ConfigurationOwner;                                         // 0x0028   (0x0008)  
	bool                                               bIsDisplayViewType;                                         // 0x0030   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0031   (0x0007)  MISSED
	SDK_UNDEFINED(16,2200) /* FString */               __um(SourceColorSpace);                                     // 0x0038   (0x0010)  
	SDK_UNDEFINED(16,2201) /* FString */               __um(DestinationColorSpace);                                // 0x0048   (0x0010)  
	SDK_UNDEFINED(16,2202) /* FString */               __um(Display);                                              // 0x0058   (0x0010)  
	SDK_UNDEFINED(16,2203) /* FString */               __um(View);                                                 // 0x0068   (0x0010)  
	EOpenColorIOViewTransformDirection                 DisplayViewDirection;                                       // 0x0078   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0079   (0x0007)  MISSED
	SDK_UNDEFINED(80,2204) /* TMap<int32_t, UTexture*> */ __um(Textures);                                          // 0x0080   (0x0050)  
	unsigned char                                      UnknownData02_6[0x48];                                      // 0x00D0   (0x0048)  MISSED
};

/// Struct /Script/OpenColorIO.OpenColorIOColorSpace
/// Size: 0x0028 (0x000000 - 0x000028)
struct FOpenColorIOColorSpace
{ 
	SDK_UNDEFINED(16,2205) /* FString */               __um(ColorSpaceName);                                       // 0x0000   (0x0010)  
	int32_t                                            ColorSpaceIndex;                                            // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0014   (0x0004)  MISSED
	SDK_UNDEFINED(16,2206) /* FString */               __um(FamilyName);                                           // 0x0018   (0x0010)  
};

/// Struct /Script/OpenColorIO.OpenColorIODisplayView
/// Size: 0x0020 (0x000000 - 0x000020)
struct FOpenColorIODisplayView
{ 
	SDK_UNDEFINED(16,2207) /* FString */               __um(Display);                                              // 0x0000   (0x0010)  
	SDK_UNDEFINED(16,2208) /* FString */               __um(View);                                                 // 0x0010   (0x0010)  
};

/// Class /Script/OpenColorIO.OpenColorIOConfiguration
/// Size: 0x0068 (0x000028 - 0x000090)
class UOpenColorIOConfiguration : public UObject
{ 
public:
	FFilePath                                          ConfigurationFile;                                          // 0x0028   (0x0010)  
	TArray<FOpenColorIOColorSpace>                     DesiredColorSpaces;                                         // 0x0038   (0x0010)  
	TArray<FOpenColorIODisplayView>                    DesiredDisplayViews;                                        // 0x0048   (0x0010)  
	TArray<class UOpenColorIOColorTransform*>          ColorTransforms;                                            // 0x0058   (0x0010)  
	unsigned char                                      UnknownData00_6[0x28];                                      // 0x0068   (0x0028)  MISSED
};

/// Class /Script/OpenColorIO.OpenColorIODisplayExtensionWrapper
/// Size: 0x0010 (0x000028 - 0x000038)
class UOpenColorIODisplayExtensionWrapper : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0028   (0x0010)  MISSED


	/// Functions
	// Function /Script/OpenColorIO.OpenColorIODisplayExtensionWrapper.SetSceneExtensionIsActiveFunctions
	// void SetSceneExtensionIsActiveFunctions(TArray<FSceneViewExtensionIsActiveFunctor>& IsActiveFunctions);               // [0x1724fd0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/OpenColorIO.OpenColorIODisplayExtensionWrapper.SetSceneExtensionIsActiveFunction
	// void SetSceneExtensionIsActiveFunction(FSceneViewExtensionIsActiveFunctor& IsActiveFunction);                         // [0x1724ee0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/OpenColorIO.OpenColorIODisplayExtensionWrapper.SetOpenColorIOConfiguration
	// void SetOpenColorIOConfiguration(FOpenColorIODisplayConfiguration InDisplayConfiguration);                            // [0x1724d60] Final|Native|Public|BlueprintCallable 
	// Function /Script/OpenColorIO.OpenColorIODisplayExtensionWrapper.RemoveSceneExtension
	// void RemoveSceneExtension();                                                                                          // [0x1724cc0] Final|Native|Public|BlueprintCallable 
	// Function /Script/OpenColorIO.OpenColorIODisplayExtensionWrapper.CreateOpenColorIODisplayExtension
	// class UOpenColorIODisplayExtensionWrapper* CreateOpenColorIODisplayExtension(FOpenColorIODisplayConfiguration InDisplayConfiguration, FSceneViewExtensionIsActiveFunctor& IsActiveFunction); // [0x1724ac0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/OpenColorIO.OpenColorIODisplayExtensionWrapper.CreateInGameOpenColorIODisplayExtension
	// class UOpenColorIODisplayExtensionWrapper* CreateInGameOpenColorIODisplayExtension(FOpenColorIODisplayConfiguration InDisplayConfiguration); // [0x1724820] Final|Native|Static|Public|BlueprintCallable 
};

/// Struct /Script/OpenColorIO.OpenColorIOColorConversionSettings
/// Size: 0x0080 (0x000000 - 0x000080)
struct FOpenColorIOColorConversionSettings
{ 
	class UOpenColorIOConfiguration*                   ConfigurationSource;                                        // 0x0000   (0x0008)  
	FOpenColorIOColorSpace                             SourceColorSpace;                                           // 0x0008   (0x0028)  
	FOpenColorIOColorSpace                             DestinationColorSpace;                                      // 0x0030   (0x0028)  
	FOpenColorIODisplayView                            DestinationDisplayView;                                     // 0x0058   (0x0020)  
	EOpenColorIOViewTransformDirection                 DisplayViewDirection;                                       // 0x0078   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0079   (0x0007)  MISSED
};

/// Struct /Script/OpenColorIO.OpenColorIODisplayConfiguration
/// Size: 0x0088 (0x000000 - 0x000088)
struct FOpenColorIODisplayConfiguration
{ 
	bool                                               bIsEnabled;                                                 // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0001   (0x0007)  MISSED
	FOpenColorIOColorConversionSettings                ColorConfiguration;                                         // 0x0008   (0x0080)  
};

