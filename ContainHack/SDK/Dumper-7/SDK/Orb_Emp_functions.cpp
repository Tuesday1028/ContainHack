#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Orb_Emp.Orb_Emp (Director BP)_C
// (None)

class UClass* UOrb_Emp__Director_BP__C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Orb_Emp (Director BP)_C");

	return Clss;
}


// Orb_Emp (Director BP)_C Orb_Emp.Default__Orb_Emp (Director BP)_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UOrb_Emp__Director_BP__C* UOrb_Emp__Director_BP__C::GetDefaultObj()
{
	static class UOrb_Emp__Director_BP__C* Default = nullptr;

	if (!Default)
		Default = static_cast<UOrb_Emp__Director_BP__C*>(UOrb_Emp__Director_BP__C::StaticClass()->DefaultObject);

	return Default;
}


// Function Orb_Emp.Orb_Emp (Director BP)_C.SequenceEvent__ENTRYPOINTOrb_Emp (Director BP)
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UNiagaraActor*               FX_Cube_Construction                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UOrb_Emp__Director_BP__C::SequenceEvent__ENTRYPOINTOrb_Emp__Director_BP_(class UNiagaraActor* FX_Cube_Construction)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Orb_Emp (Director BP)_C", "SequenceEvent__ENTRYPOINTOrb_Emp (Director BP)");

	Params::UOrb_Emp__Director_BP__C_SequenceEvent__ENTRYPOINTOrb_Emp__Director_BP__Params Parms{};

	Parms.FX_Cube_Construction = FX_Cube_Construction;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Orb_Emp.Orb_Emp (Director BP)_C.FX_Cube_Construction_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UNiagaraActor*               FX_Cube_Construction                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UOrb_Emp__Director_BP__C::FX_Cube_Construction_Event(class UNiagaraActor* FX_Cube_Construction)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Orb_Emp (Director BP)_C", "FX_Cube_Construction_Event");

	Params::UOrb_Emp__Director_BP__C_FX_Cube_Construction_Event_Params Parms{};

	Parms.FX_Cube_Construction = FX_Cube_Construction;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Orb_Emp.Orb_Emp (Director BP)_C.ExecuteUbergraph_Orb_Emp (Director BP)
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNiagaraActor*               K2Node_CustomEvent_FX_Cube_Construction                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class USceneComponent*             CallFunc_K2_GetRootComponent_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UOrb_Emp__Director_BP__C::ExecuteUbergraph_Orb_Emp__Director_BP_(int32 EntryPoint, class UNiagaraActor* K2Node_CustomEvent_FX_Cube_Construction, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Orb_Emp (Director BP)_C", "ExecuteUbergraph_Orb_Emp (Director BP)");

	Params::UOrb_Emp__Director_BP__C_ExecuteUbergraph_Orb_Emp__Director_BP__Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_FX_Cube_Construction = K2Node_CustomEvent_FX_Cube_Construction;
	Parms.CallFunc_K2_GetRootComponent_ReturnValue = CallFunc_K2_GetRootComponent_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


