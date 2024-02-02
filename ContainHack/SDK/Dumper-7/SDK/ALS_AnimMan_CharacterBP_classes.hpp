#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x401 (0xEF9 - 0xAF8)
// BlueprintGeneratedClass ALS_AnimMan_CharacterBP.ALS_AnimMan_CharacterBP_C
class UALS_AnimMan_CharacterBP_C : public UALS_Base_CharacterBP_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xAF8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USkeletalMeshComponent*                TPSHolster;                                        // 0xB00(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                TPSDataPad;                                        // 0xB08(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                FPSAyakkabi;                                       // 0xB10(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                FPSEldiven;                                        // 0xB18(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                FPSPantolon;                                       // 0xB20(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                FPSGovde;                                          // 0xB28(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                FPSBodyMesh;                                       // 0xB30(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                TPSAyakkabi;                                       // 0xB38(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                TPSKol;                                            // 0xB40(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                TPSEldiven;                                        // 0xB48(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                TPSKemer;                                          // 0xB50(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                TPSZirh;                                           // 0xB58(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                TPSKask;                                           // 0xB60(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                TPSKulaklik;                                       // 0xB68(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                TPSGozluk;                                         // 0xB70(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                TPSPantolon;                                       // 0xB78(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                TPSGovde;                                          // 0xB80(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                TPSKafa;                                           // 0xB88(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAIPerceptionComponent*                AIPerception;                                      // 0xB90(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                TPSBodyMesh;                                       // 0xB98(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       VisualMeshes;                                      // 0xBA0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       HeldObjectRoot;                                    // 0xBA8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  StaticMesh;                                        // 0xBB0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                SkeletalMesh;                                      // 0xBB8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          DefaultColor;                                      // 0xBC0(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          SkinColor;                                         // 0xBD0(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          ShirtColor;                                        // 0xBE0(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          PantsColor;                                        // 0xBF0(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          ShoesColor;                                        // 0xC00(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          GlovesColor;                                       // 0xC10(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        ShirtType;                                         // 0xC20(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        PantsType;                                         // 0xC24(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Shoes;                                             // 0xC28(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Gloves;                                            // 0xC29(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         SolidColor;                                        // 0xC2A(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_27B1[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          BaseLayerColor;                                    // 0xC2C(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          OverlayLayerColor;                                 // 0xC3C(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          AdditiveAmount_Color;                              // 0xC4C(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Hand_Color;                                        // 0xC5C(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          HandIK_Color;                                      // 0xC6C(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_27B2[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInstanceDynamic*              Head;                                              // 0xC80(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              Torso;                                             // 0xC88(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              Pelvis;                                            // 0xC90(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              Feet;                                              // 0xC98(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              Shoulder_L;                                        // 0xCA0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              Upperarm_l;                                        // 0xCA8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              Lowerarm_l;                                        // 0xCB0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              Hand_L;                                            // 0xCB8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              Shoulder_R;                                        // 0xCC0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              Upperarm_r;                                        // 0xCC8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              Lowerarm_r;                                        // 0xCD0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              Hand_R;                                            // 0xCD8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              UpperLegs;                                         // 0xCE0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              LowerLegs;                                         // 0xCE8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FMantle_Asset                         Mantle_2m_Default;                                 // 0xCF0(0x40)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FMantle_Asset                         Mantle_1m_Default;                                 // 0xD30(0x40)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FMantle_Asset                         Mantle_1m_RH;                                      // 0xD70(0x40)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FMantle_Asset                         Mantle_1m_LH;                                      // 0xDB0(0x40)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FMantle_Asset                         Mantle_1m_2H;                                      // 0xDF0(0x40)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FMantle_Asset                         Mantle_1m_Box;                                     // 0xE30(0x40)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          LandRoll_Default;                                  // 0xE70(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          GetUpFront_Default;                                // 0xE78(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          LandRoll_RH;                                       // 0xE80(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          LandRoll_LH;                                       // 0xE88(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          LandRoll_2H;                                       // 0xE90(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          GetUpFront_RH;                                     // 0xE98(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          GetUpFront_LH;                                     // 0xEA0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          GetUpFront_2H;                                     // 0xEA8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          GetUpBack_Default;                                 // 0xEB0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          GetUpBack_RH;                                      // 0xEB8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          GetUpBack_LH;                                      // 0xEC0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          GetUpBack_2H;                                      // 0xEC8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TArray<class UALS_AnimMan_CharacterBP_C*>    SightActors;                                       // 0xED0(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<double>                               ActorsDistance;                                    // 0xEE0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UALS_AnimMan_CharacterBP_C*            SetPlayer;                                         // 0xEF0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         Can_Update_Actor;                                  // 0xEF8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UALS_AnimMan_CharacterBP_C* GetDefaultObj();

	void SetPlayerByDistance(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_MinOfFloatArray_IndexOfMinValue, float CallFunc_MinOfFloatArray_MinValue, class UALS_AnimMan_CharacterBP_C* CallFunc_Array_Get_Item, class UALS_AnimMan_CharacterBP_C* CallFunc_Array_Get_Item_1, float CallFunc_GetDistanceTo_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, TArray<float>& CallFunc_MinOfFloatArray_FloatArray_ImplicitCast, double CallFunc_Array_Set_Item_ImplicitCast);
	void MantleStart(double MantleHeight, const struct FALS_ComponentAndTransform& MantleLedgeWS, enum class EMantleType MantleType, bool K2Node_SwitchEnum_CmpSuccess);
	void UpdateHeldObjectAnimations(double CallFunc_GetAnimCurveValue_ReturnValue, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class UBow_AnimBP_C* K2Node_DynamicCast_AsBow_Anim_BP, bool K2Node_DynamicCast_bSuccess);
	void RagdollEnd();
	void RagdollStart();
	class UAnimMontage* GetGetUpAnimation(bool RagdollFaceUp, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_SwitchEnum_CmpSuccess_1);
	void MantleEnd();
	class UAnimMontage* GetRollAnimation();
	void OnOverlayStateChanged(enum class EALS_OverlayState NewOverlayState);
	void BPI_Get_3P_TraceParams(struct FVector* TraceOrigin, double* TraceRadius, enum class ETraceTypeQuery* TraceChannel, const struct FVector& CallFunc_GetSocketLocation_ReturnValue, const struct FVector& CallFunc_GetSocketLocation_ReturnValue_1);
	struct FMantle_Asset GetMantleAsset(enum class EMantleType MantleType, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_SwitchEnum_CmpSuccess_1);
	void UpdateLayeringColors(const struct FLinearColor& CallFunc_K2_GetVectorParameterValue_ReturnValue, double CallFunc_GetAnimCurveValue_ReturnValue, double CallFunc_GetAnimCurveValue_ReturnValue_1, double CallFunc_GetAnimCurveValue_ReturnValue_2, double CallFunc_GetAnimCurveValue_ReturnValue_3, double CallFunc_GetAnimCurveValue_ReturnValue_4, double CallFunc_GetAnimCurveValue_ReturnValue_5, const struct FLinearColor& CallFunc_LinearColorLerp_ReturnValue, const struct FLinearColor& CallFunc_LinearColorLerp_ReturnValue_1, const struct FLinearColor& CallFunc_LinearColorLerp_ReturnValue_2, const struct FLinearColor& CallFunc_LinearColorLerp_ReturnValue_3, double CallFunc_GetAnimCurveValue_ReturnValue_6, double CallFunc_GetAnimCurveValue_ReturnValue_7, const struct FLinearColor& CallFunc_LinearColorLerp_ReturnValue_4, const struct FLinearColor& CallFunc_LinearColorLerp_ReturnValue_5, double CallFunc_GetAnimCurveValue_ReturnValue_8, const struct FLinearColor& CallFunc_LinearColorLerp_ReturnValue_6, const struct FLinearColor& CallFunc_K2_GetVectorParameterValue_ReturnValue_1, const struct FLinearColor& CallFunc_LinearColorLerp_ReturnValue_7, double CallFunc_GetAnimCurveValue_ReturnValue_9, const struct FLinearColor& CallFunc_LinearColorLerp_ReturnValue_8, double CallFunc_GetAnimCurveValue_ReturnValue_10, const struct FLinearColor& CallFunc_LinearColorLerp_ReturnValue_9, double CallFunc_GetAnimCurveValue_ReturnValue_11, const struct FLinearColor& CallFunc_LinearColorLerp_ReturnValue_10, double CallFunc_GetAnimCurveValue_ReturnValue_12, const struct FLinearColor& CallFunc_LinearColorLerp_ReturnValue_11, double CallFunc_GetAnimCurveValue_ReturnValue_13, const struct FLinearColor& CallFunc_LinearColorLerp_ReturnValue_12, const struct FLinearColor& CallFunc_LinearColorLerp_ReturnValue_13, float CallFunc_LinearColorLerp_Alpha_ImplicitCast, float CallFunc_LinearColorLerp_Alpha_ImplicitCast_1, float CallFunc_LinearColorLerp_Alpha_ImplicitCast_2, float CallFunc_LinearColorLerp_Alpha_ImplicitCast_3, float CallFunc_LinearColorLerp_Alpha_ImplicitCast_4, float CallFunc_LinearColorLerp_Alpha_ImplicitCast_5, float CallFunc_LinearColorLerp_Alpha_ImplicitCast_6, float CallFunc_LinearColorLerp_Alpha_ImplicitCast_7, float CallFunc_LinearColorLerp_Alpha_ImplicitCast_8, float CallFunc_LinearColorLerp_Alpha_ImplicitCast_9, float CallFunc_LinearColorLerp_Alpha_ImplicitCast_10, float CallFunc_LinearColorLerp_Alpha_ImplicitCast_11, float CallFunc_LinearColorLerp_Alpha_ImplicitCast_12, float CallFunc_LinearColorLerp_Alpha_ImplicitCast_13);
	void UpdateColoringSystem(bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_IsClosed_Variable, class UPlayerController* CallFunc_GetPlayerController_ReturnValue, bool CallFunc_IsVisible_ReturnValue, TScriptInterface<class UALS_Controller_BPI_C> K2Node_DynamicCast_AsALS_Controller_BPI, bool K2Node_DynamicCast_bSuccess, class UCharacter* CallFunc_BPI_Get_DebugInfo_DebugFocusCharacter, bool CallFunc_BPI_Get_DebugInfo_DebugView, bool CallFunc_BPI_Get_DebugInfo_ShowHUD, bool CallFunc_BPI_Get_DebugInfo_ShowTraces, bool CallFunc_BPI_Get_DebugInfo_ShowDebugShapes, bool CallFunc_BPI_Get_DebugInfo_ShowLayerColors, bool CallFunc_BPI_Get_DebugInfo_Slomo, bool CallFunc_BPI_Get_DebugInfo_ShowCharacterInfo, bool CallFunc_BooleanAND_ReturnValue);
	void ResetColors();
	void SetDynamicMaterials(class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_1, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_2, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_3, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_4, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_5, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_6, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_7, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_8, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_9, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_10, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_11, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_12, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_13);
	struct FVector BPI_Get_FP_CameraTarget(const struct FVector& CallFunc_GetSocketLocation_ReturnValue);
	struct FTransform BPI_Get_3P_PivotTarget(const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, const struct FVector& CallFunc_GetSocketLocation_ReturnValue, const struct FVector& CallFunc_GetSocketLocation_ReturnValue_1, TArray<struct FVector>& K2Node_MakeArray_Array, const struct FVector& CallFunc_GetVectorArrayAverage_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue);
	void AttachToHand(class UStaticMesh* NewStaticMesh, class USkeletalMesh* NewSkeletalMesh, class UClass* NewAnimClass, bool LeftHand, const struct FVector& Offset, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool Temp_bool_Variable, class FName Temp_name_Variable, class FName Temp_name_Variable_1, bool CallFunc_IsValidClass_ReturnValue, bool CallFunc_SetStaticMesh_ReturnValue, const struct FHitResult& CallFunc_K2_SetRelativeLocation_SweepHitResult, class FName K2Node_Select_Default, bool CallFunc_K2_AttachToComponent_ReturnValue);
	void ClearHeldObject(bool CallFunc_SetStaticMesh_ReturnValue);
	void UpdateHeldObject();
	void UserConstructionScript();
	void Server_Toogle_Mesh(bool Condition);
	void Multicast_Toggle_Mesh(bool Condition);
	void Set_Pre_Initialise_Component();
	void BndEvt__AIPerception1_K2Node_ComponentBoundEvent_3_PerceptionUpdatedDelegate__DelegateSignature(TArray<class UActor*>& UpdatedActors);
	void ReceiveTick(float DeltaSeconds);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_ALS_AnimMan_CharacterBP(int32 EntryPoint, bool K2Node_CustomEvent_Condition_1, bool K2Node_CustomEvent_Condition, bool CallFunc_IsPlayerControlled_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, double CallFunc_GetWorldDeltaSeconds_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, TArray<class UActor*>& K2Node_ComponentBoundEvent_UpdatedActors, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, bool CallFunc_Less_IntInt_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess, float K2Node_Event_DeltaSeconds, int32 Temp_int_Loop_Counter_Variable_1, int32 Temp_int_Array_Index_Variable_1, class UActor* CallFunc_Array_Get_Item, class UALS_AnimMan_CharacterBP_C* K2Node_DynamicCast_AsALS_Anim_Man_Character_BP, bool K2Node_DynamicCast_bSuccess, const struct FActorPerceptionBlueprintInfo& CallFunc_GetActorsPerception_Info, bool CallFunc_GetActorsPerception_ReturnValue, bool CallFunc_IsPlayerControlled_ReturnValue_1, const struct FAIStimulus& CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, class UALS_AnimMan_CharacterBP_C* K2Node_DynamicCast_AsALS_Anim_Man_Character_BP_1, bool K2Node_DynamicCast_bSuccess_1, int32 CallFunc_Array_AddUnique_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_IsLocallyControlled_ReturnValue, float CallFunc_K2_SetTimer_Time_ImplicitCast);
};

}


