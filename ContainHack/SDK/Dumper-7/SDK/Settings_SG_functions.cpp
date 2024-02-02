#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Settings_SG.Settings_SG_C
// (None)

class UClass* USettings_SG_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Settings_SG_C");

	return Clss;
}


// Settings_SG_C Settings_SG.Default__Settings_SG_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USettings_SG_C* USettings_SG_C::GetDefaultObj()
{
	static class USettings_SG_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USettings_SG_C*>(USettings_SG_C::StaticClass()->DefaultObject);

	return Default;
}

}


