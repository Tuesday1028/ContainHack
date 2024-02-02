#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Computer_01a.BP_Computer_01a_C
// (Actor)

class UClass* UBP_Computer_01a_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Computer_01a_C");

	return Clss;
}


// BP_Computer_01a_C BP_Computer_01a.Default__BP_Computer_01a_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_Computer_01a_C* UBP_Computer_01a_C::GetDefaultObj()
{
	static class UBP_Computer_01a_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_Computer_01a_C*>(UBP_Computer_01a_C::StaticClass()->DefaultObject);

	return Default;
}

}


