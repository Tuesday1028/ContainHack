#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Silah_Charlie.Silah_Charlie_C
// (None)

class UClass* USilah_Charlie_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Silah_Charlie_C");

	return Clss;
}


// Silah_Charlie_C Silah_Charlie.Default__Silah_Charlie_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USilah_Charlie_C* USilah_Charlie_C::GetDefaultObj()
{
	static class USilah_Charlie_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USilah_Charlie_C*>(USilah_Charlie_C::StaticClass()->DefaultObject);

	return Default;
}

}


