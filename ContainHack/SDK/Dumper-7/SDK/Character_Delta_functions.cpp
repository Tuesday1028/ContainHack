#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Character_Delta.Character_Delta_C
// (None)

class UClass* UCharacter_Delta_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Character_Delta_C");

	return Clss;
}


// Character_Delta_C Character_Delta.Default__Character_Delta_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCharacter_Delta_C* UCharacter_Delta_C::GetDefaultObj()
{
	static class UCharacter_Delta_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCharacter_Delta_C*>(UCharacter_Delta_C::StaticClass()->DefaultObject);

	return Default;
}

}


