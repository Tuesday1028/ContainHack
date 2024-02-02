#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass ALS_PlayerCameraBehavior.ALS_PlayerCameraBehavior_C
// (None)

class UClass* UALS_PlayerCameraBehavior_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ALS_PlayerCameraBehavior_C");

	return Clss;
}


// ALS_PlayerCameraBehavior_C ALS_PlayerCameraBehavior.Default__ALS_PlayerCameraBehavior_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UALS_PlayerCameraBehavior_C* UALS_PlayerCameraBehavior_C::GetDefaultObj()
{
	static class UALS_PlayerCameraBehavior_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UALS_PlayerCameraBehavior_C*>(UALS_PlayerCameraBehavior_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ALS_PlayerCameraBehavior.ALS_PlayerCameraBehavior_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UALS_PlayerCameraBehavior_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ALS_PlayerCameraBehavior_C", "AnimGraph");

	Params::UALS_PlayerCameraBehavior_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function ALS_PlayerCameraBehavior.ALS_PlayerCameraBehavior_C.ExecuteUbergraph_ALS_PlayerCameraBehavior
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UALS_PlayerCameraBehavior_C::ExecuteUbergraph_ALS_PlayerCameraBehavior(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ALS_PlayerCameraBehavior_C", "ExecuteUbergraph_ALS_PlayerCameraBehavior");

	Params::UALS_PlayerCameraBehavior_C_ExecuteUbergraph_ALS_PlayerCameraBehavior_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


