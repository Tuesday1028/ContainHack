#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass B_M4A1_BiColorHandGranade.B_M4A1_BiColorHandGranade_C
// (Actor)

class UClass* UB_M4A1_BiColorHandGranade_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("B_M4A1_BiColorHandGranade_C");

	return Clss;
}


// B_M4A1_BiColorHandGranade_C B_M4A1_BiColorHandGranade.Default__B_M4A1_BiColorHandGranade_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UB_M4A1_BiColorHandGranade_C* UB_M4A1_BiColorHandGranade_C::GetDefaultObj()
{
	static class UB_M4A1_BiColorHandGranade_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UB_M4A1_BiColorHandGranade_C*>(UB_M4A1_BiColorHandGranade_C::StaticClass()->DefaultObject);

	return Default;
}

}


