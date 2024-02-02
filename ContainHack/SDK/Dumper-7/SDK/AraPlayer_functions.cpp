#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AraPlayer.AraPlayer_C
// (Actor, Pawn)

class UClass* UAraPlayer_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AraPlayer_C");

	return Clss;
}


// AraPlayer_C AraPlayer.Default__AraPlayer_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAraPlayer_C* UAraPlayer_C::GetDefaultObj()
{
	static class UAraPlayer_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAraPlayer_C*>(UAraPlayer_C::StaticClass()->DefaultObject);

	return Default;
}

}


