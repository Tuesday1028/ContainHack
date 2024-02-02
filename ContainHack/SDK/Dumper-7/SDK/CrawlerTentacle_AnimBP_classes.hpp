#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC8 (0x410 - 0x348)
// AnimBlueprintGeneratedClass CrawlerTentacle_AnimBP.CrawlerTentacle_AnimBP_C
class UCrawlerTentacle_AnimBP_C : public UAnimInstance
{
public:
	uint8                                        Pad_242D[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x350(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimSubsystemInstance                AnimBlueprintExtension_PropertyAccess;             // 0x358(0x8)(None)
	struct FAnimSubsystemInstance                AnimBlueprintExtension_Base;                       // 0x360(0x8)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x368(0x20)(None)
	struct FAnimNode_SequenceEvaluator           AnimGraphNode_SequenceEvaluator;                   // 0x388(0x40)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot;                                // 0x3C8(0x48)(None)

	static class UClass* StaticClass();
	static class UCrawlerTentacle_AnimBP_C* GetDefaultObj();

	void AnimGraph(struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_CrawlerTentacle_AnimBP(int32 EntryPoint);
};

}


