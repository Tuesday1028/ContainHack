#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BTTask_ClearFocus.BTTask_ClearFocus_C
// (None)

class UClass* UBTTask_ClearFocus_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BTTask_ClearFocus_C");

	return Clss;
}


// BTTask_ClearFocus_C BTTask_ClearFocus.Default__BTTask_ClearFocus_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBTTask_ClearFocus_C* UBTTask_ClearFocus_C::GetDefaultObj()
{
	static class UBTTask_ClearFocus_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBTTask_ClearFocus_C*>(UBTTask_ClearFocus_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BTTask_ClearFocus.BTTask_ClearFocus_C.ReceiveExecuteAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UAIController*               OwnerController                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPawn*                       ControlledPawn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBTTask_ClearFocus_C::ReceiveExecuteAI(class UAIController* OwnerController, class UPawn* ControlledPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTTask_ClearFocus_C", "ReceiveExecuteAI");

	Params::UBTTask_ClearFocus_C_ReceiveExecuteAI_Params Parms{};

	Parms.OwnerController = OwnerController;
	Parms.ControlledPawn = ControlledPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BTTask_ClearFocus.BTTask_ClearFocus_C.ExecuteUbergraph_BTTask_ClearFocus
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAIController*               K2Node_Event_OwnerController                                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPawn*                       K2Node_Event_ControlledPawn                                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAI_WeepingAngel_C*          K2Node_DynamicCast_AsAI_Weeping_Angel                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAI_AnimMan_C*               K2Node_DynamicCast_AsAI_Anim_Man                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBTTask_ClearFocus_C::ExecuteUbergraph_BTTask_ClearFocus(int32 EntryPoint, class UAIController* K2Node_Event_OwnerController, class UPawn* K2Node_Event_ControlledPawn, class UAI_WeepingAngel_C* K2Node_DynamicCast_AsAI_Weeping_Angel, bool K2Node_DynamicCast_bSuccess, class UAI_AnimMan_C* K2Node_DynamicCast_AsAI_Anim_Man, bool K2Node_DynamicCast_bSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTTask_ClearFocus_C", "ExecuteUbergraph_BTTask_ClearFocus");

	Params::UBTTask_ClearFocus_C_ExecuteUbergraph_BTTask_ClearFocus_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_OwnerController = K2Node_Event_OwnerController;
	Parms.K2Node_Event_ControlledPawn = K2Node_Event_ControlledPawn;
	Parms.K2Node_DynamicCast_AsAI_Weeping_Angel = K2Node_DynamicCast_AsAI_Weeping_Angel;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsAI_Anim_Man = K2Node_DynamicCast_AsAI_Anim_Man;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


