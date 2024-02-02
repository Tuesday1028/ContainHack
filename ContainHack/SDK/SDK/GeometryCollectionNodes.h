
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: Chaos
/// dependency: CoreUObject
/// dependency: DataflowCore
/// dependency: Engine

/// Enum /Script/GeometryCollectionNodes.EMakeBoxDataTypeEnum
/// Size: 0x03
enum class EMakeBoxDataTypeEnum : uint8_t
{
	EMakeBoxDataTypeEnum__Dataflow_MakeBox_DataType_MinMax                           = 0,
	EMakeBoxDataTypeEnum__Dataflow_MakeBox_DataType_CenterSize                       = 1,
	EMakeBoxDataTypeEnum__Dataflow_Max                                               = 2
};

/// Enum /Script/GeometryCollectionNodes.EFloatToIntFunctionEnum
/// Size: 0x05
enum class EFloatToIntFunctionEnum : uint8_t
{
	EFloatToIntFunctionEnum__Dataflow_FloatToInt_Function_Floor                      = 0,
	EFloatToIntFunctionEnum__Dataflow_FloatToInt_Function_Ceil                       = 1,
	EFloatToIntFunctionEnum__Dataflow_FloatToInt_Function_Round                      = 2,
	EFloatToIntFunctionEnum__Dataflow_FloatToInt_Function_Truncate                   = 3,
	EFloatToIntFunctionEnum__Dataflow_Max                                            = 4
};

/// Enum /Script/GeometryCollectionNodes.EMathConstantsEnum
/// Size: 0x15
enum class EMathConstantsEnum : uint8_t
{
	EMathConstantsEnum__Dataflow_MathConstants_Pi                                    = 0,
	EMathConstantsEnum__Dataflow_MathConstants_HalfPi                                = 1,
	EMathConstantsEnum__Dataflow_MathConstants_TwoPi                                 = 2,
	EMathConstantsEnum__Dataflow_MathConstants_FourPi                                = 3,
	EMathConstantsEnum__Dataflow_MathConstants_InvPi                                 = 4,
	EMathConstantsEnum__Dataflow_MathConstants_InvTwoPi                              = 5,
	EMathConstantsEnum__Dataflow_MathConstants_Sqrt2                                 = 6,
	EMathConstantsEnum__Dataflow_MathConstants_InvSqrt2                              = 7,
	EMathConstantsEnum__Dataflow_MathConstants_Sqrt3                                 = 8,
	EMathConstantsEnum__Dataflow_MathConstants_InvSqrt3                              = 9,
	EMathConstantsEnum__Dataflow_FloatToInt_Function_E                               = 10,
	EMathConstantsEnum__Dataflow_FloatToInt_Function_Gamma                           = 11,
	EMathConstantsEnum__Dataflow_FloatToInt_Function_GoldenRatio                     = 12,
	EMathConstantsEnum__Dataflow_FloatToInt_Function_ZeroTolerance                   = 13,
	EMathConstantsEnum__Dataflow_Max                                                 = 14
};

/// Struct /Script/GeometryCollectionNodes.CloseGeometryOnCollectionDataflowNode
/// Size: 0x00B0 (0x0000D0 - 0x000180)
struct FCloseGeometryOnCollectionDataflowNode : FDataflowNode
{ 
	FManagedArrayCollection                            Collection;                                                 // 0x00D0   (0x00B0)  
};

/// Struct /Script/GeometryCollectionNodes.SkeletalMeshToCollectionDataflowNode
/// Size: 0x00B8 (0x0000D0 - 0x000188)
struct FSkeletalMeshToCollectionDataflowNode : FDataflowNode
{ 
	class USkeletalMesh*                               SkeletalMesh;                                               // 0x00D0   (0x0008)  
	FManagedArrayCollection                            Collection;                                                 // 0x00D8   (0x00B0)  
};

/// Struct /Script/GeometryCollectionNodes.GenerateTetrahedralCollectionDataflowNodes
/// Size: 0x00B0 (0x0000D0 - 0x000180)
struct FGenerateTetrahedralCollectionDataflowNodes : FDataflowNode
{ 
	FManagedArrayCollection                            Collection;                                                 // 0x00D0   (0x00B0)  
};

