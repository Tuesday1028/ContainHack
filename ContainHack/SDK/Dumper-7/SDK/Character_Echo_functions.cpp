#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Character_Echo.Character_Echo_C
// (None)

class UClass* UCharacter_Echo_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Character_Echo_C");

	return Clss;
}


// Character_Echo_C Character_Echo.Default__Character_Echo_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCharacter_Echo_C* UCharacter_Echo_C::GetDefaultObj()
{
	static class UCharacter_Echo_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCharacter_Echo_C*>(UCharacter_Echo_C::StaticClass()->DefaultObject);

	return Default;
}

}


