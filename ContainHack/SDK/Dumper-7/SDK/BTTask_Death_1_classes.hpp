#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0xB0 - 0xA8)
// BlueprintGeneratedClass BTTask_Death.BTTask_Death_C
class UBTTask_Death_C : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA8(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UBTTask_Death_C* GetDefaultObj();

	void ReceiveExecuteAI(class UAIController* OwnerController, class UPawn* ControlledPawn);
	void ExecuteUbergraph_BTTask_Death(int32 EntryPoint, class FName CallFunc_MakeLiteralName_ReturnValue, class UAIController* K2Node_Event_OwnerController, class UPawn* K2Node_Event_ControlledPawn, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue);
};

}


