#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Hub01_NewCustomShowcase.Hub01_NewCustomShowcase_C
// (Actor)

class UClass* UHub01_NewCustomShowcase_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Hub01_NewCustomShowcase_C");

	return Clss;
}


// Hub01_NewCustomShowcase_C Hub01_NewCustomShowcase.Default__Hub01_NewCustomShowcase_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UHub01_NewCustomShowcase_C* UHub01_NewCustomShowcase_C::GetDefaultObj()
{
	static class UHub01_NewCustomShowcase_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UHub01_NewCustomShowcase_C*>(UHub01_NewCustomShowcase_C::StaticClass()->DefaultObject);

	return Default;
}

}


