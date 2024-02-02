#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x60 (0x108 - 0xA8)
// BlueprintGeneratedClass BTTask_SetFocus.BTTask_SetFocus_C
class UBTTask_SetFocus_C : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FBlackboardKeySelector                Target_actor;                                      // 0xB0(0x28)(Edit, BlueprintVisible)
	struct FBlackboardKeySelector                SelfSee;                                           // 0xD8(0x28)(Edit, BlueprintVisible, ExposeOnSpawn)
	class UAI_AnimMan_C*                         As_AI_Anim_Man;                                    // 0x100(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBTTask_SetFocus_C* GetDefaultObj();

	void ReceiveExecuteAI(class UAIController* OwnerController, class UPawn* ControlledPawn);
	void ExecuteUbergraph_BTTask_SetFocus(int32 EntryPoint, bool Temp_bool_IsClosed_Variable, class UAIController* K2Node_Event_OwnerController, class UPawn* K2Node_Event_ControlledPawn, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue, class UAI_AnimMan_C* K2Node_DynamicCast_AsAI_Anim_Man, bool K2Node_DynamicCast_bSuccess, class UObject* CallFunc_GetBlackboardValueAsObject_ReturnValue, class UB_DemoCharacter_Child_C* K2Node_DynamicCast_AsB_Demo_Character_Child, bool K2Node_DynamicCast_bSuccess_1, bool Temp_bool_Has_Been_Initd_Variable, class UObject* CallFunc_GetBlackboardValueAsObject_ReturnValue_1, class UB_DemoCharacter_Child_C* K2Node_DynamicCast_AsB_Demo_Character_Child_1, bool K2Node_DynamicCast_bSuccess_2, class FName CallFunc_MakeLiteralName_ReturnValue, bool CallFunc_GetBlackboardValueAsBool_ReturnValue);
};

}


