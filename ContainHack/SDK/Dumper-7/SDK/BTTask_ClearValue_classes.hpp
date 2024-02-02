#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0xD8 - 0xA8)
// BlueprintGeneratedClass BTTask_ClearValue.BTTask_ClearValue_C
class UBTTask_ClearValue_C : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FBlackboardKeySelector                KeyToBeCleared;                                    // 0xB0(0x28)(Edit, BlueprintVisible)

	static class UClass* StaticClass();
	static class UBTTask_ClearValue_C* GetDefaultObj();

	void ReceiveExecuteAI(class UAIController* OwnerController, class UPawn* ControlledPawn);
	void ExecuteUbergraph_BTTask_ClearValue(int32 EntryPoint, class UAIController* K2Node_Event_OwnerController, class UPawn* K2Node_Event_ControlledPawn);
};

}


