#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PlayerStartLocation.PlayerStartLocation_C
// (Actor)

class UClass* UPlayerStartLocation_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PlayerStartLocation_C");

	return Clss;
}


// PlayerStartLocation_C PlayerStartLocation.Default__PlayerStartLocation_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPlayerStartLocation_C* UPlayerStartLocation_C::GetDefaultObj()
{
	static class UPlayerStartLocation_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPlayerStartLocation_C*>(UPlayerStartLocation_C::StaticClass()->DefaultObject);

	return Default;
}

}


