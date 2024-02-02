
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: GameplayCameras

/// Enum /Game/BallisticsVFX/FXSpawnerBlueprints/FXSpawners/BPData/ImpactType.ImpactType
/// Size: 0x04
enum class ImpactType : uint8_t
{
	ImpactType__NewEnumerator0                                                       = 0,
	ImpactType__NewEnumerator1                                                       = 1,
	ImpactType__NewEnumerator2                                                       = 2,
	ImpactType__ImpactType_MAX                                                       = 3
};

/// Enum /Game/BallisticsVFX/FXSpawnerBlueprints/FXSpawners/BPData/FXTypes.FXTypes
/// Size: 0x04
enum class FXTypes : uint8_t
{
	FXTypes__NewEnumerator0                                                          = 0,
	FXTypes__NewEnumerator1                                                          = 1,
	FXTypes__NewEnumerator3                                                          = 2,
	FXTypes__FXTypes_MAX                                                             = 3
};

/// Enum /Game/BallisticsVFX/FXSpawnerBlueprints/Projectiles/Data/ProjectileState.ProjectileState
/// Size: 0x03
enum class ProjectileState : uint8_t
{
	ProjectileState__NewEnumerator0                                                  = 0,
	ProjectileState__NewEnumerator1                                                  = 1,
	ProjectileState__ProjectileState_MAX                                             = 2
};

/// Enum /Game/BallisticsVFX/FXSpawnerBlueprints/FXSpawners/BPData/Projectile_Size.Projectile_Size
/// Size: 0x04
enum class Projectile_Size : uint8_t
{
	Projectile_Size__NewEnumerator0                                                  = 0,
	Projectile_Size__NewEnumerator1                                                  = 1,
	Projectile_Size__NewEnumerator2                                                  = 2,
	Projectile_Size__Projectile_MAX                                                  = 3
};

/// Enum /Game/BallisticsVFX/FXSpawnerBlueprints/FXSpawners/BPData/MaterialState.MaterialState
/// Size: 0x06
enum class MaterialState : uint8_t
{
	MaterialState__NewEnumerator2                                                    = 0,
	MaterialState__NewEnumerator0                                                    = 1,
	MaterialState__NewEnumerator1                                                    = 2,
	MaterialState__NewEnumerator6                                                    = 3,
	MaterialState__NewEnumerator7                                                    = 4,
	MaterialState__MaterialState_MAX                                                 = 5
};

/// Class /Game/BallisticsVFX/FirstPersonBPExamples/ExplosionShake.ExplosionShake_C
/// Size: 0x0000 (0x000210 - 0x000210)
class UExplosionShake_C : public ULegacyCameraShake
{ 
public:


	/// Functions
	// Function /Game/BallisticsVFX/FirstPersonBPExamples/ExplosionShake.ExplosionShake_C.NewFunction
	// void NewFunction();                                                                                                   // [0x2119480] Public|BlueprintCallable|BlueprintEvent 
};

