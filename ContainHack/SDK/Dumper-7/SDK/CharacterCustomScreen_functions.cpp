#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CharacterCustomScreen.CharacterCustomScreen_C
// (Actor)

class UClass* UCharacterCustomScreen_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CharacterCustomScreen_C");

	return Clss;
}


// CharacterCustomScreen_C CharacterCustomScreen.Default__CharacterCustomScreen_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCharacterCustomScreen_C* UCharacterCustomScreen_C::GetDefaultObj()
{
	static class UCharacterCustomScreen_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCharacterCustomScreen_C*>(UCharacterCustomScreen_C::StaticClass()->DefaultObject);

	return Default;
}

}


