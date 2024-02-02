#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GI_Contain.GI_Contain_C
// (None)

class UClass* UGI_Contain_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GI_Contain_C");

	return Clss;
}


// GI_Contain_C GI_Contain.Default__GI_Contain_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGI_Contain_C* UGI_Contain_C::GetDefaultObj()
{
	static class UGI_Contain_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGI_Contain_C*>(UGI_Contain_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GI_Contain.GI_Contain_C.IsNewGame
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bIsNewStarted                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGI_Contain_C::IsNewGame(bool* bIsNewStarted)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GI_Contain_C", "IsNewGame");

	Params::UGI_Contain_C_IsNewGame_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (bIsNewStarted != nullptr)
		*bIsNewStarted = Parms.bIsNewStarted;

}


// Function GI_Contain.GI_Contain_C.RichPresence
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      State                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      Details                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                               Return                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_RichPresenceFunc_Return                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGI_Contain_C::RichPresence(const class FString& State, const class FString& Details, bool* Return, bool CallFunc_RichPresenceFunc_Return)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GI_Contain_C", "RichPresence");

	Params::UGI_Contain_C_RichPresence_Params Parms{};

	Parms.State = State;
	Parms.Details = Details;
	Parms.CallFunc_RichPresenceFunc_Return = CallFunc_RichPresenceFunc_Return;

	UObject::ProcessEvent(Func, &Parms);

	if (Return != nullptr)
		*Return = Parms.Return;

}


// Function GI_Contain.GI_Contain_C.LoadOptions
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UGI_Contain_C::LoadOptions()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GI_Contain_C", "LoadOptions");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GI_Contain.GI_Contain_C.SetVolume
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class E_SoundChannel          E_SoundChannel                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGI_Contain_C::SetVolume(enum class E_SoundChannel E_SoundChannel, double Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GI_Contain_C", "SetVolume");

	Params::UGI_Contain_C_SetVolume_Params Parms{};

	Parms.E_SoundChannel = E_SoundChannel;
	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GI_Contain.GI_Contain_C.RichPresenceFunc
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      State                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      Details                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                               Return                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGI_Contain_C::RichPresenceFunc(const class FString& State, const class FString& Details, bool* Return)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GI_Contain_C", "RichPresenceFunc");

	Params::UGI_Contain_C_RichPresenceFunc_Params Parms{};

	Parms.State = State;
	Parms.Details = Details;

	UObject::ProcessEvent(Func, &Parms);

	if (Return != nullptr)
		*Return = Parms.Return;

}


