#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Gyroscope.BP_Gyroscope_C
// (Actor)

class UClass* UBP_Gyroscope_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Gyroscope_C");

	return Clss;
}


// BP_Gyroscope_C BP_Gyroscope.Default__BP_Gyroscope_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_Gyroscope_C* UBP_Gyroscope_C::GetDefaultObj()
{
	static class UBP_Gyroscope_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_Gyroscope_C*>(UBP_Gyroscope_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Gyroscope.BP_Gyroscope_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Gyroscope_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Gyroscope_C", "ReceiveTick");

	Params::UBP_Gyroscope_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Gyroscope.BP_Gyroscope_C.ExecuteUbergraph_BP_Gyroscope
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_AddRelativeRotation_SweepHitResult                   (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_AddRelativeRotation_SweepHitResult_1                 (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FHitResult                  CallFunc_K2_AddRelativeRotation_SweepHitResult_2                 (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FHitResult                  CallFunc_K2_AddRelativeRotation_SweepHitResult_3                 (IsPlainOldData, NoDestructor, ContainsInstancedReference)

void UBP_Gyroscope_C::ExecuteUbergraph_BP_Gyroscope(int32 EntryPoint, const struct FHitResult& CallFunc_K2_AddRelativeRotation_SweepHitResult, float K2Node_Event_DeltaSeconds, const struct FHitResult& CallFunc_K2_AddRelativeRotation_SweepHitResult_1, const struct FHitResult& CallFunc_K2_AddRelativeRotation_SweepHitResult_2, const struct FHitResult& CallFunc_K2_AddRelativeRotation_SweepHitResult_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Gyroscope_C", "ExecuteUbergraph_BP_Gyroscope");

	Params::UBP_Gyroscope_C_ExecuteUbergraph_BP_Gyroscope_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_K2_AddRelativeRotation_SweepHitResult = CallFunc_K2_AddRelativeRotation_SweepHitResult;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.CallFunc_K2_AddRelativeRotation_SweepHitResult_1 = CallFunc_K2_AddRelativeRotation_SweepHitResult_1;
	Parms.CallFunc_K2_AddRelativeRotation_SweepHitResult_2 = CallFunc_K2_AddRelativeRotation_SweepHitResult_2;
	Parms.CallFunc_K2_AddRelativeRotation_SweepHitResult_3 = CallFunc_K2_AddRelativeRotation_SweepHitResult_3;

	UObject::ProcessEvent(Func, &Parms);

}

}


