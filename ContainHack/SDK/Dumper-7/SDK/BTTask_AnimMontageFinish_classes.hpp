#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x68 (0x110 - 0xA8)
// BlueprintGeneratedClass BTTask_AnimMontageFinish.BTTask_AnimMontageFinish_C
class UBTTask_AnimMontageFinish_C : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FBlackboardKeySelector                Finish;                                            // 0xB0(0x28)(Edit, BlueprintVisible, ExposeOnSpawn)
	class UAnimMontage*                          Montage;                                           // 0xD8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         Value;                                             // 0xE0(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         Reborn;                                            // 0xE1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_F[0x6];                                        // Fixing Size After Last Property  [ Dumper-7 ]
	struct FBlackboardKeySelector                Death;                                             // 0xE8(0x28)(Edit, BlueprintVisible, Net, ExposeOnSpawn)

	static class UClass* StaticClass();
	static class UBTTask_AnimMontageFinish_C* GetDefaultObj();

	void ReceiveExecuteAI(class UAIController* OwnerController, class UPawn* ControlledPawn);
	void ExecuteUbergraph_BTTask_AnimMontageFinish(int32 EntryPoint, class UAIController* K2Node_Event_OwnerController, class UPawn* K2Node_Event_ControlledPawn, class UAI_Steve_C* K2Node_DynamicCast_AsAI_Steve, bool K2Node_DynamicCast_bSuccess);
};

}


