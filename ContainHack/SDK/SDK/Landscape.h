
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
/// dependency: PhysicsCore

/// Enum /Script/Landscape.ELandscapeSetupErrors
/// Size: 0x05
enum class ELandscapeSetupErrors : uint8_t
{
	LSE_None                                                                         = 0,
	LSE_NoLandscapeInfo                                                              = 1,
	LSE_CollsionXY                                                                   = 2,
	LSE_NoLayerInfo                                                                  = 3,
	LSE_MAX                                                                          = 4
};

/// Enum /Script/Landscape.ERTDrawingType
/// Size: 0x06
enum class ERTDrawingType : uint8_t
{
	ERTDrawingType__RTAtlas                                                          = 0,
	ERTDrawingType__RTAtlasToNonAtlas                                                = 1,
	ERTDrawingType__RTNonAtlasToAtlas                                                = 2,
	ERTDrawingType__RTNonAtlas                                                       = 3,
	ERTDrawingType__RTMips                                                           = 4,
	ERTDrawingType__ERTDrawingType_MAX                                               = 5
};

/// Enum /Script/Landscape.EHeightmapRTType
/// Size: 0x14
enum class EHeightmapRTType : uint8_t
{
	EHeightmapRTType__HeightmapRT_CombinedAtlas                                      = 0,
	EHeightmapRTType__HeightmapRT_CombinedNonAtlas                                   = 1,
	EHeightmapRTType__HeightmapRT_Scratch1                                           = 2,
	EHeightmapRTType__HeightmapRT_Scratch2                                           = 3,
	EHeightmapRTType__HeightmapRT_Scratch3                                           = 4,
	EHeightmapRTType__HeightmapRT_Mip1                                               = 5,
	EHeightmapRTType__HeightmapRT_Mip2                                               = 6,
	EHeightmapRTType__HeightmapRT_Mip3                                               = 7,
	EHeightmapRTType__HeightmapRT_Mip4                                               = 8,
	EHeightmapRTType__HeightmapRT_Mip5                                               = 9,
	EHeightmapRTType__HeightmapRT_Mip6                                               = 10,
	EHeightmapRTType__HeightmapRT_Mip7                                               = 11,
	EHeightmapRTType__HeightmapRT_Count                                              = 12,
	EHeightmapRTType__HeightmapRT_MAX                                                = 13
};

/// Enum /Script/Landscape.EWeightmapRTType
/// Size: 0x14
enum class EWeightmapRTType : uint8_t
{
	EWeightmapRTType__WeightmapRT_Scratch_RGBA                                       = 0,
	EWeightmapRTType__WeightmapRT_Scratch1                                           = 1,
	EWeightmapRTType__WeightmapRT_Scratch2                                           = 2,
	EWeightmapRTType__WeightmapRT_Scratch3                                           = 3,
	EWeightmapRTType__WeightmapRT_Mip0                                               = 4,
	EWeightmapRTType__WeightmapRT_Mip1                                               = 5,
	EWeightmapRTType__WeightmapRT_Mip2                                               = 6,
	EWeightmapRTType__WeightmapRT_Mip3                                               = 7,
	EWeightmapRTType__WeightmapRT_Mip4                                               = 8,
	EWeightmapRTType__WeightmapRT_Mip5                                               = 9,
	EWeightmapRTType__WeightmapRT_Mip6                                               = 10,
	EWeightmapRTType__WeightmapRT_Mip7                                               = 11,
	EWeightmapRTType__WeightmapRT_Count                                              = 12,
	EWeightmapRTType__WeightmapRT_MAX                                                = 13
};

/// Enum /Script/Landscape.ELandscapeBlendMode
/// Size: 0x03
enum class ELandscapeBlendMode : uint8_t
{
	LSBM_AdditiveBlend                                                               = 0,
	LSBM_AlphaBlend                                                                  = 1,
	LSBM_MAX                                                                         = 2
};

/// Enum /Script/Landscape.ELandscapeClearMode
/// Size: 0x04
enum class ELandscapeClearMode : uint8_t
{
	Clear_Weightmap                                                                  = 1,
	Clear_Heightmap                                                                  = 2,
	Clear_All                                                                        = 3,
	Clear_MAX                                                                        = 4
};

/// Enum /Script/Landscape.ELandscapeGizmoType
/// Size: 0x04
enum class ELandscapeGizmoType : uint8_t
{
	LGT_None                                                                         = 0,
	LGT_Height                                                                       = 1,
	LGT_Weight                                                                       = 2,
	LGT_MAX                                                                          = 3
};

/// Enum /Script/Landscape.EGrassScaling
/// Size: 0x04
enum class EGrassScaling : uint8_t
{
	EGrassScaling__Uniform                                                           = 0,
	EGrassScaling__Free                                                              = 1,
	EGrassScaling__LockXY                                                            = 2,
	EGrassScaling__EGrassScaling_MAX                                                 = 3
};

/// Enum /Script/Landscape.ESplineModulationColorMask
/// Size: 0x05
enum class ESplineModulationColorMask : uint8_t
{
	ESplineModulationColorMask__Red                                                  = 0,
	ESplineModulationColorMask__Green                                                = 1,
	ESplineModulationColorMask__Blue                                                 = 2,
	ESplineModulationColorMask__Alpha                                                = 3,
	ESplineModulationColorMask__ESplineModulationColorMask_MAX                       = 4
};

/// Enum /Script/Landscape.LandscapeSplineMeshOrientation
/// Size: 0x03
enum class LandscapeSplineMeshOrientation : uint8_t
{
	LSMO_XUp                                                                         = 0,
	LSMO_YUp                                                                         = 1,
	LSMO_MAX                                                                         = 2
};

/// Enum /Script/Landscape.ELandscapeLayerBlendType
/// Size: 0x04
enum class ELandscapeLayerBlendType : uint8_t
{
	LB_WeightBlend                                                                   = 0,
	LB_AlphaBlend                                                                    = 1,
	LB_HeightBlend                                                                   = 2,
	LB_MAX                                                                           = 3
};

/// Enum /Script/Landscape.ETerrainCoordMappingType
/// Size: 0x05
enum class ETerrainCoordMappingType : uint8_t
{
	TCMT_Auto                                                                        = 0,
	TCMT_XY                                                                          = 1,
	TCMT_XZ                                                                          = 2,
	TCMT_YZ                                                                          = 3,
	TCMT_MAX                                                                         = 4
};

/// Enum /Script/Landscape.ELandscapeCustomizedCoordType
/// Size: 0x06
enum class ELandscapeCustomizedCoordType : uint8_t
{
	LCCT_None                                                                        = 0,
	LCCT_CustomUV0                                                                   = 1,
	LCCT_CustomUV1                                                                   = 2,
	LCCT_CustomUV2                                                                   = 3,
	LCCT_WeightMapUV                                                                 = 4,
	LCCT_MAX                                                                         = 5
};

/// Enum /Script/Landscape.ELandscapeResizeMode
/// Size: 0x04
enum class ELandscapeResizeMode : uint8_t
{
	ELandscapeResizeMode__Resample                                                   = 0,
	ELandscapeResizeMode__Clip                                                       = 1,
	ELandscapeResizeMode__Expand                                                     = 2,
	ELandscapeResizeMode__ELandscapeResizeMode_MAX                                   = 3
};

/// Enum /Script/Landscape.ELandscapeImportAlphamapType
/// Size: 0x03
enum class ELandscapeImportAlphamapType : uint8_t
{
	ELandscapeImportAlphamapType__Additive                                           = 0,
	ELandscapeImportAlphamapType__Layered                                            = 1,
	ELandscapeImportAlphamapType__ELandscapeImportAlphamapType_MAX                   = 2
};

