#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass MissionButton_WG.MissionButton_WG_C
// (None)

class UClass* UMissionButton_WG_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MissionButton_WG_C");

	return Clss;
}


// MissionButton_WG_C MissionButton_WG.Default__MissionButton_WG_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMissionButton_WG_C* UMissionButton_WG_C::GetDefaultObj()
{
	static class UMissionButton_WG_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMissionButton_WG_C*>(UMissionButton_WG_C::StaticClass()->DefaultObject);

	return Default;
}


// Function MissionButton_WG.MissionButton_WG_C.GetColorAndOpacity
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateColor                 ReturnValue                                                      (Parm, OutParm, ReturnParm)

struct FSlateColor UMissionButton_WG_C::GetColorAndOpacity()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MissionButton_WG_C", "GetColorAndOpacity");

	Params::UMissionButton_WG_C_GetColorAndOpacity_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function MissionButton_WG.MissionButton_WG_C.GetText
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)

class FText UMissionButton_WG_C::GetText()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MissionButton_WG_C", "GetText");

	Params::UMissionButton_WG_C_GetText_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


