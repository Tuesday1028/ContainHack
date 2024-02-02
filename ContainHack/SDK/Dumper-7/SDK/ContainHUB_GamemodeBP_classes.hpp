#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x3A0 - 0x378)
// BlueprintGeneratedClass ContainHUB_GamemodeBP.ContainHUB_GamemodeBP_C
class UContainHUB_GamemodeBP_C : public UGameMode
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x378(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x380(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                         DoorIsOpen;                                        // 0x388(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_257D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UPlayerController*>             New_Player;                                        // 0x390(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UContainHUB_GamemodeBP_C* GetDefaultObj();

	void ServerTravel(const class FString& InURL, bool bAbsolute, bool bShouldSkipGameNotify);
	void Server_GoToMission(const class FString& Mission);
	void K2_OnLogout(class UController* ExitingController);
	void Restart();
	void HandleStartingNewPlayer(class UPlayerController* NewPlayer);
	void K2_PostLogin(class UPlayerController* NewPlayer);
	void ExecuteUbergraph_ContainHUB_GamemodeBP(int32 EntryPoint, class UPlayerController* K2Node_Event_NewPlayer, int32 Temp_int_Loop_Counter_Variable, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Array_Index_Variable_2, int32 Temp_int_Loop_Counter_Variable_2, int32 CallFunc_Add_IntInt_ReturnValue_2, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable_3, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable_3, int32 Temp_int_Loop_Counter_Variable_4, int32 CallFunc_Add_IntInt_ReturnValue_3, int32 CallFunc_Add_IntInt_ReturnValue_4, int32 Temp_int_Loop_Counter_Variable_5, int32 CallFunc_Add_IntInt_ReturnValue_5, int32 Temp_int_Array_Index_Variable_4, const class FString& K2Node_CustomEvent_InURL, bool K2Node_CustomEvent_bAbsolute, bool K2Node_CustomEvent_bShouldSkipGameNotify, const class FString& K2Node_CustomEvent_Mission, bool CallFunc_ServerTravel_ReturnValue, bool CallFunc_ServerTravel_ReturnValue_1, class UGameStateBase* CallFunc_GetGameState_ReturnValue, class UGameStateBase* CallFunc_GetGameState_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UPlayerState* CallFunc_Array_Get_Item, class UPlayerController* CallFunc_GetPlayerController_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, TArray<class UCharacter*>& CallFunc_GetAllActorsOfClass_OutActors, int32 Temp_int_Array_Index_Variable_5, class UCharacter* CallFunc_Array_Get_Item_1, class UPlayerState* CallFunc_Array_Get_Item_2, class UPlayerController* CallFunc_GetPlayerController_ReturnValue_1, class UContainHUB_PlayerControllerBP_C* K2Node_DynamicCast_AsContain_HUB_Player_Controller_BP, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_Length_ReturnValue_2, class UGameStateBase* CallFunc_GetGameState_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_2, class UPlayerState* CallFunc_Array_Get_Item_3, int32 CallFunc_Array_Length_ReturnValue_3, class UPlayerController* CallFunc_GetPlayerController_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_3, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class UActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class UDefaultPawn* CallFunc_FinishSpawningActor_ReturnValue, class UController* K2Node_Event_ExitingController, class UPlayerController* CallFunc_Array_Get_Item_4, int32 CallFunc_Array_Length_ReturnValue_4, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_4, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Array_RemoveItem_ReturnValue, class UPlayerController* CallFunc_Array_Get_Item_5, int32 CallFunc_Array_Length_ReturnValue_5, enum class ENetRole CallFunc_GetLocalRole_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_5, bool CallFunc_EqualEqual_ByteByte_ReturnValue, TArray<class UPlayerStart*>& CallFunc_GetAllActorsOfClass_OutActors_1, class UPlayerStart* CallFunc_Array_Get_Item_6, class UPlayerController* K2Node_Event_NewPlayer_1, int32 CallFunc_Array_Add_ReturnValue, TArray<class UPlayerStart*>& CallFunc_GetAllActorsOfClass_OutActors_2, class UPlayerStart* CallFunc_Array_Get_Item_7, const struct FTransform& CallFunc_GetTransform_ReturnValue, class UActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1, class UB_DemoCharacter_Child_C* CallFunc_FinishSpawningActor_ReturnValue_1);
};

}


