#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xB8 (0x160 - 0xA8)
// BlueprintGeneratedClass BTTask_Crouch.BTTask_Crouch_C
class UBTTask_Crouch_C : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	double                                       Random;                                            // 0xB0(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FBlackboardKeySelector                SelfSee;                                           // 0xB8(0x28)(Edit, BlueprintVisible, ExposeOnSpawn)
	struct FBlackboardKeySelector                OutCover;                                          // 0xE0(0x28)(Edit, BlueprintVisible, ExposeOnSpawn)
	bool                                         IsCoverFire;                                       // 0x108(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_143D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FBlackboardKeySelector                CrouchKey;                                         // 0x110(0x28)(Edit, BlueprintVisible, ExposeOnSpawn)
	struct FBlackboardKeySelector                Target;                                            // 0x138(0x28)(Edit, BlueprintVisible, ExposeOnSpawn)

	static class UClass* StaticClass();
	static class UBTTask_Crouch_C* GetDefaultObj();

	void ReceiveTickAI(class UAIController* OwnerController, class UPawn* ControlledPawn, float DeltaSeconds);
	void ReceiveExecuteAI(class UAIController* OwnerController, class UPawn* ControlledPawn);
	void ExecuteUbergraph_BTTask_Crouch(int32 EntryPoint, class UAIController* K2Node_Event_OwnerController, class UPawn* K2Node_Event_ControlledPawn, class UAI_AnimMan_C* K2Node_DynamicCast_AsAI_Anim_Man, bool K2Node_DynamicCast_bSuccess, bool Temp_bool_Has_Been_Initd_Variable, double CallFunc_RandomFloatInRange_ReturnValue, bool Temp_bool_IsClosed_Variable, bool CallFunc_RandomBool_ReturnValue, bool CallFunc_GetBlackboardValueAsBool_ReturnValue, class UObject* CallFunc_GetBlackboardValueAsObject_ReturnValue, class UB_DemoCharacter_Child_C* K2Node_DynamicCast_AsB_Demo_Character_Child, bool K2Node_DynamicCast_bSuccess_1, class UAIController* K2Node_Event_OwnerController_1, class UPawn* K2Node_Event_ControlledPawn_1, float K2Node_Event_DeltaSeconds, class UAI_AnimMan_C* K2Node_DynamicCast_AsAI_Anim_Man_1, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_GetBlackboardValueAsBool_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, float CallFunc_Delay_Duration_ImplicitCast, float CallFunc_Delay_Duration_ImplicitCast_1, float CallFunc_Delay_Duration_ImplicitCast_2);
};

}


