#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x38 (0x3F8 - 0x3C0)
// BlueprintGeneratedClass AIC_Controller.AIC_Controller_C
class UAIC_Controller_C : public UAIControllerBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3C0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBehaviorTree*                         DurumAgaci;                                        // 0x3C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	enum class EYonAI                            AIC_Yon;                                           // 0x3D0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Successfully_Sensed;                               // 0x3D1(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1E3F[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAI_Gun_AR_C*                          As_AI_Gun_AR;                                      // 0x3D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UAI_AnimMan_C*                         As_AI_Anim_Man;                                    // 0x3E0(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         SelfSee;                                           // 0x3E8(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Pb;                                                // 0x3E9(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         GunSee;                                            // 0x3EA(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1E45[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UActor*                                Target;                                            // 0x3F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UAIC_Controller_C* GetDefaultObj();

	void DeteriminAISightPerceptionViewPoint(struct FVector* OutLocation, struct FRotator* OutRotation, class UPawn* CallFunc_K2_GetPawn_ReturnValue, class UCharacter* K2Node_DynamicCast_AsCharacter, bool K2Node_DynamicCast_bSuccess, const struct FTransform& CallFunc_GetSocketTransform_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale);
	struct FVector AiGetMeshLocation(struct FVector* Lokasyon, class UPawn* CallFunc_K2_GetPawn_ReturnValue, class UAI_AnimMan_C* K2Node_DynamicCast_AsAI_Anim_Man, bool K2Node_DynamicCast_bSuccess, const struct FVector& CallFunc_GetSocketLocation_ReturnValue);
	void AiPerceptionKonum(struct FVector* Lokasyon, struct FRotator* Rotasyon, class UPawn* CallFunc_K2_GetPawn_ReturnValue, class UAI_AnimMan_C* K2Node_DynamicCast_AsAI_Anim_Man, bool K2Node_DynamicCast_bSuccess, const struct FTransform& CallFunc_GetSocketTransform_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale);
	void UserConstructionScript(class UBlackboardComponent* CallFunc_UseBlackboard_BlackboardComponent, bool CallFunc_UseBlackboard_ReturnValue, bool CallFunc_RunBehaviorTree_ReturnValue);
	void AiSee();
	void ZombieSpawn();
	void ReceiveBeginPlay();
	void BeginMulticast();
	void BeginServ();
	void OnTargetPerceptionUpdated_Sight(class UActor* Actor, const struct FAIStimulus& Stimulus);
	void OnTargetPerceptionUpdated_Hearing(class UActor* Actor, const struct FAIStimulus& Stimulus);
	void HearingServ(class UActor* Target, struct FAIStimulus& AIStimulus);
	void HearingMulti(class UActor* Target, struct FAIStimulus& AIStimulus);
	void SelfServ();
	void SelfS();
	void SightSeeServ(class UActor* Target, struct FAIStimulus& AIStimulus);
	void SightSee(class UActor* Target, struct FAIStimulus& AIStimulus);
	void ExecuteUbergraph_AIC_Controller(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class FName CallFunc_MakeLiteralName_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable, class UActor* K2Node_CustomEvent_Target_2, const struct FAIStimulus& K2Node_CustomEvent_AIStimulus_2, class UActor* K2Node_CustomEvent_Target_3, const struct FAIStimulus& K2Node_CustomEvent_AIStimulus_3, bool CallFunc_EqualEqual_BoolBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_ActorHasTag_ReturnValue, class UPawn* CallFunc_K2_GetPawn_ReturnValue, class UAI_AnimMan_C* K2Node_DynamicCast_AsAI_Anim_Man, bool K2Node_DynamicCast_bSuccess, class FName CallFunc_MakeLiteralName_ReturnValue_1, class UActor* K2Node_CustomEvent_Actor, const struct FAIStimulus& K2Node_CustomEvent_Stimulus, class UAI_Gun_AR_C* K2Node_DynamicCast_AsAI_Gun_AR, bool K2Node_DynamicCast_bSuccess_1, class UActor* K2Node_CustomEvent_Actor_1, const struct FAIStimulus& K2Node_CustomEvent_Stimulus_1, class FName CallFunc_MakeLiteralName_ReturnValue_2, bool Temp_bool_Has_Been_Initd_Variable_1, class FName CallFunc_MakeLiteralName_ReturnValue_3, class FName CallFunc_MakeLiteralName_ReturnValue_4, bool Temp_bool_IsClosed_Variable, class FName CallFunc_MakeLiteralName_ReturnValue_5, class FName CallFunc_MakeLiteralName_ReturnValue_6, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue_1, class UBlackboardComponent* CallFunc_UseBlackboard_BlackboardComponent, bool CallFunc_UseBlackboard_ReturnValue, const class FString& CallFunc_Conv_BoolToString_ReturnValue, class UActor* K2Node_CustomEvent_Target_1, const struct FAIStimulus& K2Node_CustomEvent_AIStimulus_1, class UActor* K2Node_CustomEvent_Target, const struct FAIStimulus& K2Node_CustomEvent_AIStimulus, bool CallFunc_EqualEqual_BoolBool_ReturnValue_1, bool CallFunc_ActorHasTag_ReturnValue_1, class FName CallFunc_MakeLiteralName_ReturnValue_7, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_2, class UPawn* CallFunc_K2_GetPawn_ReturnValue_1, bool Temp_bool_IsClosed_Variable_1, class UAI_AnimMan_C* K2Node_DynamicCast_AsAI_Anim_Man_1, bool K2Node_DynamicCast_bSuccess_2, class UAI_Gun_AR_C* K2Node_DynamicCast_AsAI_Gun_AR_1, bool K2Node_DynamicCast_bSuccess_3, class FName CallFunc_MakeLiteralName_ReturnValue_8, class UPawn* CallFunc_K2_GetPawn_ReturnValue_2, class FName CallFunc_MakeLiteralName_ReturnValue_9, class UAI_AnimMan_C* K2Node_DynamicCast_AsAI_Anim_Man_2, bool K2Node_DynamicCast_bSuccess_4, bool CallFunc_GetValueAsBool_ReturnValue, class FName CallFunc_MakeLiteralName_ReturnValue_10, const class FString& CallFunc_Conv_BoolToString_ReturnValue_1, class FName CallFunc_MakeLiteralName_ReturnValue_11, class FName CallFunc_MakeLiteralName_ReturnValue_12);
};

}


