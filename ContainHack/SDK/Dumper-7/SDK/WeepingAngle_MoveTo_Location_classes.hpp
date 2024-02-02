#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x120 (0x1C8 - 0xA8)
// BlueprintGeneratedClass WeepingAngle_MoveTo_Location.WeepingAngle_MoveTo_Location_C
class UWeepingAngle_MoveTo_Location_C : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FBlackboardKeySelector                TargetLocation;                                    // 0xB0(0x28)(Edit, BlueprintVisible, ExposeOnSpawn)
	class UPawn*                                 _ControlledPawn;                                   // 0xD8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UAIController*                         _OwnerController;                                  // 0xE0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TArray<struct FFAISafeArea>                  SafeArea;                                          // 0xE8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FFAISafeArea                          CurrentRunningSafeArea;                            // 0xF8(0x28)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	int32                                        CurrentRunningSafeStage;                           // 0x120(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_40F7[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FBlackboardKeySelector                TargetEnemy;                                       // 0x128(0x28)(Edit, BlueprintVisible)
	struct FBlackboardKeySelector                bIsTakingDamage;                                   // 0x150(0x28)(Edit, BlueprintVisible)
	struct FBlackboardKeySelector                bIsHearing;                                        // 0x178(0x28)(Edit, BlueprintVisible)
	struct FBlackboardKeySelector                bIsSuspect;                                        // 0x1A0(0x28)(Edit, BlueprintVisible)

	static class UClass* StaticClass();
	static class UWeepingAngle_MoveTo_Location_C* GetDefaultObj();

	void GetSafeArea(class UAIController* Controller, TArray<struct FFAISafeArea>* SafeArea, class UWeepingAngle_AIControllerBP_C* K2Node_DynamicCast_AsWeeping_Angle_AIController_BP, bool K2Node_DynamicCast_bSuccess);
	void OnFail_275CA4BD42B1C1EB9C5F8D871F6DFA6A(enum class EPathFollowingResult MovementResult);
	void OnSuccess_275CA4BD42B1C1EB9C5F8D871F6DFA6A(enum class EPathFollowingResult MovementResult);
	void ReceiveExecuteAI(class UAIController* OwnerController, class UPawn* ControlledPawn);
	void ReceiveTickAI(class UAIController* OwnerController, class UPawn* ControlledPawn, float DeltaSeconds);
	void OnTargetPointAnimationEnded();
	void ExecuteUbergraph_WeepingAngle_MoveTo_Location(int32 EntryPoint, class UWeepingAngel_CharacterBP_C* K2Node_DynamicCast_AsWeeping_Angel_Character_BP, bool K2Node_DynamicCast_bSuccess, class UAIController* K2Node_Event_OwnerController_1, class UPawn* K2Node_Event_ControlledPawn_1, const struct FVector& CallFunc_GetBlackboardValueAsVector_ReturnValue, class UAIAsyncTaskBlueprintProxy* CallFunc_CreateMoveToProxyObject_ReturnValue, bool CallFunc_IsValid_ReturnValue, TArray<struct FFAISafeArea>& CallFunc_GetSafeArea_SafeArea, int32 CallFunc_Array_Length_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Variable, bool CallFunc_IsValid_ReturnValue_1, enum class EPathFollowingResult K2Node_CustomEvent_MovementResult_1, class UAIController* K2Node_Event_OwnerController, class UPawn* K2Node_Event_ControlledPawn, float K2Node_Event_DeltaSeconds, class UActor* CallFunc_GetBlackboardValueAsActor_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, class UActor* CallFunc_GetBlackboardValueAsActor_ReturnValue_1, bool CallFunc_GetBlackboardValueAsBool_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_GetBlackboardValueAsBool_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_GetBlackboardValueAsBool_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue_1, class UActor* CallFunc_GetBlackboardValueAsActor_ReturnValue_2, bool CallFunc_GetBlackboardValueAsBool_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_4, bool CallFunc_GetBlackboardValueAsBool_ReturnValue_4, bool CallFunc_BooleanOR_ReturnValue_2, bool CallFunc_GetBlackboardValueAsBool_ReturnValue_5, bool CallFunc_BooleanOR_ReturnValue_3, const struct FVector& CallFunc_K2_GetRandomReachablePointInRadius_RandomLocation, bool CallFunc_K2_GetRandomReachablePointInRadius_ReturnValue, bool CallFunc_GetBlackboardValueAsBool_ReturnValue_6, bool CallFunc_GetBlackboardValueAsBool_ReturnValue_7, bool CallFunc_GetBlackboardValueAsBool_ReturnValue_8, bool CallFunc_BooleanOR_ReturnValue_4, bool CallFunc_BooleanOR_ReturnValue_5, const struct FFAISafeArea& CallFunc_Array_Get_Item, enum class EPathFollowingResult Temp_byte_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, enum class EPathFollowingResult K2Node_CustomEvent_MovementResult, class UWeepingAngel_CharacterBP_C* K2Node_DynamicCast_AsWeeping_Angel_Character_BP_1, bool K2Node_DynamicCast_bSuccess_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class UWeepingAngel_CharacterBP_C* K2Node_DynamicCast_AsWeeping_Angel_Character_BP_2, bool K2Node_DynamicCast_bSuccess_2, float CallFunc_Delay_Duration_ImplicitCast);
};

}


