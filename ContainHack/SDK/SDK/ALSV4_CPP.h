
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: AIModule
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: EnhancedInput

/// Enum /Script/ALSV4_CPP.EALSGait
/// Size: 0x04
enum class EALSGait : uint8_t
{
	EALSGait__Walking                                                                = 0,
	EALSGait__Running                                                                = 1,
	EALSGait__Sprinting                                                              = 2,
	EALSGait__EALSGait_MAX                                                           = 3
};

/// Enum /Script/ALSV4_CPP.EALSMovementAction
/// Size: 0x06
enum class EALSMovementAction : uint8_t
{
	EALSMovementAction__None                                                         = 0,
	EALSMovementAction__LowMantle                                                    = 1,
	EALSMovementAction__HighMantle                                                   = 2,
	EALSMovementAction__Rolling                                                      = 3,
	EALSMovementAction__GettingUp                                                    = 4,
	EALSMovementAction__EALSMovementAction_MAX                                       = 5
};

/// Enum /Script/ALSV4_CPP.EALSMovementState
/// Size: 0x06
enum class EALSMovementState : uint8_t
{
	EALSMovementState__None                                                          = 0,
	EALSMovementState__Grounded                                                      = 1,
	EALSMovementState__InAir                                                         = 2,
	EALSMovementState__Mantling                                                      = 3,
	EALSMovementState__Ragdoll                                                       = 4,
	EALSMovementState__EALSMovementState_MAX                                         = 5
};

/// Enum /Script/ALSV4_CPP.EALSOverlayState
/// Size: 0x14
enum class EALSOverlayState : uint8_t
{
	EALSOverlayState__Default                                                        = 0,
	EALSOverlayState__Masculine                                                      = 1,
	EALSOverlayState__Feminine                                                       = 2,
	EALSOverlayState__Injured                                                        = 3,
	EALSOverlayState__HandsTied                                                      = 4,
	EALSOverlayState__Rifle                                                          = 5,
	EALSOverlayState__PistolOneHanded                                                = 6,
	EALSOverlayState__PistolTwoHanded                                                = 7,
	EALSOverlayState__Bow                                                            = 8,
	EALSOverlayState__Torch                                                          = 9,
	EALSOverlayState__Binoculars                                                     = 10,
	EALSOverlayState__Box                                                            = 11,
	EALSOverlayState__Barrel                                                         = 12,
	EALSOverlayState__EALSOverlayState_MAX                                           = 13
};

/// Enum /Script/ALSV4_CPP.EALSRotationMode
/// Size: 0x04
enum class EALSRotationMode : uint8_t
{
	EALSRotationMode__VelocityDirection                                              = 0,
	EALSRotationMode__LookingDirection                                               = 1,
	EALSRotationMode__Aiming                                                         = 2,
	EALSRotationMode__EALSRotationMode_MAX                                           = 3
};

/// Enum /Script/ALSV4_CPP.EALSStance
/// Size: 0x03
enum class EALSStance : uint8_t
{
	EALSStance__Standing                                                             = 0,
	EALSStance__Crouching                                                            = 1,
	EALSStance__EALSStance_MAX                                                       = 2
};

/// Enum /Script/ALSV4_CPP.EALSViewMode
/// Size: 0x03
enum class EALSViewMode : uint8_t
{
	EALSViewMode__ThirdPerson                                                        = 0,
	EALSViewMode__FirstPerson                                                        = 1,
	EALSViewMode__EALSViewMode_MAX                                                   = 2
};

/// Enum /Script/ALSV4_CPP.EALSAnimFeatureExample
/// Size: 0x04
enum class EALSAnimFeatureExample : uint8_t
{
	EALSAnimFeatureExample__StrideBlending                                           = 0,
	EALSAnimFeatureExample__AdditiveBlending                                         = 1,
	EALSAnimFeatureExample__SprintImpulse                                            = 2,
	EALSAnimFeatureExample__EALSAnimFeatureExample_MAX                               = 3
};

/// Enum /Script/ALSV4_CPP.EALSFootstepType
/// Size: 0x05
enum class EALSFootstepType : uint8_t
{
	EALSFootstepType__Step                                                           = 0,
	EALSFootstepType__WalkRun                                                        = 1,
	EALSFootstepType__Jump                                                           = 2,
	EALSFootstepType__Land                                                           = 3,
	EALSFootstepType__EALSFootstepType_MAX                                           = 4
};

/// Enum /Script/ALSV4_CPP.EALSGroundedEntryState
/// Size: 0x03
enum class EALSGroundedEntryState : uint8_t
{
	EALSGroundedEntryState__None                                                     = 0,
	EALSGroundedEntryState__Roll                                                     = 1,
	EALSGroundedEntryState__EALSGroundedEntryState_MAX                               = 2
};

/// Enum /Script/ALSV4_CPP.EALSHipsDirection
/// Size: 0x07
enum class EALSHipsDirection : uint8_t
{
	EALSHipsDirection__F                                                             = 0,
	EALSHipsDirection__B                                                             = 1,
	EALSHipsDirection__RF                                                            = 2,
	EALSHipsDirection__RB                                                            = 3,
	EALSHipsDirection__LF                                                            = 4,
	EALSHipsDirection__LB                                                            = 5,
	EALSHipsDirection__EALSHipsDirection_MAX                                         = 6
};

/// Enum /Script/ALSV4_CPP.EALSMantleType
/// Size: 0x04
enum class EALSMantleType : uint8_t
{
	EALSMantleType__HighMantle                                                       = 0,
	EALSMantleType__LowMantle                                                        = 1,
	EALSMantleType__FallingCatch                                                     = 2,
	EALSMantleType__EALSMantleType_MAX                                               = 3
};

/// Enum /Script/ALSV4_CPP.EALSMovementDirection
/// Size: 0x05
enum class EALSMovementDirection : uint8_t
{
	EALSMovementDirection__Forward                                                   = 0,
	EALSMovementDirection__Right                                                     = 1,
	EALSMovementDirection__Left                                                      = 2,
	EALSMovementDirection__Backward                                                  = 3,
	EALSMovementDirection__EALSMovementDirection_MAX                                 = 4
};

/// Enum /Script/ALSV4_CPP.EALSSpawnType
/// Size: 0x03
enum class EALSSpawnType : uint8_t
{
	EALSSpawnType__Location                                                          = 0,
	EALSSpawnType__Attached                                                          = 1,
	EALSSpawnType__EALSSpawnType_MAX                                                 = 2
};

/// Class /Script/ALSV4_CPP.ALSAIController
/// Size: 0x0008 (0x0003B8 - 0x0003C0)
class AALSAIController : public AAIController
{ 
public:
	class UBehaviorTree*                               Behaviour;                                                  // 0x03B8   (0x0008)  
};

/// Class /Script/ALSV4_CPP.ALSAnimNotifyCameraShake
/// Size: 0x0010 (0x000038 - 0x000048)
class UALSAnimNotifyCameraShake : public UAnimNotify
{ 
public:
	class UClass*                                      ShakeClass;                                                 // 0x0038   (0x0008)  
	float                                              Scale;                                                      // 0x0040   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0044   (0x0004)  MISSED
};

/// Class /Script/ALSV4_CPP.ALSAnimNotifyFootstep
/// Size: 0x0038 (0x000038 - 0x000070)
class UALSAnimNotifyFootstep : public UAnimNotify
{ 
public:
	class UDataTable*                                  HitDataTable;                                               // 0x0038   (0x0008)  
	FName                                              FootSocketName;                                             // 0x0040   (0x0008)  
	SDK_UNDEFINED(1,1108) /* TEnumAsByte<ETraceTypeQuery> */ __um(TraceChannel);                                   // 0x0048   (0x0001)  
	SDK_UNDEFINED(1,1109) /* TEnumAsByte<EDrawDebugTrace> */ __um(DrawDebugType);                                  // 0x0049   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x004A   (0x0002)  MISSED
	float                                              TraceLength;                                                // 0x004C   (0x0004)  
	bool                                               bSpawnDecal;                                                // 0x0050   (0x0001)  
	bool                                               bMirrorDecalX;                                              // 0x0051   (0x0001)  
	bool                                               bMirrorDecalY;                                              // 0x0052   (0x0001)  
	bool                                               bMirrorDecalZ;                                              // 0x0053   (0x0001)  
	bool                                               bSpawnSound;                                                // 0x0054   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0055   (0x0003)  MISSED
	FName                                              SoundParameterName;                                         // 0x0058   (0x0008)  
	EALSFootstepType                                   FootstepType;                                               // 0x0060   (0x0001)  
	bool                                               bOverrideMaskCurve;                                         // 0x0061   (0x0001)  
	unsigned char                                      UnknownData02_5[0x2];                                       // 0x0062   (0x0002)  MISSED
	float                                              VolumeMultiplier;                                           // 0x0064   (0x0004)  
	float                                              PitchMultiplier;                                            // 0x0068   (0x0004)  
	bool                                               bSpawnNiagara;                                              // 0x006C   (0x0001)  
	unsigned char                                      UnknownData03_6[0x3];                                       // 0x006D   (0x0003)  MISSED
};

/// Class /Script/ALSV4_CPP.ALSAnimNotifyGroundedEntryState
/// Size: 0x0008 (0x000038 - 0x000040)
class UALSAnimNotifyGroundedEntryState : public UAnimNotify
{ 
public:
	EALSGroundedEntryState                             GroundedEntryState;                                         // 0x0038   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0039   (0x0007)  MISSED
};

/// Struct /Script/ALSV4_CPP.ALSMovementSettings
/// Size: 0x0020 (0x000000 - 0x000020)
struct FALSMovementSettings
{ 
	float                                              WalkSpeed;                                                  // 0x0000   (0x0004)  
	float                                              RunSpeed;                                                   // 0x0004   (0x0004)  
	float                                              SprintSpeed;                                                // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x000C   (0x0004)  MISSED
	class UCurveVector*                                MovementCurve;                                              // 0x0010   (0x0008)  
	class UCurveFloat*                                 RotationRateCurve;                                          // 0x0018   (0x0008)  
};

/// Struct /Script/ALSV4_CPP.ALSMovementStanceSettings
/// Size: 0x0040 (0x000000 - 0x000040)
struct FALSMovementStanceSettings
{ 
	FALSMovementSettings                               Standing;                                                   // 0x0000   (0x0020)  
	FALSMovementSettings                               Crouching;                                                  // 0x0020   (0x0020)  
};

/// Struct /Script/ALSV4_CPP.ALSMovementStateSettings
/// Size: 0x00C0 (0x000008 - 0x0000C8)
struct FALSMovementStateSettings : FTableRowBase
{ 
	FALSMovementStanceSettings                         VelocityDirection;                                          // 0x0008   (0x0040)  
	FALSMovementStanceSettings                         LookingDirection;                                           // 0x0048   (0x0040)  
	FALSMovementStanceSettings                         Aiming;                                                     // 0x0088   (0x0040)  
};

