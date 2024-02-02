#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass B_FlipSightRear_Black.B_FlipSightRear_Black_C
// (Actor)

class UClass* UB_FlipSightRear_Black_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("B_FlipSightRear_Black_C");

	return Clss;
}


// B_FlipSightRear_Black_C B_FlipSightRear_Black.Default__B_FlipSightRear_Black_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UB_FlipSightRear_Black_C* UB_FlipSightRear_Black_C::GetDefaultObj()
{
	static class UB_FlipSightRear_Black_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UB_FlipSightRear_Black_C*>(UB_FlipSightRear_Black_C::StaticClass()->DefaultObject);

	return Default;
}

}


