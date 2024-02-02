#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass FOpticAlan.FOpticAlan_C
// (Actor)

class UClass* UFOpticAlan_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FOpticAlan_C");

	return Clss;
}


// FOpticAlan_C FOpticAlan.Default__FOpticAlan_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFOpticAlan_C* UFOpticAlan_C::GetDefaultObj()
{
	static class UFOpticAlan_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFOpticAlan_C*>(UFOpticAlan_C::StaticClass()->DefaultObject);

	return Default;
}

}


