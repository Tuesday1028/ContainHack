#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x340 - 0x330)
// BlueprintGeneratedClass B_FlipSightRear_Parent.B_FlipSightRear_Parent_C
class UB_FlipSightRear_Parent_C : public UB_GunPartParent_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x330(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USkeletalMeshComponent*                FlipSightRear;                                     // 0x338(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UB_FlipSightRear_Parent_C* GetDefaultObj();

	void CustomAction(bool IsCustomActioned);
	void ExecuteUbergraph_B_FlipSightRear_Parent(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, bool CallFunc_HasAuthority_ReturnValue, const struct FAimpoint& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool K2Node_Event_IsCustomActioned, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Not_PreBool_ReturnValue, const struct FAimpoint& K2Node_MakeStruct_Aimpoint, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, class UAB_FlipSightRear_C* K2Node_DynamicCast_AsAB_Flip_Sight_Rear, bool K2Node_DynamicCast_bSuccess);
};

}


