#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass AracGecisWidget.AracGecisWidget_C
// (None)

class UClass* UAracGecisWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AracGecisWidget_C");

	return Clss;
}


// AracGecisWidget_C AracGecisWidget.Default__AracGecisWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAracGecisWidget_C* UAracGecisWidget_C::GetDefaultObj()
{
	static class UAracGecisWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAracGecisWidget_C*>(UAracGecisWidget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AracGecisWidget.AracGecisWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UAracGecisWidget_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AracGecisWidget_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AracGecisWidget.AracGecisWidget_C.ExecuteUbergraph_AracGecisWidget
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UAracGecisWidget_C::ExecuteUbergraph_AracGecisWidget(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AracGecisWidget_C", "ExecuteUbergraph_AracGecisWidget");

	Params::UAracGecisWidget_C_ExecuteUbergraph_AracGecisWidget_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


