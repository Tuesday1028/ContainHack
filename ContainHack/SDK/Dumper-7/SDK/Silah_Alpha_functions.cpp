#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Silah_Alpha.Silah_Alpha_C
// (None)

class UClass* USilah_Alpha_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Silah_Alpha_C");

	return Clss;
}


// Silah_Alpha_C Silah_Alpha.Default__Silah_Alpha_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USilah_Alpha_C* USilah_Alpha_C::GetDefaultObj()
{
	static class USilah_Alpha_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USilah_Alpha_C*>(USilah_Alpha_C::StaticClass()->DefaultObject);

	return Default;
}

}


