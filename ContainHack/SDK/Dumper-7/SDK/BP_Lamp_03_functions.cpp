#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Lamp_03.BP_Lamp_03_C
// (Actor)

class UClass* UBP_Lamp_03_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Lamp_03_C");

	return Clss;
}


// BP_Lamp_03_C BP_Lamp_03.Default__BP_Lamp_03_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_Lamp_03_C* UBP_Lamp_03_C::GetDefaultObj()
{
	static class UBP_Lamp_03_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_Lamp_03_C*>(UBP_Lamp_03_C::StaticClass()->DefaultObject);

	return Default;
}

}


