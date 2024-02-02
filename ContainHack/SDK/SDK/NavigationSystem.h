
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

/// Enum /Script/NavigationSystem.ERuntimeGenerationType
/// Size: 0x05
enum class ERuntimeGenerationType : uint8_t
{
	ERuntimeGenerationType__Static                                                   = 0,
	ERuntimeGenerationType__DynamicModifiersOnly                                     = 1,
	ERuntimeGenerationType__Dynamic                                                  = 2,
	ERuntimeGenerationType__LegacyGeneration                                         = 3,
	ERuntimeGenerationType__ERuntimeGenerationType_MAX                               = 4
};

/// Enum /Script/NavigationSystem.ENavCostDisplay
/// Size: 0x04
enum class ENavCostDisplay : uint8_t
{
	ENavCostDisplay__TotalCost                                                       = 0,
	ENavCostDisplay__HeuristicOnly                                                   = 1,
	ENavCostDisplay__RealCostOnly                                                    = 2,
	ENavCostDisplay__ENavCostDisplay_MAX                                             = 3
};

/// Enum /Script/NavigationSystem.ERecastPartitioning
/// Size: 0x04
enum class ERecastPartitioning : uint8_t
{
	ERecastPartitioning__Monotone                                                    = 0,
	ERecastPartitioning__Watershed                                                   = 1,
	ERecastPartitioning__ChunkyMonotone                                              = 2,
	ERecastPartitioning__ERecastPartitioning_MAX                                     = 3
};

/// Enum /Script/NavigationSystem.ENavSystemOverridePolicy
/// Size: 0x04
enum class ENavSystemOverridePolicy : uint8_t
{
	ENavSystemOverridePolicy__Override                                               = 0,
	ENavSystemOverridePolicy__Append                                                 = 1,
	ENavSystemOverridePolicy__Skip                                                   = 2,
	ENavSystemOverridePolicy__ENavSystemOverridePolicy_MAX                           = 3
};

/// Class /Script/NavigationSystem.CrowdManagerBase
/// Size: 0x0000 (0x000028 - 0x000028)
class UCrowdManagerBase : public UObject
{ 
public:
};

/// Class /Script/NavigationSystem.NavigationGraphNode
/// Size: 0x0000 (0x000290 - 0x000290)
class ANavigationGraphNode : public AActor
{ 
public:
};

/// Struct /Script/NavigationSystem.NavGraphNode
/// Size: 0x0018 (0x000000 - 0x000018)
struct FNavGraphNode
{ 
	class UObject*                                     Owner;                                                      // 0x0000   (0x0008)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x0008   (0x0010)  MISSED
};

/// Class /Script/NavigationSystem.NavigationGraphNodeComponent
/// Size: 0x0030 (0x0002A0 - 0x0002D0)
class UNavigationGraphNodeComponent : public USceneComponent
{ 
public:
	FNavGraphNode                                      Node;                                                       // 0x02A0   (0x0018)  
	class UNavigationGraphNodeComponent*               NextNodeComponent;                                          // 0x02B8   (0x0008)  
	class UNavigationGraphNodeComponent*               PrevNodeComponent;                                          // 0x02C0   (0x0008)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x02C8   (0x0008)  MISSED
};

/// Class /Script/NavigationSystem.NavigationPathGenerator
/// Size: 0x0000 (0x000028 - 0x000028)
class UNavigationPathGenerator : public UInterface
{ 
public:
};

/// Class /Script/NavigationSystem.NavLinkCustomInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UNavLinkCustomInterface : public UInterface
{ 
public:
};

/// Class /Script/NavigationSystem.NavLinkHostInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UNavLinkHostInterface : public UInterface
{ 
public:
};

/// Class /Script/NavigationSystem.NavLinkTrivial
/// Size: 0x0000 (0x000050 - 0x000050)
class UNavLinkTrivial : public UNavLinkDefinition
{ 
public:
};

/// Class /Script/NavigationSystem.NavNodeInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UNavNodeInterface : public UInterface
{ 
public:
};

/// Struct /Script/NavigationSystem.SupportedAreaData
/// Size: 0x0020 (0x000000 - 0x000020)
struct FSupportedAreaData
{ 
	SDK_UNDEFINED(16,1027) /* FString */               __um(AreaClassName);                                        // 0x0000   (0x0010)  
	int32_t                                            AreaID;                                                     // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0014   (0x0004)  MISSED
	class UClass*                                      AreaClass;                                                  // 0x0018   (0x0008)  
};

/// Class /Script/NavigationSystem.NavigationData
/// Size: 0x0228 (0x000290 - 0x0004B8)
class ANavigationData : public AActor
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0290   (0x0008)  MISSED
	class UPrimitiveComponent*                         RenderingComp;                                              // 0x0298   (0x0008)  
	FNavDataConfig                                     NavDataConfig;                                              // 0x02A0   (0x0098)  
	bool                                               bEnableDrawing : 1;                                         // 0x0338:0 (0x0001)  
	bool                                               bForceRebuildOnLoad : 1;                                    // 0x0338:1 (0x0001)  
	bool                                               bAutoDestroyWhenNoNavigation : 1;                           // 0x0338:2 (0x0001)  
	bool                                               bCanBeMainNavData : 1;                                      // 0x0338:3 (0x0001)  
	bool                                               bCanSpawnOnRebuild : 1;                                     // 0x0338:4 (0x0001)  
	bool                                               bRebuildAtRuntime : 1;                                      // 0x0338:5 (0x0001)  
	unsigned char                                      UnknownData01_4[0x3];                                       // 0x0339   (0x0003)  MISSED
	ERuntimeGenerationType                             RuntimeGeneration;                                          // 0x033C   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x033D   (0x0003)  MISSED
	float                                              ObservedPathsTickInterval;                                  // 0x0340   (0x0004)  
	uint32_t                                           DataVersion;                                                // 0x0344   (0x0004)  
	unsigned char                                      UnknownData03_5[0x108];                                     // 0x0348   (0x0108)  MISSED
	TArray<FSupportedAreaData>                         SupportedAreas;                                             // 0x0450   (0x0010)  
	unsigned char                                      UnknownData04_6[0x58];                                      // 0x0460   (0x0058)  MISSED
};

/// Class /Script/NavigationSystem.AbstractNavData
/// Size: 0x0000 (0x0004B8 - 0x0004B8)
class AAbstractNavData : public ANavigationData
{ 
public:
};

