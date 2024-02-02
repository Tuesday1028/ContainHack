#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SG_GameInstance.SG_GameInstance_C
// (None)

class UClass* USG_GameInstance_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SG_GameInstance_C");

	return Clss;
}


// SG_GameInstance_C SG_GameInstance.Default__SG_GameInstance_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USG_GameInstance_C* USG_GameInstance_C::GetDefaultObj()
{
	static class USG_GameInstance_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USG_GameInstance_C*>(USG_GameInstance_C::StaticClass()->DefaultObject);

	return Default;
}


// Function SG_GameInstance.SG_GameInstance_C.IsNewGame
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bIsNewStarted                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USG_GameInstance_C::IsNewGame(bool* bIsNewStarted)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SG_GameInstance_C", "IsNewGame");

	Params::USG_GameInstance_C_IsNewGame_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (bIsNewStarted != nullptr)
		*bIsNewStarted = Parms.bIsNewStarted;

}


// Function SG_GameInstance.SG_GameInstance_C.RichPresence
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      State                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      Details                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                               Return                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USG_GameInstance_C::RichPresence(const class FString& State, const class FString& Details, bool* Return)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SG_GameInstance_C", "RichPresence");

	Params::USG_GameInstance_C_RichPresence_Params Parms{};

	Parms.State = State;
	Parms.Details = Details;

	UObject::ProcessEvent(Func, &Parms);

	if (Return != nullptr)
		*Return = Parms.Return;

}


// Function SG_GameInstance.SG_GameInstance_C.LanguageSettings
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void USG_GameInstance_C::LanguageSettings()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SG_GameInstance_C", "LanguageSettings");



	UObject::ProcessEvent(Func, nullptr);

}

}


