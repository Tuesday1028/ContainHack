#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x9D (0x32D - 0x290)
// BlueprintGeneratedClass BP_InsideTrigger.BP_InsideTrigger_C
class UBP_InsideTrigger_C : public UActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x290(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBoxComponent*                         ExteriorWeapon;                                    // 0x298(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                         InteriorWeapon;                                    // 0x2A0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UTextRenderComponent*                  Text_Outside;                                      // 0x2A8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UTextRenderComponent*                  Text_Inside;                                       // 0x2B0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                         OUTSIDE;                                           // 0x2B8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBillboardComponent*                   BB_Outside;                                        // 0x2C0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                         Inside;                                            // 0x2C8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBillboardComponent*                   BB_Inside;                                         // 0x2D0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x2D8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	double                                       IndoorAmbientMultiplier;                           // 0x2E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FReverbSettings                       ReverbSettings;                                    // 0x2E8(0x20)(Edit, BlueprintVisible, NoDestructor)
	class FName                                  ReverbAreaName;                                    // 0x308(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       ReverbPriority;                                    // 0x310(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       M4A1_Minus_Single_Shot_Minus_Open_Exterior_02_Cue; // 0x318(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       Target;                                            // 0x320(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                        WeaponSoundPara;                                   // 0x328(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Iceri;                                             // 0x32C(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_InsideTrigger_C* GetDefaultObj();

	void BndEvt__OUTSIDE_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class UActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult);
	void BndEvt__INSIDE_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class UActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult);
	void BndEvt__INSIDE_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class UActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	void BndEvt__OUTSIDE_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class UActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	void BndEvt__BP_InsideTrigger_InteriorWeapon_K2Node_ComponentBoundEvent_4_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class UActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult);
	void BndEvt__BP_InsideTrigger_ExteriorWeapon_K2Node_ComponentBoundEvent_5_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class UActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult);
	void ExecuteUbergraph_BP_InsideTrigger(int32 EntryPoint, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, class UActor* K2Node_ComponentBoundEvent_OtherActor, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, bool K2Node_ComponentBoundEvent_bFromSweep, const struct FHitResult& K2Node_ComponentBoundEvent_SweepResult, int32 Temp_int_Loop_Counter_Variable, class UB_DemoCharacter_C* K2Node_DynamicCast_AsB_Demo_Character, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable, bool Temp_bool_Has_Been_Initd_Variable, int32 Temp_int_Array_Index_Variable_1, bool Temp_bool_Has_Been_Initd_Variable_1, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent_5, class UActor* K2Node_ComponentBoundEvent_OtherActor_5, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp_5, int32 K2Node_ComponentBoundEvent_OtherBodyIndex_5, bool K2Node_ComponentBoundEvent_bFromSweep_3, const struct FHitResult& K2Node_ComponentBoundEvent_SweepResult_3, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent_4, class UActor* K2Node_ComponentBoundEvent_OtherActor_4, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp_4, int32 K2Node_ComponentBoundEvent_OtherBodyIndex_4, bool K2Node_ComponentBoundEvent_bFromSweep_2, const struct FHitResult& K2Node_ComponentBoundEvent_SweepResult_2, TArray<class UActor*>& CallFunc_GetAllActorsWithInterface_OutActors, TArray<class UActor*>& CallFunc_GetAllActorsWithInterface_OutActors_1, class UActor* CallFunc_Array_Get_Item, class UActor* CallFunc_Array_Get_Item_1, TScriptInterface<class UBPI_AudioManager_C> K2Node_DynamicCast_AsBPI_Audio_Manager, bool K2Node_DynamicCast_bSuccess_1, TScriptInterface<class UBPI_AudioManager_C> K2Node_DynamicCast_AsBPI_Audio_Manager_1, bool K2Node_DynamicCast_bSuccess_2, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent_3, class UActor* K2Node_ComponentBoundEvent_OtherActor_3, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp_3, int32 K2Node_ComponentBoundEvent_OtherBodyIndex_3, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent_2, class UActor* K2Node_ComponentBoundEvent_OtherActor_2, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp_2, int32 K2Node_ComponentBoundEvent_OtherBodyIndex_2, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, bool Temp_bool_IsClosed_Variable, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, double CallFunc_VSize_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_1, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_2, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue_1, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue_2, double CallFunc_VSize_ReturnValue_1, double CallFunc_VSize_ReturnValue_2, bool CallFunc_LessEqual_DoubleDouble_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_3, class UCharacter* CallFunc_GetPlayerCharacter_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue_3, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, double CallFunc_VSize_ReturnValue_3, bool CallFunc_LessEqual_DoubleDouble_ReturnValue_1, class UCharacter* CallFunc_GetPlayerCharacter_ReturnValue_1, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_1, class UCharacter* CallFunc_GetPlayerCharacter_ReturnValue_2, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_2, class UCharacter* CallFunc_GetPlayerCharacter_ReturnValue_3, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_3, bool Temp_bool_IsClosed_Variable_1, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent_1, class UActor* K2Node_ComponentBoundEvent_OtherActor_1, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp_1, int32 K2Node_ComponentBoundEvent_OtherBodyIndex_1, bool K2Node_ComponentBoundEvent_bFromSweep_1, const struct FHitResult& K2Node_ComponentBoundEvent_SweepResult_1, class UB_DemoCharacter_C* K2Node_DynamicCast_AsB_Demo_Character_1, bool K2Node_DynamicCast_bSuccess_3);
};

}

