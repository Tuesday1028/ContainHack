
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: AnimationCore
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: MovieScene

/// Enum /Script/Constraints.EHandleEvent
/// Size: 0x04
enum class EHandleEvent : uint8_t
{
	EHandleEvent__LocalTransformUpdated                                              = 0,
	EHandleEvent__GlobalTransformUpdated                                             = 1,
	EHandleEvent__ComponentUpdated                                                   = 2,
	EHandleEvent__Max                                                                = 3
};

/// Class /Script/Constraints.TransformableHandle
/// Size: 0x0030 (0x000028 - 0x000058)
class UTransformableHandle : public UObject
{ 
public:
	FMovieSceneObjectBindingID                         ConstraintBindingID;                                        // 0x0028   (0x0018)  
	unsigned char                                      UnknownData00_6[0x18];                                      // 0x0040   (0x0018)  MISSED
};

/// Class /Script/Constraints.ConstraintsActor
/// Size: 0x0008 (0x000290 - 0x000298)
class AConstraintsActor : public AActor
{ 
public:
	class UConstraintsManager*                         ConstraintsManager;                                         // 0x0290   (0x0008)  
};

/// Struct /Script/Constraints.ConstraintTickFunction
/// Size: 0x0018 (0x000028 - 0x000040)
struct FConstraintTickFunction : FTickFunction
{ 
	unsigned char                                      UnknownData00_1[0x18];                                      // 0x0028   (0x0018)  MISSED
};

/// Class /Script/Constraints.TickableConstraint
/// Size: 0x0048 (0x000028 - 0x000070)
class UTickableConstraint : public UObject
{ 
public:
	FConstraintTickFunction                            ConstraintTick;                                             // 0x0028   (0x0040)  
	bool                                               Active;                                                     // 0x0068   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0069   (0x0007)  MISSED
};

/// Class /Script/Constraints.ConstraintsManager
/// Size: 0x0020 (0x000028 - 0x000048)
class UConstraintsManager : public UObject
{ 
public:
	SDK_UNDEFINED(1,1258) /* FMulticastSparseDelegate */ __um(OnConstraintAdded_BP);                               // 0x0028   (0x0001)  
	SDK_UNDEFINED(1,1259) /* FMulticastSparseDelegate */ __um(OnConstraintRemoved_BP);                             // 0x0029   (0x0001)  
	unsigned char                                      UnknownData00_5[0xE];                                       // 0x002A   (0x000E)  MISSED
	TArray<class UTickableConstraint*>                 Constraints;                                                // 0x0038   (0x0010)  
};

/// Class /Script/Constraints.ConstraintsScriptingLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UConstraintsScriptingLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/Constraints.ConstraintsScriptingLibrary.RemoveConstraint
	// bool RemoveConstraint(class UWorld* InWorld, int32_t InIndex);                                                        // [0x35024b0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/Constraints.ConstraintsScriptingLibrary.GetManager
	// class UConstraintsManager* GetManager(class UWorld* InWorld);                                                         // [0x3502420] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/Constraints.ConstraintsScriptingLibrary.CreateTransformableComponentHandle
	// class UTransformableComponentHandle* CreateTransformableComponentHandle(class UWorld* InWorld, class USceneComponent* InSceneComponent, FName& InSocketName); // [0x35022e0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Constraints.ConstraintsScriptingLibrary.CreateFromType
	// class UTickableTransformConstraint* CreateFromType(class UWorld* InWorld, ETransformConstraintType InType);           // [0x3502210] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/Constraints.ConstraintsScriptingLibrary.AddConstraint
	// bool AddConstraint(class UWorld* InWorld, class UTransformableHandle* InParentHandle, class UTransformableHandle* InChildHandle, class UTickableTransformConstraint* InConstraint, bool bMaintainOffset); // [0x3502080] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/Constraints.TransformableComponentHandle
