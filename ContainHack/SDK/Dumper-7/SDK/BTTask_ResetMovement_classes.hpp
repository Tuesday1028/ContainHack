#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x58 (0x100 - 0xA8)
// BlueprintGeneratedClass BTTask_ResetMovement.BTTask_ResetMovement_C
class UBTTask_ResetMovement_C : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FBlackboardKeySelector                MovementFinish;                                    // 0xB0(0x28)(Edit, BlueprintVisible, Net)
	struct FBlackboardKeySelector                OneTime;                                           // 0xD8(0x28)(Edit, BlueprintVisible, Net)

	static class UClass* StaticClass();
	static class UBTTask_ResetMovement_C* GetDefaultObj();

	void ReceiveExecuteAI(class UAIController* OwnerController, class UPawn* ControlledPawn);
	void ExecuteUbergraph_BTTask_ResetMovement(int32 EntryPoint, class UAIController* K2Node_Event_OwnerController, class UPawn* K2Node_Event_ControlledPawn);
};

}