// Function GI_Contain.GI_Contain_C.Completed_FAC12AEC4AFB5F78ABFC698B63FA21F5
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class USaveGame*                   SaveGame                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               bSuccess                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGI_Contain_C::Completed_FAC12AEC4AFB5F78ABFC698B63FA21F5(class USaveGame* SaveGame, bool bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GI_Contain_C", "Completed_FAC12AEC4AFB5F78ABFC698B63FA21F5");

	Params::UGI_Contain_C_Completed_FAC12AEC4AFB5F78ABFC698B63FA21F5_Params Parms{};

	Parms.SaveGame = SaveGame;
	Parms.bSuccess = bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GI_Contain.GI_Contain_C.Completed_6E77C7F546781CF5BA59648A2BCEDE23
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class USaveGame*                   SaveGame                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               bSuccess                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGI_Contain_C::Completed_6E77C7F546781CF5BA59648A2BCEDE23(class USaveGame* SaveGame, bool bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GI_Contain_C", "Completed_6E77C7F546781CF5BA59648A2BCEDE23");

	Params::UGI_Contain_C_Completed_6E77C7F546781CF5BA59648A2BCEDE23_Params Parms{};

	Parms.SaveGame = SaveGame;
	Parms.bSuccess = bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GI_Contain.GI_Contain_C.OnFailure_3B6F60A84B8B34B6CF518EB260279949
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGI_Contain_C::OnFailure_3B6F60A84B8B34B6CF518EB260279949()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GI_Contain_C", "OnFailure_3B6F60A84B8B34B6CF518EB260279949");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GI_Contain.GI_Contain_C.OnSuccess_3B6F60A84B8B34B6CF518EB260279949
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGI_Contain_C::OnSuccess_3B6F60A84B8B34B6CF518EB260279949()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GI_Contain_C", "OnSuccess_3B6F60A84B8B34B6CF518EB260279949");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GI_Contain.GI_Contain_C.OnFailure_B8F82BCB4220B03FFA295D9DF90CBCEF
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGI_Contain_C::OnFailure_B8F82BCB4220B03FFA295D9DF90CBCEF()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GI_Contain_C", "OnFailure_B8F82BCB4220B03FFA295D9DF90CBCEF");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GI_Contain.GI_Contain_C.OnSuccess_B8F82BCB4220B03FFA295D9DF90CBCEF
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGI_Contain_C::OnSuccess_B8F82BCB4220B03FFA295D9DF90CBCEF()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GI_Contain_C", "OnSuccess_B8F82BCB4220B03FFA295D9DF90CBCEF");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GI_Contain.GI_Contain_C.OnFailure_D7F06B6D498F75614BCCE3A843EBABCA
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGI_Contain_C::OnFailure_D7F06B6D498F75614BCCE3A843EBABCA()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GI_Contain_C", "OnFailure_D7F06B6D498F75614BCCE3A843EBABCA");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GI_Contain.GI_Contain_C.OnSuccess_D7F06B6D498F75614BCCE3A843EBABCA
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGI_Contain_C::OnSuccess_D7F06B6D498F75614BCCE3A843EBABCA()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GI_Contain_C", "OnSuccess_D7F06B6D498F75614BCCE3A843EBABCA");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GI_Contain.GI_Contain_C.SaveControlEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGI_Contain_C::SaveControlEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GI_Contain_C", "SaveControlEvent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GI_Contain.GI_Contain_C.SettingsEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGI_Contain_C::SettingsEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GI_Contain_C", "SettingsEvent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GI_Contain.GI_Contain_C.Travel
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NumConnectedPlayers                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      Map                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UGI_Contain_C::Travel(int32 NumConnectedPlayers, const class FString& Map)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GI_Contain_C", "Travel");

	Params::UGI_Contain_C_Travel_Params Parms{};

	Parms.NumConnectedPlayers = NumConnectedPlayers;
	Parms.Map = Map;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GI_Contain.GI_Contain_C.LoadControlEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGI_Contain_C::LoadControlEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GI_Contain_C", "LoadControlEvent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GI_Contain.GI_Contain_C.DiscordEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGI_Contain_C::DiscordEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GI_Contain_C", "DiscordEvent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GI_Contain.GI_Contain_C.ReceiveShutdown
// (Event, Public, BlueprintEvent)
// Parameters:

void UGI_Contain_C::ReceiveShutdown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GI_Contain_C", "ReceiveShutdown");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GI_Contain.GI_Contain_C.ReceiveInit
// (Event, Public, BlueprintEvent)
// Parameters:

void UGI_Contain_C::ReceiveInit()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GI_Contain_C", "ReceiveInit");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GI_Contain.GI_Contain_C.GraphicSabitleme
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGI_Contain_C::GraphicSabitleme()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GI_Contain_C", "GraphicSabitleme");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GI_Contain.GI_Contain_C.LevelLoading
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      InputPin                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UGI_Contain_C::LevelLoading(const class FString& InputPin)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GI_Contain_C", "LevelLoading");

	Params::UGI_Contain_C_LevelLoading_Params Parms{};

	Parms.InputPin = InputPin;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GI_Contain.GI_Contain_C.CreateLobby
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      ServerName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      ServerMap                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// int32                              ServerSlots                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsPrivate                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      Password                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UGI_Contain_C::CreateLobby(const class FString& ServerName, const class FString& ServerMap, int32 ServerSlots, bool IsPrivate, const class FString& Password)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GI_Contain_C", "CreateLobby");

	Params::UGI_Contain_C_CreateLobby_Params Parms{};

	Parms.ServerName = ServerName;
	Parms.ServerMap = ServerMap;
	Parms.ServerSlots = ServerSlots;
	Parms.IsPrivate = IsPrivate;
	Parms.Password = Password;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GI_Contain.GI_Contain_C.LanguageSettings
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UGI_Contain_C::LanguageSettings()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GI_Contain_C", "LanguageSettings");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GI_Contain.GI_Contain_C.MissionEnabled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UGI_Contain_C::MissionEnabled()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GI_Contain_C", "MissionEnabled");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GI_Contain.GI_Contain_C.dooropen
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UGI_Contain_C::Dooropen()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GI_Contain_C", "dooropen");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GI_Contain.GI_Contain_C.LoadingWidget_Server
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      InputPin                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UGI_Contain_C::LoadingWidget_Server(const class FString& InputPin)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GI_Contain_C", "LoadingWidget_Server");

	Params::UGI_Contain_C_LoadingWidget_Server_Params Parms{};

	Parms.InputPin = InputPin;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GI_Contain.GI_Contain_C.HubReloading
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGI_Contain_C::HubReloading()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GI_Contain_C", "HubReloading");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GI_Contain.GI_Contain_C.EndGameWidget
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:

void UGI_Contain_C::EndGameWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GI_Contain_C", "EndGameWidget");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GI_Contain.GI_Contain_C.EndGameWidget_Server
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:

void UGI_Contain_C::EndGameWidget_Server()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GI_Contain_C", "EndGameWidget_Server");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GI_Contain.GI_Contain_C.HandleNetworkError
// (Event, Public, BlueprintEvent)
// Parameters:
// enum class ENetworkFailure         FailureType                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bIsServer                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGI_Contain_C::HandleNetworkError(enum class ENetworkFailure FailureType, bool bIsServer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GI_Contain_C", "HandleNetworkError");

	Params::UGI_Contain_C_HandleNetworkError_Params Parms{};

	Parms.FailureType = FailureType;
	Parms.bIsServer = bIsServer;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GI_Contain.GI_Contain_C.IsHub
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:

void UGI_Contain_C::IsHub()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GI_Contain_C", "IsHub");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GI_Contain.GI_Contain_C.IsHub_Server
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:

void UGI_Contain_C::IsHub_Server()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GI_Contain_C", "IsHub_Server");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GI_Contain.GI_Contain_C.OnSessionInviteReceived
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// int32                              LocalPlayerNum                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FBPUniqueNetId              PersonInviting                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
// class FString                      AppID                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FBlueprintSessionResult     SessionToJoin                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGI_Contain_C::OnSessionInviteReceived(int32 LocalPlayerNum, const struct FBPUniqueNetId& PersonInviting, const class FString& AppID, struct FBlueprintSessionResult& SessionToJoin)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GI_Contain_C", "OnSessionInviteReceived");

	Params::UGI_Contain_C_OnSessionInviteReceived_Params Parms{};

	Parms.LocalPlayerNum = LocalPlayerNum;
	Parms.PersonInviting = PersonInviting;
	Parms.AppID = AppID;
	Parms.SessionToJoin = SessionToJoin;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GI_Contain.GI_Contain_C.OnSessionInviteAccepted
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// int32                              LocalPlayerNum                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FBPUniqueNetId              PersonInvited                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FBlueprintSessionResult     SessionToJoin                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGI_Contain_C::OnSessionInviteAccepted(int32 LocalPlayerNum, const struct FBPUniqueNetId& PersonInvited, struct FBlueprintSessionResult& SessionToJoin)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GI_Contain_C", "OnSessionInviteAccepted");

	Params::UGI_Contain_C_OnSessionInviteAccepted_Params Parms{};

	Parms.LocalPlayerNum = LocalPlayerNum;
	Parms.PersonInvited = PersonInvited;
	Parms.SessionToJoin = SessionToJoin;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GI_Contain.GI_Contain_C.EndgameWidgetStandalone
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGI_Contain_C::EndgameWidgetStandalone()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GI_Contain_C", "EndgameWidgetStandalone");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GI_Contain.GI_Contain_C.SV_RegularMode
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:

void UGI_Contain_C::SV_RegularMode()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GI_Contain_C", "SV_RegularMode");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GI_Contain.GI_Contain_C.SV_HardcoreMode
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:

void UGI_Contain_C::SV_HardcoreMode()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GI_Contain_C", "SV_HardcoreMode");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GI_Contain.GI_Contain_C.SV_ContainMode
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:

void UGI_Contain_C::SV_ContainMode()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GI_Contain_C", "SV_ContainMode");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GI_Contain.GI_Contain_C.ExecuteUbergraph_GI_Contain
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDiscordRpc*                 CallFunc_SpawnObject_ReturnValue                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UHub_Loading_C*              CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FS_AIData                   CallFunc_GetDataTableRowFromName_OutRow                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_AIData                   CallFunc_GetDataTableRowFromName_OutRow_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_AIData                   CallFunc_GetDataTableRowFromName_OutRow_2                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_2                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAsyncActionHandleSaveGame*  CallFunc_AsyncSaveGameToSlot_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USettings_SG_C*              CallFunc_CreateSaveGameObject_ReturnValue                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_RichPresenceFunc_Return                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_NumConnectedPlayers                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_CustomEvent_Map                                           (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_ServerTravel_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAsyncActionHandleSaveGame*  CallFunc_AsyncLoadGameFromSlot_ReturnValue                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class USaveGame*                   Temp_object_Variable                                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class USettings_SG_C*              K2Node_DynamicCast_AsSettings_SG                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FSessionPropertyKeyPair     CallFunc_MakeLiteralSessionPropertyString_ReturnValue            (None)
// struct FSessionPropertyKeyPair     CallFunc_MakeLiteralSessionPropertyBool_ReturnValue              (None)
// struct FSessionPropertyKeyPair     CallFunc_MakeLiteralSessionPropertyString_ReturnValue_1          (None)
// class USaveGame*                   Temp_object_Variable_1                                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FIntPoint>           CallFunc_GetSupportedFullscreenResolutions_Resolutions           (ReferenceParm)
// bool                               CallFunc_GetSupportedFullscreenResolutions_ReturnValue           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FIntPoint                   CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameModeBase*               CallFunc_GetGameMode_ReturnValue                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UB_DemoGameModeBase_C*       K2Node_DynamicCast_AsB_Demo_Game_Mode_Base                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_CustomEvent_InputPin_1                                    (ZeroConstructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_CustomEvent_ServerName                                    (ZeroConstructor, HasGetValueTypeHash)
// class FString                      K2Node_CustomEvent_ServerMap                                     (ZeroConstructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_ServerSlots                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_isPrivate                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_CustomEvent_password                                      (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USaveGame*                   K2Node_CustomEvent_SaveGame_1                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_CustomEvent_InputPin                                      (ZeroConstructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_3                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSC_ControlSettings         CallFunc_GetDataTableRowFromName_OutRow_3                        (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_3                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSessionPropertyKeyPair     CallFunc_MakeLiteralSessionPropertyInt_ReturnValue               (None)
// struct FSessionPropertyKeyPair     CallFunc_MakeLiteralSessionPropertyInt_ReturnValue_1             (None)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSessionPropertyKeyPair     CallFunc_MakeLiteralSessionPropertyString_ReturnValue_2          (None)
// TArray<struct FSessionPropertyKeyPair>K2Node_MakeArray_Array                                           (ConstParm, ReferenceParm)
// class UCreateSessionCallbackProxyAdvanced*CallFunc_CreateAdvancedSession_ReturnValue                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UEndGameWidget_C*>    CallFunc_GetAllWidgetsOfClass_FoundWidgets                       (ReferenceParm, ContainsInstancedReference)
// class UEndGameWidget_C*            CallFunc_Array_Get_Item_2                                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USaveGame*                   K2Node_CustomEvent_SaveGame                                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSessionPropertyKeyPair     CallFunc_MakeLiteralSessionPropertyString_ReturnValue_3          (None)
// TArray<struct FSessionPropertyKeyPair>K2Node_MakeArray_Array_1                                         (ReferenceParm)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_6                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetSessionSettings_NumConnections                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetSessionSettings_NumPrivateConnections                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetSessionSettings_bIsLAN                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetSessionSettings_bIsDedicated                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetSessionSettings_bAllowInvites                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetSessionSettings_bAllowJoinInProgress                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetSessionSettings_bIsAnticheatEnabled                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetSessionSettings_BuildUniqueID                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FSessionPropertyKeyPair>CallFunc_GetSessionSettings_ExtraSettings                        (ReferenceParm)
// enum class EBlueprintResultSwitch  CallFunc_GetSessionSettings_Result                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FSessionPropertyKeyPair>CallFunc_AddOrModifyExtraSettings_ModifiedSettingsArray          (ReferenceParm)
// class UUpdateSessionCallbackProxyAdvanced*CallFunc_UpdateSession_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ENetworkFailure         K2Node_Event_FailureType                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bIsServer                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetEnumeratorUserFriendlyName_ReturnValue               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_7                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetCurrentLevelName_ReturnValue                         (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StriStri_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_LocalPlayerNum_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FBPUniqueNetId              K2Node_Event_PersonInviting                                      (None)
// class FString                      K2Node_Event_AppId                                               (ZeroConstructor, HasGetValueTypeHash)
// struct FBlueprintSessionResult     K2Node_Event_SessionToJoin_1                                     (ConstParm)
// class FString                      CallFunc_Conv_BoolToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// int32                              K2Node_Event_LocalPlayerNum                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FBPUniqueNetId              K2Node_Event_PersonInvited                                       (None)
// struct FBlueprintSessionResult     K2Node_Event_SessionToJoin                                       (ConstParm)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class UPlayerController*           CallFunc_GetPlayerController_ReturnValue_1                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UJoinSessionCallbackProxy*   CallFunc_JoinSession_ReturnValue                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_DoesSaveGameExist_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_5                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UEndGameWidget_C*>    CallFunc_GetAllWidgetsOfClass_FoundWidgets_1                     (ReferenceParm, ContainsInstancedReference)
// int32                              Temp_int_Loop_Counter_Variable_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UEndGameWidget_C*            CallFunc_Array_Get_Item_3                                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_3                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGI_Contain_C::ExecuteUbergraph_GI_Contain(int32 EntryPoint, class UDiscordRpc* CallFunc_SpawnObject_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UHub_Loading_C* CallFunc_Create_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, const struct FS_AIData& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, const struct FS_AIData& CallFunc_GetDataTableRowFromName_OutRow_1, bool CallFunc_GetDataTableRowFromName_ReturnValue_1, const struct FS_AIData& CallFunc_GetDataTableRowFromName_OutRow_2, bool CallFunc_GetDataTableRowFromName_ReturnValue_2, int32 Temp_int_Array_Index_Variable, class UAsyncActionHandleSaveGame* CallFunc_AsyncSaveGameToSlot_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class USettings_SG_C* CallFunc_CreateSaveGameObject_ReturnValue, bool CallFunc_RichPresenceFunc_Return, int32 K2Node_CustomEvent_NumConnectedPlayers, const class FString& K2Node_CustomEvent_Map, bool CallFunc_ServerTravel_ReturnValue, class UAsyncActionHandleSaveGame* CallFunc_AsyncLoadGameFromSlot_ReturnValue, class USaveGame* Temp_object_Variable, class USettings_SG_C* K2Node_DynamicCast_AsSettings_SG, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue_2, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool Temp_bool_Variable, class UPlayerController* CallFunc_GetPlayerController_ReturnValue, const struct FSessionPropertyKeyPair& CallFunc_MakeLiteralSessionPropertyString_ReturnValue, const struct FSessionPropertyKeyPair& CallFunc_MakeLiteralSessionPropertyBool_ReturnValue, const struct FSessionPropertyKeyPair& CallFunc_MakeLiteralSessionPropertyString_ReturnValue_1, class USaveGame* Temp_object_Variable_1, int32 Temp_int_Array_Index_Variable_1, TArray<struct FIntPoint>& CallFunc_GetSupportedFullscreenResolutions_Resolutions, bool CallFunc_GetSupportedFullscreenResolutions_ReturnValue, const struct FIntPoint& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue_1, class UGameModeBase* CallFunc_GetGameMode_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, class UB_DemoGameModeBase_C* K2Node_DynamicCast_AsB_Demo_Game_Mode_Base, bool K2Node_DynamicCast_bSuccess_1, const class FString& K2Node_CustomEvent_InputPin_1, int32 Temp_int_Loop_Counter_Variable_1, const class FString& K2Node_CustomEvent_ServerName, const class FString& K2Node_CustomEvent_ServerMap, int32 K2Node_CustomEvent_ServerSlots, bool K2Node_CustomEvent_isPrivate, const class FString& K2Node_CustomEvent_password, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, class USaveGame* K2Node_CustomEvent_SaveGame_1, bool K2Node_CustomEvent_bSuccess_1, bool Temp_bool_Variable_1, const class FString& K2Node_CustomEvent_InputPin, int32 Temp_int_Array_Index_Variable_2, int32 Temp_int_Array_Index_Variable_3, class FName CallFunc_Array_Get_Item_1, const struct FSC_ControlSettings& CallFunc_GetDataTableRowFromName_OutRow_3, bool CallFunc_GetDataTableRowFromName_ReturnValue_3, const struct FSessionPropertyKeyPair& CallFunc_MakeLiteralSessionPropertyInt_ReturnValue, const struct FSessionPropertyKeyPair& CallFunc_MakeLiteralSessionPropertyInt_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_2, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_2, const struct FSessionPropertyKeyPair& CallFunc_MakeLiteralSessionPropertyString_ReturnValue_2, TArray<struct FSessionPropertyKeyPair>& K2Node_MakeArray_Array, class UCreateSessionCallbackProxyAdvanced* CallFunc_CreateAdvancedSession_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, TArray<class UEndGameWidget_C*>& CallFunc_GetAllWidgetsOfClass_FoundWidgets, class UEndGameWidget_C* CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_2, class USaveGame* K2Node_CustomEvent_SaveGame, bool K2Node_CustomEvent_bSuccess, const struct FSessionPropertyKeyPair& CallFunc_MakeLiteralSessionPropertyString_ReturnValue_3, TArray<struct FSessionPropertyKeyPair>& K2Node_MakeArray_Array_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, int32 CallFunc_GetSessionSettings_NumConnections, int32 CallFunc_GetSessionSettings_NumPrivateConnections, bool CallFunc_GetSessionSettings_bIsLAN, bool CallFunc_GetSessionSettings_bIsDedicated, bool CallFunc_GetSessionSettings_bAllowInvites, bool CallFunc_GetSessionSettings_bAllowJoinInProgress, bool CallFunc_GetSessionSettings_bIsAnticheatEnabled, int32 CallFunc_GetSessionSettings_BuildUniqueID, TArray<struct FSessionPropertyKeyPair>& CallFunc_GetSessionSettings_ExtraSettings, enum class EBlueprintResultSwitch CallFunc_GetSessionSettings_Result, bool K2Node_SwitchEnum_CmpSuccess, TArray<struct FSessionPropertyKeyPair>& CallFunc_AddOrModifyExtraSettings_ModifiedSettingsArray, class UUpdateSessionCallbackProxyAdvanced* CallFunc_UpdateSession_ReturnValue, bool CallFunc_IsValid_ReturnValue_4, enum class ENetworkFailure K2Node_Event_FailureType, bool K2Node_Event_bIsServer, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, const class FString& CallFunc_GetCurrentLevelName_ReturnValue, bool CallFunc_EqualEqual_StriStri_ReturnValue, int32 K2Node_Event_LocalPlayerNum_1, const struct FBPUniqueNetId& K2Node_Event_PersonInviting, const class FString& K2Node_Event_AppId, const struct FBlueprintSessionResult& K2Node_Event_SessionToJoin_1, const class FString& CallFunc_Conv_BoolToString_ReturnValue, int32 K2Node_Event_LocalPlayerNum, const struct FBPUniqueNetId& K2Node_Event_PersonInvited, const struct FBlueprintSessionResult& K2Node_Event_SessionToJoin, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, class UPlayerController* CallFunc_GetPlayerController_ReturnValue_1, class UJoinSessionCallbackProxy* CallFunc_JoinSession_ReturnValue, bool CallFunc_DoesSaveGameExist_ReturnValue, bool CallFunc_IsValid_ReturnValue_5, TArray<class UEndGameWidget_C*>& CallFunc_GetAllWidgetsOfClass_FoundWidgets_1, int32 Temp_int_Loop_Counter_Variable_3, class UEndGameWidget_C* CallFunc_Array_Get_Item_3, int32 CallFunc_Add_IntInt_ReturnValue_3, int32 CallFunc_Array_Length_ReturnValue_3, bool CallFunc_Less_IntInt_ReturnValue_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GI_Contain_C", "ExecuteUbergraph_GI_Contain");

	Params::UGI_Contain_C_ExecuteUbergraph_GI_Contain_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_SpawnObject_ReturnValue = CallFunc_SpawnObject_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_1 = CallFunc_GetDataTableRowFromName_OutRow_1;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_1 = CallFunc_GetDataTableRowFromName_ReturnValue_1;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_2 = CallFunc_GetDataTableRowFromName_OutRow_2;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_2 = CallFunc_GetDataTableRowFromName_ReturnValue_2;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_AsyncSaveGameToSlot_ReturnValue = CallFunc_AsyncSaveGameToSlot_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_CreateSaveGameObject_ReturnValue = CallFunc_CreateSaveGameObject_ReturnValue;
	Parms.CallFunc_RichPresenceFunc_Return = CallFunc_RichPresenceFunc_Return;
	Parms.K2Node_CustomEvent_NumConnectedPlayers = K2Node_CustomEvent_NumConnectedPlayers;
	Parms.K2Node_CustomEvent_Map = K2Node_CustomEvent_Map;
	Parms.CallFunc_ServerTravel_ReturnValue = CallFunc_ServerTravel_ReturnValue;
	Parms.CallFunc_AsyncLoadGameFromSlot_ReturnValue = CallFunc_AsyncLoadGameFromSlot_ReturnValue;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.K2Node_DynamicCast_AsSettings_SG = K2Node_DynamicCast_AsSettings_SG;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_MakeLiteralSessionPropertyString_ReturnValue = CallFunc_MakeLiteralSessionPropertyString_ReturnValue;
	Parms.CallFunc_MakeLiteralSessionPropertyBool_ReturnValue = CallFunc_MakeLiteralSessionPropertyBool_ReturnValue;
	Parms.CallFunc_MakeLiteralSessionPropertyString_ReturnValue_1 = CallFunc_MakeLiteralSessionPropertyString_ReturnValue_1;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_GetSupportedFullscreenResolutions_Resolutions = CallFunc_GetSupportedFullscreenResolutions_Resolutions;
	Parms.CallFunc_GetSupportedFullscreenResolutions_ReturnValue = CallFunc_GetSupportedFullscreenResolutions_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_GetGameMode_ReturnValue = CallFunc_GetGameMode_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.K2Node_DynamicCast_AsB_Demo_Game_Mode_Base = K2Node_DynamicCast_AsB_Demo_Game_Mode_Base;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_CustomEvent_InputPin_1 = K2Node_CustomEvent_InputPin_1;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.K2Node_CustomEvent_ServerName = K2Node_CustomEvent_ServerName;
	Parms.K2Node_CustomEvent_ServerMap = K2Node_CustomEvent_ServerMap;
	Parms.K2Node_CustomEvent_ServerSlots = K2Node_CustomEvent_ServerSlots;
	Parms.K2Node_CustomEvent_isPrivate = K2Node_CustomEvent_isPrivate;
	Parms.K2Node_CustomEvent_password = K2Node_CustomEvent_password;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.K2Node_CustomEvent_SaveGame_1 = K2Node_CustomEvent_SaveGame_1;
	Parms.K2Node_CustomEvent_bSuccess_1 = K2Node_CustomEvent_bSuccess_1;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.K2Node_CustomEvent_InputPin = K2Node_CustomEvent_InputPin;
	Parms.Temp_int_Array_Index_Variable_2 = Temp_int_Array_Index_Variable_2;
	Parms.Temp_int_Array_Index_Variable_3 = Temp_int_Array_Index_Variable_3;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_3 = CallFunc_GetDataTableRowFromName_OutRow_3;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_3 = CallFunc_GetDataTableRowFromName_ReturnValue_3;
	Parms.CallFunc_MakeLiteralSessionPropertyInt_ReturnValue = CallFunc_MakeLiteralSessionPropertyInt_ReturnValue;
	Parms.CallFunc_MakeLiteralSessionPropertyInt_ReturnValue_1 = CallFunc_MakeLiteralSessionPropertyInt_ReturnValue_1;
	Parms.CallFunc_Array_Add_ReturnValue_1 = CallFunc_Array_Add_ReturnValue_1;
	Parms.Temp_int_Loop_Counter_Variable_2 = Temp_int_Loop_Counter_Variable_2;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.CallFunc_MakeLiteralSessionPropertyString_ReturnValue_2 = CallFunc_MakeLiteralSessionPropertyString_ReturnValue_2;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_CreateAdvancedSession_ReturnValue = CallFunc_CreateAdvancedSession_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_GetAllWidgetsOfClass_FoundWidgets = CallFunc_GetAllWidgetsOfClass_FoundWidgets;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.CallFunc_Less_IntInt_ReturnValue_2 = CallFunc_Less_IntInt_ReturnValue_2;
	Parms.K2Node_CustomEvent_SaveGame = K2Node_CustomEvent_SaveGame;
	Parms.K2Node_CustomEvent_bSuccess = K2Node_CustomEvent_bSuccess;
	Parms.CallFunc_MakeLiteralSessionPropertyString_ReturnValue_3 = CallFunc_MakeLiteralSessionPropertyString_ReturnValue_3;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_6 = K2Node_CreateDelegate_OutputDelegate_6;
	Parms.CallFunc_GetSessionSettings_NumConnections = CallFunc_GetSessionSettings_NumConnections;
	Parms.CallFunc_GetSessionSettings_NumPrivateConnections = CallFunc_GetSessionSettings_NumPrivateConnections;
	Parms.CallFunc_GetSessionSettings_bIsLAN = CallFunc_GetSessionSettings_bIsLAN;
	Parms.CallFunc_GetSessionSettings_bIsDedicated = CallFunc_GetSessionSettings_bIsDedicated;
	Parms.CallFunc_GetSessionSettings_bAllowInvites = CallFunc_GetSessionSettings_bAllowInvites;
	Parms.CallFunc_GetSessionSettings_bAllowJoinInProgress = CallFunc_GetSessionSettings_bAllowJoinInProgress;
	Parms.CallFunc_GetSessionSettings_bIsAnticheatEnabled = CallFunc_GetSessionSettings_bIsAnticheatEnabled;
	Parms.CallFunc_GetSessionSettings_BuildUniqueID = CallFunc_GetSessionSettings_BuildUniqueID;
	Parms.CallFunc_GetSessionSettings_ExtraSettings = CallFunc_GetSessionSettings_ExtraSettings;
	Parms.CallFunc_GetSessionSettings_Result = CallFunc_GetSessionSettings_Result;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_AddOrModifyExtraSettings_ModifiedSettingsArray = CallFunc_AddOrModifyExtraSettings_ModifiedSettingsArray;
	Parms.CallFunc_UpdateSession_ReturnValue = CallFunc_UpdateSession_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;
	Parms.K2Node_Event_FailureType = K2Node_Event_FailureType;
	Parms.K2Node_Event_bIsServer = K2Node_Event_bIsServer;
	Parms.CallFunc_GetEnumeratorUserFriendlyName_ReturnValue = CallFunc_GetEnumeratorUserFriendlyName_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_7 = K2Node_CreateDelegate_OutputDelegate_7;
	Parms.CallFunc_GetCurrentLevelName_ReturnValue = CallFunc_GetCurrentLevelName_ReturnValue;
	Parms.CallFunc_EqualEqual_StriStri_ReturnValue = CallFunc_EqualEqual_StriStri_ReturnValue;
	Parms.K2Node_Event_LocalPlayerNum_1 = K2Node_Event_LocalPlayerNum_1;
	Parms.K2Node_Event_PersonInviting = K2Node_Event_PersonInviting;
	Parms.K2Node_Event_AppId = K2Node_Event_AppId;
	Parms.K2Node_Event_SessionToJoin_1 = K2Node_Event_SessionToJoin_1;
	Parms.CallFunc_Conv_BoolToString_ReturnValue = CallFunc_Conv_BoolToString_ReturnValue;
	Parms.K2Node_Event_LocalPlayerNum = K2Node_Event_LocalPlayerNum;
	Parms.K2Node_Event_PersonInvited = K2Node_Event_PersonInvited;
	Parms.K2Node_Event_SessionToJoin = K2Node_Event_SessionToJoin;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_GetPlayerController_ReturnValue_1 = CallFunc_GetPlayerController_ReturnValue_1;
	Parms.CallFunc_JoinSession_ReturnValue = CallFunc_JoinSession_ReturnValue;
	Parms.CallFunc_DoesSaveGameExist_ReturnValue = CallFunc_DoesSaveGameExist_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_5 = CallFunc_IsValid_ReturnValue_5;
	Parms.CallFunc_GetAllWidgetsOfClass_FoundWidgets_1 = CallFunc_GetAllWidgetsOfClass_FoundWidgets_1;
	Parms.Temp_int_Loop_Counter_Variable_3 = Temp_int_Loop_Counter_Variable_3;
	Parms.CallFunc_Array_Get_Item_3 = CallFunc_Array_Get_Item_3;
	Parms.CallFunc_Add_IntInt_ReturnValue_3 = CallFunc_Add_IntInt_ReturnValue_3;
	Parms.CallFunc_Array_Length_ReturnValue_3 = CallFunc_Array_Length_ReturnValue_3;
	Parms.CallFunc_Less_IntInt_ReturnValue_3 = CallFunc_Less_IntInt_ReturnValue_3;

	UObject::ProcessEvent(Func, &Parms);

}

}


