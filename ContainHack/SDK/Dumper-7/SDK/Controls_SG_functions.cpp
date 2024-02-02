#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Controls_SG.Controls_SG_C
// (None)

class UClass* UControls_SG_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Controls_SG_C");

	return Clss;
}


// Controls_SG_C Controls_SG.Default__Controls_SG_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UControls_SG_C* UControls_SG_C::GetDefaultObj()
{
	static class UControls_SG_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UControls_SG_C*>(UControls_SG_C::StaticClass()->DefaultObject);

	return Default;
}

}


