#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CLM_BPI_NPC.CLM_BPI_NPC_C
// (None)

class UClass* UCLM_BPI_NPC_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CLM_BPI_NPC_C");

	return Clss;
}


// CLM_BPI_NPC_C CLM_BPI_NPC.Default__CLM_BPI_NPC_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCLM_BPI_NPC_C* UCLM_BPI_NPC_C::GetDefaultObj()
{
	static class UCLM_BPI_NPC_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCLM_BPI_NPC_C*>(UCLM_BPI_NPC_C::StaticClass()->DefaultObject);

	return Default;
}


// Function CLM_BPI_NPC.CLM_BPI_NPC_C.CrouchOut
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              IlkIndex                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              SonIndex                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsSee                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCLM_BPI_NPC_C::CrouchOut(int32 IlkIndex, int32 SonIndex, bool* IsSee)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CLM_BPI_NPC_C", "CrouchOut");

	Params::UCLM_BPI_NPC_C_CrouchOut_Params Parms{};

	Parms.IlkIndex = IlkIndex;
	Parms.SonIndex = SonIndex;

	UObject::ProcessEvent(Func, &Parms);

	if (IsSee != nullptr)
		*IsSee = Parms.IsSee;

}


// Function CLM_BPI_NPC.CLM_BPI_NPC_C.PickDoorEvent
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Pick                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Unlock                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCLM_BPI_NPC_C::PickDoorEvent(bool Pick, bool* Unlock)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CLM_BPI_NPC_C", "PickDoorEvent");

	Params::UCLM_BPI_NPC_C_PickDoorEvent_Params Parms{};

	Parms.Pick = Pick;

	UObject::ProcessEvent(Func, &Parms);

	if (Unlock != nullptr)
		*Unlock = Parms.Unlock;

}


// Function CLM_BPI_NPC.CLM_BPI_NPC_C.GetLocation
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     CharacterLoc                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCLM_BPI_NPC_C::GetLocation(struct FVector* CharacterLoc)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CLM_BPI_NPC_C", "GetLocation");

	Params::UCLM_BPI_NPC_C_GetLocation_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (CharacterLoc != nullptr)
		*CharacterLoc = std::move(Parms.CharacterLoc);

}


// Function CLM_BPI_NPC.CLM_BPI_NPC_C.GetisDutyEnabled
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               DutyEnabled                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCLM_BPI_NPC_C::GetisDutyEnabled(bool* DutyEnabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CLM_BPI_NPC_C", "GetisDutyEnabled");

	Params::UCLM_BPI_NPC_C_GetisDutyEnabled_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (DutyEnabled != nullptr)
		*DutyEnabled = Parms.DutyEnabled;

}


// Function CLM_BPI_NPC.CLM_BPI_NPC_C.GetNextLocation
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     Location                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCLM_BPI_NPC_C::GetNextLocation(struct FVector* Location)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CLM_BPI_NPC_C", "GetNextLocation");

	Params::UCLM_BPI_NPC_C_GetNextLocation_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Location != nullptr)
		*Location = std::move(Parms.Location);

}

}


