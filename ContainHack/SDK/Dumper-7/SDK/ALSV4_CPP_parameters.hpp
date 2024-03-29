#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x1 (0x1 - 0x0)
// Function ALSV4_CPP.ALSBaseCharacter.SprintAction
struct UALSBaseCharacter_SprintAction_Params
{
public:
	bool                                         bValue;                                            // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ALSV4_CPP.ALSBaseCharacter.SetVisibleMesh
struct UALSBaseCharacter_SetVisibleMesh_Params
{
public:
	class USkeletalMesh*                         NewSkeletalMesh;                                   // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// Function ALSV4_CPP.ALSBaseCharacter.SetViewMode
struct UALSBaseCharacter_SetViewMode_Params
{
public:
	enum class EALSViewMode                      NewViewMode;                                       // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bForce;                                            // 0x1(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// Function ALSV4_CPP.ALSBaseCharacter.SetStance
struct UALSBaseCharacter_SetStance_Params
{
public:
	enum class EALSStance                        NewStance;                                         // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bForce;                                            // 0x1(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// Function ALSV4_CPP.ALSBaseCharacter.SetRotationMode
struct UALSBaseCharacter_SetRotationMode_Params
{
public:
	enum class EALSRotationMode                  NewRotationMode;                                   // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bForce;                                            // 0x1(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ALSV4_CPP.ALSBaseCharacter.SetRightShoulder
struct UALSBaseCharacter_SetRightShoulder_Params
{
public:
	bool                                         bNewRightShoulder;                                 // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// Function ALSV4_CPP.ALSBaseCharacter.SetOverlayState
struct UALSBaseCharacter_SetOverlayState_Params
{
public:
	enum class EALSOverlayState                  NewState;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bForce;                                            // 0x1(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ALSV4_CPP.ALSBaseCharacter.SetOverlayOverrideState
struct UALSBaseCharacter_SetOverlayOverrideState_Params
{
public:
	int32                                        NewState;                                          // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// Function ALSV4_CPP.ALSBaseCharacter.SetMovementState
struct UALSBaseCharacter_SetMovementState_Params
{
public:
	enum class EALSMovementState                 NewState;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bForce;                                            // 0x1(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// Function ALSV4_CPP.ALSBaseCharacter.SetMovementAction
struct UALSBaseCharacter_SetMovementAction_Params
{
public:
	enum class EALSMovementAction                NewAction;                                         // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bForce;                                            // 0x1(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ALSV4_CPP.ALSBaseCharacter.SetGroundedEntryState
struct UALSBaseCharacter_SetGroundedEntryState_Params
{
public:
	enum class EALSGroundedEntryState            NewState;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// Function ALSV4_CPP.ALSBaseCharacter.SetGait
struct UALSBaseCharacter_SetGait_Params
{
public:
	enum class EALSGait                          NewGait;                                           // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bForce;                                            // 0x1(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ALSV4_CPP.ALSBaseCharacter.SetDesiredStance
struct UALSBaseCharacter_SetDesiredStance_Params
{
public:
	enum class EALSStance                        NewStance;                                         // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ALSV4_CPP.ALSBaseCharacter.SetDesiredRotationMode
struct UALSBaseCharacter_SetDesiredRotationMode_Params
{
public:
	enum class EALSRotationMode                  NewRotMode;                                        // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ALSV4_CPP.ALSBaseCharacter.SetDesiredGait
struct UALSBaseCharacter_SetDesiredGait_Params
{
public:
	enum class EALSGait                          NewGait;                                           // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ALSV4_CPP.ALSBaseCharacter.SetCameraBehavior
struct UALSBaseCharacter_SetCameraBehavior_Params
{
public:
	class UALSPlayerCameraBehavior*              CamBeh;                                            // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function ALSV4_CPP.ALSBaseCharacter.SetActorLocationAndTargetRotation
struct UALSBaseCharacter_SetActorLocationAndTargetRotation_Params
{
public:
	struct FVector                               NewLocation;                                       // 0x0(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              NewRotation;                                       // 0x18(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ALSV4_CPP.ALSBaseCharacter.Server_SetVisibleMesh
struct UALSBaseCharacter_Server_SetVisibleMesh_Params
{
public:
	class USkeletalMesh*                         NewSkeletalMesh;                                   // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// Function ALSV4_CPP.ALSBaseCharacter.Server_SetViewMode
struct UALSBaseCharacter_Server_SetViewMode_Params
{
public:
	enum class EALSViewMode                      NewViewMode;                                       // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bForce;                                            // 0x1(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// Function ALSV4_CPP.ALSBaseCharacter.Server_SetRotationMode
struct UALSBaseCharacter_Server_SetRotationMode_Params
{
public:
	enum class EALSRotationMode                  NewRotationMode;                                   // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bForce;                                            // 0x1(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// Function ALSV4_CPP.ALSBaseCharacter.Server_SetOverlayState
struct UALSBaseCharacter_Server_SetOverlayState_Params
{
public:
	enum class EALSOverlayState                  NewState;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bForce;                                            // 0x1(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function ALSV4_CPP.ALSBaseCharacter.Server_SetMeshLocationDuringRagdoll
struct UALSBaseCharacter_Server_SetMeshLocationDuringRagdoll_Params
{
public:
	struct FVector                               MeshLocation;                                      // 0x0(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ALSV4_CPP.ALSBaseCharacter.Server_SetDesiredStance
struct UALSBaseCharacter_Server_SetDesiredStance_Params
{
public:
	enum class EALSStance                        NewStance;                                         // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ALSV4_CPP.ALSBaseCharacter.Server_SetDesiredRotationMode
struct UALSBaseCharacter_Server_SetDesiredRotationMode_Params
{
public:
	enum class EALSRotationMode                  NewRotMode;                                        // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ALSV4_CPP.ALSBaseCharacter.Server_SetDesiredGait
struct UALSBaseCharacter_Server_SetDesiredGait_Params
{
public:
	enum class EALSGait                          NewGait;                                           // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function ALSV4_CPP.ALSBaseCharacter.Server_RagdollEnd
struct UALSBaseCharacter_Server_RagdollEnd_Params
{
public:
	struct FVector                               CharacterLocation;                                 // 0x0(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ALSV4_CPP.ALSBaseCharacter.Server_PlayMontage
struct UALSBaseCharacter_Server_PlayMontage_Params
{
public:
	class UAnimMontage*                          Montage;                                           // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PlayRate;                                          // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D37[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x4 (0x4 - 0x0)
// Function ALSV4_CPP.ALSBaseCharacter.RightMovementAction
struct UALSBaseCharacter_RightMovementAction_Params
{
public:
	float                                        Value;                                             // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ALSV4_CPP.ALSBaseCharacter.Replicated_PlayMontage
struct UALSBaseCharacter_Replicated_PlayMontage_Params
{
public:
	class UAnimMontage*                          Montage;                                           // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PlayRate;                                          // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D41[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function ALSV4_CPP.ALSBaseCharacter.OnRep_VisibleMesh
struct UALSBaseCharacter_OnRep_VisibleMesh_Params
{
public:
	class USkeletalMesh*                         PreviousSkeletalMesh;                              // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ALSV4_CPP.ALSBaseCharacter.OnRep_ViewMode
struct UALSBaseCharacter_OnRep_ViewMode_Params
{
public:
	enum class EALSViewMode                      PrevViewMode;                                      // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ALSV4_CPP.ALSBaseCharacter.OnRep_RotationMode
struct UALSBaseCharacter_OnRep_RotationMode_Params
{
public:
	enum class EALSRotationMode                  PrevRotMode;                                       // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ALSV4_CPP.ALSBaseCharacter.OnRep_OverlayState
struct UALSBaseCharacter_OnRep_OverlayState_Params
{
public:
	enum class EALSOverlayState                  PrevOverlayState;                                  // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function ALSV4_CPP.ALSBaseCharacter.Multicast_RagdollEnd
struct UALSBaseCharacter_Multicast_RagdollEnd_Params
{
public:
	struct FVector                               CharacterLocation;                                 // 0x0(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ALSV4_CPP.ALSBaseCharacter.Multicast_PlayMontage
struct UALSBaseCharacter_Multicast_PlayMontage_Params
{
public:
	class UAnimMontage*                          Montage;                                           // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PlayRate;                                          // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D56[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function ALSV4_CPP.ALSBaseCharacter.JumpAction
struct UALSBaseCharacter_JumpAction_Params
{
public:
	bool                                         bValue;                                            // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ALSV4_CPP.ALSBaseCharacter.IsRightShoulder
struct UALSBaseCharacter_IsRightShoulder_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ALSV4_CPP.ALSBaseCharacter.IsMoving
struct UALSBaseCharacter_IsMoving_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ALSV4_CPP.ALSBaseCharacter.HasMovementInput
struct UALSBaseCharacter_HasMovementInput_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ALSV4_CPP.ALSBaseCharacter.GetViewMode
struct UALSBaseCharacter_GetViewMode_Params
{
public:
	enum class EALSViewMode                      ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function ALSV4_CPP.ALSBaseCharacter.GetThirdPersonTraceParams
struct UALSBaseCharacter_GetThirdPersonTraceParams_Params
{
public:
	struct FVector                               TraceOrigin;                                       // 0x0(0x18)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TraceRadius;                                       // 0x18(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECollisionChannel                 ReturnValue;                                       // 0x1C(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D71[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x60 (0x60 - 0x0)
// Function ALSV4_CPP.ALSBaseCharacter.GetThirdPersonPivotTarget
struct UALSBaseCharacter_GetThirdPersonPivotTarget_Params
{
public:
	struct FTransform                            ReturnValue;                                       // 0x0(0x60)(Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function ALSV4_CPP.ALSBaseCharacter.GetTargetMovementSettings
struct UALSBaseCharacter_GetTargetMovementSettings_Params
{
public:
	struct FALSMovementSettings                  ReturnValue;                                       // 0x0(0x20)(Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ALSV4_CPP.ALSBaseCharacter.GetStance
struct UALSBaseCharacter_GetStance_Params
{
public:
	enum class EALSStance                        ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ALSV4_CPP.ALSBaseCharacter.GetSpeed
struct UALSBaseCharacter_GetSpeed_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ALSV4_CPP.ALSBaseCharacter.GetRotationMode
struct UALSBaseCharacter_GetRotationMode_Params
{
public:
	enum class EALSRotationMode                  ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ALSV4_CPP.ALSBaseCharacter.GetRollAnimation
struct UALSBaseCharacter_GetRollAnimation_Params
{
public:
	class UAnimMontage*                          ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ALSV4_CPP.ALSBaseCharacter.GetPrevMovementState
struct UALSBaseCharacter_GetPrevMovementState_Params
{
public:
	enum class EALSMovementState                 ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ALSV4_CPP.ALSBaseCharacter.GetOverlayState
struct UALSBaseCharacter_GetOverlayState_Params
{
public:
	enum class EALSOverlayState                  ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ALSV4_CPP.ALSBaseCharacter.GetOverlayOverrideState
struct UALSBaseCharacter_GetOverlayOverrideState_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ALSV4_CPP.ALSBaseCharacter.GetMyMovementComponent
struct UALSBaseCharacter_GetMyMovementComponent_Params
{
public:
	class UALSCharacterMovementComponent*        ReturnValue;                                       // 0x0(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ALSV4_CPP.ALSBaseCharacter.GetMovementState
struct UALSBaseCharacter_GetMovementState_Params
{
public:
	enum class EALSMovementState                 ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ALSV4_CPP.ALSBaseCharacter.GetMovementInputAmount
struct UALSBaseCharacter_GetMovementInputAmount_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function ALSV4_CPP.ALSBaseCharacter.GetMovementInput
struct UALSBaseCharacter_GetMovementInput_Params
{
public:
	struct FVector                               ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ALSV4_CPP.ALSBaseCharacter.GetMovementAction
struct UALSBaseCharacter_GetMovementAction_Params
{
public:
	enum class EALSMovementAction                ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ALSV4_CPP.ALSBaseCharacter.GetGroundedEntryState
struct UALSBaseCharacter_GetGroundedEntryState_Params
{
public:
	enum class EALSGroundedEntryState            ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ALSV4_CPP.ALSBaseCharacter.GetGetUpAnimation
struct UALSBaseCharacter_GetGetUpAnimation_Params
{
public:
	bool                                         bRagdollFaceUpState;                               // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_DAD[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UAnimMontage*                          ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ALSV4_CPP.ALSBaseCharacter.GetGait
struct UALSBaseCharacter_GetGait_Params
{
public:
	enum class EALSGait                          ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function ALSV4_CPP.ALSBaseCharacter.GetFirstPersonCameraTarget
struct UALSBaseCharacter_GetFirstPersonCameraTarget_Params
{
public:
	struct FVector                               ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ALSV4_CPP.ALSBaseCharacter.GetDesiredStance
struct UALSBaseCharacter_GetDesiredStance_Params
{
public:
	enum class EALSStance                        ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ALSV4_CPP.ALSBaseCharacter.GetDesiredRotationMode
struct UALSBaseCharacter_GetDesiredRotationMode_Params
{
public:
	enum class EALSRotationMode                  ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ALSV4_CPP.ALSBaseCharacter.GetDesiredGait
struct UALSBaseCharacter_GetDesiredGait_Params
{
public:
	enum class EALSGait                          ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function ALSV4_CPP.ALSBaseCharacter.GetCameraParameters
struct UALSBaseCharacter_GetCameraParameters_Params
{
public:
	float                                        TPFOVOut;                                          // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FPFOVOut;                                          // 0x4(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bRightShoulderOut;                                 // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_DD0[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC (0xC - 0x0)
// Function ALSV4_CPP.ALSBaseCharacter.GetAnimCurveValue
struct UALSBaseCharacter_GetAnimCurveValue_Params
{
public:
	class FName                                  CurveName;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0x8(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ALSV4_CPP.ALSBaseCharacter.GetAllowedGait
struct UALSBaseCharacter_GetAllowedGait_Params
{
public:
	enum class EALSGait                          ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ALSV4_CPP.ALSBaseCharacter.GetAimYawRate
struct UALSBaseCharacter_GetAimYawRate_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function ALSV4_CPP.ALSBaseCharacter.GetAimingRotation
struct UALSBaseCharacter_GetAimingRotation_Params
{
public:
	struct FRotator                              ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// Function ALSV4_CPP.ALSBaseCharacter.GetActualGait
struct UALSBaseCharacter_GetActualGait_Params
{
public:
	enum class EALSGait                          AllowedGait;                                       // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EALSGait                          ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function ALSV4_CPP.ALSBaseCharacter.GetAcceleration
struct UALSBaseCharacter_GetAcceleration_Params
{
public:
	struct FVector                               ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ALSV4_CPP.ALSBaseCharacter.ForwardMovementAction
struct UALSBaseCharacter_ForwardMovementAction_Params
{
public:
	float                                        Value;                                             // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ALSV4_CPP.ALSBaseCharacter.CanSprint
struct UALSBaseCharacter_CanSprint_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ALSV4_CPP.ALSBaseCharacter.CameraUpAction
struct UALSBaseCharacter_CameraUpAction_Params
{
public:
	float                                        Value;                                             // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ALSV4_CPP.ALSBaseCharacter.CameraRightAction
struct UALSBaseCharacter_CameraRightAction_Params
{
public:
	float                                        Value;                                             // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ALSV4_CPP.ALSBaseCharacter.AimAction
struct UALSBaseCharacter_AimAction_Params
{
public:
	bool                                         bValue;                                            // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function ALSV4_CPP.ALSCharacter.AttachToHand
struct UALSCharacter_AttachToHand_Params
{
public:
	class UStaticMesh*                           NewStaticMesh;                                     // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USkeletalMesh*                         NewSkeletalMesh;                                   // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                NewAnimClass;                                      // 0x10(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bLeftHand;                                         // 0x18(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E5D[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               Offset;                                            // 0x20(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ALSV4_CPP.ALSCharacterAnimInstance.ShouldMoveCheck
struct UALSCharacterAnimInstance_ShouldMoveCheck_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ALSV4_CPP.ALSCharacterAnimInstance.SetTrackedHipsDirection
struct UALSCharacterAnimInstance_SetTrackedHipsDirection_Params
{
public:
	enum class EALSHipsDirection                 HipsDirection;                                     // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ALSV4_CPP.ALSCharacterAnimInstance.SetGroundedEntryState
struct UALSCharacterAnimInstance_SetGroundedEntryState_Params
{
public:
	enum class EALSGroundedEntryState            NewState;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function ALSV4_CPP.ALSCharacterAnimInstance.PlayTransitionChecked
struct UALSCharacterAnimInstance_PlayTransitionChecked_Params
{
public:
	struct FALSDynamicMontageParams              Parameters;                                        // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function ALSV4_CPP.ALSCharacterAnimInstance.PlayTransition
struct UALSCharacterAnimInstance_PlayTransition_Params
{
public:
	struct FALSDynamicMontageParams              Parameters;                                        // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function ALSV4_CPP.ALSCharacterAnimInstance.PlayDynamicTransition
struct UALSCharacterAnimInstance_PlayDynamicTransition_Params
{
public:
	float                                        ReTriggerDelay;                                    // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E7C[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FALSDynamicMontageParams              Parameters;                                        // 0x8(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ALSV4_CPP.ALSCharacterAnimInstance.CanTurnInPlace
struct UALSCharacterAnimInstance_CanTurnInPlace_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ALSV4_CPP.ALSCharacterAnimInstance.CanRotateInPlace
struct UALSCharacterAnimInstance_CanRotateInPlace_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ALSV4_CPP.ALSCharacterAnimInstance.CanDynamicTransition
struct UALSCharacterAnimInstance_CanDynamicTransition_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function ALSV4_CPP.ALSCharacterMovementComponent.SetMovementSettings
struct UALSCharacterMovementComponent_SetMovementSettings_Params
{
public:
	struct FALSMovementSettings                  NewMovementSettings;                               // 0x0(0x20)(Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ALSV4_CPP.ALSCharacterMovementComponent.SetAllowedGait
struct UALSCharacterMovementComponent_SetAllowedGait_Params
{
public:
	enum class EALSGait                          NewAllowedGait;                                    // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ALSV4_CPP.ALSCharacterMovementComponent.Server_SetAllowedGait
struct UALSCharacterMovementComponent_Server_SetAllowedGait_Params
{
public:
	enum class EALSGait                          NewAllowedGait;                                    // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ALSV4_CPP.ALSDebugComponent.ToggleGlobalTimeDilationLocal
struct UALSDebugComponent_ToggleGlobalTimeDilationLocal_Params
{
public:
	float                                        TimeDilation;                                      // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ALSV4_CPP.ALSDebugComponent.OverlayMenuCycle
struct UALSDebugComponent_OverlayMenuCycle_Params
{
public:
	bool                                         bValue;                                            // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ALSV4_CPP.ALSDebugComponent.OpenOverlayMenu
struct UALSDebugComponent_OpenOverlayMenu_Params
{
public:
	bool                                         bValue;                                            // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ALSV4_CPP.ALSDebugComponent.OnPlayerControllerInitialized
struct UALSDebugComponent_OnPlayerControllerInitialized_Params
{
public:
	class UPlayerController*                     Controller;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ALSV4_CPP.ALSDebugComponent.GetShowTraces
struct UALSDebugComponent_GetShowTraces_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ALSV4_CPP.ALSDebugComponent.GetShowLayerColors
struct UALSDebugComponent_GetShowLayerColors_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ALSV4_CPP.ALSDebugComponent.GetShowDebugShapes
struct UALSDebugComponent_GetShowDebugShapes_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ALSV4_CPP.ALSDebugComponent.GetDebugView
struct UALSDebugComponent_GetDebugView_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ALSV4_CPP.ALSDebugComponent.FocusedDebugCharacterCycle
struct UALSDebugComponent_FocusedDebugCharacterCycle_Params
{
public:
	bool                                         bValue;                                            // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x90 (0x90 - 0x0)
// Function ALSV4_CPP.ALSMantleComponent.Server_MantleStart
struct UALSMantleComponent_Server_MantleStart_Params
{
public:
	float                                        MantleHeight;                                      // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F1C[0xC];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FALSComponentAndTransform             MantleLedgeWS;                                     // 0x10(0x70)(ConstParm, Parm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	enum class EALSMantleType                    MantleType;                                        // 0x80(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F1D[0xF];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function ALSV4_CPP.ALSMantleComponent.OnOwnerRagdollStateChanged
struct UALSMantleComponent_OnOwnerRagdollStateChanged_Params
{
public:
	bool                                         bRagdollState;                                     // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x90 (0x90 - 0x0)
// Function ALSV4_CPP.ALSMantleComponent.Multicast_MantleStart
struct UALSMantleComponent_Multicast_MantleStart_Params
{
public:
	float                                        MantleHeight;                                      // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F3D[0xC];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FALSComponentAndTransform             MantleLedgeWS;                                     // 0x10(0x70)(ConstParm, Parm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	enum class EALSMantleType                    MantleType;                                        // 0x80(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F40[0xF];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x4 (0x4 - 0x0)
// Function ALSV4_CPP.ALSMantleComponent.MantleUpdate
struct UALSMantleComponent_MantleUpdate_Params
{
public:
	float                                        BlendIn;                                           // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x90 (0x90 - 0x0)
// Function ALSV4_CPP.ALSMantleComponent.MantleStart
struct UALSMantleComponent_MantleStart_Params
{
public:
	float                                        MantleHeight;                                      // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F50[0xC];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FALSComponentAndTransform             MantleLedgeWS;                                     // 0x10(0x70)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	enum class EALSMantleType                    MantleType;                                        // 0x80(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F51[0xF];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function ALSV4_CPP.ALSMantleComponent.MantleCheck
struct UALSMantleComponent_MantleCheck_Params
{
public:
	struct FALSMantleTraceSettings               TraceSettings;                                     // 0x0(0x14)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	enum class EDrawDebugTrace                   DebugType;                                         // 0x14(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x15(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F56[0x2];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x48 (0x48 - 0x0)
// Function ALSV4_CPP.ALSMantleComponent.GetMantleAsset
struct UALSMantleComponent_GetMantleAsset_Params
{
public:
	enum class EALSMantleType                    MantleType;                                        // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EALSOverlayState                  CurrentOverlayState;                               // 0x1(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F5C[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FALSMantleAsset                       ReturnValue;                                       // 0x8(0x40)(Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x120 (0x120 - 0x0)
// Function ALSV4_CPP.ALSMathLibrary.TransformSub
struct UALSMathLibrary_TransformSub_Params
{
public:
	struct FTransform                            T1;                                                // 0x0(0x60)(ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                            T2;                                                // 0x60(0x60)(ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                            ReturnValue;                                       // 0xC0(0x60)(Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x120 (0x120 - 0x0)
// Function ALSV4_CPP.ALSMathLibrary.TransformAdd
struct UALSMathLibrary_TransformAdd_Params
{
public:
	struct FTransform                            T1;                                                // 0x0(0x60)(ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                            T2;                                                // 0x60(0x60)(ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                            ReturnValue;                                       // 0xC0(0x60)(Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xD0 (0xD0 - 0x0)
// Function ALSV4_CPP.ALSMathLibrary.MantleComponentLocalToWorld
struct UALSMathLibrary_MantleComponentLocalToWorld_Params
{
public:
	struct FALSComponentAndTransform             CompAndTransform;                                  // 0x0(0x70)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FTransform                            ReturnValue;                                       // 0x70(0x60)(Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function ALSV4_CPP.ALSMathLibrary.GetCapsuleLocationFromBase
struct UALSMathLibrary_GetCapsuleLocationFromBase_Params
{
public:
	struct FVector                               BaseLocation;                                      // 0x0(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ZOffset;                                           // 0x18(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F7D[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UCapsuleComponent*                     Capsule;                                           // 0x20(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               ReturnValue;                                       // 0x28(0x18)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function ALSV4_CPP.ALSMathLibrary.GetCapsuleBaseLocation
struct UALSMathLibrary_GetCapsuleBaseLocation_Params
{
public:
	float                                        ZOffset;                                           // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F81[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UCapsuleComponent*                     Capsule;                                           // 0x8(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               ReturnValue;                                       // 0x10(0x18)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function ALSV4_CPP.ALSMathLibrary.CapsuleHasRoomCheck
struct UALSMathLibrary_CapsuleHasRoomCheck_Params
{
public:
	class UCapsuleComponent*                     Capsule;                                           // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               TargetLocation;                                    // 0x8(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        HeightOffset;                                      // 0x20(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RadiusOffset;                                      // 0x24(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EDrawDebugTrace                   DebugType;                                         // 0x28(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         DrawDebugTrace;                                    // 0x29(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x2A(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F90[0x5];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function ALSV4_CPP.ALSMathLibrary.CalculateQuadrant
struct UALSMathLibrary_CalculateQuadrant_Params
{
public:
	enum class EALSMovementDirection             Current;                                           // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F9C[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        FRThreshold;                                       // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FLThreshold;                                       // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BRThreshold;                                       // 0xC(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BLThreshold;                                       // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Buffer;                                            // 0x14(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Angle;                                             // 0x18(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EALSMovementDirection             ReturnValue;                                       // 0x1C(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_FA2[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x14 (0x14 - 0x0)
// Function ALSV4_CPP.ALSMathLibrary.AngleInRange
struct UALSMathLibrary_AngleInRange_Params
{
public:
	float                                        Angle;                                             // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinAngle;                                          // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxAngle;                                          // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Buffer;                                            // 0xC(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IncreaseBuffer;                                    // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x11(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_FB1[0x2];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function ALSV4_CPP.ALSPlayerCameraManager.OnPossess
struct UALSPlayerCameraManager_OnPossess_Params
{
public:
	class UALSBaseCharacter*                     NewCharacter;                                      // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function ALSV4_CPP.ALSPlayerCameraManager.GetCameraBehaviorParam
struct UALSPlayerCameraManager_GetCameraBehaviorParam_Params
{
public:
	class FName                                  CurveName;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0x8(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function ALSV4_CPP.ALSPlayerCameraManager.DrawDebugTargets
struct UALSPlayerCameraManager_DrawDebugTargets_Params
{
public:
	struct FVector                               PivotTargetLocation;                               // 0x0(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function ALSV4_CPP.ALSPlayerCameraManager.CustomCameraBehavior
struct UALSPlayerCameraManager_CustomCameraBehavior_Params
{
public:
	float                                        DeltaTime;                                         // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1001[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               Location;                                          // 0x8(0x18)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              Rotation;                                          // 0x20(0x18)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                        FOV;                                               // 0x38(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x3C(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1004[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x80 (0x80 - 0x0)
// Function ALSV4_CPP.ALSPlayerCameraManager.CalculateAxisIndependentLag
struct UALSPlayerCameraManager_CalculateAxisIndependentLag_Params
{
public:
	struct FVector                               CurrentLocation;                                   // 0x0(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               TargetLocation;                                    // 0x18(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              CameraRotation;                                    // 0x30(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                               LagSpeeds;                                         // 0x48(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DeltaTime;                                         // 0x60(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1017[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               ReturnValue;                                       // 0x68(0x18)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function ALSV4_CPP.ALSPlayerController.WalkAction
struct UALSPlayerController_WalkAction_Params
{
public:
	struct FInputActionValue                     Value;                                             // 0x0(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function ALSV4_CPP.ALSPlayerController.VelocityDirectionAction
struct UALSPlayerController_VelocityDirectionAction_Params
{
public:
	struct FInputActionValue                     Value;                                             // 0x0(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function ALSV4_CPP.ALSPlayerController.StanceAction
struct UALSPlayerController_StanceAction_Params
{
public:
	struct FInputActionValue                     Value;                                             // 0x0(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function ALSV4_CPP.ALSPlayerController.SprintAction
struct UALSPlayerController_SprintAction_Params
{
public:
	struct FInputActionValue                     Value;                                             // 0x0(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function ALSV4_CPP.ALSPlayerController.RightMovementAction
struct UALSPlayerController_RightMovementAction_Params
{
public:
	struct FInputActionValue                     Value;                                             // 0x0(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function ALSV4_CPP.ALSPlayerController.RagdollAction
struct UALSPlayerController_RagdollAction_Params
{
public:
	struct FInputActionValue                     Value;                                             // 0x0(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function ALSV4_CPP.ALSPlayerController.LookingDirectionAction
struct UALSPlayerController_LookingDirectionAction_Params
{
public:
	struct FInputActionValue                     Value;                                             // 0x0(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function ALSV4_CPP.ALSPlayerController.JumpAction
struct UALSPlayerController_JumpAction_Params
{
public:
	struct FInputActionValue                     Value;                                             // 0x0(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function ALSV4_CPP.ALSPlayerController.ForwardMovementAction
struct UALSPlayerController_ForwardMovementAction_Params
{
public:
	struct FInputActionValue                     Value;                                             // 0x0(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function ALSV4_CPP.ALSPlayerController.DebugToggleTracesAction
struct UALSPlayerController_DebugToggleTracesAction_Params
{
public:
	struct FInputActionValue                     Value;                                             // 0x0(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function ALSV4_CPP.ALSPlayerController.DebugToggleSlomoAction
struct UALSPlayerController_DebugToggleSlomoAction_Params
{
public:
	struct FInputActionValue                     Value;                                             // 0x0(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function ALSV4_CPP.ALSPlayerController.DebugToggleShapesAction
struct UALSPlayerController_DebugToggleShapesAction_Params
{
public:
	struct FInputActionValue                     Value;                                             // 0x0(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function ALSV4_CPP.ALSPlayerController.DebugToggleMeshAction
struct UALSPlayerController_DebugToggleMeshAction_Params
{
public:
	struct FInputActionValue                     Value;                                             // 0x0(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function ALSV4_CPP.ALSPlayerController.DebugToggleLayerColorsAction
struct UALSPlayerController_DebugToggleLayerColorsAction_Params
{
public:
	struct FInputActionValue                     Value;                                             // 0x0(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function ALSV4_CPP.ALSPlayerController.DebugToggleHudAction
struct UALSPlayerController_DebugToggleHudAction_Params
{
public:
	struct FInputActionValue                     Value;                                             // 0x0(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function ALSV4_CPP.ALSPlayerController.DebugToggleDebugViewAction
struct UALSPlayerController_DebugToggleDebugViewAction_Params
{
public:
	struct FInputActionValue                     Value;                                             // 0x0(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function ALSV4_CPP.ALSPlayerController.DebugToggleCharacterInfoAction
struct UALSPlayerController_DebugToggleCharacterInfoAction_Params
{
public:
	struct FInputActionValue                     Value;                                             // 0x0(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function ALSV4_CPP.ALSPlayerController.DebugOverlayMenuCycleAction
struct UALSPlayerController_DebugOverlayMenuCycleAction_Params
{
public:
	struct FInputActionValue                     Value;                                             // 0x0(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function ALSV4_CPP.ALSPlayerController.DebugOpenOverlayMenuAction
struct UALSPlayerController_DebugOpenOverlayMenuAction_Params
{
public:
	struct FInputActionValue                     Value;                                             // 0x0(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function ALSV4_CPP.ALSPlayerController.DebugFocusedCharacterCycleAction
struct UALSPlayerController_DebugFocusedCharacterCycleAction_Params
{
public:
	struct FInputActionValue                     Value;                                             // 0x0(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function ALSV4_CPP.ALSPlayerController.CameraUpAction
struct UALSPlayerController_CameraUpAction_Params
{
public:
	struct FInputActionValue                     Value;                                             // 0x0(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function ALSV4_CPP.ALSPlayerController.CameraTapAction
struct UALSPlayerController_CameraTapAction_Params
{
public:
	struct FInputActionValue                     Value;                                             // 0x0(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function ALSV4_CPP.ALSPlayerController.CameraRightAction
struct UALSPlayerController_CameraRightAction_Params
{
public:
	struct FInputActionValue                     Value;                                             // 0x0(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function ALSV4_CPP.ALSPlayerController.CameraHeldAction
struct UALSPlayerController_CameraHeldAction_Params
{
public:
	struct FInputActionValue                     Value;                                             // 0x0(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function ALSV4_CPP.ALSPlayerController.AimAction
struct UALSPlayerController_AimAction_Params
{
public:
	struct FInputActionValue                     Value;                                             // 0x0(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

}
}


