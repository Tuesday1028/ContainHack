#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x278 (0xB68 - 0x8F0)
// BlueprintGeneratedClass Soldiers_CharacterBP.Soldiers_CharacterBP_C
class USoldiers_CharacterBP_C : public UALSCharacter
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x8F0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UAudioComponent*                       Soldier_idle_whisper_Cue;                          // 0x8F8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                FractureBody;                                      // 0x900(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                      GrenadeDetector;                                   // 0x908(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                     PistolMuzzle;                                      // 0x910(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                     RifleMuzzle;                                       // 0x918(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  Rifle;                                             // 0x920(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                Glock;                                             // 0x928(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPhysicalAnimationComponent*           PhysicalAnimation;                                 // 0x930(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCapsuleComponent*                     ArmorDamage;                                       // 0x938(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCapsuleComponent*                     HeadDamage;                                        // 0x940(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCameraComponent*                      BombaRef;                                          // 0x948(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UDebugComponent_C*                     DebugComponent;                                    // 0x950(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UMantleComponent_C*                    MantleComponent;                                   // 0x958(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        Timeline_2_NewTrack_0_8672F5F54758806429C32DBB149D3C29; // 0x960(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                Timeline_2__Direction_8672F5F54758806429C32DBB149D3C29; // 0x964(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_40D1[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    Timeline_2;                                        // 0x968(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	float                                        Timeline_1_NewTrack_0_4DA9B4E244C42BC8822F3898EEC26C64; // 0x970(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                Timeline_1__Direction_4DA9B4E244C42BC8822F3898EEC26C64; // 0x974(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_40D5[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    Timeline_1;                                        // 0x978(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	float                                        Timeline_0_NewTrack_0_27154C4246AB9A0A0CCFC78CF855B561; // 0x980(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                Timeline_0__Direction_27154C4246AB9A0A0CCFC78CF855B561; // 0x984(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_40D8[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    Timeline_0;                                        // 0x988(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	float                                        Timeline_NewTrack_0_6FE89585456E4E1730493C83FDC2AB9A; // 0x990(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                Timeline__Direction_6FE89585456E4E1730493C83FDC2AB9A; // 0x994(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_40DB[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    Timeline;                                          // 0x998(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          LandRoll_Default;                                  // 0x9A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          LandRoll_RH;                                       // 0x9A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          LandRoll_LH;                                       // 0x9B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          LandRoll_2H;                                       // 0x9B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          GetUpFront_Default;                                // 0x9C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          GetUpFront_LH;                                     // 0x9C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          GetUpFront_2H;                                     // 0x9D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          GetUpFront_RH;                                     // 0x9D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          GetUpBack_Default;                                 // 0x9E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          GetUpBack_LH;                                      // 0x9E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          GetUpBack_2H;                                      // 0x9F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          GetUpBack_RH;                                      // 0x9F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         FlashEtki;                                         // 0xA00(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	bool                                         SmokeEtki;                                         // 0xA01(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_40E6[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       RecoilVertical;                                    // 0xA08(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       RecoilHorizontal;                                  // 0xA10(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Health;                                            // 0xA18(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	double                                       HelmetArmor;                                       // 0xA20(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	double                                       VestArmor;                                         // 0xA28(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	bool                                         Death;                                             // 0xA30(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	bool                                         Injure;                                            // 0xA31(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	bool                                         bHasFire;                                          // 0xA32(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bIsFiring;                                         // 0xA33(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        RifleBulletCount;                                  // 0xA34(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        RifleMagCount;                                     // 0xA38(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bIsReloading;                                      // 0xA3C(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bIsUsePistol;                                      // 0xA3D(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_40F1[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        PistolBulletCount;                                 // 0xA40(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_40F2[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       IKAcKapa;                                          // 0xA48(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Prone;                                             // 0xA50(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	bool                                         bIsRightView;                                      // 0xA51(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bIsLeftView;                                       // 0xA52(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_40F4[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnTargetPointAnimationEnded;                       // 0xA58(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FFActionSound                         SoundThrowingGrenade;                              // 0xA68(0x20)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FFActionSound                         SoundGoingCover_01;                                // 0xA88(0x20)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FFActionSound                         SoundGoingCover_02;                                // 0xAA8(0x20)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FFActionSound                         SoundSightEnemy;                                   // 0xAC8(0x20)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FFActionSound                         SoundClosingGrenade;                               // 0xAE8(0x20)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FFActionSound                         SoundSuppressFire;                                 // 0xB08(0x20)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UCurveFloat*                           RifleCoverFireRange;                               // 0xB28(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UCurveFloat*                           RifleMovingCoverFireRange;                         // 0xB30(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UCurveFloat*                           RifleProneFireRange;                               // 0xB38(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UCurveFloat*                           PistolCoverFireRange;                              // 0xB40(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UCurveFloat*                           PistolMovingCoverFireRange;                        // 0xB48(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UCurveFloat*                           PistolProneFireRange;                              // 0xB50(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	float                                        FireRate;                                          // 0xB58(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ReactionTime;                                      // 0xB5C(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGI_Contain_C*                         GIContain;                                         // 0xB60(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class USoldiers_CharacterBP_C* GetDefaultObj();

	void OnRep_Prone();
	void OnRep_Injure(class UAIController* CallFunc_GetAIController_ReturnValue, class UAIController* CallFunc_GetAIController_ReturnValue_1, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue);
	void OnRep_Death(const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class UAIController* CallFunc_GetAIController_ReturnValue, TArray<bool>& K2Node_MakeArray_Array, TArray<bool>& K2Node_MakeArray_Array_1, bool K2Node_MultiGate_FirstRun, int32 K2Node_MultiGate_Data, bool K2Node_MultiGate_ScratchBool, int32 K2Node_MultiGate_ScratchIndex, TArray<bool>& K2Node_MakeArray_Array_2, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, class USoldiers_AnimBP_C* K2Node_DynamicCast_AsSoldiers_Anim_BP, bool K2Node_DynamicCast_bSuccess);
	void OnRep_VestArmor();
	void OnRep_HelmetArmor();
	void OnRep_Health(TArray<bool>& K2Node_MakeArray_Array, TArray<bool>& K2Node_MakeArray_Array_1, TArray<bool>& K2Node_MakeArray_Array_2, bool K2Node_MultiGate_FirstRun, int32 K2Node_MultiGate_Data, bool K2Node_MultiGate_ScratchBool, int32 K2Node_MultiGate_ScratchIndex, TArray<bool>& K2Node_MakeArray_Array_3, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, class USoldiers_AnimBP_C* K2Node_DynamicCast_AsSoldiers_Anim_BP, bool K2Node_DynamicCast_bSuccess, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void OnRep_FlashEtki(bool CallFunc_BooleanOR_ReturnValue);
	void OnUpdateHeldObject(bool K2Node_SwitchEnum_CmpSuccess);
	void OnUpdateHeldObjectAnimations(float CallFunc_GetAnimCurveValue_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, class UBow_AnimBP_C* K2Node_DynamicCast_AsBow_Anim_BP, bool K2Node_DynamicCast_bSuccess, double K2Node_VariableSet_Draw_ImplicitCast);
	class UAnimMontage* GetRollAnimation(bool K2Node_SwitchEnum_CmpSuccess);
	class UAnimMontage* GetGetUpAnimation(bool bRagdollFaceUpState, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_SwitchEnum_CmpSuccess_1);
	void Timeline__FinishedFunc();
	void Timeline__UpdateFunc();
	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void Timeline_1__FinishedFunc();
	void Timeline_1__UpdateFunc();
	void Timeline_2__FinishedFunc();
	void Timeline_2__UpdateFunc();
	void OnNotifyEnd_3ED4B9DF453BC5B1581FFFA75A008A5D(class FName NotifyName);
	void OnNotifyBegin_3ED4B9DF453BC5B1581FFFA75A008A5D(class FName NotifyName);
	void OnInterrupted_3ED4B9DF453BC5B1581FFFA75A008A5D(class FName NotifyName);
	void OnBlendOut_3ED4B9DF453BC5B1581FFFA75A008A5D(class FName NotifyName);
	void OnCompleted_3ED4B9DF453BC5B1581FFFA75A008A5D(class FName NotifyName);
	void OnNotifyEnd_D0DC4BAA444F6C288C0B9B820CACF29B(class FName NotifyName);
	void OnNotifyBegin_D0DC4BAA444F6C288C0B9B820CACF29B(class FName NotifyName);
	void OnInterrupted_D0DC4BAA444F6C288C0B9B820CACF29B(class FName NotifyName);
	void OnBlendOut_D0DC4BAA444F6C288C0B9B820CACF29B(class FName NotifyName);
	void OnCompleted_D0DC4BAA444F6C288C0B9B820CACF29B(class FName NotifyName);
	void OnNotifyEnd_798FD4C246E47B26803C6788516B34E2(class FName NotifyName);
	void OnNotifyBegin_798FD4C246E47B26803C6788516B34E2(class FName NotifyName);
	void OnInterrupted_798FD4C246E47B26803C6788516B34E2(class FName NotifyName);
	void OnBlendOut_798FD4C246E47B26803C6788516B34E2(class FName NotifyName);
	void OnCompleted_798FD4C246E47B26803C6788516B34E2(class FName NotifyName);
	void InpActEvt_P_K2Node_InputKeyEvent_0(const struct FKey& Key);
	void OnNotifyEnd_23A3294547D91BA5FD0765A8DBA48788(class FName NotifyName);
	void OnNotifyBegin_23A3294547D91BA5FD0765A8DBA48788(class FName NotifyName);
	void OnInterrupted_23A3294547D91BA5FD0765A8DBA48788(class FName NotifyName);
	void OnBlendOut_23A3294547D91BA5FD0765A8DBA48788(class FName NotifyName);
	void OnCompleted_23A3294547D91BA5FD0765A8DBA48788(class FName NotifyName);
	void OnNotifyEnd_21C6637A49C815A247716E85ACEDCC23(class FName NotifyName);
	void OnNotifyBegin_21C6637A49C815A247716E85ACEDCC23(class FName NotifyName);
	void OnInterrupted_21C6637A49C815A247716E85ACEDCC23(class FName NotifyName);
	void OnBlendOut_21C6637A49C815A247716E85ACEDCC23(class FName NotifyName);
	void OnCompleted_21C6637A49C815A247716E85ACEDCC23(class FName NotifyName);
	void OnNotifyEnd_D76BFFD7471322F019BF9F92CF5ECA61(class FName NotifyName);
	void OnNotifyBegin_D76BFFD7471322F019BF9F92CF5ECA61(class FName NotifyName);
	void OnInterrupted_D76BFFD7471322F019BF9F92CF5ECA61(class FName NotifyName);
	void OnBlendOut_D76BFFD7471322F019BF9F92CF5ECA61(class FName NotifyName);
	void OnCompleted_D76BFFD7471322F019BF9F92CF5ECA61(class FName NotifyName);
	void UpdateHeldObjectAnimations();
	void UpdateHeldObject();
	void ServerBombaEtkileri(bool FlashEtki, float FlashEtkiSuresi);
	void ServerSmokeEtkiRecoil(double RecoilVertical, double RecoilHorizontal);
	void MultiSmokeEtkiRecoil(double RecoilVertical, double RecoilHorizontal);
	void ServerHealthDamage(double B);
	void BndEvt__Soldiers_CharacterBP_Mesh_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class UActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, struct FHitResult& Hit);
	void BndEvt__Soldiers_CharacterBP_HeadDamage_K2Node_ComponentBoundEvent_2_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class UActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, struct FHitResult& Hit);
	void BndEvt__Soldiers_CharacterBP_ArmorDamage_K2Node_ComponentBoundEvent_3_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class UActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, struct FHitResult& Hit);
	void ServerHelmetDamage(double B);
	void ServerVestDamage(double B);
	void Server_RelaxFire();
	void Multicast_RelaxFire();
	void Multicast_Reload();
	void Multicast_TakePistol();
	void Server_PistolRelaxFire();
	void Recoil(double RecoilVertical, double RecoilHorizontal);
	void ServerProne(bool Prone);
	void MultiHasFire(bool bHasFire);
	void MultiCloseCombat();
	void ServerCloseCombaT();
	void Server_StartTargetPointAnimation(class UAnimMontage* Animation);
	void Multicast_StartTargetPointAnimation(class UAnimMontage* Animation);
	void Server_SpawnActionSound(const struct FFActionSound& ActionSound);
	void Multicast_SpawnActionSound(const struct FFActionSound& ActionSound);
	void BndEvt__Soldiers_CharacterBP_GrenadeDetector_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class UActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult);
	void ReceiveBeginPlay();
	void K2_OnEndCrouch(float HalfHeightAdjust, float ScaledHalfHeightAdjust);
	void MultiHealthDamage(double B);
	void ExecuteUbergraph_Soldiers_CharacterBP(int32 EntryPoint, class FName K2Node_CustomEvent_NotifyName_25, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FName Temp_name_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class FName K2Node_CustomEvent_NotifyName_24, class FName K2Node_CustomEvent_NotifyName_23, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class FName K2Node_CustomEvent_NotifyName_22, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class FName K2Node_CustomEvent_NotifyName_21, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, class FName K2Node_CustomEvent_NotifyName_20, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, class FName Temp_name_Variable_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, class FName K2Node_CustomEvent_NotifyName_19, class FName K2Node_CustomEvent_NotifyName_18, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, class FName K2Node_CustomEvent_NotifyName_17, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, class FName K2Node_CustomEvent_NotifyName_16, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_9, class FName K2Node_CustomEvent_NotifyName_15, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_10, class FName Temp_name_Variable_2, const struct FKey& K2Node_InputKeyEvent_Key, class FName K2Node_CustomEvent_NotifyName_14, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_11, class FName K2Node_CustomEvent_NotifyName_13, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_12, class FName K2Node_CustomEvent_NotifyName_12, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_13, class FName K2Node_CustomEvent_NotifyName_11, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_14, class FName K2Node_CustomEvent_NotifyName_10, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_15, class FName Temp_name_Variable_3, TArray<class UActor*>& Temp_object_Variable, class FName K2Node_CustomEvent_NotifyName_9, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_16, class FName K2Node_CustomEvent_NotifyName_8, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_17, class FName K2Node_CustomEvent_NotifyName_7, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_18, class FName K2Node_CustomEvent_NotifyName_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_19, class FName K2Node_CustomEvent_NotifyName_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_20, class FName Temp_name_Variable_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_21, bool CallFunc_EqualEqual_NameName_ReturnValue, class FName K2Node_CustomEvent_NotifyName_4, class FName K2Node_CustomEvent_NotifyName_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_22, class FName K2Node_CustomEvent_NotifyName_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_23, class FName K2Node_CustomEvent_NotifyName_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_24, class FName K2Node_CustomEvent_NotifyName, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_25, class FName Temp_name_Variable_5, bool Temp_bool_Variable, bool CallFunc_Not_PreBool_ReturnValue, class FName K2Node_CustomEvent_NotifyName_26, uint8 CallFunc_MakeLiteralByte_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_26, int32 Temp_int_Variable, bool Temp_bool_Variable_1, uint8 CallFunc_MakeLiteralByte_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_HasAuthority_ReturnValue_1, bool CallFunc_HasAuthority_ReturnValue_2, class FName K2Node_CustomEvent_NotifyName_27, bool Temp_bool_IsClosed_Variable, bool Temp_bool_Has_Been_Initd_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_27, bool Temp_bool_Variable_2, bool K2Node_CustomEvent_FlashEtki, float K2Node_CustomEvent_FlashEtkiSuresi, bool CallFunc_Not_PreBool_ReturnValue_2, double K2Node_CustomEvent_RecoilVertical_2, double K2Node_CustomEvent_RecoilHorizontal_2, double K2Node_CustomEvent_RecoilVertical_1, double K2Node_CustomEvent_RecoilHorizontal_1, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_ReturnValue_2, class FName K2Node_CustomEvent_NotifyName_28, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_28, int32 Temp_int_Variable_1, double K2Node_CustomEvent_B_3, class FName K2Node_CustomEvent_NotifyName_29, class UPrimitiveComponent* K2Node_ComponentBoundEvent_HitComponent_2, class UActor* K2Node_ComponentBoundEvent_OtherActor_3, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp_3, const struct FVector& K2Node_ComponentBoundEvent_NormalImpulse_2, const struct FHitResult& K2Node_ComponentBoundEvent_Hit_2, class UPrimitiveComponent* K2Node_ComponentBoundEvent_HitComponent_1, class UActor* K2Node_ComponentBoundEvent_OtherActor_2, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp_2, const struct FVector& K2Node_ComponentBoundEvent_NormalImpulse_1, const struct FHitResult& K2Node_ComponentBoundEvent_Hit_1, class UMermiAtesi_C* K2Node_DynamicCast_AsMermi_Atesi, bool K2Node_DynamicCast_bSuccess, class UMermiAtesi_C* K2Node_DynamicCast_AsMermi_Atesi_1, bool K2Node_DynamicCast_bSuccess_1, class UActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_ActorHasTag_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_3, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_4, double CallFunc_Multiply_DoubleDouble_ReturnValue_5, class UPrimitiveComponent* K2Node_ComponentBoundEvent_HitComponent, class UActor* K2Node_ComponentBoundEvent_OtherActor_1, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp_1, const struct FVector& K2Node_ComponentBoundEvent_NormalImpulse, const struct FHitResult& K2Node_ComponentBoundEvent_Hit, double K2Node_CustomEvent_B_2, class UMermiAtesi_C* K2Node_DynamicCast_AsMermi_Atesi_2, bool K2Node_DynamicCast_bSuccess_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_29, double CallFunc_Multiply_DoubleDouble_ReturnValue_6, double CallFunc_Multiply_DoubleDouble_ReturnValue_7, double CallFunc_Subtract_DoubleDouble_ReturnValue, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, double K2Node_CustomEvent_B_1, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue_1, double CallFunc_Subtract_DoubleDouble_ReturnValue_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, class UAudioComponent* CallFunc_SpawnSoundAtLocation_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAtLocation_ReturnValue_1, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue_2, int32 CallFunc_Subtract_IntInt_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue_3, const struct FVector& CallFunc_GetSocketLocation_ReturnValue, const struct FRotator& CallFunc_K2_GetComponentRotation_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, int32 CallFunc_Subtract_IntInt_ReturnValue_2, bool CallFunc_Greater_IntInt_ReturnValue_4, const struct FVector& CallFunc_GetSocketLocation_ReturnValue_1, const struct FRotator& CallFunc_K2_GetComponentRotation_ReturnValue_1, const struct FTransform& CallFunc_MakeTransform_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue_5, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_2, double K2Node_CustomEvent_RecoilVertical, double K2Node_CustomEvent_RecoilHorizontal, bool K2Node_CustomEvent_Prone, bool K2Node_CustomEvent_bHasFire, bool CallFunc_BooleanOR_ReturnValue, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_K2_AttachToComponent_ReturnValue, double CallFunc_RandomFloatInRange_ReturnValue, double CallFunc_RandomFloatInRange_ReturnValue_1, const struct FRotator& CallFunc_K2_GetComponentRotation_ReturnValue_2, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FVector& CallFunc_GetForwardVector_ReturnValue, TArray<enum class EObjectTypeQuery>& K2Node_MakeArray_Array, const struct FVector& CallFunc_Multiply_VectorInt_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FHitResult& CallFunc_BoxTraceSingleForObjects_OutHit, bool CallFunc_BoxTraceSingleForObjects_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class UActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, class FName CallFunc_BreakHitResult_BoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, int32 Temp_int_Variable_2, class UB_DemoCharacter_C* K2Node_DynamicCast_AsB_Demo_Character, bool K2Node_DynamicCast_bSuccess_3, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_4, bool CallFunc_LessEqual_DoubleDouble_ReturnValue, bool CallFunc_IsValid_ReturnValue_4, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_2, class UAnimMontage* K2Node_CustomEvent_Animation_1, class UAnimMontage* K2Node_CustomEvent_Animation, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_5, const struct FFActionSound& K2Node_CustomEvent_ActionSound_1, bool CallFunc_IsValid_ReturnValue_5, const struct FFActionSound& K2Node_CustomEvent_ActionSound, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, class UActor* K2Node_ComponentBoundEvent_OtherActor, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, bool K2Node_ComponentBoundEvent_bFromSweep, const struct FHitResult& K2Node_ComponentBoundEvent_SweepResult, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue, class UHand_Grenade_01_Projectile_C* K2Node_DynamicCast_AsHand_Grenade_01_Projectile, bool K2Node_DynamicCast_bSuccess_4, class UActor* CallFunc_GetOwner_ReturnValue_1, class UAIController* CallFunc_GetAIController_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_2, class USoldiers_AIControllerBP_C* K2Node_DynamicCast_AsSoldiers_AIController_BP, bool K2Node_DynamicCast_bSuccess_5, double CallFunc_Multiply_DoubleDouble_ReturnValue_8, class UActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class UMermiAtesi_C* CallFunc_FinishSpawningActor_ReturnValue, class UActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, class UMermiAtesi_C* CallFunc_FinishSpawningActor_ReturnValue_1, float K2Node_Event_HalfHeightAdjust, float K2Node_Event_ScaledHalfHeightAdjust, double K2Node_CustomEvent_B, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue, class FName CallFunc_MakeLiteralName_ReturnValue, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, bool CallFunc_GetValueAsBool_ReturnValue, class UGI_Contain_C* K2Node_DynamicCast_AsGI_Contain, bool K2Node_DynamicCast_bSuccess_6, double CallFunc_RandomFloatInRange_ReturnValue_2, double CallFunc_RandomFloatInRange_ReturnValue_3, double CallFunc_Subtract_DoubleDouble_ReturnValue_2, double CallFunc_RandomFloatInRange_ReturnValue_4, double CallFunc_Multiply_DoubleDouble_B_ImplicitCast, double CallFunc_Multiply_DoubleDouble_B_ImplicitCast_1, double CallFunc_Multiply_DoubleDouble_B_ImplicitCast_2, float CallFunc_ReportDamageEvent_DamageAmount_ImplicitCast, float CallFunc_SpawnSoundAttached_VolumeMultiplier_ImplicitCast, float CallFunc_SpawnSoundAttached_PitchMultiplier_ImplicitCast, double CallFunc_Multiply_DoubleDouble_B_ImplicitCast_3, float K2Node_VariableSet_ReactionTime_ImplicitCast, float K2Node_VariableSet_ReactionTime_ImplicitCast_1, float K2Node_VariableSet_FireRate_ImplicitCast);
	void OnTargetPointAnimationEnded__DelegateSignature();
};

}


