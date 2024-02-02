#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass WeaponCustomScreen.WeaponCustomScreen_C
// (Actor)

class UClass* UWeaponCustomScreen_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WeaponCustomScreen_C");

	return Clss;
}


// WeaponCustomScreen_C WeaponCustomScreen.Default__WeaponCustomScreen_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWeaponCustomScreen_C* UWeaponCustomScreen_C::GetDefaultObj()
{
	static class UWeaponCustomScreen_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWeaponCustomScreen_C*>(UWeaponCustomScreen_C::StaticClass()->DefaultObject);

	return Default;
}

}


