#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TacticalFlashLight_BP.TacticalFlashLight_BP_C
// (Actor)

class UClass* UTacticalFlashLight_BP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TacticalFlashLight_BP_C");

	return Clss;
}


// TacticalFlashLight_BP_C TacticalFlashLight_BP.Default__TacticalFlashLight_BP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTacticalFlashLight_BP_C* UTacticalFlashLight_BP_C::GetDefaultObj()
{
	static class UTacticalFlashLight_BP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTacticalFlashLight_BP_C*>(UTacticalFlashLight_BP_C::StaticClass()->DefaultObject);

	return Default;
}

}


