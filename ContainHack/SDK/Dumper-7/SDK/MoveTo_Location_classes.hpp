#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x198 (0x240 - 0xA8)
// BlueprintGeneratedClass MoveTo_Location.MoveTo_Location_C
class UMoveTo_Location_C : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FBlackboardKeySelector                TargetEnemy;                                       // 0xB0(0x28)(Edit, BlueprintVisible, ExposeOnSpawn)
	struct FBlackboardKeySelector                TargetLocation;                                    // 0xD8(0x28)(Edit, BlueprintVisible, ExposeOnSpawn)
	struct FBlackboardKeySelector                bIsMovingCover;                                    // 0x100(0x28)(Edit, BlueprintVisible, ExposeOnSpawn)
	class UPawn*                                 _ControlledPawn;                                   // 0x128(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UAIController*                         _OwnerController;                                  // 0x130(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TArray<struct FFAISafeArea>                  SafeArea;                                          // 0x138(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FFAISafeArea                          CurrentRunningSafeArea;                            // 0x148(0x28)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	int32                                        CurrentRunningSafeStage;                           // 0x170(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1998[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FBlackboardKeySelector                bIsTakingDamage;                                   // 0x178(0x28)(Edit, BlueprintVisible, ExposeOnSpawn)
	struct FBlackboardKeySelector                bIsHearing;                                        // 0x1A0(0x28)(Edit, BlueprintVisible, ExposeOnSpawn)
	struct FBlackboardKeySelector                bIsSuspect;                                        // 0x1C8(0x28)(Edit, BlueprintVisible, ExposeOnSpawn)
	struct FBlackboardKeySelector                bIsProned;                                         // 0x1F0(0x28)(Edit, BlueprintVisible, ExposeOnSpawn)
	struct FBlackboardKeySelector                bIsImminentThreat;                                 // 0x218(0x28)(Edit, BlueprintVisible, ExposeOnSpawn)

	static class UClass* StaticClass();
	static class UMoveTo_Location_C* GetDefaultObj();

	void OnFail_75A6FFEF4B8BA83AE5DE6398E13B9133(enum class EPathFollowingResult MovementResult);
	void OnSuccess_75A6FFEF4B8BA83AE5DE6398E13B9133(enum class EPathFollowingResult MovementResult);
	void ReceiveExecuteAI(class UAIController* OwnerController, class UPawn* ControlledPawn);
	void ReceiveTickAI(class UAIController* OwnerController, class UPawn* ControlledPawn, float DeltaSeconds);
	void OnTargetPointAnimationEnded();
	void ExecuteUbergraph_MoveTo_Location(int32 EntryPoint, double CallFunc_RandomFloatInRange_ReturnValue, class UAIController* K2Node_Event_OwnerController_1, class UPawn* K2Node_Event_ControlledPawn_1, const struct FVector& CallFunc_GetBlackboardValueAsVector_ReturnValue, class UAIAsyncTaskBlueprintProxy* CallFunc_CreateMoveToProxyObject_ReturnValue, bool CallFunc_IsValid_ReturnValue, class USoldiers_CharacterBP_C* K2Node_DynamicCast_AsSoldiers_Character_BP, bool K2Node_DynamicCast_bSuccess, class USoldiers_AIControllerBP_C* K2Node_DynamicCast_AsSoldiers_AIController_BP, bool K2Node_DynamicCast_bSuccess_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue, enum class EPathFollowingResult K2Node_CustomEvent_MovementResult_1, int32 Temp_int_Variable, bool CallFunc_IsValid_ReturnValue_1, class UAIController* K2Node_Event_OwnerController, class UPawn* K2Node_Event_ControlledPawn, float K2Node_Event_DeltaSeconds, class UActor* CallFunc_GetBlackboardValueAsActor_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, class UActor* CallFunc_GetBlackboardValueAsActor_ReturnValue_1, bool CallFunc_GetBlackboardValueAsBool_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_GetBlackboardValueAsBool_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_GetBlackboardValueAsBool_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_GetBlackboardValueAsBool_ReturnValue_3, bool CallFunc_BooleanOR_ReturnValue_2, class UActor* CallFunc_GetBlackboardValueAsActor_ReturnValue_2, bool CallFunc_GetBlackboardValueAsBool_ReturnValue_4, bool CallFunc_IsValid_ReturnValue_4, bool CallFunc_GetBlackboardValueAsBool_ReturnValue_5, bool CallFunc_BooleanOR_ReturnValue_3, bool CallFunc_GetBlackboardValueAsBool_ReturnValue_6, bool CallFunc_BooleanOR_ReturnValue_4, bool CallFunc_GetBlackboardValueAsBool_ReturnValue_7, bool CallFunc_BooleanOR_ReturnValue_5, bool CallFunc_GetBlackboardValueAsBool_ReturnValue_8, bool CallFunc_GetBlackboardValueAsBool_ReturnValue_9, bool CallFunc_GetBlackboardValueAsBool_ReturnValue_10, bool CallFunc_BooleanOR_ReturnValue_6, bool CallFunc_BooleanOR_ReturnValue_7, bool CallFunc_GetBlackboardValueAsBool_ReturnValue_11, bool CallFunc_BooleanOR_ReturnValue_8, const struct FVector& CallFunc_K2_GetRandomReachablePointInRadius_RandomLocation, bool CallFunc_K2_GetRandomReachablePointInRadius_ReturnValue, class USoldiers_CharacterBP_C* K2Node_DynamicCast_AsSoldiers_Character_BP_1, bool K2Node_DynamicCast_bSuccess_2, enum class EPathFollowingResult Temp_byte_Variable, const struct FFAISafeArea& CallFunc_Array_Get_Item, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class USoldiers_CharacterBP_C* K2Node_DynamicCast_AsSoldiers_Character_BP_2, bool K2Node_DynamicCast_bSuccess_3, bool CallFunc_GetBlackboardValueAsBool_ReturnValue_12, bool CallFunc_BooleanOR_ReturnValue_9, bool CallFunc_GetBlackboardValueAsBool_ReturnValue_13, bool CallFunc_BooleanOR_ReturnValue_10, bool CallFunc_GetBlackboardValueAsBool_ReturnValue_14, bool CallFunc_BooleanOR_ReturnValue_11, enum class EPathFollowingResult K2Node_CustomEvent_MovementResult, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, float CallFunc_K2_GetRandomReachablePointInRadius_Radius_ImplicitCast, float CallFunc_Delay_Duration_ImplicitCast);
};

}


