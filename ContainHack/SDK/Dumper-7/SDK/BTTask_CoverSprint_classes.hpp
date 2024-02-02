#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x88 (0x130 - 0xA8)
// BlueprintGeneratedClass BTTask_CoverSprint.BTTask_CoverSprint_C
class UBTTask_CoverSprint_C : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FBlackboardKeySelector                FirstSee;                                          // 0xB0(0x28)(Edit, BlueprintVisible)
	bool                                         Sprint;                                            // 0xD8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_4243[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FBlackboardKeySelector                CoveraGecti;                                       // 0xE0(0x28)(Edit, BlueprintVisible)
	struct FBlackboardKeySelector                SprintKey;                                         // 0x108(0x28)(Edit, BlueprintVisible)

	static class UClass* StaticClass();
	static class UBTTask_CoverSprint_C* GetDefaultObj();

	void OnNotifyEnd_A85CE5F44B3396CDBF94239E8EBADE1D(class FName NotifyName);
	void OnNotifyBegin_A85CE5F44B3396CDBF94239E8EBADE1D(class FName NotifyName);
	void OnInterrupted_A85CE5F44B3396CDBF94239E8EBADE1D(class FName NotifyName);
	void OnBlendOut_A85CE5F44B3396CDBF94239E8EBADE1D(class FName NotifyName);
	void OnCompleted_A85CE5F44B3396CDBF94239E8EBADE1D(class FName NotifyName);
	void ReceiveExecuteAI(class UAIController* OwnerController, class UPawn* ControlledPawn);
	void ExecuteUbergraph_BTTask_CoverSprint(int32 EntryPoint, class FName K2Node_CustomEvent_NotifyName_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FName K2Node_CustomEvent_NotifyName_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class FName K2Node_CustomEvent_NotifyName_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class FName K2Node_CustomEvent_NotifyName_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class FName K2Node_CustomEvent_NotifyName, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, class FName Temp_name_Variable, class UAIController* K2Node_Event_OwnerController, class UPawn* K2Node_Event_ControlledPawn, class UAI_AnimMan_C* K2Node_DynamicCast_AsAI_Anim_Man, bool K2Node_DynamicCast_bSuccess, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, bool CallFunc_IsValid_ReturnValue);
};

}


