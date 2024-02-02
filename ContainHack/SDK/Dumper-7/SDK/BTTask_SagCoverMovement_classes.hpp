#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x158 (0x200 - 0xA8)
// BlueprintGeneratedClass BTTask_SagCoverMovement.BTTask_SagCoverMovement_C
class UBTTask_SagCoverMovement_C : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	float                                        Duration;                                          // 0xB0(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_24C3[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FBlackboardKeySelector                CoverOut;                                          // 0xB8(0x28)(Edit, BlueprintVisible, Net, ExposeOnSpawn)
	struct FBlackboardKeySelector                CoverIn;                                           // 0xE0(0x28)(Edit, BlueprintVisible, Net, ExposeOnSpawn)
	struct FBlackboardKeySelector                Target;                                            // 0x108(0x28)(Edit, BlueprintVisible, Net, ExposeOnSpawn)
	struct FBlackboardKeySelector                OutCover;                                          // 0x130(0x28)(Edit, BlueprintVisible, Net, ExposeOnSpawn)
	int32                                        Loop;                                              // 0x158(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_24C5[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FBlackboardKeySelector                SagYat;                                            // 0x160(0x28)(Edit, BlueprintVisible, ExposeOnSpawn)
	struct FBlackboardKeySelector                SolYat;                                            // 0x188(0x28)(Edit, BlueprintVisible, ExposeOnSpawn)
	struct FBlackboardKeySelector                Sarjor;                                            // 0x1B0(0x28)(Edit, BlueprintVisible, ExposeOnSpawn)
	struct FBlackboardKeySelector                SelfSee;                                           // 0x1D8(0x28)(Edit, BlueprintVisible, ExposeOnSpawn)

	static class UClass* StaticClass();
	static class UBTTask_SagCoverMovement_C* GetDefaultObj();

	void ReceiveTickAI(class UAIController* OwnerController, class UPawn* ControlledPawn, float DeltaSeconds);
	void ExecuteUbergraph_BTTask_SagCoverMovement(int32 EntryPoint, bool CallFunc_GetBlackboardValueAsBool_ReturnValue, bool CallFunc_GetBlackboardValueAsBool_ReturnValue_1, bool CallFunc_GetBlackboardValueAsBool_ReturnValue_2, class UAIController* K2Node_Event_OwnerController, class UPawn* K2Node_Event_ControlledPawn, float K2Node_Event_DeltaSeconds, class UAI_AnimMan_C* K2Node_DynamicCast_AsAI_Anim_Man, bool K2Node_DynamicCast_bSuccess, class UAI_AnimMan_C* K2Node_DynamicCast_AsAI_Anim_Man_1, bool K2Node_DynamicCast_bSuccess_1, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, class UALS_AiAnimBP_C* K2Node_DynamicCast_AsALS_Ai_Anim_BP, bool K2Node_DynamicCast_bSuccess_2, double CallFunc_RandomFloatInRange_ReturnValue, bool CallFunc_GetBlackboardValueAsBool_ReturnValue_3, bool Temp_bool_Has_Been_Initd_Variable, bool CallFunc_Not_PreBool_ReturnValue, bool Temp_bool_IsClosed_Variable, float K2Node_VariableSet_Duration_ImplicitCast);
};

}


