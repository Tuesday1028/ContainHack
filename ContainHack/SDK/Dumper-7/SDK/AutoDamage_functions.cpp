#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AutoDamage.AutoDamage_C
// (Actor)

class UClass* UAutoDamage_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AutoDamage_C");

	return Clss;
}


// AutoDamage_C AutoDamage.Default__AutoDamage_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAutoDamage_C* UAutoDamage_C::GetDefaultObj()
{
	static class UAutoDamage_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAutoDamage_C*>(UAutoDamage_C::StaticClass()->DefaultObject);

	return Default;
}

}


