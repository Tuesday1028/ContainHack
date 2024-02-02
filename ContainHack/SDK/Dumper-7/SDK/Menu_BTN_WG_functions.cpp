#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass Menu_BTN_WG.Menu_BTN_WG_C
// (None)

class UClass* UMenu_BTN_WG_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Menu_BTN_WG_C");

	return Clss;
}


// Menu_BTN_WG_C Menu_BTN_WG.Default__Menu_BTN_WG_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMenu_BTN_WG_C* UMenu_BTN_WG_C::GetDefaultObj()
{
	static class UMenu_BTN_WG_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMenu_BTN_WG_C*>(UMenu_BTN_WG_C::StaticClass()->DefaultObject);

	return Default;
}

}