/// Class /Script/NavigationSystem.NavArea
/// Size: 0x0018 (0x000030 - 0x000048)
class UNavArea : public UNavAreaBase
{ 
public:
	float                                              DefaultCost;                                                // 0x0030   (0x0004)  
	float                                              FixedAreaEnteringCost;                                      // 0x0034   (0x0004)  
	FColor                                             DrawColor;                                                  // 0x0038   (0x0004)  
	FNavAgentSelector                                  SupportedAgents;                                            // 0x003C   (0x0004)  
	bool                                               bSupportsAgent0 : 1;                                        // 0x0040:0 (0x0001)  
	bool                                               bSupportsAgent1 : 1;                                        // 0x0040:1 (0x0001)  
	bool                                               bSupportsAgent2 : 1;                                        // 0x0040:2 (0x0001)  
	bool                                               bSupportsAgent3 : 1;                                        // 0x0040:3 (0x0001)  
	bool                                               bSupportsAgent4 : 1;                                        // 0x0040:4 (0x0001)  
	bool                                               bSupportsAgent5 : 1;                                        // 0x0040:5 (0x0001)  
	bool                                               bSupportsAgent6 : 1;                                        // 0x0040:6 (0x0001)  
	bool                                               bSupportsAgent7 : 1;                                        // 0x0040:7 (0x0001)  
	bool                                               bSupportsAgent8 : 1;                                        // 0x0041:0 (0x0001)  
	bool                                               bSupportsAgent9 : 1;                                        // 0x0041:1 (0x0001)  
	bool                                               bSupportsAgent10 : 1;                                       // 0x0041:2 (0x0001)  
	bool                                               bSupportsAgent11 : 1;                                       // 0x0041:3 (0x0001)  
	bool                                               bSupportsAgent12 : 1;                                       // 0x0041:4 (0x0001)  
	bool                                               bSupportsAgent13 : 1;                                       // 0x0041:5 (0x0001)  
	bool                                               bSupportsAgent14 : 1;                                       // 0x0041:6 (0x0001)  
	bool                                               bSupportsAgent15 : 1;                                       // 0x0041:7 (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x0042   (0x0006)  MISSED
};

/// Class /Script/NavigationSystem.NavAreaMeta
/// Size: 0x0000 (0x000048 - 0x000048)
class UNavAreaMeta : public UNavArea
{ 
public:
};

/// Class /Script/NavigationSystem.NavAreaMeta_SwitchByAgent
/// Size: 0x0080 (0x000048 - 0x0000C8)
class UNavAreaMeta_SwitchByAgent : public UNavAreaMeta
{ 
public:
	class UClass*                                      Agent0Area;                                                 // 0x0048   (0x0008)  
	class UClass*                                      Agent1Area;                                                 // 0x0050   (0x0008)  
	class UClass*                                      Agent2Area;                                                 // 0x0058   (0x0008)  
	class UClass*                                      Agent3Area;                                                 // 0x0060   (0x0008)  
	class UClass*                                      Agent4Area;                                                 // 0x0068   (0x0008)  
	class UClass*                                      Agent5Area;                                                 // 0x0070   (0x0008)  
	class UClass*                                      Agent6Area;                                                 // 0x0078   (0x0008)  
	class UClass*                                      Agent7Area;                                                 // 0x0080   (0x0008)  
	class UClass*                                      Agent8Area;                                                 // 0x0088   (0x0008)  
	class UClass*                                      Agent9Area;                                                 // 0x0090   (0x0008)  
	class UClass*                                      Agent10Area;                                                // 0x0098   (0x0008)  
	class UClass*                                      Agent11Area;                                                // 0x00A0   (0x0008)  
	class UClass*                                      Agent12Area;                                                // 0x00A8   (0x0008)  
	class UClass*                                      Agent13Area;                                                // 0x00B0   (0x0008)  
	class UClass*                                      Agent14Area;                                                // 0x00B8   (0x0008)  
	class UClass*                                      Agent15Area;                                                // 0x00C0   (0x0008)  
};

/// Class /Script/NavigationSystem.NavArea_Default
/// Size: 0x0000 (0x000048 - 0x000048)
class UNavArea_Default : public UNavArea
{ 
public:
};

/// Class /Script/NavigationSystem.NavArea_LowHeight
/// Size: 0x0000 (0x000048 - 0x000048)
class UNavArea_LowHeight : public UNavArea
{ 
public:
};

/// Class /Script/NavigationSystem.NavArea_Null
/// Size: 0x0000 (0x000048 - 0x000048)
class UNavArea_Null : public UNavArea
{ 
public:
};

/// Class /Script/NavigationSystem.NavArea_Obstacle
/// Size: 0x0000 (0x000048 - 0x000048)
class UNavArea_Obstacle : public UNavArea
{ 
public:
};

/// Struct /Script/NavigationSystem.NavCollisionCylinder
/// Size: 0x0020 (0x000000 - 0x000020)
struct FNavCollisionCylinder
{ 
	FVector                                            Offset;                                                     // 0x0000   (0x0018)  
	float                                              Radius;                                                     // 0x0018   (0x0004)  
	float                                              Height;                                                     // 0x001C   (0x0004)  
};

/// Struct /Script/NavigationSystem.NavCollisionBox
/// Size: 0x0030 (0x000000 - 0x000030)
struct FNavCollisionBox
{ 
	FVector                                            Offset;                                                     // 0x0000   (0x0018)  
	FVector                                            Extent;                                                     // 0x0018   (0x0018)  
};

/// Class /Script/NavigationSystem.NavCollision
/// Size: 0x0060 (0x000070 - 0x0000D0)
class UNavCollision : public UNavCollisionBase
{ 
public:
	unsigned char                                      UnknownData00_2[0x10];                                      // 0x0070   (0x0010)  MISSED
	TArray<FNavCollisionCylinder>                      CylinderCollision;                                          // 0x0080   (0x0010)  
	TArray<FNavCollisionBox>                           BoxCollision;                                               // 0x0090   (0x0010)  
	class UClass*                                      AreaClass;                                                  // 0x00A0   (0x0008)  
	bool                                               bGatherConvexGeometry : 1;                                  // 0x00A8:0 (0x0001)  
	bool                                               bCreateOnClient : 1;                                        // 0x00A8:1 (0x0001)  
	unsigned char                                      UnknownData01_6[0x27];                                      // 0x00A9   (0x0027)  MISSED
};

