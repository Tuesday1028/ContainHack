#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x80 (0x698 - 0x618)
// BlueprintGeneratedClass Crawler_CharacterBP.Crawler_CharacterBP_C
class UCrawler_CharacterBP_C : public UCharacter
{
public:
	uint8                                        Pad_272F[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x620(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UActorSequenceComponent*               MaterialSwitcher_deat;                             // 0x628(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UActorSequenceComponent*               MaterialSwitcher_spawn;                            // 0x630(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                Tentacle;                                          // 0x638(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCameraComponent*                      Camera;                                            // 0x640(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USpringArmComponent*                   SpringArm;                                         // 0x648(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                         bIsAttack;                                         // 0x650(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2734[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UActor*>                        Enemies;                                           // 0x658(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	double                                       HP;                                                // 0x668(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CurrentDamage;                                     // 0x670(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsDetectEnemy;                                     // 0x678(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2738[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTriggerBox*                           TriggerBox;                                        // 0x680(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	bool                                         AnimBitis;                                         // 0x688(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2739[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UGI_Contain_C*                         GIContain;                                         // 0x690(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UCrawler_CharacterBP_C* GetDefaultObj();

	void OnNotifyEnd_C1CEA1F04373EDFCF6CB5B8AE75ADE86(class FName NotifyName);
	void OnNotifyBegin_C1CEA1F04373EDFCF6CB5B8AE75ADE86(class FName NotifyName);
	void OnInterrupted_C1CEA1F04373EDFCF6CB5B8AE75ADE86(class FName NotifyName);
	void OnBlendOut_C1CEA1F04373EDFCF6CB5B8AE75ADE86(class FName NotifyName);
	void OnCompleted_C1CEA1F04373EDFCF6CB5B8AE75ADE86(class FName NotifyName);
	void InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_0(const struct FKey& Key);
	void OnNotifyEnd_98726B8E457B7D8572AE3195C619461C(class FName NotifyName);
	void OnNotifyBegin_98726B8E457B7D8572AE3195C619461C(class FName NotifyName);
	void OnInterrupted_98726B8E457B7D8572AE3195C619461C(class FName NotifyName);
	void OnBlendOut_98726B8E457B7D8572AE3195C619461C(class FName NotifyName);
	void OnCompleted_98726B8E457B7D8572AE3195C619461C(class FName NotifyName);
	void OnNotifyEnd_BCDF965C4B82C149960AEFB69C5E230E(class FName NotifyName);
	void OnNotifyBegin_BCDF965C4B82C149960AEFB69C5E230E(class FName NotifyName);
	void OnInterrupted_BCDF965C4B82C149960AEFB69C5E230E(class FName NotifyName);
	void OnBlendOut_BCDF965C4B82C149960AEFB69C5E230E(class FName NotifyName);
	void OnCompleted_BCDF965C4B82C149960AEFB69C5E230E(class FName NotifyName);
	void OnNotifyEnd_D731E7294290E5A663EEC0ADFE5ACF77(class FName NotifyName);
	void OnNotifyBegin_D731E7294290E5A663EEC0ADFE5ACF77(class FName NotifyName);
	void OnInterrupted_D731E7294290E5A663EEC0ADFE5ACF77(class FName NotifyName);
	void OnBlendOut_D731E7294290E5A663EEC0ADFE5ACF77(class FName NotifyName);
	void OnCompleted_D731E7294290E5A663EEC0ADFE5ACF77(class FName NotifyName);
	void InpAxisEvt_MoveForward_K2Node_InputAxisEvent_0(float AxisValue);
	void InpAxisEvt_MoveRight_K2Node_InputAxisEvent_1(float AxisValue);
	void InpAxisEvt_Turn_K2Node_InputAxisEvent_2(float AxisValue);
	void InpAxisEvt_LookUp_K2Node_InputAxisEvent_3(float AxisValue);
	void Server_Attack();
	void Multicast_Attack();
	void AttackStart();
	void AttackTick();
	void BndEvt__Crawler_CharacterBP_Mesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class UActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, struct FHitResult& Hit);
	void DamageAi();
	void DamageAi_Serv();
	void ReceiveBeginPlay();
	void AliveAnim();
	void AliveAnim_Serv();
	void OnActorBeginOverlap_Event(class UActor* OverlappedActor, class UActor* OtherActor);
	void GranadeDamage();
	void GranadeDamage_Server();
	void AnimControl();
	void AnimControl_Server();
	void SmokeOrFlash();
	void SmokeOrFlash_Server();
	void ExecuteUbergraph_Crawler_CharacterBP(int32 EntryPoint, bool CallFunc_LessEqual_DoubleDouble_ReturnValue, class FName K2Node_CustomEvent_NotifyName_15, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FName Temp_name_Variable, const struct FKey& K2Node_InputKeyEvent_Key, TArray<class UActor*>& Temp_object_Variable, class FName K2Node_CustomEvent_NotifyName_14, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class FName K2Node_CustomEvent_NotifyName_13, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class FName K2Node_CustomEvent_NotifyName_12, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class FName K2Node_CustomEvent_NotifyName_11, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, class FName K2Node_CustomEvent_NotifyName_10, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, class FName Temp_name_Variable_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, class FName K2Node_CustomEvent_NotifyName_9, class FName K2Node_CustomEvent_NotifyName_8, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, class FName K2Node_CustomEvent_NotifyName_7, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, class FName K2Node_CustomEvent_NotifyName_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_9, class FName K2Node_CustomEvent_NotifyName_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_10, class FName Temp_name_Variable_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_11, class FName K2Node_CustomEvent_NotifyName_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_12, class FName K2Node_CustomEvent_NotifyName_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_13, class FName K2Node_CustomEvent_NotifyName_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_14, class FName K2Node_CustomEvent_NotifyName_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_15, class FName K2Node_CustomEvent_NotifyName, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_16, class FName Temp_name_Variable_3, class FName K2Node_CustomEvent_NotifyName_18, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_HasAuthority_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_17, int32 CallFunc_Add_IntInt_ReturnValue, bool Temp_bool_IsClosed_Variable, bool Temp_bool_Has_Been_Initd_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_HasAuthority_ReturnValue_2, float K2Node_InputAxisEvent_AxisValue_3, float K2Node_InputAxisEvent_AxisValue_2, const struct FRotator& CallFunc_GetControlRotation_ReturnValue, float K2Node_InputAxisEvent_AxisValue_1, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, const struct FRotator& CallFunc_MakeRotator_ReturnValue, float K2Node_InputAxisEvent_AxisValue, const struct FVector& CallFunc_GetRightVector_ReturnValue, const struct FVector& CallFunc_GetForwardVector_ReturnValue, class FName K2Node_CustomEvent_NotifyName_19, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, TArray<enum class EObjectTypeQuery>& K2Node_MakeArray_Array, TArray<struct FHitResult>& CallFunc_SphereTraceMultiForObjects_OutHits, bool CallFunc_SphereTraceMultiForObjects_ReturnValue, const struct FHitResult& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class UActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, class FName CallFunc_BreakHitResult_BoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, bool CallFunc_Less_IntInt_ReturnValue, class UB_DemoCharacter_Child_C* K2Node_DynamicCast_AsB_Demo_Character_Child, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Array_Contains_ReturnValue, class FName K2Node_CustomEvent_NotifyName_16, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_18, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_HasAuthority_ReturnValue_3, class UPrimitiveComponent* K2Node_ComponentBoundEvent_HitComponent, class UActor* K2Node_ComponentBoundEvent_OtherActor, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, const struct FVector& K2Node_ComponentBoundEvent_NormalImpulse, const struct FHitResult& K2Node_ComponentBoundEvent_Hit, bool CallFunc_ActorHasTag_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_19, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, class FName K2Node_CustomEvent_NotifyName_17, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_20, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_2, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue, class FName CallFunc_MakeLiteralName_ReturnValue, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue_1, class FName CallFunc_MakeLiteralName_ReturnValue_1, class UActor* K2Node_CustomEvent_OverlappedActor, class UActor* K2Node_CustomEvent_OtherActor, bool CallFunc_ActorHasTag_ReturnValue_1, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue_2, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_3, class FName CallFunc_MakeLiteralName_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_BooleanAND_ReturnValue, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue_3, class FName CallFunc_MakeLiteralName_ReturnValue_3, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UGI_Contain_C* K2Node_DynamicCast_AsGI_Contain, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_Greater_DoubleDouble_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue);
};

}


