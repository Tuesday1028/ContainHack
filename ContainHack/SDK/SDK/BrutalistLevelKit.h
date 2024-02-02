
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

/// Enum /Game/BrutalistLevelKit/Blueprints/Environment/Pipes/Parent/E_Pipe_Directions.E_Pipe_Directions
/// Size: 0x06
enum class E_Pipe_Directions : uint8_t
{
	E_Pipe_Directions__NewEnumerator0                                                = 0,
	E_Pipe_Directions__NewEnumerator1                                                = 1,
	E_Pipe_Directions__NewEnumerator2                                                = 2,
	E_Pipe_Directions__NewEnumerator3                                                = 3,
	E_Pipe_Directions__NewEnumerator6                                                = 4,
	E_Pipe_Directions__E_Pipe_MAX                                                    = 5
};

/// Enum /Game/BrutalistLevelKit/Blueprints/Environment/Pipes/Parent/E_Pipe_Aligment.E_Pipe_Aligment
/// Size: 0x04
enum class E_Pipe_Aligment : uint8_t
{
	E_Pipe_Aligment__NewEnumerator0                                                  = 0,
	E_Pipe_Aligment__NewEnumerator1                                                  = 1,
	E_Pipe_Aligment__NewEnumerator2                                                  = 2,
	E_Pipe_Aligment__E_Pipe_MAX                                                      = 3
};

