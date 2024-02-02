#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x390 (0x6D8 - 0x348)
// AnimBlueprintGeneratedClass Crawler_AnimBP.Crawler_AnimBP_C
class UCrawler_AnimBP_C : public UAnimInstance
{
public:
	uint8                                        Pad_880[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x350(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct Crawler_AnimBP::FAnimBlueprintGeneratedMutableData    __AnimBlueprintMutables;                           // 0x358(0x4)(HasGetValueTypeHash)
	uint8                                        Pad_883[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAnimSubsystemInstance                AnimBlueprintExtension_PropertyAccess;             // 0x360(0x8)(None)
	struct FAnimSubsystemInstance                AnimBlueprintExtension_BlendSpaceGraph;            // 0x368(0x8)(None)
	struct FAnimSubsystemInstance                AnimBlueprintExtension_Base;                       // 0x370(0x8)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x378(0x20)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_4;                    // 0x398(0x48)(None)
	struct FAnimNode_BlendSpaceSampleResult      AnimGraphNode_BlendSpaceSampleResult_1;            // 0x3E0(0x20)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_3;                    // 0x400(0x48)(None)
	struct FAnimNode_BlendSpaceSampleResult      AnimGraphNode_BlendSpaceSampleResult;              // 0x448(0x20)(None)
	struct FAnimNode_BlendSpaceGraph             AnimGraphNode_BlendSpaceGraph;                     // 0x468(0x68)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot;                                // 0x4D0(0x48)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_2;                   // 0x518(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_2;                    // 0x560(0x48)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_1;                   // 0x5A8(0x48)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool;                     // 0x5F0(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_1;                    // 0x638(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer;                      // 0x680(0x48)(None)
	float                                        Speed;                                             // 0x6C8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsAlive;                                           // 0x6CC(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsStartSpawn;                                      // 0x6CD(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsEndSpawn;                                        // 0x6CE(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_88F[0x1];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UCrawler_CharacterBP_C*                As_Crawler_Character_BP;                           // 0x6D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UCrawler_AnimBP_C* GetDefaultObj();

	void AnimGraph(struct FPoseLink* AnimGraph);
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void AnimNotify_EndSpawn();
	void AliveAnim();
	void AliveAnim_Serv();
	void AnimNotify_Death();
	void AnimNotify_SpawnAudio();
	void ExecuteUbergraph_Crawler_AnimBP(int32 EntryPoint, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_IsClosed_Variable, bool Temp_bool_Has_Been_Initd_Variable_1, float K2Node_Event_DeltaTimeX, class UPawn* CallFunc_TryGetPawnOwner_ReturnValue, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue_1, class UCrawler_CharacterBP_C* K2Node_DynamicCast_AsCrawler_Character_BP, bool K2Node_DynamicCast_bSuccess, class FName CallFunc_MakeLiteralName_ReturnValue, bool Temp_bool_IsClosed_Variable_1, class FName CallFunc_MakeLiteralName_ReturnValue_1, bool CallFunc_GetValueAsBool_ReturnValue, double CallFunc_VSizeXY_ReturnValue, float K2Node_VariableSet_Speed_ImplicitCast);
};

}


