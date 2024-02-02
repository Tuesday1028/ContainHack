#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Port_CamShake_02.Port_CamShake_02_C
// (None)

class UClass* UPort_CamShake_02_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Port_CamShake_02_C");

	return Clss;
}


// Port_CamShake_02_C Port_CamShake_02.Default__Port_CamShake_02_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPort_CamShake_02_C* UPort_CamShake_02_C::GetDefaultObj()
{
	static class UPort_CamShake_02_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPort_CamShake_02_C*>(UPort_CamShake_02_C::StaticClass()->DefaultObject);

	return Default;
}

}


