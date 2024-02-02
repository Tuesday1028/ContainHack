#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass HeliSeq.HeliSeq_C
// (None)

class UClass* UHeliSeq_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HeliSeq_C");

	return Clss;
}


// HeliSeq_C HeliSeq.Default__HeliSeq_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UHeliSeq_C* UHeliSeq_C::GetDefaultObj()
{
	static class UHeliSeq_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UHeliSeq_C*>(UHeliSeq_C::StaticClass()->DefaultObject);

	return Default;
}


// Function HeliSeq.HeliSeq_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UHeliSeq_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HeliSeq_C", "AnimGraph");

	Params::UHeliSeq_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function HeliSeq.HeliSeq_C.SetTailRotorSpeed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Speed                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeClamped_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHeliSeq_C::SetTailRotorSpeed(double Speed, double CallFunc_MapRangeClamped_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HeliSeq_C", "SetTailRotorSpeed");

	Params::UHeliSeq_C_SetTailRotorSpeed_Params Parms{};

	Parms.Speed = Speed;
	Parms.CallFunc_MapRangeClamped_ReturnValue = CallFunc_MapRangeClamped_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HeliSeq.HeliSeq_C.SetMainRotorSpeed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Speed                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeClamped_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHeliSeq_C::SetMainRotorSpeed(double Speed, double CallFunc_MapRangeClamped_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HeliSeq_C", "SetMainRotorSpeed");

	Params::UHeliSeq_C_SetMainRotorSpeed_Params Parms{};

	Parms.Speed = Speed;
	Parms.CallFunc_MapRangeClamped_ReturnValue = CallFunc_MapRangeClamped_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HeliSeq.HeliSeq_C.UpdateRotorSpeed
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UHeliSeq_C::UpdateRotorSpeed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HeliSeq_C", "UpdateRotorSpeed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function HeliSeq.HeliSeq_C.UpdateFrontWheels
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             State                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHeliSeq_C::UpdateFrontWheels(double State)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HeliSeq_C", "UpdateFrontWheels");

	Params::UHeliSeq_C_UpdateFrontWheels_Params Parms{};

	Parms.State = State;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HeliSeq.HeliSeq_C.UpdateRearWheels
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             State                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHeliSeq_C::UpdateRearWheels(double State)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HeliSeq_C", "UpdateRearWheels");

	Params::UHeliSeq_C_UpdateRearWheels_Params Parms{};

	Parms.State = State;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HeliSeq.HeliSeq_C.UpdateRearElevator
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             State                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHeliSeq_C::UpdateRearElevator(double State)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HeliSeq_C", "UpdateRearElevator");

	Params::UHeliSeq_C_UpdateRearElevator_Params Parms{};

	Parms.State = State;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HeliSeq.HeliSeq_C.UpdateRightShieldWindow
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             FirstPart                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             SecondPart                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHeliSeq_C::UpdateRightShieldWindow(double FirstPart, double SecondPart)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HeliSeq_C", "UpdateRightShieldWindow");

	Params::UHeliSeq_C_UpdateRightShieldWindow_Params Parms{};

	Parms.FirstPart = FirstPart;
	Parms.SecondPart = SecondPart;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HeliSeq.HeliSeq_C.UpdateLeftShieldWindow
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             FirstPart                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             SecondPart                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHeliSeq_C::UpdateLeftShieldWindow(double FirstPart, double SecondPart)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HeliSeq_C", "UpdateLeftShieldWindow");

	Params::UHeliSeq_C_UpdateLeftShieldWindow_Params Parms{};

	Parms.FirstPart = FirstPart;
	Parms.SecondPart = SecondPart;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HeliSeq.HeliSeq_C.UpdateFrontDoors
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Left                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Right                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHeliSeq_C::UpdateFrontDoors(double Left, double Right)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HeliSeq_C", "UpdateFrontDoors");

	Params::UHeliSeq_C_UpdateFrontDoors_Params Parms{};

	Parms.Left = Left;
	Parms.Right = Right;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HeliSeq.HeliSeq_C.UpdateRearDoors
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Left                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Right                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHeliSeq_C::UpdateRearDoors(double Left, double Right)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HeliSeq_C", "UpdateRearDoors");

	Params::UHeliSeq_C_UpdateRearDoors_Params Parms{};

	Parms.Left = Left;
	Parms.Right = Right;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HeliSeq.HeliSeq_C.UpdateSpeedOffset
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Increment                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHeliSeq_C::UpdateSpeedOffset(double Increment)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HeliSeq_C", "UpdateSpeedOffset");

	Params::UHeliSeq_C_UpdateSpeedOffset_Params Parms{};

	Parms.Increment = Increment;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HeliSeq.HeliSeq_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaTimeX                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHeliSeq_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HeliSeq_C", "BlueprintUpdateAnimation");

	Params::UHeliSeq_C_BlueprintUpdateAnimation_Params Parms{};

	Parms.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HeliSeq.HeliSeq_C.ExecuteUbergraph_HeliSeq
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_2                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// double                             K2Node_CustomEvent_State_2                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_CustomEvent_State_1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_CustomEvent_State                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_CustomEvent_FirstPart_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_CustomEvent_SecondPart_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeClamped_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeClamped_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_CustomEvent_FirstPart                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_CustomEvent_SecondPart                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_CustomEvent_Left_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_CustomEvent_Right_1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeClamped_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeClamped_ReturnValue_3                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeClamped_ReturnValue_4                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeClamped_ReturnValue_5                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_CustomEvent_Left                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_CustomEvent_Right                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_CustomEvent_Increment                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeClamped_ReturnValue_6                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Percent_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeClamped_ReturnValue_7                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaTimeX                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MakeRotator_Yaw_ImplicitCast                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MakeRotator_Roll_ImplicitCast                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_UpdateSpeedOffset_Increment_ImplicitCast                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHeliSeq_C::ExecuteUbergraph_HeliSeq(int32 EntryPoint, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_ReturnValue_2, const struct FRotator& CallFunc_MakeRotator_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue_1, double K2Node_CustomEvent_State_2, double K2Node_CustomEvent_State_1, double K2Node_CustomEvent_State, double K2Node_CustomEvent_FirstPart_1, double K2Node_CustomEvent_SecondPart_1, double CallFunc_MapRangeClamped_ReturnValue, double CallFunc_MapRangeClamped_ReturnValue_1, double K2Node_CustomEvent_FirstPart, double K2Node_CustomEvent_SecondPart, double K2Node_CustomEvent_Left_1, double K2Node_CustomEvent_Right_1, double CallFunc_MapRangeClamped_ReturnValue_2, double CallFunc_MapRangeClamped_ReturnValue_3, double CallFunc_MapRangeClamped_ReturnValue_4, double CallFunc_MapRangeClamped_ReturnValue_5, double K2Node_CustomEvent_Left, double K2Node_CustomEvent_Right, double K2Node_CustomEvent_Increment, double CallFunc_MapRangeClamped_ReturnValue_6, double CallFunc_Add_DoubleDouble_ReturnValue, double CallFunc_Percent_FloatFloat_ReturnValue, double CallFunc_MapRangeClamped_ReturnValue_7, float K2Node_Event_DeltaTimeX, float CallFunc_MakeRotator_Yaw_ImplicitCast, float CallFunc_MakeRotator_Roll_ImplicitCast, double CallFunc_UpdateSpeedOffset_Increment_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HeliSeq_C", "ExecuteUbergraph_HeliSeq");

	Params::UHeliSeq_C_ExecuteUbergraph_HeliSeq_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_1 = CallFunc_Multiply_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_2 = CallFunc_Multiply_DoubleDouble_ReturnValue_2;
	Parms.CallFunc_MakeRotator_ReturnValue = CallFunc_MakeRotator_ReturnValue;
	Parms.CallFunc_MakeRotator_ReturnValue_1 = CallFunc_MakeRotator_ReturnValue_1;
	Parms.K2Node_CustomEvent_State_2 = K2Node_CustomEvent_State_2;
	Parms.K2Node_CustomEvent_State_1 = K2Node_CustomEvent_State_1;
	Parms.K2Node_CustomEvent_State = K2Node_CustomEvent_State;
	Parms.K2Node_CustomEvent_FirstPart_1 = K2Node_CustomEvent_FirstPart_1;
	Parms.K2Node_CustomEvent_SecondPart_1 = K2Node_CustomEvent_SecondPart_1;
	Parms.CallFunc_MapRangeClamped_ReturnValue = CallFunc_MapRangeClamped_ReturnValue;
	Parms.CallFunc_MapRangeClamped_ReturnValue_1 = CallFunc_MapRangeClamped_ReturnValue_1;
	Parms.K2Node_CustomEvent_FirstPart = K2Node_CustomEvent_FirstPart;
	Parms.K2Node_CustomEvent_SecondPart = K2Node_CustomEvent_SecondPart;
	Parms.K2Node_CustomEvent_Left_1 = K2Node_CustomEvent_Left_1;
	Parms.K2Node_CustomEvent_Right_1 = K2Node_CustomEvent_Right_1;
	Parms.CallFunc_MapRangeClamped_ReturnValue_2 = CallFunc_MapRangeClamped_ReturnValue_2;
	Parms.CallFunc_MapRangeClamped_ReturnValue_3 = CallFunc_MapRangeClamped_ReturnValue_3;
	Parms.CallFunc_MapRangeClamped_ReturnValue_4 = CallFunc_MapRangeClamped_ReturnValue_4;
	Parms.CallFunc_MapRangeClamped_ReturnValue_5 = CallFunc_MapRangeClamped_ReturnValue_5;
	Parms.K2Node_CustomEvent_Left = K2Node_CustomEvent_Left;
	Parms.K2Node_CustomEvent_Right = K2Node_CustomEvent_Right;
	Parms.K2Node_CustomEvent_Increment = K2Node_CustomEvent_Increment;
	Parms.CallFunc_MapRangeClamped_ReturnValue_6 = CallFunc_MapRangeClamped_ReturnValue_6;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue = CallFunc_Add_DoubleDouble_ReturnValue;
	Parms.CallFunc_Percent_FloatFloat_ReturnValue = CallFunc_Percent_FloatFloat_ReturnValue;
	Parms.CallFunc_MapRangeClamped_ReturnValue_7 = CallFunc_MapRangeClamped_ReturnValue_7;
	Parms.K2Node_Event_DeltaTimeX = K2Node_Event_DeltaTimeX;
	Parms.CallFunc_MakeRotator_Yaw_ImplicitCast = CallFunc_MakeRotator_Yaw_ImplicitCast;
	Parms.CallFunc_MakeRotator_Roll_ImplicitCast = CallFunc_MakeRotator_Roll_ImplicitCast;
	Parms.CallFunc_UpdateSpeedOffset_Increment_ImplicitCast = CallFunc_UpdateSpeedOffset_Increment_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}

}


