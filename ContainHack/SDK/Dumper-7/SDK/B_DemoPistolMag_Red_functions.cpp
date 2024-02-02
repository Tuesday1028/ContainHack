#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass B_DemoPistolMag_Red.B_DemoPistolMag_Red_C
// (Actor)

class UClass* UB_DemoPistolMag_Red_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("B_DemoPistolMag_Red_C");

	return Clss;
}


// B_DemoPistolMag_Red_C B_DemoPistolMag_Red.Default__B_DemoPistolMag_Red_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UB_DemoPistolMag_Red_C* UB_DemoPistolMag_Red_C::GetDefaultObj()
{
	static class UB_DemoPistolMag_Red_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UB_DemoPistolMag_Red_C*>(UB_DemoPistolMag_Red_C::StaticClass()->DefaultObject);

	return Default;
}

}


