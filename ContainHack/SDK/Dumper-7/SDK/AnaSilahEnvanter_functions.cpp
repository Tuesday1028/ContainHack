#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AnaSilahEnvanter.AnaSilahEnvanter_C
// (Actor)

class UClass* UAnaSilahEnvanter_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AnaSilahEnvanter_C");

	return Clss;
}


// AnaSilahEnvanter_C AnaSilahEnvanter.Default__AnaSilahEnvanter_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAnaSilahEnvanter_C* UAnaSilahEnvanter_C::GetDefaultObj()
{
	static class UAnaSilahEnvanter_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAnaSilahEnvanter_C*>(UAnaSilahEnvanter_C::StaticClass()->DefaultObject);

	return Default;
}

}


