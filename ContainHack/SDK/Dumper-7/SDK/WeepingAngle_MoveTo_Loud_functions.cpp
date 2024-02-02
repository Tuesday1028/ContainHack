#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass WeepingAngle_MoveTo_Loud.WeepingAngle_MoveTo_Loud_C
// (None)

class UClass* UWeepingAngle_MoveTo_Loud_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WeepingAngle_MoveTo_Loud_C");

	return Clss;
}


// WeepingAngle_MoveTo_Loud_C WeepingAngle_MoveTo_Loud.Default__WeepingAngle_MoveTo_Loud_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWeepingAngle_MoveTo_Loud_C* UWeepingAngle_MoveTo_Loud_C::GetDefaultObj()
{
	static class UWeepingAngle_MoveTo_Loud_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWeepingAngle_MoveTo_Loud_C*>(UWeepingAngle_MoveTo_Loud_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WeepingAngle_MoveTo_Loud.WeepingAngle_MoveTo_Loud_C.OnFail_287924C44340F6743CA2AC98A454BE26
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EPathFollowingResult    MovementResult                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWeepingAngle_MoveTo_Loud_C::OnFail_287924C44340F6743CA2AC98A454BE26(enum class EPathFollowingResult MovementResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WeepingAngle_MoveTo_Loud_C", "OnFail_287924C44340F6743CA2AC98A454BE26");

	Params::UWeepingAngle_MoveTo_Loud_C_OnFail_287924C44340F6743CA2AC98A454BE26_Params Parms{};

	Parms.MovementResult = MovementResult;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WeepingAngle_MoveTo_Loud.WeepingAngle_MoveTo_Loud_C.OnSuccess_287924C44340F6743CA2AC98A454BE26
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EPathFollowingResult    MovementResult                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWeepingAngle_MoveTo_Loud_C::OnSuccess_287924C44340F6743CA2AC98A454BE26(enum class EPathFollowingResult MovementResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WeepingAngle_MoveTo_Loud_C", "OnSuccess_287924C44340F6743CA2AC98A454BE26");

	Params::UWeepingAngle_MoveTo_Loud_C_OnSuccess_287924C44340F6743CA2AC98A454BE26_Params Parms{};

	Parms.MovementResult = MovementResult;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WeepingAngle_MoveTo_Loud.WeepingAngle_MoveTo_Loud_C.ReceiveExecuteAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UAIController*               OwnerController                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPawn*                       ControlledPawn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWeepingAngle_MoveTo_Loud_C::ReceiveExecuteAI(class UAIController* OwnerController, class UPawn* ControlledPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WeepingAngle_MoveTo_Loud_C", "ReceiveExecuteAI");

	Params::UWeepingAngle_MoveTo_Loud_C_ReceiveExecuteAI_Params Parms{};

	Parms.OwnerController = OwnerController;
	Parms.ControlledPawn = ControlledPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WeepingAngle_MoveTo_Loud.WeepingAngle_MoveTo_Loud_C.ExecuteUbergraph_WeepingAngle_MoveTo_Loud
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPathFollowingResult    K2Node_CustomEvent_MovementResult                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWeepingAngel_CharacterBP_C* K2Node_DynamicCast_AsWeeping_Angel_Character_BP                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPathFollowingResult    Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAIController*               K2Node_Event_OwnerController                                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPawn*                       K2Node_Event_ControlledPawn                                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetBlackboardValueAsVector_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAIAsyncTaskBlueprintProxy*  CallFunc_CreateMoveToProxyObject_ReturnValue                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPathFollowingResult    K2Node_CustomEvent_MovementResult_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWeepingAngle_MoveTo_Loud_C::ExecuteUbergraph_WeepingAngle_MoveTo_Loud(int32 EntryPoint, enum class EPathFollowingResult K2Node_CustomEvent_MovementResult, class UWeepingAngel_CharacterBP_C* K2Node_DynamicCast_AsWeeping_Angel_Character_BP, bool K2Node_DynamicCast_bSuccess, enum class EPathFollowingResult Temp_byte_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UAIController* K2Node_Event_OwnerController, class UPawn* K2Node_Event_ControlledPawn, const struct FVector& CallFunc_GetBlackboardValueAsVector_ReturnValue, class UAIAsyncTaskBlueprintProxy* CallFunc_CreateMoveToProxyObject_ReturnValue, bool CallFunc_IsValid_ReturnValue, enum class EPathFollowingResult K2Node_CustomEvent_MovementResult_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WeepingAngle_MoveTo_Loud_C", "ExecuteUbergraph_WeepingAngle_MoveTo_Loud");

	Params::UWeepingAngle_MoveTo_Loud_C_ExecuteUbergraph_WeepingAngle_MoveTo_Loud_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_MovementResult = K2Node_CustomEvent_MovementResult;
	Parms.K2Node_DynamicCast_AsWeeping_Angel_Character_BP = K2Node_DynamicCast_AsWeeping_Angel_Character_BP;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_Event_OwnerController = K2Node_Event_OwnerController;
	Parms.K2Node_Event_ControlledPawn = K2Node_Event_ControlledPawn;
	Parms.CallFunc_GetBlackboardValueAsVector_ReturnValue = CallFunc_GetBlackboardValueAsVector_ReturnValue;
	Parms.CallFunc_CreateMoveToProxyObject_ReturnValue = CallFunc_CreateMoveToProxyObject_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_CustomEvent_MovementResult_1 = K2Node_CustomEvent_MovementResult_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


