#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x580 - 0x570)
// BlueprintGeneratedClass B_M4A1_Parent.B_M4A1_Parent_C
class UB_M4A1_Parent_C : public UB_GunParent_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x570(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USkeletalMeshComponent*                Main;                                              // 0x578(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UB_M4A1_Parent_C* GetDefaultObj();

	void CustomAction(bool IsCustomActioned);
	void ExecuteUbergraph_B_M4A1_Parent(int32 EntryPoint, bool K2Node_Event_IsCustomActioned);
};

}