/// Enum /Script/Landscape.ELandscapeLayerPaintingRestriction
/// Size: 0x05
enum class ELandscapeLayerPaintingRestriction : uint8_t
{
	ELandscapeLayerPaintingRestriction__None                                         = 0,
	ELandscapeLayerPaintingRestriction__UseMaxLayers                                 = 1,
	ELandscapeLayerPaintingRestriction__ExistingOnly                                 = 2,
	ELandscapeLayerPaintingRestriction__UseComponentAllowList                        = 3,
	ELandscapeLayerPaintingRestriction__ELandscapeLayerPaintingRestriction_MAX       = 4
};

/// Enum /Script/Landscape.ELandscapeLayerDisplayMode
/// Size: 0x04
enum class ELandscapeLayerDisplayMode : uint8_t
{
	ELandscapeLayerDisplayMode__Default                                              = 0,
	ELandscapeLayerDisplayMode__Alphabetical                                         = 1,
	ELandscapeLayerDisplayMode__UserSpecific                                         = 2,
	ELandscapeLayerDisplayMode__ELandscapeLayerDisplayMode_MAX                       = 3
};

/// Enum /Script/Landscape.ELandscapeLODFalloff
/// Size: 0x03
enum class ELandscapeLODFalloff : uint8_t
{
	ELandscapeLODFalloff__Linear                                                     = 0,
	ELandscapeLODFalloff__SquareRoot                                                 = 1,
	ELandscapeLODFalloff__ELandscapeLODFalloff_MAX                                   = 2
};

/// Class /Script/Landscape.ControlPointMeshComponent
/// Size: 0x0010 (0x0005F0 - 0x000600)
class UControlPointMeshComponent : public UStaticMeshComponent
{ 
public:
	float                                              VirtualTextureMainPassMaxDrawDistance;                      // 0x05F0   (0x0004)  
	unsigned char                                      UnknownData00_6[0xC];                                       // 0x05F4   (0x000C)  MISSED
};

/// Class /Script/Landscape.LandscapeSplineInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class ULandscapeSplineInterface : public UInterface
{ 
public:
};

/// Struct /Script/Landscape.LandscapePerLODMaterialOverride
/// Size: 0x0010 (0x000000 - 0x000010)
struct FLandscapePerLODMaterialOverride
{ 
	int32_t                                            LODIndex;                                                   // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	class UMaterialInterface*                          Material;                                                   // 0x0008   (0x0008)  
};

