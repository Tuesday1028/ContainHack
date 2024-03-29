
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

/// Enum /Script/MotionWarping.ERootMotionModifierState
/// Size: 0x05
enum class ERootMotionModifierState : uint8_t
{
	ERootMotionModifierState__Waiting                                                = 0,
	ERootMotionModifierState__Active                                                 = 1,
	ERootMotionModifierState__MarkedForRemoval                                       = 2,
	ERootMotionModifierState__Disabled                                               = 3,
	ERootMotionModifierState__ERootMotionModifierState_MAX                           = 4
};

/// Enum /Script/MotionWarping.EMotionWarpRotationType
/// Size: 0x03
enum class EMotionWarpRotationType : uint8_t
{
	EMotionWarpRotationType__Default                                                 = 0,
	EMotionWarpRotationType__Facing                                                  = 1,
	EMotionWarpRotationType__EMotionWarpRotationType_MAX                             = 2
};

/// Enum /Script/MotionWarping.EWarpPointAnimProvider
/// Size: 0x04
enum class EWarpPointAnimProvider : uint8_t
{
	EWarpPointAnimProvider__None                                                     = 0,
	EWarpPointAnimProvider__Static                                                   = 1,
	EWarpPointAnimProvider__Bone                                                     = 2,
	EWarpPointAnimProvider__EWarpPointAnimProvider_MAX                               = 3
};

/// Class /Script/MotionWarping.AnimNotifyState_MotionWarping
/// Size: 0x0008 (0x000030 - 0x000038)
class UAnimNotifyState_MotionWarping : public UAnimNotifyState
{ 
public:
	class URootMotionModifier*                         RootMotionModifier;                                         // 0x0030   (0x0008)  


	/// Functions
	// Function /Script/MotionWarping.AnimNotifyState_MotionWarping.OnWarpUpdate
	// void OnWarpUpdate(class UMotionWarpingComponent* MotionWarpingComp, class URootMotionModifier* Modifier);             // [0x2119480] Event|Public|BlueprintEvent|Const 
	// Function /Script/MotionWarping.AnimNotifyState_MotionWarping.OnWarpEnd
	// void OnWarpEnd(class UMotionWarpingComponent* MotionWarpingComp, class URootMotionModifier* Modifier);                // [0x2119480] Event|Public|BlueprintEvent|Const 
	// Function /Script/MotionWarping.AnimNotifyState_MotionWarping.OnWarpBegin
	// void OnWarpBegin(class UMotionWarpingComponent* MotionWarpingComp, class URootMotionModifier* Modifier);              // [0x2119480] Event|Public|BlueprintEvent|Const 
	// Function /Script/MotionWarping.AnimNotifyState_MotionWarping.OnRootMotionModifierUpdate
	// void OnRootMotionModifierUpdate(class UMotionWarpingComponent* MotionWarpingComp, class URootMotionModifier* Modifier); // [0x174f120] Final|Native|Public|Const 
	// Function /Script/MotionWarping.AnimNotifyState_MotionWarping.OnRootMotionModifierDeactivate
	// void OnRootMotionModifierDeactivate(class UMotionWarpingComponent* MotionWarpingComp, class URootMotionModifier* Modifier); // [0x174f020] Final|Native|Public|Const 
	// Function /Script/MotionWarping.AnimNotifyState_MotionWarping.OnRootMotionModifierActivate
	// void OnRootMotionModifierActivate(class UMotionWarpingComponent* MotionWarpingComp, class URootMotionModifier* Modifier); // [0x174ef20] Final|Native|Public|Const 
	// Function /Script/MotionWarping.AnimNotifyState_MotionWarping.AddRootMotionModifier
	// class URootMotionModifier* AddRootMotionModifier(class UMotionWarpingComponent* MotionWarpingComp, class UAnimSequenceBase* Animation, float StartTime, float EndTime); // [0x174dc80] Native|Event|Public|BlueprintEvent|Const 
};

