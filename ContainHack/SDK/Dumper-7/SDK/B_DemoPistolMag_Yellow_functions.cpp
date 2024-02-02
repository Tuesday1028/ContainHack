#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass B_DemoPistolMag_Yellow.B_DemoPistolMag_Yellow_C
// (Actor)

class UClass* UB_DemoPistolMag_Yellow_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("B_DemoPistolMag_Yellow_C");

	return Clss;
}


// B_DemoPistolMag_Yellow_C B_DemoPistolMag_Yellow.Default__B_DemoPistolMag_Yellow_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UB_DemoPistolMag_Yellow_C* UB_DemoPistolMag_Yellow_C::GetDefaultObj()
{
	static class UB_DemoPistolMag_Yellow_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UB_DemoPistolMag_Yellow_C*>(UB_DemoPistolMag_Yellow_C::StaticClass()->DefaultObject);

	return Default;
}

}


