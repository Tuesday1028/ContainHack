#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass WidgetHedefi.WidgetHedefi_C
// (Actor)

class UClass* UWidgetHedefi_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WidgetHedefi_C");

	return Clss;
}


// WidgetHedefi_C WidgetHedefi.Default__WidgetHedefi_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWidgetHedefi_C* UWidgetHedefi_C::GetDefaultObj()
{
	static class UWidgetHedefi_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWidgetHedefi_C*>(UWidgetHedefi_C::StaticClass()->DefaultObject);

	return Default;
}

}


