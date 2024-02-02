#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Datapad.BP_Datapad_C
// (Actor)

class UClass* UBP_Datapad_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Datapad_C");

	return Clss;
}


// BP_Datapad_C BP_Datapad.Default__BP_Datapad_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_Datapad_C* UBP_Datapad_C::GetDefaultObj()
{
	static class UBP_Datapad_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_Datapad_C*>(UBP_Datapad_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Datapad.BP_Datapad_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void UBP_Datapad_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Datapad_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Datapad.BP_Datapad_C.ExecuteUbergraph_BP_Datapad
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Datapad_C::ExecuteUbergraph_BP_Datapad(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Datapad_C", "ExecuteUbergraph_BP_Datapad");

	Params::UBP_Datapad_C_ExecuteUbergraph_BP_Datapad_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


