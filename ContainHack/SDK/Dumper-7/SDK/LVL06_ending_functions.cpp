#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LVL06_ending.LVL06_ending (Director BP)_C
// (None)

class UClass* ULVL06_ending__Director_BP__C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LVL06_ending (Director BP)_C");

	return Clss;
}


// LVL06_ending (Director BP)_C LVL06_ending.Default__LVL06_ending (Director BP)_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULVL06_ending__Director_BP__C* ULVL06_ending__Director_BP__C::GetDefaultObj()
{
	static class ULVL06_ending__Director_BP__C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULVL06_ending__Director_BP__C*>(ULVL06_ending__Director_BP__C::StaticClass()->DefaultObject);

	return Default;
}


// Function LVL06_ending.LVL06_ending (Director BP)_C.SequenceEvent__ENTRYPOINTLVL06_ending (Director BP)_11
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAmbientSound*               Cue_electric_blast                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ULVL06_ending__Director_BP__C::SequenceEvent__ENTRYPOINTLVL06_ending__Director_BP__11(class UAmbientSound* Cue_electric_blast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LVL06_ending (Director BP)_C", "SequenceEvent__ENTRYPOINTLVL06_ending (Director BP)_11");

	Params::ULVL06_ending__Director_BP__C_SequenceEvent__ENTRYPOINTLVL06_ending__Director_BP__11_Params Parms{};

	Parms.Cue_electric_blast = Cue_electric_blast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LVL06_ending.LVL06_ending (Director BP)_C.SequenceEvent__ENTRYPOINTLVL06_ending (Director BP)_10
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UNiagaraActor*               FX_Cube_Explode                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ULVL06_ending__Director_BP__C::SequenceEvent__ENTRYPOINTLVL06_ending__Director_BP__10(class UNiagaraActor* FX_Cube_Explode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LVL06_ending (Director BP)_C", "SequenceEvent__ENTRYPOINTLVL06_ending (Director BP)_10");

	Params::ULVL06_ending__Director_BP__C_SequenceEvent__ENTRYPOINTLVL06_ending__Director_BP__10_Params Parms{};

	Parms.FX_Cube_Explode = FX_Cube_Explode;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LVL06_ending.LVL06_ending (Director BP)_C.SequenceEvent__ENTRYPOINTLVL06_ending (Director BP)_9
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UNiagaraActor*               FX_Zombie_8                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ULVL06_ending__Director_BP__C::SequenceEvent__ENTRYPOINTLVL06_ending__Director_BP__9(class UNiagaraActor* FX_Zombie_8)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LVL06_ending (Director BP)_C", "SequenceEvent__ENTRYPOINTLVL06_ending (Director BP)_9");

	Params::ULVL06_ending__Director_BP__C_SequenceEvent__ENTRYPOINTLVL06_ending__Director_BP__9_Params Parms{};

	Parms.FX_Zombie_8 = FX_Zombie_8;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LVL06_ending.LVL06_ending (Director BP)_C.SequenceEvent__ENTRYPOINTLVL06_ending (Director BP)_8
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UNiagaraActor*               FX_Zombie_7                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ULVL06_ending__Director_BP__C::SequenceEvent__ENTRYPOINTLVL06_ending__Director_BP__8(class UNiagaraActor* FX_Zombie_7)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LVL06_ending (Director BP)_C", "SequenceEvent__ENTRYPOINTLVL06_ending (Director BP)_8");

	Params::ULVL06_ending__Director_BP__C_SequenceEvent__ENTRYPOINTLVL06_ending__Director_BP__8_Params Parms{};

	Parms.FX_Zombie_7 = FX_Zombie_7;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LVL06_ending.LVL06_ending (Director BP)_C.SequenceEvent__ENTRYPOINTLVL06_ending (Director BP)_7
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UNiagaraActor*               FX_Zombie_16                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ULVL06_ending__Director_BP__C::SequenceEvent__ENTRYPOINTLVL06_ending__Director_BP__7(class UNiagaraActor* FX_Zombie_16)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LVL06_ending (Director BP)_C", "SequenceEvent__ENTRYPOINTLVL06_ending (Director BP)_7");

	Params::ULVL06_ending__Director_BP__C_SequenceEvent__ENTRYPOINTLVL06_ending__Director_BP__7_Params Parms{};

	Parms.FX_Zombie_16 = FX_Zombie_16;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LVL06_ending.LVL06_ending (Director BP)_C.SequenceEvent__ENTRYPOINTLVL06_ending (Director BP)_6
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UNiagaraActor*               FX_Zombie_15                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ULVL06_ending__Director_BP__C::SequenceEvent__ENTRYPOINTLVL06_ending__Director_BP__6(class UNiagaraActor* FX_Zombie_15)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LVL06_ending (Director BP)_C", "SequenceEvent__ENTRYPOINTLVL06_ending (Director BP)_6");

	Params::ULVL06_ending__Director_BP__C_SequenceEvent__ENTRYPOINTLVL06_ending__Director_BP__6_Params Parms{};

	Parms.FX_Zombie_15 = FX_Zombie_15;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LVL06_ending.LVL06_ending (Director BP)_C.SequenceEvent__ENTRYPOINTLVL06_ending (Director BP)_5
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UNiagaraActor*               FX_Zombie_14                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ULVL06_ending__Director_BP__C::SequenceEvent__ENTRYPOINTLVL06_ending__Director_BP__5(class UNiagaraActor* FX_Zombie_14)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LVL06_ending (Director BP)_C", "SequenceEvent__ENTRYPOINTLVL06_ending (Director BP)_5");

	Params::ULVL06_ending__Director_BP__C_SequenceEvent__ENTRYPOINTLVL06_ending__Director_BP__5_Params Parms{};

	Parms.FX_Zombie_14 = FX_Zombie_14;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LVL06_ending.LVL06_ending (Director BP)_C.SequenceEvent__ENTRYPOINTLVL06_ending (Director BP)_4
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UNiagaraActor*               FX_Zombie_13                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ULVL06_ending__Director_BP__C::SequenceEvent__ENTRYPOINTLVL06_ending__Director_BP__4(class UNiagaraActor* FX_Zombie_13)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LVL06_ending (Director BP)_C", "SequenceEvent__ENTRYPOINTLVL06_ending (Director BP)_4");

	Params::ULVL06_ending__Director_BP__C_SequenceEvent__ENTRYPOINTLVL06_ending__Director_BP__4_Params Parms{};

	Parms.FX_Zombie_13 = FX_Zombie_13;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LVL06_ending.LVL06_ending (Director BP)_C.SequenceEvent__ENTRYPOINTLVL06_ending (Director BP)_3
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UNiagaraActor*               FX_Zombie_12                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ULVL06_ending__Director_BP__C::SequenceEvent__ENTRYPOINTLVL06_ending__Director_BP__3(class UNiagaraActor* FX_Zombie_12)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LVL06_ending (Director BP)_C", "SequenceEvent__ENTRYPOINTLVL06_ending (Director BP)_3");

	Params::ULVL06_ending__Director_BP__C_SequenceEvent__ENTRYPOINTLVL06_ending__Director_BP__3_Params Parms{};

	Parms.FX_Zombie_12 = FX_Zombie_12;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LVL06_ending.LVL06_ending (Director BP)_C.SequenceEvent__ENTRYPOINTLVL06_ending (Director BP)_2
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UNiagaraActor*               FX_Zombie_11                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ULVL06_ending__Director_BP__C::SequenceEvent__ENTRYPOINTLVL06_ending__Director_BP__2(class UNiagaraActor* FX_Zombie_11)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LVL06_ending (Director BP)_C", "SequenceEvent__ENTRYPOINTLVL06_ending (Director BP)_2");

	Params::ULVL06_ending__Director_BP__C_SequenceEvent__ENTRYPOINTLVL06_ending__Director_BP__2_Params Parms{};

	Parms.FX_Zombie_11 = FX_Zombie_11;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LVL06_ending.LVL06_ending (Director BP)_C.SequenceEvent__ENTRYPOINTLVL06_ending (Director BP)_1
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UNiagaraActor*               FX_Zombie_10                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ULVL06_ending__Director_BP__C::SequenceEvent__ENTRYPOINTLVL06_ending__Director_BP__1(class UNiagaraActor* FX_Zombie_10)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LVL06_ending (Director BP)_C", "SequenceEvent__ENTRYPOINTLVL06_ending (Director BP)_1");

	Params::ULVL06_ending__Director_BP__C_SequenceEvent__ENTRYPOINTLVL06_ending__Director_BP__1_Params Parms{};

	Parms.FX_Zombie_10 = FX_Zombie_10;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LVL06_ending.LVL06_ending (Director BP)_C.SequenceEvent__ENTRYPOINTLVL06_ending (Director BP)_0
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UNiagaraActor*               FX_Zombie_06                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ULVL06_ending__Director_BP__C::SequenceEvent__ENTRYPOINTLVL06_ending__Director_BP__0(class UNiagaraActor* FX_Zombie_06)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LVL06_ending (Director BP)_C", "SequenceEvent__ENTRYPOINTLVL06_ending (Director BP)_0");

	Params::ULVL06_ending__Director_BP__C_SequenceEvent__ENTRYPOINTLVL06_ending__Director_BP__0_Params Parms{};

	Parms.FX_Zombie_06 = FX_Zombie_06;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LVL06_ending.LVL06_ending (Director BP)_C.SequenceEvent__ENTRYPOINTLVL06_ending (Director BP)
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UNiagaraActor*               FX_Zombie_9                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ULVL06_ending__Director_BP__C::SequenceEvent__ENTRYPOINTLVL06_ending__Director_BP_(class UNiagaraActor* FX_Zombie_9)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LVL06_ending (Director BP)_C", "SequenceEvent__ENTRYPOINTLVL06_ending (Director BP)");

	Params::ULVL06_ending__Director_BP__C_SequenceEvent__ENTRYPOINTLVL06_ending__Director_BP__Params Parms{};

	Parms.FX_Zombie_9 = FX_Zombie_9;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LVL06_ending.LVL06_ending (Director BP)_C.FX_Zombie_9_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UNiagaraActor*               FX_Zombie_9                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ULVL06_ending__Director_BP__C::FX_Zombie_9_Event(class UNiagaraActor* FX_Zombie_9)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LVL06_ending (Director BP)_C", "FX_Zombie_9_Event");

	Params::ULVL06_ending__Director_BP__C_FX_Zombie_9_Event_Params Parms{};

	Parms.FX_Zombie_9 = FX_Zombie_9;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LVL06_ending.LVL06_ending (Director BP)_C.FX_Zombie_06_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UNiagaraActor*               FX_Zombie_06                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ULVL06_ending__Director_BP__C::FX_Zombie_06_Event(class UNiagaraActor* FX_Zombie_06)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LVL06_ending (Director BP)_C", "FX_Zombie_06_Event");

	Params::ULVL06_ending__Director_BP__C_FX_Zombie_06_Event_Params Parms{};

	Parms.FX_Zombie_06 = FX_Zombie_06;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LVL06_ending.LVL06_ending (Director BP)_C.FX_Zombie_10_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UNiagaraActor*               FX_Zombie_10                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ULVL06_ending__Director_BP__C::FX_Zombie_10_Event(class UNiagaraActor* FX_Zombie_10)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LVL06_ending (Director BP)_C", "FX_Zombie_10_Event");

	Params::ULVL06_ending__Director_BP__C_FX_Zombie_10_Event_Params Parms{};

	Parms.FX_Zombie_10 = FX_Zombie_10;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LVL06_ending.LVL06_ending (Director BP)_C.FX_Zombie_11_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UNiagaraActor*               FX_Zombie_11                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ULVL06_ending__Director_BP__C::FX_Zombie_11_Event(class UNiagaraActor* FX_Zombie_11)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LVL06_ending (Director BP)_C", "FX_Zombie_11_Event");

	Params::ULVL06_ending__Director_BP__C_FX_Zombie_11_Event_Params Parms{};

	Parms.FX_Zombie_11 = FX_Zombie_11;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LVL06_ending.LVL06_ending (Director BP)_C.FX_Zombie_12_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UNiagaraActor*               FX_Zombie_12                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ULVL06_ending__Director_BP__C::FX_Zombie_12_Event(class UNiagaraActor* FX_Zombie_12)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LVL06_ending (Director BP)_C", "FX_Zombie_12_Event");

	Params::ULVL06_ending__Director_BP__C_FX_Zombie_12_Event_Params Parms{};

	Parms.FX_Zombie_12 = FX_Zombie_12;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LVL06_ending.LVL06_ending (Director BP)_C.FX_Zombie_13_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UNiagaraActor*               FX_Zombie_13                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ULVL06_ending__Director_BP__C::FX_Zombie_13_Event(class UNiagaraActor* FX_Zombie_13)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LVL06_ending (Director BP)_C", "FX_Zombie_13_Event");

	Params::ULVL06_ending__Director_BP__C_FX_Zombie_13_Event_Params Parms{};

	Parms.FX_Zombie_13 = FX_Zombie_13;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LVL06_ending.LVL06_ending (Director BP)_C.FX_Zombie_14_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UNiagaraActor*               FX_Zombie_14                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ULVL06_ending__Director_BP__C::FX_Zombie_14_Event(class UNiagaraActor* FX_Zombie_14)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LVL06_ending (Director BP)_C", "FX_Zombie_14_Event");

	Params::ULVL06_ending__Director_BP__C_FX_Zombie_14_Event_Params Parms{};

	Parms.FX_Zombie_14 = FX_Zombie_14;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LVL06_ending.LVL06_ending (Director BP)_C.FX_Zombie_15_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UNiagaraActor*               FX_Zombie_15                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ULVL06_ending__Director_BP__C::FX_Zombie_15_Event(class UNiagaraActor* FX_Zombie_15)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LVL06_ending (Director BP)_C", "FX_Zombie_15_Event");

	Params::ULVL06_ending__Director_BP__C_FX_Zombie_15_Event_Params Parms{};

	Parms.FX_Zombie_15 = FX_Zombie_15;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LVL06_ending.LVL06_ending (Director BP)_C.FX_Zombie_16_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UNiagaraActor*               FX_Zombie_16                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ULVL06_ending__Director_BP__C::FX_Zombie_16_Event(class UNiagaraActor* FX_Zombie_16)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LVL06_ending (Director BP)_C", "FX_Zombie_16_Event");

	Params::ULVL06_ending__Director_BP__C_FX_Zombie_16_Event_Params Parms{};

	Parms.FX_Zombie_16 = FX_Zombie_16;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LVL06_ending.LVL06_ending (Director BP)_C.FX_Zombie_7_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UNiagaraActor*               FX_Zombie_7                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ULVL06_ending__Director_BP__C::FX_Zombie_7_Event(class UNiagaraActor* FX_Zombie_7)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LVL06_ending (Director BP)_C", "FX_Zombie_7_Event");

	Params::ULVL06_ending__Director_BP__C_FX_Zombie_7_Event_Params Parms{};

	Parms.FX_Zombie_7 = FX_Zombie_7;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LVL06_ending.LVL06_ending (Director BP)_C.FX_Zombie_8_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UNiagaraActor*               FX_Zombie_8                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ULVL06_ending__Director_BP__C::FX_Zombie_8_Event(class UNiagaraActor* FX_Zombie_8)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LVL06_ending (Director BP)_C", "FX_Zombie_8_Event");

	Params::ULVL06_ending__Director_BP__C_FX_Zombie_8_Event_Params Parms{};

	Parms.FX_Zombie_8 = FX_Zombie_8;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LVL06_ending.LVL06_ending (Director BP)_C.FX_Cube_Explode_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UNiagaraActor*               FX_Cube_Explode                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               bReset                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULVL06_ending__Director_BP__C::FX_Cube_Explode_Event(class UNiagaraActor* FX_Cube_Explode, bool bReset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LVL06_ending (Director BP)_C", "FX_Cube_Explode_Event");

	Params::ULVL06_ending__Director_BP__C_FX_Cube_Explode_Event_Params Parms{};

	Parms.FX_Cube_Explode = FX_Cube_Explode;
	Parms.bReset = bReset;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LVL06_ending.LVL06_ending (Director BP)_C.Cue_electric_blast_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAmbientSound*               Cue_electric_blast                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              StartTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULVL06_ending__Director_BP__C::Cue_electric_blast_Event(class UAmbientSound* Cue_electric_blast, float StartTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LVL06_ending (Director BP)_C", "Cue_electric_blast_Event");

	Params::ULVL06_ending__Director_BP__C_Cue_electric_blast_Event_Params Parms{};

	Parms.Cue_electric_blast = Cue_electric_blast;
	Parms.StartTime = StartTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LVL06_ending.LVL06_ending (Director BP)_C.ExecuteUbergraph_LVL06_ending (Director BP)
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAmbientSound*               K2Node_CustomEvent_Cue_electric_blast                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_StartTime                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNiagaraActor*               K2Node_CustomEvent_FX_Zombie_9                                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class USceneComponent*             CallFunc_K2_GetRootComponent_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UNiagaraActor*               K2Node_CustomEvent_FX_Zombie_06                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class USceneComponent*             CallFunc_K2_GetRootComponent_ReturnValue_1                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UNiagaraActor*               K2Node_CustomEvent_FX_Zombie_10                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class USceneComponent*             CallFunc_K2_GetRootComponent_ReturnValue_2                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UNiagaraActor*               K2Node_CustomEvent_FX_Zombie_11                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class USceneComponent*             CallFunc_K2_GetRootComponent_ReturnValue_3                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UNiagaraActor*               K2Node_CustomEvent_FX_Zombie_12                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class USceneComponent*             CallFunc_K2_GetRootComponent_ReturnValue_4                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UNiagaraActor*               K2Node_CustomEvent_FX_Zombie_13                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class USceneComponent*             CallFunc_K2_GetRootComponent_ReturnValue_5                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UNiagaraActor*               K2Node_CustomEvent_FX_Zombie_14                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class USceneComponent*             CallFunc_K2_GetRootComponent_ReturnValue_6                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UNiagaraActor*               K2Node_CustomEvent_FX_Zombie_15                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class USceneComponent*             CallFunc_K2_GetRootComponent_ReturnValue_7                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UNiagaraActor*               K2Node_CustomEvent_FX_Zombie_16                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class USceneComponent*             CallFunc_K2_GetRootComponent_ReturnValue_8                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UNiagaraActor*               K2Node_CustomEvent_FX_Zombie_7                                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class USceneComponent*             CallFunc_K2_GetRootComponent_ReturnValue_9                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UNiagaraActor*               K2Node_CustomEvent_FX_Zombie_8                                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class USceneComponent*             CallFunc_K2_GetRootComponent_ReturnValue_10                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UNiagaraActor*               K2Node_CustomEvent_FX_Cube_Explode                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bReset                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USceneComponent*             CallFunc_K2_GetRootComponent_ReturnValue_11                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void ULVL06_ending__Director_BP__C::ExecuteUbergraph_LVL06_ending__Director_BP_(int32 EntryPoint, class UAmbientSound* K2Node_CustomEvent_Cue_electric_blast, float K2Node_CustomEvent_StartTime, class UNiagaraActor* K2Node_CustomEvent_FX_Zombie_9, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, class UNiagaraActor* K2Node_CustomEvent_FX_Zombie_06, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue_1, class UNiagaraActor* K2Node_CustomEvent_FX_Zombie_10, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue_2, class UNiagaraActor* K2Node_CustomEvent_FX_Zombie_11, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue_3, class UNiagaraActor* K2Node_CustomEvent_FX_Zombie_12, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue_4, class UNiagaraActor* K2Node_CustomEvent_FX_Zombie_13, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue_5, class UNiagaraActor* K2Node_CustomEvent_FX_Zombie_14, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue_6, class UNiagaraActor* K2Node_CustomEvent_FX_Zombie_15, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue_7, class UNiagaraActor* K2Node_CustomEvent_FX_Zombie_16, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue_8, class UNiagaraActor* K2Node_CustomEvent_FX_Zombie_7, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue_9, class UNiagaraActor* K2Node_CustomEvent_FX_Zombie_8, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue_10, class UNiagaraActor* K2Node_CustomEvent_FX_Cube_Explode, bool K2Node_CustomEvent_bReset, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue_11)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LVL06_ending (Director BP)_C", "ExecuteUbergraph_LVL06_ending (Director BP)");

	Params::ULVL06_ending__Director_BP__C_ExecuteUbergraph_LVL06_ending__Director_BP__Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_Cue_electric_blast = K2Node_CustomEvent_Cue_electric_blast;
	Parms.K2Node_CustomEvent_StartTime = K2Node_CustomEvent_StartTime;
	Parms.K2Node_CustomEvent_FX_Zombie_9 = K2Node_CustomEvent_FX_Zombie_9;
	Parms.CallFunc_K2_GetRootComponent_ReturnValue = CallFunc_K2_GetRootComponent_ReturnValue;
	Parms.K2Node_CustomEvent_FX_Zombie_06 = K2Node_CustomEvent_FX_Zombie_06;
	Parms.CallFunc_K2_GetRootComponent_ReturnValue_1 = CallFunc_K2_GetRootComponent_ReturnValue_1;
	Parms.K2Node_CustomEvent_FX_Zombie_10 = K2Node_CustomEvent_FX_Zombie_10;
	Parms.CallFunc_K2_GetRootComponent_ReturnValue_2 = CallFunc_K2_GetRootComponent_ReturnValue_2;
	Parms.K2Node_CustomEvent_FX_Zombie_11 = K2Node_CustomEvent_FX_Zombie_11;
	Parms.CallFunc_K2_GetRootComponent_ReturnValue_3 = CallFunc_K2_GetRootComponent_ReturnValue_3;
	Parms.K2Node_CustomEvent_FX_Zombie_12 = K2Node_CustomEvent_FX_Zombie_12;
	Parms.CallFunc_K2_GetRootComponent_ReturnValue_4 = CallFunc_K2_GetRootComponent_ReturnValue_4;
	Parms.K2Node_CustomEvent_FX_Zombie_13 = K2Node_CustomEvent_FX_Zombie_13;
	Parms.CallFunc_K2_GetRootComponent_ReturnValue_5 = CallFunc_K2_GetRootComponent_ReturnValue_5;
	Parms.K2Node_CustomEvent_FX_Zombie_14 = K2Node_CustomEvent_FX_Zombie_14;
	Parms.CallFunc_K2_GetRootComponent_ReturnValue_6 = CallFunc_K2_GetRootComponent_ReturnValue_6;
	Parms.K2Node_CustomEvent_FX_Zombie_15 = K2Node_CustomEvent_FX_Zombie_15;
	Parms.CallFunc_K2_GetRootComponent_ReturnValue_7 = CallFunc_K2_GetRootComponent_ReturnValue_7;
	Parms.K2Node_CustomEvent_FX_Zombie_16 = K2Node_CustomEvent_FX_Zombie_16;
	Parms.CallFunc_K2_GetRootComponent_ReturnValue_8 = CallFunc_K2_GetRootComponent_ReturnValue_8;
	Parms.K2Node_CustomEvent_FX_Zombie_7 = K2Node_CustomEvent_FX_Zombie_7;
	Parms.CallFunc_K2_GetRootComponent_ReturnValue_9 = CallFunc_K2_GetRootComponent_ReturnValue_9;
	Parms.K2Node_CustomEvent_FX_Zombie_8 = K2Node_CustomEvent_FX_Zombie_8;
	Parms.CallFunc_K2_GetRootComponent_ReturnValue_10 = CallFunc_K2_GetRootComponent_ReturnValue_10;
	Parms.K2Node_CustomEvent_FX_Cube_Explode = K2Node_CustomEvent_FX_Cube_Explode;
	Parms.K2Node_CustomEvent_bReset = K2Node_CustomEvent_bReset;
	Parms.CallFunc_K2_GetRootComponent_ReturnValue_11 = CallFunc_K2_GetRootComponent_ReturnValue_11;

	UObject::ProcessEvent(Func, &Parms);

}

}


