#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ContainPlayerState.ContainPlayerState_C
// (Actor)

class UClass* UContainPlayerState_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ContainPlayerState_C");

	return Clss;
}


// ContainPlayerState_C ContainPlayerState.Default__ContainPlayerState_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UContainPlayerState_C* UContainPlayerState_C::GetDefaultObj()
{
	static class UContainPlayerState_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UContainPlayerState_C*>(UContainPlayerState_C::StaticClass()->DefaultObject);

	return Default;
}

}


