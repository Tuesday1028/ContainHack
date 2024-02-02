#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x39 (0x2C9 - 0x290)
// BlueprintGeneratedClass BP_D5.BP_D5_C
class UBP_D5_C : public UActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x290(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UAudioComponent*                       SFX_airlockclosing_Cue;                            // 0x298(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       SFX_airlockopening_Cue;                            // 0x2A0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                SkeletalMesh;                                      // 0x2A8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                         Box;                                               // 0x2B0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  D5_frame;                                          // 0x2B8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	double                                       AnimationTime;                                     // 0x2C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         DoesTrigger;                                       // 0x2C8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_D5_C* GetDefaultObj();

	void OpenDoor();
	void OpenDoor_Server();
	void CloseDoor();
	void CloseDoor_Server();
	void ExecuteUbergraph_BP_D5(int32 EntryPoint, float CallFunc_GetPosition_ReturnValue, float CallFunc_GetPosition_ReturnValue_1, class UGameStateBase* CallFunc_GetGameState_ReturnValue, class UContainGameState_C* K2Node_DynamicCast_AsContain_Game_State, bool K2Node_DynamicCast_bSuccess, float CallFunc_SetPosition_InPos_ImplicitCast, float CallFunc_SetPosition_InPos_ImplicitCast_1, double K2Node_VariableSet_AnimationTime_ImplicitCast, double K2Node_VariableSet_AnimationTime_ImplicitCast_1);
};

}


