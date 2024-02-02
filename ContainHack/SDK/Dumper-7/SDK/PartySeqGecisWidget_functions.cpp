#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass PartySeqGecisWidget.PartySeqGecisWidget_C
// (None)

class UClass* UPartySeqGecisWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PartySeqGecisWidget_C");

	return Clss;
}


// PartySeqGecisWidget_C PartySeqGecisWidget.Default__PartySeqGecisWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPartySeqGecisWidget_C* UPartySeqGecisWidget_C::GetDefaultObj()
{
	static class UPartySeqGecisWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPartySeqGecisWidget_C*>(UPartySeqGecisWidget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function PartySeqGecisWidget.PartySeqGecisWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UPartySeqGecisWidget_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PartySeqGecisWidget_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PartySeqGecisWidget.PartySeqGecisWidget_C.ExecuteUbergraph_PartySeqGecisWidget
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UPartySeqGecisWidget_C::ExecuteUbergraph_PartySeqGecisWidget(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PartySeqGecisWidget_C", "ExecuteUbergraph_PartySeqGecisWidget");

	Params::UPartySeqGecisWidget_C_ExecuteUbergraph_PartySeqGecisWidget_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


