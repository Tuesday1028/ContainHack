#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass HUBController2.HUBController2_C
// (Actor, PlayerController)

class UClass* UHUBController2_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HUBController2_C");

	return Clss;
}


// HUBController2_C HUBController2.Default__HUBController2_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UHUBController2_C* UHUBController2_C::GetDefaultObj()
{
	static class UHUBController2_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UHUBController2_C*>(UHUBController2_C::StaticClass()->DefaultObject);

	return Default;
}


// Function HUBController2.HUBController2_C.OnFailure_838A54F34C4138BE6D5A1A8494295952
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UHUBController2_C::OnFailure_838A54F34C4138BE6D5A1A8494295952()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUBController2_C", "OnFailure_838A54F34C4138BE6D5A1A8494295952");



	UObject::ProcessEvent(Func, nullptr);

}


// Function HUBController2.HUBController2_C.OnSuccess_838A54F34C4138BE6D5A1A8494295952
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UHUBController2_C::OnSuccess_838A54F34C4138BE6D5A1A8494295952()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUBController2_C", "OnSuccess_838A54F34C4138BE6D5A1A8494295952");



	UObject::ProcessEvent(Func, nullptr);

}


// Function HUBController2.HUBController2_C.Kick
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:

void UHUBController2_C::Kick()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUBController2_C", "Kick");



	UObject::ProcessEvent(Func, nullptr);

}


// Function HUBController2.HUBController2_C.AddPlayer
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Fail                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Player                                                           (BlueprintVisible, BlueprintReadOnly, Parm)
// class UTexture2D*                  Avatar                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              PlayerIndex                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHUBController2_C::AddPlayer(bool Fail, class FText Player, class UTexture2D* Avatar, int32 PlayerIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUBController2_C", "AddPlayer");

	Params::UHUBController2_C_AddPlayer_Params Parms{};

	Parms.Fail = Fail;
	Parms.Player = Player;
	Parms.Avatar = Avatar;
	Parms.PlayerIndex = PlayerIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HUBController2.HUBController2_C.ClearPlayerList
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:

void UHUBController2_C::ClearPlayerList()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUBController2_C", "ClearPlayerList");



	UObject::ProcessEvent(Func, nullptr);

}


// Function HUBController2.HUBController2_C.ClientServerTravel
// (Net, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:

void UHUBController2_C::ClientServerTravel()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUBController2_C", "ClientServerTravel");



	UObject::ProcessEvent(Func, nullptr);

}


// Function HUBController2.HUBController2_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void UHUBController2_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUBController2_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function HUBController2.HUBController2_C.ServerStartGame
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:

void UHUBController2_C::ServerStartGame()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUBController2_C", "ServerStartGame");



	UObject::ProcessEvent(Func, nullptr);

}


// Function HUBController2.HUBController2_C.ExecuteUbergraph_HUBController2
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UDestroySessionCallbackProxy*CallFunc_DestroySession_ReturnValue                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_fail                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_CustomEvent_Player                                        (None)
// class UTexture2D*                  K2Node_CustomEvent_Avatar                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_PlayerIndex                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHUBController2_C::ExecuteUbergraph_HUBController2(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UDestroySessionCallbackProxy* CallFunc_DestroySession_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool K2Node_CustomEvent_fail, class FText K2Node_CustomEvent_Player, class UTexture2D* K2Node_CustomEvent_Avatar, int32 K2Node_CustomEvent_PlayerIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUBController2_C", "ExecuteUbergraph_HUBController2");

	Params::UHUBController2_C_ExecuteUbergraph_HUBController2_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_DestroySession_ReturnValue = CallFunc_DestroySession_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_CustomEvent_fail = K2Node_CustomEvent_fail;
	Parms.K2Node_CustomEvent_Player = K2Node_CustomEvent_Player;
	Parms.K2Node_CustomEvent_Avatar = K2Node_CustomEvent_Avatar;
	Parms.K2Node_CustomEvent_PlayerIndex = K2Node_CustomEvent_PlayerIndex;

	UObject::ProcessEvent(Func, &Parms);

}

}