/// Class /Game/BrutalistLevelKit/Blueprints/Environment/Pipes/Parent/BP_P_PipeMaker.BP_P_PipeMaker_C
/// Size: 0x0278 (0x000290 - 0x000508)
class ABP_P_PipeMaker_C : public AActor
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0290   (0x0008)  
	class UHierarchicalInstancedStaticMeshComponent*   PillarStartMeshes;                                          // 0x0298   (0x0008)  
	class UHierarchicalInstancedStaticMeshComponent*   PillarEndMeshes;                                            // 0x02A0   (0x0008)  
	class UHierarchicalInstancedStaticMeshComponent*   PillarMiddleMeshes;                                         // 0x02A8   (0x0008)  
	class USceneComponent*                             DefaultSceneRoot;                                           // 0x02B0   (0x0008)  
	double                                             SocketMeshScaleMin;                                         // 0x02B8   (0x0008)  
	double                                             SocketMeshScaleMax;                                         // 0x02C0   (0x0008)  
	FRotator                                           SocketMeshRotationOffset;                                   // 0x02C8   (0x0018)  
	TArray<class UStaticMesh*>                         StraightMeshes;                                             // 0x02E0   (0x0010)  
	TArray<class UHierarchicalInstancedStaticMeshComponent*> StraightHISMs;                                        // 0x02F0   (0x0010)  
	TArray<class UHierarchicalInstancedStaticMeshComponent*> LeftHISMs;                                            // 0x0300   (0x0010)  
	TArray<class UStaticMesh*>                         LeftMeshes;                                                 // 0x0310   (0x0010)  
	TArray<class UHierarchicalInstancedStaticMeshComponent*> RightHISMs;                                           // 0x0320   (0x0010)  
	TArray<class UStaticMesh*>                         RightMeshes;                                                // 0x0330   (0x0010)  
	TArray<class UHierarchicalInstancedStaticMeshComponent*> UpHISMs;                                              // 0x0340   (0x0010)  
	TArray<class UStaticMesh*>                         DownMeshes;                                                 // 0x0350   (0x0010)  
	TArray<class UHierarchicalInstancedStaticMeshComponent*> DownHISMs;                                            // 0x0360   (0x0010)  
	TArray<class UStaticMesh*>                         UpMeshes;                                                   // 0x0370   (0x0010)  
	double                                             MiddleSpacing;                                              // 0x0380   (0x0008)  
	bool                                               Locked;                                                     // 0x0388   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0389   (0x0007)  MISSED
	double                                             TraceDistance;                                              // 0x0390   (0x0008)  
	int32_t                                            Iterations__Lenght_;                                        // 0x0398   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x039C   (0x0004)  MISSED
	double                                             FillStartOffset;                                            // 0x03A0   (0x0008)  
	double                                             FillEndOffset;                                              // 0x03A8   (0x0008)  
	int32_t                                            RandomSeed;                                                 // 0x03B0   (0x0004)  
	bool                                               TracingMode;                                                // 0x03B4   (0x0001)  
	bool                                               AutomaticMode;                                              // 0x03B5   (0x0001)  
	SDK_UNDEFINED(1,2012) /* TEnumAsByte<E_Pipe_Aligment> */ __um(AligmentMode);                                   // 0x03B6   (0x0001)  
	bool                                               StaticMeshVersion;                                          // 0x03B7   (0x0001)  
	FRotator                                           StartRotation;                                              // 0x03B8   (0x0018)  
	FRandomStream                                      RandomStream;                                               // 0x03D0   (0x0008)  
	double                                             StraightStartOffset;                                        // 0x03D8   (0x0008)  
	TArray<double>                                     TraceDistances;                                             // 0x03E0   (0x0010)  
	TArray<class UHierarchicalInstancedStaticMeshComponent*> ScatterHISMs;                                         // 0x03F0   (0x0010)  
	TArray<class UStaticMesh*>                         ScatterMeshes;                                              // 0x0400   (0x0010)  
	SDK_UNDEFINED(16,2013) /* TArray<TEnumAsByte<E_Pipe_Directions>> */ __um(GivenDirections);                     // 0x0410   (0x0010)  
	bool                                               UseSocketScattering;                                        // 0x0420   (0x0001)  
	unsigned char                                      UnknownData02_5[0x7];                                       // 0x0421   (0x0007)  MISSED
	TArray<double>                                     GivenDistances;                                             // 0x0428   (0x0010)  
	double                                             WallThreshold;                                              // 0x0438   (0x0008)  
	TArray<class UArrowComponent*>                     GivenGuides;                                                // 0x0440   (0x0010)  
	double                                             MinAllowedDistance;                                         // 0x0450   (0x0008)  
	bool                                               UseStartPillar;                                             // 0x0458   (0x0001)  
	unsigned char                                      UnknownData03_5[0x7];                                       // 0x0459   (0x0007)  MISSED
	class UStaticMesh*                                 PillarStartMesh;                                            // 0x0460   (0x0008)  
	class UStaticMesh*                                 PillarMiddleMesh;                                           // 0x0468   (0x0008)  
	class UStaticMesh*                                 PillarEndMesh;                                              // 0x0470   (0x0008)  
	double                                             PillarMeshFillOffset;                                       // 0x0478   (0x0008)  
	double                                             PillarMeshStartOffset;                                      // 0x0480   (0x0008)  
	double                                             PillarTraceStartOffset;                                     // 0x0488   (0x0008)  
	double                                             PillarDensity;                                              // 0x0490   (0x0008)  
	bool                                               UseEndPillar;                                               // 0x0498   (0x0001)  
	bool                                               ConstructPillars;                                           // 0x0499   (0x0001)  
	bool                                               RandomPillars;                                              // 0x049A   (0x0001)  
	unsigned char                                      UnknownData04_5[0x5];                                       // 0x049B   (0x0005)  MISSED
	FVector                                            ActorOffset;                                                // 0x04A0   (0x0018)  
	FRotator                                           ActorRotationOffset;                                        // 0x04B8   (0x0018)  
	TArray<class UClass*>                              Actors;                                                     // 0x04D0   (0x0010)  
	bool                                               ScatterActors;                                              // 0x04E0   (0x0001)  
	bool                                               RandomActors;                                               // 0x04E1   (0x0001)  
	unsigned char                                      UnknownData05_5[0x6];                                       // 0x04E2   (0x0006)  MISSED
	double                                             ActorDensity;                                               // 0x04E8   (0x0008)  
	class UMaterialInstanceDynamic*                    PipeMatInst;                                                // 0x04F0   (0x0008)  
	FLinearColor                                       PipeColor;                                                  // 0x04F8   (0x0010)  


	/// Functions
	// Function /Game/BrutalistLevelKit/Blueprints/Environment/Pipes/Parent/BP_P_PipeMaker.BP_P_PipeMaker_C.PipeMeshGeneration
	// void PipeMeshGeneration(int32_t Index, FVector CurrentLocation);                                                      // [0x2119480] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/BrutalistLevelKit/Blueprints/Environment/Pipes/Parent/BP_P_PipeMaker.BP_P_PipeMaker_C.ActorScattering
	// void ActorScattering(FVector ActorLocation, FRotator ActorRotation, TEnumAsByte<E_Pipe_Directions> Directions);       // [0x2119480] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/BrutalistLevelKit/Blueprints/Environment/Pipes/Parent/BP_P_PipeMaker.BP_P_PipeMaker_C.PillarGeneration
	// void PillarGeneration(FVector TracingPoint, double TracingDistance, FRotator PillarRotation, FVector StartPoint);     // [0x2119480] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/BrutalistLevelKit/Blueprints/Environment/Pipes/Parent/BP_P_PipeMaker.BP_P_PipeMaker_C.ClearInstances
	// void ClearInstances();                                                                                                // [0x2119480] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BrutalistLevelKit/Blueprints/Environment/Pipes/Parent/BP_P_PipeMaker.BP_P_PipeMaker_C.PipeGeneration
	// void PipeGeneration();                                                                                                // [0x2119480] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/BrutalistLevelKit/Blueprints/Environment/Pipes/Parent/BP_P_PipeMaker.BP_P_PipeMaker_C.SpawnFromSockets
	// void SpawnFromSockets(int32_t InstanceIndex, class UHierarchicalInstancedStaticMeshComponent* HISMComponent, TArray<UHierarchicalInstancedStaticMeshComponent*>& SocketScatterHISMs, TArray<UStaticMesh*>& SocketScatterMeshes, bool InstanceIsWorldSpace); // [0x2119480] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/BrutalistLevelKit/Blueprints/Environment/Pipes/Parent/BP_P_PipeMaker.BP_P_PipeMaker_C.CreateMesh
	// void CreateMesh(FTransform InstanceTransform, class UStaticMesh* InstanceMesh, class UMaterialInstance* MaterialInstance, class UHierarchicalInstancedStaticMeshComponent* HISMComponent, bool InstanceWorldSpace, bool SocketScatter, TArray<UHierarchicalInstancedStaticMeshComponent*>& SocketScatterHISMs, TArray<UStaticMesh*>& SocketScatterMeshes); // [0x2119480] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/BrutalistLevelKit/Blueprints/Environment/Pipes/Parent/BP_P_PipeMaker.BP_P_PipeMaker_C.CreateHISMs
	// void CreateHISMs(FTransform Transform, TArray<UStaticMesh*>& StaticMeshes, TArray<UHierarchicalInstancedStaticMeshComponent*>& HISMComponents, int32_t CullingDistance, TEnumAsByte<ECollisionEnabled> CollisionType, TArray<UHierarchicalInstancedStaticMeshComponent*>& SocketScatterHISMs, TArray<UStaticMesh*>& SocketScatterMeshes, bool SocketScatter, bool InstanceWorldSpace, class UMaterialInstance* MaterialInstance, class UStaticMesh*& StaticMesh); // [0x2119480] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/BrutalistLevelKit/Blueprints/Environment/Pipes/Parent/BP_P_PipeMaker.BP_P_PipeMaker_C.UserConstructionScript
	// void UserConstructionScript();                                                                                        // [0x2119480] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BrutalistLevelKit/Blueprints/Environment/Pipes/Parent/BP_P_PipeMaker.BP_P_PipeMaker_C.1 LEFT
	// void 1 LEFT();                                                                                                        // [0x2119480] BlueprintCallable|BlueprintEvent 
	// Function /Game/BrutalistLevelKit/Blueprints/Environment/Pipes/Parent/BP_P_PipeMaker.BP_P_PipeMaker_C.2 RIGHT
	// void 2 RIGHT();                                                                                                       // [0x2119480] BlueprintCallable|BlueprintEvent 
	// Function /Game/BrutalistLevelKit/Blueprints/Environment/Pipes/Parent/BP_P_PipeMaker.BP_P_PipeMaker_C.3 UP
	// void 3 UP();                                                                                                          // [0x2119480] BlueprintCallable|BlueprintEvent 
	// Function /Game/BrutalistLevelKit/Blueprints/Environment/Pipes/Parent/BP_P_PipeMaker.BP_P_PipeMaker_C.4 DOWN
	// void 4 DOWN();                                                                                                        // [0x2119480] BlueprintCallable|BlueprintEvent 
	// Function /Game/BrutalistLevelKit/Blueprints/Environment/Pipes/Parent/BP_P_PipeMaker.BP_P_PipeMaker_C.6 CLEAR
	// void 6 CLEAR();                                                                                                       // [0x2119480] BlueprintCallable|BlueprintEvent 
	// Function /Game/BrutalistLevelKit/Blueprints/Environment/Pipes/Parent/BP_P_PipeMaker.BP_P_PipeMaker_C.5 UNDO
	// void 5 UNDO();                                                                                                        // [0x2119480] BlueprintCallable|BlueprintEvent 
	// Function /Game/BrutalistLevelKit/Blueprints/Environment/Pipes/Parent/BP_P_PipeMaker.BP_P_PipeMaker_C.5 STRAIGHT
	// void 5 STRAIGHT();                                                                                                    // [0x2119480] BlueprintCallable|BlueprintEvent 
	// Function /Game/BrutalistLevelKit/Blueprints/Environment/Pipes/Parent/BP_P_PipeMaker.BP_P_PipeMaker_C.ExecuteUbergraph_BP_P_PipeMaker
	// void ExecuteUbergraph_BP_P_PipeMaker(int32_t EntryPoint);                                                             // [0x2119480] Final                
};

