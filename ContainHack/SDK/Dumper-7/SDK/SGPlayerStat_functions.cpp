#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SGPlayerStat.SGPlayerStat_C
// (Actor)

class UClass* USGPlayerStat_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SGPlayerStat_C");

	return Clss;
}


// SGPlayerStat_C SGPlayerStat.Default__SGPlayerStat_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USGPlayerStat_C* USGPlayerStat_C::GetDefaultObj()
{
	static class USGPlayerStat_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USGPlayerStat_C*>(USGPlayerStat_C::StaticClass()->DefaultObject);

	return Default;
}


// Function SGPlayerStat.SGPlayerStat_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void USGPlayerStat_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SGPlayerStat_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SGPlayerStat.SGPlayerStat_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USGPlayerStat_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SGPlayerStat_C", "ReceiveTick");

	Params::USGPlayerStat_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SGPlayerStat.SGPlayerStat_C.IsPlay_Multi
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:

void USGPlayerStat_C::IsPlay_Multi()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SGPlayerStat_C", "IsPlay_Multi");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SGPlayerStat.SGPlayerStat_C.IsPlay_Server
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:

void USGPlayerStat_C::IsPlay_Server()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SGPlayerStat_C", "IsPlay_Server");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SGPlayerStat.SGPlayerStat_C.ExecuteUbergraph_SGPlayerStat
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USGPlayerStat_C::ExecuteUbergraph_SGPlayerStat(int32 EntryPoint, float K2Node_Event_DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SGPlayerStat_C", "ExecuteUbergraph_SGPlayerStat");

	Params::USGPlayerStat_C_ExecuteUbergraph_SGPlayerStat_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}

}