/// Class /Script/ALSV4_CPP.ALSBaseCharacter
/// Size: 0x02B0 (0x000620 - 0x0008D0)
class AALSBaseCharacter : public ACharacter
{ 
public:
	SDK_UNDEFINED(16,1110) /* FMulticastInlineDelegate */ __um(JumpPressedDelegate);                               // 0x0618   (0x0010)  
	SDK_UNDEFINED(16,1111) /* FMulticastInlineDelegate */ __um(OnJumpedDelegate);                                  // 0x0628   (0x0010)  
	SDK_UNDEFINED(16,1112) /* FMulticastInlineDelegate */ __um(RagdollStateChangedDelegate);                       // 0x0638   (0x0010)  
	class UALSCharacterMovementComponent*              MyCharacterMovementComponent;                               // 0x0648   (0x0008)  
	EALSRotationMode                                   DesiredRotationMode;                                        // 0x0650   (0x0001)  
	EALSGait                                           DesiredGait;                                                // 0x0651   (0x0001)  
	EALSStance                                         DesiredStance;                                              // 0x0652   (0x0001)  
	unsigned char                                      UnknownData00_5[0x1];                                       // 0x0653   (0x0001)  MISSED
	float                                              LookUpDownRate;                                             // 0x0654   (0x0004)  
	float                                              LookLeftRightRate;                                          // 0x0658   (0x0004)  
	float                                              RollDoubleTapTimeout;                                       // 0x065C   (0x0004)  
	bool                                               bBreakFall;                                                 // 0x0660   (0x0001)  
	bool                                               bSprintHeld;                                                // 0x0661   (0x0001)  
	unsigned char                                      UnknownData01_5[0x2];                                       // 0x0662   (0x0002)  MISSED
	float                                              ThirdPersonFOV;                                             // 0x0664   (0x0004)  
	float                                              FirstPersonFOV;                                             // 0x0668   (0x0004)  
	bool                                               bRightShoulder;                                             // 0x066C   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x066D   (0x0003)  MISSED
	FDataTableRowHandle                                MovementModel;                                              // 0x0670   (0x0010)  
	FVector                                            Acceleration;                                               // 0x0680   (0x0018)  
	bool                                               bIsMoving;                                                  // 0x0698   (0x0001)  
	bool                                               bHasMovementInput;                                          // 0x0699   (0x0001)  
	unsigned char                                      UnknownData03_5[0x6];                                       // 0x069A   (0x0006)  MISSED
	FRotator                                           LastVelocityRotation;                                       // 0x06A0   (0x0018)  
	FRotator                                           LastMovementInputRotation;                                  // 0x06B8   (0x0018)  
	float                                              Speed;                                                      // 0x06D0   (0x0004)  
	float                                              MovementInputAmount;                                        // 0x06D4   (0x0004)  
	float                                              AimYawRate;                                                 // 0x06D8   (0x0004)  
	float                                              EasedMaxAcceleration;                                       // 0x06DC   (0x0004)  
	FVector                                            ReplicatedCurrentAcceleration;                              // 0x06E0   (0x0018)  
	FRotator                                           ReplicatedControlRotation;                                  // 0x06F8   (0x0018)  
	class USkeletalMesh*                               VisibleMesh;                                                // 0x0710   (0x0008)  
	EALSOverlayState                                   OverlayState;                                               // 0x0718   (0x0001)  
	EALSGroundedEntryState                             GroundedEntryState;                                         // 0x0719   (0x0001)  
	EALSMovementState                                  MovementState;                                              // 0x071A   (0x0001)  
	EALSMovementState                                  PrevMovementState;                                          // 0x071B   (0x0001)  
	EALSMovementAction                                 MovementAction;                                             // 0x071C   (0x0001)  
	EALSRotationMode                                   RotationMode;                                               // 0x071D   (0x0001)  
	EALSGait                                           Gait;                                                       // 0x071E   (0x0001)  
	EALSStance                                         Stance;                                                     // 0x071F   (0x0001)  
	EALSViewMode                                       ViewMode;                                                   // 0x0720   (0x0001)  
	unsigned char                                      UnknownData04_5[0x3];                                       // 0x0721   (0x0003)  MISSED
	int32_t                                            OverlayOverrideState;                                       // 0x0724   (0x0004)  
	FALSMovementStateSettings                          MovementData;                                               // 0x0728   (0x00C8)  
	FRotator                                           TargetRotation;                                             // 0x07F0   (0x0018)  
	FRotator                                           InAirRotation;                                              // 0x0808   (0x0018)  
	float                                              YawOffset;                                                  // 0x0820   (0x0004)  
	bool                                               bBreakfallOnLand;                                           // 0x0824   (0x0001)  
	unsigned char                                      UnknownData05_5[0x3];                                       // 0x0825   (0x0003)  MISSED
	float                                              BreakfallOnLandVelocity;                                    // 0x0828   (0x0004)  
	bool                                               bReversedPelvis;                                            // 0x082C   (0x0001)  
	bool                                               bRagdollOnLand;                                             // 0x082D   (0x0001)  
	unsigned char                                      UnknownData06_5[0x2];                                       // 0x082E   (0x0002)  MISSED
	float                                              RagdollOnLandVelocity;                                      // 0x0830   (0x0004)  
	bool                                               bRagdollOnGround;                                           // 0x0834   (0x0001)  
	bool                                               bRagdollFaceUp;                                             // 0x0835   (0x0001)  
	unsigned char                                      UnknownData07_5[0x2];                                       // 0x0836   (0x0002)  MISSED
	FVector                                            LastRagdollVelocity;                                        // 0x0838   (0x0018)  
	FVector                                            TargetRagdollLocation;                                      // 0x0850   (0x0018)  
	unsigned char                                      UnknownData08_5[0x28];                                      // 0x0868   (0x0028)  MISSED
	class UALSPlayerCameraBehavior*                    CameraBehavior;                                             // 0x0890   (0x0008)  
	unsigned char                                      UnknownData09_5[0x29];                                      // 0x0898   (0x0029)  MISSED
	bool                                               bIsPronedAI;                                                // 0x08C1   (0x0001)  
	unsigned char                                      UnknownData10_5[0x6];                                       // 0x08C2   (0x0006)  MISSED
	class UALSDebugComponent*                          ALSDebugComponent;                                          // 0x08C8   (0x0008)  


