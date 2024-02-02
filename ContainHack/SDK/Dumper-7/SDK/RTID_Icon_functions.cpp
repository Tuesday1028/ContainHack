#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass RTID_Icon.RTID_Icon_C
// (None)

class UClass* URTID_Icon_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RTID_Icon_C");

	return Clss;
}


// RTID_Icon_C RTID_Icon.Default__RTID_Icon_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class URTID_Icon_C* URTID_Icon_C::GetDefaultObj()
{
	static class URTID_Icon_C* Default = nullptr;

	if (!Default)
		Default = static_cast<URTID_Icon_C*>(URTID_Icon_C::StaticClass()->DefaultObject);

	return Default;
}

}


