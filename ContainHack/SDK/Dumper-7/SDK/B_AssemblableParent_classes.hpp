#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x88 (0x318 - 0x290)
// BlueprintGeneratedClass B_AssemblableParent.B_AssemblableParent_C
class UB_AssemblableParent_C : public UActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x290(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x298(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class FName                                  GameName;                                          // 0x2A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FAimpoint>                     OpticAimpoints;                                    // 0x2A8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TArray<struct FAimpoint>                     FrontAimpoints;                                    // 0x2B8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TArray<struct FAimpoint>                     RearAimpoints;                                     // 0x2C8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	bool                                         HasCustomAction;                                   // 0x2D8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2783[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInterface*                    Material;                                          // 0x2E0(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, RepNotify, NoDestructor, HasGetValueTypeHash)
	bool                                         IsCustomActioned;                                  // 0x2E8(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2785[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  ActionName;                                        // 0x2EC(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2786[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               MarkerSize;                                        // 0x2F8(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                            Thumbnail;                                         // 0x310(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UB_AssemblableParent_C* GetDefaultObj();

	void DestroyMarkers(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, TArray<class UStaticMeshComponent*>& CallFunc_GetComponentsByTag_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, class UStaticMeshComponent* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue_1, int32 CallFunc_Max_ReturnValue);
	void OnRep_IsCustomActioned();
	void GetAttachedInternalLoop(class UB_AssemblableParent_C* Part, TArray<class UB_GunPartParent_C*>& Parts, int32 Temp_int_Array_Index_Variable, TArray<class UActor*>& CallFunc_GetAttachedActors_OutActors, class UActor* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class UB_GunPartParent_C* K2Node_DynamicCast_AsB_Gun_Part_Parent, bool K2Node_DynamicCast_bSuccess, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue);
	void GetAttachedPartsRecursevely(TArray<class UB_GunPartParent_C*>* Parts, const TArray<class UB_GunPartParent_C*>& PartsArray);
	void OnRep_Material(class UMeshComponent* CallFunc_GetComponentByClass_ReturnValue);
	void Add_Markers(class FName TopSocket, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const class FString& CallFunc_Conv_NameToString_ReturnValue, class UMeshComponent* CallFunc_GetComponentByClass_ReturnValue, TArray<class FString>& CallFunc_ParseIntoArray_ReturnValue, TArray<class FName>& CallFunc_GetAllSocketNames_ReturnValue, const class FString& CallFunc_Array_Get_Item, class FName CallFunc_Array_Get_Item_1, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Conv_NameToString_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_StartsWith_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const struct FTransform& Temp_struct_Variable, class FName Temp_name_Variable, class UStaticMeshComponent* CallFunc_AddComponent_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue, bool CallFunc_K2_AttachToComponent_ReturnValue, bool CallFunc_SetStaticMesh_ReturnValue);
	void CustomAction(bool IsCustomActioned);
	void ServerAction();
	void ReceiveBeginPlay();
	void GenerateAimpoints();
	void ApplyMaterial(class UMaterialInterface* NewMaterial);
	void ExecuteUbergraph_B_AssemblableParent(int32 EntryPoint, class UMaterialInterface* K2Node_CustomEvent_NewMaterial, bool K2Node_CustomEvent_IsCustomActioned, bool CallFunc_Not_PreBool_ReturnValue, class UMeshComponent* CallFunc_GetComponentByClass_ReturnValue, TArray<class FName>& CallFunc_GetAllSocketNames_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, class FName CallFunc_Array_Get_Item, const struct FAimpoint& K2Node_MakeStruct_Aimpoint, const struct FAimpoint& K2Node_MakeStruct_Aimpoint_1, int32 CallFunc_Array_AddUnique_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue_1, const struct FAimpoint& K2Node_MakeStruct_Aimpoint_2, const class FString& CallFunc_Conv_NameToString_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue_2, bool CallFunc_StartsWith_ReturnValue, const class FString& CallFunc_Conv_NameToString_ReturnValue_1, bool CallFunc_StartsWith_ReturnValue_1, const class FString& CallFunc_Conv_NameToString_ReturnValue_2, bool CallFunc_StartsWith_ReturnValue_2, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
};

}


