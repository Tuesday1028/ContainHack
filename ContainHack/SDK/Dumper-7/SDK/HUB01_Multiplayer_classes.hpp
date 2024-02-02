#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x2C0 - 0x298)
// BlueprintGeneratedClass HUB01_Multiplayer.HUB01_Multiplayer_C
class UHUB01_Multiplayer_C : public ULevelScriptActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x298(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UB_DemoCharacter_Child_C*              Ref;                                               // 0x2A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TArray<bool>                                 Inside;                                            // 0x2A8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UGI_Contain_C*                         As_GI_Contain;                                     // 0x2B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UHUB01_Multiplayer_C* GetDefaultObj();

	void BndEvt__HUB01_Multiplayer_TriggerSphere_1_K2Node_ActorBoundEvent_0_ActorBeginOverlapSignature__DelegateSignature(class UActor* OverlappedActor, class UActor* OtherActor);
	void BndEvt__HUB01_Multiplayer_TriggerSphere_1_K2Node_ActorBoundEvent_1_ActorEndOverlapSignature__DelegateSignature(class UActor* OverlappedActor, class UActor* OtherActor);
	void BndEvt__HUB01_Multiplayer_TriggerSphere_2_K2Node_ActorBoundEvent_2_ActorBeginOverlapSignature__DelegateSignature(class UActor* OverlappedActor, class UActor* OtherActor);
	void BndEvt__HUB01_Multiplayer_TriggerSphere_2_K2Node_ActorBoundEvent_3_ActorEndOverlapSignature__DelegateSignature(class UActor* OverlappedActor, class UActor* OtherActor);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void BndEvt__HUB01_Multiplayer_TriggerBox_1_K2Node_ActorBoundEvent_4_ActorBeginOverlapSignature__DelegateSignature(class UActor* OverlappedActor, class UActor* OtherActor);
	void BndEvt__HUB01_Multiplayer_TriggerBox_1_K2Node_ActorBoundEvent_5_ActorEndOverlapSignature__DelegateSignature(class UActor* OverlappedActor, class UActor* OtherActor);
	void ExecuteUbergraph_HUB01_Multiplayer(int32 EntryPoint, TArray<class UB_DemoCharacter_Child_C*>& CallFunc_GetAllActorsOfClass_OutActors, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, class UActor* K2Node_ActorBoundEvent_OverlappedActor_5, class UActor* K2Node_ActorBoundEvent_OtherActor_5, class UActor* K2Node_ActorBoundEvent_OverlappedActor_4, class UActor* K2Node_ActorBoundEvent_OtherActor_4, class UB_DemoCharacter_Child_C* K2Node_DynamicCast_AsB_Demo_Character_Child, bool K2Node_DynamicCast_bSuccess, bool Temp_bool_Variable, class UActor* K2Node_ActorBoundEvent_OverlappedActor_3, class UActor* K2Node_ActorBoundEvent_OtherActor_3, bool Temp_bool_Variable_1, class UB_DemoCharacter_Child_C* K2Node_DynamicCast_AsB_Demo_Character_Child_1, bool K2Node_DynamicCast_bSuccess_1, class UActor* K2Node_ActorBoundEvent_OverlappedActor_2, class UActor* K2Node_ActorBoundEvent_OtherActor_2, int32 Temp_int_Array_Index_Variable, class UB_DemoCharacter_Child_C* K2Node_DynamicCast_AsB_Demo_Character_Child_2, bool K2Node_DynamicCast_bSuccess_2, class UB_DemoCharacter_Child_C* CallFunc_Array_Get_Item, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, int32 Temp_int_Loop_Counter_Variable, class UGI_Contain_C* K2Node_DynamicCast_AsGI_Contain, bool K2Node_DynamicCast_bSuccess_3, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, float K2Node_Event_DeltaSeconds, class UActor* K2Node_ActorBoundEvent_OverlappedActor_1, class UActor* K2Node_ActorBoundEvent_OtherActor_1, class UActor* K2Node_ActorBoundEvent_OverlappedActor, class UActor* K2Node_ActorBoundEvent_OtherActor, bool CallFunc_ActorHasTag_ReturnValue, bool CallFunc_ActorHasTag_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Array_RemoveItem_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue);
};

}


