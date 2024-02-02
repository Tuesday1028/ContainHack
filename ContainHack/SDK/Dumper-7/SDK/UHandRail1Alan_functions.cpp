#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass UHandRail1Alan.UHandRail1Alan_C
// (Actor)

class UClass* UUHandRail1Alan_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UHandRail1Alan_C");

	return Clss;
}


// UHandRail1Alan_C UHandRail1Alan.Default__UHandRail1Alan_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUHandRail1Alan_C* UUHandRail1Alan_C::GetDefaultObj()
{
	static class UUHandRail1Alan_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUHandRail1Alan_C*>(UUHandRail1Alan_C::StaticClass()->DefaultObject);

	return Default;
}

}


