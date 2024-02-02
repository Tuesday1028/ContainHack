#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x2D0 (0x510 - 0x240)
// BlueprintGeneratedClass GI_Contain.GI_Contain_C
class UGI_Contain_C : public UAdvancedFriendsGameInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x240(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                         Players;                                           // 0x248(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_386B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UB_DemoController_C*>           Player_Controller;                                 // 0x250(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	int32                                        Team;                                              // 0x260(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_386C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                LevelName;                                         // 0x268(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                         RestartLevel;                                      // 0x278(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_386D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ConncetClients;                                    // 0x27C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                ServerName;                                        // 0x280(0x10)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class FString                                ServerMap;                                         // 0x290(0x10)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	int32                                        ServerSlots;                                       // 0x2A0(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsPrivate;                                         // 0x2A4(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_386E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Password;                                          // 0x2A8(0x10)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class UDiscordRpc*                           DiscordRef;                                        // 0x2B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TArray<class FText>                          ControlsSave;                                      // 0x2C0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	class USettings_SG_C*                        SG_Settings;                                       // 0x2D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class FString                                Application_Id;                                    // 0x2D8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	int32                                        Num_Connected_Players;                             // 0x2E8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3870[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FIntPoint>                     Resolutions;                                       // 0x2F0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UB_DemoGameModeBase_C*                 As_B_Demo_Game_Mode_Base;                          // 0x300(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class FString                                MapUrl;                                            // 0x308(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	struct FBlueprintSessionResult               Server;                                            // 0x318(0x120)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FString                                SaveOptionsName;                                   // 0x438(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class FString                                SaveOptions;                                       // 0x448(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	enum class E_SoundChannel                    E_SoundChannel;                                    // 0x458(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         MissionSelected;                                   // 0x459(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3871[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Level;                                             // 0x460(0x10)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	TArray<bool>                                 Inside;                                            // 0x470(0x10)(Edit, BlueprintVisible, Net, DisableEditOnInstance)
	class UHub_Loading_C*                        HubLoadingWidget;                                  // 0x480(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         PauseWidgetActive;                                 // 0x488(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IntroFinished;                                     // 0x489(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bIsNewStarted;                                     // 0x48A(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsHoldToAim;                                       // 0x48B(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsDisconnect;                                      // 0x48C(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         NetworkMapEnable;                                  // 0x48D(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         InGame;                                            // 0x48E(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3873[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_AIData                             AIDataStruct;                                      // 0x490(0x80)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UGI_Contain_C* GetDefaultObj();

	void IsNewGame(bool* bIsNewStarted);
	void RichPresence(const class FString& State, const class FString& Details, bool* Return, bool CallFunc_RichPresenceFunc_Return);
	void LoadOptions();
	void SetVolume(enum class E_SoundChannel E_SoundChannel, double Value);
	void RichPresenceFunc(const class FString& State, const class FString& Details, bool* Return);
	void Completed_FAC12AEC4AFB5F78ABFC698B63FA21F5(class USaveGame* SaveGame, bool bSuccess);
	void Completed_6E77C7F546781CF5BA59648A2BCEDE23(class USaveGame* SaveGame, bool bSuccess);
	void OnFailure_3B6F60A84B8B34B6CF518EB260279949();
	void OnSuccess_3B6F60A84B8B34B6CF518EB260279949();
	void OnFailure_B8F82BCB4220B03FFA295D9DF90CBCEF();
	void OnSuccess_B8F82BCB4220B03FFA295D9DF90CBCEF();
	void OnFailure_D7F06B6D498F75614BCCE3A843EBABCA();
	void OnSuccess_D7F06B6D498F75614BCCE3A843EBABCA();
	void SaveControlEvent();
	void SettingsEvent();
	void Travel(int32 NumConnectedPlayers, const class FString& Map);
	void LoadControlEvent();
	void DiscordEvent();
	void ReceiveShutdown();
	void ReceiveInit();
	void GraphicSabitleme();
	void LevelLoading(const class FString& InputPin);
	void CreateLobby(const class FString& ServerName, const class FString& ServerMap, int32 ServerSlots, bool IsPrivate, const class FString& Password);
	void LanguageSettings();
	void MissionEnabled();
	void Dooropen();
	void LoadingWidget_Server(const class FString& InputPin);
	void HubReloading();
	void EndGameWidget();
	void EndGameWidget_Server();
	void HandleNetworkError(enum class ENetworkFailure FailureType, bool bIsServer);
	void IsHub();
	void IsHub_Server();
	void OnSessionInviteReceived(int32 LocalPlayerNum, const struct FBPUniqueNetId& PersonInviting, const class FString& AppID, struct FBlueprintSessionResult& SessionToJoin);
	void OnSessionInviteAccepted(int32 LocalPlayerNum, const struct FBPUniqueNetId& PersonInvited, struct FBlueprintSessionResult& SessionToJoin);
	void EndgameWidgetStandalone();
	void SV_RegularMode();
	void SV_HardcoreMode();
	void SV_ContainMode();
	void ExecuteUbergraph_GI_Contain(int32 EntryPoint, class UDiscordRpc* CallFunc_SpawnObject_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UHub_Loading_C* CallFunc_Create_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, const struct FS_AIData& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, const struct FS_AIData& CallFunc_GetDataTableRowFromName_OutRow_1, bool CallFunc_GetDataTableRowFromName_ReturnValue_1, const struct FS_AIData& CallFunc_GetDataTableRowFromName_OutRow_2, bool CallFunc_GetDataTableRowFromName_ReturnValue_2, int32 Temp_int_Array_Index_Variable, class UAsyncActionHandleSaveGame* CallFunc_AsyncSaveGameToSlot_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class USettings_SG_C* CallFunc_CreateSaveGameObject_ReturnValue, bool CallFunc_RichPresenceFunc_Return, int32 K2Node_CustomEvent_NumConnectedPlayers, const class FString& K2Node_CustomEvent_Map, bool CallFunc_ServerTravel_ReturnValue, class UAsyncActionHandleSaveGame* CallFunc_AsyncLoadGameFromSlot_ReturnValue, class USaveGame* Temp_object_Variable, class USettings_SG_C* K2Node_DynamicCast_AsSettings_SG, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue_2, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool Temp_bool_Variable, class UPlayerController* CallFunc_GetPlayerController_ReturnValue, const struct FSessionPropertyKeyPair& CallFunc_MakeLiteralSessionPropertyString_ReturnValue, const struct FSessionPropertyKeyPair& CallFunc_MakeLiteralSessionPropertyBool_ReturnValue, const struct FSessionPropertyKeyPair& CallFunc_MakeLiteralSessionPropertyString_ReturnValue_1, class USaveGame* Temp_object_Variable_1, int32 Temp_int_Array_Index_Variable_1, TArray<struct FIntPoint>& CallFunc_GetSupportedFullscreenResolutions_Resolutions, bool CallFunc_GetSupportedFullscreenResolutions_ReturnValue, const struct FIntPoint& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue_1, class UGameModeBase* CallFunc_GetGameMode_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, class UB_DemoGameModeBase_C* K2Node_DynamicCast_AsB_Demo_Game_Mode_Base, bool K2Node_DynamicCast_bSuccess_1, const class FString& K2Node_CustomEvent_InputPin_1, int32 Temp_int_Loop_Counter_Variable_1, const class FString& K2Node_CustomEvent_ServerName, const class FString& K2Node_CustomEvent_ServerMap, int32 K2Node_CustomEvent_ServerSlots, bool K2Node_CustomEvent_isPrivate, const class FString& K2Node_CustomEvent_password, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, class USaveGame* K2Node_CustomEvent_SaveGame_1, bool K2Node_CustomEvent_bSuccess_1, bool Temp_bool_Variable_1, const class FString& K2Node_CustomEvent_InputPin, int32 Temp_int_Array_Index_Variable_2, int32 Temp_int_Array_Index_Variable_3, class FName CallFunc_Array_Get_Item_1, const struct FSC_ControlSettings& CallFunc_GetDataTableRowFromName_OutRow_3, bool CallFunc_GetDataTableRowFromName_ReturnValue_3, const struct FSessionPropertyKeyPair& CallFunc_MakeLiteralSessionPropertyInt_ReturnValue, const struct FSessionPropertyKeyPair& CallFunc_MakeLiteralSessionPropertyInt_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_2, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_2, const struct FSessionPropertyKeyPair& CallFunc_MakeLiteralSessionPropertyString_ReturnValue_2, TArray<struct FSessionPropertyKeyPair>& K2Node_MakeArray_Array, class UCreateSessionCallbackProxyAdvanced* CallFunc_CreateAdvancedSession_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, TArray<class UEndGameWidget_C*>& CallFunc_GetAllWidgetsOfClass_FoundWidgets, class UEndGameWidget_C* CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_2, class USaveGame* K2Node_CustomEvent_SaveGame, bool K2Node_CustomEvent_bSuccess, const struct FSessionPropertyKeyPair& CallFunc_MakeLiteralSessionPropertyString_ReturnValue_3, TArray<struct FSessionPropertyKeyPair>& K2Node_MakeArray_Array_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, int32 CallFunc_GetSessionSettings_NumConnections, int32 CallFunc_GetSessionSettings_NumPrivateConnections, bool CallFunc_GetSessionSettings_bIsLAN, bool CallFunc_GetSessionSettings_bIsDedicated, bool CallFunc_GetSessionSettings_bAllowInvites, bool CallFunc_GetSessionSettings_bAllowJoinInProgress, bool CallFunc_GetSessionSettings_bIsAnticheatEnabled, int32 CallFunc_GetSessionSettings_BuildUniqueID, TArray<struct FSessionPropertyKeyPair>& CallFunc_GetSessionSettings_ExtraSettings, enum class EBlueprintResultSwitch CallFunc_GetSessionSettings_Result, bool K2Node_SwitchEnum_CmpSuccess, TArray<struct FSessionPropertyKeyPair>& CallFunc_AddOrModifyExtraSettings_ModifiedSettingsArray, class UUpdateSessionCallbackProxyAdvanced* CallFunc_UpdateSession_ReturnValue, bool CallFunc_IsValid_ReturnValue_4, enum class ENetworkFailure K2Node_Event_FailureType, bool K2Node_Event_bIsServer, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, const class FString& CallFunc_GetCurrentLevelName_ReturnValue, bool CallFunc_EqualEqual_StriStri_ReturnValue, int32 K2Node_Event_LocalPlayerNum_1, const struct FBPUniqueNetId& K2Node_Event_PersonInviting, const class FString& K2Node_Event_AppId, const struct FBlueprintSessionResult& K2Node_Event_SessionToJoin_1, const class FString& CallFunc_Conv_BoolToString_ReturnValue, int32 K2Node_Event_LocalPlayerNum, const struct FBPUniqueNetId& K2Node_Event_PersonInvited, const struct FBlueprintSessionResult& K2Node_Event_SessionToJoin, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, class UPlayerController* CallFunc_GetPlayerController_ReturnValue_1, class UJoinSessionCallbackProxy* CallFunc_JoinSession_ReturnValue, bool CallFunc_DoesSaveGameExist_ReturnValue, bool CallFunc_IsValid_ReturnValue_5, TArray<class UEndGameWidget_C*>& CallFunc_GetAllWidgetsOfClass_FoundWidgets_1, int32 Temp_int_Loop_Counter_Variable_3, class UEndGameWidget_C* CallFunc_Array_Get_Item_3, int32 CallFunc_Add_IntInt_ReturnValue_3, int32 CallFunc_Array_Length_ReturnValue_3, bool CallFunc_Less_IntInt_ReturnValue_3);
};

}


