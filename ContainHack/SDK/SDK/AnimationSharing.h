
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/AnimationSharing.AnimationSharingStateProcessor
/// Size: 0x0030 (0x000028 - 0x000058)
class UAnimationSharingStateProcessor : public UObject
{ 
public:
	SDK_UNDEFINED(48,1924) /* TWeakObjectPtr<UEnum*> */ __um(AnimationStateEnum);                                  // 0x0028   (0x0030)  


	/// Functions
	// Function /Script/AnimationSharing.AnimationSharingStateProcessor.ProcessActorState
	// void ProcessActorState(int32_t& OutState, class AActor* InActor, char CurrentState, char OnDemandState, bool& bShouldProcess); // [0x1c07df0] Native|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/AnimationSharing.AnimationSharingStateProcessor.GetAnimationStateEnum
	// class UEnum* GetAnimationStateEnum();                                                                                 // [0x1c07c30] Native|Event|Public|BlueprintEvent 
};

/// Class /Script/AnimationSharing.AnimSharingStateInstance
/// Size: 0x0020 (0x000350 - 0x000370)
class UAnimSharingStateInstance : public UAnimInstance
{ 
public:
	class UAnimSequence*                               AnimationToPlay;                                            // 0x0348   (0x0008)  
	float                                              PermutationTimeOffset;                                      // 0x0350   (0x0004)  
	float                                              PlayRate;                                                   // 0x0354   (0x0004)  
	bool                                               bStateBool;                                                 // 0x0358   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0359   (0x0007)  MISSED
	class UAnimSharingInstance*                        Instance;                                                   // 0x0360   (0x0008)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0368   (0x0008)  MISSED


	/// Functions
	// Function /Script/AnimationSharing.AnimSharingStateInstance.GetInstancedActors
	// void GetInstancedActors(TArray<AActor*>& Actors);                                                                     // [0x1c07c60] Final|Native|Protected|HasOutParms|BlueprintCallable 
};

/// Class /Script/AnimationSharing.AnimSharingTransitionInstance
/// Size: 0x0010 (0x000350 - 0x000360)
class UAnimSharingTransitionInstance : public UAnimInstance
{ 
public:
	SDK_UNDEFINED(8,1925) /* TWeakObjectPtr<USkeletalMeshComponent*> */ __um(FromComponent);                       // 0x0348   (0x0008)  
	SDK_UNDEFINED(8,1926) /* TWeakObjectPtr<USkeletalMeshComponent*> */ __um(ToComponent);                         // 0x0350   (0x0008)  
	float                                              BlendTime;                                                  // 0x0358   (0x0004)  
	bool                                               bBlendBool;                                                 // 0x035C   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x035D   (0x0003)  MISSED
};

/// Class /Script/AnimationSharing.AnimSharingAdditiveInstance
/// Size: 0x0010 (0x000350 - 0x000360)
class UAnimSharingAdditiveInstance : public UAnimInstance
{ 
public:
	SDK_UNDEFINED(8,1927) /* TWeakObjectPtr<USkeletalMeshComponent*> */ __um(BaseComponent);                       // 0x0348   (0x0008)  
	SDK_UNDEFINED(8,1928) /* TWeakObjectPtr<UAnimSequence*> */ __um(AdditiveAnimation);                            // 0x0350   (0x0008)  
	float                                              Alpha;                                                      // 0x0358   (0x0004)  
	bool                                               bStateBool;                                                 // 0x035C   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x035D   (0x0003)  MISSED
};

/// Class /Script/AnimationSharing.AnimSharingInstance
/// Size: 0x00F8 (0x000028 - 0x000120)
class UAnimSharingInstance : public UObject
{ 
public:
	TArray<class AActor*>                              RegisteredActors;                                           // 0x0028   (0x0010)  
	unsigned char                                      UnknownData00_5[0x50];                                      // 0x0038   (0x0050)  MISSED
	class UAnimationSharingStateProcessor*             StateProcessor;                                             // 0x0088   (0x0008)  
	unsigned char                                      UnknownData01_5[0x38];                                      // 0x0090   (0x0038)  MISSED
	TArray<class UAnimSequence*>                       UsedAnimationSequences;                                     // 0x00C8   (0x0010)  
	unsigned char                                      UnknownData02_5[0x10];                                      // 0x00D8   (0x0010)  MISSED
	class UEnum*                                       StateEnum;                                                  // 0x00E8   (0x0008)  
	class AActor*                                      SharingActor;                                               // 0x00F0   (0x0008)  
	unsigned char                                      UnknownData03_6[0x28];                                      // 0x00F8   (0x0028)  MISSED
};

/// Class /Script/AnimationSharing.AnimationSharingManager
/// Size: 0x0060 (0x000028 - 0x000088)
class UAnimationSharingManager : public UObject
{ 
public:
	TArray<class USkeleton*>                           Skeletons;                                                  // 0x0028   (0x0010)  
	TArray<class UAnimSharingInstance*>                PerSkeletonData;                                            // 0x0038   (0x0010)  
	unsigned char                                      UnknownData00_6[0x40];                                      // 0x0048   (0x0040)  MISSED


