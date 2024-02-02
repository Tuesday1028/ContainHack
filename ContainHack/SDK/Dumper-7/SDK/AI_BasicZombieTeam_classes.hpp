#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x60 (0x2F0 - 0x290)
// BlueprintGeneratedClass AI_BasicZombieTeam.AI_BasicZombieTeam_C
class UAI_BasicZombieTeam_C : public UActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x290(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UPaperSpriteComponent*                 PaperSprite;                                       // 0x298(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       SpawnScene;                                        // 0x2A0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	int32                                        AI_Say1s1;                                         // 0x2A8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_313D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UTargetPoint*>                  SpawnRefArray;                                     // 0x2B0(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, ExposeOnSpawn)
	class UTargetPoint*                          SpawnRef;                                          // 0x2C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TArray<class UAI_Steve_C*>                   BasicZombie;                                       // 0x2C8(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	int32                                        EnemyMesh;                                         // 0x2D8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_313E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class USkeletalMesh*>                 ZombieMesh;                                        // 0x2E0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UAI_BasicZombieTeam_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void ZombieMulti();
	void ZombiSpawnServ();
	void ExecuteUbergraph_AI_BasicZombieTeam(int32 EntryPoint, class UAI_Steve_C* CallFunc_Array_Get_Item, int32 CallFunc_RandomIntegerInRange_ReturnValue, class USkeletalMesh* CallFunc_Array_Get_Item_1, int32 CallFunc_Subtract_IntInt_ReturnValue, bool Temp_bool_Variable, bool CallFunc_Not_PreBool_ReturnValue, class UAI_Steve_C* CallFunc_Array_Get_Item_2, class UTargetPoint* CallFunc_Array_Random_OutItem, int32 CallFunc_Array_Random_OutIndex, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UPawn* CallFunc_SpawnAIFromClass_ReturnValue, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
};

}


