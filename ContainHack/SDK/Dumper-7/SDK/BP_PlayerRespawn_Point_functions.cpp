#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PlayerRespawn_Point.BP_PlayerRespawn_Point_C
// (Actor)

class UClass* UBP_PlayerRespawn_Point_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PlayerRespawn_Point_C");

	return Clss;
}


// BP_PlayerRespawn_Point_C BP_PlayerRespawn_Point.Default__BP_PlayerRespawn_Point_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_PlayerRespawn_Point_C* UBP_PlayerRespawn_Point_C::GetDefaultObj()
{
	static class UBP_PlayerRespawn_Point_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_PlayerRespawn_Point_C*>(UBP_PlayerRespawn_Point_C::StaticClass()->DefaultObject);

	return Default;
}

}


