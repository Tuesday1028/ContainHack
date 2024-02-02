#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ORail1Alan.ORail1Alan_C
// (Actor)

class UClass* UORail1Alan_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ORail1Alan_C");

	return Clss;
}


// ORail1Alan_C ORail1Alan.Default__ORail1Alan_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UORail1Alan_C* UORail1Alan_C::GetDefaultObj()
{
	static class UORail1Alan_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UORail1Alan_C*>(UORail1Alan_C::StaticClass()->DefaultObject);

	return Default;
}

}


