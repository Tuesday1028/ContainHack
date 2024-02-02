#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC8 (0x9B8 - 0x8F0)
// BlueprintGeneratedClass WeepingAngel_CharacterBP.WeepingAngel_CharacterBP_C
class UWeepingAngel_CharacterBP_C : public UALSCharacter
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x8F0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UDebugComponent_C*                     DebugComponent;                                    // 0x8F8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UMantleComponent_C*                    MantleComponent;                                   // 0x900(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          LandRoll_Default;                                  // 0x908(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          LandRoll_RH;                                       // 0x910(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          LandRoll_LH;                                       // 0x918(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          LandRoll_2H;                                       // 0x920(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          GetUpFront_Default;                                // 0x928(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          GetUpFront_LH;                                     // 0x930(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          GetUpFront_2H;                                     // 0x938(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          GetUpFront_RH;                                     // 0x940(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          GetUpBack_Default;                                 // 0x948(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          GetUpBack_LH;                                      // 0x950(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          GetUpBack_2H;                                      // 0x958(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          GetUpBack_RH;                                      // 0x960(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnTargetPointAnimationEnded;                       // 0x968(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         bHasLookingEnemies;                                // 0x978(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bIsFreezed;                                        // 0x979(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2DBD[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPoseSnapshot                         FreezeSnapshot;                                    // 0x980(0x38)(Edit, BlueprintVisible, Net, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UWeepingAngel_CharacterBP_C* GetDefaultObj();

	void FindClosedEnemies(TArray<class UActor*>* LookingEnemies, const TArray<class UActor*>& CurrentLookingEnemies, const TArray<class UActor*>& CurrentFrontEnemies, const TArray<class UActor*>& CurrentPerceivedEnemies, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, class UActor* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, const struct FVector& CallFunc_GetDirectionUnitVector_ReturnValue, double CallFunc_Dot_VectorVector_ReturnValue, double CallFunc_DegAcos_ReturnValue, bool CallFunc_LessEqual_DoubleDouble_ReturnValue, class UActor* CallFunc_Array_Get_Item_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_2, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue_1, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_3, const struct FVector& CallFunc_GetDirectionUnitVector_ReturnValue_1, class UAIController* CallFunc_GetAIController_ReturnValue, double CallFunc_Dot_VectorVector_ReturnValue_1, class UWeepingAngle_AIControllerBP_C* K2Node_DynamicCast_AsWeeping_Angle_AIController_BP, bool K2Node_DynamicCast_bSuccess, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, TArray<class UActor*>& CallFunc_GetCurrentlyPerceivedActors_OutActors);
	void OnUpdateHeldObject(bool K2Node_SwitchEnum_CmpSuccess);
	void OnUpdateHeldObjectAnimations(float CallFunc_GetAnimCurveValue_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, class UBow_AnimBP_C* K2Node_DynamicCast_AsBow_Anim_BP, bool K2Node_DynamicCast_bSuccess, double K2Node_VariableSet_Draw_ImplicitCast);
	class UAnimMontage* GetRollAnimation(bool K2Node_SwitchEnum_CmpSuccess);
	class UAnimMontage* GetGetUpAnimation(bool bRagdollFaceUpState, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_SwitchEnum_CmpSuccess_1);
	void OnNotifyEnd_258C8FBC44B9F87B2A1D9EAF3A835770(class FName NotifyName);
	void OnNotifyBegin_258C8FBC44B9F87B2A1D9EAF3A835770(class FName NotifyName);
	void OnInterrupted_258C8FBC44B9F87B2A1D9EAF3A835770(class FName NotifyName);
	void OnBlendOut_258C8FBC44B9F87B2A1D9EAF3A835770(class FName NotifyName);
	void OnCompleted_258C8FBC44B9F87B2A1D9EAF3A835770(class FName NotifyName);
	void UpdateHeldObjectAnimations();
	void UpdateHeldObject();
	void Server_StartTargetPointAnimation(class UAnimMontage* Animation);
	void Multicast_StartTargetPointAnimation(class UAnimMontage* Animation);
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_WeepingAngel_CharacterBP(int32 EntryPoint, class FName CallFunc_MakeLiteralName_ReturnValue, class FName K2Node_CustomEvent_NotifyName_4, class FName K2Node_CustomEvent_NotifyName_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FName K2Node_CustomEvent_NotifyName_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class FName K2Node_CustomEvent_NotifyName_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class FName K2Node_CustomEvent_NotifyName, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class FName Temp_name_Variable, bool CallFunc_HasAuthority_ReturnValue, class UAnimMontage* K2Node_CustomEvent_Animation_1, class UAnimMontage* K2Node_CustomEvent_Animation, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue, float K2Node_Event_DeltaSeconds, bool CallFunc_IsValid_ReturnValue, TArray<class UActor*>& CallFunc_FindClosedEnemies_LookingEnemies, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4);
	void OnTargetPointAnimationEnded__DelegateSignature();
};

}


