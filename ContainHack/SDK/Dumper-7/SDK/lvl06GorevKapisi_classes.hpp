#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x40 - 0x38)
// BlueprintGeneratedClass lvl06GorevKapisi.lvl06GorevKapisi (Director BP)_C
class ULvl06GorevKapisi__Director_BP__C : public ULevelSequenceDirector
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x38(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class ULvl06GorevKapisi__Director_BP__C* GetDefaultObj();

	void SequenceEvent__ENTRYPOINTlvl06GorevKapisi__Director_BP__0(class UAmbientSound* bunker_door2_Cue);
	void SequenceEvent__ENTRYPOINTlvl06GorevKapisi__Director_BP_(class UAmbientSound* bunker_door1_Cue);
	void bunker_door1_Cue_Event(class UAmbientSound* bunker_door1_Cue, float StartTime);
	void bunker_door2_Cue_Event(class UAmbientSound* bunker_door2_Cue, float StartTime);
	void ExecuteUbergraph_lvl06GorevKapisi__Director_BP_(int32 EntryPoint, class UAmbientSound* K2Node_CustomEvent_bunker_door2_Cue, float K2Node_CustomEvent_StartTime, class UAmbientSound* K2Node_CustomEvent_bunker_door1_Cue, float K2Node_CustomEvent_StartTime_1);
};

}


