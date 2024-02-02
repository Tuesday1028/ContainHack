#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TPS_Shield_A.TPS_Shield_A_C
// (Actor)

class UClass* UTPS_Shield_A_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TPS_Shield_A_C");

	return Clss;
}


// TPS_Shield_A_C TPS_Shield_A.Default__TPS_Shield_A_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTPS_Shield_A_C* UTPS_Shield_A_C::GetDefaultObj()
{
	static class UTPS_Shield_A_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTPS_Shield_A_C*>(UTPS_Shield_A_C::StaticClass()->DefaultObject);

	return Default;
}

}


