#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xD0 (0x418 - 0x348)
// AnimBlueprintGeneratedClass SK_MP5_Reciever_04_Skeleton_AnimBlueprint.SK_MP5_Reciever_04_Skeleton_AnimBlueprint_C
class USK_MP5_Reciever_04_Skeleton_AnimBlueprint_C : public UAnimInstance
{
public:
	uint8                                        Pad_2D0A[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x350(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimSubsystemInstance                AnimBlueprintExtension_PropertyAccess;             // 0x358(0x8)(None)
	struct FAnimSubsystemInstance                AnimBlueprintExtension_Base;                       // 0x360(0x8)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x368(0x20)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot;                                // 0x388(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer;                      // 0x3D0(0x48)(None)

	static class UClass* StaticClass();
	static class USK_MP5_Reciever_04_Skeleton_AnimBlueprint_C* GetDefaultObj();

	void AnimGraph(struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_SK_MP5_Reciever_04_Skeleton_AnimBlueprint(int32 EntryPoint);
};

}


