
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/SpiderNavigation.SpiderNavGridBuilder
/// Size: 0x0100 (0x000290 - 0x000390)
class ASpiderNavGridBuilder : public AActor
{ 
public:
	class UBoxComponent*                               VolumeBox;                                                  // 0x0290   (0x0008)  
	class UClass*                                      TracerActorBP;                                              // 0x0298   (0x0008)  
	class UClass*                                      NavPointActorBP;                                            // 0x02A0   (0x0008)  
	class UClass*                                      NavPointEdgeActorBP;                                        // 0x02A8   (0x0008)  
	float                                              GridStepSize;                                               // 0x02B0   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x02B4   (0x0004)  MISSED
	TArray<class AActor*>                              ActorsWhiteList;                                            // 0x02B8   (0x0010)  
	bool                                               bUseActorWhiteList;                                         // 0x02C8   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x02C9   (0x0007)  MISSED
	TArray<class AActor*>                              ActorsBlackList;                                            // 0x02D0   (0x0010)  
	bool                                               bUseActorBlackList;                                         // 0x02E0   (0x0001)  
	bool                                               bAutoRemoveTracers;                                         // 0x02E1   (0x0001)  
	bool                                               bAutoSaveGrid;                                              // 0x02E2   (0x0001)  
	unsigned char                                      UnknownData02_5[0x1];                                       // 0x02E3   (0x0001)  MISSED
	float                                              BounceNavDistance;                                          // 0x02E4   (0x0004)  
	float                                              TraceDistanceModificator;                                   // 0x02E8   (0x0004)  
	float                                              ClosePointsFilterModificator;                               // 0x02EC   (0x0004)  
	float                                              ConnectionSphereRadiusModificator;                          // 0x02F0   (0x0004)  
	float                                              TraceDistanceForEdgesModificator;                           // 0x02F4   (0x0004)  
	float                                              EgdeDeviationModificator;                                   // 0x02F8   (0x0004)  
	unsigned char                                      UnknownData03_6[0x94];                                      // 0x02FC   (0x0094)  MISSED


	/// Functions
	// Function /Script/SpiderNavigation.SpiderNavGridBuilder.SaveGrid
	// void SaveGrid();                                                                                                      // [0x1917020] Final|Native|Public|BlueprintCallable 
	// Function /Script/SpiderNavigation.SpiderNavGridBuilder.DrawDebugRelations
	// void DrawDebugRelations();                                                                                            // [0x1916730] Final|Native|Public|BlueprintCallable 
	// Function /Script/SpiderNavigation.SpiderNavGridBuilder.BuildGrid
	// int32_t BuildGrid();                                                                                                  // [0x1916700] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/SpiderNavigation.SpiderNavGridSaveGame
/// Size: 0x0108 (0x000028 - 0x000130)
class USpiderNavGridSaveGame : public USaveGame
{ 
public:
	SDK_UNDEFINED(80,2561) /* TMap<int32_t, FVector> */ __um(NavLocations);                                        // 0x0028   (0x0050)  
	SDK_UNDEFINED(80,2562) /* TMap<int32_t, FVector> */ __um(NavNormals);                                          // 0x0078   (0x0050)  
	SDK_UNDEFINED(80,2563) /* TMap<int32_t, FSpiderNavRelations> */ __um(NavRelations);                            // 0x00C8   (0x0050)  
	SDK_UNDEFINED(16,2564) /* FString */               __um(SaveSlotName);                                         // 0x0118   (0x0010)  
	uint32_t                                           UserIndex;                                                  // 0x0128   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x012C   (0x0004)  MISSED
};

/// Class /Script/SpiderNavigation.SpiderNavGridTracer
/// Size: 0x0008 (0x000290 - 0x000298)
class ASpiderNavGridTracer : public AActor
{ 
public:
	class USphereComponent*                            CollisionComp;                                              // 0x0290   (0x0008)  
};

/// Class /Script/SpiderNavigation.SpiderNavigation
/// Size: 0x0078 (0x000290 - 0x000308)
class ASpiderNavigation : public AActor
{ 
public:
	unsigned char                                      UnknownData00_2[0x70];                                      // 0x0290   (0x0070)  MISSED
	bool                                               bAutoLoadGrid;                                              // 0x0300   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0301   (0x0003)  MISSED
	float                                              DebugLinesThickness;                                        // 0x0304   (0x0004)  


	/// Functions
	// Function /Script/SpiderNavigation.SpiderNavigation.LoadGrid
	// bool LoadGrid();                                                                                                      // [0x1916ff0] Final|Native|Public|BlueprintCallable 
	// Function /Script/SpiderNavigation.SpiderNavigation.GetNavNodesCount
	// int32_t GetNavNodesCount();                                                                                           // [0x1916fd0] Final|Native|Public|BlueprintCallable 
	// Function /Script/SpiderNavigation.SpiderNavigation.FindPath
	// TArray<FVector> FindPath(FVector Start, FVector End, bool& bFoundCompletePath);                                       // [0x1916e10] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/SpiderNavigation.SpiderNavigation.FindNextLocationAndNormal
	// bool FindNextLocationAndNormal(FVector CurrentLocation, FVector TargetLocation, FVector& NextLocation, FVector& Normal); // [0x1916c40] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/SpiderNavigation.SpiderNavigation.FindClosestNodeNormal
	// FVector FindClosestNodeNormal(FVector Location);                                                                      // [0x1916ae0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/SpiderNavigation.SpiderNavigation.FindClosestNodeLocation
	// FVector FindClosestNodeLocation(FVector Location);                                                                    // [0x1916980] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/SpiderNavigation.SpiderNavigation.DrawDebugRelations
	// void DrawDebugRelations();                                                                                            // [0x1916800] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/SpiderNavigation.SpiderNavPoint
/// Size: 0x0040 (0x000290 - 0x0002D0)
class ASpiderNavPoint : public AActor
{ 
public:
	class USphereComponent*                            CollisionComp;                                              // 0x0290   (0x0008)  
	unsigned char                                      UnknownData00_6[0x38];                                      // 0x0298   (0x0038)  MISSED
};

/// Class /Script/SpiderNavigation.SpiderNavPointEdge
/// Size: 0x0000 (0x0002D0 - 0x0002D0)
class ASpiderNavPointEdge : public ASpiderNavPoint
{ 
public:
};

/// Struct /Script/SpiderNavigation.SpiderNavRelations
/// Size: 0x0010 (0x000000 - 0x000010)
struct FSpiderNavRelations
{ 
	TArray<int32_t>                                    Neighbors;                                                  // 0x0000   (0x0010)  
};

/// Struct /Script/SpiderNavigation.SpiderNavNode
/// Size: 0x0060 (0x000000 - 0x000060)
struct FSpiderNavNode
{ 
	FVector                                            Location;                                                   // 0x0000   (0x0018)  
	FVector                                            Normal;                                                     // 0x0018   (0x0018)  
	int32_t                                            Index;                                                      // 0x0030   (0x0004)  
	unsigned char                                      UnknownData00_6[0x2C];                                      // 0x0034   (0x002C)  MISSED
};

