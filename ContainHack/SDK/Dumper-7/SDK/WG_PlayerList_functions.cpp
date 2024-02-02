#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WG_PlayerList.WG_PlayerList_C
// (None)

class UClass* UWG_PlayerList_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WG_PlayerList_C");

	return Clss;
}


// WG_PlayerList_C WG_PlayerList.Default__WG_PlayerList_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWG_PlayerList_C* UWG_PlayerList_C::GetDefaultObj()
{
	static class UWG_PlayerList_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWG_PlayerList_C*>(UWG_PlayerList_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WG_PlayerList.WG_PlayerList_C.ClearList
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWG_PlayerList_C::ClearList()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WG_PlayerList_C", "ClearList");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WG_PlayerList.WG_PlayerList_C.AddPlayerToList
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Fail                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Player                                                           (BlueprintVisible, BlueprintReadOnly, Parm)
// class UTexture2D*                  Avatar                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              PlayerIndex                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWG_PlayerList_C::AddPlayerToList(bool Fail, class FText Player, class UTexture2D* Avatar, int32 PlayerIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WG_PlayerList_C", "AddPlayerToList");

	Params::UWG_PlayerList_C_AddPlayerToList_Params Parms{};

	Parms.Fail = Fail;
	Parms.Player = Player;
	Parms.Avatar = Avatar;
	Parms.PlayerIndex = PlayerIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WG_PlayerList.WG_PlayerList_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWG_PlayerList_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WG_PlayerList_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WG_PlayerList.WG_PlayerList_C.testclient
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ESlateVisibility        InVisibility                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWG_PlayerSlot_C*            Target                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWG_PlayerList_C::Testclient(enum class ESlateVisibility InVisibility, class UWG_PlayerSlot_C* Target)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WG_PlayerList_C", "testclient");

	Params::UWG_PlayerList_C_Testclient_Params Parms{};

	Parms.InVisibility = InVisibility;
	Parms.Target = Target;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WG_PlayerList.WG_PlayerList_C.ExecuteUbergraph_WG_PlayerList
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UWG_PlayerSlot_C*            CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_fail                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_CustomEvent_Player                                        (None)
// class UTexture2D*                  K2Node_CustomEvent_Avatar                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_PlayerIndex                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVerticalBoxSlot*            CallFunc_AddChildToVerticalBox_ReturnValue                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_CustomEvent_InVisibility                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWG_PlayerSlot_C*            K2Node_CustomEvent_Target                                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWG_PlayerList_C::ExecuteUbergraph_WG_PlayerList(int32 EntryPoint, class UPlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UWG_PlayerSlot_C* CallFunc_Create_ReturnValue, bool K2Node_CustomEvent_fail, class FText K2Node_CustomEvent_Player, class UTexture2D* K2Node_CustomEvent_Avatar, int32 K2Node_CustomEvent_PlayerIndex, int32 CallFunc_Array_Add_ReturnValue, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, enum class ESlateVisibility K2Node_CustomEvent_InVisibility, class UWG_PlayerSlot_C* K2Node_CustomEvent_Target)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WG_PlayerList_C", "ExecuteUbergraph_WG_PlayerList");

	Params::UWG_PlayerList_C_ExecuteUbergraph_WG_PlayerList_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.K2Node_CustomEvent_fail = K2Node_CustomEvent_fail;
	Parms.K2Node_CustomEvent_Player = K2Node_CustomEvent_Player;
	Parms.K2Node_CustomEvent_Avatar = K2Node_CustomEvent_Avatar;
	Parms.K2Node_CustomEvent_PlayerIndex = K2Node_CustomEvent_PlayerIndex;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_AddChildToVerticalBox_ReturnValue = CallFunc_AddChildToVerticalBox_ReturnValue;
	Parms.K2Node_CustomEvent_InVisibility = K2Node_CustomEvent_InVisibility;
	Parms.K2Node_CustomEvent_Target = K2Node_CustomEvent_Target;

	UObject::ProcessEvent(Func, &Parms);

}

}


