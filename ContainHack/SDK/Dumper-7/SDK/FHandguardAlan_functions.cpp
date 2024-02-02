#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass FHandguardAlan.FHandguardAlan_C
// (Actor)

class UClass* UFHandguardAlan_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FHandguardAlan_C");

	return Clss;
}


// FHandguardAlan_C FHandguardAlan.Default__FHandguardAlan_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFHandguardAlan_C* UFHandguardAlan_C::GetDefaultObj()
{
	static class UFHandguardAlan_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFHandguardAlan_C*>(UFHandguardAlan_C::StaticClass()->DefaultObject);

	return Default;
}

}


