#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WG_DoorUI.WG_DoorUI_C
// (None)

class UClass* UWG_DoorUI_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WG_DoorUI_C");

	return Clss;
}


// WG_DoorUI_C WG_DoorUI.Default__WG_DoorUI_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWG_DoorUI_C* UWG_DoorUI_C::GetDefaultObj()
{
	static class UWG_DoorUI_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWG_DoorUI_C*>(UWG_DoorUI_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WG_DoorUI.WG_DoorUI_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWG_DoorUI_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WG_DoorUI_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WG_DoorUI.WG_DoorUI_C.BndEvt__WG_DoorUI_opnButton_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWG_DoorUI_C::BndEvt__WG_DoorUI_opnButton_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WG_DoorUI_C", "BndEvt__WG_DoorUI_opnButton_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WG_DoorUI.WG_DoorUI_C.BndEvt__WG_DoorUI_peakBTN_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWG_DoorUI_C::BndEvt__WG_DoorUI_peakBTN_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WG_DoorUI_C", "BndEvt__WG_DoorUI_peakBTN_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WG_DoorUI.WG_DoorUI_C.ExecuteUbergraph_WG_DoorUI
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWG_DoorUI_C::ExecuteUbergraph_WG_DoorUI(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WG_DoorUI_C", "ExecuteUbergraph_WG_DoorUI");

	Params::UWG_DoorUI_C_ExecuteUbergraph_WG_DoorUI_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


