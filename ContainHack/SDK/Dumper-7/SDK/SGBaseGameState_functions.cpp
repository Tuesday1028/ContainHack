#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SGBaseGameState.SGBaseGameState_C
// (Actor)

class UClass* USGBaseGameState_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SGBaseGameState_C");

	return Clss;
}


// SGBaseGameState_C SGBaseGameState.Default__SGBaseGameState_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USGBaseGameState_C* USGBaseGameState_C::GetDefaultObj()
{
	static class USGBaseGameState_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USGBaseGameState_C*>(USGBaseGameState_C::StaticClass()->DefaultObject);

	return Default;
}


// Function SGBaseGameState.SGBaseGameState_C.OnRep_Player
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void USGBaseGameState_C::OnRep_Player()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SGBaseGameState_C", "OnRep_Player");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SGBaseGameState.SGBaseGameState_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void USGBaseGameState_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SGBaseGameState_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SGBaseGameState.SGBaseGameState_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USGBaseGameState_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SGBaseGameState_C", "ReceiveTick");

	Params::USGBaseGameState_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SGBaseGameState.SGBaseGameState_C.AddPlayer
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Fail                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Player                                                           (BlueprintVisible, BlueprintReadOnly, Parm)
// class UTexture2D*                  Avatar                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              PlayerIndex                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USGBaseGameState_C::AddPlayer(bool Fail, class FText Player, class UTexture2D* Avatar, int32 PlayerIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SGBaseGameState_C", "AddPlayer");

	Params::USGBaseGameState_C_AddPlayer_Params Parms{};

	Parms.Fail = Fail;
	Parms.Player = Player;
	Parms.Avatar = Avatar;
	Parms.PlayerIndex = PlayerIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SGBaseGameState.SGBaseGameState_C.ExecuteUbergraph_SGBaseGameState
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_fail                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_CustomEvent_Player                                        (None)
// class UTexture2D*                  K2Node_CustomEvent_Avatar                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_PlayerIndex                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USGBaseGameState_C::ExecuteUbergraph_SGBaseGameState(int32 EntryPoint, float K2Node_Event_DeltaSeconds, bool K2Node_CustomEvent_fail, class FText K2Node_CustomEvent_Player, class UTexture2D* K2Node_CustomEvent_Avatar, int32 K2Node_CustomEvent_PlayerIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SGBaseGameState_C", "ExecuteUbergraph_SGBaseGameState");

	Params::USGBaseGameState_C_ExecuteUbergraph_SGBaseGameState_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.K2Node_CustomEvent_fail = K2Node_CustomEvent_fail;
	Parms.K2Node_CustomEvent_Player = K2Node_CustomEvent_Player;
	Parms.K2Node_CustomEvent_Avatar = K2Node_CustomEvent_Avatar;
	Parms.K2Node_CustomEvent_PlayerIndex = K2Node_CustomEvent_PlayerIndex;

	UObject::ProcessEvent(Func, &Parms);

}

}


