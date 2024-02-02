#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Projector.BP_Projector_C
// (Actor)

class UClass* UBP_Projector_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Projector_C");

	return Clss;
}


// BP_Projector_C BP_Projector.Default__BP_Projector_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_Projector_C* UBP_Projector_C::GetDefaultObj()
{
	static class UBP_Projector_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_Projector_C*>(UBP_Projector_C::StaticClass()->DefaultObject);

	return Default;
}

}


