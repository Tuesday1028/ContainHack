#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x3D0 - 0x3B8)
// BlueprintGeneratedClass AIC_Zombie.AIC_Zombie_C
class UAIC_Zombie_C : public UAIController
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3B8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UAIPerceptionComponent*                AIHearPerception;                                  // 0x3C0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAIPerceptionComponent*                AISightPerception;                                 // 0x3C8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UAIC_Zombie_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void BndEvt__AIC_Zombie_AISightPerception_K2Node_ComponentBoundEvent_2_ActorPerceptionUpdatedDelegate__DelegateSignature(class UActor* Actor, const struct FAIStimulus& Stimulus);
	void BndEvt__AIC_Zombie_AIHearPerception_K2Node_ComponentBoundEvent_3_ActorPerceptionUpdatedDelegate__DelegateSignature(class UActor* Actor, const struct FAIStimulus& Stimulus);
	void ExecuteUbergraph_AIC_Zombie(int32 EntryPoint, class FName CallFunc_MakeLiteralName_ReturnValue, bool CallFunc_RunBehaviorTree_ReturnValue, class UBlackboardComponent* CallFunc_UseBlackboard_BlackboardComponent, bool CallFunc_UseBlackboard_ReturnValue, class UActor* K2Node_ComponentBoundEvent_Actor_1, const struct FAIStimulus& K2Node_ComponentBoundEvent_Stimulus_1, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue, bool CallFunc_ActorHasTag_ReturnValue, class FName CallFunc_MakeLiteralName_ReturnValue_1, class FName CallFunc_MakeLiteralName_ReturnValue_2, class UActor* K2Node_ComponentBoundEvent_Actor, const struct FAIStimulus& K2Node_ComponentBoundEvent_Stimulus, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue_1, bool CallFunc_ActorHasTag_ReturnValue_1, class FName CallFunc_MakeLiteralName_ReturnValue_3, class FName CallFunc_MakeLiteralName_ReturnValue_4);
};

}