/// Class /Game/BrutalistLevelKit/Blueprints/Environment/Pipes/BP_Ventilation_Shaft.BP_Ventilation_Shaft_C
/// Size: 0x0000 (0x000508 - 0x000508)
class ABP_Ventilation_Shaft_C : public ABP_P_PipeMaker_C
{ 
public:
};

/// Struct /Game/BrutalistLevelKit/Blueprints/Environment/Splines/Parent/F_Generated_Instance_Data.F_Generated_Instance_Data
/// Size: 0x0078 (0x000000 - 0x000078)
struct FF_Generated_Instance_Data
{ 
	FTransform                                         InstanceTransform_2_337566744D6B2B3E61C7C3A104B8294E;       // 0x0000   (0x0060)  
	class UStaticMesh*                                 StaticMesh_11_B3E6FEBA4D2F212830724B91425B877A;             // 0x0060   (0x0008)  
	bool                                               InstanceToWorldSpace_15_975301DC4F65643B2035B8A44A535AF7;   // 0x0068   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0069   (0x0003)  MISSED
	int32_t                                            ActorIndex_18_B1DB3E794414874620E8759F8480DD7D;             // 0x006C   (0x0004)  
	bool                                               IsHISM_21_7D0F5CA34CEAA1087587C4B2EFFB4263;                 // 0x0070   (0x0001)  
	bool                                               CastShadows_23_75BC744144B58FC82C961296CEA17C29;            // 0x0071   (0x0001)  
	SDK_UNDEFINED(1,2014) /* TEnumAsByte<ECollisionEnabled> */ __um(Collision_28_63AE670A42335F85D7314382AB59F492); // 0x0072   (0x0001)  
	unsigned char                                      UnknownData01_5[0x1];                                       // 0x0073   (0x0001)  MISSED
	int32_t                                            CullingDistance_31_DB599EFD4BA4E1F8E2FF42B07D052743;        // 0x0074   (0x0004)  
};

