#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x38 (0xE0 - 0xA8)
// BlueprintGeneratedClass BTTask_SmokeOrFlash.BTTask_SmokeOrFlash_C
class UBTTask_SmokeOrFlash_C : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FBlackboardKeySelector                IsInside;                                          // 0xB0(0x28)(Edit, BlueprintVisible, ExposeOnSpawn)
	class UCrawler_CharacterBP_C*                As_Crawler_Character_BP;                           // 0xD8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBTTask_SmokeOrFlash_C* GetDefaultObj();

	void OnNotifyEnd_559863794778E0455213E593E4EAF883(class FName NotifyName);
	void OnNotifyBegin_559863794778E0455213E593E4EAF883(class FName NotifyName);
	void OnInterrupted_559863794778E0455213E593E4EAF883(class FName NotifyName);
	void OnBlendOut_559863794778E0455213E593E4EAF883(class FName NotifyName);
	void OnCompleted_559863794778E0455213E593E4EAF883(class FName NotifyName);
	void ReceiveExecuteAI(class UAIController* OwnerController, class UPawn* ControlledPawn);
	void ExecuteUbergraph_BTTask_SmokeOrFlash(int32 EntryPoint, class FName K2Node_CustomEvent_NotifyName_4, class FName K2Node_CustomEvent_NotifyName_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FName K2Node_CustomEvent_NotifyName_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class FName K2Node_CustomEvent_NotifyName_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class FName K2Node_CustomEvent_NotifyName, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class FName Temp_name_Variable, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_IsClosed_Variable, class UAIController* K2Node_Event_OwnerController, class UPawn* K2Node_Event_ControlledPawn, class UCrawler_CharacterBP_C* K2Node_DynamicCast_AsCrawler_Character_BP, bool K2Node_DynamicCast_bSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue, bool CallFunc_IsValid_ReturnValue);
};

}


