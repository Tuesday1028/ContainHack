#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Silah_Delta.Silah_Delta_C
// (None)

class UClass* USilah_Delta_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Silah_Delta_C");

	return Clss;
}


// Silah_Delta_C Silah_Delta.Default__Silah_Delta_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USilah_Delta_C* USilah_Delta_C::GetDefaultObj()
{
	static class USilah_Delta_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USilah_Delta_C*>(USilah_Delta_C::StaticClass()->DefaultObject);

	return Default;
}

}


