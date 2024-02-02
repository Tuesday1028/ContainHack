#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ALS_BTTask_GetRandomLocation.ALS_BTTask_GetRandomLocation_C
// (None)

class UClass* UALS_BTTask_GetRandomLocation_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ALS_BTTask_GetRandomLocation_C");

	return Clss;
}


// ALS_BTTask_GetRandomLocation_C ALS_BTTask_GetRandomLocation.Default__ALS_BTTask_GetRandomLocation_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UALS_BTTask_GetRandomLocation_C* UALS_BTTask_GetRandomLocation_C::GetDefaultObj()
{
	static class UALS_BTTask_GetRandomLocation_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UALS_BTTask_GetRandomLocation_C*>(UALS_BTTask_GetRandomLocation_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ALS_BTTask_GetRandomLocation.ALS_BTTask_GetRandomLocation_C.ReceiveExecuteAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UAIController*               OwnerController                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPawn*                       ControlledPawn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UALS_BTTask_GetRandomLocation_C::ReceiveExecuteAI(class UAIController* OwnerController, class UPawn* ControlledPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ALS_BTTask_GetRandomLocation_C", "ReceiveExecuteAI");

	Params::UALS_BTTask_GetRandomLocation_C_ReceiveExecuteAI_Params Parms{};

	Parms.OwnerController = OwnerController;
	Parms.ControlledPawn = ControlledPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ALS_BTTask_GetRandomLocation.ALS_BTTask_GetRandomLocation_C.ExecuteUbergraph_ALS_BTTask_GetRandomLocation
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAIController*               K2Node_Event_OwnerController                                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPawn*                       K2Node_Event_ControlledPawn                                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetRandomReachablePointInRadius_RandomLocation       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_GetRandomReachablePointInRadius_ReturnValue          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_K2_GetRandomReachablePointInRadius_Radius_ImplicitCast  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UALS_BTTask_GetRandomLocation_C::ExecuteUbergraph_ALS_BTTask_GetRandomLocation(int32 EntryPoint, class UAIController* K2Node_Event_OwnerController, class UPawn* K2Node_Event_ControlledPawn, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_K2_GetRandomReachablePointInRadius_RandomLocation, bool CallFunc_K2_GetRandomReachablePointInRadius_ReturnValue, float CallFunc_K2_GetRandomReachablePointInRadius_Radius_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ALS_BTTask_GetRandomLocation_C", "ExecuteUbergraph_ALS_BTTask_GetRandomLocation");

	Params::UALS_BTTask_GetRandomLocation_C_ExecuteUbergraph_ALS_BTTask_GetRandomLocation_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_OwnerController = K2Node_Event_OwnerController;
	Parms.K2Node_Event_ControlledPawn = K2Node_Event_ControlledPawn;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_K2_GetRandomReachablePointInRadius_RandomLocation = CallFunc_K2_GetRandomReachablePointInRadius_RandomLocation;
	Parms.CallFunc_K2_GetRandomReachablePointInRadius_ReturnValue = CallFunc_K2_GetRandomReachablePointInRadius_ReturnValue;
	Parms.CallFunc_K2_GetRandomReachablePointInRadius_Radius_ImplicitCast = CallFunc_K2_GetRandomReachablePointInRadius_Radius_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}

}


