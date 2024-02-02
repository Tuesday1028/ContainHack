#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass B_M4A1_BiColorSmokeGranade.B_M4A1_BiColorSmokeGranade_C
// (Actor)

class UClass* UB_M4A1_BiColorSmokeGranade_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("B_M4A1_BiColorSmokeGranade_C");

	return Clss;
}


// B_M4A1_BiColorSmokeGranade_C B_M4A1_BiColorSmokeGranade.Default__B_M4A1_BiColorSmokeGranade_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UB_M4A1_BiColorSmokeGranade_C* UB_M4A1_BiColorSmokeGranade_C::GetDefaultObj()
{
	static class UB_M4A1_BiColorSmokeGranade_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UB_M4A1_BiColorSmokeGranade_C*>(UB_M4A1_BiColorSmokeGranade_C::StaticClass()->DefaultObject);

	return Default;
}

}