/// Struct /Script/NavigationSystem.NavigationFilterArea
/// Size: 0x0018 (0x000000 - 0x000018)
struct FNavigationFilterArea
{ 
	class UClass*                                      AreaClass;                                                  // 0x0000   (0x0008)  
	float                                              TravelCostOverride;                                         // 0x0008   (0x0004)  
	float                                              EnteringCostOverride;                                       // 0x000C   (0x0004)  
	bool                                               bIsExcluded : 1;                                            // 0x0010:0 (0x0001)  
	bool                                               bOverrideTravelCost : 1;                                    // 0x0010:1 (0x0001)  
	bool                                               bOverrideEnteringCost : 1;                                  // 0x0010:2 (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0011   (0x0007)  MISSED
};

/// Struct /Script/NavigationSystem.NavigationFilterFlags
/// Size: 0x0004 (0x000000 - 0x000004)
struct FNavigationFilterFlags
{ 
	bool                                               bNavFlag0 : 1;                                              // 0x0000:0 (0x0001)  
	bool                                               bNavFlag1 : 1;                                              // 0x0000:1 (0x0001)  
	bool                                               bNavFlag2 : 1;                                              // 0x0000:2 (0x0001)  
	bool                                               bNavFlag3 : 1;                                              // 0x0000:3 (0x0001)  
	bool                                               bNavFlag4 : 1;                                              // 0x0000:4 (0x0001)  
	bool                                               bNavFlag5 : 1;                                              // 0x0000:5 (0x0001)  
	bool                                               bNavFlag6 : 1;                                              // 0x0000:6 (0x0001)  
	bool                                               bNavFlag7 : 1;                                              // 0x0000:7 (0x0001)  
	bool                                               bNavFlag8 : 1;                                              // 0x0001:0 (0x0001)  
	bool                                               bNavFlag9 : 1;                                              // 0x0001:1 (0x0001)  
	bool                                               bNavFlag10 : 1;                                             // 0x0001:2 (0x0001)  
	bool                                               bNavFlag11 : 1;                                             // 0x0001:3 (0x0001)  
	bool                                               bNavFlag12 : 1;                                             // 0x0001:4 (0x0001)  
	bool                                               bNavFlag13 : 1;                                             // 0x0001:5 (0x0001)  
	bool                                               bNavFlag14 : 1;                                             // 0x0001:6 (0x0001)  
	bool                                               bNavFlag15 : 1;                                             // 0x0001:7 (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x0002   (0x0002)  MISSED
};

/// Class /Script/NavigationSystem.NavigationQueryFilter
/// Size: 0x0020 (0x000028 - 0x000048)
class UNavigationQueryFilter : public UObject
{ 
public:
	TArray<FNavigationFilterArea>                      Areas;                                                      // 0x0028   (0x0010)  
	FNavigationFilterFlags                             IncludeFlags;                                               // 0x0038   (0x0004)  
	FNavigationFilterFlags                             ExcludeFlags;                                               // 0x003C   (0x0004)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0040   (0x0008)  MISSED
};

/// Class /Script/NavigationSystem.RecastFilter_UseDefaultArea
/// Size: 0x0000 (0x000048 - 0x000048)
class URecastFilter_UseDefaultArea : public UNavigationQueryFilter
{ 
public:
};

/// Class /Script/NavigationSystem.NavigationGraph
/// Size: 0x0000 (0x0004B8 - 0x0004B8)
class ANavigationGraph : public ANavigationData
{ 
public:
};

/// Class /Script/NavigationSystem.NavigationInvokerComponent
/// Size: 0x0008 (0x0000A0 - 0x0000A8)
class UNavigationInvokerComponent : public UActorComponent
{ 
public:
	float                                              TileGenerationRadius;                                       // 0x00A0   (0x0004)  
	float                                              TileRemovalRadius;                                          // 0x00A4   (0x0004)  
};

/// Class /Script/NavigationSystem.NavigationPath
/// Size: 0x0060 (0x000028 - 0x000088)
class UNavigationPath : public UObject
{ 
public:
	SDK_UNDEFINED(16,1028) /* FMulticastInlineDelegate */ __um(PathUpdatedNotifier);                               // 0x0028   (0x0010)  
	TArray<FVector>                                    PathPoints;                                                 // 0x0038   (0x0010)  
	SDK_UNDEFINED(1,1029) /* TEnumAsByte<ENavigationOptionFlag> */ __um(RecalculateOnInvalidation);                // 0x0048   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3F];                                      // 0x0049   (0x003F)  MISSED


	/// Functions
	// Function /Script/NavigationSystem.NavigationPath.IsValid
	// bool IsValid();                                                                                                       // [0x445bfc0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/NavigationSystem.NavigationPath.IsStringPulled
	// bool IsStringPulled();                                                                                                // [0x1dd69b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/NavigationSystem.NavigationPath.IsPartial
	// bool IsPartial();                                                                                                     // [0x445bf80] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/NavigationSystem.NavigationPath.GetPathLength
	// float GetPathLength();                                                                                                // [0x445ba10] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/NavigationSystem.NavigationPath.GetPathCost
	// float GetPathCost();                                                                                                  // [0x445b6c0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/NavigationSystem.NavigationPath.GetDebugString
	// FString GetDebugString();                                                                                             // [0x445b530] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/NavigationSystem.NavigationPath.EnableRecalculationOnInvalidation
	// void EnableRecalculationOnInvalidation(TEnumAsByte<ENavigationOptionFlag> DoRecalculation);                           // [0x445af50] Final|Native|Public|BlueprintCallable 
	// Function /Script/NavigationSystem.NavigationPath.EnableDebugDrawing
	// void EnableDebugDrawing(bool bShouldDrawDebugData, FLinearColor PathColor);                                           // [0x445ad70] Final|Native|Public|HasDefaults|BlueprintCallable 
};

