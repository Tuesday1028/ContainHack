#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_TableLamp_01a.BP_TableLamp_01a_C
// (Actor)

class UClass* UBP_TableLamp_01a_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_TableLamp_01a_C");

	return Clss;
}


// BP_TableLamp_01a_C BP_TableLamp_01a.Default__BP_TableLamp_01a_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_TableLamp_01a_C* UBP_TableLamp_01a_C::GetDefaultObj()
{
	static class UBP_TableLamp_01a_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_TableLamp_01a_C*>(UBP_TableLamp_01a_C::StaticClass()->DefaultObject);

	return Default;
}

}


