#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xB5 (0x345 - 0x290)
// BlueprintGeneratedClass BP_P_Furniture.BP_P_Furniture_C
class UBP_P_Furniture_C : public UActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x290(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                  FurnitureMesh;                                     // 0x298(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       Meshes;                                            // 0x2A0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       Lights;                                            // 0x2A8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x2B0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FRandomStream                         RandomSeedStruct;                                  // 0x2B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor)
	TArray<double>                               RandomRotations;                                   // 0x2C0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         RandomRotation;                                    // 0x2D0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3795[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FF_Generated_Instance_Data>    SpawnedHISMData;                                   // 0x2D8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	enum class ECollisionEnabled                 DecorationCollision;                               // 0x2E8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3796[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRotator                              SocketMeshRotationOffset;                          // 0x2F0(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	double                                       SocketMeshScaleMin;                                // 0x308(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       SocketMeshScaleMax;                                // 0x310(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        SeedNumber;                                        // 0x318(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3798[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       SocketMeshRndMinRotation;                          // 0x320(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       SocketMeshRndMaxRotation;                          // 0x328(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         SocketRandomAppearing;                             // 0x330(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Active;                                            // 0x331(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3799[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          Color;                                             // 0x334(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsInteractable;                                    // 0x344(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_P_Furniture_C* GetDefaultObj();

	void SpawnMeshesFromSockets(TArray<class UHierarchicalInstancedStaticMeshComponent*>& SocketScatterHISMs, TArray<class UStaticMesh*>& SocketScatterMeshes, class UStaticMeshComponent* BaseMesh, const class FString& SocketNamePrefix, int32 Temp_int_Array_Index_Variable, bool CallFunc_IsValid_ReturnValue, const struct FTransform& CallFunc_GetRelativeTransform_ReturnValue, TArray<class FName>& CallFunc_GetAllSocketNames_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, class FName CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, const class FString& CallFunc_Conv_NameToString_ReturnValue, bool CallFunc_Contains_ReturnValue, class UStaticMeshSocket* CallFunc_FindSocket_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FVector& CallFunc_GreaterGreater_VectorRotator_ReturnValue, double CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double CallFunc_BreakVector_Z, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_1, int32 CallFunc_FTrunc_ReturnValue, int32 CallFunc_FTrunc_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable, float CallFunc_RandomFloatInRangeFromStream_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_2, const struct FRotator& CallFunc_ComposeRotators_ReturnValue, const struct FRotator& CallFunc_ComposeRotators_ReturnValue_1, bool Temp_bool_Variable, float CallFunc_RandomFloatInRangeFromStream_ReturnValue_1, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, bool Temp_bool_Variable_1, const struct FTransform& CallFunc_MakeTransform_ReturnValue, bool CallFunc_RandomBoolFromStream_ReturnValue, bool K2Node_Select_Default, bool CallFunc_BooleanAND_ReturnValue, float CallFunc_RandomFloatInRangeFromStream_Max_ImplicitCast, float CallFunc_RandomFloatInRangeFromStream_Min_ImplicitCast, float CallFunc_RandomFloatInRangeFromStream_Max_ImplicitCast_1, float CallFunc_RandomFloatInRangeFromStream_Min_ImplicitCast_1, double CallFunc_Multiply_VectorFloat_B_ImplicitCast);
	void CreateMesh(struct FTransform& InstanceTransform, class UStaticMesh* StaticMesh, class UMaterialInstanceDynamic* Material, class UHierarchicalInstancedStaticMeshComponent* HISM, bool InstanceToWorldSpace, int32* InstanceId, int32 LocalInstanceID, int32 CallFunc_AddInstanceWorldSpace_ReturnValue, int32 CallFunc_AddInstance_ReturnValue, bool CallFunc_SetStaticMesh_ReturnValue);
	void CreateHISMs(TArray<class UHierarchicalInstancedStaticMeshComponent*>& HISMComponents, const struct FTransform& Transform, TArray<class UStaticMesh*>& StaticMeshes, bool InstanceToWorldSpace, int32 CullngDistance, bool LocalIsFound, class UStaticMesh* LocalStaticMesh, int32 LocalRandomizeInt, bool LocalOnlyOneItem, bool LocalInstanceToWorldSpace, const struct FTransform& LocalTransform, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_2, const struct FF_Generated_Instance_Data& K2Node_MakeStruct_F_Generated_Instance_Data, int32 CallFunc_Array_Add_ReturnValue, const struct FF_Generated_Instance_Data& K2Node_MakeStruct_F_Generated_Instance_Data_1, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Array_Add_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, class UHierarchicalInstancedStaticMeshComponent* CallFunc_Array_Get_Item, class UHierarchicalInstancedStaticMeshComponent* CallFunc_Array_Get_Item_1, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_CreateMesh_InstanceID, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, int32 CallFunc_RandomIntegerFromStream_ReturnValue, class UMaterialInterface* CallFunc_GetMaterial_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, bool Temp_bool_True_if_break_was_hit_Variable, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, const struct FTransform& Temp_struct_Variable, class UStaticMesh* CallFunc_Array_Get_Item_2, bool CallFunc_IsValid_ReturnValue_1, class UHierarchicalInstancedStaticMeshComponent* CallFunc_AddComponent_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_2, class UHierarchicalInstancedStaticMeshComponent* CallFunc_Array_Get_Item_3, int32 CallFunc_CreateMesh_InstanceID_1);
	void InitFurniture(const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, double CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double CallFunc_BreakVector_Z, int32 CallFunc_FTrunc_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, int32 CallFunc_FTrunc_ReturnValue_1, int32 CallFunc_FTrunc_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_RandomIntegerInRangeFromStream_ReturnValue, double CallFunc_Array_Get_Item, double CallFunc_Add_DoubleDouble_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult, double CallFunc_Add_DoubleDouble_A_ImplicitCast, float CallFunc_MakeRotator_Yaw_ImplicitCast);
	void UserConstructionScript(const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, double CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double CallFunc_BreakVector_Z, int32 CallFunc_FTrunc_ReturnValue, int32 CallFunc_FTrunc_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1);
	void Activate();
	void Deactivate();
	void ExecuteUbergraph_BP_P_Furniture(int32 EntryPoint);
};

}