/// Class /Script/NavigationSystem.NavigationSystemV1
/// Size: 0x1508 (0x000028 - 0x001530)
class UNavigationSystemV1 : public UNavigationSystemBase
{ 
public:
	class ANavigationData*                             MainNavData;                                                // 0x0028   (0x0008)  
	class ANavigationData*                             AbstractNavData;                                            // 0x0030   (0x0008)  
	FName                                              DefaultAgentName;                                           // 0x0038   (0x0008)  
	SDK_UNDEFINED(48,1030) /* TWeakObjectPtr<UClass*> */ __um(CrowdManagerClass);                                  // 0x0040   (0x0030)  
	bool                                               bAutoCreateNavigationData : 1;                              // 0x0070:0 (0x0001)  
	bool                                               bSpawnNavDataInNavBoundsLevel : 1;                          // 0x0070:1 (0x0001)  
	bool                                               bAllowClientSideNavigation : 1;                             // 0x0070:2 (0x0001)  
	bool                                               bShouldDiscardSubLevelNavData : 1;                          // 0x0070:3 (0x0001)  
	bool                                               bTickWhilePaused : 1;                                       // 0x0070:4 (0x0001)  
	bool                                               bSupportRebuilding : 1;                                     // 0x0070:5 (0x0001)  
	bool                                               bInitialBuildingLocked : 1;                                 // 0x0070:6 (0x0001)  
	unsigned char                                      UnknownBit00 : 1;                                           // 0x0070:7 (0x0001)  MISSED
	bool                                               bSkipAgentHeightCheckWhenPickingNavData : 1;                // 0x0071:0 (0x0001)  
	unsigned char                                      UnknownData01_4[0x2];                                       // 0x0072   (0x0002)  MISSED
	int32_t                                            GeometryExportVertexCountWarningThreshold;                  // 0x0074   (0x0004)  
	bool                                               bGenerateNavigationOnlyAroundNavigationInvokers : 1;        // 0x0078:0 (0x0001)  
	unsigned char                                      UnknownData02_4[0x3];                                       // 0x0079   (0x0003)  MISSED
	float                                              ActiveTilesUpdateInterval;                                  // 0x007C   (0x0004)  
	ENavDataGatheringModeConfig                        DataGatheringMode;                                          // 0x0080   (0x0001)  
	unsigned char                                      UnknownData03_5[0x3];                                       // 0x0081   (0x0003)  MISSED
	float                                              DirtyAreaWarningSizeThreshold;                              // 0x0084   (0x0004)  
	float                                              GatheringNavModifiersWarningLimitTime;                      // 0x0088   (0x0004)  
	unsigned char                                      UnknownData04_5[0x4];                                       // 0x008C   (0x0004)  MISSED
	TArray<FNavDataConfig>                             SupportedAgents;                                            // 0x0090   (0x0010)  
	FNavAgentSelector                                  SupportedAgentsMask;                                        // 0x00A0   (0x0004)  
	unsigned char                                      UnknownData05_5[0x4];                                       // 0x00A4   (0x0004)  MISSED
	FBox                                               BuildBounds;                                                // 0x00A8   (0x0038)  
	TArray<class ANavigationData*>                     NavDataSet;                                                 // 0x00E0   (0x0010)  
	TArray<class ANavigationData*>                     NavDataRegistrationQueue;                                   // 0x00F0   (0x0010)  
	unsigned char                                      UnknownData06_5[0x10];                                      // 0x0100   (0x0010)  MISSED
	SDK_UNDEFINED(16,1031) /* FMulticastInlineDelegate */ __um(OnNavDataRegisteredEvent);                          // 0x0110   (0x0010)  
	SDK_UNDEFINED(16,1032) /* FMulticastInlineDelegate */ __um(OnNavigationGenerationFinishedDelegate);            // 0x0120   (0x0010)  
	unsigned char                                      UnknownData07_5[0xDC];                                      // 0x0130   (0x00DC)  MISSED
	FNavigationSystemRunMode                           OperationMode;                                              // 0x020C   (0x0001)  
	unsigned char                                      UnknownData08_6[0x1323];                                    // 0x020D   (0x1323)  MISSED


	/// Functions
	// Function /Script/NavigationSystem.NavigationSystemV1.UnregisterNavigationInvoker
	// void UnregisterNavigationInvoker(class AActor* Invoker);                                                              // [0x445cf60] Final|Native|Public|BlueprintCallable 
	// Function /Script/NavigationSystem.NavigationSystemV1.SetMaxSimultaneousTileGenerationJobsCount
	// void SetMaxSimultaneousTileGenerationJobsCount(int32_t MaxNumberOfJobs);                                              // [0x445ce70] Final|Native|Public|BlueprintCallable 
	// Function /Script/NavigationSystem.NavigationSystemV1.SetGeometryGatheringMode
	// void SetGeometryGatheringMode(ENavDataGatheringModeConfig NewMode);                                                   // [0x445cde0] Final|Native|Public|BlueprintCallable 
	// Function /Script/NavigationSystem.NavigationSystemV1.ResetMaxSimultaneousTileGenerationJobsCount
	// void ResetMaxSimultaneousTileGenerationJobsCount();                                                                   // [0x445cd20] Final|Native|Public|BlueprintCallable 
	// Function /Script/NavigationSystem.NavigationSystemV1.RegisterNavigationInvoker
	// void RegisterNavigationInvoker(class AActor* Invoker, float TileGenerationRadius, float TileRemovalRadius);           // [0x445cc00] Final|Native|Public|BlueprintCallable 
	// Function /Script/NavigationSystem.NavigationSystemV1.OnNavigationBoundsUpdated
	// void OnNavigationBoundsUpdated(class ANavMeshBoundsVolume* NavVolume);                                                // [0x445cac0] Final|Native|Public|BlueprintCallable 
	// Function /Script/NavigationSystem.NavigationSystemV1.NavigationRaycast
	// bool NavigationRaycast(class UObject* WorldContextObject, FVector& RayStart, FVector& RayEnd, FVector& HitLocation, class UClass* FilterClass, class AController* Querier); // [0x445c880] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/NavigationSystem.NavigationSystemV1.K2_ReplaceAreaInOctreeData
	// bool K2_ReplaceAreaInOctreeData(class UObject* Object, class UClass* OldArea, class UClass* NewArea);                 // [0x445c740] Final|Native|Public|BlueprintCallable 
	// Function /Script/NavigationSystem.NavigationSystemV1.K2_ProjectPointToNavigation
	// bool K2_ProjectPointToNavigation(class UObject* WorldContextObject, FVector& Point, FVector& ProjectedLocation, class ANavigationData* NavData, class UClass* FilterClass, FVector QueryExtent); // [0x445c530] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/NavigationSystem.NavigationSystemV1.K2_GetRandomReachablePointInRadius
	// bool K2_GetRandomReachablePointInRadius(class UObject* WorldContextObject, FVector& Origin, FVector& RandomLocation, float Radius, class ANavigationData* NavData, class UClass* FilterClass); // [0x445c200] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/NavigationSystem.NavigationSystemV1.K2_GetRandomPointInNavigableRadius
	// bool K2_GetRandomPointInNavigableRadius(class UObject* WorldContextObject, FVector& Origin, FVector& RandomLocation, float Radius, class ANavigationData* NavData, class UClass* FilterClass); // [0x445bfe0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/NavigationSystem.NavigationSystemV1.K2_GetRandomLocationInNavigableRadius
	// bool K2_GetRandomLocationInNavigableRadius(class UObject* WorldContextObject, FVector& Origin, FVector& RandomLocation, float Radius, class ANavigationData* NavData, class UClass* FilterClass); // [0x445bfe0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/NavigationSystem.NavigationSystemV1.IsNavigationBeingBuiltOrLocked
	// bool IsNavigationBeingBuiltOrLocked(class UObject* WorldContextObject);                                               // [0x445be90] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/NavigationSystem.NavigationSystemV1.IsNavigationBeingBuilt
	// bool IsNavigationBeingBuilt(class UObject* WorldContextObject);                                                       // [0x445bda0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/NavigationSystem.NavigationSystemV1.GetPathLength
	// TEnumAsByte<ENavigationQueryResult> GetPathLength(class UObject* WorldContextObject, FVector& PathStart, FVector& PathEnd, float& PathLength, class ANavigationData* NavData, class UClass* FilterClass); // [0x445baa0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/NavigationSystem.NavigationSystemV1.GetPathCost
	// TEnumAsByte<ENavigationQueryResult> GetPathCost(class UObject* WorldContextObject, FVector& PathStart, FVector& PathEnd, float& PathCost, class ANavigationData* NavData, class UClass* FilterClass); // [0x445b710] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/NavigationSystem.NavigationSystemV1.GetNavigationSystem
	// class UNavigationSystemV1* GetNavigationSystem(class UObject* WorldContextObject);                                    // [0x445b600] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/NavigationSystem.NavigationSystemV1.FindPathToLocationSynchronously
	// class UNavigationPath* FindPathToLocationSynchronously(class UObject* WorldContextObject, FVector& PathStart, FVector& PathEnd, class AActor* PathfindingContext, class UClass* FilterClass); // [0x445b360] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/NavigationSystem.NavigationSystemV1.FindPathToActorSynchronously
	// class UNavigationPath* FindPathToActorSynchronously(class UObject* WorldContextObject, FVector& PathStart, class AActor* GoalActor, float TetherDistance, class AActor* PathfindingContext, class UClass* FilterClass); // [0x445b000] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
};

