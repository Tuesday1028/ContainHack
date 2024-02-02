#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Character_Beta.Character_Beta_C
// (None)

class UClass* UCharacter_Beta_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Character_Beta_C");

	return Clss;
}


// Character_Beta_C Character_Beta.Default__Character_Beta_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCharacter_Beta_C* UCharacter_Beta_C::GetDefaultObj()
{
	static class UCharacter_Beta_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCharacter_Beta_C*>(UCharacter_Beta_C::StaticClass()->DefaultObject);

	return Default;
}

}


