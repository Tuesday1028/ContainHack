#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_DifficultySetting.WBP_DifficultySetting_C
// (None)

class UClass* UWBP_DifficultySetting_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_DifficultySetting_C");

	return Clss;
}


// WBP_DifficultySetting_C WBP_DifficultySetting.Default__WBP_DifficultySetting_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_DifficultySetting_C* UWBP_DifficultySetting_C::GetDefaultObj()
{
	static class UWBP_DifficultySetting_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_DifficultySetting_C*>(UWBP_DifficultySetting_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_DifficultySetting.WBP_DifficultySetting_C.ExecuteUbergraph_WBP_DifficultySetting
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_DifficultySetting_C::ExecuteUbergraph_WBP_DifficultySetting(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DifficultySetting_C", "ExecuteUbergraph_WBP_DifficultySetting");

	Params::UWBP_DifficultySetting_C_ExecuteUbergraph_WBP_DifficultySetting_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