/// Class /Script/NavigationSystem.NavigationSystemModuleConfig
/// Size: 0x0008 (0x000058 - 0x000060)
class UNavigationSystemModuleConfig : public UNavigationSystemConfig
{ 
public:
	bool                                               bStrictlyStatic : 1;                                        // 0x0058:0 (0x0001)  
	bool                                               bCreateOnClient : 1;                                        // 0x0058:1 (0x0001)  
	bool                                               bAutoSpawnMissingNavData : 1;                               // 0x0058:2 (0x0001)  
	bool                                               bSpawnNavDataInNavBoundsLevel : 1;                          // 0x0058:3 (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0059   (0x0007)  MISSED
};

/// Class /Script/NavigationSystem.NavigationTestingActor
/// Size: 0x0120 (0x000290 - 0x0003B0)
class ANavigationTestingActor : public AActor
{ 
public:
	unsigned char                                      UnknownData00_2[0x10];                                      // 0x0290   (0x0010)  MISSED
	class UCapsuleComponent*                           CapsuleComponent;                                           // 0x02A0   (0x0008)  
	class UNavigationInvokerComponent*                 InvokerComponent;                                           // 0x02A8   (0x0008)  
	bool                                               bActAsNavigationInvoker : 1;                                // 0x02B0:0 (0x0001)  
	unsigned char                                      UnknownData01_4[0x7];                                       // 0x02B1   (0x0007)  MISSED
	FNavAgentProperties                                NavAgentProps;                                              // 0x02B8   (0x0038)  
	FVector                                            QueryingExtent;                                             // 0x02F0   (0x0018)  
	class ANavigationData*                             MyNavData;                                                  // 0x0308   (0x0008)  
	FVector                                            ProjectedLocation;                                          // 0x0310   (0x0018)  
	bool                                               bProjectedLocationValid : 1;                                // 0x0328:0 (0x0001)  
	bool                                               bSearchStart : 1;                                           // 0x0328:1 (0x0001)  
	unsigned char                                      UnknownData02_4[0x3];                                       // 0x0329   (0x0003)  MISSED
	float                                              CostLimitFactor;                                            // 0x032C   (0x0004)  
	float                                              MinimumCostLimit;                                           // 0x0330   (0x0004)  
	bool                                               bBacktracking : 1;                                          // 0x0334:0 (0x0001)  
	bool                                               bUseHierarchicalPathfinding : 1;                            // 0x0334:1 (0x0001)  
	bool                                               bGatherDetailedInfo : 1;                                    // 0x0334:2 (0x0001)  
	bool                                               bDrawDistanceToWall : 1;                                    // 0x0334:3 (0x0001)  
	bool                                               bShowNodePool : 1;                                          // 0x0334:4 (0x0001)  
	bool                                               bShowBestPath : 1;                                          // 0x0334:5 (0x0001)  
	bool                                               bShowDiffWithPreviousStep : 1;                              // 0x0334:6 (0x0001)  
	bool                                               bShouldBeVisibleInGame : 1;                                 // 0x0334:7 (0x0001)  
	unsigned char                                      UnknownData03_4[0x3];                                       // 0x0335   (0x0003)  MISSED
	SDK_UNDEFINED(1,1033) /* TEnumAsByte<ENavCostDisplay> */ __um(CostDisplayMode);                                // 0x0338   (0x0001)  
	unsigned char                                      UnknownData04_5[0x7];                                       // 0x0339   (0x0007)  MISSED
	FVector2D                                          TextCanvasOffset;                                           // 0x0340   (0x0010)  
	bool                                               bPathExist : 1;                                             // 0x0350:0 (0x0001)  
	bool                                               bPathIsPartial : 1;                                         // 0x0350:1 (0x0001)  
	bool                                               bPathSearchOutOfNodes : 1;                                  // 0x0350:2 (0x0001)  
	unsigned char                                      UnknownData05_4[0x3];                                       // 0x0351   (0x0003)  MISSED
	float                                              PathfindingTime;                                            // 0x0354   (0x0004)  
	float                                              PathCost;                                                   // 0x0358   (0x0004)  
	int32_t                                            PathfindingSteps;                                           // 0x035C   (0x0004)  
	class ANavigationTestingActor*                     OtherActor;                                                 // 0x0360   (0x0008)  
	class UClass*                                      FilterClass;                                                // 0x0368   (0x0008)  
	int32_t                                            ShowStepIndex;                                              // 0x0370   (0x0004)  
	float                                              OffsetFromCornersDistance;                                  // 0x0374   (0x0004)  
	unsigned char                                      UnknownData06_6[0x38];                                      // 0x0378   (0x0038)  MISSED
};

