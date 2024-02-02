#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WG_KeyInfo.WG_KeyInfo_C
// (None)

class UClass* UWG_KeyInfo_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WG_KeyInfo_C");

	return Clss;
}


// WG_KeyInfo_C WG_KeyInfo.Default__WG_KeyInfo_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWG_KeyInfo_C* UWG_KeyInfo_C::GetDefaultObj()
{
	static class UWG_KeyInfo_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWG_KeyInfo_C*>(UWG_KeyInfo_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WG_KeyInfo.WG_KeyInfo_C.Get_Text_Text
// (Public, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:

void UWG_KeyInfo_C::Get_Text_Text()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WG_KeyInfo_C", "Get_Text_Text");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WG_KeyInfo.WG_KeyInfo_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWG_KeyInfo_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WG_KeyInfo_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WG_KeyInfo.WG_KeyInfo_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWG_KeyInfo_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WG_KeyInfo_C", "Tick");

	Params::UWG_KeyInfo_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WG_KeyInfo.WG_KeyInfo_C.ExecuteUbergraph_WG_KeyInfo
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InDeltaTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWG_KeyInfo_C::ExecuteUbergraph_WG_KeyInfo(int32 EntryPoint, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WG_KeyInfo_C", "ExecuteUbergraph_WG_KeyInfo");

	Params::UWG_KeyInfo_C_ExecuteUbergraph_WG_KeyInfo_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}

}