	/// Functions
	// Function /Script/ALSV4_CPP.ALSBaseCharacter.WalkAction
	// void WalkAction();                                                                                                    // [0x18d8de0] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/ALSV4_CPP.ALSBaseCharacter.VelocityDirectionAction
	// void VelocityDirectionAction();                                                                                       // [0x18d8dc0] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/ALSV4_CPP.ALSBaseCharacter.StanceAction
	// void StanceAction();                                                                                                  // [0x18d8da0] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/ALSV4_CPP.ALSBaseCharacter.SprintAction
	// void SprintAction(bool bValue);                                                                                       // [0x18d8d10] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/ALSV4_CPP.ALSBaseCharacter.SetVisibleMesh
	// void SetVisibleMesh(class USkeletalMesh* NewSkeletalMesh);                                                            // [0x18d8c80] Final|Native|Public|BlueprintCallable 
	// Function /Script/ALSV4_CPP.ALSBaseCharacter.SetViewMode
	// void SetViewMode(EALSViewMode NewViewMode, bool bForce);                                                              // [0x18d8bb0] Final|Native|Public|BlueprintCallable 
	// Function /Script/ALSV4_CPP.ALSBaseCharacter.SetStance
	// void SetStance(EALSStance NewStance, bool bForce);                                                                    // [0x18d8ae0] Final|Native|Public|BlueprintCallable 
	// Function /Script/ALSV4_CPP.ALSBaseCharacter.SetRotationMode
	// void SetRotationMode(EALSRotationMode NewRotationMode, bool bForce);                                                  // [0x18d8a10] Final|Native|Public|BlueprintCallable 
	// Function /Script/ALSV4_CPP.ALSBaseCharacter.SetRightShoulder
	// void SetRightShoulder(bool bNewRightShoulder);                                                                        // [0x18d8980] Final|Native|Public|BlueprintCallable 
	// Function /Script/ALSV4_CPP.ALSBaseCharacter.SetOverlayState
	// void SetOverlayState(EALSOverlayState NewState, bool bForce);                                                         // [0x18d88b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/ALSV4_CPP.ALSBaseCharacter.SetOverlayOverrideState
	// void SetOverlayOverrideState(int32_t NewState);                                                                       // [0x18d8820] Final|Native|Public|BlueprintCallable 
	// Function /Script/ALSV4_CPP.ALSBaseCharacter.SetMovementState
	// void SetMovementState(EALSMovementState NewState, bool bForce);                                                       // [0x18d8750] Final|Native|Public|BlueprintCallable 
	// Function /Script/ALSV4_CPP.ALSBaseCharacter.SetMovementAction
	// void SetMovementAction(EALSMovementAction NewAction, bool bForce);                                                    // [0x18d8680] Final|Native|Public|BlueprintCallable 
	// Function /Script/ALSV4_CPP.ALSBaseCharacter.SetGroundedEntryState
	// void SetGroundedEntryState(EALSGroundedEntryState NewState);                                                          // [0x18d8600] Final|Native|Public|BlueprintCallable 
	// Function /Script/ALSV4_CPP.ALSBaseCharacter.SetGait
	// void SetGait(EALSGait NewGait, bool bForce);                                                                          // [0x18d8530] Final|Native|Public|BlueprintCallable 
	// Function /Script/ALSV4_CPP.ALSBaseCharacter.SetDesiredStance
	// void SetDesiredStance(EALSStance NewStance);                                                                          // [0x18d84b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/ALSV4_CPP.ALSBaseCharacter.SetDesiredRotationMode
	// void SetDesiredRotationMode(EALSRotationMode NewRotMode);                                                             // [0x18d8430] Final|Native|Public|BlueprintCallable 
	// Function /Script/ALSV4_CPP.ALSBaseCharacter.SetDesiredGait
	// void SetDesiredGait(EALSGait NewGait);                                                                                // [0x18d83b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/ALSV4_CPP.ALSBaseCharacter.SetCameraBehavior
	// void SetCameraBehavior(class UALSPlayerCameraBehavior* CamBeh);                                                       // [0x18d8320] Final|Native|Public|BlueprintCallable 
	// Function /Script/ALSV4_CPP.ALSBaseCharacter.SetActorLocationAndTargetRotation
	// void SetActorLocationAndTargetRotation(FVector NewLocation, FRotator NewRotation);                                    // [0x18d8230] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/ALSV4_CPP.ALSBaseCharacter.Server_SetVisibleMesh
	// void Server_SetVisibleMesh(class USkeletalMesh* NewSkeletalMesh);                                                     // [0x18d81a0] Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable 
	// Function /Script/ALSV4_CPP.ALSBaseCharacter.Server_SetViewMode
	// void Server_SetViewMode(EALSViewMode NewViewMode, bool bForce);                                                       // [0x18d80c0] Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable 
	// Function /Script/ALSV4_CPP.ALSBaseCharacter.Server_SetRotationMode
	// void Server_SetRotationMode(EALSRotationMode NewRotationMode, bool bForce);                                           // [0x18d7fe0] Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable 
	// Function /Script/ALSV4_CPP.ALSBaseCharacter.Server_SetOverlayState
	// void Server_SetOverlayState(EALSOverlayState NewState, bool bForce);                                                  // [0x18d7f00] Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable 
	// Function /Script/ALSV4_CPP.ALSBaseCharacter.Server_SetMeshLocationDuringRagdoll
	// void Server_SetMeshLocationDuringRagdoll(FVector MeshLocation);                                                       // [0x18d7e70] Net|Native|Event|Public|NetServer|HasDefaults|BlueprintCallable 
	// Function /Script/ALSV4_CPP.ALSBaseCharacter.Server_SetDesiredStance
	// void Server_SetDesiredStance(EALSStance NewStance);                                                                   // [0x18d7df0] Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable 
	// Function /Script/ALSV4_CPP.ALSBaseCharacter.Server_SetDesiredRotationMode
	// void Server_SetDesiredRotationMode(EALSRotationMode NewRotMode);                                                      // [0x18d7d70] Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable 
	// Function /Script/ALSV4_CPP.ALSBaseCharacter.Server_SetDesiredGait
	// void Server_SetDesiredGait(EALSGait NewGait);                                                                         // [0x18d7cf0] Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable 
	// Function /Script/ALSV4_CPP.ALSBaseCharacter.Server_RagdollStart
	// void Server_RagdollStart();                                                                                           // [0x18d7cd0] Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable 
	// Function /Script/ALSV4_CPP.ALSBaseCharacter.Server_RagdollEnd
	// void Server_RagdollEnd(FVector CharacterLocation);                                                                    // [0x18d7c40] Net|NetReliableNative|Event|Public|NetServer|HasDefaults|BlueprintCallable 
	// Function /Script/ALSV4_CPP.ALSBaseCharacter.Server_PlayMontage
	// void Server_PlayMontage(class UAnimMontage* Montage, float PlayRate);                                                 // [0x18d7b70] Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable 
	// Function /Script/ALSV4_CPP.ALSBaseCharacter.RightMovementAction
	// void RightMovementAction(float Value);                                                                                // [0x18d7ae0] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/ALSV4_CPP.ALSBaseCharacter.ReplicatedRagdollStart
	// void ReplicatedRagdollStart();                                                                                        // [0x18d79f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/ALSV4_CPP.ALSBaseCharacter.ReplicatedRagdollEnd
	// void ReplicatedRagdollEnd();                                                                                          // [0x18d79d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/ALSV4_CPP.ALSBaseCharacter.Replicated_PlayMontage
	// void Replicated_PlayMontage(class UAnimMontage* Montage, float PlayRate);                                             // [0x18d7a10] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/ALSV4_CPP.ALSBaseCharacter.RagdollStart
	// void RagdollStart();                                                                                                  // [0x18d79b0] Native|Public|BlueprintCallable 
	// Function /Script/ALSV4_CPP.ALSBaseCharacter.RagdollEnd
	// void RagdollEnd();                                                                                                    // [0x18d7990] Native|Public|BlueprintCallable 
	// Function /Script/ALSV4_CPP.ALSBaseCharacter.RagdollAction
	// void RagdollAction();                                                                                                 // [0x18d7970] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/ALSV4_CPP.ALSBaseCharacter.OnRep_VisibleMesh
	// void OnRep_VisibleMesh(class USkeletalMesh* PreviousSkeletalMesh);                                                    // [0x18d78e0] Final|Native|Protected 
	// Function /Script/ALSV4_CPP.ALSBaseCharacter.OnRep_ViewMode
	// void OnRep_ViewMode(EALSViewMode PrevViewMode);                                                                       // [0x18d7860] Final|Native|Protected 
	// Function /Script/ALSV4_CPP.ALSBaseCharacter.OnRep_RotationMode
	// void OnRep_RotationMode(EALSRotationMode PrevRotMode);                                                                // [0x18d77e0] Final|Native|Protected 
	// Function /Script/ALSV4_CPP.ALSBaseCharacter.OnRep_OverlayState
	// void OnRep_OverlayState(EALSOverlayState PrevOverlayState);                                                           // [0x18d7760] Final|Native|Protected 
	// Function /Script/ALSV4_CPP.ALSBaseCharacter.OnBreakfall
	// void OnBreakfall();                                                                                                   // [0x18d7740] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/ALSV4_CPP.ALSBaseCharacter.Multicast_RagdollStart
	// void Multicast_RagdollStart();                                                                                        // [0x18d7720] Net|NetReliableNative|Event|NetMulticast|Public|BlueprintCallable 
	// Function /Script/ALSV4_CPP.ALSBaseCharacter.Multicast_RagdollEnd
	// void Multicast_RagdollEnd(FVector CharacterLocation);                                                                 // [0x18d7690] Net|NetReliableNative|Event|NetMulticast|Public|HasDefaults|BlueprintCallable 
	// Function /Script/ALSV4_CPP.ALSBaseCharacter.Multicast_PlayMontage
	// void Multicast_PlayMontage(class UAnimMontage* Montage, float PlayRate);                                              // [0x18d75c0] Net|NetReliableNative|Event|NetMulticast|Public|BlueprintCallable 
	// Function /Script/ALSV4_CPP.ALSBaseCharacter.Multicast_OnLanded
	// void Multicast_OnLanded();                                                                                            // [0x18d75a0] Net|NetReliableNative|Event|NetMulticast|Public|BlueprintCallable 
	// Function /Script/ALSV4_CPP.ALSBaseCharacter.Multicast_OnJumped
	// void Multicast_OnJumped();                                                                                            // [0x18d7580] Net|NetReliableNative|Event|NetMulticast|Public|BlueprintCallable 
	// Function /Script/ALSV4_CPP.ALSBaseCharacter.LookingDirectionAction
	// void LookingDirectionAction();                                                                                        // [0x18d7560] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/ALSV4_CPP.ALSBaseCharacter.JumpAction
	// void JumpAction(bool bValue);                                                                                         // [0x18d74d0] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/ALSV4_CPP.ALSBaseCharacter.IsRightShoulder
	// bool IsRightShoulder();                                                                                               // [0x18d74b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ALSV4_CPP.ALSBaseCharacter.IsMoving
	// bool IsMoving();                                                                                                      // [0x18d7490] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ALSV4_CPP.ALSBaseCharacter.HasMovementInput
	// bool HasMovementInput();                                                                                              // [0x18d7470] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ALSV4_CPP.ALSBaseCharacter.GetViewMode
	// EALSViewMode GetViewMode();                                                                                           // [0x18d7450] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ALSV4_CPP.ALSBaseCharacter.GetThirdPersonTraceParams
	// TEnumAsByte<ECollisionChannel> GetThirdPersonTraceParams(FVector& TraceOrigin, float& TraceRadius);                   // [0x18d7350] Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/ALSV4_CPP.ALSBaseCharacter.GetThirdPersonPivotTarget
	// FTransform GetThirdPersonPivotTarget();                                                                               // [0x18d72c0] Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/ALSV4_CPP.ALSBaseCharacter.GetTargetMovementSettings
	// FALSMovementSettings GetTargetMovementSettings();                                                                     // [0x18d7280] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ALSV4_CPP.ALSBaseCharacter.GetStance
	// EALSStance GetStance();                                                                                               // [0x18d7260] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ALSV4_CPP.ALSBaseCharacter.GetSpeed
	// float GetSpeed();                                                                                                     // [0x18d7240] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ALSV4_CPP.ALSBaseCharacter.GetRotationMode
	// EALSRotationMode GetRotationMode();                                                                                   // [0x18d7220] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ALSV4_CPP.ALSBaseCharacter.GetRollAnimation
	// class UAnimMontage* GetRollAnimation();                                                                               // [0x2119480] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/ALSV4_CPP.ALSBaseCharacter.GetPrevMovementState
	// EALSMovementState GetPrevMovementState();                                                                             // [0x18d7200] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ALSV4_CPP.ALSBaseCharacter.GetOverlayState
	// EALSOverlayState GetOverlayState();                                                                                   // [0x18d71e0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ALSV4_CPP.ALSBaseCharacter.GetOverlayOverrideState
	// int32_t GetOverlayOverrideState();                                                                                    // [0x18d71c0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ALSV4_CPP.ALSBaseCharacter.GetMyMovementComponent
	// class UALSCharacterMovementComponent* GetMyMovementComponent();                                                       // [0x18d71a0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ALSV4_CPP.ALSBaseCharacter.GetMovementState
	// EALSMovementState GetMovementState();                                                                                 // [0x18d7180] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ALSV4_CPP.ALSBaseCharacter.GetMovementInputAmount
	// float GetMovementInputAmount();                                                                                       // [0x18d7160] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ALSV4_CPP.ALSBaseCharacter.GetMovementInput
	// FVector GetMovementInput();                                                                                           // [0x18d7120] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ALSV4_CPP.ALSBaseCharacter.GetMovementAction
	// EALSMovementAction GetMovementAction();                                                                               // [0x18d7100] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ALSV4_CPP.ALSBaseCharacter.GetGroundedEntryState
	// EALSGroundedEntryState GetGroundedEntryState();                                                                       // [0x18d70e0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ALSV4_CPP.ALSBaseCharacter.GetGetUpAnimation
	// class UAnimMontage* GetGetUpAnimation(bool bRagdollFaceUpState);                                                      // [0x2119480] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/ALSV4_CPP.ALSBaseCharacter.GetGait
	// EALSGait GetGait();                                                                                                   // [0x18d70c0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ALSV4_CPP.ALSBaseCharacter.GetFirstPersonCameraTarget
	// FVector GetFirstPersonCameraTarget();                                                                                 // [0x18d7070] Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/ALSV4_CPP.ALSBaseCharacter.GetDesiredStance
	// EALSStance GetDesiredStance();                                                                                        // [0x18d7050] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ALSV4_CPP.ALSBaseCharacter.GetDesiredRotationMode
	// EALSRotationMode GetDesiredRotationMode();                                                                            // [0x18d7030] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ALSV4_CPP.ALSBaseCharacter.GetDesiredGait
	// EALSGait GetDesiredGait();                                                                                            // [0x18d7010] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ALSV4_CPP.ALSBaseCharacter.GetCameraParameters
	// void GetCameraParameters(float& TPFOVOut, float& FPFOVOut, bool& bRightShoulderOut);                                  // [0x18d6ec0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ALSV4_CPP.ALSBaseCharacter.GetAnimCurveValue
	// float GetAnimCurveValue(FName CurveName);                                                                             // [0x18d6e20] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ALSV4_CPP.ALSBaseCharacter.GetAllowedGait
	// EALSGait GetAllowedGait();                                                                                            // [0x18d6df0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ALSV4_CPP.ALSBaseCharacter.GetAimYawRate
	// float GetAimYawRate();                                                                                                // [0x18d6da0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ALSV4_CPP.ALSBaseCharacter.GetAimingRotation
	// FRotator GetAimingRotation();                                                                                         // [0x18d6dc0] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ALSV4_CPP.ALSBaseCharacter.GetActualGait
	// EALSGait GetActualGait(EALSGait AllowedGait);                                                                         // [0x18d6d10] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ALSV4_CPP.ALSBaseCharacter.GetAcceleration
	// FVector GetAcceleration();                                                                                            // [0x18d6ce0] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ALSV4_CPP.ALSBaseCharacter.ForwardMovementAction
	// void ForwardMovementAction(float Value);                                                                              // [0x18d6c50] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/ALSV4_CPP.ALSBaseCharacter.EventOnLanded
	// void EventOnLanded();                                                                                                 // [0x18d6c30] Final|Native|Public|BlueprintCallable 
	// Function /Script/ALSV4_CPP.ALSBaseCharacter.EventOnJumped
	// void EventOnJumped();                                                                                                 // [0x18d6c10] Final|Native|Public|BlueprintCallable 
	// Function /Script/ALSV4_CPP.ALSBaseCharacter.CanSprint
	// bool CanSprint();                                                                                                     // [0x18d6be0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ALSV4_CPP.ALSBaseCharacter.CameraUpAction
	// void CameraUpAction(float Value);                                                                                     // [0x18d6b50] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/ALSV4_CPP.ALSBaseCharacter.CameraTapAction
	// void CameraTapAction();                                                                                               // [0x18d6b30] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/ALSV4_CPP.ALSBaseCharacter.CameraRightAction
	// void CameraRightAction(float Value);                                                                                  // [0x18d6aa0] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/ALSV4_CPP.ALSBaseCharacter.CameraHeldAction
	// void CameraHeldAction();                                                                                              // [0x18d6a80] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/ALSV4_CPP.ALSBaseCharacter.AimAction
	// void AimAction(bool bValue);                                                                                          // [0x18d69f0] Native|Event|Public|BlueprintCallable|BlueprintEvent 
};

/// Class /Script/ALSV4_CPP.ALSCharacter
/// Size: 0x0020 (0x0008D0 - 0x0008F0)
class AALSCharacter : public AALSBaseCharacter
{ 
public:
	class USceneComponent*                             HeldObjectRoot;                                             // 0x08D0   (0x0008)  
	class USkeletalMeshComponent*                      SkeletalMesh;                                               // 0x08D8   (0x0008)  
	class UStaticMeshComponent*                        StaticMesh;                                                 // 0x08E0   (0x0008)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x08E8   (0x0008)  MISSED


