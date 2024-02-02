#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x60 (0x100 - 0xA0)
// BlueprintGeneratedClass B_GunCustomizationComponent.B_GunCustomizationComponent_C
class UB_GunCustomizationComponent_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UB_GunParent_C*                        Gun;                                               // 0xA8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UB_DemoCharacter_C*                    DemoCharacter;                                     // 0xB0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UB_GunPartParent_C*                    HandlingPart;                                      // 0xB8(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                    OriginalMaterial;                                  // 0xC0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class FName                                  TopSocket;                                         // 0xC8(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       ParentComponent;                                   // 0xD0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UB_GunPartParent_C*                    CurrentlyAttached;                                 // 0xD8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FVector                               InBaseSocketSpace;                                 // 0xE0(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                    OverlappingMaterial;                               // 0xF8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UB_GunCustomizationComponent_C* GetDefaultObj();

	void OnRep_TopSocket(class UActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_NotEqual_NameName_ReturnValue, class UB_DemoController_C* K2Node_DynamicCast_AsB_Demo_Controller, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue);
	void ReceiveBeginPlay();
	void ExitComponent();
	void ServerEnterAddPart(class UB_GunPartParent_C* Part);
	void ServerMouseTouchesMarker(class FName BaseSocket, class USceneComponent* BaseComponent);
	void StartOvelrap(class UActor* OverlappedActor, class UActor* OtherActor);
	void FinishOverlap(class UActor* OverlappedActor, class UActor* OtherActor);
	void ServerFixOnMarker();
	void ServerMouseUntouchesMarker();
	void ServerAbortAddPart();
	void ServerDetach(class UB_GunPartParent_C* Part);
	void ExecuteUbergraph_B_GunCustomizationComponent(int32 EntryPoint, class UActor* CallFunc_GetOwner_ReturnValue, class UB_DemoController_C* K2Node_DynamicCast_AsB_Demo_Controller, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, class UActor* CallFunc_GetOwner_ReturnValue_1, class UB_DemoController_C* K2Node_DynamicCast_AsB_Demo_Controller_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, bool CallFunc_IsServer_ReturnValue, bool CallFunc_IsServer_ReturnValue_1, class UB_GunPartParent_C* K2Node_CustomEvent_Part_1, class FName CallFunc_FindTopSocket_TopSocket, class UMeshComponent* CallFunc_FindTopSocket_Component, class FName K2Node_CustomEvent_BaseSocket, class USceneComponent* K2Node_CustomEvent_BaseComponent, class UActor* K2Node_CustomEvent_OverlappedActor_1, class UActor* K2Node_CustomEvent_OtherActor_1, class UMeshComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, class UActor* K2Node_CustomEvent_OverlappedActor, class UActor* K2Node_CustomEvent_OtherActor, TArray<class UActor*>& CallFunc_GetOverlappingActors_OverlappingActors, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, class UMeshComponent* CallFunc_GetComponentByClass_ReturnValue_1, const struct FVector& CallFunc_GetSocketLocation_ReturnValue, const struct FTransform& CallFunc_GetSocketTransform_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, const struct FRotator& CallFunc_NegateRotator_ReturnValue, TArray<class UActor*>& CallFunc_GetOverlappingActors_OverlappingActors_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_3, class UActor* CallFunc_GetOwner_ReturnValue_2, class UB_DemoController_C* K2Node_DynamicCast_AsB_Demo_Controller_2, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_IsValid_ReturnValue_4, bool CallFunc_IsValid_ReturnValue_5, class UMeshComponent* CallFunc_GetComponentByClass_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_6, class UMeshComponent* CallFunc_GetComponentByClass_ReturnValue_3, class UB_GunPartParent_C* K2Node_CustomEvent_Part, class UMeshComponent* CallFunc_GetComponentByClass_ReturnValue_4, int32 CallFunc_Array_AddUnique_ReturnValue, bool CallFunc_Array_RemoveItem_ReturnValue, TArray<class UB_GunPartParent_C*>& CallFunc_GetAttachedPartsRecursevely_Parts, int32 CallFunc_Array_Length_ReturnValue_2, int32 CallFunc_Array_Add_ReturnValue, class UActor* CallFunc_GetOwner_ReturnValue_3, class UB_DemoController_C* K2Node_DynamicCast_AsB_Demo_Controller_3, bool K2Node_DynamicCast_bSuccess_3, bool CallFunc_IsValid_ReturnValue_7, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, TArray<class USceneComponent*>& CallFunc_GetChildrenComponents_Children, class USceneComponent* CallFunc_Array_Get_Item, class UMeshComponent* CallFunc_GetComponentByClass_ReturnValue_5, bool CallFunc_ComponentHasTag_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class FName CallFunc_GetAttachSocketName_ReturnValue, class UActor* CallFunc_GetOwner_ReturnValue_4, bool CallFunc_EqualEqual_NameName_ReturnValue, class UB_GunPartParent_C* K2Node_DynamicCast_AsB_Gun_Part_Parent, bool K2Node_DynamicCast_bSuccess_4, bool CallFunc_BooleanAND_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_3, bool CallFunc_Less_IntInt_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FHitResult& CallFunc_K2_AddActorLocalRotation_SweepHitResult, const struct FTransform& CallFunc_GetSocketTransform_ReturnValue_1, const struct FVector& CallFunc_TransformLocation_ReturnValue, const struct FVector& CallFunc_InverseTransformLocation_ReturnValue, const struct FHitResult& CallFunc_K2_SetActorLocation_SweepHitResult, bool CallFunc_K2_SetActorLocation_ReturnValue, const struct FVector& CallFunc_NegateVector_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, int32 Temp_int_Array_Index_Variable_1, class UB_GunPartParent_C* CallFunc_Array_Get_Item_1, class UMeshComponent* CallFunc_GetComponentByClass_ReturnValue_6, int32 CallFunc_Array_AddUnique_ReturnValue_1, bool CallFunc_Array_RemoveItem_ReturnValue_1, class UMeshComponent* CallFunc_GetComponentByClass_ReturnValue_7, bool CallFunc_Array_RemoveItem_ReturnValue_2, class UMaterialInterface* CallFunc_GetMaterial_ReturnValue);
};

}


