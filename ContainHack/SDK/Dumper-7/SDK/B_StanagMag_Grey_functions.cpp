#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass B_StanagMag_Grey.B_StanagMag_Grey_C
// (Actor)

class UClass* UB_StanagMag_Grey_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("B_StanagMag_Grey_C");

	return Clss;
}


// B_StanagMag_Grey_C B_StanagMag_Grey.Default__B_StanagMag_Grey_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UB_StanagMag_Grey_C* UB_StanagMag_Grey_C::GetDefaultObj()
{
	static class UB_StanagMag_Grey_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UB_StanagMag_Grey_C*>(UB_StanagMag_Grey_C::StaticClass()->DefaultObject);

	return Default;
}

}


