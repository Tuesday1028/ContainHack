#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WG_OptionsButton.WG_OptionsButton_C
// (None)

class UClass* UWG_OptionsButton_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WG_OptionsButton_C");

	return Clss;
}


// WG_OptionsButton_C WG_OptionsButton.Default__WG_OptionsButton_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWG_OptionsButton_C* UWG_OptionsButton_C::GetDefaultObj()
{
	static class UWG_OptionsButton_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWG_OptionsButton_C*>(UWG_OptionsButton_C::StaticClass()->DefaultObject);

	return Default;
}

}


