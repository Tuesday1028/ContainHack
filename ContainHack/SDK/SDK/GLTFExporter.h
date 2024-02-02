
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

/// Enum /Script/GLTFExporter.EGLTFTextureImageFormat
/// Size: 0x04
enum class EGLTFTextureImageFormat : uint8_t
{
	EGLTFTextureImageFormat__None                                                    = 0,
	EGLTFTextureImageFormat__PNG                                                     = 1,
	EGLTFTextureImageFormat__JPEG                                                    = 2,
	EGLTFTextureImageFormat__EGLTFTextureImageFormat_MAX                             = 3
};

/// Enum /Script/GLTFExporter.EGLTFTextureType
/// Size: 0x06
enum class EGLTFTextureType : uint8_t
{
	EGLTFTextureType__None                                                           = 0,
	EGLTFTextureType__HDR                                                            = 1,
	EGLTFTextureType__Normalmaps                                                     = 2,
	EGLTFTextureType__Lightmaps                                                      = 4,
	EGLTFTextureType__All                                                            = 7,
	EGLTFTextureType__EGLTFTextureType_MAX                                           = 8
};

/// Enum /Script/GLTFExporter.EGLTFTextureHDREncoding
/// Size: 0x03
enum class EGLTFTextureHDREncoding : uint8_t
{
	EGLTFTextureHDREncoding__None                                                    = 0,
	EGLTFTextureHDREncoding__RGBM                                                    = 1,
	EGLTFTextureHDREncoding__EGLTFTextureHDREncoding_MAX                             = 2
};

/// Enum /Script/GLTFExporter.EGLTFSceneMobility
/// Size: 0x06
enum class EGLTFSceneMobility : uint8_t
{
	EGLTFSceneMobility__None                                                         = 0,
	EGLTFSceneMobility__Static                                                       = 1,
	EGLTFSceneMobility__Stationary                                                   = 2,
	EGLTFSceneMobility__Movable                                                      = 4,
	EGLTFSceneMobility__All                                                          = 7,
	EGLTFSceneMobility__EGLTFSceneMobility_MAX                                       = 8
};

/// Enum /Script/GLTFExporter.EGLTFVariantSetsMode
/// Size: 0x04
enum class EGLTFVariantSetsMode : uint8_t
{
	EGLTFVariantSetsMode__None                                                       = 0,
	EGLTFVariantSetsMode__Khronos                                                    = 1,
	EGLTFVariantSetsMode__Epic                                                       = 2,
	EGLTFVariantSetsMode__EGLTFVariantSetsMode_MAX                                   = 3
};

/// Enum /Script/GLTFExporter.EGLTFMaterialVariantMode
/// Size: 0x04
enum class EGLTFMaterialVariantMode : uint8_t
{
	EGLTFMaterialVariantMode__None                                                   = 0,
	EGLTFMaterialVariantMode__Simple                                                 = 1,
	EGLTFMaterialVariantMode__UseMeshData                                            = 2,
	EGLTFMaterialVariantMode__EGLTFMaterialVariantMode_MAX                           = 3
};

/// Enum /Script/GLTFExporter.EGLTFMaterialBakeMode
/// Size: 0x04
enum class EGLTFMaterialBakeMode : uint8_t
{
	EGLTFMaterialBakeMode__Disabled                                                  = 0,
	EGLTFMaterialBakeMode__Simple                                                    = 1,
	EGLTFMaterialBakeMode__UseMeshData                                               = 2,
	EGLTFMaterialBakeMode__EGLTFMaterialBakeMode_MAX                                 = 3
};

