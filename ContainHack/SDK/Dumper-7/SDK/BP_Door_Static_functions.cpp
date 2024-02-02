#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Door_Static.BP_Door_Static_C
// (Actor)

class UClass* UBP_Door_Static_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Door_Static_C");

	return Clss;
}


// BP_Door_Static_C BP_Door_Static.Default__BP_Door_Static_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_Door_Static_C* UBP_Door_Static_C::GetDefaultObj()
{
	static class UBP_Door_Static_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_Door_Static_C*>(UBP_Door_Static_C::StaticClass()->DefaultObject);

	return Default;
}

}


