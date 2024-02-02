#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x158 (0x488 - 0x330)
// BlueprintGeneratedClass B_DemoGameModeBase.B_DemoGameModeBase_C
class UB_DemoGameModeBase_C : public UContainGameModeBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x330(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x338(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<class UB_DemoController_C*>           Player_Controller;                                 // 0x340(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<class UCharacter*>                    PlayerList;                                        // 0x350(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	class FString                                MapUrl;                                            // 0x360(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	int32                                        PlayerIndex;                                       // 0x370(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_23A9[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UB_DemoCharacter_Child_C*              Character;                                         // 0x378(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UB_DemoController_C*                   Cont;                                              // 0x380(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UGI_Contain_C*                         As_GI_Contain;                                     // 0x388(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TArray<class UPlayerStart*>                  PlayerStart;                                       // 0x390(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	struct FTransform                            PlayerLoc;                                         // 0x3A0(0x60)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class USaveGame*>                     SaveFile;                                          // 0x400(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         HostSpawned;                                       // 0x410(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_23B0[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UPlayerStart*>                  PlayerStartActors;                                 // 0x418(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<class UPlayerController*>             PController;                                       // 0x428(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	bool                                         HostConnected;                                     // 0x438(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_23B4[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UB_DemoController_C*>           AllPC_s;                                           // 0x440(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<bool>                                 IsPlayerReady;                                     // 0x450(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UB_DemoController_C*>           AllPC_s2;                                          // 0x460(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	int32                                        PlayerNumber;                                      // 0x470(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_23BA[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UB_DemoController_C*>           AllPC_s_InLobby;                                   // 0x478(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UB_DemoGameModeBase_C* GetDefaultObj();

	class UActor* ChoosePlayerStart(class UController* Player, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UPlayerStart*>& CallFunc_GetAllActorsOfClass_OutActors, int32 CallFunc_Array_Length_ReturnValue, class UPlayerStart* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_NotEqual_NameName_ReturnValue);
	void OnFailure_D020F9824F4428AF5B061EAAEA38E652();
	void OnSuccess_D020F9824F4428AF5B061EAAEA38E652();
	void ReceiveBeginPlay();
	void UpdateServer(bool PlayerReady);
	void KickPlayer(int32 Index);
	void K2_PostLogin(class UPlayerController* NewPlayer);
	void K2_OnLogout(class UController* ExitingController);
	void SetPlayerReady(class UB_DemoController_C* PlayerController, bool IsReady);
	void MaxPlayers(int32 Value);
	void ExecuteUbergraph_B_DemoGameModeBase(int32 EntryPoint, const struct FSessionPropertyKeyPair& CallFunc_MakeLiteralSessionPropertyInt_ReturnValue, TArray<struct FSessionPropertyKeyPair>& K2Node_MakeArray_Array, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_2, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UGI_Contain_C* K2Node_DynamicCast_AsGI_Contain, bool K2Node_DynamicCast_bSuccess, TArray<class UPlayerStart*>& CallFunc_GetAllActorsOfClass_OutActors, bool K2Node_CustomEvent_PlayerReady, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_2, int32 K2Node_CustomEvent_Index, int32 CallFunc_Add_IntInt_ReturnValue_2, class UPlayerController* K2Node_Event_NewPlayer, int32 Temp_int_Loop_Counter_Variable_3, class UB_DemoController_C* K2Node_DynamicCast_AsB_Demo_Controller, bool K2Node_DynamicCast_bSuccess_1, int32 CallFunc_Add_IntInt_ReturnValue_3, bool CallFunc_HasAuthority_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, class UB_DemoController_C* CallFunc_Array_Get_Item, class UB_DemoController_C* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue, const struct FBPUniqueNetId& CallFunc_GetUniqueNetID_UniqueNetId, bool CallFunc_Less_IntInt_ReturnValue, enum class EBlueprintAsyncResultSwitch CallFunc_GetSteamFriendAvatar_Result, class UTexture2D* CallFunc_GetSteamFriendAvatar_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, const class FString& CallFunc_GetPlayerName_PlayerName, int32 CallFunc_Array_Length_ReturnValue_1, class FText CallFunc_Conv_StringToText_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_2, class UB_DemoController_C* CallFunc_Array_Get_Item_2, class UController* K2Node_Event_ExitingController, class UB_DemoController_C* CallFunc_Array_Get_Item_3, int32 CallFunc_Array_Length_ReturnValue_3, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_3, bool CallFunc_BooleanAND_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UB_DemoController_C* K2Node_CustomEvent_PlayerController, bool K2Node_CustomEvent_IsReady, int32 CallFunc_Array_Find_ReturnValue, bool Temp_bool_Variable, int32 CallFunc_Array_Add_ReturnValue_1, int32 Temp_int_Array_Index_Variable_3, int32 K2Node_CustomEvent_Value, class UB_DemoController_C* CallFunc_Array_Get_Item_4, int32 CallFunc_GetSessionSettings_NumConnections, int32 CallFunc_GetSessionSettings_NumPrivateConnections, bool CallFunc_GetSessionSettings_bIsLAN, bool CallFunc_GetSessionSettings_bIsDedicated, bool CallFunc_GetSessionSettings_bAllowInvites, bool CallFunc_GetSessionSettings_bAllowJoinInProgress, bool CallFunc_GetSessionSettings_bIsAnticheatEnabled, int32 CallFunc_GetSessionSettings_BuildUniqueID, TArray<struct FSessionPropertyKeyPair>& CallFunc_GetSessionSettings_ExtraSettings, enum class EBlueprintResultSwitch CallFunc_GetSessionSettings_Result, TArray<struct FSessionPropertyKeyPair>& CallFunc_AddOrModifyExtraSettings_ModifiedSettingsArray, bool K2Node_SwitchEnum_CmpSuccess_1, class UUpdateSessionCallbackProxyAdvanced* CallFunc_UpdateSession_ReturnValue, bool CallFunc_IsValid_ReturnValue);
};

}