/// Class /Script/MotionWarping.MotionWarpingUtilities
/// Size: 0x0000 (0x000028 - 0x000028)
class UMotionWarpingUtilities : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/MotionWarping.MotionWarpingUtilities.GetMotionWarpingWindowsFromAnimation
	// void GetMotionWarpingWindowsFromAnimation(class UAnimSequenceBase* Animation, TArray<FMotionWarpingWindowData>& OutWindows); // [0x174ed40] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MotionWarping.MotionWarpingUtilities.GetMotionWarpingWindowsForWarpTargetFromAnimation
	// void GetMotionWarpingWindowsForWarpTargetFromAnimation(class UAnimSequenceBase* Animation, FName WarpTargetName, TArray<FMotionWarpingWindowData>& OutWindows); // [0x174ea80] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MotionWarping.MotionWarpingUtilities.ExtractRootMotionFromAnimation
	// FTransform ExtractRootMotionFromAnimation(class UAnimSequenceBase* Animation, float StartTime, float EndTime);        // [0x174e710] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
};

/// Struct /Script/MotionWarping.MotionWarpingTarget
/// Size: 0x0050 (0x000000 - 0x000050)
struct FMotionWarpingTarget
{ 
	FName                                              Name;                                                       // 0x0000   (0x0008)  
	FVector                                            Location;                                                   // 0x0008   (0x0018)  
	FRotator                                           Rotation;                                                   // 0x0020   (0x0018)  
	SDK_UNDEFINED(8,2509) /* TWeakObjectPtr<USceneComponent*> */ __um(Component);                                  // 0x0038   (0x0008)  
	FName                                              BoneName;                                                   // 0x0040   (0x0008)  
	bool                                               bFollowComponent;                                           // 0x0048   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0049   (0x0007)  MISSED
};

/// Class /Script/MotionWarping.MotionWarpingComponent
/// Size: 0x0040 (0x0000A0 - 0x0000E0)
class UMotionWarpingComponent : public UActorComponent
{ 
public:
	bool                                               bSearchForWindowsInAnimsWithinMontages;                     // 0x00A0   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x00A1   (0x0007)  MISSED
	SDK_UNDEFINED(16,2510) /* FMulticastInlineDelegate */ __um(OnPreUpdate);                                       // 0x00A8   (0x0010)  
	SDK_UNDEFINED(8,2511) /* TWeakObjectPtr<ACharacter*> */ __um(CharacterOwner);                                  // 0x00B8   (0x0008)  
	TArray<class URootMotionModifier*>                 Modifiers;                                                  // 0x00C0   (0x0010)  
	TArray<FMotionWarpingTarget>                       WarpTargets;                                                // 0x00D0   (0x0010)  