/// Struct /Script/GeometryCollectionNodes.GetCollectionAssetDataflowNode
/// Size: 0x00B0 (0x0000D0 - 0x000180)
struct FGetCollectionAssetDataflowNode : FDataflowNode
{ 
	FManagedArrayCollection                            Output;                                                     // 0x00D0   (0x00B0)  
};

/// Struct /Script/GeometryCollectionNodes.ExampleCollectionEditDataflowNode
/// Size: 0x00B8 (0x0000D0 - 0x000188)
struct FExampleCollectionEditDataflowNode : FDataflowNode
{ 
	float                                              Scale;                                                      // 0x00D0   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x00D4   (0x0004)  MISSED
	FManagedArrayCollection                            Collection;                                                 // 0x00D8   (0x00B0)  
};

/// Struct /Script/GeometryCollectionNodes.SetCollectionAssetDataflowNode
/// Size: 0x00B0 (0x0000D0 - 0x000180)
struct FSetCollectionAssetDataflowNode : FDataflowNode
{ 
	FManagedArrayCollection                            Collection;                                                 // 0x00D0   (0x00B0)  
};

/// Struct /Script/GeometryCollectionNodes.ResetGeometryCollectionDataflowNode
/// Size: 0x00B0 (0x0000D0 - 0x000180)
struct FResetGeometryCollectionDataflowNode : FDataflowNode
{ 
	FManagedArrayCollection                            Collection;                                                 // 0x00D0   (0x00B0)  
};

/// Struct /Script/GeometryCollectionNodes.PrintStringDataflowNode
/// Size: 0x0020 (0x0000D0 - 0x0000F0)
struct FPrintStringDataflowNode : FDataflowNode
{ 
	bool                                               PrintToScreen;                                              // 0x00D0   (0x0001)  
	bool                                               PrintToLog;                                                 // 0x00D1   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x00D2   (0x0002)  MISSED
	FColor                                             Color;                                                      // 0x00D4   (0x0004)  
	float                                              Duration;                                                   // 0x00D8   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x00DC   (0x0004)  MISSED
	SDK_UNDEFINED(16,2432) /* FString */               __um(String);                                               // 0x00E0   (0x0010)  
};

/// Struct /Script/GeometryCollectionNodes.LogStringDataflowNode
/// Size: 0x0018 (0x0000D0 - 0x0000E8)
struct FLogStringDataflowNode : FDataflowNode
{ 
	bool                                               PrintToLog;                                                 // 0x00D0   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x00D1   (0x0007)  MISSED
	SDK_UNDEFINED(16,2433) /* FString */               __um(String);                                               // 0x00D8   (0x0010)  
};

/// Struct /Script/GeometryCollectionNodes.MakeLiteralStringDataflowNode
/// Size: 0x0020 (0x0000D0 - 0x0000F0)
struct FMakeLiteralStringDataflowNode : FDataflowNode
{ 
	SDK_UNDEFINED(16,2434) /* FString */               __um(Value);                                                // 0x00D0   (0x0010)  
	SDK_UNDEFINED(16,2435) /* FString */               __um(String);                                               // 0x00E0   (0x0010)  
};

/// Struct /Script/GeometryCollectionNodes.BoundingBoxDataflowNode
/// Size: 0x00E8 (0x0000D0 - 0x0001B8)
struct FBoundingBoxDataflowNode : FDataflowNode
{ 
	FManagedArrayCollection                            Collection;                                                 // 0x00D0   (0x00B0)  
	FBox                                               BoundingBox;                                                // 0x0180   (0x0038)  
};

/// Struct /Script/GeometryCollectionNodes.ExpandBoundingBoxDataflowNode
/// Size: 0x00A0 (0x0000D0 - 0x000170)
struct FExpandBoundingBoxDataflowNode : FDataflowNode
{ 
	FBox                                               BoundingBox;                                                // 0x00D0   (0x0038)  
	FVector                                            Min;                                                        // 0x0108   (0x0018)  
	FVector                                            Max;                                                        // 0x0120   (0x0018)  
	FVector                                            Center;                                                     // 0x0138   (0x0018)  
	FVector                                            HalfExtents;                                                // 0x0150   (0x0018)  
	float                                              Volume;                                                     // 0x0168   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x016C   (0x0004)  MISSED
};

