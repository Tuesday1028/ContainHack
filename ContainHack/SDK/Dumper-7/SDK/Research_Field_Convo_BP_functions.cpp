#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Research_Field_Convo_BP.Research_Field_Convo_BP_C
// (Actor)

class UClass* UResearch_Field_Convo_BP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Research_Field_Convo_BP_C");

	return Clss;
}


// Research_Field_Convo_BP_C Research_Field_Convo_BP.Default__Research_Field_Convo_BP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UResearch_Field_Convo_BP_C* UResearch_Field_Convo_BP_C::GetDefaultObj()
{
	static class UResearch_Field_Convo_BP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UResearch_Field_Convo_BP_C*>(UResearch_Field_Convo_BP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Research_Field_Convo_BP.Research_Field_Convo_BP_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void UResearch_Field_Convo_BP_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Research_Field_Convo_BP_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Research_Field_Convo_BP.Research_Field_Convo_BP_C.ExecuteUbergraph_Research_Field_Convo_BP
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*             CallFunc_SpawnSoundAtLocation_ReturnValue                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UResearch_Field_Convo_BP_C::ExecuteUbergraph_Research_Field_Convo_BP(int32 EntryPoint, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAtLocation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Research_Field_Convo_BP_C", "ExecuteUbergraph_Research_Field_Convo_BP");

	Params::UResearch_Field_Convo_BP_C_ExecuteUbergraph_Research_Field_Convo_BP_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = CallFunc_K2_GetComponentLocation_ReturnValue;
	Parms.CallFunc_SpawnSoundAtLocation_ReturnValue = CallFunc_SpawnSoundAtLocation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


