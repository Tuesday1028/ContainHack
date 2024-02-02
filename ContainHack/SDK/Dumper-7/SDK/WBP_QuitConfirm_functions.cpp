#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_QuitConfirm.WBP_QuitConfirm_C
// (None)

class UClass* UWBP_QuitConfirm_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_QuitConfirm_C");

	return Clss;
}


// WBP_QuitConfirm_C WBP_QuitConfirm.Default__WBP_QuitConfirm_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_QuitConfirm_C* UWBP_QuitConfirm_C::GetDefaultObj()
{
	static class UWBP_QuitConfirm_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_QuitConfirm_C*>(UWBP_QuitConfirm_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_QuitConfirm.WBP_QuitConfirm_C.BndEvt__WBP_ConnectionLost_OkButton_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_QuitConfirm_C::BndEvt__WBP_ConnectionLost_OkButton_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_QuitConfirm_C", "BndEvt__WBP_ConnectionLost_OkButton_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_QuitConfirm.WBP_QuitConfirm_C.BndEvt__WBP_QuitConfirm_NoButton_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_QuitConfirm_C::BndEvt__WBP_QuitConfirm_NoButton_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_QuitConfirm_C", "BndEvt__WBP_QuitConfirm_NoButton_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_QuitConfirm.WBP_QuitConfirm_C.ExecuteUbergraph_WBP_QuitConfirm
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_QuitConfirm_C::ExecuteUbergraph_WBP_QuitConfirm(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_QuitConfirm_C", "ExecuteUbergraph_WBP_QuitConfirm");

	Params::UWBP_QuitConfirm_C_ExecuteUbergraph_WBP_QuitConfirm_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


