#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x2A0 - 0x298)
// BlueprintGeneratedClass HUB01_custom_screen.HUB01_custom_screen_C
class UHUB01_custom_screen_C : public ULevelScriptActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x298(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UHUB01_custom_screen_C* GetDefaultObj();

	void BndEvt__HUB01_custom_screen_TriggerBox_1_K2Node_ActorBoundEvent_0_ActorBeginOverlapSignature__DelegateSignature(class UActor* OverlappedActor, class UActor* OtherActor);
	void BndEvt__HUB01_custom_screen_TriggerBox_3_K2Node_ActorBoundEvent_1_ActorBeginOverlapSignature__DelegateSignature(class UActor* OverlappedActor, class UActor* OtherActor);
	void ExecuteUbergraph_HUB01_custom_screen(int32 EntryPoint, class UActor* K2Node_ActorBoundEvent_OverlappedActor, class UActor* K2Node_ActorBoundEvent_OtherActor, class UB_DemoCharacter_C* K2Node_DynamicCast_AsB_Demo_Character, bool K2Node_DynamicCast_bSuccess, class UActor* K2Node_ActorBoundEvent_OverlappedActor_1, class UActor* K2Node_ActorBoundEvent_OtherActor_1, class UB_DemoCharacter_C* K2Node_DynamicCast_AsB_Demo_Character_1, bool K2Node_DynamicCast_bSuccess_1);
};

}


