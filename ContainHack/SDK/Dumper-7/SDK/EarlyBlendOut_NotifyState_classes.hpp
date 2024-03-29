#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x15 (0x45 - 0x30)
// BlueprintGeneratedClass EarlyBlendOut_NotifyState.EarlyBlendOut_NotifyState_C
class UEarlyBlendOut_NotifyState_C : public UAnimNotifyState
{
public:
	class UAnimMontage*                          ThisMontage;                                       // 0x30(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                       BlendOutTime;                                      // 0x38(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CheckMovementState;                                // 0x40(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EALS_MovementState                MovementStateEquals;                               // 0x41(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CheckStance;                                       // 0x42(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EALS_Stance                       StanceEquals;                                      // 0x43(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CheckMovementInput;                                // 0x44(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UEarlyBlendOut_NotifyState_C* GetDefaultObj();

	class FString GetNotifyName();
	bool Received_NotifyTick(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float FrameDeltaTime, struct FAnimNotifyEventReference& EventReference, class UActor* OwningActor, class UAnimInstance* AnimInstance, class UActor* CallFunc_GetOwner_ReturnValue, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, TScriptInterface<class UALS_Character_BPI_C> K2Node_DynamicCast_AsALS_Character_BPI, bool K2Node_DynamicCast_bSuccess, enum class EMovementMode CallFunc_BPI_Get_CurrentStates_PawnMovementMode, enum class EALS_MovementState CallFunc_BPI_Get_CurrentStates_MovementState, enum class EALS_MovementState CallFunc_BPI_Get_CurrentStates_PrevMovementState, enum class EALS_MovementAction CallFunc_BPI_Get_CurrentStates_MovementAction, enum class EALS_RotationMode CallFunc_BPI_Get_CurrentStates_RotationMode, enum class EALS_Gait CallFunc_BPI_Get_CurrentStates_ActualGait, enum class EALS_Stance CallFunc_BPI_Get_CurrentStates_ActualStance, enum class EALS_ViewMode CallFunc_BPI_Get_CurrentStates_ViewMode, enum class EALS_OverlayState CallFunc_BPI_Get_CurrentStates_OverlayState, bool CallFunc_EqualEqual_ByteByte_ReturnValue, TScriptInterface<class UALS_Character_BPI_C> K2Node_DynamicCast_AsALS_Character_BPI_1, bool K2Node_DynamicCast_bSuccess_1, TScriptInterface<class UALS_Character_BPI_C> K2Node_DynamicCast_AsALS_Character_BPI_2, bool K2Node_DynamicCast_bSuccess_2, enum class EMovementMode CallFunc_BPI_Get_CurrentStates_PawnMovementMode_1, enum class EALS_MovementState CallFunc_BPI_Get_CurrentStates_MovementState_1, enum class EALS_MovementState CallFunc_BPI_Get_CurrentStates_PrevMovementState_1, enum class EALS_MovementAction CallFunc_BPI_Get_CurrentStates_MovementAction_1, enum class EALS_RotationMode CallFunc_BPI_Get_CurrentStates_RotationMode_1, enum class EALS_Gait CallFunc_BPI_Get_CurrentStates_ActualGait_1, enum class EALS_Stance CallFunc_BPI_Get_CurrentStates_ActualStance_1, enum class EALS_ViewMode CallFunc_BPI_Get_CurrentStates_ViewMode_1, enum class EALS_OverlayState CallFunc_BPI_Get_CurrentStates_OverlayState_1, const struct FVector& CallFunc_BPI_Get_EssentialValues_Velocity, const struct FVector& CallFunc_BPI_Get_EssentialValues_Acceleration, const struct FVector& CallFunc_BPI_Get_EssentialValues_MovementInput, bool CallFunc_BPI_Get_EssentialValues_IsMoving, bool CallFunc_BPI_Get_EssentialValues_HasMovementInput, double CallFunc_BPI_Get_EssentialValues_Speed, double CallFunc_BPI_Get_EssentialValues_MovementInputAmount, const struct FRotator& CallFunc_BPI_Get_EssentialValues_AimingRotation, double CallFunc_BPI_Get_EssentialValues_AimYawRate, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, float CallFunc_Montage_Stop_InBlendOutTime_ImplicitCast, float CallFunc_Montage_Stop_InBlendOutTime_ImplicitCast_1, float CallFunc_Montage_Stop_InBlendOutTime_ImplicitCast_2);
};

}


