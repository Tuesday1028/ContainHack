#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WG_ConsoleText.WG_ConsoleText_C
// (None)

class UClass* UWG_ConsoleText_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WG_ConsoleText_C");

	return Clss;
}


// WG_ConsoleText_C WG_ConsoleText.Default__WG_ConsoleText_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWG_ConsoleText_C* UWG_ConsoleText_C::GetDefaultObj()
{
	static class UWG_ConsoleText_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWG_ConsoleText_C*>(UWG_ConsoleText_C::StaticClass()->DefaultObject);

	return Default;
}

}


