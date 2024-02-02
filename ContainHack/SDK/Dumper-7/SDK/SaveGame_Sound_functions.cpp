#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SaveGame_Sound.SaveGame_Sound_C
// (None)

class UClass* USaveGame_Sound_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SaveGame_Sound_C");

	return Clss;
}


// SaveGame_Sound_C SaveGame_Sound.Default__SaveGame_Sound_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USaveGame_Sound_C* USaveGame_Sound_C::GetDefaultObj()
{
	static class USaveGame_Sound_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USaveGame_Sound_C*>(USaveGame_Sound_C::StaticClass()->DefaultObject);

	return Default;
}

}