/// Class /Game/BrutalistLevelKit/Blueprints/Furniture/Parent/BP_P_Furniture.BP_P_Furniture_C
/// Size: 0x00B5 (0x000290 - 0x000345)
class ABP_P_Furniture_C : public AActor
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0290   (0x0008)  
	class UStaticMeshComponent*                        FurnitureMesh;                                              // 0x0298   (0x0008)  
	class USceneComponent*                             Meshes;                                                     // 0x02A0   (0x0008)  
	class USceneComponent*                             Lights;                                                     // 0x02A8   (0x0008)  
	class USceneComponent*                             DefaultSceneRoot;                                           // 0x02B0   (0x0008)  
	FRandomStream                                      RandomSeedStruct;                                           // 0x02B8   (0x0008)  
	TArray<double>                                     RandomRotations;                                            // 0x02C0   (0x0010)  
	bool                                               RandomRotation;                                             // 0x02D0   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x02D1   (0x0007)  MISSED
	TArray<FF_Generated_Instance_Data>                 SpawnedHISMData;                                            // 0x02D8   (0x0010)  
	SDK_UNDEFINED(1,2015) /* TEnumAsByte<ECollisionEnabled> */ __um(DecorationCollision);                          // 0x02E8   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x02E9   (0x0007)  MISSED
	FRotator                                           SocketMeshRotationOffset;                                   // 0x02F0   (0x0018)  
	double                                             SocketMeshScaleMin;                                         // 0x0308   (0x0008)  
	double                                             SocketMeshScaleMax;                                         // 0x0310   (0x0008)  
	int32_t                                            SeedNumber;                                                 // 0x0318   (0x0004)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x031C   (0x0004)  MISSED
	double                                             SocketMeshRndMinRotation;                                   // 0x0320   (0x0008)  
	double                                             SocketMeshRndMaxRotation;                                   // 0x0328   (0x0008)  
	bool                                               SocketRandomAppearing;                                      // 0x0330   (0x0001)  
	bool                                               Active;                                                     // 0x0331   (0x0001)  
	unsigned char                                      UnknownData03_5[0x2];                                       // 0x0332   (0x0002)  MISSED
	FLinearColor                                       Color;                                                      // 0x0334   (0x0010)  
	bool                                               IsInteractable;                                             // 0x0344   (0x0001)  


	/// Functions
	// Function /Game/BrutalistLevelKit/Blueprints/Furniture/Parent/BP_P_Furniture.BP_P_Furniture_C.SpawnMeshesFromSockets
	// void SpawnMeshesFromSockets(TArray<UHierarchicalInstancedStaticMeshComponent*>& SocketScatterHISMs, TArray<UStaticMesh*>& SocketScatterMeshes, class UStaticMeshComponent* BaseMesh, FString SocketNamePrefix); // [0x2119480] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/BrutalistLevelKit/Blueprints/Furniture/Parent/BP_P_Furniture.BP_P_Furniture_C.CreateMesh
	// void CreateMesh(FTransform& InstanceTransform, class UStaticMesh* StaticMesh, class UMaterialInstanceDynamic* Material, class UHierarchicalInstancedStaticMeshComponent* HISM, bool InstanceToWorldSpace, int32_t& InstanceId); // [0x2119480] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/BrutalistLevelKit/Blueprints/Furniture/Parent/BP_P_Furniture.BP_P_Furniture_C.CreateHISMs
	// void CreateHISMs(TArray<UHierarchicalInstancedStaticMeshComponent*>& HISMComponents, FTransform Transform, TArray<UStaticMesh*>& StaticMeshes, bool InstanceToWorldSpace, int32_t CullngDistance); // [0x2119480] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/BrutalistLevelKit/Blueprints/Furniture/Parent/BP_P_Furniture.BP_P_Furniture_C.InitFurniture
	// void InitFurniture();                                                                                                 // [0x2119480] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/BrutalistLevelKit/Blueprints/Furniture/Parent/BP_P_Furniture.BP_P_Furniture_C.UserConstructionScript
	// void UserConstructionScript();                                                                                        // [0x2119480] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BrutalistLevelKit/Blueprints/Furniture/Parent/BP_P_Furniture.BP_P_Furniture_C.Activate
	// void Activate();                                                                                                      // [0x2119480] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BrutalistLevelKit/Blueprints/Furniture/Parent/BP_P_Furniture.BP_P_Furniture_C.Deactivate
	// void Deactivate();                                                                                                    // [0x2119480] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BrutalistLevelKit/Blueprints/Furniture/Parent/BP_P_Furniture.BP_P_Furniture_C.ExecuteUbergraph_BP_P_Furniture
	// void ExecuteUbergraph_BP_P_Furniture(int32_t EntryPoint);                                                             // [0x2119480] Final                
};