/// Enum /Script/GLTFExporter.EGLTFMaterialBakeSizePOT
/// Size: 0x15
enum class EGLTFMaterialBakeSizePOT : uint8_t
{
	EGLTFMaterialBakeSizePOT__POT                                                    = 0,
	EGLTFMaterialBakeSizePOT__POT2                                                   = 1,
	EGLTFMaterialBakeSizePOT__POT3                                                   = 2,
	EGLTFMaterialBakeSizePOT__POT4                                                   = 3,
	EGLTFMaterialBakeSizePOT__POT5                                                   = 4,
	EGLTFMaterialBakeSizePOT__POT6                                                   = 5,
	EGLTFMaterialBakeSizePOT__POT7                                                   = 6,
	EGLTFMaterialBakeSizePOT__POT8                                                   = 7,
	EGLTFMaterialBakeSizePOT__POT9                                                   = 8,
	EGLTFMaterialBakeSizePOT__POT10                                                  = 9,
	EGLTFMaterialBakeSizePOT__POT11                                                  = 10,
	EGLTFMaterialBakeSizePOT__POT12                                                  = 11,
	EGLTFMaterialBakeSizePOT__POT13                                                  = 12,
	EGLTFMaterialBakeSizePOT__POT14                                                  = 13,
	EGLTFMaterialBakeSizePOT__POT_MAX                                                = 14
};

/// Enum /Script/GLTFExporter.EGLTFMaterialPropertyGroup
/// Size: 0x09
enum class EGLTFMaterialPropertyGroup : uint8_t
{
	EGLTFMaterialPropertyGroup__None                                                 = 0,
	EGLTFMaterialPropertyGroup__BaseColorOpacity                                     = 1,
	EGLTFMaterialPropertyGroup__MetallicRoughness                                    = 2,
	EGLTFMaterialPropertyGroup__EmissiveColor                                        = 3,
	EGLTFMaterialPropertyGroup__Normal                                               = 4,
	EGLTFMaterialPropertyGroup__AmbientOcclusion                                     = 5,
	EGLTFMaterialPropertyGroup__ClearCoatRoughness                                   = 6,
	EGLTFMaterialPropertyGroup__ClearCoatBottomNormal                                = 7,
	EGLTFMaterialPropertyGroup__EGLTFMaterialPropertyGroup_MAX                       = 8
};

/// Class /Script/GLTFExporter.GLTFExporter
/// Size: 0x0000 (0x000078 - 0x000078)
class UGLTFExporter : public UExporter
{ 
public:


	/// Functions
	// Function /Script/GLTFExporter.GLTFExporter.ExportToGLTF
	// bool ExportToGLTF(class UObject* Object, FString FilePath, class UGLTFExportOptions* Options, TSet<AActor*>& SelectedActors, FGLTFExportMessages& OutMessages); // [0x1c5d250] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/GLTFExporter.GLTFAnimSequenceExporter
/// Size: 0x0000 (0x000078 - 0x000078)
class UGLTFAnimSequenceExporter : public UGLTFExporter
{ 
public:
};

/// Class /Script/GLTFExporter.GLTFExportOptions
/// Size: 0x0088 (0x000028 - 0x0000B0)
class UGLTFExportOptions : public UObject
{ 
public:
	float                                              ExportUniformScale;                                         // 0x0028   (0x0004)  
	bool                                               bExportPreviewMesh;                                         // 0x002C   (0x0001)  
	bool                                               bStrictCompliance;                                          // 0x002D   (0x0001)  
	bool                                               bSkipNearDefaultValues;                                     // 0x002E   (0x0001)  
	bool                                               bIncludeGeneratorVersion;                                   // 0x002F   (0x0001)  
	bool                                               bExportProxyMaterials;                                      // 0x0030   (0x0001)  
	bool                                               bExportUnlitMaterials;                                      // 0x0031   (0x0001)  
	bool                                               bExportClearCoatMaterials;                                  // 0x0032   (0x0001)  
	bool                                               bExportExtraBlendModes;                                     // 0x0033   (0x0001)  
	EGLTFMaterialBakeMode                              BakeMaterialInputs;                                         // 0x0034   (0x0001)  
	EGLTFMaterialBakeSizePOT                           DefaultMaterialBakeSize;                                    // 0x0035   (0x0001)  
	SDK_UNDEFINED(1,2444) /* TEnumAsByte<TextureFilter> */ __um(DefaultMaterialBakeFilter);                        // 0x0036   (0x0001)  
	SDK_UNDEFINED(1,2445) /* TEnumAsByte<TextureAddress> */ __um(DefaultMaterialBakeTiling);                       // 0x0037   (0x0001)  
	SDK_UNDEFINED(80,2446) /* TMap<EGLTFMaterialPropertyGroup, FGLTFOverrideMaterialBakeSettings> */ __um(DefaultInputBakeSettings); // 0x0038   (0x0050)  
	int32_t                                            DefaultLevelOfDetail;                                       // 0x0088   (0x0004)  
	bool                                               bExportVertexColors;                                        // 0x008C   (0x0001)  
	bool                                               bExportVertexSkinWeights;                                   // 0x008D   (0x0001)  
	bool                                               bUseMeshQuantization;                                       // 0x008E   (0x0001)  
	bool                                               bExportLevelSequences;                                      // 0x008F   (0x0001)  
	bool                                               bExportAnimationSequences;                                  // 0x0090   (0x0001)  
	bool                                               bExportPlaybackSettings;                                    // 0x0091   (0x0001)  
	EGLTFTextureImageFormat                            TextureImageFormat;                                         // 0x0092   (0x0001)  
	unsigned char                                      UnknownData00_5[0x1];                                       // 0x0093   (0x0001)  MISSED
	int32_t                                            TextureImageQuality;                                        // 0x0094   (0x0004)  
	int32_t                                            NoLossyImageFormatFor;                                      // 0x0098   (0x0004)  
	bool                                               bExportTextureTransforms;                                   // 0x009C   (0x0001)  
	bool                                               bExportLightmaps;                                           // 0x009D   (0x0001)  
	EGLTFTextureHDREncoding                            TextureHDREncoding;                                         // 0x009E   (0x0001)  
	bool                                               bAdjustNormalmaps;                                          // 0x009F   (0x0001)  
	bool                                               bExportHiddenInGame;                                        // 0x00A0   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x00A1   (0x0003)  MISSED
	int32_t                                            ExportLights;                                               // 0x00A4   (0x0004)  
	bool                                               bExportCameras;                                             // 0x00A8   (0x0001)  
	bool                                               bExportHDRIBackdrops;                                       // 0x00A9   (0x0001)  
	bool                                               bExportSkySpheres;                                          // 0x00AA   (0x0001)  
	EGLTFVariantSetsMode                               VariantSetsMode;                                            // 0x00AB   (0x0001)  
	EGLTFMaterialVariantMode                           ExportMaterialVariants;                                     // 0x00AC   (0x0001)  
	bool                                               bExportMeshVariants;                                        // 0x00AD   (0x0001)  
	bool                                               bExportVisibilityVariants;                                  // 0x00AE   (0x0001)  
	unsigned char                                      UnknownData02_6[0x1];                                       // 0x00AF   (0x0001)  MISSED


