#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x167 (0x448 - 0x2E1)
// BlueprintGeneratedClass AI_Team.AI_Team_C
class UAI_Team_C : public UAI_LevelAllTeam_C
{
public:
	uint8                                        Pad_42D6[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2E8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UPaperSpriteComponent*                 Ico;                                               // 0x2F0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            IsSeeDispatcher;                                   // 0x2F8(0x10)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int32                                        AI_Say1s1;                                         // 0x308(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_42D7[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UTargetPoint*>                  SpawnLoc;                                          // 0x310(0x10)(Edit, BlueprintVisible, Net, DisableEditOnTemplate)
	class UBehaviorTree*                         Behavior_Tree;                                     // 0x320(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<class UAI_AnimMan_C*>                 Bot;                                               // 0x328(0x10)(Edit, BlueprintVisible, Net, DisableEditOnTemplate, DisableEditOnInstance)
	bool                                         SpawnBitti;                                        // 0x338(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_42D8[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UBP_Patrol_C*>                  Patrols;                                           // 0x340(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate)
	class UTargetPoint*                          TargetRef;                                         // 0x350(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class USkeletalMesh*                         Mesh;                                              // 0x358(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	enum class EDifficultyEnum                   Difficult;                                         // 0x360(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_42DA[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        EnemyMesh;                                         // 0x364(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UTargetPoint*>                  TargetArray;                                       // 0x368(0x10)(Edit, BlueprintVisible, Net, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<class UBP_Patrol_C*>                  PatrolsReset;                                      // 0x378(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	class UActor*                                Target;                                            // 0x388(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TArray<class USkeletalMesh*>                 HeavyAi;                                           // 0x390(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class USkeletalMesh*>                 MediumEnemy;                                       // 0x3A0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class USkeletalMesh*>                 LightEnemy;                                        // 0x3B0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         AudioCover;                                        // 0x3C0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_42DC[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAI_LevelAllTeam_C*                    AllTeamRef;                                        // 0x3C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FVector                               AudioLocation;                                     // 0x3D0(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Sprint;                                            // 0x3E8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsAiming;                                          // 0x3E9(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_42DD[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class USkeletalMesh*>                 ZombieMesh;                                        // 0x3F0(0x10)(Edit, BlueprintVisible, Net, DisableEditOnInstance)
	TArray<class UAI_Steve_C*>                   BasicZombie;                                       // 0x400(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<class USceneComponent*>               SpawnRefArray;                                     // 0x410(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	class USceneComponent*                       SpawnRef;                                          // 0x420(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UAI_BasicZombieTeam_C*                 As_AI_Basic_Zombie_Team;                           // 0x428(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class USkeletalMesh*                         MediumMesh;                                        // 0x430(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class USkeletalMesh*                         HeavyMesh;                                         // 0x438(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class USkeletalMesh*                         LightMesh;                                         // 0x440(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UAI_Team_C* GetDefaultObj();

	void GetNextLocation(struct FVector* Location);
	void GetisDutyEnabled(bool* DutyEnabled);
	void GetLocation(struct FVector* CharacterLoc);
	void UserConstructionScript(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UTargetPoint* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue);
	void AiSee();
	void ZombieSpawn();
	void AiSpawnMulti();
	void AiSpawnServ();
	void AiSeeEventMulti(class UActor* TargetActor, bool See);
	void AiSeeEventServ(class UActor* TargetActor, bool See);
	void PatrolEvent();
	void PatrolEventServ();
	void ReceiveBeginPlay();
	void OnActorBeginOverlap_Event(class UActor* OverlappedActor, class UActor* OtherActor);
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_AI_Team(int32 EntryPoint, class FName CallFunc_MakeLiteralName_ReturnValue, class UTargetPoint* CallFunc_Array_Random_OutItem, int32 CallFunc_Array_Random_OutIndex, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Array_RemoveItem_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool Temp_bool_Variable, class UPawn* CallFunc_SpawnAIFromClass_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class UAI_AnimMan_C* K2Node_DynamicCast_AsAI_Anim_Man, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_Add_ReturnValue, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue_2, class FName CallFunc_MakeLiteralName_ReturnValue_1, int32 Temp_int_Variable_1, class UTargetPoint* CallFunc_Array_Random_OutItem_1, int32 CallFunc_Array_Random_OutIndex_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Subtract_IntInt_ReturnValue_1, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_Array_RemoveItem_ReturnValue_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_2, double CallFunc_RandomFloatInRange_ReturnValue, class UPawn* CallFunc_SpawnAIFromClass_ReturnValue_1, int32 CallFunc_FTrunc_ReturnValue, class UAI_AnimMan_C* K2Node_DynamicCast_AsAI_Anim_Man_1, bool K2Node_DynamicCast_bSuccess_1, int32 CallFunc_Array_Add_ReturnValue_3, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_1, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Array_Get_Item, int32 CallFunc_Add_IntInt_ReturnValue_2, const class FString& CallFunc_Conv_IntToString_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue_2, class UPawn* CallFunc_SpawnAIFromClass_ReturnValue_2, bool CallFunc_LessEqual_IntInt_ReturnValue_1, class UAI_AnimMan_C* K2Node_DynamicCast_AsAI_Anim_Man_2, bool K2Node_DynamicCast_bSuccess_2, int32 CallFunc_Array_Add_ReturnValue_4, int32 CallFunc_Array_Add_ReturnValue_5, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue_2, class FName CallFunc_MakeLiteralName_ReturnValue_2, bool CallFunc_HasAuthority_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class USkeletalMesh* CallFunc_Array_Get_Item_1, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_3, class USkeletalMesh* CallFunc_Array_Get_Item_2, bool CallFunc_Array_RemoveItem_ReturnValue_2, class UTargetPoint* CallFunc_Array_Random_OutItem_2, int32 CallFunc_Array_Random_OutIndex_2, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_4, int32 Temp_int_Array_Index_Variable_1, class USkeletalMesh* CallFunc_Array_Random_OutItem_3, int32 CallFunc_Array_Random_OutIndex_3, bool K2Node_SwitchEnum_CmpSuccess, double CallFunc_RandomFloatInRange_ReturnValue_1, double CallFunc_RandomFloatInRange_ReturnValue_2, int32 CallFunc_FTrunc_ReturnValue_1, int32 CallFunc_FTrunc_ReturnValue_2, class UAI_AnimMan_C* CallFunc_Array_Get_Item_3, int32 CallFunc_Array_Length_ReturnValue_2, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue_3, bool CallFunc_Less_IntInt_ReturnValue_1, class UActor* K2Node_CustomEvent_targetActor_1, bool K2Node_CustomEvent_See_1, class UActor* K2Node_CustomEvent_targetActor, bool K2Node_CustomEvent_See, class FName CallFunc_MakeLiteralName_ReturnValue_3, int32 CallFunc_Array_Length_ReturnValue_3, int32 Temp_int_Array_Index_Variable_2, int32 CallFunc_RandomIntegerInRange_ReturnValue, int32 CallFunc_Array_Get_Item_4, class UBP_Patrol_C* CallFunc_Array_Get_Item_5, int32 CallFunc_Add_IntInt_ReturnValue_5, TScriptInterface<class UCLM_BPI_NPC_C> CallFunc_GetNextLocation_self_CastInput, const struct FVector& CallFunc_GetNextLocation_location, const class FString& CallFunc_Conv_IntToString_ReturnValue_1, bool Temp_bool_Variable_1, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_1, class UActor* K2Node_CustomEvent_OverlappedActor, class UActor* K2Node_CustomEvent_OtherActor, bool CallFunc_ActorHasTag_ReturnValue, int32 Temp_int_Variable_2, int32 Temp_int_Loop_Counter_Variable_2, bool CallFunc_Less_IntInt_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue_6, bool CallFunc_LessEqual_IntInt_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue_7, bool Temp_bool_Variable_2, bool CallFunc_Not_PreBool_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue_2, float K2Node_Event_DeltaSeconds);
	void IsSeeDispatcher__DelegateSignature();
};

}


