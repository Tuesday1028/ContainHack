#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AI_WeepingAngel.AI_WeepingAngel_C
// (Actor, Pawn)

class UClass* UAI_WeepingAngel_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AI_WeepingAngel_C");

	return Clss;
}


// AI_WeepingAngel_C AI_WeepingAngel.Default__AI_WeepingAngel_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAI_WeepingAngel_C* UAI_WeepingAngel_C::GetDefaultObj()
{
	static class UAI_WeepingAngel_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAI_WeepingAngel_C*>(UAI_WeepingAngel_C::StaticClass()->DefaultObject);

	return Default;
}

}


