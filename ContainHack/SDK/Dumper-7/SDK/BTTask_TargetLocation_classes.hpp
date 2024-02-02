#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC8 (0x170 - 0xA8)
// BlueprintGeneratedClass BTTask_TargetLocation.BTTask_TargetLocation_C
class UBTTask_TargetLocation_C : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FBlackboardKeySelector                Location;                                          // 0xB0(0x28)(Edit, BlueprintVisible, ExposeOnSpawn)
	struct FBlackboardKeySelector                IsSee;                                             // 0xD8(0x28)(Edit, BlueprintVisible, ExposeOnSpawn)
	class UB_DemoCharacter_Child_C*              Target;                                            // 0x100(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FBlackboardKeySelector                TargetActor;                                       // 0x108(0x28)(Edit, BlueprintVisible, ExposeOnSpawn)
	double                                       Radius;                                            // 0x130(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FBlackboardKeySelector                IsInside;                                          // 0x138(0x28)(Edit, BlueprintVisible, ExposeOnSpawn)
	class UB_DemoCharacter_Child_C*              As_B_Demo_Character_Child;                         // 0x160(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                       Speed;                                             // 0x168(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBTTask_TargetLocation_C* GetDefaultObj();

	void OnFail_9432DB8744E4DA08DA91769064B8C8FE(enum class EPathFollowingResult MovementResult);
	void OnSuccess_9432DB8744E4DA08DA91769064B8C8FE(enum class EPathFollowingResult MovementResult);
	void OnFail_1E891E58498D34E98AEB6E885935B940(enum class EPathFollowingResult MovementResult);
	void OnSuccess_1E891E58498D34E98AEB6E885935B940(enum class EPathFollowingResult MovementResult);
	void ReceiveTickAI(class UAIController* OwnerController, class UPawn* ControlledPawn, float DeltaSeconds);
	void ReceiveExecuteAI(class UAIController* OwnerController, class UPawn* ControlledPawn);
	void ExecuteUbergraph_BTTask_TargetLocation(int32 EntryPoint, enum class EPathFollowingResult K2Node_CustomEvent_MovementResult_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, enum class EPathFollowingResult K2Node_CustomEvent_MovementResult, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, enum class EPathFollowingResult Temp_byte_Variable, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue, class UAIController* K2Node_Event_OwnerController_1, class UPawn* K2Node_Event_ControlledPawn_1, float K2Node_Event_DeltaSeconds, enum class EPathFollowingResult Temp_byte_Variable_1, class UAIAsyncTaskBlueprintProxy* CallFunc_CreateMoveToProxyObject_ReturnValue, class UAI_Steve_C* K2Node_DynamicCast_AsAI_Steve, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, class UAI_WeepingAngel_C* K2Node_DynamicCast_AsAI_Weeping_Angel, bool K2Node_DynamicCast_bSuccess_1, class UObject* CallFunc_GetBlackboardValueAsObject_ReturnValue, class UB_DemoCharacter_Child_C* K2Node_DynamicCast_AsB_Demo_Character_Child, bool K2Node_DynamicCast_bSuccess_2, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, class UObject* CallFunc_GetBlackboardValueAsObject_ReturnValue_1, class UB_DemoCharacter_Child_C* K2Node_DynamicCast_AsB_Demo_Character_Child_1, bool K2Node_DynamicCast_bSuccess_3, const struct FVector& CallFunc_K2_GetRandomReachablePointInRadius_RandomLocation, bool CallFunc_K2_GetRandomReachablePointInRadius_ReturnValue, class UAIController* K2Node_Event_OwnerController, class UPawn* K2Node_Event_ControlledPawn, class UAIAsyncTaskBlueprintProxy* CallFunc_CreateMoveToProxyObject_ReturnValue_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_2, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, double CallFunc_VSize_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_Greater_DoubleDouble_ReturnValue, class UAI_Blackhole_C* K2Node_DynamicCast_AsAI_Blackhole, bool K2Node_DynamicCast_bSuccess_4, enum class EPathFollowingResult K2Node_CustomEvent_MovementResult_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class UObject* CallFunc_GetBlackboardValueAsObject_ReturnValue_2, class UB_DemoCharacter_Child_C* K2Node_DynamicCast_AsB_Demo_Character_Child_2, bool K2Node_DynamicCast_bSuccess_5, bool CallFunc_GetBlackboardValueAsBool_ReturnValue, bool Temp_bool_IsClosed_Variable, enum class EPathFollowingResult K2Node_CustomEvent_MovementResult_3, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_3, bool Temp_bool_Has_Been_Initd_Variable, class UObject* CallFunc_GetBlackboardValueAsObject_ReturnValue_3, class UB_DemoCharacter_Child_C* K2Node_DynamicCast_AsB_Demo_Character_Child_3, bool K2Node_DynamicCast_bSuccess_6, float CallFunc_K2_GetRandomReachablePointInRadius_Radius_ImplicitCast);
};

}


