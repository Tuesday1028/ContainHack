#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ALS_Controller_BPI.ALS_Controller_BPI_C
// (None)

class UClass* UALS_Controller_BPI_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ALS_Controller_BPI_C");

	return Clss;
}


// ALS_Controller_BPI_C ALS_Controller_BPI.Default__ALS_Controller_BPI_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UALS_Controller_BPI_C* UALS_Controller_BPI_C::GetDefaultObj()
{
	static class UALS_Controller_BPI_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UALS_Controller_BPI_C*>(UALS_Controller_BPI_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ALS_Controller_BPI.ALS_Controller_BPI_C.BPI_Get_DebugInfo
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCharacter*                  DebugFocusCharacter                                              (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               DebugView                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ShowHUD                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ShowTraces                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ShowDebugShapes                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ShowLayerColors                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Slomo                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ShowCharacterInfo                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UALS_Controller_BPI_C::BPI_Get_DebugInfo(class UCharacter** DebugFocusCharacter, bool* DebugView, bool* ShowHUD, bool* ShowTraces, bool* ShowDebugShapes, bool* ShowLayerColors, bool* Slomo, bool* ShowCharacterInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ALS_Controller_BPI_C", "BPI_Get_DebugInfo");

	Params::UALS_Controller_BPI_C_BPI_Get_DebugInfo_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (DebugFocusCharacter != nullptr)
		*DebugFocusCharacter = Parms.DebugFocusCharacter;

	if (DebugView != nullptr)
		*DebugView = Parms.DebugView;

	if (ShowHUD != nullptr)
		*ShowHUD = Parms.ShowHUD;

	if (ShowTraces != nullptr)
		*ShowTraces = Parms.ShowTraces;

	if (ShowDebugShapes != nullptr)
		*ShowDebugShapes = Parms.ShowDebugShapes;

	if (ShowLayerColors != nullptr)
		*ShowLayerColors = Parms.ShowLayerColors;

	if (Slomo != nullptr)
		*Slomo = Parms.Slomo;

	if (ShowCharacterInfo != nullptr)
		*ShowCharacterInfo = Parms.ShowCharacterInfo;

}

}