/// Struct /Game/BallisticsVFX/FXSpawnerBlueprints/FXSpawners/BPData/FXMaterialData.FXMaterialData
/// Size: 0x0098 (0x000000 - 0x000098)
struct FFXMaterialData
{ 
	SDK_UNDEFINED(1,1190) /* TEnumAsByte<EPhysicalSurface> */ __um(Surface_5_A13BA84C444F7DFF70888788C6FCCCC2);    // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0001   (0x0007)  MISSED
	class UParticleSystem*                             ImpactParticleFX_47_2D1ADA5E4AE492B40F6A018E974AFC88;       // 0x0008   (0x0008)  
	class UParticleSystem*                             RicochetParticleTrailFX_89_A804146D4F1C22B014298B9F801BFD53; // 0x0010   (0x0008)  
	class UParticleSystem*                             DebrisParticleFX_78_0D9CC68F469BBA2E68FE8BAD0FBA4293;       // 0x0018   (0x0008)  
	class USoundCue*                                   ImpactSoundFX_52_26AFC5FF4B225EF2B2C41E94EB0ED683;          // 0x0020   (0x0008)  
	class UMaterial*                                   ImpactDecal_72_AFAE4BE8469F751D5996A58C8AC0177C;            // 0x0028   (0x0008)  
	class UMaterial*                                   RicochetDecal_73_BA1A3A3147C74AFF1BE4C1823C48F711;          // 0x0030   (0x0008)  
	FVector                                            DecalSize_39_3448E2FF4BC678271EB742853872E7C2;              // 0x0038   (0x0018)  
	class UMaterial*                                   ParticleDecal_92_D26A7B3D4F10A3F168E1D0A0B8A04E1A;          // 0x0050   (0x0008)  
	FVector                                            ParticleDecalSize_90_662BB5AF4483ED558A378B991B0319FB;      // 0x0058   (0x0018)  
	class UMaterial*                                   RearSpatterDecal_124_69E3B9034ED961553C1830B154855E80;      // 0x0070   (0x0008)  
	class USoundCue*                                   ParticleCollisionSounds_95_D12C7B394C9112DB7312428752345A16; // 0x0078   (0x0008)  
	bool                                               LiquidSurface_24_C03386A444373E401ED1CE9CBDE432C5;          // 0x0080   (0x0001)  
	bool                                               HotSurface_97_40A8C1CC41B1B65462A21B98D09A678D;             // 0x0081   (0x0001)  
	bool                                               ColdSurface_103_8A3EDA61407CAA9014059DA8707DE7BD;           // 0x0082   (0x0001)  
	bool                                               Absorbant_99_1EA3FC5043D2C407F4FCD49B1484CF9F;              // 0x0083   (0x0001)  
	bool                                               Conductive_101_68E6B3B1478513C4738E5690BE4F6175;            // 0x0084   (0x0001)  
	bool                                               Flammable_110_20E5C07646851E782F138697A7FC19FC;             // 0x0085   (0x0001)  
	bool                                               Caustic_121_992CDE584A6F006FC3F901A49916A947;               // 0x0086   (0x0001)  
	SDK_UNDEFINED(1,1191) /* TEnumAsByte<MaterialState> */ __um(MaterialState_109_530FAB1948850D8B126EC3A58F6426F5); // 0x0087   (0x0001)  
	float                                              Temperature_113_01E4F81C469340C33D67C88676011699;           // 0x0088   (0x0004)  
	float                                              Flammability_115_635CCA024B0C5A5736CA668C10996472;          // 0x008C   (0x0004)  
	float                                              Conductivity_117_BCB9477E4295BFB34F4BC2A04ECDFF8E;          // 0x0090   (0x0004)  
	float                                              Absorbance_119_E906A72E4D061790AAA8D59C0A9C5580;            // 0x0094   (0x0004)  
};

/// Struct /Game/BallisticsVFX/FXSpawnerBlueprints/FXSpawners/BPData/MaterialProperties.MaterialProperties
/// Size: 0x000C (0x000000 - 0x00000C)
struct FMaterialProperties
{ 
	SDK_UNDEFINED(1,1192) /* TEnumAsByte<EPhysicalSurface> */ __um(Surface_17_698FEFE845775A207845AE99FFBAF96B);   // 0x0000   (0x0001)  
	SDK_UNDEFINED(1,1193) /* TEnumAsByte<MaterialState> */ __um(State_14_61E0B712481824F4BA6280AB67960F45);        // 0x0001   (0x0001)  
	bool                                               Hot_1_7675291340422B4D62A20890042B3A8E;                     // 0x0002   (0x0001)  
	bool                                               Cold_3_EAF04D7947F23AEB869676AD44B3E911;                    // 0x0003   (0x0001)  
	bool                                               Absorbant_5_78457C98416340E4819BCBBD380296B7;               // 0x0004   (0x0001)  
	bool                                               Flammable_8_C0F512C9460008173C1A59A4477B1EE0;               // 0x0005   (0x0001)  
	bool                                               Rough_11_8F6CBB0C4510DF49CAE693AB50E894DC;                  // 0x0006   (0x0001)  
	bool                                               Metal_26_2A9345284DD8B91ACCE945A9D8727884;                  // 0x0007   (0x0001)  
	bool                                               Conductive_19_3114916748B571EA1C1BDCB2325A29B4;             // 0x0008   (0x0001)  
	bool                                               Explosive_21_83F672664CE9B5DA467EDDA780CC0D92;              // 0x0009   (0x0001)  
	bool                                               Extinguisher_23_9E8FBD3744EAB0239E2152BEB1654964;           // 0x000A   (0x0001)  
	bool                                               Caustic_28_11BB6B0D4809CFF94C53D18EF603EF0A;                // 0x000B   (0x0001)  
};