/// Class /Script/Landscape.LandscapeProxy
/// Size: 0x0350 (0x000290 - 0x0005E0)
class ALandscapeProxy : public APartitionActor
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0290   (0x0008)  MISSED
	class ULandscapeSplinesComponent*                  SplineComponent;                                            // 0x0298   (0x0008)  
	FGuid                                              LandscapeGuid;                                              // 0x02A0   (0x0010)  
	TArray<FLandscapePerLODMaterialOverride>           PerLODOverrideMaterials;                                    // 0x02B0   (0x0010)  
	FIntPoint                                          LandscapeSectionOffset;                                     // 0x02C0   (0x0008)  
	int32_t                                            MaxLODLevel;                                                // 0x02C8   (0x0004)  
	float                                              ComponentScreenSizeToUseSubSections;                        // 0x02CC   (0x0004)  
	float                                              LOD0ScreenSize;                                             // 0x02D0   (0x0004)  
	float                                              LOD0DistributionSetting;                                    // 0x02D4   (0x0004)  
	float                                              LODDistributionSetting;                                     // 0x02D8   (0x0004)  
	int32_t                                            StaticLightingLOD;                                          // 0x02DC   (0x0004)  
	class UPhysicalMaterial*                           DefaultPhysMaterial;                                        // 0x02E0   (0x0008)  
	float                                              StreamingDistanceMultiplier;                                // 0x02E8   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x02EC   (0x0004)  MISSED
	class UMaterialInterface*                          LandscapeMaterial;                                          // 0x02F0   (0x0008)  
	unsigned char                                      UnknownData02_5[0x20];                                      // 0x02F8   (0x0020)  MISSED
	class UMaterialInterface*                          LandscapeHoleMaterial;                                      // 0x0318   (0x0008)  
	TArray<class URuntimeVirtualTexture*>              RuntimeVirtualTextures;                                     // 0x0320   (0x0010)  
	bool                                               bSetCreateRuntimeVirtualTextureVolumes;                     // 0x0330   (0x0001)  
	unsigned char                                      UnknownData03_5[0x3];                                       // 0x0331   (0x0003)  MISSED
	int32_t                                            VirtualTextureNumLods;                                      // 0x0334   (0x0004)  
	int32_t                                            VirtualTextureLodBias;                                      // 0x0338   (0x0004)  
	ERuntimeVirtualTextureMainPassType                 VirtualTextureRenderPassType;                               // 0x033C   (0x0001)  
	unsigned char                                      UnknownData04_5[0x3];                                       // 0x033D   (0x0003)  MISSED
	float                                              NegativeZBoundsExtension;                                   // 0x0340   (0x0004)  
	float                                              PositiveZBoundsExtension;                                   // 0x0344   (0x0004)  
	TArray<class ULandscapeComponent*>                 LandscapeComponents;                                        // 0x0348   (0x0010)  
	TArray<class ULandscapeHeightfieldCollisionComponent*> CollisionComponents;                                    // 0x0358   (0x0010)  
	TArray<class UHierarchicalInstancedStaticMeshComponent*> FoliageComponents;                                    // 0x0368   (0x0010)  
	class ULandscapeNaniteComponent*                   NaniteComponent;                                            // 0x0378   (0x0008)  
	unsigned char                                      UnknownData05_5[0x64];                                      // 0x0380   (0x0064)  MISSED
	bool                                               bHasLandscapeGrass;                                         // 0x03E4   (0x0001)  
	unsigned char                                      UnknownData06_5[0x3];                                       // 0x03E5   (0x0003)  MISSED
	float                                              StaticLightingResolution;                                   // 0x03E8   (0x0004)  
	bool                                               CastShadow : 1;                                             // 0x03EC:0 (0x0001)  
	bool                                               bCastDynamicShadow : 1;                                     // 0x03EC:1 (0x0001)  
	bool                                               bCastStaticShadow : 1;                                      // 0x03EC:2 (0x0001)  
	bool                                               bCastContactShadow : 1;                                     // 0x03EC:3 (0x0001)  
	unsigned char                                      UnknownData07_3[0x3];                                       // 0x03ED   (0x0003)  MISSED
	bool                                               bCastFarShadow : 1;                                         // 0x03F0:0 (0x0001)  
	unsigned char                                      UnknownData08_3[0x3];                                       // 0x03F1   (0x0003)  MISSED
	bool                                               bCastHiddenShadow : 1;                                      // 0x03F4:0 (0x0001)  
	unsigned char                                      UnknownData09_3[0x3];                                       // 0x03F5   (0x0003)  MISSED
	bool                                               bCastShadowAsTwoSided : 1;                                  // 0x03F8:0 (0x0001)  
	unsigned char                                      UnknownData10_3[0x3];                                       // 0x03F9   (0x0003)  MISSED
	bool                                               bAffectDistanceFieldLighting : 1;                           // 0x03FC:0 (0x0001)  
	FLightingChannels                                  LightingChannels;                                           // 0x03FD   (0x0001)  
	unsigned char                                      UnknownData11_5[0x2];                                       // 0x03FE   (0x0002)  MISSED
	bool                                               bUseMaterialPositionOffsetInStaticLighting : 1;             // 0x0400:0 (0x0001)  
	bool                                               bRenderCustomDepth : 1;                                     // 0x0400:1 (0x0001)  
	unsigned char                                      UnknownData12_4[0x3];                                       // 0x0401   (0x0003)  MISSED
	ERendererStencilMask                               CustomDepthStencilWriteMask;                                // 0x0404   (0x0001)  
	unsigned char                                      UnknownData13_5[0x3];                                       // 0x0405   (0x0003)  MISSED
	int32_t                                            CustomDepthStencilValue;                                    // 0x0408   (0x0004)  
	float                                              LDMaxDrawDistance;                                          // 0x040C   (0x0004)  
	FLightmassPrimitiveSettings                        LightmassSettings;                                          // 0x0410   (0x0018)  
	int32_t                                            CollisionMipLevel;                                          // 0x0428   (0x0004)  
	int32_t                                            SimpleCollisionMipLevel;                                    // 0x042C   (0x0004)  
	float                                              CollisionThickness;                                         // 0x0430   (0x0004)  
	unsigned char                                      UnknownData14_5[0x4];                                       // 0x0434   (0x0004)  MISSED
	FBodyInstance                                      BodyInstance;                                               // 0x0438   (0x0190)  
	bool                                               bGenerateOverlapEvents : 1;                                 // 0x05C8:0 (0x0001)  
	bool                                               bBakeMaterialPositionOffsetIntoCollision : 1;               // 0x05C8:1 (0x0001)  
	unsigned char                                      UnknownData15_4[0x3];                                       // 0x05C9   (0x0003)  MISSED
	int32_t                                            ComponentSizeQuads;                                         // 0x05CC   (0x0004)  
	int32_t                                            SubsectionSizeQuads;                                        // 0x05D0   (0x0004)  
	int32_t                                            NumSubsections;                                             // 0x05D4   (0x0004)  
	bool                                               bUsedForNavigation : 1;                                     // 0x05D8:0 (0x0001)  
	bool                                               bFillCollisionUnderLandscapeForNavmesh : 1;                 // 0x05D8:1 (0x0001)  
	unsigned char                                      UnknownData16_4[0x3];                                       // 0x05D9   (0x0003)  MISSED
	bool                                               bUseDynamicMaterialInstance;                                // 0x05DC   (0x0001)  
	ENavDataGatheringMode                              NavigationGeometryGatheringMode;                            // 0x05DD   (0x0001)  
	bool                                               bUseLandscapeForCullingInvisibleHLODVertices;               // 0x05DE   (0x0001)  
	bool                                               bHasLayersContent;                                          // 0x05DF   (0x0001)  


	/// Functions
	// Function /Script/Landscape.LandscapeProxy.SetVirtualTextureRenderPassType
	// void SetVirtualTextureRenderPassType(ERuntimeVirtualTextureMainPassType InType);                                      // [0x32f0910] Final|Native|Public|BlueprintCallable 
	// Function /Script/Landscape.LandscapeProxy.SetLandscapeMaterialVectorParameterValue
	// void SetLandscapeMaterialVectorParameterValue(FName ParameterName, FLinearColor Value);                               // [0x32f0840] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Landscape.LandscapeProxy.SetLandscapeMaterialTextureParameterValue
	// void SetLandscapeMaterialTextureParameterValue(FName ParameterName, class UTexture* Value);                           // [0x32f0770] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/Landscape.LandscapeProxy.SetLandscapeMaterialScalarParameterValue
	// void SetLandscapeMaterialScalarParameterValue(FName ParameterName, float Value);                                      // [0x32f06a0] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/Landscape.LandscapeProxy.LandscapeExportHeightmapToRenderTarget
	// bool LandscapeExportHeightmapToRenderTarget(class UTextureRenderTarget2D* InRenderTarget, bool InExportHeightIntoRGChannel, bool InExportLandscapeProxies); // [0x32f0580] Final|Native|Public|BlueprintCallable 
	// Function /Script/Landscape.LandscapeProxy.GetLandscapeActor
	// class ALandscape* GetLandscapeActor();                                                                                // [0x32f0550] Native|Public|BlueprintCallable 
	// Function /Script/Landscape.LandscapeProxy.EditorSetLandscapeMaterial
	// void EditorSetLandscapeMaterial(class UMaterialInterface* NewLandscapeMaterial);                                      // [0x1c11040] Final|Native|Public|BlueprintCallable 
	// Function /Script/Landscape.LandscapeProxy.EditorApplySpline
	// void EditorApplySpline(class USplineComponent* InSplineComponent, float StartWidth, float EndWidth, float StartSideFalloff, float EndSideFalloff, float StartRoll, float EndRoll, int32_t NumSubdivisions, bool bRaiseHeights, bool bLowerHeights, class ULandscapeLayerInfoObject* PaintLayer, FName EditLayerName); // [0x32f01c0] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/Landscape.LandscapeProxy.ChangeLODDistanceFactor
	// void ChangeLODDistanceFactor(float InLODDistanceFactor);                                                              // [0x32f0130] Native|Public|BlueprintCallable 
	// Function /Script/Landscape.LandscapeProxy.ChangeComponentScreenSizeToUseSubSections
	// void ChangeComponentScreenSizeToUseSubSections(float InComponentScreenSizeToUseSubSections);                          // [0x32f00a0] Native|Public|BlueprintCallable 
};

/// Class /Script/Landscape.Landscape
/// Size: 0x0000 (0x0005E0 - 0x0005E0)
class ALandscape : public ALandscapeProxy
{ 
public:


	/// Functions
	// Function /Script/Landscape.Landscape.RenderHeightmap
	// void RenderHeightmap(FTransform& InWorldTransform, FBox2D& InExtents, class UTextureRenderTarget2D* OutRenderTarget); // [0x32b8a40] Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
};

/// Class /Script/Landscape.LandscapeLODStreamingProxy_DEPRECATED
/// Size: 0x0000 (0x0000D0 - 0x0000D0)
class ULandscapeLODStreamingProxy_DEPRECATED : public UStreamableRenderAsset
{ 
public:
};

/// Struct /Script/Landscape.WeightmapLayerAllocationInfo
/// Size: 0x0010 (0x000000 - 0x000010)
struct FWeightmapLayerAllocationInfo
{ 
	class ULandscapeLayerInfoObject*                   LayerInfo;                                                  // 0x0000   (0x0008)  
	char                                               WeightmapTextureIndex;                                      // 0x0008   (0x0001)  
	char                                               WeightmapTextureChannel;                                    // 0x0009   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x000A   (0x0006)  MISSED
};