/// Class /Script/NavigationSystem.NavLinkComponent
/// Size: 0x0010 (0x000540 - 0x000550)
class UNavLinkComponent : public UPrimitiveComponent
{ 
public:
	TArray<FNavigationLink>                            Links;                                                      // 0x0540   (0x0010)  
};

/// Class /Script/NavigationSystem.NavRelevantComponent
/// Size: 0x0050 (0x0000A0 - 0x0000F0)
class UNavRelevantComponent : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_2[0x40];                                      // 0x00A0   (0x0040)  MISSED
	bool                                               bAttachToOwnersRoot : 1;                                    // 0x00E0:0 (0x0001)  
	unsigned char                                      UnknownData01_4[0x7];                                       // 0x00E1   (0x0007)  MISSED
	class UObject*                                     CachedNavParent;                                            // 0x00E8   (0x0008)  


	/// Functions
	// Function /Script/NavigationSystem.NavRelevantComponent.SetNavigationRelevancy
	// void SetNavigationRelevancy(bool bRelevant);                                                                          // [0x44991f0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/NavigationSystem.NavLinkCustomComponent
/// Size: 0x00E0 (0x0000F0 - 0x0001D0)
class UNavLinkCustomComponent : public UNavRelevantComponent
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x00F0   (0x0008)  MISSED
	uint32_t                                           NavLinkUserId;                                              // 0x00F8   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x00FC   (0x0004)  MISSED
	class UClass*                                      EnabledAreaClass;                                           // 0x0100   (0x0008)  
	class UClass*                                      DisabledAreaClass;                                          // 0x0108   (0x0008)  
	FNavAgentSelector                                  SupportedAgents;                                            // 0x0110   (0x0004)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x0114   (0x0004)  MISSED
	FVector                                            LinkRelativeStart;                                          // 0x0118   (0x0018)  
	FVector                                            LinkRelativeEnd;                                            // 0x0130   (0x0018)  
	SDK_UNDEFINED(1,1034) /* TEnumAsByte<ENavLinkDirection> */ __um(LinkDirection);                                // 0x0148   (0x0001)  
	unsigned char                                      UnknownData03_5[0x3];                                       // 0x0149   (0x0003)  MISSED
	bool                                               bLinkEnabled : 1;                                           // 0x014C:0 (0x0001)  
	bool                                               bNotifyWhenEnabled : 1;                                     // 0x014C:1 (0x0001)  
	bool                                               bNotifyWhenDisabled : 1;                                    // 0x014C:2 (0x0001)  
	bool                                               bCreateBoxObstacle : 1;                                     // 0x014C:3 (0x0001)  
	unsigned char                                      UnknownData04_4[0x3];                                       // 0x014D   (0x0003)  MISSED
	FVector                                            ObstacleOffset;                                             // 0x0150   (0x0018)  
	FVector                                            ObstacleExtent;                                             // 0x0168   (0x0018)  
	class UClass*                                      ObstacleAreaClass;                                          // 0x0180   (0x0008)  
	float                                              BroadcastRadius;                                            // 0x0188   (0x0004)  
	float                                              BroadcastInterval;                                          // 0x018C   (0x0004)  
	SDK_UNDEFINED(1,1035) /* TEnumAsByte<ECollisionChannel> */ __um(BroadcastChannel);                             // 0x0190   (0x0001)  
	unsigned char                                      UnknownData05_6[0x3F];                                      // 0x0191   (0x003F)  MISSED
};

/// Class /Script/NavigationSystem.NavLinkRenderingComponent
/// Size: 0x0000 (0x000540 - 0x000540)
class UNavLinkRenderingComponent : public UPrimitiveComponent
{ 
public:
};

/// Class /Script/NavigationSystem.NavMeshBoundsVolume
/// Size: 0x0008 (0x0002C8 - 0x0002D0)
class ANavMeshBoundsVolume : public AVolume
{ 
public:
	FNavAgentSelector                                  SupportedAgents;                                            // 0x02C8   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x02CC   (0x0004)  MISSED
};

/// Class /Script/NavigationSystem.NavMeshRenderingComponent
/// Size: 0x0010 (0x000590 - 0x0005A0)
class UNavMeshRenderingComponent : public UDebugDrawComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0590   (0x0010)  MISSED
};

/// Class /Script/NavigationSystem.NavTestRenderingComponent
/// Size: 0x0000 (0x000590 - 0x000590)
class UNavTestRenderingComponent : public UDebugDrawComponent
{ 
public:
};

/// Struct /Script/NavigationSystem.RecastNavMeshTileGenerationDebug
/// Size: 0x0014 (0x000000 - 0x000014)
struct FRecastNavMeshTileGenerationDebug
{ 
	bool                                               bEnabled : 1;                                               // 0x0000:0 (0x0001)  
	unsigned char                                      UnknownData00_4[0x3];                                       // 0x0001   (0x0003)  MISSED
	FIntVector                                         TileCoordinate;                                             // 0x0004   (0x000C)  
	bool                                               bHeightfieldSolidFromRasterization : 1;                     // 0x0010:0 (0x0001)  
	bool                                               bHeightfieldSolidPostInclusionBoundsFiltering : 1;          // 0x0010:1 (0x0001)  
	bool                                               bHeightfieldSolidPostHeightFiltering : 1;                   // 0x0010:2 (0x0001)  
	bool                                               bCompactHeightfield : 1;                                    // 0x0010:3 (0x0001)  
	bool                                               bCompactHeightfieldEroded : 1;                              // 0x0010:4 (0x0001)  
	bool                                               bCompactHeightfieldRegions : 1;                             // 0x0010:5 (0x0001)  
	bool                                               bCompactHeightfieldDistances : 1;                           // 0x0010:6 (0x0001)  
	bool                                               bTileCacheLayerAreas : 1;                                   // 0x0010:7 (0x0001)  
	bool                                               bTileCacheLayerRegions : 1;                                 // 0x0011:0 (0x0001)  
	bool                                               bTileCacheContours : 1;                                     // 0x0011:1 (0x0001)  
	bool                                               bTileCachePolyMesh : 1;                                     // 0x0011:2 (0x0001)  
	bool                                               bTileCacheDetailMesh : 1;                                   // 0x0011:3 (0x0001)  
	unsigned char                                      UnknownData01_6[0x2];                                       // 0x0012   (0x0002)  MISSED
};

