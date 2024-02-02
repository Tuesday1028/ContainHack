#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass WeepingAngle_MoveTo_LastLocation.WeepingAngle_MoveTo_LastLocation_C
// (None)

class UClass* UWeepingAngle_MoveTo_LastLocation_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WeepingAngle_MoveTo_LastLocation_C");

	return Clss;
}


// WeepingAngle_MoveTo_LastLocation_C WeepingAngle_MoveTo_LastLocation.Default__WeepingAngle_MoveTo_LastLocation_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWeepingAngle_MoveTo_LastLocation_C* UWeepingAngle_MoveTo_LastLocation_C::GetDefaultObj()
{
	static class UWeepingAngle_MoveTo_LastLocation_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWeepingAngle_MoveTo_LastLocation_C*>(UWeepingAngle_MoveTo_LastLocation_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WeepingAngle_MoveTo_LastLocation.WeepingAngle_MoveTo_LastLocation_C.OnFail_E686829F4C346C4516C71CA23BA1EEE6
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EPathFollowingResult    MovementResult                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWeepingAngle_MoveTo_LastLocation_C::OnFail_E686829F4C346C4516C71CA23BA1EEE6(enum class EPathFollowingResult MovementResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WeepingAngle_MoveTo_LastLocation_C", "OnFail_E686829F4C346C4516C71CA23BA1EEE6");

	Params::UWeepingAngle_MoveTo_LastLocation_C_OnFail_E686829F4C346C4516C71CA23BA1EEE6_Params Parms{};

	Parms.MovementResult = MovementResult;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WeepingAngle_MoveTo_LastLocation.WeepingAngle_MoveTo_LastLocation_C.OnSuccess_E686829F4C346C4516C71CA23BA1EEE6
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EPathFollowingResult    MovementResult                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWeepingAngle_MoveTo_LastLocation_C::OnSuccess_E686829F4C346C4516C71CA23BA1EEE6(enum class EPathFollowingResult MovementResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WeepingAngle_MoveTo_LastLocation_C", "OnSuccess_E686829F4C346C4516C71CA23BA1EEE6");

	Params::UWeepingAngle_MoveTo_LastLocation_C_OnSuccess_E686829F4C346C4516C71CA23BA1EEE6_Params Parms{};

	Parms.MovementResult = MovementResult;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WeepingAngle_MoveTo_LastLocation.WeepingAngle_MoveTo_LastLocation_C.ReceiveTickAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UAIController*               OwnerController                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPawn*                       ControlledPawn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWeepingAngle_MoveTo_LastLocation_C::ReceiveTickAI(class UAIController* OwnerController, class UPawn* ControlledPawn, float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WeepingAngle_MoveTo_LastLocation_C", "ReceiveTickAI");

	Params::UWeepingAngle_MoveTo_LastLocation_C_ReceiveTickAI_Params Parms{};

	Parms.OwnerController = OwnerController;
	Parms.ControlledPawn = ControlledPawn;
	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WeepingAngle_MoveTo_LastLocation.WeepingAngle_MoveTo_LastLocation_C.ExecuteUbergraph_WeepingAngle_MoveTo_LastLocation
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPathFollowingResult    K2Node_CustomEvent_MovementResult_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetBlackboardValueAsVector_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPathFollowingResult    K2Node_CustomEvent_MovementResult                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EPathFollowingResult    Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UWeepingAngel_CharacterBP_C* K2Node_DynamicCast_AsWeeping_Angel_Character_BP                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAIAsyncTaskBlueprintProxy*  CallFunc_CreateMoveToProxyObject_ReturnValue                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAIController*               K2Node_Event_OwnerController                                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPawn*                       K2Node_Event_ControlledPawn                                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetBlackboardValueAsVector_ReturnValue_1                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWeepingAngle_MoveTo_LastLocation_C::ExecuteUbergraph_WeepingAngle_MoveTo_LastLocation(int32 EntryPoint, enum class EPathFollowingResult K2Node_CustomEvent_MovementResult_1, const struct FVector& CallFunc_GetBlackboardValueAsVector_ReturnValue, enum class EPathFollowingResult K2Node_CustomEvent_MovementResult, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, enum class EPathFollowingResult Temp_byte_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UWeepingAngel_CharacterBP_C* K2Node_DynamicCast_AsWeeping_Angel_Character_BP, bool K2Node_DynamicCast_bSuccess, class UAIAsyncTaskBlueprintProxy* CallFunc_CreateMoveToProxyObject_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UAIController* K2Node_Event_OwnerController, class UPawn* K2Node_Event_ControlledPawn, float K2Node_Event_DeltaSeconds, const struct FVector& CallFunc_GetBlackboardValueAsVector_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WeepingAngle_MoveTo_LastLocation_C", "ExecuteUbergraph_WeepingAngle_MoveTo_LastLocation");

	Params::UWeepingAngle_MoveTo_LastLocation_C_ExecuteUbergraph_WeepingAngle_MoveTo_LastLocation_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_MovementResult_1 = K2Node_CustomEvent_MovementResult_1;
	Parms.CallFunc_GetBlackboardValueAsVector_ReturnValue = CallFunc_GetBlackboardValueAsVector_ReturnValue;
	Parms.K2Node_CustomEvent_MovementResult = K2Node_CustomEvent_MovementResult;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_DynamicCast_AsWeeping_Angel_Character_BP = K2Node_DynamicCast_AsWeeping_Angel_Character_BP;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_CreateMoveToProxyObject_ReturnValue = CallFunc_CreateMoveToProxyObject_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_Event_OwnerController = K2Node_Event_OwnerController;
	Parms.K2Node_Event_ControlledPawn = K2Node_Event_ControlledPawn;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.CallFunc_GetBlackboardValueAsVector_ReturnValue_1 = CallFunc_GetBlackboardValueAsVector_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


