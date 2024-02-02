
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

/// Enum /Script/ApexDestruction.EImpactDamageOverride
/// Size: 0x04
enum class EImpactDamageOverride : uint8_t
{
	IDO_None                                                                         = 0,
	IDO_On                                                                           = 1,
	IDO_Off                                                                          = 2,
	IDO_MAX                                                                          = 3
};

/// Class /Script/ApexDestruction.DestructibleActor
/// Size: 0x0018 (0x000290 - 0x0002A8)
class ADestructibleActor : public AActor
{ 
public:
	class UDestructibleComponent*                      DestructibleComponent;                                      // 0x0290   (0x0008)  
	SDK_UNDEFINED(16,1929) /* FMulticastInlineDelegate */ __um(OnActorFracture);                                   // 0x0298   (0x0010)  
};

/// Class /Script/ApexDestruction.DestructibleComponent
/// Size: 0x00A0 (0x0008A0 - 0x000940)
class UDestructibleComponent : public USkinnedMeshComponent
{ 
public:
	bool                                               bFractureEffectOverride : 1;                                // 0x08A0:0 (0x0001)  
	unsigned char                                      UnknownData00_4[0x7];                                       // 0x08A1   (0x0007)  MISSED
	TArray<FFractureEffect>                            FractureEffects;                                            // 0x08A8   (0x0010)  
	bool                                               bEnableHardSleeping;                                        // 0x08B8   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x08B9   (0x0003)  MISSED
	float                                              LargeChunkThreshold;                                        // 0x08BC   (0x0004)  
	SDK_UNDEFINED(16,1930) /* FMulticastInlineDelegate */ __um(OnComponentFracture);                               // 0x08C0   (0x0010)  
	unsigned char                                      UnknownData02_6[0x70];                                      // 0x08D0   (0x0070)  MISSED


	/// Functions
	// Function /Script/ApexDestruction.DestructibleComponent.SetDestructibleMesh
	// void SetDestructibleMesh(class UDestructibleMesh* NewMesh);                                                           // [0x46760b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/ApexDestruction.DestructibleComponent.GetDestructibleMesh
	// class UDestructibleMesh* GetDestructibleMesh();                                                                       // [0x4676040] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/ApexDestruction.DestructibleComponent.ApplyRadiusDamage
	// void ApplyRadiusDamage(float BaseDamage, FVector& HurtOrigin, float DamageRadius, float ImpulseStrength, bool bFullDamage); // [0x4675e80] Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/ApexDestruction.DestructibleComponent.ApplyDamage
	// void ApplyDamage(float DamageAmount, FVector& HitLocation, FVector& ImpulseDir, float ImpulseStrength);               // [0x4675ce0] Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
};

/// Struct /Script/ApexDestruction.FractureMaterial
/// Size: 0x0040 (0x000000 - 0x000040)
struct FFractureMaterial
{ 
	FVector2D                                          UVScale;                                                    // 0x0000   (0x0010)  
	FVector2D                                          UVOffset;                                                   // 0x0010   (0x0010)  
	FVector                                            Tangent;                                                    // 0x0020   (0x0018)  
	float                                              UAngle;                                                     // 0x0038   (0x0004)  
	int32_t                                            InteriorElementIndex;                                       // 0x003C   (0x0004)  
};

/// Struct /Script/ApexDestruction.DestructibleChunkParameters
/// Size: 0x0004 (0x000000 - 0x000004)
struct FDestructibleChunkParameters
{ 
	bool                                               bIsSupportChunk;                                            // 0x0000   (0x0001)  
	bool                                               bDoNotFracture;                                             // 0x0001   (0x0001)  
	bool                                               bDoNotDamage;                                               // 0x0002   (0x0001)  
	bool                                               bDoNotCrumble;                                              // 0x0003   (0x0001)  
};

/// Class /Script/ApexDestruction.DestructibleFractureSettings
/// Size: 0x0088 (0x000028 - 0x0000B0)
class UDestructibleFractureSettings : public UObject
{ 
public:
	int32_t                                            CellSiteCount;                                              // 0x0028   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x002C   (0x0004)  MISSED
	FFractureMaterial                                  FractureMaterialDesc;                                       // 0x0030   (0x0040)  
	int32_t                                            RandomSeed;                                                 // 0x0070   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x0074   (0x0004)  MISSED
	TArray<FVector>                                    VoronoiSites;                                               // 0x0078   (0x0010)  
	int32_t                                            OriginalSubmeshCount;                                       // 0x0088   (0x0004)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x008C   (0x0004)  MISSED
	TArray<class UMaterialInterface*>                  Materials;                                                  // 0x0090   (0x0010)  
	TArray<FDestructibleChunkParameters>               ChunkParameters;                                            // 0x00A0   (0x0010)  
};

