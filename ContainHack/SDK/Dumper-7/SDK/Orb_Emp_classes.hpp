#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x40 - 0x38)
// BlueprintGeneratedClass Orb_Emp.Orb_Emp (Director BP)_C
class UOrb_Emp__Director_BP__C : public ULevelSequenceDirector
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x38(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UOrb_Emp__Director_BP__C* GetDefaultObj();

	void SequenceEvent__ENTRYPOINTOrb_Emp__Director_BP_(class UNiagaraActor* FX_Cube_Construction);
	void FX_Cube_Construction_Event(class UNiagaraActor* FX_Cube_Construction);
	void ExecuteUbergraph_Orb_Emp__Director_BP_(int32 EntryPoint, class UNiagaraActor* K2Node_CustomEvent_FX_Cube_Construction, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue);
};

}


