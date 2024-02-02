#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xCC0 (0x1008 - 0x348)
// AnimBlueprintGeneratedClass UE4ASP_HeroTPP_AnimBlueprint.UE4ASP_HeroTPP_AnimBlueprint_C
class UUE4ASP_HeroTPP_AnimBlueprint_C : public UAnimInstance
{
public:
	uint8                                        Pad_2B08[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x350(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct UE4ASP_HeroTPP_AnimBlueprint::FAnimBlueprintGeneratedMutableData    __AnimBlueprintMutables;                           // 0x358(0x2C)(HasGetValueTypeHash)
	uint8                                        Pad_2B09[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAnimSubsystemInstance                AnimBlueprintExtension_PropertyAccess;             // 0x388(0x8)(None)
	struct FAnimSubsystemInstance                AnimBlueprintExtension_Base;                       // 0x390(0x8)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x398(0x20)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_23;                 // 0x3B8(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_22;                 // 0x3E0(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_21;                 // 0x408(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_20;                 // 0x430(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_19;                 // 0x458(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_18;                 // 0x480(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_17;                 // 0x4A8(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_16;                 // 0x4D0(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_15;                 // 0x4F8(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_14;                 // 0x520(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_13;                 // 0x548(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_12;                 // 0x570(0x28)(None)
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_3;                  // 0x598(0x70)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_11;                      // 0x608(0x20)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_7;                    // 0x628(0x48)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_10;                      // 0x670(0x20)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_6;                    // 0x690(0x48)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_9;                       // 0x6D8(0x20)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_5;                    // 0x6F8(0x48)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_8;                       // 0x740(0x20)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_4;                    // 0x760(0x48)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_7;                       // 0x7A8(0x20)(None)
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_2;                  // 0x7C8(0x70)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_6;                       // 0x838(0x20)(None)
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine_1;                      // 0x858(0xC8)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_11;                 // 0x920(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_10;                 // 0x948(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_9;                  // 0x970(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_8;                  // 0x998(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_7;                  // 0x9C0(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_6;                  // 0x9E8(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_5;                  // 0xA10(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_4;                  // 0xA38(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_3;                  // 0xA60(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_2;                  // 0xA88(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_1;                  // 0xAB0(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult;                    // 0xAD8(0x28)(None)
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_1;                  // 0xB00(0x70)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_5;                       // 0xB70(0x20)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_3;                    // 0xB90(0x48)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_4;                       // 0xBD8(0x20)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_2;                    // 0xBF8(0x48)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_3;                       // 0xC40(0x20)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_1;                    // 0xC60(0x48)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_2;                       // 0xCA8(0x20)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer;                      // 0xCC8(0x48)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_1;                       // 0xD10(0x20)(None)
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer;                    // 0xD30(0x70)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult;                         // 0xDA0(0x20)(None)
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine;                        // 0xDC0(0xC8)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool;                     // 0xE88(0x48)(None)
	struct FAnimNode_RotationOffsetBlendSpace    AnimGraphNode_RotationOffsetBlendSpace;            // 0xED0(0x118)(None)
	double                                       Speed;                                             // 0xFE8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Direction;                                         // 0xFF0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Enable_Jump;                                       // 0xFF8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Jumping;                                           // 0xFF9(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Crouching;                                         // 0xFFA(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsAiming;                                          // 0xFFB(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2B0B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       AimPitch;                                          // 0x1000(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UUE4ASP_HeroTPP_AnimBlueprint_C* GetDefaultObj();

	void AnimGraph(struct FPoseLink* AnimGraph);
	void Can_Jump(bool Should_Jump, bool* bJumping, bool CallFunc_EqualEqual_BoolBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_UE4ASP_HeroTPP_AnimBlueprint_AnimGraphNode_TransitionResult_4AAD4A594EABD4F92E1D44BBD3F4830B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_UE4ASP_HeroTPP_AnimBlueprint_AnimGraphNode_TransitionResult_99E2AA4B4395B7A85D87D28B3B20F12D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_UE4ASP_HeroTPP_AnimBlueprint_AnimGraphNode_TransitionResult_58A4278948040CD2D31A2A933C31D009();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_UE4ASP_HeroTPP_AnimBlueprint_AnimGraphNode_TransitionResult_D74A5D6143BE287D7346F6BD0292A172();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_UE4ASP_HeroTPP_AnimBlueprint_AnimGraphNode_TransitionResult_9B1930D4450B97A8E0C1E1AB9190F888();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_UE4ASP_HeroTPP_AnimBlueprint_AnimGraphNode_TransitionResult_2AAAAE4D404AD7E29F87829840111BF1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_UE4ASP_HeroTPP_AnimBlueprint_AnimGraphNode_TransitionResult_883342CC45D39588FC50999AA12D9BE0();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_UE4ASP_HeroTPP_AnimBlueprint_AnimGraphNode_TransitionResult_CF3D48F447DB085DD53608A07E4EE360();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_UE4ASP_HeroTPP_AnimBlueprint_AnimGraphNode_TransitionResult_6910560D4252B0F41A7264A58AFACAF0();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_UE4ASP_HeroTPP_AnimBlueprint_AnimGraphNode_TransitionResult_3163F8234400D90A8D5A4494801CFE23();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_UE4ASP_HeroTPP_AnimBlueprint_AnimGraphNode_TransitionResult_D25429B644E6C66D625827BA5AE5F04E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_UE4ASP_HeroTPP_AnimBlueprint_AnimGraphNode_TransitionResult_315E9BF04EA579C328EB6A866B91C07A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_UE4ASP_HeroTPP_AnimBlueprint_AnimGraphNode_TransitionResult_5540D45C4BCA55AEC05DA1A1E21BFB58();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_UE4ASP_HeroTPP_AnimBlueprint_AnimGraphNode_TransitionResult_FFFCF0144598EDEE64EE439BD7BDAFDF();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_UE4ASP_HeroTPP_AnimBlueprint_AnimGraphNode_TransitionResult_23C30FC54F432C27A8D2E086D1A0B4F4();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_UE4ASP_HeroTPP_AnimBlueprint_AnimGraphNode_TransitionResult_F13AB6764EBE8335385B039A555B9993();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void AnimNotify_Footstep();
	void ExecuteUbergraph_UE4ASP_HeroTPP_AnimBlueprint(int32 EntryPoint, bool CallFunc_LessEqual_DoubleDouble_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, float CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue, bool CallFunc_LessEqual_DoubleDouble_ReturnValue_1, float CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_1, bool CallFunc_LessEqual_DoubleDouble_ReturnValue_2, bool CallFunc_Greater_DoubleDouble_ReturnValue_2, bool CallFunc_LessEqual_DoubleDouble_ReturnValue_3, bool CallFunc_Greater_DoubleDouble_ReturnValue_3, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_LessEqual_DoubleDouble_ReturnValue_4, bool CallFunc_Greater_DoubleDouble_ReturnValue_4, bool CallFunc_LessEqual_DoubleDouble_ReturnValue_5, bool CallFunc_LessEqual_DoubleDouble_ReturnValue_6, bool CallFunc_BooleanAND_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue_3, float CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_2, bool CallFunc_LessEqual_DoubleDouble_ReturnValue_7, float CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_3, bool CallFunc_LessEqual_DoubleDouble_ReturnValue_8, bool CallFunc_Greater_DoubleDouble_ReturnValue_5, float K2Node_Event_DeltaTimeX, class UPawn* CallFunc_TryGetPawnOwner_ReturnValue, class UBP_ThirdPersonCharacter_C* K2Node_DynamicCast_AsBP_Third_Person_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_LessEqual_DoubleDouble_ReturnValue_9, bool CallFunc_IsFalling_ReturnValue, bool CallFunc_IsCrouching_ReturnValue, const struct FRotator& CallFunc_GetBaseAimRotation_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, class UCharacter* K2Node_DynamicCast_AsCharacter, bool K2Node_DynamicCast_bSuccess_1, double CallFunc_Subtract_DoubleDouble_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue_6, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, const struct FVector& CallFunc_GetVelocity_ReturnValue, float CallFunc_CalculateDirection_ReturnValue, double CallFunc_VSize_ReturnValue, class UPawn* CallFunc_TryGetPawnOwner_ReturnValue_1, class UBP_ThirdPersonCharacter_C* K2Node_DynamicCast_AsBP_Third_Person_Character_1, bool K2Node_DynamicCast_bSuccess_2, const struct FVector& CallFunc_GetSocketLocation_ReturnValue, double CallFunc_LessEqual_DoubleDouble_A_ImplicitCast, double CallFunc_LessEqual_DoubleDouble_A_ImplicitCast_1, double CallFunc_LessEqual_DoubleDouble_A_ImplicitCast_2, double CallFunc_LessEqual_DoubleDouble_A_ImplicitCast_3, double CallFunc_Greater_DoubleDouble_A_ImplicitCast, double CallFunc_Subtract_DoubleDouble_A_ImplicitCast, double K2Node_VariableSet_AimPitch_ImplicitCast, double K2Node_VariableSet_Direction_ImplicitCast);
};

}


