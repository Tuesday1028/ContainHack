#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Lvl06_CamShake_01.Lvl06_CamShake_01_C
// (None)

class UClass* ULvl06_CamShake_01_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Lvl06_CamShake_01_C");

	return Clss;
}


// Lvl06_CamShake_01_C Lvl06_CamShake_01.Default__Lvl06_CamShake_01_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULvl06_CamShake_01_C* ULvl06_CamShake_01_C::GetDefaultObj()
{
	static class ULvl06_CamShake_01_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULvl06_CamShake_01_C*>(ULvl06_CamShake_01_C::StaticClass()->DefaultObject);

	return Default;
}

}


