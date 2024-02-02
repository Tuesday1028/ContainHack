#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_HoloDisplay_01.BP_HoloDisplay_01_C
// (Actor)

class UClass* UBP_HoloDisplay_01_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_HoloDisplay_01_C");

	return Clss;
}


// BP_HoloDisplay_01_C BP_HoloDisplay_01.Default__BP_HoloDisplay_01_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_HoloDisplay_01_C* UBP_HoloDisplay_01_C::GetDefaultObj()
{
	static class UBP_HoloDisplay_01_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_HoloDisplay_01_C*>(UBP_HoloDisplay_01_C::StaticClass()->DefaultObject);

	return Default;
}

}