	/// Functions
	// Function /Script/AnimationSharing.AnimationSharingManager.RegisterActorWithSkeletonBP
	// void RegisterActorWithSkeletonBP(class AActor* InActor, class USkeleton* SharingSkeleton);                            // [0x1c07fb0] Final|Native|Public|BlueprintCallable 
	// Function /Script/AnimationSharing.AnimationSharingManager.GetAnimationSharingManager
	// class UAnimationSharingManager* GetAnimationSharingManager(class UObject* WorldContextObject);                        // [0x1c07ae0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AnimationSharing.AnimationSharingManager.CreateAnimationSharingManager
	// bool CreateAnimationSharingManager(class UObject* WorldContextObject, class UAnimationSharingSetup* Setup);           // [0x1c079e0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AnimationSharing.AnimationSharingManager.AnimationSharingEnabled
	// bool AnimationSharingEnabled();                                                                                       // [0x1c079b0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
};

/// Struct /Script/AnimationSharing.AnimationSetup
/// Size: 0x0018 (0x000000 - 0x000018)
struct FAnimationSetup
{ 
	class UAnimSequence*                               AnimSequence;                                               // 0x0000   (0x0008)  
	class UClass*                                      AnimBlueprint;                                              // 0x0008   (0x0008)  
	FPerPlatformInt                                    NumRandomizedInstances;                                     // 0x0010   (0x0004)  
	FPerPlatformBool                                   Enabled;                                                    // 0x0014   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0015   (0x0003)  MISSED
};

/// Struct /Script/AnimationSharing.AnimationStateEntry
/// Size: 0x0030 (0x000000 - 0x000030)
struct FAnimationStateEntry
{ 
	char                                               State;                                                      // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0001   (0x0007)  MISSED
	TArray<FAnimationSetup>                            AnimationSetups;                                            // 0x0008   (0x0010)  
	bool                                               bOnDemand;                                                  // 0x0018   (0x0001)  
	bool                                               bAdditive;                                                  // 0x0019   (0x0001)  
	unsigned char                                      UnknownData01_5[0x2];                                       // 0x001A   (0x0002)  MISSED
	float                                              BlendTime;                                                  // 0x001C   (0x0004)  
	bool                                               bReturnToPreviousState;                                     // 0x0020   (0x0001)  
	bool                                               bSetNextState;                                              // 0x0021   (0x0001)  
	char                                               NextState;                                                  // 0x0022   (0x0001)  
	unsigned char                                      UnknownData02_5[0x1];                                       // 0x0023   (0x0001)  MISSED
	FPerPlatformInt                                    MaximumNumberOfConcurrentInstances;                         // 0x0024   (0x0004)  
	float                                              WiggleTimePercentage;                                       // 0x0028   (0x0004)  
	bool                                               bRequiresCurves;                                            // 0x002C   (0x0001)  
	unsigned char                                      UnknownData03_6[0x3];                                       // 0x002D   (0x0003)  MISSED
};

/// Struct /Script/AnimationSharing.PerSkeletonAnimationSharingSetup
/// Size: 0x0038 (0x000000 - 0x000038)
struct FPerSkeletonAnimationSharingSetup
{ 
	class USkeleton*                                   Skeleton;                                                   // 0x0000   (0x0008)  
	class USkeletalMesh*                               SkeletalMesh;                                               // 0x0008   (0x0008)  
	class UClass*                                      BlendAnimBlueprint;                                         // 0x0010   (0x0008)  
	class UClass*                                      AdditiveAnimBlueprint;                                      // 0x0018   (0x0008)  
	class UClass*                                      StateProcessorClass;                                        // 0x0020   (0x0008)  
	TArray<FAnimationStateEntry>                       AnimationStates;                                            // 0x0028   (0x0010)  
};

/// Struct /Script/AnimationSharing.AnimationSharingScalability
/// Size: 0x0010 (0x000000 - 0x000010)
struct FAnimationSharingScalability
{ 
	FPerPlatformBool                                   UseBlendTransitions;                                        // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	FPerPlatformFloat                                  BlendSignificanceValue;                                     // 0x0004   (0x0004)  
	FPerPlatformInt                                    MaximumNumberConcurrentBlends;                              // 0x0008   (0x0004)  
	FPerPlatformFloat                                  TickSignificanceValue;                                      // 0x000C   (0x0004)  
};

/// Class /Script/AnimationSharing.AnimationSharingSetup
/// Size: 0x0020 (0x000028 - 0x000048)
class UAnimationSharingSetup : public UObject
{ 
public:
	TArray<FPerSkeletonAnimationSharingSetup>          SkeletonSetups;                                             // 0x0028   (0x0010)  
	FAnimationSharingScalability                       ScalabilitySettings;                                        // 0x0038   (0x0010)  
};

/// Struct /Script/AnimationSharing.TickAnimationSharingFunction
/// Size: 0x0008 (0x000028 - 0x000030)
struct FTickAnimationSharingFunction : FTickFunction
{ 
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0028   (0x0008)  MISSED
};

