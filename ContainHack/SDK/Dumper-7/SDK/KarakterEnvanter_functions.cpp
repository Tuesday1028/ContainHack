#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass KarakterEnvanter.KarakterEnvanter_C
// (Actor)

class UClass* UKarakterEnvanter_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("KarakterEnvanter_C");

	return Clss;
}


// KarakterEnvanter_C KarakterEnvanter.Default__KarakterEnvanter_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UKarakterEnvanter_C* UKarakterEnvanter_C::GetDefaultObj()
{
	static class UKarakterEnvanter_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UKarakterEnvanter_C*>(UKarakterEnvanter_C::StaticClass()->DefaultObject);

	return Default;
}

}