/// Size: 0x0010 (0x000058 - 0x000068)
class UTransformableComponentHandle : public UTransformableHandle
{ 
public:
	SDK_UNDEFINED(8,1260) /* TWeakObjectPtr<USceneComponent*> */ __um(Component);                                  // 0x0058   (0x0008)  
	FName                                              SocketName;                                                 // 0x0060   (0x0008)  
};

/// Class /Script/Constraints.TickableTransformConstraint
/// Size: 0x0020 (0x000070 - 0x000090)
class UTickableTransformConstraint : public UTickableConstraint
{ 
public:
	class UTransformableHandle*                        ParentTRSHandle;                                            // 0x0070   (0x0008)  
	class UTransformableHandle*                        ChildTRSHandle;                                             // 0x0078   (0x0008)  
	bool                                               bMaintainOffset;                                            // 0x0080   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0081   (0x0003)  MISSED
	float                                              Weight;                                                     // 0x0084   (0x0004)  
	bool                                               bDynamicOffset;                                             // 0x0088   (0x0001)  
	ETransformConstraintType                           Type;                                                       // 0x0089   (0x0001)  
	unsigned char                                      UnknownData01_6[0x6];                                       // 0x008A   (0x0006)  MISSED
};

/// Class /Script/Constraints.TickableTranslationConstraint
/// Size: 0x0020 (0x000090 - 0x0000B0)
class UTickableTranslationConstraint : public UTickableTransformConstraint
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0090   (0x0008)  MISSED
	FVector                                            OffsetTranslation;                                          // 0x0098   (0x0018)  
};

/// Class /Script/Constraints.TickableRotationConstraint
/// Size: 0x0030 (0x000090 - 0x0000C0)
class UTickableRotationConstraint : public UTickableTransformConstraint
{ 
public:
	unsigned char                                      UnknownData00_2[0x10];                                      // 0x0090   (0x0010)  MISSED
	FQuat                                              OffsetRotation;                                             // 0x00A0   (0x0020)  
};

/// Class /Script/Constraints.TickableScaleConstraint
/// Size: 0x0020 (0x000090 - 0x0000B0)
class UTickableScaleConstraint : public UTickableTransformConstraint
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0090   (0x0008)  MISSED
	FVector                                            OffsetScale;                                                // 0x0098   (0x0018)  
};

/// Class /Script/Constraints.TickableParentConstraint
/// Size: 0x0080 (0x000090 - 0x000110)
class UTickableParentConstraint : public UTickableTransformConstraint
{ 
public:
	unsigned char                                      UnknownData00_2[0x10];                                      // 0x0090   (0x0010)  MISSED
	FTransform                                         OffsetTransform;                                            // 0x00A0   (0x0060)  
	bool                                               bScaling;                                                   // 0x0100   (0x0001)  
	unsigned char                                      UnknownData01_6[0xF];                                       // 0x0101   (0x000F)  MISSED
};

/// Class /Script/Constraints.TickableLookAtConstraint
/// Size: 0x0018 (0x000090 - 0x0000A8)
class UTickableLookAtConstraint : public UTickableTransformConstraint
{ 
public:
	FVector                                            Axis;                                                       // 0x0090   (0x0018)  
};

/// Struct /Script/Constraints.MovieSceneConstraintChannel
/// Size: 0x0000 (0x000100 - 0x000100)
struct FMovieSceneConstraintChannel : FMovieSceneBoolChannel
{ 
};

/// Struct /Script/Constraints.ConstraintAndActiveChannel
/// Size: 0x0138 (0x000000 - 0x000138)
struct FConstraintAndActiveChannel
{ 
	SDK_UNDEFINED(48,1261) /* TWeakObjectPtr<UTickableConstraint*> */ __um(Constraint);                            // 0x0000   (0x0030)  
	FMovieSceneConstraintChannel                       ActiveChannel;                                              // 0x0030   (0x0100)  
	class UTickableConstraint*                         ConstraintCopyToSpawn;                                      // 0x0130   (0x0008)  
};

