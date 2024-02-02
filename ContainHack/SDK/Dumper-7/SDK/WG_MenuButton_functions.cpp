#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WG_MenuButton.WG_MenuButton_C
// (None)

class UClass* UWG_MenuButton_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WG_MenuButton_C");

	return Clss;
}


// WG_MenuButton_C WG_MenuButton.Default__WG_MenuButton_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWG_MenuButton_C* UWG_MenuButton_C::GetDefaultObj()
{
	static class UWG_MenuButton_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWG_MenuButton_C*>(UWG_MenuButton_C::StaticClass()->DefaultObject);

	return Default;
}

}