/// Class /Game/BrutalistLevelKit/Blueprints/Furniture/BP_Industry_Light1.BP_Industry_Light1_C
/// Size: 0x0014 (0x000345 - 0x000359)
class ABP_Industry_Light1_C : public ABP_P_Furniture_C
{ 
public:
	unsigned char                                      UnknownData00_2[0x3];                                       // 0x0345   (0x0003)  MISSED
	class UPointLightComponent*                        PointLight1;                                                // 0x0348   (0x0008)  
	class UMaterialInstanceDynamic*                    LightMatInst;                                               // 0x0350   (0x0008)  
	bool                                               Random;                                                     // 0x0358   (0x0001)  


	/// Functions
	// Function /Game/BrutalistLevelKit/Blueprints/Furniture/BP_Industry_Light1.BP_Industry_Light1_C.UserConstructionScript
	// void UserConstructionScript();                                                                                        // [0x2119480] Event|Public|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/BrutalistLevelKit/Blueprints/Furniture/BP_Table_Light1.BP_Table_Light1_C
/// Size: 0x0014 (0x000345 - 0x000359)
class ABP_Table_Light1_C : public ABP_P_Furniture_C
{ 
public:
	unsigned char                                      UnknownData00_2[0x3];                                       // 0x0345   (0x0003)  MISSED
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0348   (0x0008)  
	class USpotLightComponent*                         SpotLight;                                                  // 0x0350   (0x0008)  
	bool                                               Random;                                                     // 0x0358   (0x0001)  


