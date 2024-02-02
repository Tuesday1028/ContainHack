#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x38 - 0x30)
// BlueprintGeneratedClass Steve_AttackNotify.Steve_AttackNotify_C
class USteve_AttackNotify_C : public UAnimNotifyState
{
public:
	class FName                                  Socket;                                            // 0x30(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class USteve_AttackNotify_C* GetDefaultObj();

	bool Received_NotifyBegin(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float TotalDuration, struct FAnimNotifyEventReference& EventReference, class UActor* CallFunc_GetOwner_ReturnValue, class UAI_Steve_C* K2Node_DynamicCast_AsAI_Steve, bool K2Node_DynamicCast_bSuccess);
	bool Received_NotifyTick(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float FrameDeltaTime, struct FAnimNotifyEventReference& EventReference, class UActor* CallFunc_GetOwner_ReturnValue, class UAI_Steve_C* K2Node_DynamicCast_AsAI_Steve, bool K2Node_DynamicCast_bSuccess);
};

}


