#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass Pin_Skeleton_AnimBlueprint.Pin_Skeleton_AnimBlueprint_C
// (None)

class UClass* UPin_Skeleton_AnimBlueprint_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Pin_Skeleton_AnimBlueprint_C");

	return Clss;
}


// Pin_Skeleton_AnimBlueprint_C Pin_Skeleton_AnimBlueprint.Default__Pin_Skeleton_AnimBlueprint_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPin_Skeleton_AnimBlueprint_C* UPin_Skeleton_AnimBlueprint_C::GetDefaultObj()
{
	static class UPin_Skeleton_AnimBlueprint_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPin_Skeleton_AnimBlueprint_C*>(UPin_Skeleton_AnimBlueprint_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Pin_Skeleton_AnimBlueprint.Pin_Skeleton_AnimBlueprint_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UPin_Skeleton_AnimBlueprint_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Pin_Skeleton_AnimBlueprint_C", "AnimGraph");

	Params::UPin_Skeleton_AnimBlueprint_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function Pin_Skeleton_AnimBlueprint.Pin_Skeleton_AnimBlueprint_C.ExecuteUbergraph_Pin_Skeleton_AnimBlueprint
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPin_Skeleton_AnimBlueprint_C::ExecuteUbergraph_Pin_Skeleton_AnimBlueprint(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Pin_Skeleton_AnimBlueprint_C", "ExecuteUbergraph_Pin_Skeleton_AnimBlueprint");

	Params::UPin_Skeleton_AnimBlueprint_C_ExecuteUbergraph_Pin_Skeleton_AnimBlueprint_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


