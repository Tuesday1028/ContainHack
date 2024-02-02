#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass ArabaSeq.ArabaSeq_C
// (None)

class UClass* UArabaSeq_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ArabaSeq_C");

	return Clss;
}


// ArabaSeq_C ArabaSeq.Default__ArabaSeq_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UArabaSeq_C* UArabaSeq_C::GetDefaultObj()
{
	static class UArabaSeq_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UArabaSeq_C*>(UArabaSeq_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ArabaSeq.ArabaSeq_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UArabaSeq_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArabaSeq_C", "AnimGraph");

	Params::UArabaSeq_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function ArabaSeq.ArabaSeq_C.ExecuteUbergraph_ArabaSeq
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UArabaSeq_C::ExecuteUbergraph_ArabaSeq(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArabaSeq_C", "ExecuteUbergraph_ArabaSeq");

	Params::UArabaSeq_C_ExecuteUbergraph_ArabaSeq_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


