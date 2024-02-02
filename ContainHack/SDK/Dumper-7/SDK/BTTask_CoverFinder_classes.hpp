#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xE8 (0x190 - 0xA8)
// BlueprintGeneratedClass BTTask_CoverFinder.BTTask_CoverFinder_C
class UBTTask_CoverFinder_C : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UAI_AnimMan_C*                         As_AI_Anim_Man;                                    // 0xB0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FBlackboardKeySelector                CoverRef;                                          // 0xB8(0x28)(Edit, BlueprintVisible, ExposeOnSpawn)
	struct FBlackboardKeySelector                CoverRotate;                                       // 0xE0(0x28)(Edit, BlueprintVisible, ExposeOnSpawn)
	bool                                         Success;                                           // 0x108(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_41F0[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<float>                                CoversDistance;                                    // 0x110(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<enum class EObjectTypeQuery>          Object_Types;                                      // 0x120(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FBlackboardKeySelector                OutCover;                                          // 0x130(0x28)(Edit, BlueprintVisible, ExposeOnSpawn)
	TArray<class UActor*>                        Out_Actors;                                        // 0x158(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	struct FBlackboardKeySelector                TargetActor;                                       // 0x168(0x28)(Edit, BlueprintVisible, ExposeOnSpawn)

	static class UClass* StaticClass();
	static class UBTTask_CoverFinder_C* GetDefaultObj();

	void ReceiveExecuteAI(class UAIController* OwnerController, class UPawn* ControlledPawn);
	void ExecuteUbergraph_BTTask_CoverFinder(int32 EntryPoint, TArray<class UActor*>& Temp_object_Variable, int32 CallFunc_MinOfFloatArray_IndexOfMinValue, float CallFunc_MinOfFloatArray_MinValue, class UAIController* K2Node_Event_OwnerController, class UPawn* K2Node_Event_ControlledPawn, class UAI_AnimMan_C* K2Node_DynamicCast_AsAI_Anim_Man, bool K2Node_DynamicCast_bSuccess, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, class FName CallFunc_MakeLiteralName_ReturnValue, class FName CallFunc_MakeLiteralName_ReturnValue_1, TArray<class UActor*>& K2Node_MakeArray_Array, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UActor* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue_1, const class FString& CallFunc_GetDisplayName_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UCoverBase_C* K2Node_DynamicCast_AsCover_Base, bool K2Node_DynamicCast_bSuccess_1, float CallFunc_GetDistanceTo_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_EqualEqual_BoolBool_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, const struct FVector& CallFunc_Conv_FloatToVector_ReturnValue, TArray<class UActor*>& CallFunc_CapsuleOverlapActors_OutActors, bool CallFunc_CapsuleOverlapActors_ReturnValue, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue, bool CallFunc_Array_IsNotEmpty_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FHitResult& CallFunc_LineTraceSingle_OutHit, bool CallFunc_LineTraceSingle_ReturnValue, int32 Temp_int_Array_Index_Variable_1, class UActor* CallFunc_Array_Get_Item_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_2, class UCoverBase_C* K2Node_DynamicCast_AsCover_Base_1, bool K2Node_DynamicCast_bSuccess_2, float CallFunc_GetDistanceTo_ReturnValue_1, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, bool CallFunc_EqualEqual_DoubleDouble_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, double CallFunc_EqualEqual_DoubleDouble_B_ImplicitCast, double CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast);
};

}