	/// Functions
	// Function /Script/MotionWarping.MotionWarpingComponent.RemoveWarpTarget
	// int32_t RemoveWarpTarget(FName WarpTargetName);                                                                       // [0x174f220] Final|Native|Public|BlueprintCallable 
	// Function /Script/MotionWarping.MotionWarpingComponent.DisableAllRootMotionModifiers
	// void DisableAllRootMotionModifiers();                                                                                 // [0x174e680] Final|Native|Public|BlueprintCallable 
	// Function /Script/MotionWarping.MotionWarpingComponent.AddOrUpdateWarpTargetFromTransform
	// void AddOrUpdateWarpTargetFromTransform(FName WarpTargetName, FTransform TargetTransform);                            // [0x174db00] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/MotionWarping.MotionWarpingComponent.AddOrUpdateWarpTargetFromLocationAndRotation
	// void AddOrUpdateWarpTargetFromLocationAndRotation(FName WarpTargetName, FVector TargetLocation, FRotator TargetRotation); // [0x174d960] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/MotionWarping.MotionWarpingComponent.AddOrUpdateWarpTargetFromLocation
	// void AddOrUpdateWarpTargetFromLocation(FName WarpTargetName, FVector TargetLocation);                                 // [0x174d830] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/MotionWarping.MotionWarpingComponent.AddOrUpdateWarpTargetFromComponent
	// void AddOrUpdateWarpTargetFromComponent(FName WarpTargetName, class USceneComponent* Component, FName BoneName, bool bFollowComponent); // [0x174d590] Final|Native|Public|BlueprintCallable 
	// Function /Script/MotionWarping.MotionWarpingComponent.AddOrUpdateWarpTarget
	// void AddOrUpdateWarpTarget(FMotionWarpingTarget& WarpTarget);                                                         // [0x174d4b0] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/MotionWarping.RootMotionModifier
/// Size: 0x00C8 (0x000028 - 0x0000F0)
class URootMotionModifier : public UObject
{ 
public:
	SDK_UNDEFINED(8,2512) /* TWeakObjectPtr<UAnimSequenceBase*> */ __um(Animation);                                // 0x0028   (0x0008)  
	float                                              StartTime;                                                  // 0x0030   (0x0004)  
	float                                              EndTime;                                                    // 0x0034   (0x0004)  
	float                                              PreviousPosition;                                           // 0x0038   (0x0004)  
	float                                              CurrentPosition;                                            // 0x003C   (0x0004)  
	float                                              Weight;                                                     // 0x0040   (0x0004)  
	unsigned char                                      UnknownData00_5[0xC];                                       // 0x0044   (0x000C)  MISSED
	FTransform                                         StartTransform;                                             // 0x0050   (0x0060)  
	float                                              ActualStartTime;                                            // 0x00B0   (0x0004)  
	SDK_UNDEFINED(16,2513) /* FDelegateProperty */     __um(OnActivateDelegate);                                   // 0x00B4   (0x0010)  
	SDK_UNDEFINED(16,2514) /* FDelegateProperty */     __um(OnUpdateDelegate);                                     // 0x00C4   (0x0010)  
	SDK_UNDEFINED(16,2515) /* FDelegateProperty */     __um(OnDeactivateDelegate);                                 // 0x00D4   (0x0010)  
	ERootMotionModifierState                           State;                                                      // 0x00E4   (0x0001)  
	unsigned char                                      UnknownData01_6[0xB];                                       // 0x00E5   (0x000B)  MISSED
};

/// Class /Script/MotionWarping.RootMotionModifier_Warp
/// Size: 0x0160 (0x0000F0 - 0x000250)
class URootMotionModifier_Warp : public URootMotionModifier
{ 
public:
	FName                                              WarpTargetName;                                             // 0x00E8   (0x0008)  
	EWarpPointAnimProvider                             WarpPointAnimProvider;                                      // 0x00F0   (0x0001)  
	unsigned char                                      UnknownData00_5[0xF];                                       // 0x00F1   (0x000F)  MISSED
	FTransform                                         WarpPointAnimTransform;                                     // 0x0100   (0x0060)  
	FName                                              WarpPointAnimBoneName;                                      // 0x0160   (0x0008)  
	bool                                               bWarpTranslation;                                           // 0x0168   (0x0001)  
	bool                                               bIgnoreZAxis;                                               // 0x0169   (0x0001)  
	EAlphaBlendOption                                  AddTranslationEasingFunc;                                   // 0x016A   (0x0001)  
	unsigned char                                      UnknownData01_5[0x5];                                       // 0x016B   (0x0005)  MISSED
	class UCurveFloat*                                 AddTranslationEasingCurve;                                  // 0x0170   (0x0008)  
	bool                                               bWarpRotation;                                              // 0x0178   (0x0001)  
	EMotionWarpRotationType                            RotationType;                                               // 0x0179   (0x0001)  
	unsigned char                                      UnknownData02_5[0x2];                                       // 0x017A   (0x0002)  MISSED
	float                                              WarpRotationTimeMultiplier;                                 // 0x017C   (0x0004)  
	FTransform                                         CachedTargetTransform;                                      // 0x0180   (0x0060)  
	unsigned char                                      UnknownData03_6[0x70];                                      // 0x01E0   (0x0070)  MISSED
};

/// Class /Script/MotionWarping.RootMotionModifier_SimpleWarp
/// Size: 0x0000 (0x000250 - 0x000250)
class URootMotionModifier_SimpleWarp : public URootMotionModifier_Warp
{ 
public:
};

/// Class /Script/MotionWarping.RootMotionModifier_Scale
/// Size: 0x0010 (0x0000F0 - 0x000100)
class URootMotionModifier_Scale : public URootMotionModifier
{ 
public:
	FVector                                            Scale;                                                      // 0x00E8   (0x0018)  


