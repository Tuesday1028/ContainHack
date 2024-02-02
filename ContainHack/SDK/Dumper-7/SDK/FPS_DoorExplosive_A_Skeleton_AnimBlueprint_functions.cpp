#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass FPS_DoorExplosive_A_Skeleton_AnimBlueprint.FPS_DoorExplosive_A_Skeleton_AnimBlueprint_C
// (None)

class UClass* UFPS_DoorExplosive_A_Skeleton_AnimBlueprint_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FPS_DoorExplosive_A_Skeleton_AnimBlueprint_C");

	return Clss;
}


// FPS_DoorExplosive_A_Skeleton_AnimBlueprint_C FPS_DoorExplosive_A_Skeleton_AnimBlueprint.Default__FPS_DoorExplosive_A_Skeleton_AnimBlueprint_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFPS_DoorExplosive_A_Skeleton_AnimBlueprint_C* UFPS_DoorExplosive_A_Skeleton_AnimBlueprint_C::GetDefaultObj()
{
	static class UFPS_DoorExplosive_A_Skeleton_AnimBlueprint_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFPS_DoorExplosive_A_Skeleton_AnimBlueprint_C*>(UFPS_DoorExplosive_A_Skeleton_AnimBlueprint_C::StaticClass()->DefaultObject);

	return Default;
}


// Function FPS_DoorExplosive_A_Skeleton_AnimBlueprint.FPS_DoorExplosive_A_Skeleton_AnimBlueprint_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UFPS_DoorExplosive_A_Skeleton_AnimBlueprint_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FPS_DoorExplosive_A_Skeleton_AnimBlueprint_C", "AnimGraph");

	Params::UFPS_DoorExplosive_A_Skeleton_AnimBlueprint_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function FPS_DoorExplosive_A_Skeleton_AnimBlueprint.FPS_DoorExplosive_A_Skeleton_AnimBlueprint_C.ExecuteUbergraph_FPS_DoorExplosive_A_Skeleton_AnimBlueprint
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFPS_DoorExplosive_A_Skeleton_AnimBlueprint_C::ExecuteUbergraph_FPS_DoorExplosive_A_Skeleton_AnimBlueprint(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FPS_DoorExplosive_A_Skeleton_AnimBlueprint_C", "ExecuteUbergraph_FPS_DoorExplosive_A_Skeleton_AnimBlueprint");

	Params::UFPS_DoorExplosive_A_Skeleton_AnimBlueprint_C_ExecuteUbergraph_FPS_DoorExplosive_A_Skeleton_AnimBlueprint_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


