#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1F8 (0x2A0 - 0xA8)
// BlueprintGeneratedClass MoveTo_Threat.MoveTo_Threat_C
class UMoveTo_Threat_C : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FBlackboardKeySelector                TargetEnemy;                                       // 0xB0(0x28)(Edit, BlueprintVisible, ExposeOnSpawn)
	struct FBlackboardKeySelector                TargetLocation;                                    // 0xD8(0x28)(Edit, BlueprintVisible, ExposeOnSpawn)
	struct FBlackboardKeySelector                bIsTakingDamage;                                   // 0x100(0x28)(Edit, BlueprintVisible, ExposeOnSpawn)
	struct FBlackboardKeySelector                bIsHearing;                                        // 0x128(0x28)(Edit, BlueprintVisible, ExposeOnSpawn)
	struct FBlackboardKeySelector                bIsSuspect;                                        // 0x150(0x28)(Edit, BlueprintVisible, ExposeOnSpawn)
	struct FBlackboardKeySelector                bIsMovingCover;                                    // 0x178(0x28)(Edit, BlueprintVisible, ExposeOnSpawn)
	struct FBlackboardKeySelector                bIsInCover;                                        // 0x1A0(0x28)(Edit, BlueprintVisible, ExposeOnSpawn)
	struct FBlackboardKeySelector                TargetSuspect;                                     // 0x1C8(0x28)(Edit, BlueprintVisible, ExposeOnSpawn)
	struct FBlackboardKeySelector                bIsProned;                                         // 0x1F0(0x28)(Edit, BlueprintVisible, ExposeOnSpawn)
	struct FBlackboardKeySelector                LastTargetLocation;                                // 0x218(0x28)(Edit, BlueprintVisible, ExposeOnSpawn)
	struct FBlackboardKeySelector                bIsImminentThreat;                                 // 0x240(0x28)(Edit, BlueprintVisible, ExposeOnSpawn)
	struct FBlackboardKeySelector                TargetThreat;                                      // 0x268(0x28)(Edit, BlueprintVisible, ExposeOnSpawn)
	class UPawn*                                 _ControlledPawn;                                   // 0x290(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UAIController*                         _OwnerController;                                  // 0x298(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UMoveTo_Threat_C* GetDefaultObj();

	void OnFail_CF31856B4AA9435C1F1E4291631C6804(enum class EPathFollowingResult MovementResult);
	void OnSuccess_CF31856B4AA9435C1F1E4291631C6804(enum class EPathFollowingResult MovementResult);
	void ReceiveTickAI(class UAIController* OwnerController, class UPawn* ControlledPawn, float DeltaSeconds);
	void ReceiveExecuteAI(class UAIController* OwnerController, class UPawn* ControlledPawn);
	void ExecuteUbergraph_MoveTo_Threat(int32 EntryPoint, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, enum class EPathFollowingResult Temp_byte_Variable, class UAIController* K2Node_Event_OwnerController_1, class UPawn* K2Node_Event_ControlledPawn_1, float K2Node_Event_DeltaSeconds, class UAIController* K2Node_Event_OwnerController, class UPawn* K2Node_Event_ControlledPawn, enum class EPathFollowingResult K2Node_CustomEvent_MovementResult, class USoldiers_CharacterBP_C* K2Node_DynamicCast_AsSoldiers_Character_BP, bool K2Node_DynamicCast_bSuccess, TArray<struct FBlackboardKeySelector>& K2Node_MakeArray_Array, const struct FVector& CallFunc_GetBlackboardValueAsVector_ReturnValue, const struct FBlackboardKeySelector& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UAIAsyncTaskBlueprintProxy* CallFunc_CreateMoveToProxyObject_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_GetBlackboardValueAsVector_ReturnValue_1, class USoldiers_CharacterBP_C* K2Node_DynamicCast_AsSoldiers_Character_BP_1, bool K2Node_DynamicCast_bSuccess_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, enum class EPathFollowingResult K2Node_CustomEvent_MovementResult_1, class USoldiers_CharacterBP_C* K2Node_DynamicCast_AsSoldiers_Character_BP_2, bool K2Node_DynamicCast_bSuccess_2, class USoldiers_CharacterBP_C* K2Node_DynamicCast_AsSoldiers_Character_BP_3, bool K2Node_DynamicCast_bSuccess_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1);
};

}