/// Class /Script/Landscape.LandscapeComponent
/// Size: 0x0210 (0x000540 - 0x000750)
class ULandscapeComponent : public UPrimitiveComponent
{ 
public:
	int32_t                                            SectionBaseX;                                               // 0x0538   (0x0004)  
	int32_t                                            SectionBaseY;                                               // 0x053C   (0x0004)  
	int32_t                                            ComponentSizeQuads;                                         // 0x0540   (0x0004)  
	int32_t                                            SubsectionSizeQuads;                                        // 0x0544   (0x0004)  
	int32_t                                            NumSubsections;                                             // 0x0548   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x054C   (0x0004)  MISSED
	class UMaterialInterface*                          OverrideMaterial;                                           // 0x0550   (0x0008)  
	class UMaterialInterface*                          OverrideHoleMaterial;                                       // 0x0558   (0x0008)  
	TArray<class UMaterialInstanceConstant*>           MaterialInstances;                                          // 0x0560   (0x0010)  
	TArray<class UMaterialInstanceDynamic*>            MaterialInstancesDynamic;                                   // 0x0570   (0x0010)  
	TArray<int8_t>                                     LODIndexToMaterialIndex;                                    // 0x0580   (0x0010)  
	class UTexture2D*                                  XYOffsetmapTexture;                                         // 0x0590   (0x0008)  
	unsigned char                                      UnknownData01_5[0x8];                                       // 0x0598   (0x0008)  MISSED
	FVector4                                           WeightmapScaleBias;                                         // 0x05A0   (0x0020)  
	float                                              WeightmapSubsectionOffset;                                  // 0x05C0   (0x0004)  
	unsigned char                                      UnknownData02_5[0xC];                                       // 0x05C4   (0x000C)  MISSED
	FVector4                                           HeightmapScaleBias;                                         // 0x05D0   (0x0020)  
	FBox                                               CachedLocalBox;                                             // 0x05F0   (0x0038)  
	SDK_UNDEFINED(28,2487) /* TLazyObjectPtr<ULandscapeHeightfieldCollisionComponent*> */ __um(CollisionComponent); // 0x0628   (0x001C)  
	bool                                               bNaniteActive;                                              // 0x0644   (0x0001)  
	unsigned char                                      UnknownData03_5[0x3];                                       // 0x0645   (0x0003)  MISSED
	class UTexture2D*                                  HeightmapTexture;                                           // 0x0648   (0x0008)  
	TArray<FWeightmapLayerAllocationInfo>              WeightmapLayerAllocations;                                  // 0x0650   (0x0010)  
	TArray<class UTexture2D*>                          WeightmapTextures;                                          // 0x0660   (0x0010)  
	TArray<FLandscapePerLODMaterialOverride>           PerLODOverrideMaterials;                                    // 0x0670   (0x0010)  
	FGuid                                              MapBuildDataId;                                             // 0x0680   (0x0010)  
	TArray<FGuid>                                      IrrelevantLights;                                           // 0x0690   (0x0010)  
	int32_t                                            CollisionMipLevel;                                          // 0x06A0   (0x0004)  
	int32_t                                            SimpleCollisionMipLevel;                                    // 0x06A4   (0x0004)  
	float                                              NegativeZBoundsExtension;                                   // 0x06A8   (0x0004)  
	float                                              PositiveZBoundsExtension;                                   // 0x06AC   (0x0004)  
	float                                              StaticLightingResolution;                                   // 0x06B0   (0x0004)  
	int32_t                                            ForcedLOD;                                                  // 0x06B4   (0x0004)  
	int32_t                                            LODBias;                                                    // 0x06B8   (0x0004)  
	FGuid                                              StateId;                                                    // 0x06BC   (0x0010)  
	FGuid                                              BakedTextureMaterialGuid;                                   // 0x06CC   (0x0010)  
	FGuid                                              LastBakedTextureMaterialGuid;                               // 0x06DC   (0x0010)  
	unsigned char                                      UnknownData04_5[0x4];                                       // 0x06EC   (0x0004)  MISSED
	class UTexture2D*                                  GIBakedBaseColorTexture;                                    // 0x06F0   (0x0008)  
	class UMaterialInterface*                          MobileMaterialInterface;                                    // 0x06F8   (0x0008)  
	TArray<class UMaterialInterface*>                  MobileMaterialInterfaces;                                   // 0x0700   (0x0010)  
	TArray<class UTexture2D*>                          MobileWeightmapTextures;                                    // 0x0710   (0x0010)  
	unsigned char                                      UnknownData05_6[0x30];                                      // 0x0720   (0x0030)  MISSED


	/// Functions
	// Function /Script/Landscape.LandscapeComponent.SetLODBias
	// void SetLODBias(int32_t InLODBias);                                                                                   // [0x32b8c80] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/Landscape.LandscapeComponent.SetForcedLOD
	// void SetForcedLOD(int32_t InForcedLOD);                                                                               // [0x32b8bf0] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/Landscape.LandscapeComponent.GetMaterialInstanceDynamic
	// class UMaterialInstanceDynamic* GetMaterialInstanceDynamic(int32_t InIndex);                                          // [0x32b8970] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Landscape.LandscapeComponent.EditorGetPaintLayerWeightByNameAtLocation
	// float EditorGetPaintLayerWeightByNameAtLocation(FVector& InLocation, FName InPaintLayerName);                         // [0x32b8880] Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/Landscape.LandscapeComponent.EditorGetPaintLayerWeightAtLocation
	// float EditorGetPaintLayerWeightAtLocation(FVector& InLocation, class ULandscapeLayerInfoObject* PaintLayer);          // [0x32b8790] Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
};

/// Class /Script/Landscape.LandscapeGizmoActor
/// Size: 0x0000 (0x000290 - 0x000290)
class ALandscapeGizmoActor : public AActor
{ 
public:
};

/// Class /Script/Landscape.LandscapeGizmoActiveActor
/// Size: 0x0050 (0x000290 - 0x0002E0)
class ALandscapeGizmoActiveActor : public ALandscapeGizmoActor
{ 
public:
	unsigned char                                      UnknownData00_1[0x50];                                      // 0x0290   (0x0050)  MISSED
};

/// Class /Script/Landscape.LandscapeGizmoRenderComponent
/// Size: 0x0000 (0x000540 - 0x000540)
class ULandscapeGizmoRenderComponent : public UPrimitiveComponent
{ 
public:
};

/// Struct /Script/Landscape.GrassVariety
/// Size: 0x0058 (0x000000 - 0x000058)
struct FGrassVariety
{ 
	class UStaticMesh*                                 GrassMesh;                                                  // 0x0000   (0x0008)  
	TArray<class UMaterialInterface*>                  OverrideMaterials;                                          // 0x0008   (0x0010)  
	FPerPlatformFloat                                  GrassDensity;                                               // 0x0018   (0x0004)  
	bool                                               bUseGrid;                                                   // 0x001C   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x001D   (0x0003)  MISSED
	float                                              PlacementJitter;                                            // 0x0020   (0x0004)  
	FPerPlatformInt                                    StartCullDistance;                                          // 0x0024   (0x0004)  
	FPerPlatformInt                                    EndCullDistance;                                            // 0x0028   (0x0004)  
	int32_t                                            MinLOD;                                                     // 0x002C   (0x0004)  
	EGrassScaling                                      Scaling;                                                    // 0x0030   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0031   (0x0003)  MISSED
	FFloatInterval                                     ScaleX;                                                     // 0x0034   (0x0008)  
	FFloatInterval                                     ScaleY;                                                     // 0x003C   (0x0008)  
	FFloatInterval                                     ScaleZ;                                                     // 0x0044   (0x0008)  
	bool                                               RandomRotation;                                             // 0x004C   (0x0001)  
	bool                                               AlignToSurface;                                             // 0x004D   (0x0001)  
	bool                                               bUseLandscapeLightmap;                                      // 0x004E   (0x0001)  
	FLightingChannels                                  LightingChannels;                                           // 0x004F   (0x0001)  
	bool                                               bReceivesDecals;                                            // 0x0050   (0x0001)  
	bool                                               bCastDynamicShadow;                                         // 0x0051   (0x0001)  
	bool                                               bCastContactShadow;                                         // 0x0052   (0x0001)  
	bool                                               bKeepInstanceBufferCPUCopy;                                 // 0x0053   (0x0001)  
	uint32_t                                           InstanceWorldPositionOffsetDisableDistance;                 // 0x0054   (0x0004)  
};