/// Struct /Script/GeometryCollectionNodes.VectorToStringDataflowNode
/// Size: 0x0028 (0x0000D0 - 0x0000F8)
struct FVectorToStringDataflowNode : FDataflowNode
{ 
	FVector                                            Vector;                                                     // 0x00D0   (0x0018)  
	SDK_UNDEFINED(16,2436) /* FString */               __um(String);                                               // 0x00E8   (0x0010)  
};

/// Struct /Script/GeometryCollectionNodes.FloatToStringDataflowNode
/// Size: 0x0018 (0x0000D0 - 0x0000E8)
struct FFloatToStringDataflowNode : FDataflowNode
{ 
	float                                              float0;                                                     // 0x00D0   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x00D4   (0x0004)  MISSED
	SDK_UNDEFINED(16,2437) /* FString */               __um(String);                                               // 0x00D8   (0x0010)  
};

/// Struct /Script/GeometryCollectionNodes.MakePointsDataflowNode
/// Size: 0x0020 (0x0000D0 - 0x0000F0)
struct FMakePointsDataflowNode : FDataflowNode
{ 
	TArray<FVector>                                    Point;                                                      // 0x00D0   (0x0010)  
	TArray<FVector>                                    Points;                                                     // 0x00E0   (0x0010)  
};

/// Struct /Script/GeometryCollectionNodes.MakeBoxDataflowNode
/// Size: 0x00A0 (0x0000D0 - 0x000170)
struct FMakeBoxDataflowNode : FDataflowNode
{ 
	EMakeBoxDataTypeEnum                               DataType;                                                   // 0x00D0   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x00D1   (0x0007)  MISSED
	FVector                                            Min;                                                        // 0x00D8   (0x0018)  
	FVector                                            Max;                                                        // 0x00F0   (0x0018)  
	FVector                                            Center;                                                     // 0x0108   (0x0018)  
	FVector                                            Size;                                                       // 0x0120   (0x0018)  
	FBox                                               Box;                                                        // 0x0138   (0x0038)  
};

/// Struct /Script/GeometryCollectionNodes.UniformScatterPointsDataflowNode
/// Size: 0x0058 (0x0000D0 - 0x000128)
struct FUniformScatterPointsDataflowNode : FDataflowNode
{ 
	int32_t                                            MinNumberOfPoints;                                          // 0x00D0   (0x0004)  
	int32_t                                            MaxNumberOfPoints;                                          // 0x00D4   (0x0004)  
	float                                              RandomSeed;                                                 // 0x00D8   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x00DC   (0x0004)  MISSED
	FBox                                               BoundingBox;                                                // 0x00E0   (0x0038)  
	TArray<FVector>                                    Points;                                                     // 0x0118   (0x0010)  
};

/// Struct /Script/GeometryCollectionNodes.RadialScatterPointsDataflowNode
/// Size: 0x0058 (0x0000D0 - 0x000128)
struct FRadialScatterPointsDataflowNode : FDataflowNode
{ 
	FVector                                            Center;                                                     // 0x00D0   (0x0018)  
	FVector                                            Normal;                                                     // 0x00E8   (0x0018)  
	float                                              Radius;                                                     // 0x0100   (0x0004)  
	int32_t                                            AngularSteps;                                               // 0x0104   (0x0004)  
	int32_t                                            RadialSteps;                                                // 0x0108   (0x0004)  
	float                                              AngleOffset;                                                // 0x010C   (0x0004)  
	float                                              Variability;                                                // 0x0110   (0x0004)  
	float                                              RandomSeed;                                                 // 0x0114   (0x0004)  
	TArray<FVector>                                    Points;                                                     // 0x0118   (0x0010)  
};

/// Struct /Script/GeometryCollectionNodes.MakeLiteralFloatDataflowNode
/// Size: 0x0008 (0x0000D0 - 0x0000D8)
struct FMakeLiteralFloatDataflowNode : FDataflowNode
{ 
	float                                              Value;                                                      // 0x00D0   (0x0004)  
	float                                              float0;                                                     // 0x00D4   (0x0004)  
};

