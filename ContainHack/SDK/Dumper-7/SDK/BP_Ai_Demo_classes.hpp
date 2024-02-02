#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xA0 (0x6B8 - 0x618)
// BlueprintGeneratedClass BP_Ai_Demo.BP_Ai_Demo_C
class UBP_Ai_Demo_C : public UCharacter
{
public:
	uint8                                        Pad_2562[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x620(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UTextRenderComponent*                  DamageText;                                        // 0x628(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UWidgetComponent*                      HealthBar;                                         // 0x630(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       Zombie_Cue;                                        // 0x638(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPawnSensingComponent*                 PawnSensing;                                       // 0x640(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        Damage_Damage_A7FB87CA4F0E8DADA9401CAE19176FEF;    // 0x648(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                Damage__Direction_A7FB87CA4F0E8DADA9401CAE19176FEF; // 0x64C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2563[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    Damage;                                            // 0x650(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	float                                        Dissolve_Spawn_Effect_Dissolve_Animation_F2F436E64E3174CB825010A5C4EE17A0; // 0x658(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                Dissolve_Spawn_Effect__Direction_F2F436E64E3174CB825010A5C4EE17A0; // 0x65C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2564[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    Dissolve_Spawn_Effect;                             // 0x660(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UBP_ThirdPersonCharacter_C*            PlayerCharacter_Reference;                         // 0x668(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         Warned_;                                           // 0x670(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Start_Attacking;                                   // 0x671(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsDead_;                                           // 0x672(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2565[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               Spawn_Origin;                                      // 0x678(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Health;                                            // 0x690(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         RotateHealthToPlayer;                              // 0x698(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2566[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       DamageReceived;                                    // 0x6A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       MaxHealth;                                         // 0x6A8(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       DamageToDo;                                        // 0x6B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_Ai_Demo_C* GetDefaultObj();

	void ApplyDamage(TArray<class UActor*>& Temp_object_Variable, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FHitResult& CallFunc_SphereTraceSingle_OutHit, bool CallFunc_SphereTraceSingle_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class UActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, class FName CallFunc_BreakHitResult_BoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, float CallFunc_ApplyPointDamage_ReturnValue, float CallFunc_ApplyPointDamage_BaseDamage_ImplicitCast);
	void SetSpeed(double CallFunc_RandomFloatInRange_ReturnValue, float K2Node_VariableSet_MaxWalkSpeed_ImplicitCast);
	void WarnFriends(int32 Temp_int_Array_Index_Variable, TArray<class UActor*>& Temp_object_Variable, int32 Temp_int_Loop_Counter_Variable, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, TArray<enum class EObjectTypeQuery>& K2Node_MakeArray_Array, TArray<class UActor*>& CallFunc_SphereOverlapActors_OutActors, bool CallFunc_SphereOverlapActors_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UActor* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class UBP_Ai_Demo_C* K2Node_DynamicCast_AsBP_Ai_Demo, bool K2Node_DynamicCast_bSuccess);
	void Dissolve_Spawn_Effect__FinishedFunc();
	void Dissolve_Spawn_Effect__UpdateFunc();
	void Damage__FinishedFunc();
	void Damage__UpdateFunc();
	void ReceiveBeginPlay();
	void Attack_Player(class UBP_ThirdPersonCharacter_C* PlayerCharacter_Reference);
	void Warn_AI(class UBP_ThirdPersonCharacter_C* PlayerCharacter_Reference);
	void MultiCastDeath(const struct FVector& Origin);
	void GoBackHome();
	void Dissolve();
	void ReceiveTick(float DeltaSeconds);
	void BndEvt__PawnSensing_K2Node_ComponentBoundEvent_0_SeePawnDelegate__DelegateSignature(class UPawn* Pawn);
	void MultiDamageEffects(double Damage);
	void ReceivePointDamage(float Damage, class UDamageType* DamageType, const struct FVector& HitLocation, const struct FVector& HitNormal, class UPrimitiveComponent* HitComponent, class FName BoneName, const struct FVector& ShotFromDirection, class UController* InstigatedBy, class UActor* DamageCauser, struct FHitResult& HitInfo);
	void Find_Location_to_walk_to();
	void ExecuteUbergraph_BP_Ai_Demo(int32 EntryPoint, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_IsClosed_Variable, const struct FVector& K2Node_CustomEvent_Origin, class UBP_ThirdPersonCharacter_C* K2Node_CustomEvent_PlayerCharacter_Reference, class UBP_ThirdPersonCharacter_C* K2Node_CustomEvent_PlayerCharacter_Reference_1, float K2Node_Event_DeltaSeconds, class UPawn* K2Node_ComponentBoundEvent_Pawn, double K2Node_CustomEvent_damage, float K2Node_Event_Damage, class UDamageType* K2Node_Event_DamageType, const struct FVector& K2Node_Event_HitLocation, const struct FVector& K2Node_Event_HitNormal, class UPrimitiveComponent* K2Node_Event_HitComponent, class FName K2Node_Event_BoneName, const struct FVector& K2Node_Event_ShotFromDirection, class UController* K2Node_Event_InstigatedBy, class UActor* K2Node_Event_DamageCauser, const struct FHitResult& K2Node_Event_HitInfo, const struct FVector& CallFunc_VLerp_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, class UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue, class UWB_HealthBar_C* K2Node_DynamicCast_AsWB_Health_Bar, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, const struct FHitResult& CallFunc_K2_SetRelativeLocation_SweepHitResult, double CallFunc_Add_DoubleDouble_ReturnValue, class FText CallFunc_Conv_DoubleToText_ReturnValue, float CallFunc_SetPercent_InPercent_ImplicitCast);
};

}


