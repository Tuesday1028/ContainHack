#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x90 (0x450 - 0x3C0)
// BlueprintGeneratedClass SteveNailgun_AIControllerBP.SteveNailgun_AIControllerBP_C
class USteveNailgun_AIControllerBP_C : public UContainAIController
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3C0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UAIPerceptionComponent*                AIPerception;                                      // 0x3C8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBehaviorTree*                         BehaviorTree;                                      // 0x3D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FAIStimulus                           CurrentStimulus;                                   // 0x3D8(0x58)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	TSubclassOf<class UAISense>                  CurrentStimulusClass;                              // 0x430(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UActor*                                CurrentStimulusActor;                              // 0x438(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TArray<struct FFAISafeArea>                  SafeArea;                                          // 0x440(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class USteveNailgun_AIControllerBP_C* GetDefaultObj();

	void ConfigureAIFromPace(const struct FVector& CallFunc_Conv_FloatToVector_ReturnValue, class UPawn* CallFunc_K2_GetPawn_ReturnValue, class FName CallFunc_MakeLiteralName_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, class FName CallFunc_MakeLiteralName_ReturnValue_1, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue_1, class FName CallFunc_MakeLiteralName_ReturnValue_2, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue_2, class FName CallFunc_MakeLiteralName_ReturnValue_3, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue_3, class FName CallFunc_MakeLiteralName_ReturnValue_4, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue_4, class FName CallFunc_MakeLiteralName_ReturnValue_5, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue_5);
	void ConfigureAIFromPrediction();
	void ConfigureAIFromHearing(class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue, class FName CallFunc_MakeLiteralName_ReturnValue, class FName CallFunc_MakeLiteralName_ReturnValue_1, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue_1, class FName CallFunc_MakeLiteralName_ReturnValue_2, const struct FVector& CallFunc_K2_GetRandomReachablePointInRadius_RandomLocation, bool CallFunc_K2_GetRandomReachablePointInRadius_ReturnValue, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue_2, bool CallFunc_GetValueAsBool_ReturnValue, class FName CallFunc_MakeLiteralName_ReturnValue_3, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue_3, class FName CallFunc_MakeLiteralName_ReturnValue_4, bool CallFunc_GetValueAsBool_ReturnValue_1, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue_4, bool CallFunc_GetValueAsBool_ReturnValue_2, class FName CallFunc_MakeLiteralName_ReturnValue_5, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue_5, class FName CallFunc_MakeLiteralName_ReturnValue_6, bool CallFunc_GetValueAsBool_ReturnValue_3, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue_6, class UObject* CallFunc_GetValueAsObject_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void ConfigureAIFromSight(float NewTargetEnemyDistance, float CurrentTargetEnemyDistance, class FName CallFunc_MakeLiteralName_ReturnValue, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue, class FName CallFunc_MakeLiteralName_ReturnValue_1, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue_1, class FName CallFunc_MakeLiteralName_ReturnValue_2, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue_2, class FName CallFunc_MakeLiteralName_ReturnValue_3, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue_3, class FName CallFunc_MakeLiteralName_ReturnValue_4, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue_4, class FName CallFunc_MakeLiteralName_ReturnValue_5, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue_5, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue_6, class FName CallFunc_MakeLiteralName_ReturnValue_6, class FName CallFunc_MakeLiteralName_ReturnValue_7, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue_7, class FName CallFunc_MakeLiteralName_ReturnValue_8, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue_8, class FName CallFunc_MakeLiteralName_ReturnValue_9, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue_9, class FName CallFunc_MakeLiteralName_ReturnValue_10, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue_10, class FName CallFunc_MakeLiteralName_ReturnValue_11, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue_11, class FName CallFunc_MakeLiteralName_ReturnValue_12, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue_12, class FName CallFunc_MakeLiteralName_ReturnValue_13, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue_13, class FName CallFunc_MakeLiteralName_ReturnValue_14, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue_14, class FName CallFunc_MakeLiteralName_ReturnValue_15, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue_15, class FName CallFunc_MakeLiteralName_ReturnValue_16, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue_16, class FName CallFunc_MakeLiteralName_ReturnValue_17, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue_17, class FName CallFunc_MakeLiteralName_ReturnValue_18, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue_18, class UPawn* CallFunc_K2_GetPawn_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue, class UPawn* CallFunc_K2_GetPawn_ReturnValue_1, class FName CallFunc_MakeLiteralName_ReturnValue_19, float CallFunc_GetDistanceTo_ReturnValue, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue_19, class UObject* CallFunc_GetValueAsObject_ReturnValue, class UActor* K2Node_DynamicCast_AsActor, bool K2Node_DynamicCast_bSuccess, float CallFunc_GetDistanceTo_ReturnValue_1, double CallFunc_Less_DoubleDouble_B_ImplicitCast, double CallFunc_Less_DoubleDouble_A_ImplicitCast);
	void ConfigureAIFromDamage(class UAI_Steve_C* CurrentCloseFriend, const TArray<class UAI_Steve_C*>& CloseFriends, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, bool CallFunc_SetHearingRange_ReturnValue, class UAIController* CallFunc_GetAIController_ReturnValue, bool CallFunc_SetHearingRange_ReturnValue_1, class UAIController* CallFunc_GetAIController_ReturnValue_1, bool CallFunc_SetSightRange_ReturnValue, bool CallFunc_SetSightRange_ReturnValue_1, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue_2, const struct FVector& CallFunc_K2_GetRandomReachablePointInRadius_RandomLocation, bool CallFunc_K2_GetRandomReachablePointInRadius_ReturnValue, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue_3, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue_4, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue_5, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue_6, class FName CallFunc_MakeLiteralName_ReturnValue, class FName CallFunc_MakeLiteralName_ReturnValue_1, class FName CallFunc_MakeLiteralName_ReturnValue_2, class FName CallFunc_MakeLiteralName_ReturnValue_3, class FName CallFunc_MakeLiteralName_ReturnValue_4, class FName CallFunc_MakeLiteralName_ReturnValue_5, class FName CallFunc_MakeLiteralName_ReturnValue_6, class UAI_Steve_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_1, class UPawn* CallFunc_K2_GetPawn_ReturnValue, class FName CallFunc_MakeLiteralName_ReturnValue_7, TArray<class UAI_Steve_C*>& CallFunc_GetAllActorsOfClass_OutActors, class FName CallFunc_MakeLiteralName_ReturnValue_8, class UAI_Steve_C* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, float CallFunc_GetDistanceTo_ReturnValue, bool CallFunc_LessEqual_DoubleDouble_ReturnValue, class UAIController* CallFunc_GetAIController_ReturnValue_2, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue_7, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue_8, class UObject* CallFunc_GetValueAsObject_ReturnValue, bool CallFunc_IsValid_ReturnValue, class FName CallFunc_MakeLiteralName_ReturnValue_9, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue_9, class FName CallFunc_MakeLiteralName_ReturnValue_10, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue_10, class FName CallFunc_MakeLiteralName_ReturnValue_11, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue_11, class UPawn* CallFunc_K2_GetPawn_ReturnValue_1, class FName CallFunc_MakeLiteralName_ReturnValue_12, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue_12, const struct FVector& CallFunc_K2_GetRandomReachablePointInRadius_RandomLocation_1, bool CallFunc_K2_GetRandomReachablePointInRadius_ReturnValue_1, class FName CallFunc_MakeLiteralName_ReturnValue_13, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue_13, class FName CallFunc_MakeLiteralName_ReturnValue_14, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue_14, double CallFunc_LessEqual_DoubleDouble_A_ImplicitCast);
	void ReceivePossess(class UPawn* PossessedPawn);
	void BndEvt__Soldiers_AIControllerBP_AIPerception_K2Node_ComponentBoundEvent_1_ActorPerceptionUpdatedDelegate__DelegateSignature(class UActor* Actor, const struct FAIStimulus& Stimulus);
	void ExecuteUbergraph_SteveNailgun_AIControllerBP(int32 EntryPoint, bool CallFunc_RunBehaviorTree_ReturnValue, const class FString& CallFunc_GetObjectName_ReturnValue, bool CallFunc_IsValid_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, class UActor* K2Node_ComponentBoundEvent_Actor, const struct FAIStimulus& K2Node_ComponentBoundEvent_Stimulus, class UPawn* K2Node_Event_PossessedPawn, TSubclassOf<class UAISense> CallFunc_GetSenseClassForStimulus_ReturnValue, bool CallFunc_EqualEqual_ClassClass_ReturnValue, bool CallFunc_EqualEqual_ClassClass_ReturnValue_1, bool CallFunc_EqualEqual_ClassClass_ReturnValue_2, bool CallFunc_EqualEqual_ClassClass_ReturnValue_3);
};

}