/// Class /Script/Landscape.LandscapeGrassType
/// Size: 0x0038 (0x000028 - 0x000060)
class ULandscapeGrassType : public UObject
{ 
public:
	TArray<FGrassVariety>                              GrassVarieties;                                             // 0x0028   (0x0010)  
	bool                                               bEnableDensityScaling : 1;                                  // 0x0038:0 (0x0001)  
	unsigned char                                      UnknownData00_4[0x7];                                       // 0x0039   (0x0007)  MISSED
	class UStaticMesh*                                 GrassMesh;                                                  // 0x0040   (0x0008)  
	float                                              GrassDensity;                                               // 0x0048   (0x0004)  
	float                                              PlacementJitter;                                            // 0x004C   (0x0004)  
	int32_t                                            StartCullDistance;                                          // 0x0050   (0x0004)  
	int32_t                                            EndCullDistance;                                            // 0x0054   (0x0004)  
	bool                                               RandomRotation;                                             // 0x0058   (0x0001)  
	bool                                               AlignToSurface;                                             // 0x0059   (0x0001)  
	unsigned char                                      UnknownData01_6[0x6];                                       // 0x005A   (0x0006)  MISSED
};

/// Class /Script/Landscape.LandscapeHeightfieldCollisionComponent
/// Size: 0x0100 (0x000540 - 0x000640)
class ULandscapeHeightfieldCollisionComponent : public UPrimitiveComponent
{ 
public:
	TArray<class ULandscapeLayerInfoObject*>           ComponentLayerInfos;                                        // 0x0538   (0x0010)  
	int32_t                                            SectionBaseX;                                               // 0x0548   (0x0004)  
	int32_t                                            SectionBaseY;                                               // 0x054C   (0x0004)  
	int32_t                                            CollisionSizeQuads;                                         // 0x0550   (0x0004)  
	float                                              CollisionScale;                                             // 0x0554   (0x0004)  
	int32_t                                            SimpleCollisionSizeQuads;                                   // 0x0558   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x055C   (0x0004)  MISSED
	TArray<char>                                       CollisionQuadFlags;                                         // 0x0560   (0x0010)  
	FGuid                                              HeightfieldGuid;                                            // 0x0570   (0x0010)  
	FBox                                               CachedLocalBox;                                             // 0x0580   (0x0038)  
	SDK_UNDEFINED(28,2488) /* TLazyObjectPtr<ULandscapeComponent*> */ __um(RenderComponent);                       // 0x05B8   (0x001C)  
	unsigned char                                      UnknownData01_5[0x14];                                      // 0x05D4   (0x0014)  MISSED
	TArray<class UPhysicalMaterial*>                   CookedPhysicalMaterials;                                    // 0x05E8   (0x0010)  
	unsigned char                                      UnknownData02_6[0x48];                                      // 0x05F8   (0x0048)  MISSED


	/// Functions
	// Function /Script/Landscape.LandscapeHeightfieldCollisionComponent.GetRenderComponent
	// class ULandscapeComponent* GetRenderComponent();                                                                      // [0x32b8a10] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/Landscape.LandscapeLayerInfoObject
/// Size: 0x0028 (0x000028 - 0x000050)
class ULandscapeLayerInfoObject : public UObject
{ 
public:
	FName                                              LayerName;                                                  // 0x0028   (0x0008)  
	class UPhysicalMaterial*                           PhysMaterial;                                               // 0x0030   (0x0008)  
	float                                              Hardness;                                                   // 0x0038   (0x0004)  
	FLinearColor                                       LayerUsageDebugColor;                                       // 0x003C   (0x0010)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x004C   (0x0004)  MISSED
};

/// Struct /Script/Landscape.LandscapeMaterialTextureStreamingInfo
/// Size: 0x000C (0x000000 - 0x00000C)
struct FLandscapeMaterialTextureStreamingInfo
{ 
	FName                                              TextureName;                                                // 0x0000   (0x0008)  
	float                                              TexelFactor;                                                // 0x0008   (0x0004)  
};

/// Class /Script/Landscape.LandscapeMaterialInstanceConstant
/// Size: 0x0018 (0x000200 - 0x000218)
class ULandscapeMaterialInstanceConstant : public UMaterialInstanceConstant
{ 
public:
	TArray<FLandscapeMaterialTextureStreamingInfo>     TextureStreamingInfo;                                       // 0x0200   (0x0010)  
	bool                                               bIsLayerThumbnail : 1;                                      // 0x0210:0 (0x0001)  
	bool                                               bDisableTessellation : 1;                                   // 0x0210:1 (0x0001)  
	bool                                               bMobile : 1;                                                // 0x0210:2 (0x0001)  
	bool                                               bEditorToolUsage : 1;                                       // 0x0210:3 (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0211   (0x0007)  MISSED
};

/// Class /Script/Landscape.LandscapeMeshCollisionComponent
/// Size: 0x0010 (0x000640 - 0x000650)
class ULandscapeMeshCollisionComponent : public ULandscapeHeightfieldCollisionComponent
{ 
public:
	FGuid                                              MeshGuid;                                                   // 0x0638   (0x0010)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0648   (0x0008)  MISSED
};

/// Class /Script/Landscape.LandscapeMeshProxyActor
/// Size: 0x0008 (0x000290 - 0x000298)
class ALandscapeMeshProxyActor : public AActor
{ 
public:
	class ULandscapeMeshProxyComponent*                LandscapeMeshProxyComponent;                                // 0x0290   (0x0008)  
};

/// Class /Script/Landscape.LandscapeMeshProxyComponent
/// Size: 0x0030 (0x0005F0 - 0x000620)
class ULandscapeMeshProxyComponent : public UStaticMeshComponent
{ 
public:
	FGuid                                              LandscapeGuid;                                              // 0x05F0   (0x0010)  
	TArray<FIntPoint>                                  ProxyComponentBases;                                        // 0x0600   (0x0010)  
	int8_t                                             ProxyLOD;                                                   // 0x0610   (0x0001)  
	unsigned char                                      UnknownData00_6[0xF];                                       // 0x0611   (0x000F)  MISSED
};

/// Class /Script/Landscape.LandscapeSettings
/// Size: 0x0070 (0x000038 - 0x0000A8)
class ULandscapeSettings : public UDeveloperSettings
{ 
public:
	int32_t                                            MaxNumberOfLayers;                                          // 0x0038   (0x0004)  
	int32_t                                            SideResolutionLimit;                                        // 0x003C   (0x0004)  
	SDK_UNDEFINED(48,2489) /* TWeakObjectPtr<UMaterialInterface*> */ __um(DefaultLandscapeMaterial);               // 0x0040   (0x0030)  
	SDK_UNDEFINED(48,2490) /* TWeakObjectPtr<ULandscapeLayerInfoObject*> */ __um(DefaultLayerInfoObject);          // 0x0070   (0x0030)  
	bool                                               bRestrictiveMode;                                           // 0x00A0   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x00A1   (0x0007)  MISSED
};

/// Class /Script/Landscape.LandscapeSplinesComponent
/// Size: 0x0030 (0x000540 - 0x000570)
class ULandscapeSplinesComponent : public UPrimitiveComponent
{ 
public:
	TArray<class ULandscapeSplineControlPoint*>        ControlPoints;                                              // 0x0538   (0x0010)  
	TArray<class ULandscapeSplineSegment*>             Segments;                                                   // 0x0548   (0x0010)  
	TArray<class UMeshComponent*>                      CookedForeignMeshComponents;                                // 0x0558   (0x0010)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0568   (0x0008)  MISSED


