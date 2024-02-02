#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass UHandguardAlan.UHandguardAlan_C
// (Actor)

class UClass* UUHandguardAlan_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UHandguardAlan_C");

	return Clss;
}


// UHandguardAlan_C UHandguardAlan.Default__UHandguardAlan_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUHandguardAlan_C* UUHandguardAlan_C::GetDefaultObj()
{
	static class UUHandguardAlan_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUHandguardAlan_C*>(UUHandguardAlan_C::StaticClass()->DefaultObject);

	return Default;
}

}


