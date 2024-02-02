#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xA0 (0x148 - 0xA8)
// BlueprintGeneratedClass BTTask_PlayersLocation.BTTask_PlayersLocation_C
class UBTTask_PlayersLocation_C : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FBlackboardKeySelector                Player;                                            // 0xB0(0x28)(Edit, BlueprintVisible, Net, ExposeOnSpawn)
	struct FBlackboardKeySelector                Loc;                                               // 0xD8(0x28)(Edit, BlueprintVisible, Net, ExposeOnSpawn)
	TArray<class UB_DemoCharacter_Child_C*>      Out_Actors;                                        // 0x100(0x10)(Edit, BlueprintVisible, Net, DisableEditOnTemplate, DisableEditOnInstance)
	int32                                        Array_Index;                                       // 0x110(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Yakinlik;                                          // 0x114(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Uzunluk;                                           // 0x115(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2554[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ActorLenght;                                       // 0x118(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2556[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FBlackboardKeySelector                IsAttack;                                          // 0x120(0x28)(Edit, BlueprintVisible, Net, ExposeOnSpawn)

	static class UClass* StaticClass();
	static class UBTTask_PlayersLocation_C* GetDefaultObj();

	void OnFail_49D12F1245FEA5FCEABD5893CF28E359(enum class EPathFollowingResult MovementResult);
	void OnSuccess_49D12F1245FEA5FCEABD5893CF28E359(enum class EPathFollowingResult MovementResult);
	void ReceiveExecuteAI(class UAIController* OwnerController, class UPawn* ControlledPawn);
	void Attack_Multi(class UPawn* Pawn);
	void Attack_Server(class UPawn* Pawn);
	void ExecuteUbergraph_BTTask_PlayersLocation(int32 EntryPoint, enum class EPathFollowingResult K2Node_CustomEvent_MovementResult, enum class EPathFollowingResult Temp_byte_Variable, int32 Temp_int_Array_Index_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, TArray<class UB_DemoCharacter_Child_C*>& CallFunc_GetAllActorsOfClass_OutActors, int32 Temp_int_Loop_Counter_Variable, class UB_DemoCharacter_Child_C* CallFunc_Array_Get_Item, float CallFunc_GetDistanceTo_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UAIController* K2Node_Event_OwnerController, class UPawn* K2Node_Event_ControlledPawn, enum class EPathFollowingResult K2Node_CustomEvent_MovementResult_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, int32 CallFunc_Add_IntInt_ReturnValue_1, class UB_DemoCharacter_Child_C* CallFunc_Array_Get_Item_1, float CallFunc_GetDistanceTo_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue, class UPawn* K2Node_CustomEvent_Pawn_1, class UPawn* K2Node_CustomEvent_Pawn, class UAIAsyncTaskBlueprintProxy* CallFunc_CreateMoveToProxyObject_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue, double CallFunc_Less_DoubleDouble_A_ImplicitCast, double CallFunc_Less_DoubleDouble_B_ImplicitCast);
};

}


