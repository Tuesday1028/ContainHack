#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x3D0 - 0x3B8)
// BlueprintGeneratedClass AIC_Taret.AIC_Taret_C
class UAIC_Taret_C : public UAIController
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3B8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UAIPerceptionComponent*                AIHearingPerception;                               // 0x3C0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAIPerceptionComponent*                AISightPerception;                                 // 0x3C8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UAIC_Taret_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void BndEvt__AIC_Taret_AISightPerception_K2Node_ComponentBoundEvent_0_ActorPerceptionUpdatedDelegate__DelegateSignature(class UActor* Actor, const struct FAIStimulus& Stimulus);
	void BndEvt__AIC_Taret_AIHearingPerception_K2Node_ComponentBoundEvent_1_ActorPerceptionUpdatedDelegate__DelegateSignature(class UActor* Actor, const struct FAIStimulus& Stimulus);
	void ExecuteUbergraph_AIC_Taret(int32 EntryPoint, class UActor* K2Node_ComponentBoundEvent_Actor_1, const struct FAIStimulus& K2Node_ComponentBoundEvent_Stimulus_1, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue, bool CallFunc_ActorHasTag_ReturnValue, class FName CallFunc_MakeLiteralName_ReturnValue, class FName CallFunc_MakeLiteralName_ReturnValue_1, class UBlackboardComponent* CallFunc_UseBlackboard_BlackboardComponent, bool CallFunc_UseBlackboard_ReturnValue, bool CallFunc_RunBehaviorTree_ReturnValue, class UActor* K2Node_ComponentBoundEvent_Actor, const struct FAIStimulus& K2Node_ComponentBoundEvent_Stimulus, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue_1, bool CallFunc_ActorHasTag_ReturnValue_1, class FName CallFunc_MakeLiteralName_ReturnValue_2, class FName CallFunc_MakeLiteralName_ReturnValue_3);
};

}


