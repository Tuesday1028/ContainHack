#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x58 (0x100 - 0xA8)
// BlueprintGeneratedClass BTTask_GelistirilmisMoveTo.BTTask_GelistirilmisMoveTo_C
class UBTTask_GelistirilmisMoveTo_C : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FBlackboardKeySelector                OutCover;                                          // 0xB0(0x28)(Edit, BlueprintVisible, ExposeOnSpawn)
	struct FBlackboardKeySelector                CoverLoc;                                          // 0xD8(0x28)(Edit, BlueprintVisible, ExposeOnSpawn)

	static class UClass* StaticClass();
	static class UBTTask_GelistirilmisMoveTo_C* GetDefaultObj();

	void OnFail_BAF629614025E6AD0265BCAEDB9416D4(enum class EPathFollowingResult MovementResult);
	void OnSuccess_BAF629614025E6AD0265BCAEDB9416D4(enum class EPathFollowingResult MovementResult);
	void ReceiveExecuteAI(class UAIController* OwnerController, class UPawn* ControlledPawn);
	void ExecuteUbergraph_BTTask_GelistirilmisMoveTo(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, enum class EPathFollowingResult K2Node_CustomEvent_MovementResult, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, enum class EPathFollowingResult Temp_byte_Variable, bool Temp_bool_Has_Been_Initd_Variable, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool Temp_bool_IsClosed_Variable, class UAIController* K2Node_Event_OwnerController, class UPawn* K2Node_Event_ControlledPawn, class UAI_AnimMan_C* K2Node_DynamicCast_AsAI_Anim_Man, bool K2Node_DynamicCast_bSuccess, const struct FVector& CallFunc_GetBlackboardValueAsVector_ReturnValue, class UAIAsyncTaskBlueprintProxy* CallFunc_CreateMoveToProxyObject_ReturnValue, bool CallFunc_IsValid_ReturnValue, enum class EPathFollowingResult K2Node_CustomEvent_MovementResult_1);
};

}


