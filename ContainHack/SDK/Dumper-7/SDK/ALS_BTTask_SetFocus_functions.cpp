#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ALS_BTTask_SetFocus.ALS_BTTask_SetFocus_C
// (None)

class UClass* UALS_BTTask_SetFocus_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ALS_BTTask_SetFocus_C");

	return Clss;
}


// ALS_BTTask_SetFocus_C ALS_BTTask_SetFocus.Default__ALS_BTTask_SetFocus_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UALS_BTTask_SetFocus_C* UALS_BTTask_SetFocus_C::GetDefaultObj()
{
	static class UALS_BTTask_SetFocus_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UALS_BTTask_SetFocus_C*>(UALS_BTTask_SetFocus_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ALS_BTTask_SetFocus.ALS_BTTask_SetFocus_C.ReceiveExecuteAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UAIController*               OwnerController                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPawn*                       ControlledPawn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UALS_BTTask_SetFocus_C::ReceiveExecuteAI(class UAIController* OwnerController, class UPawn* ControlledPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ALS_BTTask_SetFocus_C", "ReceiveExecuteAI");

	Params::UALS_BTTask_SetFocus_C_ReceiveExecuteAI_Params Parms{};

	Parms.OwnerController = OwnerController;
	Parms.ControlledPawn = ControlledPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ALS_BTTask_SetFocus.ALS_BTTask_SetFocus_C.ExecuteUbergraph_ALS_BTTask_SetFocus
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAIController*               K2Node_Event_OwnerController                                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPawn*                       K2Node_Event_ControlledPawn                                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UALS_BTTask_SetFocus_C::ExecuteUbergraph_ALS_BTTask_SetFocus(int32 EntryPoint, class UAIController* K2Node_Event_OwnerController, class UPawn* K2Node_Event_ControlledPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ALS_BTTask_SetFocus_C", "ExecuteUbergraph_ALS_BTTask_SetFocus");

	Params::UALS_BTTask_SetFocus_C_ExecuteUbergraph_ALS_BTTask_SetFocus_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_OwnerController = K2Node_Event_OwnerController;
	Parms.K2Node_Event_ControlledPawn = K2Node_Event_ControlledPawn;

	UObject::ProcessEvent(Func, &Parms);

}

}