	/// Functions
	// Function /Script/Landscape.LandscapeSplinesComponent.GetSplineMeshComponents
	// TArray<USplineMeshComponent*> GetSplineMeshComponents();                                                              // [0x32c5370] Final|Native|Public|BlueprintCallable 
};

/// Struct /Script/Landscape.LandscapeSplineConnection
/// Size: 0x0010 (0x000000 - 0x000010)
struct FLandscapeSplineConnection
{ 
	class ULandscapeSplineSegment*                     Segment;                                                    // 0x0000   (0x0008)  
	bool                                               End : 1;                                                    // 0x0008:0 (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0009   (0x0007)  MISSED
};

/// Struct /Script/Landscape.LandscapeSplineInterpPoint
/// Size: 0x00E0 (0x000000 - 0x0000E0)
struct FLandscapeSplineInterpPoint
{ 
	FVector                                            Center;                                                     // 0x0000   (0x0018)  
	FVector                                            Left;                                                       // 0x0018   (0x0018)  
	FVector                                            Right;                                                      // 0x0030   (0x0018)  
	FVector                                            FalloffLeft;                                                // 0x0048   (0x0018)  
	FVector                                            FalloffRight;                                               // 0x0060   (0x0018)  
	FVector                                            LayerLeft;                                                  // 0x0078   (0x0018)  
	FVector                                            LayerRight;                                                 // 0x0090   (0x0018)  
	FVector                                            LayerFalloffLeft;                                           // 0x00A8   (0x0018)  
	FVector                                            LayerFalloffRight;                                          // 0x00C0   (0x0018)  
	float                                              StartEndFalloff;                                            // 0x00D8   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x00DC   (0x0004)  MISSED
};

/// Class /Script/Landscape.LandscapeSplineControlPoint
/// Size: 0x00B0 (0x000028 - 0x0000D8)
class ULandscapeSplineControlPoint : public UObject
{ 
public:
	FVector                                            Location;                                                   // 0x0028   (0x0018)  
	FRotator                                           Rotation;                                                   // 0x0040   (0x0018)  
	float                                              Width;                                                      // 0x0058   (0x0004)  
	float                                              LayerWidthRatio;                                            // 0x005C   (0x0004)  
	float                                              SideFalloff;                                                // 0x0060   (0x0004)  
	float                                              LeftSideFalloffFactor;                                      // 0x0064   (0x0004)  
	float                                              RightSideFalloffFactor;                                     // 0x0068   (0x0004)  
	float                                              LeftSideLayerFalloffFactor;                                 // 0x006C   (0x0004)  
	float                                              RightSideLayerFalloffFactor;                                // 0x0070   (0x0004)  
	float                                              EndFalloff;                                                 // 0x0074   (0x0004)  
	TArray<FLandscapeSplineConnection>                 ConnectedSegments;                                          // 0x0078   (0x0010)  
	TArray<FLandscapeSplineInterpPoint>                Points;                                                     // 0x0088   (0x0010)  
	FBox                                               Bounds;                                                     // 0x0098   (0x0038)  
	class UControlPointMeshComponent*                  LocalMeshComponent;                                         // 0x00D0   (0x0008)  
};

/// Struct /Script/Landscape.LandscapeSplineSegmentConnection
/// Size: 0x0018 (0x000000 - 0x000018)
struct FLandscapeSplineSegmentConnection
{ 
	class ULandscapeSplineControlPoint*                ControlPoint;                                               // 0x0000   (0x0008)  
	float                                              TangentLen;                                                 // 0x0008   (0x0004)  
	FName                                              SocketName;                                                 // 0x000C   (0x0008)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0014   (0x0004)  MISSED
};

/// Class /Script/Landscape.LandscapeSplineSegment
/// Size: 0x00A0 (0x000028 - 0x0000C8)
class ULandscapeSplineSegment : public UObject
{ 
public:
	FLandscapeSplineSegmentConnection                  Connections;                                                // 0x0028   (0x0030)  
	FInterpCurveVector                                 SplineInfo;                                                 // 0x0058   (0x0018)  
	TArray<FLandscapeSplineInterpPoint>                Points;                                                     // 0x0070   (0x0010)  
	FBox                                               Bounds;                                                     // 0x0080   (0x0038)  
	TArray<class USplineMeshComponent*>                LocalMeshComponents;                                        // 0x00B8   (0x0010)  
};

/// Class /Script/Landscape.LandscapeStreamingProxy
/// Size: 0x0020 (0x0005E0 - 0x000600)
class ALandscapeStreamingProxy : public ALandscapeProxy
{ 
public:
	SDK_UNDEFINED(28,2491) /* TLazyObjectPtr<ALandscape*> */ __um(LandscapeActor);                                 // 0x05E0   (0x001C)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x05FC   (0x0004)  MISSED
};

/// Class /Script/Landscape.LandscapeWeightmapUsage
/// Size: 0x0030 (0x000028 - 0x000058)
class ULandscapeWeightmapUsage : public UObject
{ 
public:
	class ULandscapeComponent*                         ChannelUsage;                                               // 0x0028   (0x0020)  
	FGuid                                              LayerGuid;                                                  // 0x0048   (0x0010)  
};

/// Struct /Script/Landscape.GrassInput
/// Size: 0x0038 (0x000000 - 0x000038)
struct FGrassInput
{ 
	FName                                              Name;                                                       // 0x0000   (0x0008)  
	class ULandscapeGrassType*                         GrassType;                                                  // 0x0008   (0x0008)  
	FExpressionInput                                   Input;                                                      // 0x0010   (0x0028)  
};

/// Class /Script/Landscape.MaterialExpressionLandscapeGrassOutput
/// Size: 0x0010 (0x0000B0 - 0x0000C0)
class UMaterialExpressionLandscapeGrassOutput : public UMaterialExpressionCustomOutput
{ 
public:
	TArray<FGrassInput>                                GrassTypes;                                                 // 0x00B0   (0x0010)  
};

/// Struct /Script/Landscape.LayerBlendInput
/// Size: 0x0088 (0x000000 - 0x000088)
struct FLayerBlendInput
{ 
	FName                                              LayerName;                                                  // 0x0000   (0x0008)  
	SDK_UNDEFINED(1,2492) /* TEnumAsByte<ELandscapeLayerBlendType> */ __um(BlendType);                             // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0009   (0x0007)  MISSED
	FExpressionInput                                   LayerInput;                                                 // 0x0010   (0x0028)  
	FExpressionInput                                   HeightInput;                                                // 0x0038   (0x0028)  
	float                                              PreviewWeight;                                              // 0x0060   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x0064   (0x0004)  MISSED
	FVector                                            ConstLayerInput;                                            // 0x0068   (0x0018)  
	float                                              ConstHeightInput;                                           // 0x0080   (0x0004)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x0084   (0x0004)  MISSED
};

/// Class /Script/Landscape.MaterialExpressionLandscapeLayerBlend
/// Size: 0x0010 (0x0000B0 - 0x0000C0)
class UMaterialExpressionLandscapeLayerBlend : public UMaterialExpression
{ 
public:
	TArray<FLayerBlendInput>                           Layers;                                                     // 0x00B0   (0x0010)  
};

/// Class /Script/Landscape.MaterialExpressionLandscapeLayerCoords
/// Size: 0x0018 (0x0000B0 - 0x0000C8)
class UMaterialExpressionLandscapeLayerCoords : public UMaterialExpression
{ 
public:
	SDK_UNDEFINED(1,2493) /* TEnumAsByte<ETerrainCoordMappingType> */ __um(MappingType);                           // 0x00B0   (0x0001)  
	SDK_UNDEFINED(1,2494) /* TEnumAsByte<ELandscapeCustomizedCoordType> */ __um(CustomUVType);                     // 0x00B1   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x00B2   (0x0002)  MISSED
	float                                              MappingScale;                                               // 0x00B4   (0x0004)  
	float                                              MappingRotation;                                            // 0x00B8   (0x0004)  
	float                                              MappingPanU;                                                // 0x00BC   (0x0004)  
	float                                              MappingPanV;                                                // 0x00C0   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x00C4   (0x0004)  MISSED
};

/// Class /Script/Landscape.ControlPointMeshActor
/// Size: 0x0008 (0x000290 - 0x000298)
class AControlPointMeshActor : public AActor
{ 
public:
	class UControlPointMeshComponent*                  ControlPointMeshComponent;                                  // 0x0290   (0x0008)  
};

/// Class /Script/Landscape.LandscapeBlueprintBrushBase
/// Size: 0x0000 (0x000290 - 0x000290)
class ALandscapeBlueprintBrushBase : public AActor
{ 
public:


	/// Functions
	// Function /Script/Landscape.LandscapeBlueprintBrushBase.RequestLandscapeUpdate
	// void RequestLandscapeUpdate();                                                                                        // [0xf96e80] Final|Native|Public|BlueprintCallable 
	// Function /Script/Landscape.LandscapeBlueprintBrushBase.Render
	// class UTextureRenderTarget2D* Render(bool InIsHeightmap, class UTextureRenderTarget2D* InCombinedResult, FName& InWeightmapLayerName); // [0x32cae30] Native|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/Landscape.LandscapeBlueprintBrushBase.Initialize
	// void Initialize(FTransform& InLandscapeTransform, FIntPoint& InLandscapeSize, FIntPoint& InLandscapeRenderTargetSize); // [0x32cac70] Native|Event|Public|HasOutParms|HasDefaults|BlueprintEvent 
	// Function /Script/Landscape.LandscapeBlueprintBrushBase.GetBlueprintRenderDependencies
	// void GetBlueprintRenderDependencies(TArray<UObject*>& OutStreamableAssets);                                           // [0x2119480] Event|Public|HasOutParms|BlueprintEvent 
};

/// Class /Script/Landscape.LandscapeHLODBuilder
/// Size: 0x0000 (0x000028 - 0x000028)
class ULandscapeHLODBuilder : public UHLODBuilder
{ 
public:
};

/// Class /Script/Landscape.LandscapeInfo
/// Size: 0x0210 (0x000028 - 0x000238)
class ULandscapeInfo : public UObject
{ 
public:
	SDK_UNDEFINED(28,2495) /* TLazyObjectPtr<ALandscape*> */ __um(LandscapeActor);                                 // 0x0028   (0x001C)  
	FGuid                                              LandscapeGuid;                                              // 0x0044   (0x0010)  
	int32_t                                            ComponentSizeQuads;                                         // 0x0054   (0x0004)  
	int32_t                                            SubsectionSizeQuads;                                        // 0x0058   (0x0004)  
	int32_t                                            ComponentNumSubsections;                                    // 0x005C   (0x0004)  
	FVector                                            DrawScale;                                                  // 0x0060   (0x0018)  
	unsigned char                                      UnknownData00_5[0xB0];                                      // 0x0078   (0x00B0)  MISSED
	SDK_UNDEFINED(16,2496) /* TArray<TWeakObjectPtr<ALandscapeStreamingProxy*>> */ __um(StreamingProxies);         // 0x0128   (0x0010)  
	unsigned char                                      UnknownData01_6[0x100];                                     // 0x0138   (0x0100)  MISSED
};

/// Class /Script/Landscape.LandscapeInfoMap
/// Size: 0x0058 (0x000028 - 0x000080)
class ULandscapeInfoMap : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x58];                                      // 0x0028   (0x0058)  MISSED
};

/// Class /Script/Landscape.LandscapeNaniteComponent
/// Size: 0x0020 (0x0005F0 - 0x000610)
class ULandscapeNaniteComponent : public UStaticMeshComponent
{ 
public:
	FGuid                                              ProxyContentId;                                             // 0x05F0   (0x0010)  
	bool                                               bEnabled;                                                   // 0x0600   (0x0001)  
	unsigned char                                      UnknownData00_6[0xF];                                       // 0x0601   (0x000F)  MISSED
};

/// Class /Script/Landscape.LandscapeSplineActor
/// Size: 0x0018 (0x000290 - 0x0002A8)
class ALandscapeSplineActor : public AActor
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0290   (0x0008)  MISSED
	FGuid                                              LandscapeGuid;                                              // 0x0298   (0x0010)  
};

/// Class /Script/Landscape.LandscapeSplineMeshesActor
/// Size: 0x0010 (0x000290 - 0x0002A0)
class ALandscapeSplineMeshesActor : public APartitionActor
{ 
public:
	TArray<class UStaticMeshComponent*>                StaticMeshComponents;                                       // 0x0290   (0x0010)  
};

/// Class /Script/Landscape.LandscapeSubsystem
/// Size: 0x0010 (0x000040 - 0x000050)
class ULandscapeSubsystem : public UTickableWorldSubsystem
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0040   (0x0010)  MISSED
};

/// Class /Script/Landscape.MaterialExpressionLandscapeLayerSample
/// Size: 0x0010 (0x0000B0 - 0x0000C0)
class UMaterialExpressionLandscapeLayerSample : public UMaterialExpression
{ 
public:
	FName                                              ParameterName;                                              // 0x00B0   (0x0008)  
	float                                              PreviewWeight;                                              // 0x00B8   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x00BC   (0x0004)  MISSED
};

/// Class /Script/Landscape.MaterialExpressionLandscapeLayerSwitch
/// Size: 0x0060 (0x0000B0 - 0x000110)
class UMaterialExpressionLandscapeLayerSwitch : public UMaterialExpression
{ 
public:
	FExpressionInput                                   LayerUsed;                                                  // 0x00B0   (0x0028)  
	FExpressionInput                                   LayerNotUsed;                                               // 0x00D8   (0x0028)  
	FName                                              ParameterName;                                              // 0x0100   (0x0008)  
	bool                                               PreviewUsed : 1;                                            // 0x0108:0 (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0109   (0x0007)  MISSED
};

/// Class /Script/Landscape.MaterialExpressionLandscapeLayerWeight
/// Size: 0x0078 (0x0000B0 - 0x000128)
class UMaterialExpressionLandscapeLayerWeight : public UMaterialExpression
{ 
public:
	FExpressionInput                                   Base;                                                       // 0x00B0   (0x0028)  
	FExpressionInput                                   Layer;                                                      // 0x00D8   (0x0028)  
	FName                                              ParameterName;                                              // 0x0100   (0x0008)  
	float                                              PreviewWeight;                                              // 0x0108   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x010C   (0x0004)  MISSED
	FVector                                            ConstBase;                                                  // 0x0110   (0x0018)  
};

/// Struct /Script/Landscape.PhysicalMaterialInput
/// Size: 0x0030 (0x000000 - 0x000030)
struct FPhysicalMaterialInput
{ 
	class UPhysicalMaterial*                           PhysicalMaterial;                                           // 0x0000   (0x0008)  
	FExpressionInput                                   Input;                                                      // 0x0008   (0x0028)  
};

/// Class /Script/Landscape.MaterialExpressionLandscapePhysicalMaterialOutput
/// Size: 0x0010 (0x0000B0 - 0x0000C0)
class UMaterialExpressionLandscapePhysicalMaterialOutput : public UMaterialExpressionCustomOutput
{ 
public:
	TArray<FPhysicalMaterialInput>                     Inputs;                                                     // 0x00B0   (0x0010)  
};

/// Class /Script/Landscape.MaterialExpressionLandscapeVisibilityMask
/// Size: 0x0000 (0x0000B0 - 0x0000B0)
class UMaterialExpressionLandscapeVisibilityMask : public UMaterialExpression
{ 
public:
};