/// Class /Game/BallisticsVFX/FXSpawnerBlueprints/FXSpawners/Cubit_ImpactFX_Spawner.Cubit_ImpactFX_Spawner_C
/// Size: 0x0388 (0x000290 - 0x000618)
class ACubit_ImpactFX_Spawner_C : public AActor
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0290   (0x0008)  
	class USceneComponent*                             DefaultSceneRoot;                                           // 0x0298   (0x0008)  
	FHitResult                                         HitResult;                                                  // 0x02A0   (0x00E8)  
	class UMaterialInterface*                          SplasherDecalMat;                                           // 0x0388   (0x0008)  
	FFXMaterialData                                    MaterialValues;                                             // 0x0390   (0x0098)  
	SDK_UNDEFINED(1,1194) /* TEnumAsByte<EPhysicalSurface> */ __um(SurfaceTypeFeed);                               // 0x0428   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0429   (0x0007)  MISSED
	class UMaterialInterface*                          ImpactDecalMat;                                             // 0x0430   (0x0008)  
	FVector                                            RicochetVector;                                             // 0x0438   (0x0018)  
	bool                                               Decals_Attached_;                                           // 0x0450   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0451   (0x0007)  MISSED
	class UParticleSystemComponent*                    Main_FX_Emitter;                                            // 0x0458   (0x0008)  
	FVector                                            Location;                                                   // 0x0460   (0x0018)  
	FVector                                            Impact_Normal;                                              // 0x0478   (0x0018)  
	class UPrimitiveComponent*                         Hit_Component;                                              // 0x0490   (0x0008)  
	SDK_UNDEFINED(1,1195) /* TEnumAsByte<Projectile_Size> */ __um(FXSize);                                         // 0x0498   (0x0001)  
	bool                                               ParticleDecalSpawnerON_;                                    // 0x0499   (0x0001)  
	unsigned char                                      UnknownData02_5[0x6];                                       // 0x049A   (0x0006)  MISSED
	class UAudioComponent*                             RicochetSoundComponent;                                     // 0x04A0   (0x0008)  
	class UParticleSystemComponent*                    RicochetParticleComponent;                                  // 0x04A8   (0x0008)  
	FVector                                            Impact_Point;                                               // 0x04B0   (0x0018)  
	double                                             Impact_Speed;                                               // 0x04C8   (0x0008)  
	double                                             NormalisedRangeMin;                                         // 0x04D0   (0x0008)  
	double                                             NormalisedRangeMax;                                         // 0x04D8   (0x0008)  
	double                                             ImpactForceMultiplier;                                      // 0x04E0   (0x0008)  
	double                                             RicochetExitVelocity;                                       // 0x04E8   (0x0008)  
	FName                                              Hit_Bone;                                                   // 0x04F0   (0x0008)  
	double                                             Decal_Life;                                                 // 0x04F8   (0x0008)  
	SDK_UNDEFINED(1,1196) /* TEnumAsByte<FXTypes> */   __um(FX_Type);                                              // 0x0500   (0x0001)  
	unsigned char                                      UnknownData03_5[0x7];                                       // 0x0501   (0x0007)  MISSED
	FVector                                            ParticleCollisionLocation;                                  // 0x0508   (0x0018)  
	SDK_UNDEFINED(1,1197) /* TEnumAsByte<EPhysicalSurface> */ __um(CollisionSurface);                              // 0x0520   (0x0001)  
	bool                                               ParticleCollisionSoundsON;                                  // 0x0521   (0x0001)  
	unsigned char                                      UnknownData04_5[0x6];                                       // 0x0522   (0x0006)  MISSED
	FVector                                            ParticleCollisionVelocity;                                  // 0x0528   (0x0018)  
	FVector                                            ParticleCollisionNormal;                                    // 0x0540   (0x0018)  
	FMaterialProperties                                MaterialProperties;                                         // 0x0558   (0x000C)  
	FMaterialProperties                                ParticleCollisionMaterialProperties;                        // 0x0564   (0x000C)  
	SDK_UNDEFINED(1,1198) /* TEnumAsByte<ImpactType> */ __um(Impact_Type);                                         // 0x0570   (0x0001)  
	unsigned char                                      UnknownData05_5[0x3];                                       // 0x0571   (0x0003)  MISSED
	FName                                              SurfaceName;                                                // 0x0574   (0x0008)  
	bool                                               FirePropagationON;                                          // 0x057C   (0x0001)  
	unsigned char                                      UnknownData06_5[0x3];                                       // 0x057D   (0x0003)  MISSED
	FName                                              ParticleCollisonHitBone;                                    // 0x0580   (0x0008)  
	bool                                               UseLineTraceParticleCollisions;                             // 0x0588   (0x0001)  
	unsigned char                                      UnknownData07_5[0x7];                                       // 0x0589   (0x0007)  MISSED
	class UPrimitiveComponent*                         ParticleCollisionLineCheckComponent;                        // 0x0590   (0x0008)  
	bool                                               CanvasTargetDecals;                                         // 0x0598   (0x0001)  
	bool                                               BacksplatterDecalsON;                                       // 0x0599   (0x0001)  
	unsigned char                                      UnknownData08_5[0x6];                                       // 0x059A   (0x0006)  MISSED
	FTransform                                         ProjectilesVector;                                          // 0x05A0   (0x0060)  
	class AActor*                                      HitActor;                                                   // 0x0600   (0x0008)  
	double                                             BacksplatterChance;                                         // 0x0608   (0x0008)  
	class UMaterialInstanceDynamic*                    BacksplatterDecalMat;                                       // 0x0610   (0x0008)  


	/// Functions
	// Function /Game/BallisticsVFX/FXSpawnerBlueprints/FXSpawners/Cubit_ImpactFX_Spawner.Cubit_ImpactFX_Spawner_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                              // [0x2119480] Event|Protected|BlueprintEvent 
	// Function /Game/BallisticsVFX/FXSpawnerBlueprints/FXSpawners/Cubit_ImpactFX_Spawner.Cubit_ImpactFX_Spawner_C.Get FX Type
	// void Get FX Type();                                                                                                   // [0x2119480] BlueprintCallable|BlueprintEvent 
	// Function /Game/BallisticsVFX/FXSpawnerBlueprints/FXSpawners/Cubit_ImpactFX_Spawner.Cubit_ImpactFX_Spawner_C.ParticleCollisionSounds
	// void ParticleCollisionSounds();                                                                                       // [0x2119480] BlueprintCallable|BlueprintEvent 
	// Function /Game/BallisticsVFX/FXSpawnerBlueprints/FXSpawners/Cubit_ImpactFX_Spawner.Cubit_ImpactFX_Spawner_C.WetSplash
	// void WetSplash();                                                                                                     // [0x2119480] BlueprintCallable|BlueprintEvent 
	// Function /Game/BallisticsVFX/FXSpawnerBlueprints/FXSpawners/Cubit_ImpactFX_Spawner.Cubit_ImpactFX_Spawner_C.DrySplash
	// void DrySplash();                                                                                                     // [0x2119480] BlueprintCallable|BlueprintEvent 
	// Function /Game/BallisticsVFX/FXSpawnerBlueprints/FXSpawners/Cubit_ImpactFX_Spawner.Cubit_ImpactFX_Spawner_C.SizzleDry
	// void SizzleDry();                                                                                                     // [0x2119480] BlueprintCallable|BlueprintEvent 
	// Function /Game/BallisticsVFX/FXSpawnerBlueprints/FXSpawners/Cubit_ImpactFX_Spawner.Cubit_ImpactFX_Spawner_C.SizzleWet
	// void SizzleWet();                                                                                                     // [0x2119480] BlueprintCallable|BlueprintEvent 
	// Function /Game/BallisticsVFX/FXSpawnerBlueprints/FXSpawners/Cubit_ImpactFX_Spawner.Cubit_ImpactFX_Spawner_C.SpawnParticleDecals
	// void SpawnParticleDecals();                                                                                           // [0x2119480] BlueprintCallable|BlueprintEvent 
	// Function /Game/BallisticsVFX/FXSpawnerBlueprints/FXSpawners/Cubit_ImpactFX_Spawner.Cubit_ImpactFX_Spawner_C.Sizzle Liquid FX
	// void Sizzle Liquid FX();                                                                                              // [0x2119480] BlueprintCallable|BlueprintEvent 
	// Function /Game/BallisticsVFX/FXSpawnerBlueprints/FXSpawners/Cubit_ImpactFX_Spawner.Cubit_ImpactFX_Spawner_C.SpawnParticleCollisionFX
	// void SpawnParticleCollisionFX();                                                                                      // [0x2119480] BlueprintCallable|BlueprintEvent 
	// Function /Game/BallisticsVFX/FXSpawnerBlueprints/FXSpawners/Cubit_ImpactFX_Spawner.Cubit_ImpactFX_Spawner_C.Debris FX Spawn
	// void Debris FX Spawn();                                                                                               // [0x2119480] BlueprintCallable|BlueprintEvent 
	// Function /Game/BallisticsVFX/FXSpawnerBlueprints/FXSpawners/Cubit_ImpactFX_Spawner.Cubit_ImpactFX_Spawner_C.Sizzle Dry FX
	// void Sizzle Dry FX();                                                                                                 // [0x2119480] BlueprintCallable|BlueprintEvent 
	// Function /Game/BallisticsVFX/FXSpawnerBlueprints/FXSpawners/Cubit_ImpactFX_Spawner.Cubit_ImpactFX_Spawner_C.FX Type Chosen
	// void FX Type Chosen();                                                                                                // [0x2119480] BlueprintCallable|BlueprintEvent 
	// Function /Game/BallisticsVFX/FXSpawnerBlueprints/FXSpawners/Cubit_ImpactFX_Spawner.Cubit_ImpactFX_Spawner_C.DebrisFXInitialise
	// void DebrisFXInitialise();                                                                                            // [0x2119480] BlueprintCallable|BlueprintEvent 
	// Function /Game/BallisticsVFX/FXSpawnerBlueprints/FXSpawners/Cubit_ImpactFX_Spawner.Cubit_ImpactFX_Spawner_C.Penetration Event
	// void Penetration Event();                                                                                             // [0x2119480] BlueprintCallable|BlueprintEvent 
	// Function /Game/BallisticsVFX/FXSpawnerBlueprints/FXSpawners/Cubit_ImpactFX_Spawner.Cubit_ImpactFX_Spawner_C.InitiateFXTasks
	// void InitiateFXTasks();                                                                                               // [0x2119480] BlueprintCallable|BlueprintEvent 
	// Function /Game/BallisticsVFX/FXSpawnerBlueprints/FXSpawners/Cubit_ImpactFX_Spawner.Cubit_ImpactFX_Spawner_C.FirePropagation
	// void FirePropagation();                                                                                               // [0x2119480] BlueprintCallable|BlueprintEvent 
	// Function /Game/BallisticsVFX/FXSpawnerBlueprints/FXSpawners/Cubit_ImpactFX_Spawner.Cubit_ImpactFX_Spawner_C.BACKSPLATTER
	// void BACKSPLATTER();                                                                                                  // [0x2119480] BlueprintCallable|BlueprintEvent 
	// Function /Game/BallisticsVFX/FXSpawnerBlueprints/FXSpawners/Cubit_ImpactFX_Spawner.Cubit_ImpactFX_Spawner_C.OnParticleCollide_Event
	// void OnParticleCollide_Event(FName EventName, float EmitterTime, int32_t ParticleTime, FVector Location, FVector Velocity, FVector Direction, FVector Normal, FName BoneName, class UPhysicalMaterial* PhysMat); // [0x2119480] BlueprintCallable|BlueprintEvent 
	// Function /Game/BallisticsVFX/FXSpawnerBlueprints/FXSpawners/Cubit_ImpactFX_Spawner.Cubit_ImpactFX_Spawner_C.DestroyFXSpawner
	// void DestroyFXSpawner();                                                                                              // [0x2119480] BlueprintCallable|BlueprintEvent 
	// Function /Game/BallisticsVFX/FXSpawnerBlueprints/FXSpawners/Cubit_ImpactFX_Spawner.Cubit_ImpactFX_Spawner_C.SpawnDecals
	// void SpawnDecals();                                                                                                   // [0x2119480] BlueprintCallable|BlueprintEvent 
	// Function /Game/BallisticsVFX/FXSpawnerBlueprints/FXSpawners/Cubit_ImpactFX_Spawner.Cubit_ImpactFX_Spawner_C.SpawnSounds
	// void SpawnSounds();                                                                                                   // [0x2119480] BlueprintCallable|BlueprintEvent 
	// Function /Game/BallisticsVFX/FXSpawnerBlueprints/FXSpawners/Cubit_ImpactFX_Spawner.Cubit_ImpactFX_Spawner_C.Ricochet_Event
	// void Ricochet_Event();                                                                                                // [0x2119480] BlueprintCallable|BlueprintEvent 
	// Function /Game/BallisticsVFX/FXSpawnerBlueprints/FXSpawners/Cubit_ImpactFX_Spawner.Cubit_ImpactFX_Spawner_C.Impact_Event
	// void Impact_Event();                                                                                                  // [0x2119480] BlueprintCallable|BlueprintEvent 
	// Function /Game/BallisticsVFX/FXSpawnerBlueprints/FXSpawners/Cubit_ImpactFX_Spawner.Cubit_ImpactFX_Spawner_C.ExecuteUbergraph_Cubit_ImpactFX_Spawner
	// void ExecuteUbergraph_Cubit_ImpactFX_Spawner(int32_t EntryPoint);                                                     // [0x2119480] Final|HasDefaults    
};

