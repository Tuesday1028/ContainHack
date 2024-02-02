#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass B_M4A1_Parent.B_M4A1_Parent_C
// (Actor)

class UClass* UB_M4A1_Parent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("B_M4A1_Parent_C");

	return Clss;
}


// B_M4A1_Parent_C B_M4A1_Parent.Default__B_M4A1_Parent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UB_M4A1_Parent_C* UB_M4A1_Parent_C::GetDefaultObj()
{
	static class UB_M4A1_Parent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UB_M4A1_Parent_C*>(UB_M4A1_Parent_C::StaticClass()->DefaultObject);

	return Default;
}


// Function B_M4A1_Parent.B_M4A1_Parent_C.CustomAction
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsCustomActioned                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UB_M4A1_Parent_C::CustomAction(bool IsCustomActioned)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_M4A1_Parent_C", "CustomAction");

	Params::UB_M4A1_Parent_C_CustomAction_Params Parms{};

	Parms.IsCustomActioned = IsCustomActioned;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_M4A1_Parent.B_M4A1_Parent_C.ExecuteUbergraph_B_M4A1_Parent
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsCustomActioned                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UB_M4A1_Parent_C::ExecuteUbergraph_B_M4A1_Parent(int32 EntryPoint, bool K2Node_Event_IsCustomActioned)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_M4A1_Parent_C", "ExecuteUbergraph_B_M4A1_Parent");

	Params::UB_M4A1_Parent_C_ExecuteUbergraph_B_M4A1_Parent_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsCustomActioned = K2Node_Event_IsCustomActioned;

	UObject::ProcessEvent(Func, &Parms);

}

}


