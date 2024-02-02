#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x149 (0x1F1 - 0xA8)
// BlueprintGeneratedClass MoveTo_Cover.MoveTo_Cover_C
class UMoveTo_Cover_C : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FBlackboardKeySelector                TargetSuspect;                                     // 0xB0(0x28)(Edit, BlueprintVisible, ExposeOnSpawn)
	struct FBlackboardKeySelector                TargetCoverLocation;                               // 0xD8(0x28)(Edit, BlueprintVisible, ExposeOnSpawn)
	struct FBlackboardKeySelector                IsMovingCover;                                     // 0x100(0x28)(Edit, BlueprintVisible, ExposeOnSpawn)
	struct FBlackboardKeySelector                IsInCover;                                         // 0x128(0x28)(Edit, BlueprintVisible, ExposeOnSpawn)
	struct FBlackboardKeySelector                bIsTakingDamage;                                   // 0x150(0x28)(Edit, BlueprintVisible, ExposeOnSpawn)
	struct FBlackboardKeySelector                bIsProned;                                         // 0x178(0x28)(Edit, BlueprintVisible, ExposeOnSpawn)
	struct FBlackboardKeySelector                LastTargetLocation;                                // 0x1A0(0x28)(Edit, BlueprintVisible)
	class UPawn*                                 _ControlledPawn;                                   // 0x1C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UAIController*                         _OwnerController;                                  // 0x1D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CurrentCoverLocation;                              // 0x1D8(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bIsFindedCoverLocation;                            // 0x1F0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UMoveTo_Cover_C* GetDefaultObj();

	void OnFail_93A75396411302D716A838930299CC56(enum class EPathFollowingResult MovementResult);
	void OnSuccess_93A75396411302D716A838930299CC56(enum class EPathFollowingResult MovementResult);
	void ReceiveTickAI(class UAIController* OwnerController, class UPawn* ControlledPawn, float DeltaSeconds);
	void ReceiveExecuteAI(class UAIController* OwnerController, class UPawn* ControlledPawn);
	void ResetActionSoundSuppressFire();
	void ExecuteUbergraph_MoveTo_Cover(int32 EntryPoint, enum class EPathFollowingResult K2Node_CustomEvent_MovementResult_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FVector& CallFunc_GetBlackboardValueAsVector_ReturnValue, const struct FVector& CallFunc_K2_GetRandomReachablePointInRadius_RandomLocation, bool CallFunc_K2_GetRandomReachablePointInRadius_ReturnValue, class USoldiers_CharacterBP_C* K2Node_DynamicCast_AsSoldiers_Character_BP, bool K2Node_DynamicCast_bSuccess, class USoldiers_CharacterBP_C* K2Node_DynamicCast_AsSoldiers_Character_BP_1, bool K2Node_DynamicCast_bSuccess_1, bool Temp_bool_Has_Been_Initd_Variable, class UActor* CallFunc_GetBlackboardValueAsActor_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool Temp_bool_IsClosed_Variable, class UAIController* K2Node_Event_OwnerController_1, class UPawn* K2Node_Event_ControlledPawn_1, float K2Node_Event_DeltaSeconds, class UAIController* K2Node_Event_OwnerController, class UPawn* K2Node_Event_ControlledPawn, enum class EPathFollowingResult Temp_byte_Variable, class UActor* CallFunc_GetBlackboardValueAsActor_ReturnValue_1, int32 CallFunc_RandomIntegerInRange_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_LessEqual_IntInt_ReturnValue, float CallFunc_GetDistanceTo_ReturnValue, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, class USoldiers_CharacterBP_C* K2Node_DynamicCast_AsSoldiers_Character_BP_2, bool K2Node_DynamicCast_bSuccess_2, class UActor* CallFunc_GetBlackboardValueAsActor_ReturnValue_2, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class UAIAsyncTaskBlueprintProxy* CallFunc_CreateMoveToProxyObject_ReturnValue, const struct FVector& CallFunc_K2_GetRandomReachablePointInRadius_RandomLocation_1, bool CallFunc_K2_GetRandomReachablePointInRadius_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValidAILocation_ReturnValue, enum class EPathFollowingResult K2Node_CustomEvent_MovementResult, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class USoldiers_CharacterBP_C* K2Node_DynamicCast_AsSoldiers_Character_BP_3, bool K2Node_DynamicCast_bSuccess_3, int32 CallFunc_RandomIntegerInRange_ReturnValue_1, bool CallFunc_LessEqual_IntInt_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, const struct FVector& CallFunc_GetBlackboardValueAsVector_ReturnValue_1, bool CallFunc_Vector_IsNAN_ReturnValue, class UAction_SoundBP_C* CallFunc_FinishSpawningActor_ReturnValue, class UActor* CallFunc_GetBlackboardValueAsActor_ReturnValue_3, uint8 CallFunc_MakeLiteralByte_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, const struct FVector& CallFunc_GetBlackboardValueAsVector_ReturnValue_2, bool CallFunc_Vector_IsNAN_ReturnValue_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_2, double CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast);
};

}