/// Class /Script/NavigationSystem.RecastNavMesh
/// Size: 0x00E0 (0x0004B8 - 0x000598)
class ARecastNavMesh : public ANavigationData
{ 
public:
	bool                                               bDrawTriangleEdges : 1;                                     // 0x04B8:0 (0x0001)  
	bool                                               bDrawPolyEdges : 1;                                         // 0x04B8:1 (0x0001)  
	bool                                               bDrawFilledPolys : 1;                                       // 0x04B8:2 (0x0001)  
	bool                                               bDrawNavMeshEdges : 1;                                      // 0x04B8:3 (0x0001)  
	bool                                               bDrawTileBounds : 1;                                        // 0x04B8:4 (0x0001)  
	bool                                               bDrawPathCollidingGeometry : 1;                             // 0x04B8:5 (0x0001)  
	bool                                               bDrawTileLabels : 1;                                        // 0x04B8:6 (0x0001)  
	bool                                               bDrawPolygonLabels : 1;                                     // 0x04B8:7 (0x0001)  
	bool                                               bDrawDefaultPolygonCost : 1;                                // 0x04B9:0 (0x0001)  
	bool                                               bDrawPolygonFlags : 1;                                      // 0x04B9:1 (0x0001)  
	bool                                               bDrawLabelsOnPathNodes : 1;                                 // 0x04B9:2 (0x0001)  
	bool                                               bDrawNavLinks : 1;                                          // 0x04B9:3 (0x0001)  
	bool                                               bDrawFailedNavLinks : 1;                                    // 0x04B9:4 (0x0001)  
	bool                                               bDrawClusters : 1;                                          // 0x04B9:5 (0x0001)  
	bool                                               bDrawOctree : 1;                                            // 0x04B9:6 (0x0001)  
	bool                                               bDrawOctreeDetails : 1;                                     // 0x04B9:7 (0x0001)  
	bool                                               bDrawMarkedForbiddenPolys : 1;                              // 0x04BA:0 (0x0001)  
	bool                                               bDistinctlyDrawTilesBeingBuilt : 1;                         // 0x04BA:1 (0x0001)  
	unsigned char                                      UnknownData00_4[0x1];                                       // 0x04BB   (0x0001)  MISSED
	float                                              DrawOffset;                                                 // 0x04BC   (0x0004)  
	FRecastNavMeshTileGenerationDebug                  TileGenerationDebug;                                        // 0x04C0   (0x0014)  
	bool                                               bFixedTilePoolSize : 1;                                     // 0x04D4:0 (0x0001)  
	unsigned char                                      UnknownData01_4[0x3];                                       // 0x04D5   (0x0003)  MISSED
	int32_t                                            TilePoolSize;                                               // 0x04D8   (0x0004)  
	float                                              TileSizeUU;                                                 // 0x04DC   (0x0004)  
	float                                              CellSize;                                                   // 0x04E0   (0x0004)  
	float                                              CellHeight;                                                 // 0x04E4   (0x0004)  
	float                                              AgentRadius;                                                // 0x04E8   (0x0004)  
	float                                              AgentHeight;                                                // 0x04EC   (0x0004)  
	float                                              AgentMaxSlope;                                              // 0x04F0   (0x0004)  
	float                                              AgentMaxStepHeight;                                         // 0x04F4   (0x0004)  
	float                                              MinRegionArea;                                              // 0x04F8   (0x0004)  
	float                                              MergeRegionSize;                                            // 0x04FC   (0x0004)  
	float                                              MaxSimplificationError;                                     // 0x0500   (0x0004)  
	int32_t                                            MaxSimultaneousTileGenerationJobsCount;                     // 0x0504   (0x0004)  
	int32_t                                            TileNumberHardLimit;                                        // 0x0508   (0x0004)  
	int32_t                                            PolyRefTileBits;                                            // 0x050C   (0x0004)  
	int32_t                                            PolyRefNavPolyBits;                                         // 0x0510   (0x0004)  
	int32_t                                            PolyRefSaltBits;                                            // 0x0514   (0x0004)  
	FVector                                            NavMeshOriginOffset;                                        // 0x0518   (0x0018)  
	float                                              DefaultDrawDistance;                                        // 0x0530   (0x0004)  
	float                                              DefaultMaxSearchNodes;                                      // 0x0534   (0x0004)  
	float                                              DefaultMaxHierarchicalSearchNodes;                          // 0x0538   (0x0004)  
	SDK_UNDEFINED(1,1036) /* TEnumAsByte<ERecastPartitioning> */ __um(RegionPartitioning);                         // 0x053C   (0x0001)  
	SDK_UNDEFINED(1,1037) /* TEnumAsByte<ERecastPartitioning> */ __um(LayerPartitioning);                          // 0x053D   (0x0001)  
	unsigned char                                      UnknownData02_5[0x2];                                       // 0x053E   (0x0002)  MISSED
	int32_t                                            RegionChunkSplits;                                          // 0x0540   (0x0004)  
	int32_t                                            LayerChunkSplits;                                           // 0x0544   (0x0004)  
	bool                                               bSortNavigationAreasByCost : 1;                             // 0x0548:0 (0x0001)  
	bool                                               bIsWorldPartitioned : 1;                                    // 0x0548:1 (0x0001)  
	bool                                               bPerformVoxelFiltering : 1;                                 // 0x0548:2 (0x0001)  
	bool                                               bMarkLowHeightAreas : 1;                                    // 0x0548:3 (0x0001)  
	bool                                               bUseExtraTopCellWhenMarkingAreas : 1;                       // 0x0548:4 (0x0001)  
	bool                                               bFilterLowSpanSequences : 1;                                // 0x0548:5 (0x0001)  
	bool                                               bFilterLowSpanFromTileCache : 1;                            // 0x0548:6 (0x0001)  
	bool                                               bDoFullyAsyncNavDataGathering : 1;                          // 0x0548:7 (0x0001)  
	bool                                               bUseBetterOffsetsFromCorners : 1;                           // 0x0549:0 (0x0001)  
	bool                                               bStoreEmptyTileLayers : 1;                                  // 0x0549:1 (0x0001)  
	bool                                               bUseVirtualFilters : 1;                                     // 0x0549:2 (0x0001)  
	bool                                               bUseVirtualGeometryFilteringAndDirtying : 1;                // 0x0549:3 (0x0001)  
	bool                                               bAllowNavLinkAsPathEnd : 1;                                 // 0x0549:4 (0x0001)  
	unsigned char                                      UnknownData03_4[0x2];                                       // 0x054A   (0x0002)  MISSED
	int32_t                                            TimeSliceFilterLedgeSpansMaxYProcess;                       // 0x054C   (0x0004)  
	double                                             TimeSliceLongDurationDebug;                                 // 0x0550   (0x0008)  
	bool                                               bUseVoxelCache : 1;                                         // 0x0558:0 (0x0001)  
	unsigned char                                      UnknownData04_4[0x3];                                       // 0x0559   (0x0003)  MISSED
	float                                              TileSetUpdateInterval;                                      // 0x055C   (0x0004)  
	float                                              HeuristicScale;                                             // 0x0560   (0x0004)  
	float                                              VerticalDeviationFromGroundCompensation;                    // 0x0564   (0x0004)  
	unsigned char                                      UnknownData05_6[0x30];                                      // 0x0568   (0x0030)  MISSED


