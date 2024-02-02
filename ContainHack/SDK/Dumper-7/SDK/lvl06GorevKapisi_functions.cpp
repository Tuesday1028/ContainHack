#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass lvl06GorevKapisi.lvl06GorevKapisi (Director BP)_C
// (None)

class UClass* ULvl06GorevKapisi__Director_BP__C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("lvl06GorevKapisi (Director BP)_C");

	return Clss;
}


// lvl06GorevKapisi (Director BP)_C lvl06GorevKapisi.Default__lvl06GorevKapisi (Director BP)_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULvl06GorevKapisi__Director_BP__C* ULvl06GorevKapisi__Director_BP__C::GetDefaultObj()
{
	static class ULvl06GorevKapisi__Director_BP__C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULvl06GorevKapisi__Director_BP__C*>(ULvl06GorevKapisi__Director_BP__C::StaticClass()->DefaultObject);

	return Default;
}


// Function lvl06GorevKapisi.lvl06GorevKapisi (Director BP)_C.SequenceEvent__ENTRYPOINTlvl06GorevKapisi (Director BP)_0
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAmbientSound*               bunker_door2_Cue                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ULvl06GorevKapisi__Director_BP__C::SequenceEvent__ENTRYPOINTlvl06GorevKapisi__Director_BP__0(class UAmbientSound* bunker_door2_Cue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("lvl06GorevKapisi (Director BP)_C", "SequenceEvent__ENTRYPOINTlvl06GorevKapisi (Director BP)_0");

	Params::ULvl06GorevKapisi__Director_BP__C_SequenceEvent__ENTRYPOINTlvl06GorevKapisi__Director_BP__0_Params Parms{};

	Parms.bunker_door2_Cue = bunker_door2_Cue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function lvl06GorevKapisi.lvl06GorevKapisi (Director BP)_C.SequenceEvent__ENTRYPOINTlvl06GorevKapisi (Director BP)
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAmbientSound*               bunker_door1_Cue                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ULvl06GorevKapisi__Director_BP__C::SequenceEvent__ENTRYPOINTlvl06GorevKapisi__Director_BP_(class UAmbientSound* bunker_door1_Cue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("lvl06GorevKapisi (Director BP)_C", "SequenceEvent__ENTRYPOINTlvl06GorevKapisi (Director BP)");

	Params::ULvl06GorevKapisi__Director_BP__C_SequenceEvent__ENTRYPOINTlvl06GorevKapisi__Director_BP__Params Parms{};

	Parms.bunker_door1_Cue = bunker_door1_Cue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function lvl06GorevKapisi.lvl06GorevKapisi (Director BP)_C.bunker_door1_Cue_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAmbientSound*               bunker_door1_Cue                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              StartTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULvl06GorevKapisi__Director_BP__C::bunker_door1_Cue_Event(class UAmbientSound* bunker_door1_Cue, float StartTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("lvl06GorevKapisi (Director BP)_C", "bunker_door1_Cue_Event");

	Params::ULvl06GorevKapisi__Director_BP__C_bunker_door1_Cue_Event_Params Parms{};

	Parms.bunker_door1_Cue = bunker_door1_Cue;
	Parms.StartTime = StartTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function lvl06GorevKapisi.lvl06GorevKapisi (Director BP)_C.bunker_door2_Cue_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAmbientSound*               bunker_door2_Cue                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              StartTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULvl06GorevKapisi__Director_BP__C::bunker_door2_Cue_Event(class UAmbientSound* bunker_door2_Cue, float StartTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("lvl06GorevKapisi (Director BP)_C", "bunker_door2_Cue_Event");

	Params::ULvl06GorevKapisi__Director_BP__C_bunker_door2_Cue_Event_Params Parms{};

	Parms.bunker_door2_Cue = bunker_door2_Cue;
	Parms.StartTime = StartTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function lvl06GorevKapisi.lvl06GorevKapisi (Director BP)_C.ExecuteUbergraph_lvl06GorevKapisi (Director BP)
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAmbientSound*               K2Node_CustomEvent_bunker_door2_Cue                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_StartTime                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAmbientSound*               K2Node_CustomEvent_bunker_door1_Cue                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_StartTime_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULvl06GorevKapisi__Director_BP__C::ExecuteUbergraph_lvl06GorevKapisi__Director_BP_(int32 EntryPoint, class UAmbientSound* K2Node_CustomEvent_bunker_door2_Cue, float K2Node_CustomEvent_StartTime, class UAmbientSound* K2Node_CustomEvent_bunker_door1_Cue, float K2Node_CustomEvent_StartTime_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("lvl06GorevKapisi (Director BP)_C", "ExecuteUbergraph_lvl06GorevKapisi (Director BP)");

	Params::ULvl06GorevKapisi__Director_BP__C_ExecuteUbergraph_lvl06GorevKapisi__Director_BP__Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_bunker_door2_Cue = K2Node_CustomEvent_bunker_door2_Cue;
	Parms.K2Node_CustomEvent_StartTime = K2Node_CustomEvent_StartTime;
	Parms.K2Node_CustomEvent_bunker_door1_Cue = K2Node_CustomEvent_bunker_door1_Cue;
	Parms.K2Node_CustomEvent_StartTime_1 = K2Node_CustomEvent_StartTime_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