/// Struct /Script/GeometryCollectionNodes.MakeLiteralIntDataflowNode
/// Size: 0x0008 (0x0000D0 - 0x0000D8)
struct FMakeLiteralIntDataflowNode : FDataflowNode
{ 
	int32_t                                            Value;                                                      // 0x00D0   (0x0004)  
	int32_t                                            Int;                                                        // 0x00D4   (0x0004)  
};

/// Struct /Script/GeometryCollectionNodes.MakeLiteralBoolDataflowNode
/// Size: 0x0008 (0x0000D0 - 0x0000D8)
struct FMakeLiteralBoolDataflowNode : FDataflowNode
{ 
	bool                                               Value;                                                      // 0x00D0   (0x0001)  
	bool                                               bool0;                                                      // 0x00D1   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x00D2   (0x0006)  MISSED
};

/// Struct /Script/GeometryCollectionNodes.MakeLiteralVectorDataflowNode
/// Size: 0x0030 (0x0000D0 - 0x000100)
struct FMakeLiteralVectorDataflowNode : FDataflowNode
{ 
	FVector                                            Value;                                                      // 0x00D0   (0x0018)  
	FVector                                            Vector;                                                     // 0x00E8   (0x0018)  
};

/// Struct /Script/GeometryCollectionNodes.IntToStringDataflowNode
/// Size: 0x0018 (0x0000D0 - 0x0000E8)
struct FIntToStringDataflowNode : FDataflowNode
{ 
	int32_t                                            Int;                                                        // 0x00D0   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x00D4   (0x0004)  MISSED
	SDK_UNDEFINED(16,2438) /* FString */               __um(String);                                               // 0x00D8   (0x0010)  
};

/// Struct /Script/GeometryCollectionNodes.BoolToStringDataflowNode
/// Size: 0x0018 (0x0000D0 - 0x0000E8)
struct FBoolToStringDataflowNode : FDataflowNode
{ 
	bool                                               bool0;                                                      // 0x00D0   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x00D1   (0x0007)  MISSED
	SDK_UNDEFINED(16,2439) /* FString */               __um(String);                                               // 0x00D8   (0x0010)  
};

/// Struct /Script/GeometryCollectionNodes.ExpandVectorDataflowNode
/// Size: 0x0028 (0x0000D0 - 0x0000F8)
struct FExpandVectorDataflowNode : FDataflowNode
{ 
	FVector                                            Vector;                                                     // 0x00D0   (0x0018)  
	float                                              X;                                                          // 0x00E8   (0x0004)  
	float                                              Y;                                                          // 0x00EC   (0x0004)  
	float                                              Z;                                                          // 0x00F0   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x00F4   (0x0004)  MISSED
};

/// Struct /Script/GeometryCollectionNodes.IntToFloatDataflowNode
/// Size: 0x0008 (0x0000D0 - 0x0000D8)
struct FIntToFloatDataflowNode : FDataflowNode
{ 
	int32_t                                            Int;                                                        // 0x00D0   (0x0004)  
	float                                              float0;                                                     // 0x00D4   (0x0004)  
};

/// Struct /Script/GeometryCollectionNodes.VoronoiFractureDataflowNode
/// Size: 0x00F0 (0x0000D0 - 0x0001C0)
struct FVoronoiFractureDataflowNode : FDataflowNode
{ 
	FManagedArrayCollection                            Collection;                                                 // 0x00D0   (0x00B0)  
	TArray<FVector>                                    Points;                                                     // 0x0180   (0x0010)  
	float                                              RandomSeed;                                                 // 0x0190   (0x0004)  
	float                                              ChanceToFracture;                                           // 0x0194   (0x0004)  
	bool                                               GroupFracture;                                              // 0x0198   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0199   (0x0003)  MISSED
	float                                              Grout;                                                      // 0x019C   (0x0004)  
	float                                              Amplitude;                                                  // 0x01A0   (0x0004)  
	float                                              Frequency;                                                  // 0x01A4   (0x0004)  
	float                                              Persistence;                                                // 0x01A8   (0x0004)  
	float                                              Lacunarity;                                                 // 0x01AC   (0x0004)  
	int32_t                                            OctaveNumber;                                               // 0x01B0   (0x0004)  
	float                                              PointSpacing;                                               // 0x01B4   (0x0004)  
	bool                                               AddSamplesForCollision;                                     // 0x01B8   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x01B9   (0x0003)  MISSED
	float                                              CollisionSampleSpacing;                                     // 0x01BC   (0x0004)  
};