	/// Functions
	// Function /Script/MotionWarping.RootMotionModifier_Scale.AddRootMotionModifierScale
	// class URootMotionModifier_Scale* AddRootMotionModifierScale(class UMotionWarpingComponent* InMotionWarpingComp, class UAnimSequenceBase* InAnimation, float InStartTime, float InEndTime, FVector InScale); // [0x174dde0] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
};

/// Class /Script/MotionWarping.RootMotionModifier_AdjustmentBlendWarp
/// Size: 0x0160 (0x000250 - 0x0003B0)
class URootMotionModifier_AdjustmentBlendWarp : public URootMotionModifier_Warp
{ 
public:
	bool                                               bWarpIKBones;                                               // 0x0250   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0251   (0x0007)  MISSED
	TArray<FName>                                      IKBones;                                                    // 0x0258   (0x0010)  
	unsigned char                                      UnknownData01_5[0x8];                                       // 0x0268   (0x0008)  MISSED
	FTransform                                         CachedMeshTransform;                                        // 0x0270   (0x0060)  
	FTransform                                         CachedMeshRelativeTransform;                                // 0x02D0   (0x0060)  
	FTransform                                         CachedRootMotion;                                           // 0x0330   (0x0060)  
	FAnimSequenceTrackContainer                        Result;                                                     // 0x0390   (0x0020)  
};

/// Class /Script/MotionWarping.RootMotionModifier_SkewWarp
/// Size: 0x0000 (0x000250 - 0x000250)
class URootMotionModifier_SkewWarp : public URootMotionModifier_Warp
{ 
public:


	/// Functions
	// Function /Script/MotionWarping.RootMotionModifier_SkewWarp.AddRootMotionModifierSkewWarp
	// class URootMotionModifier_SkewWarp* AddRootMotionModifierSkewWarp(class UMotionWarpingComponent* InMotionWarpingComp, class UAnimSequenceBase* InAnimation, float InStartTime, float InEndTime, FName InWarpTargetName, EWarpPointAnimProvider InWarpPointAnimProvider, FTransform InWarpPointAnimTransform, FName InWarpPointAnimBoneName, bool bInWarpTranslation, bool bInIgnoreZAxis, bool bInWarpRotation, EMotionWarpRotationType InRotationType, float InWarpRotationTimeMultiplier); // [0x174e0a0] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
};

/// Struct /Script/MotionWarping.MotionWarpingWindowData
/// Size: 0x0010 (0x000000 - 0x000010)
struct FMotionWarpingWindowData
{ 
	class UAnimNotifyState_MotionWarping*              AnimNotify;                                                 // 0x0000   (0x0008)  
	float                                              StartTime;                                                  // 0x0008   (0x0004)  
	float                                              EndTime;                                                    // 0x000C   (0x0004)  
};

/// Struct /Script/MotionWarping.MotionWarpingUpdateContext
/// Size: 0x001C (0x000000 - 0x00001C)
struct FMotionWarpingUpdateContext
{ 
	SDK_UNDEFINED(8,2516) /* TWeakObjectPtr<UAnimSequenceBase*> */ __um(Animation);                                // 0x0000   (0x0008)  
	float                                              PreviousPosition;                                           // 0x0008   (0x0004)  
	float                                              CurrentPosition;                                            // 0x000C   (0x0004)  
	float                                              Weight;                                                     // 0x0010   (0x0004)  
	float                                              PlayRate;                                                   // 0x0014   (0x0004)  
	float                                              DeltaSeconds;                                               // 0x0018   (0x0004)  
};

/// Struct /Script/MotionWarping.MotionDeltaTrack
/// Size: 0x0060 (0x000000 - 0x000060)
struct FMotionDeltaTrack
{ 
	TArray<FTransform>                                 BoneTransformTrack;                                         // 0x0000   (0x0010)  
	TArray<FVector>                                    DeltaTranslationTrack;                                      // 0x0010   (0x0010)  
	TArray<FRotator>                                   DeltaRotationTrack;                                         // 0x0020   (0x0010)  
	FVector                                            TotalTranslation;                                           // 0x0030   (0x0018)  
	FRotator                                           TotalRotation;                                              // 0x0048   (0x0018)  
};

/// Struct /Script/MotionWarping.MotionDeltaTrackContainer
/// Size: 0x0010 (0x000000 - 0x000010)
struct FMotionDeltaTrackContainer
{ 
	TArray<FMotionDeltaTrack>                          Tracks;                                                     // 0x0000   (0x0010)  
};

