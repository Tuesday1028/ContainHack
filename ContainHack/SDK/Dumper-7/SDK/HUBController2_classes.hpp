#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x880 - 0x850)
// BlueprintGeneratedClass HUBController2.HUBController2_C
class UHUBController2_C : public UPlayerController
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x850(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UObject*                               As_Steam_GI;                                       // 0x858(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class FString                                Level_Name;                                        // 0x860(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class UObject*                               HubRef;                                            // 0x870(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class USGBaseGameState_C*                    As_SGBase_Game_State;                              // 0x878(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UHUBController2_C* GetDefaultObj();

	void OnFailure_838A54F34C4138BE6D5A1A8494295952();
	void OnSuccess_838A54F34C4138BE6D5A1A8494295952();
	void Kick();
	void AddPlayer(bool Fail, class FText Player, class UTexture2D* Avatar, int32 PlayerIndex);
	void ClearPlayerList();
	void ClientServerTravel();
	void ReceiveBeginPlay();
	void ServerStartGame();
	void ExecuteUbergraph_HUBController2(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UDestroySessionCallbackProxy* CallFunc_DestroySession_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool K2Node_CustomEvent_fail, class FText K2Node_CustomEvent_Player, class UTexture2D* K2Node_CustomEvent_Avatar, int32 K2Node_CustomEvent_PlayerIndex);
};

}