/// Struct /Script/GeometryCollectionNodes.StringAppendDataflowNode
/// Size: 0x0030 (0x0000D0 - 0x000100)
struct FStringAppendDataflowNode : FDataflowNode
{ 
	SDK_UNDEFINED(16,2440) /* FString */               __um(String1);                                              // 0x00D0   (0x0010)  
	SDK_UNDEFINED(16,2441) /* FString */               __um(String2);                                              // 0x00E0   (0x0010)  
	SDK_UNDEFINED(16,2442) /* FString */               __um(String);                                               // 0x00F0   (0x0010)  
};

/// Struct /Script/GeometryCollectionNodes.RandomFloatDataflowNode
/// Size: 0x0010 (0x0000D0 - 0x0000E0)
struct FRandomFloatDataflowNode : FDataflowNode
{ 
	bool                                               Deterministic;                                              // 0x00D0   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x00D1   (0x0003)  MISSED
	float                                              RandomSeed;                                                 // 0x00D4   (0x0004)  
	float                                              float0;                                                     // 0x00D8   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x00DC   (0x0004)  MISSED
};

/// Struct /Script/GeometryCollectionNodes.RandomFloatInRangeDataflowNode
/// Size: 0x0018 (0x0000D0 - 0x0000E8)
struct FRandomFloatInRangeDataflowNode : FDataflowNode
{ 
	bool                                               Deterministic;                                              // 0x00D0   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x00D1   (0x0003)  MISSED
	float                                              RandomSeed;                                                 // 0x00D4   (0x0004)  
	float                                              Min;                                                        // 0x00D8   (0x0004)  
	float                                              Max;                                                        // 0x00DC   (0x0004)  
	float                                              float0;                                                     // 0x00E0   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x00E4   (0x0004)  MISSED
};

/// Struct /Script/GeometryCollectionNodes.RandomUnitVectorDataflowNode
/// Size: 0x0020 (0x0000D0 - 0x0000F0)
struct FRandomUnitVectorDataflowNode : FDataflowNode
{ 
	bool                                               Deterministic;                                              // 0x00D0   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x00D1   (0x0003)  MISSED
	float                                              RandomSeed;                                                 // 0x00D4   (0x0004)  
	FVector                                            Vector;                                                     // 0x00D8   (0x0018)  
};

/// Struct /Script/GeometryCollectionNodes.RandomUnitVectorInConeDataflowNode
/// Size: 0x0040 (0x0000D0 - 0x000110)
struct FRandomUnitVectorInConeDataflowNode : FDataflowNode
{ 
	bool                                               Deterministic;                                              // 0x00D0   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x00D1   (0x0003)  MISSED
	float                                              RandomSeed;                                                 // 0x00D4   (0x0004)  
	FVector                                            ConeDirection;                                              // 0x00D8   (0x0018)  
	float                                              ConeHalfAngle;                                              // 0x00F0   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x00F4   (0x0004)  MISSED
	FVector                                            Vector;                                                     // 0x00F8   (0x0018)  
};

/// Struct /Script/GeometryCollectionNodes.RadiansToDegreesDataflowNode
/// Size: 0x0008 (0x0000D0 - 0x0000D8)
struct FRadiansToDegreesDataflowNode : FDataflowNode
{ 
	float                                              Radians;                                                    // 0x00D0   (0x0004)  
	float                                              Degrees;                                                    // 0x00D4   (0x0004)  
};

/// Struct /Script/GeometryCollectionNodes.DegreesToRadiansDataflowNode
/// Size: 0x0008 (0x0000D0 - 0x0000D8)
struct FDegreesToRadiansDataflowNode : FDataflowNode
{ 
	float                                              Degrees;                                                    // 0x00D0   (0x0004)  
	float                                              Radians;                                                    // 0x00D4   (0x0004)  
};

