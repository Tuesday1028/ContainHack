#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xE0 (0x188 - 0xA8)
// BlueprintGeneratedClass Steve_MoveTo_Enemy.Steve_MoveTo_Enemy_C
class USteve_MoveTo_Enemy_C : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FBlackboardKeySelector                TargetSuspect;                                     // 0xB0(0x28)(Edit, BlueprintVisible, ExposeOnSpawn)
	struct FBlackboardKeySelector                TargetCoverLocation;                               // 0xD8(0x28)(Edit, BlueprintVisible, ExposeOnSpawn)
	struct FBlackboardKeySelector                IsMovingCover;                                     // 0x100(0x28)(Edit, BlueprintVisible, ExposeOnSpawn)
	struct FBlackboardKeySelector                IsInCover;                                         // 0x128(0x28)(Edit, BlueprintVisible, ExposeOnSpawn)
	struct FBlackboardKeySelector                bIsTakingDamage;                                   // 0x150(0x28)(Edit, BlueprintVisible, ExposeOnSpawn)
	class UPawn*                                 _ControlledPawn;                                   // 0x178(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UAIController*                         _OwnerController;                                  // 0x180(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class USteve_MoveTo_Enemy_C* GetDefaultObj();

	void OnFail_68A010FD4A42730D94132C97CB125C9A(enum class EPathFollowingResult MovementResult);
	void OnSuccess_68A010FD4A42730D94132C97CB125C9A(enum class EPathFollowingResult MovementResult);
	void ReceiveExecuteAI(class UAIController* OwnerController, class UPawn* ControlledPawn);
	void ExecuteUbergraph_Steve_MoveTo_Enemy(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_K2_GetRandomReachablePointInRadius_RandomLocation, bool CallFunc_K2_GetRandomReachablePointInRadius_ReturnValue, class UAIAsyncTaskBlueprintProxy* CallFunc_CreateMoveToProxyObject_ReturnValue, bool CallFunc_IsValid_ReturnValue, enum class EPathFollowingResult Temp_byte_Variable, class UAI_Steve_C* K2Node_DynamicCast_AsAI_Steve, bool K2Node_DynamicCast_bSuccess, class UActor* CallFunc_GetBlackboardValueAsActor_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UAIController* K2Node_Event_OwnerController, class UPawn* K2Node_Event_ControlledPawn, enum class EPathFollowingResult K2Node_CustomEvent_MovementResult, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UAI_Steve_C* K2Node_DynamicCast_AsAI_Steve_1, bool K2Node_DynamicCast_bSuccess_1, class UAI_Steve_C* K2Node_DynamicCast_AsAI_Steve_2, bool K2Node_DynamicCast_bSuccess_2, enum class EPathFollowingResult K2Node_CustomEvent_MovementResult_1);
};

}