	/// Functions
	// Function /Script/ALSV4_CPP.ALSCharacter.UpdateHeldObjectAnimations
	// void UpdateHeldObjectAnimations();                                                                                    // [0x2119480] Event|Protected|BlueprintCallable|BlueprintEvent 
	// Function /Script/ALSV4_CPP.ALSCharacter.UpdateHeldObject
	// void UpdateHeldObject();                                                                                              // [0x2119480] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/ALSV4_CPP.ALSCharacter.ClearHeldObject
	// void ClearHeldObject();                                                                                               // [0x18dd030] Final|Native|Public|BlueprintCallable 
	// Function /Script/ALSV4_CPP.ALSCharacter.AttachToHand
	// void AttachToHand(class UStaticMesh* NewStaticMesh, class USkeletalMesh* NewSkeletalMesh, class UClass* NewAnimClass, bool bLeftHand, FVector Offset); // [0x18dcdd0] Final|Native|Public|HasDefaults|BlueprintCallable 
};

/// Struct /Script/ALSV4_CPP.ALSAnimCharacterInformation
/// Size: 0x00A8 (0x000000 - 0x0000A8)
struct FALSAnimCharacterInformation
{ 
	FRotator                                           AimingRotation;                                             // 0x0000   (0x0018)  
	FRotator                                           CharacterActorRotation;                                     // 0x0018   (0x0018)  
	FVector                                            Velocity;                                                   // 0x0030   (0x0018)  
	FVector                                            RelativeVelocityDirection;                                  // 0x0048   (0x0018)  
	FVector                                            Acceleration;                                               // 0x0060   (0x0018)  
	FVector                                            MovementInput;                                              // 0x0078   (0x0018)  
	bool                                               bIsMoving;                                                  // 0x0090   (0x0001)  
	bool                                               bHasMovementInput;                                          // 0x0091   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x0092   (0x0002)  MISSED
	float                                              Speed;                                                      // 0x0094   (0x0004)  
	float                                              MovementInputAmount;                                        // 0x0098   (0x0004)  
	float                                              AimYawRate;                                                 // 0x009C   (0x0004)  
	float                                              ZoomAmount;                                                 // 0x00A0   (0x0004)  
	EALSMovementState                                  PrevMovementState;                                          // 0x00A4   (0x0001)  
	EALSViewMode                                       ViewMode;                                                   // 0x00A5   (0x0001)  
	unsigned char                                      UnknownData01_6[0x2];                                       // 0x00A6   (0x0002)  MISSED
};

/// Struct /Script/ALSV4_CPP.ALSMovementState
/// Size: 0x0006 (0x000000 - 0x000006)
struct FALSMovementState
{ 
	EALSMovementState                                  State;                                                      // 0x0000   (0x0001)  
	bool                                               None_;                                                      // 0x0001   (0x0001)  
	bool                                               Grounded_;                                                  // 0x0002   (0x0001)  
	bool                                               InAir_;                                                     // 0x0003   (0x0001)  
	bool                                               Mantling_;                                                  // 0x0004   (0x0001)  
	bool                                               Ragdoll_;                                                   // 0x0005   (0x0001)  
};

/// Struct /Script/ALSV4_CPP.ALSMovementAction
/// Size: 0x0006 (0x000000 - 0x000006)
struct FALSMovementAction
{ 
	EALSMovementAction                                 Action;                                                     // 0x0000   (0x0001)  
	bool                                               None_;                                                      // 0x0001   (0x0001)  
	bool                                               LowMantle_;                                                 // 0x0002   (0x0001)  
	bool                                               HighMantle_;                                                // 0x0003   (0x0001)  
	bool                                               Rolling_;                                                   // 0x0004   (0x0001)  
	bool                                               GettingUp_;                                                 // 0x0005   (0x0001)  
};

/// Struct /Script/ALSV4_CPP.ALSRotationMode
/// Size: 0x0004 (0x000000 - 0x000004)
struct FALSRotationMode
{ 
	EALSRotationMode                                   RotationMode;                                               // 0x0000   (0x0001)  
	bool                                               VelocityDirection_;                                         // 0x0001   (0x0001)  
	bool                                               LookingDirection_;                                          // 0x0002   (0x0001)  
	bool                                               Aiming_;                                                    // 0x0003   (0x0001)  
};

/// Struct /Script/ALSV4_CPP.ALSGait
/// Size: 0x0004 (0x000000 - 0x000004)
struct FALSGait
{ 
	EALSGait                                           Gait;                                                       // 0x0000   (0x0001)  
	bool                                               Walking_;                                                   // 0x0001   (0x0001)  
	bool                                               Running_;                                                   // 0x0002   (0x0001)  
	bool                                               Sprinting_;                                                 // 0x0003   (0x0001)  
};

/// Struct /Script/ALSV4_CPP.ALSStance
/// Size: 0x0003 (0x000000 - 0x000003)
struct FALSStance
{ 
	EALSStance                                         Stance;                                                     // 0x0000   (0x0001)  
	bool                                               Standing_;                                                  // 0x0001   (0x0001)  
	bool                                               Crouching_;                                                 // 0x0002   (0x0001)  
};

/// Struct /Script/ALSV4_CPP.ALSOverlayState
/// Size: 0x000E (0x000000 - 0x00000E)
struct FALSOverlayState
{ 
	EALSOverlayState                                   State;                                                      // 0x0000   (0x0001)  
	bool                                               Default_;                                                   // 0x0001   (0x0001)  
	bool                                               Masculine_;                                                 // 0x0002   (0x0001)  
	bool                                               Feminine_;                                                  // 0x0003   (0x0001)  
	bool                                               Injured_;                                                   // 0x0004   (0x0001)  
	bool                                               HandsTied_;                                                 // 0x0005   (0x0001)  
	bool                                               Rifle_;                                                     // 0x0006   (0x0001)  
	bool                                               PistolOneHanded_;                                           // 0x0007   (0x0001)  
	bool                                               PistolTwoHanded_;                                           // 0x0008   (0x0001)  
	bool                                               Bow_;                                                       // 0x0009   (0x0001)  
	bool                                               Torch_;                                                     // 0x000A   (0x0001)  
	bool                                               Binoculars_;                                                // 0x000B   (0x0001)  
	bool                                               Box_;                                                       // 0x000C   (0x0001)  
	bool                                               Barrel_;                                                    // 0x000D   (0x0001)  
};

/// Struct /Script/ALSV4_CPP.ALSAnimGraphGrounded
/// Size: 0x0034 (0x000000 - 0x000034)
struct FALSAnimGraphGrounded
{ 
	EALSHipsDirection                                  TrackedHipsDirection;                                       // 0x0000   (0x0001)  
	bool                                               bShouldMove;                                                // 0x0001   (0x0001)  
	bool                                               bRotateL;                                                   // 0x0002   (0x0001)  
	bool                                               bRotateR;                                                   // 0x0003   (0x0001)  
	bool                                               bPivot;                                                     // 0x0004   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0005   (0x0003)  MISSED
	float                                              RotateRate;                                                 // 0x0008   (0x0004)  
	float                                              RotationScale;                                              // 0x000C   (0x0004)  
	float                                              DiagonalScaleAmount;                                        // 0x0010   (0x0004)  
	float                                              WalkRunBlend;                                               // 0x0014   (0x0004)  
	float                                              StandingPlayRate;                                           // 0x0018   (0x0004)  
	float                                              CrouchingPlayRate;                                          // 0x001C   (0x0004)  
	float                                              StrideBlend;                                                // 0x0020   (0x0004)  
	float                                              FYaw;                                                       // 0x0024   (0x0004)  
	float                                              BYaw;                                                       // 0x0028   (0x0004)  
	float                                              LYaw;                                                       // 0x002C   (0x0004)  
	float                                              RYaw;                                                       // 0x0030   (0x0004)  
};

/// Struct /Script/ALSV4_CPP.ALSVelocityBlend
/// Size: 0x0010 (0x000000 - 0x000010)
struct FALSVelocityBlend
{ 
	float                                              F;                                                          // 0x0000   (0x0004)  
	float                                              B;                                                          // 0x0004   (0x0004)  
	float                                              L;                                                          // 0x0008   (0x0004)  
	float                                              R;                                                          // 0x000C   (0x0004)  
};

/// Struct /Script/ALSV4_CPP.ALSLeanAmount
/// Size: 0x0008 (0x000000 - 0x000008)
struct FALSLeanAmount
{ 
	float                                              LR;                                                         // 0x0000   (0x0004)  
	float                                              FB;                                                         // 0x0004   (0x0004)  
};

/// Struct /Script/ALSV4_CPP.ALSGroundedEntryState
/// Size: 0x0003 (0x000000 - 0x000003)
struct FALSGroundedEntryState
{ 
	EALSGroundedEntryState                             State;                                                      // 0x0000   (0x0001)  
	bool                                               None_;                                                      // 0x0001   (0x0001)  
	bool                                               Roll_;                                                      // 0x0002   (0x0001)  
};

/// Struct /Script/ALSV4_CPP.ALSMovementDirection
/// Size: 0x0005 (0x000000 - 0x000005)
struct FALSMovementDirection
{ 
	EALSMovementDirection                              MovementDirection;                                          // 0x0000   (0x0001)  
	bool                                               Forward_;                                                   // 0x0001   (0x0001)  
	bool                                               Right_;                                                     // 0x0002   (0x0001)  
	bool                                               Left_;                                                      // 0x0003   (0x0001)  
	bool                                               Backward_;                                                  // 0x0004   (0x0001)  
};

/// Struct /Script/ALSV4_CPP.ALSAnimGraphInAir
/// Size: 0x0010 (0x000000 - 0x000010)
struct FALSAnimGraphInAir
{ 
	bool                                               bJumped;                                                    // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              JumpPlayRate;                                               // 0x0004   (0x0004)  
	float                                              FallSpeed;                                                  // 0x0008   (0x0004)  
	float                                              LandPrediction;                                             // 0x000C   (0x0004)  
};

/// Struct /Script/ALSV4_CPP.ALSAnimGraphAimingValues
/// Size: 0x0058 (0x000000 - 0x000058)
struct FALSAnimGraphAimingValues
{ 
	FRotator                                           SmoothedAimingRotation;                                     // 0x0000   (0x0018)  
	FRotator                                           SpineRotation;                                              // 0x0018   (0x0018)  
	FVector2D                                          AimingAngle;                                                // 0x0030   (0x0010)  
	float                                              AimSweepTime;                                               // 0x0040   (0x0004)  
	float                                              InputYawOffsetTime;                                         // 0x0044   (0x0004)  
	float                                              ForwardYawTime;                                             // 0x0048   (0x0004)  
	float                                              LeftYawTime;                                                // 0x004C   (0x0004)  
	float                                              RightYawTime;                                               // 0x0050   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0054   (0x0004)  MISSED
};