	/// Functions
	// Function /Script/GLTFExporter.GLTFExportOptions.ResetToDefault
	// void ResetToDefault();                                                                                                // [0x1c5d580] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/GLTFExporter.GLTFLevelExporter
/// Size: 0x0000 (0x000078 - 0x000078)
class UGLTFLevelExporter : public UGLTFExporter
{ 
public:
};

/// Class /Script/GLTFExporter.GLTFLevelSequenceExporter
/// Size: 0x0000 (0x000078 - 0x000078)
class UGLTFLevelSequenceExporter : public UGLTFExporter
{ 
public:
};

/// Class /Script/GLTFExporter.GLTFLevelVariantSetsExporter
/// Size: 0x0000 (0x000078 - 0x000078)
class UGLTFLevelVariantSetsExporter : public UGLTFExporter
{ 
public:
};

/// Class /Script/GLTFExporter.GLTFMaterialExporter
/// Size: 0x0008 (0x000078 - 0x000080)
class UGLTFMaterialExporter : public UGLTFExporter
{ 
public:
	class UStaticMesh*                                 DefaultPreviewMesh;                                         // 0x0078   (0x0008)  
};

/// Struct /Script/GLTFExporter.GLTFOverrideMaterialBakeSettings
/// Size: 0x0006 (0x000000 - 0x000006)
struct FGLTFOverrideMaterialBakeSettings
{ 
	bool                                               bOverrideSize;                                              // 0x0000   (0x0001)  
	EGLTFMaterialBakeSizePOT                           Size;                                                       // 0x0001   (0x0001)  
	bool                                               bOverrideFilter;                                            // 0x0002   (0x0001)  
	SDK_UNDEFINED(1,2447) /* TEnumAsByte<TextureFilter> */ __um(Filter);                                           // 0x0003   (0x0001)  
	bool                                               bOverrideTiling;                                            // 0x0004   (0x0001)  
	SDK_UNDEFINED(1,2448) /* TEnumAsByte<TextureAddress> */ __um(Tiling);                                          // 0x0005   (0x0001)  
};

/// Class /Script/GLTFExporter.GLTFMaterialExportOptions
/// Size: 0x0060 (0x000028 - 0x000088)
class UGLTFMaterialExportOptions : public UAssetUserData
{ 
public:
	class UMaterialInterface*                          Proxy;                                                      // 0x0028   (0x0008)  
	FGLTFOverrideMaterialBakeSettings                  Default;                                                    // 0x0030   (0x0006)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x0036   (0x0002)  MISSED
	SDK_UNDEFINED(80,2449) /* TMap<EGLTFMaterialPropertyGroup, FGLTFOverrideMaterialBakeSettings> */ __um(Inputs); // 0x0038   (0x0050)  
};

/// Class /Script/GLTFExporter.GLTFProxyOptions
/// Size: 0x0058 (0x000028 - 0x000080)
class UGLTFProxyOptions : public UObject
{ 
public:
	bool                                               bBakeMaterialInputs;                                        // 0x0028   (0x0001)  
	EGLTFMaterialBakeSizePOT                           DefaultMaterialBakeSize;                                    // 0x0029   (0x0001)  
	SDK_UNDEFINED(1,2450) /* TEnumAsByte<TextureFilter> */ __um(DefaultMaterialBakeFilter);                        // 0x002A   (0x0001)  
	SDK_UNDEFINED(1,2451) /* TEnumAsByte<TextureAddress> */ __um(DefaultMaterialBakeTiling);                       // 0x002B   (0x0001)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x002C   (0x0004)  MISSED
	SDK_UNDEFINED(80,2452) /* TMap<EGLTFMaterialPropertyGroup, FGLTFOverrideMaterialBakeSettings> */ __um(DefaultInputBakeSettings); // 0x0030   (0x0050)  


	/// Functions
	// Function /Script/GLTFExporter.GLTFProxyOptions.ResetToDefault
	// void ResetToDefault();                                                                                                // [0x1c5d620] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/GLTFExporter.GLTFSkeletalMeshExporter
/// Size: 0x0000 (0x000078 - 0x000078)
class UGLTFSkeletalMeshExporter : public UGLTFExporter
{ 
public:
};

/// Class /Script/GLTFExporter.GLTFStaticMeshExporter
/// Size: 0x0000 (0x000078 - 0x000078)
class UGLTFStaticMeshExporter : public UGLTFExporter
{ 
public:
};

/// Struct /Script/GLTFExporter.GLTFExportMessages
/// Size: 0x0030 (0x000000 - 0x000030)
struct FGLTFExportMessages
{ 
	SDK_UNDEFINED(16,2453) /* TArray<FString> */       __um(Suggestions);                                          // 0x0000   (0x0010)  
	SDK_UNDEFINED(16,2454) /* TArray<FString> */       __um(Warnings);                                             // 0x0010   (0x0010)  
	SDK_UNDEFINED(16,2455) /* TArray<FString> */       __um(Errors);                                               // 0x0020   (0x0010)  
};

