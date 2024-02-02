#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass AB_FlipSightRear.AB_FlipSightRear_C
// (None)

class UClass* UAB_FlipSightRear_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AB_FlipSightRear_C");

	return Clss;
}


// AB_FlipSightRear_C AB_FlipSightRear.Default__AB_FlipSightRear_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAB_FlipSightRear_C* UAB_FlipSightRear_C::GetDefaultObj()
{
	static class UAB_FlipSightRear_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAB_FlipSightRear_C*>(UAB_FlipSightRear_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AB_FlipSightRear.AB_FlipSightRear_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UAB_FlipSightRear_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AB_FlipSightRear_C", "AnimGraph");

	Params::UAB_FlipSightRear_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function AB_FlipSightRear.AB_FlipSightRear_C.ExecuteUbergraph_AB_FlipSightRear
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAB_FlipSightRear_C::ExecuteUbergraph_AB_FlipSightRear(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AB_FlipSightRear_C", "ExecuteUbergraph_AB_FlipSightRear");

	Params::UAB_FlipSightRear_C_ExecuteUbergraph_AB_FlipSightRear_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