/// Struct /Script/ALSV4_CPP.ALSAnimGraphLayerBlending
/// Size: 0x0060 (0x000000 - 0x000060)
struct FALSAnimGraphLayerBlending
{ 
	int32_t                                            OverlayOverrideState;                                       // 0x0000   (0x0004)  
	float                                              EnableAimOffset;                                            // 0x0004   (0x0004)  
	float                                              BasePose_N;                                                 // 0x0008   (0x0004)  
	float                                              BasePose_CLF;                                               // 0x000C   (0x0004)  
	float                                              Arm_L;                                                      // 0x0010   (0x0004)  
	float                                              Arm_L_Add;                                                  // 0x0014   (0x0004)  
	float                                              Arm_L_LS;                                                   // 0x0018   (0x0004)  
	float                                              Arm_L_MS;                                                   // 0x001C   (0x0004)  
	float                                              Arm_R;                                                      // 0x0020   (0x0004)  
	float                                              Arm_R_Add;                                                  // 0x0024   (0x0004)  
	float                                              Arm_R_LS;                                                   // 0x0028   (0x0004)  
	float                                              Arm_R_MS;                                                   // 0x002C   (0x0004)  
	float                                              Hand_L;                                                     // 0x0030   (0x0004)  
	float                                              Hand_R;                                                     // 0x0034   (0x0004)  
	float                                              Legs;                                                       // 0x0038   (0x0004)  
	float                                              Legs_Add;                                                   // 0x003C   (0x0004)  
	float                                              Pelvis;                                                     // 0x0040   (0x0004)  
	float                                              Pelvis_Add;                                                 // 0x0044   (0x0004)  
	float                                              Spine;                                                      // 0x0048   (0x0004)  
	float                                              Spine_Add;                                                  // 0x004C   (0x0004)  
	float                                              Head;                                                       // 0x0050   (0x0004)  
	float                                              Head_Add;                                                   // 0x0054   (0x0004)  
	float                                              EnableHandIK_L;                                             // 0x0058   (0x0004)  
	float                                              EnableHandIK_R;                                             // 0x005C   (0x0004)  
};

/// Struct /Script/ALSV4_CPP.ALSAnimGraphFootIK
/// Size: 0x0138 (0x000000 - 0x000138)
struct FALSAnimGraphFootIK
{ 
	float                                              FootLock_L_Alpha;                                           // 0x0000   (0x0004)  
	float                                              FootLock_R_Alpha;                                           // 0x0004   (0x0004)  
	bool                                               UseFootLockCurve_L;                                         // 0x0008   (0x0001)  
	bool                                               UseFootLockCurve_R;                                         // 0x0009   (0x0001)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x000A   (0x0006)  MISSED
	FVector                                            FootLock_L_Location;                                        // 0x0010   (0x0018)  
	FVector                                            TargetFootLock_R_Location;                                  // 0x0028   (0x0018)  
	FVector                                            FootLock_R_Location;                                        // 0x0040   (0x0018)  
	FRotator                                           TargetFootLock_L_Rotation;                                  // 0x0058   (0x0018)  
	FRotator                                           FootLock_L_Rotation;                                        // 0x0070   (0x0018)  
	FRotator                                           TargetFootLock_R_Rotation;                                  // 0x0088   (0x0018)  
	FRotator                                           FootLock_R_Rotation;                                        // 0x00A0   (0x0018)  
	FVector                                            FootOffset_L_Location;                                      // 0x00B8   (0x0018)  
	FVector                                            FootOffset_R_Location;                                      // 0x00D0   (0x0018)  
	FRotator                                           FootOffset_L_Rotation;                                      // 0x00E8   (0x0018)  
	FRotator                                           FootOffset_R_Rotation;                                      // 0x0100   (0x0018)  
	FVector                                            PelvisOffset;                                               // 0x0118   (0x0018)  
	float                                              PelvisAlpha;                                                // 0x0130   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0134   (0x0004)  MISSED
};

/// Struct /Script/ALSV4_CPP.ALSTurnInPlaceAsset
/// Size: 0x0020 (0x000000 - 0x000020)
struct FALSTurnInPlaceAsset
{ 
	class UAnimSequenceBase*                           Animation;                                                  // 0x0000   (0x0008)  
	float                                              AnimatedAngle;                                              // 0x0008   (0x0004)  
	FName                                              SlotName;                                                   // 0x000C   (0x0008)  
	float                                              PlayRate;                                                   // 0x0014   (0x0004)  
	bool                                               ScaleTurnAngle;                                             // 0x0018   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0019   (0x0007)  MISSED
};

/// Struct /Script/ALSV4_CPP.ALSAnimTurnInPlace
/// Size: 0x0118 (0x000000 - 0x000118)
struct FALSAnimTurnInPlace
{ 
	float                                              TurnCheckMinAngle;                                          // 0x0000   (0x0004)  
	float                                              Turn180Threshold;                                           // 0x0004   (0x0004)  
	float                                              AimYawRateLimit;                                            // 0x0008   (0x0004)  
	float                                              ElapsedDelayTime;                                           // 0x000C   (0x0004)  
	float                                              MinAngleDelay;                                              // 0x0010   (0x0004)  
	float                                              MaxAngleDelay;                                              // 0x0014   (0x0004)  
	FALSTurnInPlaceAsset                               N_TurnIP_L90;                                               // 0x0018   (0x0020)  
	FALSTurnInPlaceAsset                               N_TurnIP_R90;                                               // 0x0038   (0x0020)  
	FALSTurnInPlaceAsset                               N_TurnIP_L180;                                              // 0x0058   (0x0020)  
	FALSTurnInPlaceAsset                               N_TurnIP_R180;                                              // 0x0078   (0x0020)  
	FALSTurnInPlaceAsset                               CLF_TurnIP_L90;                                             // 0x0098   (0x0020)  
	FALSTurnInPlaceAsset                               CLF_TurnIP_R90;                                             // 0x00B8   (0x0020)  
	FALSTurnInPlaceAsset                               CLF_TurnIP_L180;                                            // 0x00D8   (0x0020)  
	FALSTurnInPlaceAsset                               CLF_TurnIP_R180;                                            // 0x00F8   (0x0020)  
};

/// Struct /Script/ALSV4_CPP.ALSAnimRotateInPlace
/// Size: 0x0018 (0x000000 - 0x000018)
struct FALSAnimRotateInPlace
{ 
	float                                              RotateMinThreshold;                                         // 0x0000   (0x0004)  
	float                                              RotateMaxThreshold;                                         // 0x0004   (0x0004)  
	float                                              AimYawRateMinRange;                                         // 0x0008   (0x0004)  
	float                                              AimYawRateMaxRange;                                         // 0x000C   (0x0004)  
	float                                              MinPlayRate;                                                // 0x0010   (0x0004)  
	float                                              MaxPlayRate;                                                // 0x0014   (0x0004)  
};

/// Struct /Script/ALSV4_CPP.ALSAnimConfiguration
/// Size: 0x0038 (0x000000 - 0x000038)
struct FALSAnimConfiguration
{ 
	float                                              AnimatedWalkSpeed;                                          // 0x0000   (0x0004)  
	float                                              AnimatedRunSpeed;                                           // 0x0004   (0x0004)  
	float                                              AnimatedSprintSpeed;                                        // 0x0008   (0x0004)  
	float                                              AnimatedCrouchSpeed;                                        // 0x000C   (0x0004)  
	float                                              VelocityBlendInterpSpeed;                                   // 0x0010   (0x0004)  
	float                                              GroundedLeanInterpSpeed;                                    // 0x0014   (0x0004)  
	float                                              InAirLeanInterpSpeed;                                       // 0x0018   (0x0004)  
	float                                              SmoothedAimingRotationInterpSpeed;                          // 0x001C   (0x0004)  
	float                                              InputYawOffsetInterpSpeed;                                  // 0x0020   (0x0004)  
	float                                              TriggerPivotSpeedLimit;                                     // 0x0024   (0x0004)  
	float                                              FootHeight;                                                 // 0x0028   (0x0004)  
	float                                              DynamicTransitionThreshold;                                 // 0x002C   (0x0004)  
	float                                              IK_TraceDistanceAboveFoot;                                  // 0x0030   (0x0004)  
	float                                              IK_TraceDistanceBelowFoot;                                  // 0x0034   (0x0004)  
};

/// Class /Script/ALSV4_CPP.ALSCharacterAnimInstance
/// Size: 0x0550 (0x000350 - 0x0008A0)
class UALSCharacterAnimInstance : public UAnimInstance
{ 
public:
	class AALSBaseCharacter*                           Character;                                                  // 0x0348   (0x0008)  
	FALSAnimCharacterInformation                       CharacterInformation;                                       // 0x0350   (0x00A8)  
	FALSMovementState                                  MovementState;                                              // 0x03F8   (0x0006)  
	FALSMovementAction                                 MovementAction;                                             // 0x03FE   (0x0006)  
	FALSRotationMode                                   RotationMode;                                               // 0x0404   (0x0004)  
	FALSGait                                           Gait;                                                       // 0x0408   (0x0004)  
	FALSStance                                         Stance;                                                     // 0x040C   (0x0003)  
	FALSOverlayState                                   OverlayState;                                               // 0x040F   (0x000E)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x041D   (0x0003)  MISSED
	FALSAnimGraphGrounded                              Grounded;                                                   // 0x0420   (0x0034)  
	FALSVelocityBlend                                  VelocityBlend;                                              // 0x0454   (0x0010)  
	FALSLeanAmount                                     LeanAmount;                                                 // 0x0464   (0x0008)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x046C   (0x0004)  MISSED
	FVector                                            RelativeAccelerationAmount;                                 // 0x0470   (0x0018)  
	FALSGroundedEntryState                             GroundedEntryState;                                         // 0x0488   (0x0003)  
	FALSMovementDirection                              MovementDirection;                                          // 0x048B   (0x0005)  
	FALSAnimGraphInAir                                 InAir;                                                      // 0x0490   (0x0010)  
	FALSAnimGraphAimingValues                          AimingValues;                                               // 0x04A0   (0x0058)  
	FVector2D                                          SmoothedAimingAngle;                                        // 0x04F8   (0x0010)  
	float                                              FlailRate;                                                  // 0x0508   (0x0004)  
	FALSAnimGraphLayerBlending                         LayerBlendingValues;                                        // 0x050C   (0x0060)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x056C   (0x0004)  MISSED
	FALSAnimGraphFootIK                                FootIKValues;                                               // 0x0570   (0x0138)  
	FALSAnimTurnInPlace                                TurnInPlaceValues;                                          // 0x06A8   (0x0118)  
	FALSAnimRotateInPlace                              RotateInPlace;                                              // 0x07C0   (0x0018)  
	FALSAnimConfiguration                              Config;                                                     // 0x07D8   (0x0038)  
	class UCurveFloat*                                 DiagonalScaleAmountCurve;                                   // 0x0810   (0x0008)  
	class UCurveFloat*                                 StrideBlend_N_Walk;                                         // 0x0818   (0x0008)  
	class UCurveFloat*                                 StrideBlend_N_Run;                                          // 0x0820   (0x0008)  
	class UCurveFloat*                                 StrideBlend_C_Walk;                                         // 0x0828   (0x0008)  
	class UCurveFloat*                                 LandPredictionCurve;                                        // 0x0830   (0x0008)  
	class UCurveFloat*                                 LeanInAirCurve;                                             // 0x0838   (0x0008)  
	class UCurveVector*                                YawOffset_FB;                                               // 0x0840   (0x0008)  
	class UCurveVector*                                YawOffset_LR;                                               // 0x0848   (0x0008)  
	class UAnimSequenceBase*                           TransitionAnim_R;                                           // 0x0850   (0x0008)  
	class UAnimSequenceBase*                           TransitionAnim_L;                                           // 0x0858   (0x0008)  
	FName                                              IkFootL_BoneName;                                           // 0x0860   (0x0008)  
	FName                                              IkFootR_BoneName;                                           // 0x0868   (0x0008)  
	unsigned char                                      UnknownData03_5[0x20];                                      // 0x0870   (0x0020)  MISSED
	class UALSDebugComponent*                          ALSDebugComponent;                                          // 0x0890   (0x0008)  
	unsigned char                                      UnknownData04_6[0x8];                                       // 0x0898   (0x0008)  MISSED


