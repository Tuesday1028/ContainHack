#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DatapadHedefi.DatapadHedefi_C
// (Actor)

class UClass* UDatapadHedefi_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DatapadHedefi_C");

	return Clss;
}


// DatapadHedefi_C DatapadHedefi.Default__DatapadHedefi_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDatapadHedefi_C* UDatapadHedefi_C::GetDefaultObj()
{
	static class UDatapadHedefi_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDatapadHedefi_C*>(UDatapadHedefi_C::StaticClass()->DefaultObject);

	return Default;
}


// Function DatapadHedefi.DatapadHedefi_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void UDatapadHedefi_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DatapadHedefi_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function DatapadHedefi.DatapadHedefi_C.ExecuteUbergraph_DatapadHedefi
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDatapadHedefi_C::ExecuteUbergraph_DatapadHedefi(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DatapadHedefi_C", "ExecuteUbergraph_DatapadHedefi");

	Params::UDatapadHedefi_C_ExecuteUbergraph_DatapadHedefi_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


