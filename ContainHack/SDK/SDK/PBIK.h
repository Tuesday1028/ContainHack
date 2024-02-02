
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: ControlRig
/// dependency: CoreUObject
/// dependency: RigVM

/// Enum /Script/PBIK.EPBIKLimitType
/// Size: 0x04
enum class EPBIKLimitType : uint8_t
{
	EPBIKLimitType__Free                                                             = 0,
	EPBIKLimitType__Limited                                                          = 1,
	EPBIKLimitType__Locked                                                           = 2,
	EPBIKLimitType__EPBIKLimitType_MAX                                               = 3
};

/// Enum /Script/PBIK.EPBIKRootBehavior
/// Size: 0x04
enum class EPBIKRootBehavior : uint8_t
{
	EPBIKRootBehavior__PrePull                                                       = 0,
	EPBIKRootBehavior__PinToInput                                                    = 1,
	EPBIKRootBehavior__Free                                                          = 2,
	EPBIKRootBehavior__EPBIKRootBehavior_MAX                                         = 3
};

/// Struct /Script/PBIK.PBIKBoneSetting
/// Size: 0x0050 (0x000000 - 0x000050)
struct FPBIKBoneSetting
{ 
	FName                                              bone;                                                       // 0x0000   (0x0008)  
	float                                              RotationStiffness;                                          // 0x0008   (0x0004)  
	float                                              PositionStiffness;                                          // 0x000C   (0x0004)  
	EPBIKLimitType                                     X;                                                          // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0011   (0x0003)  MISSED
	float                                              MinX;                                                       // 0x0014   (0x0004)  
	float                                              MaxX;                                                       // 0x0018   (0x0004)  
	EPBIKLimitType                                     Y;                                                          // 0x001C   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x001D   (0x0003)  MISSED
	float                                              MinY;                                                       // 0x0020   (0x0004)  
	float                                              MaxY;                                                       // 0x0024   (0x0004)  
	EPBIKLimitType                                     Z;                                                          // 0x0028   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x0029   (0x0003)  MISSED
	float                                              MinZ;                                                       // 0x002C   (0x0004)  
	float                                              MaxZ;                                                       // 0x0030   (0x0004)  
	bool                                               bUsePreferredAngles;                                        // 0x0034   (0x0001)  
	unsigned char                                      UnknownData03_5[0x3];                                       // 0x0035   (0x0003)  MISSED
	FVector                                            PreferredAngles;                                            // 0x0038   (0x0018)  
};

/// Struct /Script/PBIK.PBIKSolverSettings
/// Size: 0x0010 (0x000000 - 0x000010)
struct FPBIKSolverSettings
{ 
	int32_t                                            Iterations;                                                 // 0x0000   (0x0004)  
	float                                              MassMultiplier;                                             // 0x0004   (0x0004)  
	float                                              MinMassMultiplier;                                          // 0x0008   (0x0004)  
	bool                                               bAllowStretch;                                              // 0x000C   (0x0001)  
	EPBIKRootBehavior                                  RootBehavior;                                               // 0x000D   (0x0001)  
	bool                                               bStartSolveFromInputPose;                                   // 0x000E   (0x0001)  
	unsigned char                                      UnknownData00_6[0x1];                                       // 0x000F   (0x0001)  MISSED
};

/// Struct /Script/PBIK.PBIKSolver
/// Size: 0x0068 (0x000000 - 0x000068)
struct FPBIKSolver
{ 
	unsigned char                                      UnknownData00_1[0x68];                                      // 0x0000   (0x0068)  MISSED
};

/// Struct /Script/PBIK.PBIKDebug
/// Size: 0x0008 (0x000000 - 0x000008)
struct FPBIKDebug
{ 
	float                                              DrawScale;                                                  // 0x0000   (0x0004)  
	bool                                               bDrawDebug;                                                 // 0x0004   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0005   (0x0003)  MISSED
};

/// Struct /Script/PBIK.PBIKEffector
/// Size: 0x0090 (0x000000 - 0x000090)
struct FPBIKEffector
{ 
	FName                                              bone;                                                       // 0x0000   (0x0008)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x0008   (0x0008)  MISSED
	FTransform                                         Transform;                                                  // 0x0010   (0x0060)  
	float                                              PositionAlpha;                                              // 0x0070   (0x0004)  
	float                                              RotationAlpha;                                              // 0x0074   (0x0004)  
	float                                              StrengthAlpha;                                              // 0x0078   (0x0004)  
	float                                              PullChainAlpha;                                             // 0x007C   (0x0004)  
	float                                              PinRotation;                                                // 0x0080   (0x0004)  
	unsigned char                                      UnknownData01_6[0xC];                                       // 0x0084   (0x000C)  MISSED
};

/// Struct /Script/PBIK.RigUnit_PBIK
/// Size: 0x00F0 (0x000040 - 0x000130)
struct FRigUnit_PBIK : FRigUnit_HighlevelBaseMutable
{ 
	FName                                              Root;                                                       // 0x0040   (0x0008)  
	TArray<FPBIKEffector>                              Effectors;                                                  // 0x0048   (0x0010)  
	TArray<int32_t>                                    EffectorSolverIndices;                                      // 0x0058   (0x0010)  
	TArray<FPBIKBoneSetting>                           BoneSettings;                                               // 0x0068   (0x0010)  
	TArray<FName>                                      ExcludedBones;                                              // 0x0078   (0x0010)  
	FPBIKSolverSettings                                Settings;                                                   // 0x0088   (0x0010)  
	FPBIKDebug                                         Debug;                                                      // 0x0098   (0x0008)  
	TArray<int32_t>                                    BoneSettingToSolverBoneIndex;                               // 0x00A0   (0x0010)  
	TArray<int32_t>                                    SolverBoneToElementIndex;                                   // 0x00B0   (0x0010)  
	FPBIKSolver                                        Solver;                                                     // 0x00C0   (0x0068)  
	bool                                               bNeedsInit;                                                 // 0x0128   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0129   (0x0007)  MISSED
};