	/// Functions
	// Function /Script/NavigationSystem.RecastNavMesh.K2_ReplaceAreaInTileBounds
	// bool K2_ReplaceAreaInTileBounds(FBox Bounds, class UClass* OldArea, class UClass* NewArea, bool ReplaceLinks);        // [0x44948f0] Final|Native|Public|HasDefaults|BlueprintCallable 
};

/// Class /Script/NavigationSystem.RecastNavMeshDataChunk
/// Size: 0x0010 (0x000030 - 0x000040)
class URecastNavMeshDataChunk : public UNavigationDataChunk
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0030   (0x0010)  MISSED
};

/// Class /Script/NavigationSystem.NavModifierComponent
/// Size: 0x00A0 (0x0000F0 - 0x000190)
class UNavModifierComponent : public UNavRelevantComponent
{ 
public:
	class UClass*                                      AreaClass;                                                  // 0x00F0   (0x0008)  
	FVector                                            FailsafeExtent;                                             // 0x00F8   (0x0018)  
	bool                                               bIncludeAgentHeight : 1;                                    // 0x0110:0 (0x0001)  
	unsigned char                                      UnknownData00_6[0x7F];                                      // 0x0111   (0x007F)  MISSED


	/// Functions
	// Function /Script/NavigationSystem.NavModifierComponent.SetAreaClass
	// void SetAreaClass(class UClass* NewAreaClass);                                                                        // [0x44990e0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/NavigationSystem.NavModifierVolume
/// Size: 0x0018 (0x0002C8 - 0x0002E0)
class ANavModifierVolume : public AVolume
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x02C8   (0x0008)  MISSED
	class UClass*                                      AreaClass;                                                  // 0x02D0   (0x0008)  
	bool                                               bMaskFillCollisionUnderneathForNavmesh;                     // 0x02D8   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x02D9   (0x0007)  MISSED


	/// Functions
	// Function /Script/NavigationSystem.NavModifierVolume.SetAreaClass
	// void SetAreaClass(class UClass* NewAreaClass);                                                                        // [0x4498fe0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/NavigationSystem.NavSystemConfigOverride
/// Size: 0x0010 (0x000290 - 0x0002A0)
class ANavSystemConfigOverride : public AActor
{ 
public:
	class UNavigationSystemConfig*                     NavigationSystemConfig;                                     // 0x0290   (0x0008)  
	ENavSystemOverridePolicy                           OverridePolicy;                                             // 0x0298   (0x0001)  
	bool                                               bLoadOnClient : 1;                                          // 0x0299:0 (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x029A   (0x0006)  MISSED
};

/// Struct /Script/NavigationSystem.NavGraphEdge
/// Size: 0x0018 (0x000000 - 0x000018)
struct FNavGraphEdge
{ 
	unsigned char                                      UnknownData00_1[0x18];                                      // 0x0000   (0x0018)  MISSED
};

/// Struct /Script/NavigationSystem.NavLinkCustomInstanceData
/// Size: 0x0008 (0x000068 - 0x000070)
struct FNavLinkCustomInstanceData : FActorComponentInstanceData
{ 
	uint32_t                                           NavLinkUserId;                                              // 0x0068   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x006C   (0x0004)  MISSED
};

/// Struct /Script/NavigationSystem.RecastNavMeshGenerationProperties
/// Size: 0x0040 (0x000000 - 0x000040)
struct FRecastNavMeshGenerationProperties
{ 
	int32_t                                            TilePoolSize;                                               // 0x0000   (0x0004)  
	float                                              TileSizeUU;                                                 // 0x0004   (0x0004)  
	float                                              CellSize;                                                   // 0x0008   (0x0004)  
	float                                              CellHeight;                                                 // 0x000C   (0x0004)  
	float                                              AgentRadius;                                                // 0x0010   (0x0004)  
	float                                              AgentHeight;                                                // 0x0014   (0x0004)  
	float                                              AgentMaxSlope;                                              // 0x0018   (0x0004)  
	float                                              AgentMaxStepHeight;                                         // 0x001C   (0x0004)  
	float                                              MinRegionArea;                                              // 0x0020   (0x0004)  
	float                                              MergeRegionSize;                                            // 0x0024   (0x0004)  
	float                                              MaxSimplificationError;                                     // 0x0028   (0x0004)  
	int32_t                                            TileNumberHardLimit;                                        // 0x002C   (0x0004)  
	SDK_UNDEFINED(1,1038) /* TEnumAsByte<ERecastPartitioning> */ __um(RegionPartitioning);                         // 0x0030   (0x0001)  
	SDK_UNDEFINED(1,1039) /* TEnumAsByte<ERecastPartitioning> */ __um(LayerPartitioning);                          // 0x0031   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x0032   (0x0002)  MISSED
	int32_t                                            RegionChunkSplits;                                          // 0x0034   (0x0004)  
	int32_t                                            LayerChunkSplits;                                           // 0x0038   (0x0004)  
	bool                                               bSortNavigationAreasByCost : 1;                             // 0x003C:0 (0x0001)  
	bool                                               bPerformVoxelFiltering : 1;                                 // 0x003C:1 (0x0001)  
	bool                                               bMarkLowHeightAreas : 1;                                    // 0x003C:2 (0x0001)  
	bool                                               bUseExtraTopCellWhenMarkingAreas : 1;                       // 0x003C:3 (0x0001)  
	bool                                               bFilterLowSpanSequences : 1;                                // 0x003C:4 (0x0001)  
	bool                                               bFilterLowSpanFromTileCache : 1;                            // 0x003C:5 (0x0001)  
	bool                                               bFixedTilePoolSize : 1;                                     // 0x003C:6 (0x0001)  
	bool                                               bIsWorldPartitioned : 1;                                    // 0x003C:7 (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x003D   (0x0003)  MISSED
};

