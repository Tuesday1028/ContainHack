#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x678 (0x9C0 - 0x348)
// AnimBlueprintGeneratedClass AnimBP_Zombie.AnimBP_Zombie_C
class UAnimBP_Zombie_C : public UAnimInstance
{
public:
	uint8                                        Pad_273C[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x350(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct AnimBP_Zombie::FAnimBlueprintGeneratedMutableData    __AnimBlueprintMutables;                           // 0x358(0xC)(HasGetValueTypeHash)
	uint8                                        Pad_273D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAnimSubsystemInstance                AnimBlueprintExtension_PropertyAccess;             // 0x368(0x8)(None)
	struct FAnimSubsystemInstance                AnimBlueprintExtension_Base;                       // 0x370(0x8)(None)
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend;                    // 0x378(0xE0)(None)
	struct FAnimNode_RandomPlayer                AnimGraphNode_RandomPlayer_1;                      // 0x458(0x78)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_4;                  // 0x4D0(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_3;                  // 0x4F8(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_2;                  // 0x520(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_1;                  // 0x548(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult;                    // 0x570(0x28)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer;                      // 0x598(0x48)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_2;                       // 0x5E0(0x20)(None)
	struct FAnimNode_RandomPlayer                AnimGraphNode_RandomPlayer;                        // 0x600(0x78)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_1;                       // 0x678(0x20)(None)
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer;                    // 0x698(0x70)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult;                         // 0x708(0x20)(None)
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine;                        // 0x728(0xC8)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose;                      // 0x7F0(0x108)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x8F8(0x20)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose;                       // 0x918(0x28)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot;                                // 0x940(0x48)(None)
	class UBP_Zombie_Pawn_C*                     PawnOwner;                                         // 0x988(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	double                                       Entity_Chasing_Run_Speed;                          // 0x990(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Velocity;                                          // 0x998(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Attacking;                                         // 0x9A0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Chasing;                                           // 0x9A1(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_273F[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       Attack_Lerp;                                       // 0x9A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       RunningAttack;                                     // 0x9B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAI_Steve_C*                           As_AI_Basic_Zombie;                                // 0x9B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UAnimBP_Zombie_C* GetDefaultObj();

	void AnimGraph(struct FPoseLink* AnimGraph);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Zombie_AnimGraphNode_BlendSpacePlayer_E4219A384AE5AC3DD2689B85F0022881();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Zombie_AnimGraphNode_TransitionResult_D4CA3CEA4134D7E19A7333804FB91992();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Zombie_AnimGraphNode_TransitionResult_7E2678C348A1594BCD781683C9EA850C();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void BlueprintBeginPlay();
	void AnimNotify_Hit();
	void AnimNotify_HitEnd();
	void AnimNotify_Attack();
	void AnimNotify_AttackNotify();
	void ExecuteUbergraph_AnimBP_Zombie(int32 EntryPoint, double CallFunc_Divide_DoubleDouble_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue_1, double CallFunc_Divide_DoubleDouble_ReturnValue_2, uint8 CallFunc_MakeLiteralByte_ReturnValue, float K2Node_Event_DeltaTimeX, class UPawn* CallFunc_TryGetPawnOwner_ReturnValue, class UAI_Steve_C* K2Node_DynamicCast_AsAI_Steve, bool K2Node_DynamicCast_bSuccess, class UBP_Zombie_Pawn_C* K2Node_DynamicCast_AsBP_Zombie_Pawn, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_GetVelocity_ReturnValue, const struct FVector& CallFunc_Vector_GetAbs_ReturnValue, double CallFunc_GetMaxElement_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue_3, bool CallFunc_Less_DoubleDouble_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, const struct FTransform& CallFunc_GetSocketTransform_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, const struct FRotator& CallFunc_MakeRotator_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class UActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class UMermiAtesi_Ai_Child_C* CallFunc_FinishSpawningActor_ReturnValue, float K2Node_StructMemberSet___FloatProperty_ImplicitCast, float K2Node_StructMemberSet___FloatProperty_0_ImplicitCast);
};

}


