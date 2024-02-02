#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass CaptureMesh_A_Skeleton_AnimBlueprint_FPS.CaptureMesh_A_Skeleton_AnimBlueprint_FPS_C
// (None)

class UClass* UCaptureMesh_A_Skeleton_AnimBlueprint_FPS_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CaptureMesh_A_Skeleton_AnimBlueprint_FPS_C");

	return Clss;
}


// CaptureMesh_A_Skeleton_AnimBlueprint_FPS_C CaptureMesh_A_Skeleton_AnimBlueprint_FPS.Default__CaptureMesh_A_Skeleton_AnimBlueprint_FPS_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCaptureMesh_A_Skeleton_AnimBlueprint_FPS_C* UCaptureMesh_A_Skeleton_AnimBlueprint_FPS_C::GetDefaultObj()
{
	static class UCaptureMesh_A_Skeleton_AnimBlueprint_FPS_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCaptureMesh_A_Skeleton_AnimBlueprint_FPS_C*>(UCaptureMesh_A_Skeleton_AnimBlueprint_FPS_C::StaticClass()->DefaultObject);

	return Default;
}


// Function CaptureMesh_A_Skeleton_AnimBlueprint_FPS.CaptureMesh_A_Skeleton_AnimBlueprint_FPS_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UCaptureMesh_A_Skeleton_AnimBlueprint_FPS_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CaptureMesh_A_Skeleton_AnimBlueprint_FPS_C", "AnimGraph");

	Params::UCaptureMesh_A_Skeleton_AnimBlueprint_FPS_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function CaptureMesh_A_Skeleton_AnimBlueprint_FPS.CaptureMesh_A_Skeleton_AnimBlueprint_FPS_C.ExecuteUbergraph_CaptureMesh_A_Skeleton_AnimBlueprint_FPS
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCaptureMesh_A_Skeleton_AnimBlueprint_FPS_C::ExecuteUbergraph_CaptureMesh_A_Skeleton_AnimBlueprint_FPS(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CaptureMesh_A_Skeleton_AnimBlueprint_FPS_C", "ExecuteUbergraph_CaptureMesh_A_Skeleton_AnimBlueprint_FPS");

	Params::UCaptureMesh_A_Skeleton_AnimBlueprint_FPS_C_ExecuteUbergraph_CaptureMesh_A_Skeleton_AnimBlueprint_FPS_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