/// Struct /Game/BallisticsVFX/FXSpawnerBlueprints/Projectiles/Data/ProjectileMaterialData.ProjectileMaterialData
/// Size: 0x002C (0x000000 - 0x00002C)
struct FProjectileMaterialData
{ 
	SDK_UNDEFINED(1,1199) /* TEnumAsByte<EPhysicalSurface> */ __um(Surface_5_A13BA84C444F7DFF70888788C6FCCCC2);    // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              RicochetConeAngleMulti_17_32A0AE944DE3022C18C793B5CA5018A6; // 0x0004   (0x0004)  
	float                                              RicochetDecideAngleMulti_18_8EE57C55424CA7D67636B5964626EDB6; // 0x0008   (0x0004)  
	float                                              RicochetVelocityMultiply_21_9A5B02584E10D7CC4C3F4686274BCC61; // 0x000C   (0x0004)  
	bool                                               LiquidSurface_24_C03386A444373E401ED1CE9CBDE432C5;          // 0x0010   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0011   (0x0003)  MISSED
	float                                              BaseArmour_28_373117FC4706CE9BA693BB8D49C42E78;             // 0x0014   (0x0004)  
	float                                              Resistance_30_2DC2D4E1415EF3C1AFB5C0BED0C65727;             // 0x0018   (0x0004)  
	float                                              TrajectoryModifier_32_BB5E20884B7958AD5DC4ABAF2EE5135C;     // 0x001C   (0x0004)  
	float                                              FragmentationModifier_35_D7D2831849763BD514ACC4A86D5A8008;  // 0x0020   (0x0004)  
	bool                                               WildRicochets_85_3A62A0124D4BC86DA3DE6B85035C13D3;          // 0x0024   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x0025   (0x0003)  MISSED
	float                                              WildRicochetChance_88_744E437446EE5CE88A5A2C99213530C6;     // 0x0028   (0x0004)  
};