/// Struct /Script/ApexDestruction.DestructibleDamageParameters
/// Size: 0x001C (0x000000 - 0x00001C)
struct FDestructibleDamageParameters
{ 
	float                                              DamageThreshold;                                            // 0x0000   (0x0004)  
	float                                              DamageSpread;                                               // 0x0004   (0x0004)  
	bool                                               bEnableImpactDamage;                                        // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0009   (0x0003)  MISSED
	float                                              ImpactDamage;                                               // 0x000C   (0x0004)  
	int32_t                                            DefaultImpactDamageDepth;                                   // 0x0010   (0x0004)  
	bool                                               bCustomImpactResistance;                                    // 0x0014   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0015   (0x0003)  MISSED
	float                                              ImpactResistance;                                           // 0x0018   (0x0004)  
};

/// Struct /Script/ApexDestruction.DestructibleDebrisParameters
/// Size: 0x0048 (0x000000 - 0x000048)
struct FDestructibleDebrisParameters
{ 
	float                                              DebrisLifetimeMin;                                          // 0x0000   (0x0004)  
	float                                              DebrisLifetimeMax;                                          // 0x0004   (0x0004)  
	float                                              DebrisMaxSeparationMin;                                     // 0x0008   (0x0004)  
	float                                              DebrisMaxSeparationMax;                                     // 0x000C   (0x0004)  
	FBox                                               ValidBounds;                                                // 0x0010   (0x0038)  
};

/// Struct /Script/ApexDestruction.DestructibleAdvancedParameters
/// Size: 0x0010 (0x000000 - 0x000010)
struct FDestructibleAdvancedParameters
{ 
	float                                              DamageCap;                                                  // 0x0000   (0x0004)  
	float                                              ImpactVelocityThreshold;                                    // 0x0004   (0x0004)  
	float                                              MaxChunkSpeed;                                              // 0x0008   (0x0004)  
	float                                              FractureImpulseScale;                                       // 0x000C   (0x0004)  
};

/// Struct /Script/ApexDestruction.DestructibleSpecialHierarchyDepths
/// Size: 0x0014 (0x000000 - 0x000014)
struct FDestructibleSpecialHierarchyDepths
{ 
	int32_t                                            SupportDepth;                                               // 0x0000   (0x0004)  
	int32_t                                            MinimumFractureDepth;                                       // 0x0004   (0x0004)  
	bool                                               bEnableDebris;                                              // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0009   (0x0003)  MISSED
	int32_t                                            DebrisDepth;                                                // 0x000C   (0x0004)  
	int32_t                                            EssentialDepth;                                             // 0x0010   (0x0004)  
};

/// Struct /Script/ApexDestruction.DestructibleDepthParameters
/// Size: 0x0001 (0x000000 - 0x000001)
struct FDestructibleDepthParameters
{ 
	SDK_UNDEFINED(1,1931) /* TEnumAsByte<EImpactDamageOverride> */ __um(ImpactDamageOverride);                     // 0x0000   (0x0001)  
};

/// Struct /Script/ApexDestruction.DestructibleParametersFlag
/// Size: 0x0004 (0x000000 - 0x000004)
struct FDestructibleParametersFlag
{ 
	bool                                               bAccumulateDamage : 1;                                      // 0x0000:0 (0x0001)  
	bool                                               bAssetDefinedSupport : 1;                                   // 0x0000:1 (0x0001)  
	bool                                               bWorldSupport : 1;                                          // 0x0000:2 (0x0001)  
	bool                                               bDebrisTimeout : 1;                                         // 0x0000:3 (0x0001)  
	bool                                               bDebrisMaxSeparation : 1;                                   // 0x0000:4 (0x0001)  
	bool                                               bCrumbleSmallestChunks : 1;                                 // 0x0000:5 (0x0001)  
	bool                                               bAccurateRaycasts : 1;                                      // 0x0000:6 (0x0001)  
	bool                                               bUseValidBounds : 1;                                        // 0x0000:7 (0x0001)  
	bool                                               bFormExtendedStructures : 1;                                // 0x0001:0 (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x0002   (0x0002)  MISSED
};

/// Struct /Script/ApexDestruction.DestructibleParameters
/// Size: 0x00A8 (0x000000 - 0x0000A8)
struct FDestructibleParameters
{ 
	FDestructibleDamageParameters                      DamageParameters;                                           // 0x0000   (0x001C)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x001C   (0x0004)  MISSED
	FDestructibleDebrisParameters                      DebrisParameters;                                           // 0x0020   (0x0048)  
	FDestructibleAdvancedParameters                    AdvancedParameters;                                         // 0x0068   (0x0010)  
	FDestructibleSpecialHierarchyDepths                SpecialHierarchyDepths;                                     // 0x0078   (0x0014)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x008C   (0x0004)  MISSED
	TArray<FDestructibleDepthParameters>               DepthParameters;                                            // 0x0090   (0x0010)  
	FDestructibleParametersFlag                        Flags;                                                      // 0x00A0   (0x0004)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x00A4   (0x0004)  MISSED
};

/// Class /Script/ApexDestruction.DestructibleMesh
/// Size: 0x00B8 (0x0004E0 - 0x000598)
class UDestructibleMesh : public USkeletalMesh
{ 
public:
	FDestructibleParameters                            DefaultDestructibleParameters;                              // 0x04E0   (0x00A8)  
	TArray<FFractureEffect>                            FractureEffects;                                            // 0x0588   (0x0010)  
};

