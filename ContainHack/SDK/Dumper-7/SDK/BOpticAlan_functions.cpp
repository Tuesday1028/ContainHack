#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BOpticAlan.BOpticAlan_C
// (Actor)

class UClass* UBOpticAlan_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BOpticAlan_C");

	return Clss;
}


// BOpticAlan_C BOpticAlan.Default__BOpticAlan_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBOpticAlan_C* UBOpticAlan_C::GetDefaultObj()
{
	static class UBOpticAlan_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBOpticAlan_C*>(UBOpticAlan_C::StaticClass()->DefaultObject);

	return Default;
}

}


