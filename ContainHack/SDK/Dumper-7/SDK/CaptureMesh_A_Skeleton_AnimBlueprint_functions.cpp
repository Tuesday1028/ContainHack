#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass CaptureMesh_A_Skeleton_AnimBlueprint.CaptureMesh_A_Skeleton_AnimBlueprint_C
// (None)

class UClass* UCaptureMesh_A_Skeleton_AnimBlueprint_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CaptureMesh_A_Skeleton_AnimBlueprint_C");

	return Clss;
}


// CaptureMesh_A_Skeleton_AnimBlueprint_C CaptureMesh_A_Skeleton_AnimBlueprint.Default__CaptureMesh_A_Skeleton_AnimBlueprint_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCaptureMesh_A_Skeleton_AnimBlueprint_C* UCaptureMesh_A_Skeleton_AnimBlueprint_C::GetDefaultObj()
{
	static class UCaptureMesh_A_Skeleton_AnimBlueprint_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCaptureMesh_A_Skeleton_AnimBlueprint_C*>(UCaptureMesh_A_Skeleton_AnimBlueprint_C::StaticClass()->DefaultObject);

	return Default;
}


// Function CaptureMesh_A_Skeleton_AnimBlueprint.CaptureMesh_A_Skeleton_AnimBlueprint_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UCaptureMesh_A_Skeleton_AnimBlueprint_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CaptureMesh_A_Skeleton_AnimBlueprint_C", "AnimGraph");

	Params::UCaptureMesh_A_Skeleton_AnimBlueprint_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function CaptureMesh_A_Skeleton_AnimBlueprint.CaptureMesh_A_Skeleton_AnimBlueprint_C.ExecuteUbergraph_CaptureMesh_A_Skeleton_AnimBlueprint
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCaptureMesh_A_Skeleton_AnimBlueprint_C::ExecuteUbergraph_CaptureMesh_A_Skeleton_AnimBlueprint(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CaptureMesh_A_Skeleton_AnimBlueprint_C", "ExecuteUbergraph_CaptureMesh_A_Skeleton_AnimBlueprint");

	Params::UCaptureMesh_A_Skeleton_AnimBlueprint_C_ExecuteUbergraph_CaptureMesh_A_Skeleton_AnimBlueprint_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