	/// Functions
	// Function /Script/ALSV4_CPP.ALSCharacterAnimInstance.ShouldMoveCheck
	// bool ShouldMoveCheck();                                                                                               // [0x18ddee0] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ALSV4_CPP.ALSCharacterAnimInstance.SetTrackedHipsDirection
	// void SetTrackedHipsDirection(EALSHipsDirection HipsDirection);                                                        // [0x18dde60] Final|Native|Protected|BlueprintCallable 
	// Function /Script/ALSV4_CPP.ALSCharacterAnimInstance.SetGroundedEntryState
	// void SetGroundedEntryState(EALSGroundedEntryState NewState);                                                          // [0x18ddd20] Final|Native|Protected|BlueprintCallable 
	// Function /Script/ALSV4_CPP.ALSCharacterAnimInstance.PlayTransitionChecked
	// void PlayTransitionChecked(FALSDynamicMontageParams& Parameters);                                                     // [0x18dd9e0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/ALSV4_CPP.ALSCharacterAnimInstance.PlayTransition
	// void PlayTransition(FALSDynamicMontageParams& Parameters);                                                            // [0x18dd940] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/ALSV4_CPP.ALSCharacterAnimInstance.PlayDynamicTransition
	// void PlayDynamicTransition(float ReTriggerDelay, FALSDynamicMontageParams Parameters);                                // [0x18dd850] Final|Native|Public|BlueprintCallable 
	// Function /Script/ALSV4_CPP.ALSCharacterAnimInstance.OnPivot
	// void OnPivot();                                                                                                       // [0x18dd710] Final|Native|Public|BlueprintCallable 
	// Function /Script/ALSV4_CPP.ALSCharacterAnimInstance.OnJumped
	// void OnJumped();                                                                                                      // [0x18dd640] Final|Native|Public|BlueprintCallable 
	// Function /Script/ALSV4_CPP.ALSCharacterAnimInstance.CanTurnInPlace
	// bool CanTurnInPlace();                                                                                                // [0x18dd000] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ALSV4_CPP.ALSCharacterAnimInstance.CanRotateInPlace
	// bool CanRotateInPlace();                                                                                              // [0x18dcfd0] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ALSV4_CPP.ALSCharacterAnimInstance.CanDynamicTransition
	// bool CanDynamicTransition();                                                                                          // [0x18dcfa0] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/ALSV4_CPP.ALSCharacterMovementComponent
/// Size: 0x0020 (0x000F00 - 0x000F20)
class UALSCharacterMovementComponent : public UCharacterMovementComponent
{ 
public:
	char                                               bRequestMovementSettingsChange;                             // 0x0EF8   (0x0001)  
	EALSGait                                           AllowedGait;                                                // 0x0EF9   (0x0001)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x0EFA   (0x0006)  MISSED
	FALSMovementSettings                               CurrentMovementSettings;                                    // 0x0F00   (0x0020)  


	/// Functions
	// Function /Script/ALSV4_CPP.ALSCharacterMovementComponent.SetMovementSettings
	// void SetMovementSettings(FALSMovementSettings NewMovementSettings);                                                   // [0x18dddb0] Final|Native|Public|BlueprintCallable 
	// Function /Script/ALSV4_CPP.ALSCharacterMovementComponent.SetAllowedGait
	// void SetAllowedGait(EALSGait NewAllowedGait);                                                                         // [0x18ddca0] Final|Native|Public|BlueprintCallable 
	// Function /Script/ALSV4_CPP.ALSCharacterMovementComponent.Server_SetAllowedGait
	// void Server_SetAllowedGait(EALSGait NewAllowedGait);                                                                  // [0x18ddc20] Net|NetReliableNative|Event|Public|NetServer 
};

/// Class /Script/ALSV4_CPP.ALSDebugComponent
/// Size: 0x0048 (0x0000A0 - 0x0000E8)
class UALSDebugComponent : public UActorComponent
{ 
public:
	class AALSBaseCharacter*                           OwnerCharacter;                                             // 0x00A0   (0x0008)  
	bool                                               bSlomo;                                                     // 0x00A8   (0x0001)  
	bool                                               bShowHUD;                                                   // 0x00A9   (0x0001)  
	bool                                               bShowCharacterInfo;                                         // 0x00AA   (0x0001)  
	unsigned char                                      UnknownData00_5[0x5];                                       // 0x00AB   (0x0005)  MISSED
	class USkeletalMesh*                               DebugSkeletalMesh;                                          // 0x00B0   (0x0008)  
	TArray<class AALSBaseCharacter*>                   AvailableDebugCharacters;                                   // 0x00B8   (0x0010)  
	class AALSBaseCharacter*                           DebugFocusCharacter;                                        // 0x00C8   (0x0008)  
	unsigned char                                      UnknownData01_5[0x8];                                       // 0x00D0   (0x0008)  MISSED
	class USkeletalMesh*                               DefaultSkeletalMesh;                                        // 0x00D8   (0x0008)  
	unsigned char                                      UnknownData02_6[0x8];                                       // 0x00E0   (0x0008)  MISSED


	/// Functions
	// Function /Script/ALSV4_CPP.ALSDebugComponent.UpdateColoringSystem
	// void UpdateColoringSystem();                                                                                          // [0x2119480] Event|Public|BlueprintEvent 
	// Function /Script/ALSV4_CPP.ALSDebugComponent.ToggleTraces
	// void ToggleTraces();                                                                                                  // [0x18de0b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/ALSV4_CPP.ALSDebugComponent.ToggleSlomo
	// void ToggleSlomo();                                                                                                   // [0x18de090] Final|Native|Public|BlueprintCallable 
	// Function /Script/ALSV4_CPP.ALSDebugComponent.ToggleLayerColors
	// void ToggleLayerColors();                                                                                             // [0x18de060] Final|Native|Public|BlueprintCallable 
	// Function /Script/ALSV4_CPP.ALSDebugComponent.ToggleHud
	// void ToggleHud();                                                                                                     // [0x18de030] Final|Native|Public|BlueprintCallable 
	// Function /Script/ALSV4_CPP.ALSDebugComponent.ToggleGlobalTimeDilationLocal
	// void ToggleGlobalTimeDilationLocal(float TimeDilation);                                                               // [0x18ddfb0] Final|Native|Public|BlueprintCallable 
	// Function /Script/ALSV4_CPP.ALSDebugComponent.ToggleDebugView
	// void ToggleDebugView();                                                                                               // [0x18ddf90] Final|Native|Public|BlueprintCallable 
	// Function /Script/ALSV4_CPP.ALSDebugComponent.ToggleDebugShapes
	// void ToggleDebugShapes();                                                                                             // [0x18ddf60] Final|Native|Public|BlueprintCallable 
	// Function /Script/ALSV4_CPP.ALSDebugComponent.ToggleDebugMesh
	// void ToggleDebugMesh();                                                                                               // [0x18ddf40] Final|Native|Public|BlueprintCallable 
	// Function /Script/ALSV4_CPP.ALSDebugComponent.ToggleCharacterInfo
	// void ToggleCharacterInfo();                                                                                           // [0x18ddf10] Final|Native|Public|BlueprintCallable 
	// Function /Script/ALSV4_CPP.ALSDebugComponent.SetResetColors
	// void SetResetColors();                                                                                                // [0x2119480] Event|Public|BlueprintEvent 
	// Function /Script/ALSV4_CPP.ALSDebugComponent.SetDynamicMaterials
	// void SetDynamicMaterials();                                                                                           // [0x2119480] Event|Public|BlueprintEvent 
	// Function /Script/ALSV4_CPP.ALSDebugComponent.OverlayMenuCycle
	// void OverlayMenuCycle(bool bValue);                                                                                   // [0x18dd7c0] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/ALSV4_CPP.ALSDebugComponent.OpenOverlayMenu
	// void OpenOverlayMenu(bool bValue);                                                                                    // [0x18dd730] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/ALSV4_CPP.ALSDebugComponent.OnPlayerControllerInitialized
	// void OnPlayerControllerInitialized(class APlayerController* Controller);                                              // [0x2119480] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/ALSV4_CPP.ALSDebugComponent.GetShowTraces
	// bool GetShowTraces();                                                                                                 // [0x18dd140] Final|Native|Public|BlueprintCallable 
	// Function /Script/ALSV4_CPP.ALSDebugComponent.GetShowLayerColors
	// bool GetShowLayerColors();                                                                                            // [0x18dd120] Final|Native|Public|BlueprintCallable 
	// Function /Script/ALSV4_CPP.ALSDebugComponent.GetShowDebugShapes
	// bool GetShowDebugShapes();                                                                                            // [0x18dd100] Final|Native|Public|BlueprintCallable 
	// Function /Script/ALSV4_CPP.ALSDebugComponent.GetDebugView
	// bool GetDebugView();                                                                                                  // [0x18dd0e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/ALSV4_CPP.ALSDebugComponent.FocusedDebugCharacterCycle
	// void FocusedDebugCharacterCycle(bool bValue);                                                                         // [0x18dd050] Final|Native|Public|BlueprintCallable 
	// Function /Script/ALSV4_CPP.ALSDebugComponent.DrawDebugSpheres
	// void DrawDebugSpheres();                                                                                              // [0x2119480] Event|Public|BlueprintEvent 
};

/// Struct /Script/ALSV4_CPP.ALSMantleTraceSettings
/// Size: 0x0014 (0x000000 - 0x000014)
struct FALSMantleTraceSettings
{ 
	float                                              MaxLedgeHeight;                                             // 0x0000   (0x0004)  
	float                                              MinLedgeHeight;                                             // 0x0004   (0x0004)  
	float                                              ReachDistance;                                              // 0x0008   (0x0004)  
	float                                              ForwardTraceRadius;                                         // 0x000C   (0x0004)  
	float                                              DownwardTraceRadius;                                        // 0x0010   (0x0004)  
};

/// Struct /Script/ALSV4_CPP.ALSMantleParams
/// Size: 0x0030 (0x000000 - 0x000030)
struct FALSMantleParams
{ 
	class UAnimMontage*                                AnimMontage;                                                // 0x0000   (0x0008)  
	class UCurveVector*                                PositionCorrectionCurve;                                    // 0x0008   (0x0008)  
	float                                              StartingPosition;                                           // 0x0010   (0x0004)  
	float                                              PlayRate;                                                   // 0x0014   (0x0004)  
	FVector                                            StartingOffset;                                             // 0x0018   (0x0018)  
};

/// Struct /Script/ALSV4_CPP.ALSComponentAndTransform
/// Size: 0x0070 (0x000000 - 0x000070)
struct FALSComponentAndTransform
{ 
	FTransform                                         Transform;                                                  // 0x0000   (0x0060)  
	class UPrimitiveComponent*                         Component;                                                  // 0x0060   (0x0008)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0068   (0x0008)  MISSED
};

/// Class /Script/ALSV4_CPP.ALSMantleComponent
/// Size: 0x0240 (0x0000A0 - 0x0002E0)
class UALSMantleComponent : public UActorComponent
{ 
public:
	class UTimelineComponent*                          MantleTimeline;                                             // 0x00A0   (0x0008)  
	FALSMantleTraceSettings                            GroundedTraceSettings;                                      // 0x00A8   (0x0014)  
	FALSMantleTraceSettings                            AutomaticTraceSettings;                                     // 0x00BC   (0x0014)  
	FALSMantleTraceSettings                            FallingTraceSettings;                                       // 0x00D0   (0x0014)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x00E4   (0x0004)  MISSED
	class UCurveFloat*                                 MantleTimelineCurve;                                        // 0x00E8   (0x0008)  
	FName                                              MantleObjectDetectionProfile;                               // 0x00F0   (0x0008)  
	SDK_UNDEFINED(1,1113) /* TEnumAsByte<ECollisionChannel> */ __um(WalkableSurfaceDetectionChannel);              // 0x00F8   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x00F9   (0x0007)  MISSED
	FALSMantleParams                                   MantleParams;                                               // 0x0100   (0x0030)  
	FALSComponentAndTransform                          MantleLedgeLS;                                              // 0x0130   (0x0070)  
	FTransform                                         MantleTarget;                                               // 0x01A0   (0x0060)  
	FTransform                                         MantleActualStartOffset;                                    // 0x0200   (0x0060)  
	FTransform                                         MantleAnimatedStartOffset;                                  // 0x0260   (0x0060)  
	float                                              AcceptableVelocityWhileMantling;                            // 0x02C0   (0x0004)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x02C4   (0x0004)  MISSED
	class AALSBaseCharacter*                           OwnerCharacter;                                             // 0x02C8   (0x0008)  
	class UALSDebugComponent*                          ALSDebugComponent;                                          // 0x02D0   (0x0008)  
	unsigned char                                      UnknownData03_6[0x8];                                       // 0x02D8   (0x0008)  MISSED


