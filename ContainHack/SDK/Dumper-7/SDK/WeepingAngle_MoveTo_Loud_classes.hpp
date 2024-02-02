#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x40 (0xE8 - 0xA8)
// BlueprintGeneratedClass WeepingAngle_MoveTo_Loud.WeepingAngle_MoveTo_Loud_C
class UWeepingAngle_MoveTo_Loud_C : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FBlackboardKeySelector                TargetLocation;                                    // 0xB0(0x28)(Edit, BlueprintVisible, ExposeOnSpawn)
	class UPawn*                                 _ControlledPawn;                                   // 0xD8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UAIController*                         _OwnerController;                                  // 0xE0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWeepingAngle_MoveTo_Loud_C* GetDefaultObj();

	void OnFail_287924C44340F6743CA2AC98A454BE26(enum class EPathFollowingResult MovementResult);
	void OnSuccess_287924C44340F6743CA2AC98A454BE26(enum class EPathFollowingResult MovementResult);
	void ReceiveExecuteAI(class UAIController* OwnerController, class UPawn* ControlledPawn);
	void ExecuteUbergraph_WeepingAngle_MoveTo_Loud(int32 EntryPoint, enum class EPathFollowingResult K2Node_CustomEvent_MovementResult, class UWeepingAngel_CharacterBP_C* K2Node_DynamicCast_AsWeeping_Angel_Character_BP, bool K2Node_DynamicCast_bSuccess, enum class EPathFollowingResult Temp_byte_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UAIController* K2Node_Event_OwnerController, class UPawn* K2Node_Event_ControlledPawn, const struct FVector& CallFunc_GetBlackboardValueAsVector_ReturnValue, class UAIAsyncTaskBlueprintProxy* CallFunc_CreateMoveToProxyObject_ReturnValue, bool CallFunc_IsValid_ReturnValue, enum class EPathFollowingResult K2Node_CustomEvent_MovementResult_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1);
};

}


