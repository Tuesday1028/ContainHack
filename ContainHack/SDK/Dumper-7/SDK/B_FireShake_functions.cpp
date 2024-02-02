#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass B_FireShake.B_FireShake_C
// (None)

class UClass* UB_FireShake_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("B_FireShake_C");

	return Clss;
}


// B_FireShake_C B_FireShake.Default__B_FireShake_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UB_FireShake_C* UB_FireShake_C::GetDefaultObj()
{
	static class UB_FireShake_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UB_FireShake_C*>(UB_FireShake_C::StaticClass()->DefaultObject);

	return Default;
}

}


