#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass MultiTool_Skeleton_AnimBlueprint.MultiTool_Skeleton_AnimBlueprint_C
// (None)

class UClass* UMultiTool_Skeleton_AnimBlueprint_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MultiTool_Skeleton_AnimBlueprint_C");

	return Clss;
}


// MultiTool_Skeleton_AnimBlueprint_C MultiTool_Skeleton_AnimBlueprint.Default__MultiTool_Skeleton_AnimBlueprint_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMultiTool_Skeleton_AnimBlueprint_C* UMultiTool_Skeleton_AnimBlueprint_C::GetDefaultObj()
{
	static class UMultiTool_Skeleton_AnimBlueprint_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMultiTool_Skeleton_AnimBlueprint_C*>(UMultiTool_Skeleton_AnimBlueprint_C::StaticClass()->DefaultObject);

	return Default;
}


// Function MultiTool_Skeleton_AnimBlueprint.MultiTool_Skeleton_AnimBlueprint_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UMultiTool_Skeleton_AnimBlueprint_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MultiTool_Skeleton_AnimBlueprint_C", "AnimGraph");

	Params::UMultiTool_Skeleton_AnimBlueprint_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function MultiTool_Skeleton_AnimBlueprint.MultiTool_Skeleton_AnimBlueprint_C.ExecuteUbergraph_MultiTool_Skeleton_AnimBlueprint
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMultiTool_Skeleton_AnimBlueprint_C::ExecuteUbergraph_MultiTool_Skeleton_AnimBlueprint(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MultiTool_Skeleton_AnimBlueprint_C", "ExecuteUbergraph_MultiTool_Skeleton_AnimBlueprint");

	Params::UMultiTool_Skeleton_AnimBlueprint_C_ExecuteUbergraph_MultiTool_Skeleton_AnimBlueprint_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


