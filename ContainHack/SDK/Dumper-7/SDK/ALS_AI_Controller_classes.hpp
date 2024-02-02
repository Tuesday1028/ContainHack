#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x3C0 - 0x3B8)
// BlueprintGeneratedClass ALS_AI_Controller.ALS_AI_Controller_C
class UALS_AI_Controller_C : public UAIController
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3B8(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UALS_AI_Controller_C* GetDefaultObj();

	void ReceivePossess(class UPawn* PossessedPawn);
	void ExecuteUbergraph_ALS_AI_Controller(int32 EntryPoint, bool CallFunc_RunBehaviorTree_ReturnValue, class UPawn* K2Node_Event_PossessedPawn);
};

}