	/// Functions
	// Function /Script/ALSV4_CPP.ALSMantleComponent.Server_MantleStart
	// void Server_MantleStart(float MantleHeight, FALSComponentAndTransform MantleLedgeWS, EALSMantleType MantleType);      // [0x18dda80] Net|NetReliableNative|Event|Protected|NetServer|BlueprintCallable 
	// Function /Script/ALSV4_CPP.ALSMantleComponent.OnOwnerRagdollStateChanged
	// void OnOwnerRagdollStateChanged(bool bRagdollState);                                                                  // [0x18dd680] Final|Native|Public|BlueprintCallable 
	// Function /Script/ALSV4_CPP.ALSMantleComponent.OnOwnerJumpInput
	// void OnOwnerJumpInput();                                                                                              // [0x18dd660] Final|Native|Public|BlueprintCallable 
	// Function /Script/ALSV4_CPP.ALSMantleComponent.Multicast_MantleStart
	// void Multicast_MantleStart(float MantleHeight, FALSComponentAndTransform MantleLedgeWS, EALSMantleType MantleType);   // [0x18dd4a0] Net|NetReliableNative|Event|NetMulticast|Protected|BlueprintCallable 
	// Function /Script/ALSV4_CPP.ALSMantleComponent.MantleUpdate
	// void MantleUpdate(float BlendIn);                                                                                     // [0x18dd420] Final|Native|Public|BlueprintCallable 
	// Function /Script/ALSV4_CPP.ALSMantleComponent.MantleStart
	// void MantleStart(float MantleHeight, FALSComponentAndTransform& MantleLedgeWS, EALSMantleType MantleType);            // [0x18dd280] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/ALSV4_CPP.ALSMantleComponent.MantleEnd
	// void MantleEnd();                                                                                                     // [0x18dd260] Final|Native|Public|BlueprintCallable 
	// Function /Script/ALSV4_CPP.ALSMantleComponent.MantleCheck
	// bool MantleCheck(FALSMantleTraceSettings& TraceSettings, TEnumAsByte<EDrawDebugTrace> DebugType);                     // [0x18dd160] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/ALSV4_CPP.ALSMantleComponent.GetMantleAsset
	// FALSMantleAsset GetMantleAsset(EALSMantleType MantleType, EALSOverlayState CurrentOverlayState);                      // [0x2119480] Event|Public|BlueprintCallable|BlueprintEvent 
};

/// Class /Script/ALSV4_CPP.ALSMathLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UALSMathLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/ALSV4_CPP.ALSMathLibrary.TransformSub
	// FTransform TransformSub(FTransform& T1, FTransform& T2);                                                              // [0x18e6c80] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/ALSV4_CPP.ALSMathLibrary.TransformAdd
	// FTransform TransformAdd(FTransform& T1, FTransform& T2);                                                              // [0x18e6960] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/ALSV4_CPP.ALSMathLibrary.MantleComponentLocalToWorld
	// FTransform MantleComponentLocalToWorld(FALSComponentAndTransform& CompAndTransform);                                  // [0x18e64c0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/ALSV4_CPP.ALSMathLibrary.GetCapsuleLocationFromBase
	// FVector GetCapsuleLocationFromBase(FVector BaseLocation, float ZOffset, class UCapsuleComponent* capsule);            // [0x18e6200] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/ALSV4_CPP.ALSMathLibrary.GetCapsuleBaseLocation
	// FVector GetCapsuleBaseLocation(float ZOffset, class UCapsuleComponent* capsule);                                      // [0x18e6120] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/ALSV4_CPP.ALSMathLibrary.CapsuleHasRoomCheck
	// bool CapsuleHasRoomCheck(class UCapsuleComponent* capsule, FVector TargetLocation, float HeightOffset, float RadiusOffset, TEnumAsByte<EDrawDebugTrace> DebugType, bool DrawDebugTrace); // [0x18e54b0] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/ALSV4_CPP.ALSMathLibrary.CalculateQuadrant
	// EALSMovementDirection CalculateQuadrant(EALSMovementDirection Current, float FRThreshold, float FLThreshold, float BRThreshold, float BLThreshold, float Buffer, float Angle); // [0x18e4fc0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/ALSV4_CPP.ALSMathLibrary.AngleInRange
	// bool AngleInRange(float Angle, float MinAngle, float MaxAngle, float Buffer, bool IncreaseBuffer);                    // [0x18e4c20] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/ALSV4_CPP.ALSNotifyStateEarlyBlendOut
/// Size: 0x0018 (0x000030 - 0x000048)
class UALSNotifyStateEarlyBlendOut : public UAnimNotifyState
{ 
public:
	class UAnimMontage*                                ThisMontage;                                                // 0x0030   (0x0008)  
	float                                              BlendOutTime;                                               // 0x0038   (0x0004)  
	bool                                               bCheckMovementState;                                        // 0x003C   (0x0001)  
	EALSMovementState                                  MovementStateEquals;                                        // 0x003D   (0x0001)  
	bool                                               bCheckStance;                                               // 0x003E   (0x0001)  
	EALSStance                                         StanceEquals;                                               // 0x003F   (0x0001)  
	bool                                               bCheckMovementInput;                                        // 0x0040   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0041   (0x0007)  MISSED
};

/// Class /Script/ALSV4_CPP.ALSNotifyStateMovementAction
/// Size: 0x0008 (0x000030 - 0x000038)
class UALSNotifyStateMovementAction : public UAnimNotifyState
{ 
public:
	EALSMovementAction                                 MovementAction;                                             // 0x0030   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0031   (0x0007)  MISSED
};

/// Class /Script/ALSV4_CPP.ALSNotifyStateOverlayOverride
/// Size: 0x0008 (0x000030 - 0x000038)
class UALSNotifyStateOverlayOverride : public UAnimNotifyState
{ 
public:
	int32_t                                            OverlayOverrideState;                                       // 0x0030   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0034   (0x0004)  MISSED
};

/// Class /Script/ALSV4_CPP.ALSPlayerCameraBehavior
/// Size: 0x0010 (0x000350 - 0x000360)
class UALSPlayerCameraBehavior : public UAnimInstance
{ 
public:
	EALSMovementState                                  MovementState;                                              // 0x0348   (0x0001)  
	EALSMovementAction                                 MovementAction;                                             // 0x0349   (0x0001)  
	bool                                               bLookingDirection;                                          // 0x034A   (0x0001)  
	bool                                               bVelocityDirection;                                         // 0x034B   (0x0001)  
	bool                                               bAiming;                                                    // 0x034C   (0x0001)  
	EALSGait                                           Gait;                                                       // 0x034D   (0x0001)  
	EALSStance                                         Stance;                                                     // 0x034E   (0x0001)  
	EALSViewMode                                       ViewMode;                                                   // 0x034F   (0x0001)  
	bool                                               bRightShoulder;                                             // 0x0350   (0x0001)  
	bool                                               bDebugView;                                                 // 0x0351   (0x0001)  
	unsigned char                                      UnknownData00_6[0xE];                                       // 0x0352   (0x000E)  MISSED
};

/// Class /Script/ALSV4_CPP.ALSPlayerCameraManager
/// Size: 0x0110 (0x003340 - 0x003450)
class AALSPlayerCameraManager : public APlayerCameraManager
{ 
public:
	class AALSBaseCharacter*                           ControlledCharacter;                                        // 0x3340   (0x0008)  
	class USkeletalMeshComponent*                      CameraBehavior;                                             // 0x3348   (0x0008)  
	FVector                                            RootLocation;                                               // 0x3350   (0x0018)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x3368   (0x0008)  MISSED
	FTransform                                         SmoothedPivotTarget;                                        // 0x3370   (0x0060)  
	FVector                                            PivotLocation;                                              // 0x33D0   (0x0018)  
	FVector                                            TargetCameraLocation;                                       // 0x33E8   (0x0018)  
	FRotator                                           TargetCameraRotation;                                       // 0x3400   (0x0018)  
	FRotator                                           DebugViewRotation;                                          // 0x3418   (0x0018)  
	FVector                                            DebugViewOffset;                                            // 0x3430   (0x0018)  
	class UALSDebugComponent*                          ALSDebugComponent;                                          // 0x3448   (0x0008)  


	/// Functions
	// Function /Script/ALSV4_CPP.ALSPlayerCameraManager.OnPossess
	// void OnPossess(class AALSBaseCharacter* NewCharacter);                                                                // [0x18e6610] Final|Native|Public|BlueprintCallable 
	// Function /Script/ALSV4_CPP.ALSPlayerCameraManager.GetCameraBehaviorParam
	// float GetCameraBehaviorParam(FName CurveName);                                                                        // [0x18e6080] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ALSV4_CPP.ALSPlayerCameraManager.DrawDebugTargets
	// void DrawDebugTargets(FVector PivotTargetLocation);                                                                   // [0x2119480] Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Script/ALSV4_CPP.ALSPlayerCameraManager.CustomCameraBehavior
	// bool CustomCameraBehavior(float DeltaTime, FVector& Location, FRotator& Rotation, float& FOV);                        // [0x18e5690] Final|Native|Protected|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/ALSV4_CPP.ALSPlayerCameraManager.CalculateAxisIndependentLag
	// FVector CalculateAxisIndependentLag(FVector CurrentLocation, FVector TargetLocation, FRotator CameraRotation, FVector LagSpeeds, float DeltaTime); // [0x18e4dc0] Final|Native|Static|Protected|HasDefaults|BlueprintCallable 
};

/// Class /Script/ALSV4_CPP.ALSPlayerController
/// Size: 0x0018 (0x000850 - 0x000868)
class AALSPlayerController : public APlayerController
{ 
public:
	class AALSBaseCharacter*                           PossessedCharacter;                                         // 0x0850   (0x0008)  
	class UInputMappingContext*                        DefaultInputMappingContext;                                 // 0x0858   (0x0008)  
	class UInputMappingContext*                        DebugInputMappingContext;                                   // 0x0860   (0x0008)  


