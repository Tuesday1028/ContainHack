#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x100 (0x390 - 0x290)
// Class SpiderNavigation.SpiderNavGridBuilder
class USpiderNavGridBuilder : public UActor
{
public:
	class UBoxComponent*                         VolumeBox;                                         // 0x290(0x8)(Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class USpiderNavGridTracer>      TracerActorBP;                                     // 0x298(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class USpiderNavPoint>           NavPointActorBP;                                   // 0x2A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class USpiderNavPointEdge>       NavPointEdgeActorBP;                               // 0x2A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        GridStepSize;                                      // 0x2B0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_951[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UActor*>                        ActorsWhiteList;                                   // 0x2B8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         bUseActorWhiteList;                                // 0x2C8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_952[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UActor*>                        ActorsBlackList;                                   // 0x2D0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         bUseActorBlackList;                                // 0x2E0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAutoRemoveTracers;                                // 0x2E1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAutoSaveGrid;                                     // 0x2E2(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_953[0x1];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        BounceNavDistance;                                 // 0x2E4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TraceDistanceModificator;                          // 0x2E8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ClosePointsFilterModificator;                      // 0x2EC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ConnectionSphereRadiusModificator;                 // 0x2F0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TraceDistanceForEdgesModificator;                  // 0x2F4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        EgdeDeviationModificator;                          // 0x2F8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_954[0x94];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USpiderNavGridBuilder* GetDefaultObj();

	void SaveGrid();
	void DrawDebugRelations();
	int32 BuildGrid();
};

// 0x108 (0x130 - 0x28)
// Class SpiderNavigation.SpiderNavGridSaveGame
class USpiderNavGridSaveGame : public USaveGame
{
public:
	TMap<int32, struct FVector>                  NavLocations;                                      // 0x28(0x50)(NativeAccessSpecifierPublic)
	TMap<int32, struct FVector>                  NavNormals;                                        // 0x78(0x50)(NativeAccessSpecifierPublic)
	TMap<int32, struct FSpiderNavRelations>      NavRelations;                                      // 0xC8(0x50)(NativeAccessSpecifierPublic)
	class FString                                SaveSlotName;                                      // 0x118(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                       UserIndex;                                         // 0x128(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_95B[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USpiderNavGridSaveGame* GetDefaultObj();

};

// 0x8 (0x298 - 0x290)
// Class SpiderNavigation.SpiderNavGridTracer
class USpiderNavGridTracer : public UActor
{
public:
	class USphereComponent*                      CollisionComp;                                     // 0x290(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class USpiderNavGridTracer* GetDefaultObj();

};

// 0x78 (0x308 - 0x290)
// Class SpiderNavigation.SpiderNavigation
class USpiderNavigation : public UActor
{
public:
	uint8                                        Pad_979[0x70];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bAutoLoadGrid;                                     // 0x300(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_97A[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        DebugLinesThickness;                               // 0x304(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class USpiderNavigation* GetDefaultObj();

	bool LoadGrid();
	int32 GetNavNodesCount();
	TArray<struct FVector> FindPath(const struct FVector& Start, const struct FVector& End, bool* bFoundCompletePath);
	bool FindNextLocationAndNormal(const struct FVector& CurrentLocation, const struct FVector& TargetLocation, struct FVector* NextLocation, struct FVector* Normal);
	struct FVector FindClosestNodeNormal(const struct FVector& Location);
	struct FVector FindClosestNodeLocation(const struct FVector& Location);
	void DrawDebugRelations();
};

// 0x40 (0x2D0 - 0x290)
// Class SpiderNavigation.SpiderNavPoint
class USpiderNavPoint : public UActor
{
public:
	class USphereComponent*                      CollisionComp;                                     // 0x290(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_97E[0x38];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USpiderNavPoint* GetDefaultObj();

};

// 0x0 (0x2D0 - 0x2D0)
// Class SpiderNavigation.SpiderNavPointEdge
class USpiderNavPointEdge : public USpiderNavPoint
{
public:

	static class UClass* StaticClass();
	static class USpiderNavPointEdge* GetDefaultObj();

};

}