	/// Functions
	// Function /Game/BrutalistLevelKit/Blueprints/Furniture/BP_Table_Light1.BP_Table_Light1_C.UserConstructionScript
	// void UserConstructionScript();                                                                                        // [0x2119480] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BrutalistLevelKit/Blueprints/Furniture/BP_Table_Light1.BP_Table_Light1_C.Activate
	// void Activate();                                                                                                      // [0x2119480] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BrutalistLevelKit/Blueprints/Furniture/BP_Table_Light1.BP_Table_Light1_C.ExecuteUbergraph_BP_Table_Light1
	// void ExecuteUbergraph_BP_Table_Light1(int32_t EntryPoint);                                                            // [0x2119480] Final                
};

/// Class /Game/BrutalistLevelKit/Blueprints/Furniture/Parent/BI_LevelObjectInteraction.BI_LevelObjectInteraction_C
/// Size: 0x0000 (0x000028 - 0x000028)
class UBI_LevelObjectInteraction_C : public UInterface
{ 
public:


	/// Functions
	// Function /Game/BrutalistLevelKit/Blueprints/Furniture/Parent/BI_LevelObjectInteraction.BI_LevelObjectInteraction_C.Deactivate
	// void Deactivate();                                                                                                    // [0x2119480] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BrutalistLevelKit/Blueprints/Furniture/Parent/BI_LevelObjectInteraction.BI_LevelObjectInteraction_C.Activate
	// void Activate();                                                                                                      // [0x2119480] Public|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/BrutalistLevelKit/Blueprints/Furniture/BP_VendingMachine.BP_VendingMachine_C
/// Size: 0x0084 (0x000345 - 0x0003C9)
class ABP_VendingMachine_C : public ABP_P_Furniture_C
{ 
public:
	unsigned char                                      UnknownData00_2[0x3];                                       // 0x0345   (0x0003)  MISSED
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0348   (0x0008)  
	class UStaticMeshComponent*                        SM_Vending_Machine_Door;                                    // 0x0350   (0x0008)  
	float                                              DoorOpening_DoorOpening_04209B76411FA5B036E5C0936AEC7029;   // 0x0358   (0x0004)  
	SDK_UNDEFINED(1,2016) /* TEnumAsByte<ETimelineDirection> */ __um(DoorOpening__Direction_04209B76411FA5B036E5C0936AEC7029); // 0x035C   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x035D   (0x0003)  MISSED
	class UTimelineComponent*                          DoorOpening;                                                // 0x0360   (0x0008)  
	class UMaterialInstanceDynamic*                    LightMatInst;                                               // 0x0368   (0x0008)  
	class UMaterialInstanceDynamic*                    MachineMatInst;                                             // 0x0370   (0x0008)  
	FLinearColor                                       MachineColor;                                               // 0x0378   (0x0010)  
	TArray<class UHierarchicalInstancedStaticMeshComponent*> PlanarItemHISMs;                                      // 0x0388   (0x0010)  
	TArray<class UStaticMesh*>                         PlanarItemMeshes;                                           // 0x0398   (0x0010)  
	TArray<class UHierarchicalInstancedStaticMeshComponent*> HangingItemHISMs;                                     // 0x03A8   (0x0010)  
	TArray<class UStaticMesh*>                         HangingItemMeshes;                                          // 0x03B8   (0x0010)  
	bool                                               Activated;                                                  // 0x03C8   (0x0001)  


