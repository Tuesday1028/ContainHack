#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPI_AudioManager.BPI_AudioManager_C
// (None)

class UClass* UBPI_AudioManager_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPI_AudioManager_C");

	return Clss;
}


// BPI_AudioManager_C BPI_AudioManager.Default__BPI_AudioManager_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBPI_AudioManager_C* UBPI_AudioManager_C::GetDefaultObj()
{
	static class UBPI_AudioManager_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBPI_AudioManager_C*>(UBPI_AudioManager_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPI_AudioManager.BPI_AudioManager_C.UpdateCombatStatus
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class E_Combat                CombatStatus                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPI_AudioManager_C::UpdateCombatStatus(enum class E_Combat CombatStatus)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_AudioManager_C", "UpdateCombatStatus");

	Params::UBPI_AudioManager_C_UpdateCombatStatus_Params Parms{};

	Parms.CombatStatus = CombatStatus;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPI_AudioManager.BPI_AudioManager_C.SetInside
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bInside                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             AmbientMultiplier                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FReverbSettings             ReverbSettings                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// class FName                        ReverbAreaName                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             ReverbPriority                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPI_AudioManager_C::SetInside(bool bInside, double AmbientMultiplier, const struct FReverbSettings& ReverbSettings, class FName ReverbAreaName, double ReverbPriority)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_AudioManager_C", "SetInside");

	Params::UBPI_AudioManager_C_SetInside_Params Parms{};

	Parms.bInside = bInside;
	Parms.AmbientMultiplier = AmbientMultiplier;
	Parms.ReverbSettings = ReverbSettings;
	Parms.ReverbAreaName = ReverbAreaName;
	Parms.ReverbPriority = ReverbPriority;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPI_AudioManager.BPI_AudioManager_C.UpdateTimeOfDay
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Time                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_TimeOfDay             Night_                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPI_AudioManager_C::UpdateTimeOfDay(double Time, enum class E_TimeOfDay Night_)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_AudioManager_C", "UpdateTimeOfDay");

	Params::UBPI_AudioManager_C_UpdateTimeOfDay_Params Parms{};

	Parms.Time = Time;
	Parms.Night_ = Night_;

	UObject::ProcessEvent(Func, &Parms);

}

}


