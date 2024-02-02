#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Ventilation_Shaft.BP_Ventilation_Shaft_C
// (Actor)

class UClass* UBP_Ventilation_Shaft_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Ventilation_Shaft_C");

	return Clss;
}


// BP_Ventilation_Shaft_C BP_Ventilation_Shaft.Default__BP_Ventilation_Shaft_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_Ventilation_Shaft_C* UBP_Ventilation_Shaft_C::GetDefaultObj()
{
	static class UBP_Ventilation_Shaft_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_Ventilation_Shaft_C*>(UBP_Ventilation_Shaft_C::StaticClass()->DefaultObject);

	return Default;
}

}


