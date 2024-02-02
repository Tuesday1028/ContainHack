#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BTTask_WalkOrRun.BTTask_WalkOrRun_C
// (None)

class UClass* UBTTask_WalkOrRun_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BTTask_WalkOrRun_C");

	return Clss;
}


// BTTask_WalkOrRun_C BTTask_WalkOrRun.Default__BTTask_WalkOrRun_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBTTask_WalkOrRun_C* UBTTask_WalkOrRun_C::GetDefaultObj()
{
	static class UBTTask_WalkOrRun_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBTTask_WalkOrRun_C*>(UBTTask_WalkOrRun_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BTTask_WalkOrRun.BTTask_WalkOrRun_C.ReceiveExecuteAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UAIController*               OwnerController                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPawn*                       ControlledPawn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBTTask_WalkOrRun_C::ReceiveExecuteAI(class UAIController* OwnerController, class UPawn* ControlledPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTTask_WalkOrRun_C", "ReceiveExecuteAI");

	Params::UBTTask_WalkOrRun_C_ReceiveExecuteAI_Params Parms{};

	Parms.OwnerController = OwnerController;
	Parms.ControlledPawn = ControlledPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BTTask_WalkOrRun.BTTask_WalkOrRun_C.ExecuteUbergraph_BTTask_WalkOrRun
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAIController*               K2Node_Event_OwnerController                                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPawn*                       K2Node_Event_ControlledPawn                                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAI_Husk_C*                  K2Node_DynamicCast_AsAI_Husk                                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBTTask_WalkOrRun_C::ExecuteUbergraph_BTTask_WalkOrRun(int32 EntryPoint, class UAIController* K2Node_Event_OwnerController, class UPawn* K2Node_Event_ControlledPawn, class UAI_Husk_C* K2Node_DynamicCast_AsAI_Husk, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTTask_WalkOrRun_C", "ExecuteUbergraph_BTTask_WalkOrRun");

	Params::UBTTask_WalkOrRun_C_ExecuteUbergraph_BTTask_WalkOrRun_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_OwnerController = K2Node_Event_OwnerController;
	Parms.K2Node_Event_ControlledPawn = K2Node_Event_ControlledPawn;
	Parms.K2Node_DynamicCast_AsAI_Husk = K2Node_DynamicCast_AsAI_Husk;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}

}