	/// Functions
	// Function /Script/ALSV4_CPP.ALSPlayerController.WalkAction
	// void WalkAction(FInputActionValue& Value);                                                                            // [0x18e7040] Final|Native|Protected|HasOutParms 
	// Function /Script/ALSV4_CPP.ALSPlayerController.VelocityDirectionAction
	// void VelocityDirectionAction(FInputActionValue& Value);                                                               // [0x18e6f90] Final|Native|Protected|HasOutParms 
	// Function /Script/ALSV4_CPP.ALSPlayerController.StanceAction
	// void StanceAction(FInputActionValue& Value);                                                                          // [0x18e68b0] Final|Native|Protected|HasOutParms 
	// Function /Script/ALSV4_CPP.ALSPlayerController.SprintAction
	// void SprintAction(FInputActionValue& Value);                                                                          // [0x18e6800] Final|Native|Protected|HasOutParms 
	// Function /Script/ALSV4_CPP.ALSPlayerController.RightMovementAction
	// void RightMovementAction(FInputActionValue& Value);                                                                   // [0x18e6750] Final|Native|Protected|HasOutParms 
	// Function /Script/ALSV4_CPP.ALSPlayerController.RagdollAction
	// void RagdollAction(FInputActionValue& Value);                                                                         // [0x18e66a0] Final|Native|Protected|HasOutParms 
	// Function /Script/ALSV4_CPP.ALSPlayerController.LookingDirectionAction
	// void LookingDirectionAction(FInputActionValue& Value);                                                                // [0x18e6410] Final|Native|Protected|HasOutParms 
	// Function /Script/ALSV4_CPP.ALSPlayerController.JumpAction
	// void JumpAction(FInputActionValue& Value);                                                                            // [0x18e6360] Final|Native|Protected|HasOutParms 
	// Function /Script/ALSV4_CPP.ALSPlayerController.ForwardMovementAction
	// void ForwardMovementAction(FInputActionValue& Value);                                                                 // [0x18e5fd0] Final|Native|Protected|HasOutParms 
	// Function /Script/ALSV4_CPP.ALSPlayerController.DebugToggleTracesAction
	// void DebugToggleTracesAction(FInputActionValue& Value);                                                               // [0x18e5f20] Final|Native|Protected|HasOutParms 
	// Function /Script/ALSV4_CPP.ALSPlayerController.DebugToggleSlomoAction
	// void DebugToggleSlomoAction(FInputActionValue& Value);                                                                // [0x18e5e70] Final|Native|Protected|HasOutParms 
	// Function /Script/ALSV4_CPP.ALSPlayerController.DebugToggleShapesAction
	// void DebugToggleShapesAction(FInputActionValue& Value);                                                               // [0x18e5dc0] Final|Native|Protected|HasOutParms 
	// Function /Script/ALSV4_CPP.ALSPlayerController.DebugToggleMeshAction
	// void DebugToggleMeshAction(FInputActionValue& Value);                                                                 // [0x18e5d10] Final|Native|Protected|HasOutParms 
	// Function /Script/ALSV4_CPP.ALSPlayerController.DebugToggleLayerColorsAction
	// void DebugToggleLayerColorsAction(FInputActionValue& Value);                                                          // [0x18e5c60] Final|Native|Protected|HasOutParms 
	// Function /Script/ALSV4_CPP.ALSPlayerController.DebugToggleHudAction
	// void DebugToggleHudAction(FInputActionValue& Value);                                                                  // [0x18e5bb0] Final|Native|Protected|HasOutParms 
	// Function /Script/ALSV4_CPP.ALSPlayerController.DebugToggleDebugViewAction
	// void DebugToggleDebugViewAction(FInputActionValue& Value);                                                            // [0x18e5b00] Final|Native|Protected|HasOutParms 
	// Function /Script/ALSV4_CPP.ALSPlayerController.DebugToggleCharacterInfoAction
	// void DebugToggleCharacterInfoAction(FInputActionValue& Value);                                                        // [0x18e5a50] Final|Native|Protected|HasOutParms 
	// Function /Script/ALSV4_CPP.ALSPlayerController.DebugOverlayMenuCycleAction
	// void DebugOverlayMenuCycleAction(FInputActionValue& Value);                                                           // [0x18e59a0] Final|Native|Protected|HasOutParms 
	// Function /Script/ALSV4_CPP.ALSPlayerController.DebugOpenOverlayMenuAction
	// void DebugOpenOverlayMenuAction(FInputActionValue& Value);                                                            // [0x18e58f0] Final|Native|Protected|HasOutParms 
	// Function /Script/ALSV4_CPP.ALSPlayerController.DebugFocusedCharacterCycleAction
	// void DebugFocusedCharacterCycleAction(FInputActionValue& Value);                                                      // [0x18e5840] Final|Native|Protected|HasOutParms 
	// Function /Script/ALSV4_CPP.ALSPlayerController.CameraUpAction
	// void CameraUpAction(FInputActionValue& Value);                                                                        // [0x18e5400] Final|Native|Protected|HasOutParms 
	// Function /Script/ALSV4_CPP.ALSPlayerController.CameraTapAction
	// void CameraTapAction(FInputActionValue& Value);                                                                       // [0x18e5350] Final|Native|Protected|HasOutParms 
	// Function /Script/ALSV4_CPP.ALSPlayerController.CameraRightAction
	// void CameraRightAction(FInputActionValue& Value);                                                                     // [0x18e52a0] Final|Native|Protected|HasOutParms 
	// Function /Script/ALSV4_CPP.ALSPlayerController.CameraHeldAction
	// void CameraHeldAction(FInputActionValue& Value);                                                                      // [0x18e51f0] Final|Native|Protected|HasOutParms 
	// Function /Script/ALSV4_CPP.ALSPlayerController.AimAction
	// void AimAction(FInputActionValue& Value);                                                                             // [0x18e4b70] Final|Native|Protected|HasOutParms 
};

/// Class /Script/ALSV4_CPP.ALS_BTTask_GetRandomLocation
/// Size: 0x0010 (0x000098 - 0x0000A8)
class UALS_BTTask_GetRandomLocation : public UBTTask_BlackboardBase
{ 
public:
	float                                              MaxDistance;                                                // 0x0098   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x009C   (0x0004)  MISSED
	class UClass*                                      Filter;                                                     // 0x00A0   (0x0008)  
};

/// Class /Script/ALSV4_CPP.ALS_BTTask_SetFocusToPlayer
/// Size: 0x0000 (0x000070 - 0x000070)
class UALS_BTTask_SetFocusToPlayer : public UBTTaskNode
{ 
public:
};

/// Struct /Script/ALSV4_CPP.ALSDynamicMontageParams
/// Size: 0x0018 (0x000000 - 0x000018)
struct FALSDynamicMontageParams
{ 
	class UAnimSequenceBase*                           Animation;                                                  // 0x0000   (0x0008)  
	float                                              BlendInTime;                                                // 0x0008   (0x0004)  
	float                                              BlendOutTime;                                               // 0x000C   (0x0004)  
	float                                              PlayRate;                                                   // 0x0010   (0x0004)  
	float                                              StartTime;                                                  // 0x0014   (0x0004)  
};

/// Struct /Script/ALSV4_CPP.ALSCameraSettings
/// Size: 0x0030 (0x000000 - 0x000030)
struct FALSCameraSettings
{ 
	float                                              TargetArmLength;                                            // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	FVector                                            SocketOffset;                                               // 0x0008   (0x0018)  
	float                                              LagSpeed;                                                   // 0x0020   (0x0004)  
	float                                              RotationLagSpeed;                                           // 0x0024   (0x0004)  
	bool                                               bDoCollisionTest;                                           // 0x0028   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0029   (0x0007)  MISSED
};

/// Struct /Script/ALSV4_CPP.ALSCameraGaitSettings
/// Size: 0x00C0 (0x000000 - 0x0000C0)
struct FALSCameraGaitSettings
{ 
	FALSCameraSettings                                 Walking;                                                    // 0x0000   (0x0030)  
	FALSCameraSettings                                 Running;                                                    // 0x0030   (0x0030)  
	FALSCameraSettings                                 Sprinting;                                                  // 0x0060   (0x0030)  
	FALSCameraSettings                                 Crouching;                                                  // 0x0090   (0x0030)  
};

/// Struct /Script/ALSV4_CPP.ALSCameraStateSettings
/// Size: 0x0240 (0x000000 - 0x000240)
struct FALSCameraStateSettings
{ 
	FALSCameraGaitSettings                             VelocityDirection;                                          // 0x0000   (0x00C0)  
	FALSCameraGaitSettings                             LookingDirection;                                           // 0x00C0   (0x00C0)  
	FALSCameraGaitSettings                             Aiming;                                                     // 0x0180   (0x00C0)  
};

/// Struct /Script/ALSV4_CPP.ALSMantleAsset
/// Size: 0x0040 (0x000000 - 0x000040)
struct FALSMantleAsset
{ 
	class UAnimMontage*                                AnimMontage;                                                // 0x0000   (0x0008)  
	class UCurveVector*                                PositionCorrectionCurve;                                    // 0x0008   (0x0008)  
	FVector                                            StartingOffset;                                             // 0x0010   (0x0018)  
	float                                              LowHeight;                                                  // 0x0028   (0x0004)  
	float                                              LowPlayRate;                                                // 0x002C   (0x0004)  
	float                                              LowStartPosition;                                           // 0x0030   (0x0004)  
	float                                              HighHeight;                                                 // 0x0034   (0x0004)  
	float                                              HighPlayRate;                                               // 0x0038   (0x0004)  
	float                                              HighStartPosition;                                          // 0x003C   (0x0004)  
};

/// Struct /Script/ALSV4_CPP.ALSRotateInPlaceAsset
/// Size: 0x0020 (0x000000 - 0x000020)
struct FALSRotateInPlaceAsset
{ 
	class UAnimSequenceBase*                           Animation;                                                  // 0x0000   (0x0008)  
	FName                                              SlotName;                                                   // 0x0008   (0x0008)  
	float                                              SlowTurnRate;                                               // 0x0010   (0x0004)  
	float                                              FastTurnRate;                                               // 0x0014   (0x0004)  
	float                                              SlowPlayRate;                                               // 0x0018   (0x0004)  
	float                                              FastPlayRate;                                               // 0x001C   (0x0004)  
};

/// Struct /Script/ALSV4_CPP.ALSHitFX
/// Size: 0x0158 (0x000008 - 0x000160)
struct FALSHitFX : FTableRowBase
{ 
	SDK_UNDEFINED(1,1114) /* TEnumAsByte<EPhysicalSurface> */ __um(SurfaceType);                                   // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0009   (0x0007)  MISSED
	SDK_UNDEFINED(48,1115) /* TWeakObjectPtr<USoundBase*> */ __um(Sound);                                          // 0x0010   (0x0030)  
	EALSSpawnType                                      SoundSpawnType;                                             // 0x0040   (0x0001)  
	SDK_UNDEFINED(1,1116) /* TEnumAsByte<EAttachLocation> */ __um(SoundAttachmentType);                            // 0x0041   (0x0001)  
	unsigned char                                      UnknownData01_5[0x6];                                       // 0x0042   (0x0006)  MISSED
	FVector                                            SoundLocationOffset;                                        // 0x0048   (0x0018)  
	FRotator                                           SoundRotationOffset;                                        // 0x0060   (0x0018)  
	SDK_UNDEFINED(48,1117) /* TWeakObjectPtr<UMaterialInterface*> */ __um(DecalMaterial);                          // 0x0078   (0x0030)  
	EALSSpawnType                                      DecalSpawnType;                                             // 0x00A8   (0x0001)  
	SDK_UNDEFINED(1,1118) /* TEnumAsByte<EAttachLocation> */ __um(DecalAttachmentType);                            // 0x00A9   (0x0001)  
	unsigned char                                      UnknownData02_5[0x2];                                       // 0x00AA   (0x0002)  MISSED
	float                                              DecalLifeSpan;                                              // 0x00AC   (0x0004)  
	FVector                                            DecalSize;                                                  // 0x00B0   (0x0018)  
	FVector                                            DecalLocationOffset;                                        // 0x00C8   (0x0018)  
	FRotator                                           DecalRotationOffset;                                        // 0x00E0   (0x0018)  
	SDK_UNDEFINED(48,1119) /* TWeakObjectPtr<UNiagaraSystem*> */ __um(NiagaraSystem);                              // 0x00F8   (0x0030)  
	EALSSpawnType                                      NiagaraSpawnType;                                           // 0x0128   (0x0001)  
	SDK_UNDEFINED(1,1120) /* TEnumAsByte<EAttachLocation> */ __um(NiagaraAttachmentType);                          // 0x0129   (0x0001)  
	unsigned char                                      UnknownData03_5[0x6];                                       // 0x012A   (0x0006)  MISSED
	FVector                                            NiagaraLocationOffset;                                      // 0x0130   (0x0018)  
	FRotator                                           NiagaraRotationOffset;                                      // 0x0148   (0x0018)  
};

