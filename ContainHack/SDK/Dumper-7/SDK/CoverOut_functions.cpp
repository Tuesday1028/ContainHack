#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CoverOut.CoverOut_C
// (Actor)

class UClass* UCoverOut_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CoverOut_C");

	return Clss;
}


// CoverOut_C CoverOut.Default__CoverOut_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCoverOut_C* UCoverOut_C::GetDefaultObj()
{
	static class UCoverOut_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCoverOut_C*>(UCoverOut_C::StaticClass()->DefaultObject);

	return Default;
}

}


