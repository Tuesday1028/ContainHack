#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WG_TestDemo.WG_TestDemo_C
// (None)

class UClass* UWG_TestDemo_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WG_TestDemo_C");

	return Clss;
}


// WG_TestDemo_C WG_TestDemo.Default__WG_TestDemo_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWG_TestDemo_C* UWG_TestDemo_C::GetDefaultObj()
{
	static class UWG_TestDemo_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWG_TestDemo_C*>(UWG_TestDemo_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WG_TestDemo.WG_TestDemo_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWG_TestDemo_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WG_TestDemo_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WG_TestDemo.WG_TestDemo_C.ExecuteUbergraph_WG_TestDemo
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWG_TestDemo_C::ExecuteUbergraph_WG_TestDemo(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WG_TestDemo_C", "ExecuteUbergraph_WG_TestDemo");

	Params::UWG_TestDemo_C_ExecuteUbergraph_WG_TestDemo_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


