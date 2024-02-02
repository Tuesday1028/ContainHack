#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WG_HUD.WG_HUD_C
// (None)

class UClass* UWG_HUD_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WG_HUD_C");

	return Clss;
}


// WG_HUD_C WG_HUD.Default__WG_HUD_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWG_HUD_C* UWG_HUD_C::GetDefaultObj()
{
	static class UWG_HUD_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWG_HUD_C*>(UWG_HUD_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WG_HUD.WG_HUD_C.MicImage
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ESlateVisibility        InVisibility                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWG_HUD_C::MicImage(enum class ESlateVisibility InVisibility)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WG_HUD_C", "MicImage");

	Params::UWG_HUD_C_MicImage_Params Parms{};

	Parms.InVisibility = InVisibility;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WG_HUD.WG_HUD_C.ExecuteUbergraph_WG_HUD
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_CustomEvent_InVisibility                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWG_HUD_C::ExecuteUbergraph_WG_HUD(int32 EntryPoint, enum class ESlateVisibility K2Node_CustomEvent_InVisibility)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WG_HUD_C", "ExecuteUbergraph_WG_HUD");

	Params::UWG_HUD_C_ExecuteUbergraph_WG_HUD_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_InVisibility = K2Node_CustomEvent_InVisibility;

	UObject::ProcessEvent(Func, &Parms);

}

}