/// Struct /Script/Landscape.LandscapeLayerBrush
/// Size: 0x0001 (0x000000 - 0x000001)
struct FLandscapeLayerBrush
{ 
	unsigned char                                      UnknownData00_1[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/Landscape.LandscapeLayer
/// Size: 0x0088 (0x000000 - 0x000088)
struct FLandscapeLayer
{ 
	FGuid                                              Guid;                                                       // 0x0000   (0x0010)  
	FName                                              Name;                                                       // 0x0010   (0x0008)  
	bool                                               bVisible;                                                   // 0x0018   (0x0001)  
	bool                                               bLocked;                                                    // 0x0019   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x001A   (0x0002)  MISSED
	float                                              HeightmapAlpha;                                             // 0x001C   (0x0004)  
	float                                              WeightmapAlpha;                                             // 0x0020   (0x0004)  
	SDK_UNDEFINED(1,2497) /* TEnumAsByte<ELandscapeBlendMode> */ __um(BlendMode);                                  // 0x0024   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0025   (0x0003)  MISSED
	TArray<FLandscapeLayerBrush>                       Brushes;                                                    // 0x0028   (0x0010)  
	SDK_UNDEFINED(80,2498) /* TMap<ULandscapeLayerInfoObject*, bool> */ __um(WeightmapLayerAllocationBlend);       // 0x0038   (0x0050)  
};

/// Struct /Script/Landscape.LandscapeEditToolRenderData
/// Size: 0x0038 (0x000000 - 0x000038)
struct FLandscapeEditToolRenderData
{ 
	class UMaterialInterface*                          ToolMaterial;                                               // 0x0000   (0x0008)  
	class UMaterialInterface*                          GizmoMaterial;                                              // 0x0008   (0x0008)  
	int32_t                                            SelectedType;                                               // 0x0010   (0x0004)  
	int32_t                                            DebugChannelR;                                              // 0x0014   (0x0004)  
	int32_t                                            DebugChannelG;                                              // 0x0018   (0x0004)  
	int32_t                                            DebugChannelB;                                              // 0x001C   (0x0004)  
	class UTexture2D*                                  DataTexture;                                                // 0x0020   (0x0008)  
	class UTexture2D*                                  LayerContributionTexture;                                   // 0x0028   (0x0008)  
	class UTexture2D*                                  DirtyTexture;                                               // 0x0030   (0x0008)  
};

/// Struct /Script/Landscape.LandscapeComponentMaterialOverride
/// Size: 0x0010 (0x000000 - 0x000010)
struct FLandscapeComponentMaterialOverride
{ 
	FPerPlatformInt                                    LODIndex;                                                   // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	class UMaterialInterface*                          Material;                                                   // 0x0008   (0x0008)  
};

/// Struct /Script/Landscape.WeightmapData
/// Size: 0x0030 (0x000000 - 0x000030)
struct FWeightmapData
{ 
	TArray<class UTexture2D*>                          Textures;                                                   // 0x0000   (0x0010)  
	TArray<FWeightmapLayerAllocationInfo>              LayerAllocations;                                           // 0x0010   (0x0010)  
	TArray<class ULandscapeWeightmapUsage*>            TextureUsages;                                              // 0x0020   (0x0010)  
};

/// Struct /Script/Landscape.HeightmapData
/// Size: 0x0008 (0x000000 - 0x000008)
struct FHeightmapData
{ 
	class UTexture2D*                                  Texture;                                                    // 0x0000   (0x0008)  
};

/// Struct /Script/Landscape.LandscapeLayerComponentData
/// Size: 0x0038 (0x000000 - 0x000038)
struct FLandscapeLayerComponentData
{ 
	FHeightmapData                                     HeightmapData;                                              // 0x0000   (0x0008)  
	FWeightmapData                                     WeightmapData;                                              // 0x0008   (0x0030)  
};

/// Struct /Script/Landscape.GizmoSelectData
/// Size: 0x0050 (0x000000 - 0x000050)
struct FGizmoSelectData
{ 
	unsigned char                                      UnknownData00_1[0x50];                                      // 0x0000   (0x0050)  MISSED
};

/// Struct /Script/Landscape.ForeignControlPointData
/// Size: 0x0001 (0x000000 - 0x000001)
struct FForeignControlPointData
{ 
	unsigned char                                      UnknownData00_1[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/Landscape.ForeignSplineSegmentData
/// Size: 0x0001 (0x000000 - 0x000001)
struct FForeignSplineSegmentData
{ 
	unsigned char                                      UnknownData00_1[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/Landscape.ForeignWorldSplineData
/// Size: 0x0001 (0x000000 - 0x000001)
struct FForeignWorldSplineData
{ 
	unsigned char                                      UnknownData00_1[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/Landscape.LandscapeSplineMeshEntry
/// Size: 0x0058 (0x000000 - 0x000058)
struct FLandscapeSplineMeshEntry
{ 
	class UStaticMesh*                                 Mesh;                                                       // 0x0000   (0x0008)  
	TArray<class UMaterialInterface*>                  MaterialOverrides;                                          // 0x0008   (0x0010)  
	bool                                               bCenterH : 1;                                               // 0x0018:0 (0x0001)  
	unsigned char                                      UnknownData00_4[0x7];                                       // 0x0019   (0x0007)  MISSED
	FVector2D                                          CenterAdjust;                                               // 0x0020   (0x0010)  
	bool                                               bScaleToWidth : 1;                                          // 0x0030:0 (0x0001)  
	unsigned char                                      UnknownData01_4[0x7];                                       // 0x0031   (0x0007)  MISSED
	FVector                                            Scale;                                                      // 0x0038   (0x0018)  
	SDK_UNDEFINED(1,2499) /* TEnumAsByte<LandscapeSplineMeshOrientation> */ __um(Orientation);                     // 0x0050   (0x0001)  
	SDK_UNDEFINED(1,2500) /* TEnumAsByte<ESplineMeshAxis> */ __um(ForwardAxis);                                    // 0x0051   (0x0001)  
	SDK_UNDEFINED(1,2501) /* TEnumAsByte<ESplineMeshAxis> */ __um(UpAxis);                                         // 0x0052   (0x0001)  
	unsigned char                                      UnknownData02_6[0x5];                                       // 0x0053   (0x0005)  MISSED
};

/// Struct /Script/Landscape.LandscapeInfoLayerSettings
/// Size: 0x0010 (0x000000 - 0x000010)
struct FLandscapeInfoLayerSettings
{ 
	class ULandscapeLayerInfoObject*                   LayerInfoObj;                                               // 0x0000   (0x0008)  
	FName                                              LayerName;                                                  // 0x0008   (0x0008)  
};

/// Struct /Script/Landscape.LandscapeEditorLayerSettings
/// Size: 0x0001 (0x000000 - 0x000001)
struct FLandscapeEditorLayerSettings
{ 
	unsigned char                                      UnknownData00_1[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/Landscape.LandscapeLayerStruct
/// Size: 0x0008 (0x000000 - 0x000008)
struct FLandscapeLayerStruct
{ 
	class ULandscapeLayerInfoObject*                   LayerInfoObj;                                               // 0x0000   (0x0008)  
};

/// Struct /Script/Landscape.LandscapeImportLayerInfo
/// Size: 0x0001 (0x000000 - 0x000001)
struct FLandscapeImportLayerInfo
{ 
	unsigned char                                      UnknownData00_1[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/Landscape.LandscapeProxyMaterialOverride
/// Size: 0x0010 (0x000000 - 0x000010)
struct FLandscapeProxyMaterialOverride
{ 
	FPerPlatformInt                                    LODIndex;                                                   // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	class UMaterialInterface*                          Material;                                                   // 0x0008   (0x0008)  
};

