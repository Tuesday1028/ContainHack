#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x25 (0x915 - 0x8F0)
// BlueprintGeneratedClass YeniAiAnimCharacter.YeniAiAnimCharacter_C
class UYeniAiAnimCharacter_C : public UALSCharacter
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x8F0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UCameraComponent*                      Camera;                                            // 0x8F8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPhysicalAnimationComponent*           PhysicalAnimation;                                 // 0x900(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UYeniAiCharacter_AnimBlueprint_C*      As_Yeni_Ai_Character_Anim_Blueprint;               // 0x908(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         Relax;                                             // 0x910(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Aiming;                                            // 0x911(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         SagYatma;                                          // 0x912(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         SolYatma;                                          // 0x913(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         SilahDegistirme;                                   // 0x914(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UYeniAiAnimCharacter_C* GetDefaultObj();

	void OnUpdateHeldObject(bool K2Node_SwitchEnum_CmpSuccess);
	void OnUpdateHeldObjectAnimations(float CallFunc_GetAnimCurveValue_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, class UBow_AnimBP_C* K2Node_DynamicCast_AsBow_Anim_BP, bool K2Node_DynamicCast_bSuccess, double K2Node_VariableSet_Draw_ImplicitCast);
	void InpActEvt_LeftShift_K2Node_InputKeyEvent_25(const struct FKey& Key);
	void InpActEvt_LeftShift_K2Node_InputKeyEvent_24(const struct FKey& Key);
	void InpActEvt_SpaceBar_K2Node_InputKeyEvent_23(const struct FKey& Key);
	void InpActEvt_MouseScrollDown_K2Node_InputKeyEvent_22(const struct FKey& Key);
	void InpActEvt_MouseScrollUp_K2Node_InputKeyEvent_21(const struct FKey& Key);
	void InpActEvt_RightMouseButton_K2Node_InputKeyEvent_20(const struct FKey& Key);
	void InpActEvt_Q_K2Node_InputKeyEvent_19(const struct FKey& Key);
	void InpActEvt_E_K2Node_InputKeyEvent_18(const struct FKey& Key);
	void InpActEvt_One_K2Node_InputKeyEvent_17(const struct FKey& Key);
	void InpActEvt_Two_K2Node_InputKeyEvent_16(const struct FKey& Key);
	void InpActEvt_NumPadOne_K2Node_InputKeyEvent_15(const struct FKey& Key);
	void InpActEvt_NumPadTwo_K2Node_InputKeyEvent_14(const struct FKey& Key);
	void InpActEvt_NumPadThree_K2Node_InputKeyEvent_13(const struct FKey& Key);
	void InpActEvt_NumPadZero_K2Node_InputKeyEvent_12(const struct FKey& Key);
	void InpActEvt_NumPadSix_K2Node_InputKeyEvent_11(const struct FKey& Key);
	void InpActEvt_NumPadFive_K2Node_InputKeyEvent_10(const struct FKey& Key);
	void InpActEvt___K2Node_InputKeyEvent_9(const struct FKey& Key);
	void InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_8(const struct FKey& Key);
	void InpActEvt_R_K2Node_InputKeyEvent_7(const struct FKey& Key);
	void InpActEvt_H_K2Node_InputKeyEvent_6(const struct FKey& Key);
	void InpActEvt_H_K2Node_InputKeyEvent_5(const struct FKey& Key);
	void InpActEvt_T_K2Node_InputKeyEvent_4(const struct FKey& Key);
	void InpActEvt_LeftControl_K2Node_InputKeyEvent_3(const struct FKey& Key);
	void InpActEvt_LeftControl_K2Node_InputKeyEvent_2(const struct FKey& Key);
	void InpActEvt_L_K2Node_InputKeyEvent_1(const struct FKey& Key);
	void InpActEvt_L_K2Node_InputKeyEvent_0(const struct FKey& Key);
	void InpAxisEvt_Turn_K2Node_InputAxisEvent_1(float AxisValue);
	void InpAxisEvt_LookUp_K2Node_InputAxisEvent_2(float AxisValue);
	void InpAxisEvt_MoveForward_K2Node_InputAxisEvent_3(float AxisValue);
	void InpAxisEvt_MoveRight_K2Node_InputAxisEvent_5(float AxisValue);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void UpdateHeldObjectAnimations();
	void UpdateHeldObject();
	void ExecuteUbergraph_YeniAiAnimCharacter(int32 EntryPoint, bool Temp_bool_Variable, const struct FKey& Temp_struct_Variable, bool CallFunc_Not_PreBool_ReturnValue, const struct FKey& K2Node_InputKeyEvent_Key_1, const struct FKey& K2Node_InputKeyEvent_Key, const struct FKey& Temp_struct_Variable_1, bool Temp_bool_Variable_1, bool CallFunc_Not_PreBool_ReturnValue_1, float K2Node_InputAxisEvent_AxisValue_3, float K2Node_InputAxisEvent_AxisValue_2, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, float K2Node_InputAxisEvent_AxisValue_1, const struct FVector& CallFunc_GetActorRightVector_ReturnValue, float K2Node_InputAxisEvent_AxisValue, const struct FKey& K2Node_InputKeyEvent_Key_2, const struct FKey& K2Node_InputKeyEvent_Key_3, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, class UYeniAiCharacter_AnimBlueprint_C* K2Node_DynamicCast_AsYeni_Ai_Character_Anim_Blueprint, bool K2Node_DynamicCast_bSuccess, float K2Node_Event_DeltaSeconds, const struct FRotator& CallFunc_GetControlRotation_ReturnValue, const struct FKey& K2Node_InputKeyEvent_Key_4, const struct FKey& Temp_struct_Variable_2, bool Temp_bool_Variable_2, const struct FKey& K2Node_InputKeyEvent_Key_5, bool CallFunc_Not_PreBool_ReturnValue_2, const struct FKey& K2Node_InputKeyEvent_Key_6, const struct FKey& K2Node_InputKeyEvent_Key_7, const struct FKey& K2Node_InputKeyEvent_Key_8, const struct FKey& K2Node_InputKeyEvent_Key_9, const struct FKey& K2Node_InputKeyEvent_Key_10, const struct FKey& K2Node_InputKeyEvent_Key_11, const struct FPhysicalAnimationData& K2Node_MakeStruct_PhysicalAnimationData, const struct FKey& K2Node_InputKeyEvent_Key_12, TArray<bool>& K2Node_MakeArray_Array, TArray<bool>& K2Node_MakeArray_Array_1, TArray<bool>& K2Node_MakeArray_Array_2, TArray<bool>& K2Node_MakeArray_Array_3, const struct FKey& K2Node_InputKeyEvent_Key_13, const struct FKey& K2Node_InputKeyEvent_Key_14, const struct FKey& K2Node_InputKeyEvent_Key_15, const struct FKey& K2Node_InputKeyEvent_Key_16, bool K2Node_MultiGate_FirstRun, int32 K2Node_MultiGate_Data, bool K2Node_MultiGate_ScratchBool, int32 K2Node_MultiGate_ScratchIndex, const struct FKey& K2Node_InputKeyEvent_Key_17, const struct FKey& K2Node_InputKeyEvent_Key_18, const struct FKey& K2Node_InputKeyEvent_Key_19, bool Temp_bool_Variable_3, bool CallFunc_Not_PreBool_ReturnValue_3, const struct FKey& K2Node_InputKeyEvent_Key_20, const struct FKey& K2Node_InputKeyEvent_Key_21, const struct FKey& K2Node_InputKeyEvent_Key_22, bool Temp_bool_Variable_4, const struct FKey& K2Node_InputKeyEvent_Key_23, bool CallFunc_Not_PreBool_ReturnValue_4, bool Temp_bool_Variable_5, const struct FKey& Temp_struct_Variable_3, bool CallFunc_Not_PreBool_ReturnValue_5, bool Temp_bool_Variable_6, const struct FKey& K2Node_InputKeyEvent_Key_24, bool CallFunc_Not_PreBool_ReturnValue_6, const struct FKey& K2Node_InputKeyEvent_Key_25);
};

}


