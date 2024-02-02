#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x67 (0x780 - 0x719)
// BlueprintGeneratedClass AI_Steve.AI_Steve_C
class UAI_Steve_C : public UBP_Zombie_Pawn_C
{
public:
	uint8                                        Pad_42CC[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x720(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USkeletalMeshComponent*                SK_Head;                                           // 0x728(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  SM_Head;                                           // 0x730(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UArrowComponent*                       Sag;                                               // 0x738(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                     Niagara;                                           // 0x740(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	int32                                        HP_0;                                              // 0x748(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        HP;                                                // 0x74C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UB_DemoCharacter_Child_C*              As_B_Demo_Character_Child;                         // 0x750(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         bIsAttack;                                         // 0x758(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bIsClosingAttack;                                  // 0x759(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_42D0[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UB_DemoCharacter_Child_C*>      ClosedEnemy;                                       // 0x760(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	FMulticastInlineDelegateProperty_            OnTargetPointAnimationEnd;                         // 0x770(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class UAI_Steve_C* GetDefaultObj();

	void OnNotifyEnd_5240DABD4E177D292BDE808F4FE34648(class FName NotifyName);
	void OnNotifyBegin_5240DABD4E177D292BDE808F4FE34648(class FName NotifyName);
	void OnInterrupted_5240DABD4E177D292BDE808F4FE34648(class FName NotifyName);
	void OnBlendOut_5240DABD4E177D292BDE808F4FE34648(class FName NotifyName);
	void OnCompleted_5240DABD4E177D292BDE808F4FE34648(class FName NotifyName);
	void OnNotifyEnd_77A594334896CD5E90D95792C2AEB0F7(class FName NotifyName);
	void OnNotifyBegin_77A594334896CD5E90D95792C2AEB0F7(class FName NotifyName);
	void OnInterrupted_77A594334896CD5E90D95792C2AEB0F7(class FName NotifyName);
	void OnBlendOut_77A594334896CD5E90D95792C2AEB0F7(class FName NotifyName);
	void OnCompleted_77A594334896CD5E90D95792C2AEB0F7(class FName NotifyName);
	void Fire(bool bIsClosingAttack, class UActor* TargetEnemy);
	void Multicast_Fire(bool bIsClosingAttack, class UActor* TargetEnemy);
	void StopFire();
	void Multicast_StopFire();
	void BndEvt__AI_Steve_Mesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class UActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, struct FHitResult& Hit);
	void StartChasing();
	void Multicast_StartChasing();
	void StopChasing();
	void Multicast_StopChasing();
	void AttackClosedTick(class FName Socket);
	void AttackClosedStart();
	void Multicast_Attack();
	void Server_StartTargetPointAnimation(class UAnimMontage* Animation);
	void Multicast_StartTargetPointAnimation(class UAnimMontage* Animation);
	void ExecuteUbergraph_AI_Steve(int32 EntryPoint, class FName K2Node_CustomEvent_NotifyName_7, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FName K2Node_CustomEvent_NotifyName_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class FName K2Node_CustomEvent_NotifyName_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class FName Temp_name_Variable, TArray<class UActor*>& Temp_object_Variable, class FName K2Node_CustomEvent_NotifyName_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class FName K2Node_CustomEvent_NotifyName_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, class FName K2Node_CustomEvent_NotifyName_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, class FName K2Node_CustomEvent_NotifyName_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, class FName K2Node_CustomEvent_NotifyName, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, class FName Temp_name_Variable_1, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class FName K2Node_CustomEvent_NotifyName_9, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_HasAuthority_ReturnValue_1, bool K2Node_CustomEvent_bIsClosingAttack_1, class UActor* K2Node_CustomEvent_TargetEnemy_1, bool K2Node_CustomEvent_bIsClosingAttack, class UActor* K2Node_CustomEvent_TargetEnemy, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UPrimitiveComponent* K2Node_ComponentBoundEvent_HitComponent, class UActor* K2Node_ComponentBoundEvent_OtherActor, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, const struct FVector& K2Node_ComponentBoundEvent_NormalImpulse, const struct FHitResult& K2Node_ComponentBoundEvent_Hit, class UMermiAtesi_C* K2Node_DynamicCast_AsMermi_Atesi, bool K2Node_DynamicCast_bSuccess, class UActor* CallFunc_GetOwner_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class FName K2Node_CustomEvent_NotifyName_8, class FName K2Node_CustomEvent_Socket, TArray<enum class EObjectTypeQuery>& K2Node_MakeArray_Array, const struct FVector& CallFunc_GetSocketLocation_ReturnValue, bool CallFunc_HasAuthority_ReturnValue_2, TArray<struct FHitResult>& CallFunc_SphereTraceMultiForObjects_OutHits, bool CallFunc_SphereTraceMultiForObjects_ReturnValue, const struct FHitResult& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class UActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, class FName CallFunc_BreakHitResult_BoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, bool CallFunc_Less_IntInt_ReturnValue, class UB_DemoCharacter_Child_C* K2Node_DynamicCast_AsB_Demo_Character_Child, bool K2Node_DynamicCast_bSuccess_1, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_Array_Contains_ReturnValue, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_9, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, class UAudioComponent* CallFunc_SpawnSoundAtLocation_ReturnValue, class UAnimMontage* K2Node_CustomEvent_Animation_1, class UAnimMontage* K2Node_CustomEvent_Animation, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, float K2Node_VariableSet_MaxWalkSpeed_ImplicitCast, float K2Node_VariableSet_MaxWalkSpeed_ImplicitCast_1);
	void OnTargetPointAnimationEnd__DelegateSignature();
};

}


