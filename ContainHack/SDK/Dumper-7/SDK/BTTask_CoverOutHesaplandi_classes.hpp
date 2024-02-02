#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC0 (0x168 - 0xA8)
// BlueprintGeneratedClass BTTask_CoverOutHesaplandi.BTTask_CoverOutHesaplandi_C
class UBTTask_CoverOutHesaplandi_C : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FBlackboardKeySelector                TaskKapatma;                                       // 0xB0(0x28)(Edit, BlueprintVisible, ExposeOnSpawn)
	struct FBlackboardKeySelector                CoverLoc;                                          // 0xD8(0x28)(Edit, BlueprintVisible, ExposeOnSpawn)
	TArray<double>                               Distance;                                          // 0x100(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UActor*                                Array_Element;                                     // 0x110(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FBlackboardKeySelector                CoverActor;                                        // 0x118(0x28)(Edit, BlueprintVisible, ExposeOnSpawn)
	struct FBlackboardKeySelector                CoverOutLoc;                                       // 0x140(0x28)(Edit, BlueprintVisible, ExposeOnSpawn)

	static class UClass* StaticClass();
	static class UBTTask_CoverOutHesaplandi_C* GetDefaultObj();

	void ReceiveExecuteAI(class UAIController* OwnerController, class UPawn* ControlledPawn);
	void ExecuteUbergraph_BTTask_CoverOutHesaplandi(int32 EntryPoint, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, class UAIController* K2Node_Event_OwnerController, class UPawn* K2Node_Event_ControlledPawn, TArray<enum class EObjectTypeQuery>& K2Node_MakeArray_Array, TArray<class UActor*>& K2Node_MakeArray_Array_1, int32 Temp_int_Loop_Counter_Variable_1, const struct FVector& CallFunc_GetBlackboardValueAsVector_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, TArray<class UActor*>& CallFunc_CapsuleOverlapActors_OutActors, bool CallFunc_CapsuleOverlapActors_ReturnValue, class UActor* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, float CallFunc_GetDistanceTo_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_MinOfFloatArray_IndexOfMinValue, float CallFunc_MinOfFloatArray_MinValue, bool CallFunc_EqualEqual_DoubleDouble_ReturnValue, int32 Temp_int_Array_Index_Variable_1, class UActor* CallFunc_Array_Get_Item_1, float CallFunc_GetDistanceTo_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue, double CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast, TArray<float>& CallFunc_MinOfFloatArray_FloatArray_ImplicitCast, double CallFunc_EqualEqual_DoubleDouble_B_ImplicitCast, double CallFunc_Array_Add_NewItem_ImplicitCast);
};

}


