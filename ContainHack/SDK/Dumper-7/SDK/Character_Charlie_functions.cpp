#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Character_Charlie.Character_Charlie_C
// (None)

class UClass* UCharacter_Charlie_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Character_Charlie_C");

	return Clss;
}


// Character_Charlie_C Character_Charlie.Default__Character_Charlie_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCharacter_Charlie_C* UCharacter_Charlie_C::GetDefaultObj()
{
	static class UCharacter_Charlie_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCharacter_Charlie_C*>(UCharacter_Charlie_C::StaticClass()->DefaultObject);

	return Default;
}

}


