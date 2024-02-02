#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Target1.BP_Target1_C
// (Actor)

class UClass* UBP_Target1_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Target1_C");

	return Clss;
}


// BP_Target1_C BP_Target1.Default__BP_Target1_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_Target1_C* UBP_Target1_C::GetDefaultObj()
{
	static class UBP_Target1_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_Target1_C*>(UBP_Target1_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Target1.BP_Target1_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void UBP_Target1_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Target1_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Target1.BP_Target1_C.ExecuteUbergraph_BP_Target1
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ULevelSequenceActor*         CallFunc_CreateLevelSequencePlayer_OutActor                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ULevelSequencePlayer*        CallFunc_CreateLevelSequencePlayer_ReturnValue                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_Target1_C::ExecuteUbergraph_BP_Target1(int32 EntryPoint, class ULevelSequenceActor* CallFunc_CreateLevelSequencePlayer_OutActor, class ULevelSequencePlayer* CallFunc_CreateLevelSequencePlayer_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Target1_C", "ExecuteUbergraph_BP_Target1");

	Params::UBP_Target1_C_ExecuteUbergraph_BP_Target1_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_CreateLevelSequencePlayer_OutActor = CallFunc_CreateLevelSequencePlayer_OutActor;
	Parms.CallFunc_CreateLevelSequencePlayer_ReturnValue = CallFunc_CreateLevelSequencePlayer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


