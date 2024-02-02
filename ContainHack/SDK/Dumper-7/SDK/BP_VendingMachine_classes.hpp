#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x84 (0x3C9 - 0x345)
// BlueprintGeneratedClass BP_VendingMachine.BP_VendingMachine_C
class UBP_VendingMachine_C : public UBP_P_Furniture_C
{
public:
	uint8                                        Pad_29D2[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x348(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                  SM_Vending_Machine_Door;                           // 0x350(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        DoorOpening_DoorOpening_04209B76411FA5B036E5C0936AEC7029; // 0x358(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                DoorOpening__Direction_04209B76411FA5B036E5C0936AEC7029; // 0x35C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_29D3[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    DoorOpening;                                       // 0x360(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              LightMatInst;                                      // 0x368(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              MachineMatInst;                                    // 0x370(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          MachineColor;                                      // 0x378(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UHierarchicalInstancedStaticMeshComponent*> PlanarItemHISMs;                                   // 0x388(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TArray<class UStaticMesh*>                   PlanarItemMeshes;                                  // 0x398(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UHierarchicalInstancedStaticMeshComponent*> HangingItemHISMs;                                  // 0x3A8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TArray<class UStaticMesh*>                   HangingItemMeshes;                                 // 0x3B8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         Activated;                                         // 0x3C8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_VendingMachine_C* GetDefaultObj();

	void UserConstructionScript(bool Temp_bool_Variable, const struct FLinearColor& Temp_struct_Variable, class UMaterialInterface* CallFunc_GetMaterial_ReturnValue, const struct FLinearColor& K2Node_Select_Default, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, class UMaterialInterface* CallFunc_GetMaterial_ReturnValue_1, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_1);
	void DoorOpening__FinishedFunc();
	void DoorOpening__UpdateFunc();
	void Activate();
	void Deactivate();
	void ExecuteUbergraph_BP_VendingMachine(int32 EntryPoint, const struct FRotator& CallFunc_MakeRotator_ReturnValue, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult);
};

}


