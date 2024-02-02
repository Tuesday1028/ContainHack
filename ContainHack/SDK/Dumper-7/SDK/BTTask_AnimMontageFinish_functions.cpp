#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BTTask_AnimMontageFinish.BTTask_AnimMontageFinish_C
// (None)

class UClass* UBTTask_AnimMontageFinish_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BTTask_AnimMontageFinish_C");

	return Clss;
}


// BTTask_AnimMontageFinish_C BTTask_AnimMontageFinish.Default__BTTask_AnimMontageFinish_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBTTask_AnimMontageFinish_C* UBTTask_AnimMontageFinish_C::GetDefaultObj()
{
	static class UBTTask_AnimMontageFinish_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBTTask_AnimMontageFinish_C*>(UBTTask_AnimMontageFinish_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BTTask_AnimMontageFinish.BTTask_AnimMontageFinish_C.ReceiveExecuteAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UAIController*               OwnerController                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPawn*                       ControlledPawn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBTTask_AnimMontageFinish_C::ReceiveExecuteAI(class UAIController* OwnerController, class UPawn* ControlledPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTTask_AnimMontageFinish_C", "ReceiveExecuteAI");

	Params::UBTTask_AnimMontageFinish_C_ReceiveExecuteAI_Params Parms{};

	Parms.OwnerController = OwnerController;
	Parms.ControlledPawn = ControlledPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BTTask_AnimMontageFinish.BTTask_AnimMontageFinish_C.ExecuteUbergraph_BTTask_AnimMontageFinish
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAIController*               K2Node_Event_OwnerController                                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPawn*                       K2Node_Event_ControlledPawn                                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAI_Steve_C*                 K2Node_DynamicCast_AsAI_Steve                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBTTask_AnimMontageFinish_C::ExecuteUbergraph_BTTask_AnimMontageFinish(int32 EntryPoint, class UAIController* K2Node_Event_OwnerController, class UPawn* K2Node_Event_ControlledPawn, class UAI_Steve_C* K2Node_DynamicCast_AsAI_Steve, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTTask_AnimMontageFinish_C", "ExecuteUbergraph_BTTask_AnimMontageFinish");

	Params::UBTTask_AnimMontageFinish_C_ExecuteUbergraph_BTTask_AnimMontageFinish_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_OwnerController = K2Node_Event_OwnerController;
	Parms.K2Node_Event_ControlledPawn = K2Node_Event_ControlledPawn;
	Parms.K2Node_DynamicCast_AsAI_Steve = K2Node_DynamicCast_AsAI_Steve;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}

}


