#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BTTask_ClearValue.BTTask_ClearValue_C
// (None)

class UClass* UBTTask_ClearValue_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BTTask_ClearValue_C");

	return Clss;
}


// BTTask_ClearValue_C BTTask_ClearValue.Default__BTTask_ClearValue_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBTTask_ClearValue_C* UBTTask_ClearValue_C::GetDefaultObj()
{
	static class UBTTask_ClearValue_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBTTask_ClearValue_C*>(UBTTask_ClearValue_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BTTask_ClearValue.BTTask_ClearValue_C.ReceiveExecuteAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UAIController*               OwnerController                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPawn*                       ControlledPawn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBTTask_ClearValue_C::ReceiveExecuteAI(class UAIController* OwnerController, class UPawn* ControlledPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTTask_ClearValue_C", "ReceiveExecuteAI");

	Params::UBTTask_ClearValue_C_ReceiveExecuteAI_Params Parms{};

	Parms.OwnerController = OwnerController;
	Parms.ControlledPawn = ControlledPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BTTask_ClearValue.BTTask_ClearValue_C.ExecuteUbergraph_BTTask_ClearValue
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAIController*               K2Node_Event_OwnerController                                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPawn*                       K2Node_Event_ControlledPawn                                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBTTask_ClearValue_C::ExecuteUbergraph_BTTask_ClearValue(int32 EntryPoint, class UAIController* K2Node_Event_OwnerController, class UPawn* K2Node_Event_ControlledPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTTask_ClearValue_C", "ExecuteUbergraph_BTTask_ClearValue");

	Params::UBTTask_ClearValue_C_ExecuteUbergraph_BTTask_ClearValue_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_OwnerController = K2Node_Event_OwnerController;
	Parms.K2Node_Event_ControlledPawn = K2Node_Event_ControlledPawn;

	UObject::ProcessEvent(Func, &Parms);

}

}


