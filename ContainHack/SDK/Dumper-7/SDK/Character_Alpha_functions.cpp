#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Character_Alpha.Character_Alpha_C
// (None)

class UClass* UCharacter_Alpha_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Character_Alpha_C");

	return Clss;
}


// Character_Alpha_C Character_Alpha.Default__Character_Alpha_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCharacter_Alpha_C* UCharacter_Alpha_C::GetDefaultObj()
{
	static class UCharacter_Alpha_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCharacter_Alpha_C*>(UCharacter_Alpha_C::StaticClass()->DefaultObject);

	return Default;
}

}


