#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass CrawlerTentacle_AnimBP.CrawlerTentacle_AnimBP_C
// (None)

class UClass* UCrawlerTentacle_AnimBP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CrawlerTentacle_AnimBP_C");

	return Clss;
}


// CrawlerTentacle_AnimBP_C CrawlerTentacle_AnimBP.Default__CrawlerTentacle_AnimBP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCrawlerTentacle_AnimBP_C* UCrawlerTentacle_AnimBP_C::GetDefaultObj()
{
	static class UCrawlerTentacle_AnimBP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCrawlerTentacle_AnimBP_C*>(UCrawlerTentacle_AnimBP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function CrawlerTentacle_AnimBP.CrawlerTentacle_AnimBP_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UCrawlerTentacle_AnimBP_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CrawlerTentacle_AnimBP_C", "AnimGraph");

	Params::UCrawlerTentacle_AnimBP_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function CrawlerTentacle_AnimBP.CrawlerTentacle_AnimBP_C.ExecuteUbergraph_CrawlerTentacle_AnimBP
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCrawlerTentacle_AnimBP_C::ExecuteUbergraph_CrawlerTentacle_AnimBP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CrawlerTentacle_AnimBP_C", "ExecuteUbergraph_CrawlerTentacle_AnimBP");

	Params::UCrawlerTentacle_AnimBP_C_ExecuteUbergraph_CrawlerTentacle_AnimBP_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