/// Struct /Script/GeometryCollectionNodes.ExplodedViewDataflowNode
/// Size: 0x00D0 (0x0000D0 - 0x0001A0)
struct FExplodedViewDataflowNode : FDataflowNode
{ 
	FManagedArrayCollection                            Collection;                                                 // 0x00D0   (0x00B0)  
	float                                              UniformScale;                                               // 0x0180   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0184   (0x0004)  MISSED
	FVector                                            Scale;                                                      // 0x0188   (0x0018)  
};

/// Struct /Script/GeometryCollectionNodes.CreateNonOverlappingConvexHullsDataflowNode
/// Size: 0x00C0 (0x0000D0 - 0x000190)
struct FCreateNonOverlappingConvexHullsDataflowNode : FDataflowNode
{ 
	FManagedArrayCollection                            Collection;                                                 // 0x00D0   (0x00B0)  
	float                                              CanRemoveFraction;                                          // 0x0180   (0x0004)  
	float                                              CanExceedFraction;                                          // 0x0184   (0x0004)  
	float                                              SimplificationDistanceThreshold;                            // 0x0188   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x018C   (0x0004)  MISSED
};

/// Struct /Script/GeometryCollectionNodes.PlaneCutterDataflowNode
/// Size: 0x0118 (0x0000D0 - 0x0001E8)
struct FPlaneCutterDataflowNode : FDataflowNode
{ 
	FManagedArrayCollection                            Collection;                                                 // 0x00D0   (0x00B0)  
	FBox                                               BoundingBox;                                                // 0x0180   (0x0038)  
	int32_t                                            NumPlanes;                                                  // 0x01B8   (0x0004)  
	float                                              RandomSeed;                                                 // 0x01BC   (0x0004)  
	float                                              Grout;                                                      // 0x01C0   (0x0004)  
	float                                              Amplitude;                                                  // 0x01C4   (0x0004)  
	float                                              Frequency;                                                  // 0x01C8   (0x0004)  
	float                                              Persistence;                                                // 0x01CC   (0x0004)  
	float                                              Lacunarity;                                                 // 0x01D0   (0x0004)  
	int32_t                                            OctaveNumber;                                               // 0x01D4   (0x0004)  
	float                                              PointSpacing;                                               // 0x01D8   (0x0004)  
	bool                                               AddSamplesForCollision;                                     // 0x01DC   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x01DD   (0x0003)  MISSED
	float                                              CollisionSampleSpacing;                                     // 0x01E0   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x01E4   (0x0004)  MISSED
};

/// Struct /Script/GeometryCollectionNodes.HashStringDataflowNode
/// Size: 0x0018 (0x0000D0 - 0x0000E8)
struct FHashStringDataflowNode : FDataflowNode
{ 
	SDK_UNDEFINED(16,2443) /* FString */               __um(String);                                               // 0x00D0   (0x0010)  
	int32_t                                            Hash;                                                       // 0x00E0   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x00E4   (0x0004)  MISSED
};

/// Struct /Script/GeometryCollectionNodes.HashVectorDataflowNode
/// Size: 0x0020 (0x0000D0 - 0x0000F0)
struct FHashVectorDataflowNode : FDataflowNode
{ 
	FVector                                            Vector;                                                     // 0x00D0   (0x0018)  
	int32_t                                            Hash;                                                       // 0x00E8   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x00EC   (0x0004)  MISSED
};

/// Struct /Script/GeometryCollectionNodes.FloatToIntDataflowNode
/// Size: 0x0010 (0x0000D0 - 0x0000E0)
struct FFloatToIntDataflowNode : FDataflowNode
{ 
	EFloatToIntFunctionEnum                            Function;                                                   // 0x00D0   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x00D1   (0x0003)  MISSED
	float                                              float0;                                                     // 0x00D4   (0x0004)  
	int32_t                                            Int;                                                        // 0x00D8   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x00DC   (0x0004)  MISSED
};

/// Struct /Script/GeometryCollectionNodes.MathConstantsDataflowNode
/// Size: 0x0008 (0x0000D0 - 0x0000D8)
struct FMathConstantsDataflowNode : FDataflowNode
{ 
	EMathConstantsEnum                                 Constant;                                                   // 0x00D0   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x00D1   (0x0003)  MISSED
	float                                              float0;                                                     // 0x00D4   (0x0004)  
};