	/// Functions
	// Function /Game/BrutalistLevelKit/Blueprints/Furniture/BP_VendingMachine.BP_VendingMachine_C.UserConstructionScript
	// void UserConstructionScript();                                                                                        // [0x2119480] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BrutalistLevelKit/Blueprints/Furniture/BP_VendingMachine.BP_VendingMachine_C.DoorOpening__FinishedFunc
	// void DoorOpening__FinishedFunc();                                                                                     // [0x2119480] BlueprintEvent       
	// Function /Game/BrutalistLevelKit/Blueprints/Furniture/BP_VendingMachine.BP_VendingMachine_C.DoorOpening__UpdateFunc
	// void DoorOpening__UpdateFunc();                                                                                       // [0x2119480] BlueprintEvent       
	// Function /Game/BrutalistLevelKit/Blueprints/Furniture/BP_VendingMachine.BP_VendingMachine_C.Activate
	// void Activate();                                                                                                      // [0x2119480] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BrutalistLevelKit/Blueprints/Furniture/BP_VendingMachine.BP_VendingMachine_C.Deactivate
	// void Deactivate();                                                                                                    // [0x2119480] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BrutalistLevelKit/Blueprints/Furniture/BP_VendingMachine.BP_VendingMachine_C.ExecuteUbergraph_BP_VendingMachine
	// void ExecuteUbergraph_BP_VendingMachine(int32_t EntryPoint);                                                          // [0x2119480] Final|HasDefaults    
};

