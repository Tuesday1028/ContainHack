#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WG_CustomActor.WG_CustomActor_C
// (None)

class UClass* UWG_CustomActor_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WG_CustomActor_C");

	return Clss;
}


// WG_CustomActor_C WG_CustomActor.Default__WG_CustomActor_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWG_CustomActor_C* UWG_CustomActor_C::GetDefaultObj()
{
	static class UWG_CustomActor_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWG_CustomActor_C*>(UWG_CustomActor_C::StaticClass()->DefaultObject);

	return Default;
}

}


