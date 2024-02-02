#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Silah_Beta.Silah_Beta_C
// (None)

class UClass* USilah_Beta_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Silah_Beta_C");

	return Clss;
}


// Silah_Beta_C Silah_Beta.Default__Silah_Beta_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USilah_Beta_C* USilah_Beta_C::GetDefaultObj()
{
	static class USilah_Beta_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USilah_Beta_C*>(USilah_Beta_C::StaticClass()->DefaultObject);

	return Default;
}

}