/// Class /Game/BallisticsVFX/FXSpawnerBlueprints/Projectiles/CubitUniProjectile.CubitUniProjectile_C
/// Size: 0x04A0 (0x000290 - 0x000730)
class ACubitUniProjectile_C : public AActor
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0290   (0x0008)  
	class USphereComponent*                            Penetrator;                                                 // 0x0298   (0x0008)  
	class USphereComponent*                            CollisionComponent;                                         // 0x02A0   (0x0008)  
	class UParticleSystemComponent*                    ShrapnelFlame;                                              // 0x02A8   (0x0008)  
	class UParticleSystemComponent*                    DeadTracer;                                                 // 0x02B0   (0x0008)  
	class UParticleSystemComponent*                    RicochetParticle;                                           // 0x02B8   (0x0008)  
	class UParticleSystemComponent*                    TracerFlare;                                                // 0x02C0   (0x0008)  
	class UStaticMeshComponent*                        TracerMesh;                                                 // 0x02C8   (0x0008)  
	class UProjectileMovementComponent*                Projectile;                                                 // 0x02D0   (0x0008)  
	class UAudioComponent*                             RichochetSound;                                             // 0x02D8   (0x0008)  
	class UPointLightComponent*                        PointLight;                                                 // 0x02E0   (0x0008)  
	double                                             Cone_Angle_VFX;                                             // 0x02E8   (0x0008)  
	int32_t                                            RicochetCounter;                                            // 0x02F0   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x02F4   (0x0004)  MISSED
	double                                             Ricochet_VFX_Cone;                                          // 0x02F8   (0x0008)  
	bool                                               Deactivated_;                                               // 0x0300   (0x0001)  
	SDK_UNDEFINED(1,1200) /* TEnumAsByte<EPhysicalSurface> */ __um(PhysicalSurfaces);                              // 0x0301   (0x0001)  
	unsigned char                                      UnknownData01_5[0x6];                                       // 0x0302   (0x0006)  MISSED
	FFXMaterialData                                    MaterialValueStruct;                                        // 0x0308   (0x0098)  
	double                                             MinX;                                                       // 0x03A0   (0x0008)  
	double                                             MinY;                                                       // 0x03A8   (0x0008)  
	double                                             MinZ;                                                       // 0x03B0   (0x0008)  
	double                                             MaxX;                                                       // 0x03B8   (0x0008)  
	double                                             MaxY;                                                       // 0x03C0   (0x0008)  
	double                                             MaxZ;                                                       // 0x03C8   (0x0008)  
	double                                             RicochetOccursConeAngleBase;                                // 0x03D0   (0x0008)  
	double                                             Ricochet_speed_reducer;                                     // 0x03D8   (0x0008)  
	FVector                                            Decal_Size;                                                 // 0x03E0   (0x0018)  
	class UMaterialInterface*                          DecalMat;                                                   // 0x03F8   (0x0008)  
	FProjectileMaterialData                            MaterialValues;                                             // 0x0400   (0x002C)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x042C   (0x0004)  MISSED
	FVector                                            Impact_Velocity;                                            // 0x0430   (0x0018)  
	FHitResult                                         ImpactResult;                                               // 0x0448   (0x00E8)  
	FVector                                            LastPosition;                                               // 0x0530   (0x0018)  
	class UCurveFloat*                                 Drag;                                                       // 0x0548   (0x0008)  
	double                                             DragPerCM;                                                  // 0x0550   (0x0008)  
	bool                                               InLiquid;                                                   // 0x0558   (0x0001)  
	unsigned char                                      UnknownData03_5[0x7];                                       // 0x0559   (0x0007)  MISSED
	double                                             Bullet_Roll;                                                // 0x0560   (0x0008)  
	double                                             BulletPitch;                                                // 0x0568   (0x0008)  
	double                                             BulletYaw;                                                  // 0x0570   (0x0008)  
	class UStaticMeshComponent*                        Bullet_test1;                                               // 0x0578   (0x0008)  
	double                                             TraceDuration;                                              // 0x0580   (0x0008)  
	SDK_UNDEFINED(1,1201) /* TEnumAsByte<EPhysicalSurface> */ __um(SurfaceType);                                   // 0x0588   (0x0001)  
	unsigned char                                      UnknownData04_5[0x7];                                       // 0x0589   (0x0007)  MISSED
	FVector                                            RicochetVector;                                             // 0x0590   (0x0018)  
	double                                             RicochetExitVelocity;                                       // 0x05A8   (0x0008)  
	double                                             MuzzleVelocity;                                             // 0x05B0   (0x0008)  
	bool                                               RicochetEnabled;                                            // 0x05B8   (0x0001)  
	bool                                               WildRicochetEnabled;                                        // 0x05B9   (0x0001)  
	unsigned char                                      UnknownData05_5[0x6];                                       // 0x05BA   (0x0006)  MISSED
	double                                             WildRicochetAngleMultiplier;                                // 0x05C0   (0x0008)  
	double                                             WildRicochetSpeedMultiplier;                                // 0x05C8   (0x0008)  
	bool                                               WildRicochetOccured;                                        // 0x05D0   (0x0001)  
	bool                                               Is_Shrapnel_;                                               // 0x05D1   (0x0001)  
	SDK_UNDEFINED(1,1202) /* TEnumAsByte<Projectile_Size> */ __um(ProjectileSize);                                 // 0x05D2   (0x0001)  
	unsigned char                                      UnknownData06_5[0x5];                                       // 0x05D3   (0x0005)  MISSED
	FFXMaterialData                                    DataTable;                                                  // 0x05D8   (0x0098)  
	SDK_UNDEFINED(1,1203) /* TEnumAsByte<ImpactType> */ __um(Impact_Type);                                         // 0x0670   (0x0001)  
	bool                                               RicochetOccured;                                            // 0x0671   (0x0001)  
	unsigned char                                      UnknownData07_5[0x2];                                       // 0x0672   (0x0002)  MISSED
	int32_t                                            PenetrationCount;                                           // 0x0674   (0x0004)  
	bool                                               PenetrationOccured;                                         // 0x0678   (0x0001)  
	SDK_UNDEFINED(1,1204) /* TEnumAsByte<ProjectileState> */ __um(ProjectileState);                                // 0x0679   (0x0001)  
	unsigned char                                      UnknownData08_5[0x6];                                       // 0x067A   (0x0006)  MISSED
	FVector                                            ImpactNormal;                                               // 0x0680   (0x0018)  
	FVector                                            ImpactLocation;                                             // 0x0698   (0x0018)  
	FName                                              SurfaceName;                                                // 0x06B0   (0x0008)  
	FVector                                            ProjectilesVector;                                          // 0x06B8   (0x0018)  
	FTransform                                         ProjectileTransform;                                        // 0x06D0   (0x0060)  


	/// Functions
	// Function /Game/BallisticsVFX/FXSpawnerBlueprints/Projectiles/CubitUniProjectile.CubitUniProjectile_C.UserConstructionScript
	// void UserConstructionScript();                                                                                        // [0x2119480] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BallisticsVFX/FXSpawnerBlueprints/Projectiles/CubitUniProjectile.CubitUniProjectile_C.RicochetON
	// void RicochetON();                                                                                                    // [0x2119480] BlueprintCallable|BlueprintEvent 
	// Function /Game/BallisticsVFX/FXSpawnerBlueprints/Projectiles/CubitUniProjectile.CubitUniProjectile_C.ReceiveTick
	// void ReceiveTick(float DeltaSeconds);                                                                                 // [0x2119480] Event|Public|BlueprintEvent 
	// Function /Game/BallisticsVFX/FXSpawnerBlueprints/Projectiles/CubitUniProjectile.CubitUniProjectile_C.SpawnFX
	// void SpawnFX();                                                                                                       // [0x2119480] BlueprintCallable|BlueprintEvent 
	// Function /Game/BallisticsVFX/FXSpawnerBlueprints/Projectiles/CubitUniProjectile.CubitUniProjectile_C.BndEvt__Projectile_K2Node_ComponentBoundEvent_9_OnProjectileStopDelegate__DelegateSignature
	// void BndEvt__Projectile_K2Node_ComponentBoundEvent_9_OnProjectileStopDelegate__DelegateSignature(FHitResult& ImpactResult); // [0x2119480] HasOutParms|BlueprintEvent 
	// Function /Game/BallisticsVFX/FXSpawnerBlueprints/Projectiles/CubitUniProjectile.CubitUniProjectile_C.Kill Projectile NO FX
	// void Kill Projectile NO FX();                                                                                         // [0x2119480] BlueprintCallable|BlueprintEvent 
	// Function /Game/BallisticsVFX/FXSpawnerBlueprints/Projectiles/CubitUniProjectile.CubitUniProjectile_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                              // [0x2119480] Event|Protected|BlueprintEvent 
	// Function /Game/BallisticsVFX/FXSpawnerBlueprints/Projectiles/CubitUniProjectile.CubitUniProjectile_C.BndEvt__Projectile_K2Node_ComponentBoundEvent_132_OnProjectileBounceDelegate__DelegateSignature
	// void BndEvt__Projectile_K2Node_ComponentBoundEvent_132_OnProjectileBounceDelegate__DelegateSignature(FHitResult& ImpactResult, FVector& ImpactVelocity); // [0x2119480] HasOutParms|BlueprintEvent 
	// Function /Game/BallisticsVFX/FXSpawnerBlueprints/Projectiles/CubitUniProjectile.CubitUniProjectile_C.BndEvt__CubitUniProjectile_CollisionComponent_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature
	// void BndEvt__CubitUniProjectile_CollisionComponent_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, FHitResult& Hit); // [0x2119480] HasOutParms|BlueprintEvent 
	// Function /Game/BallisticsVFX/FXSpawnerBlueprints/Projectiles/CubitUniProjectile.CubitUniProjectile_C.ExecuteUbergraph_CubitUniProjectile
	// void ExecuteUbergraph_CubitUniProjectile(int32_t EntryPoint);                                                         // [0x2119480] Final|HasDefaults    
};

