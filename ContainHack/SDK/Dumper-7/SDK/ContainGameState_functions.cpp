#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ContainGameState.ContainGameState_C
// (Actor)

class UClass* UContainGameState_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ContainGameState_C");

	return Clss;
}


// ContainGameState_C ContainGameState.Default__ContainGameState_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UContainGameState_C* UContainGameState_C::GetDefaultObj()
{
	static class UContainGameState_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UContainGameState_C*>(UContainGameState_C::StaticClass()->DefaultObject);

	return Default;
}

}


