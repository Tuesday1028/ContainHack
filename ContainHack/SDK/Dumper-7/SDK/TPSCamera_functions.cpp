#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TPSCamera.TPSCamera_C
// (Actor)

class UClass* UTPSCamera_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TPSCamera_C");

	return Clss;
}


// TPSCamera_C TPSCamera.Default__TPSCamera_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTPSCamera_C* UTPSCamera_C::GetDefaultObj()
{
	static class UTPSCamera_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTPSCamera_C*>(UTPSCamera_C::StaticClass()->DefaultObject);

	return Default;
}

}


