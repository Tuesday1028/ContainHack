#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Door_Factory_v3.BP_Door_Factory_v3_C
// (Actor)

class UClass* UBP_Door_Factory_v3_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Door_Factory_v3_C");

	return Clss;
}


// BP_Door_Factory_v3_C BP_Door_Factory_v3.Default__BP_Door_Factory_v3_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_Door_Factory_v3_C* UBP_Door_Factory_v3_C::GetDefaultObj()
{
	static class UBP_Door_Factory_v3_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_Door_Factory_v3_C*>(UBP_Door_Factory_v3_C::StaticClass()->DefaultObject);

	return Default;
}

}


