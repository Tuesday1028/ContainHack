#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass DoorCamera_A_Skeleton_AnimBlueprint.DoorCamera_A_Skeleton_AnimBlueprint_C
// (None)

class UClass* UDoorCamera_A_Skeleton_AnimBlueprint_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DoorCamera_A_Skeleton_AnimBlueprint_C");

	return Clss;
}


// DoorCamera_A_Skeleton_AnimBlueprint_C DoorCamera_A_Skeleton_AnimBlueprint.Default__DoorCamera_A_Skeleton_AnimBlueprint_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDoorCamera_A_Skeleton_AnimBlueprint_C* UDoorCamera_A_Skeleton_AnimBlueprint_C::GetDefaultObj()
{
	static class UDoorCamera_A_Skeleton_AnimBlueprint_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDoorCamera_A_Skeleton_AnimBlueprint_C*>(UDoorCamera_A_Skeleton_AnimBlueprint_C::StaticClass()->DefaultObject);

	return Default;
}


// Function DoorCamera_A_Skeleton_AnimBlueprint.DoorCamera_A_Skeleton_AnimBlueprint_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UDoorCamera_A_Skeleton_AnimBlueprint_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DoorCamera_A_Skeleton_AnimBlueprint_C", "AnimGraph");

	Params::UDoorCamera_A_Skeleton_AnimBlueprint_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function DoorCamera_A_Skeleton_AnimBlueprint.DoorCamera_A_Skeleton_AnimBlueprint_C.ExecuteUbergraph_DoorCamera_A_Skeleton_AnimBlueprint
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDoorCamera_A_Skeleton_AnimBlueprint_C::ExecuteUbergraph_DoorCamera_A_Skeleton_AnimBlueprint(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DoorCamera_A_Skeleton_AnimBlueprint_C", "ExecuteUbergraph_DoorCamera_A_Skeleton_AnimBlueprint");

	Params::UDoorCamera_A_Skeleton_AnimBlueprint_C_ExecuteUbergraph_DoorCamera_A_Skeleton_AnimBlueprint_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


