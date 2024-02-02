#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WG_InGame.WG_InGame_C
// (None)

class UClass* UWG_InGame_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WG_InGame_C");

	return Clss;
}


// WG_InGame_C WG_InGame.Default__WG_InGame_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWG_InGame_C* UWG_InGame_C::GetDefaultObj()
{
	static class UWG_InGame_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWG_InGame_C*>(UWG_InGame_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WG_InGame.WG_InGame_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWG_InGame_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WG_InGame_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WG_InGame.WG_InGame_C.Countdown
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Number                                                           (BlueprintVisible, BlueprintReadOnly, Parm)

void UWG_InGame_C::Countdown(class FText Number)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WG_InGame_C", "Countdown");

	Params::UWG_InGame_C_Countdown_Params Parms{};

	Parms.Number = Number;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WG_InGame.WG_InGame_C.ExecuteUbergraph_WG_InGame
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_CustomEvent_Number                                        (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)

void UWG_InGame_C::ExecuteUbergraph_WG_InGame(int32 EntryPoint, class FText K2Node_CustomEvent_Number, const class FString& CallFunc_Conv_TextToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WG_InGame_C", "ExecuteUbergraph_WG_InGame");

	Params::UWG_InGame_C_ExecuteUbergraph_WG_InGame_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_Number = K2Node_CustomEvent_Number;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


