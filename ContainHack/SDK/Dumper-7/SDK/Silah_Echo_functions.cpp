#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Silah_Echo.Silah_Echo_C
// (None)

class UClass* USilah_Echo_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Silah_Echo_C");

	return Clss;
}


// Silah_Echo_C Silah_Echo.Default__Silah_Echo_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USilah_Echo_C* USilah_Echo_C::GetDefaultObj()
{
	static class USilah_Echo_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USilah_Echo_C*>(USilah_Echo_C::StaticClass()->DefaultObject);

	return Default;
}

}


