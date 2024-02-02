#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Yaralanma_Effect.Yaralanma_Effect_C
// (Actor)

class UClass* UYaralanma_Effect_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Yaralanma_Effect_C");

	return Clss;
}


// Yaralanma_Effect_C Yaralanma_Effect.Default__Yaralanma_Effect_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UYaralanma_Effect_C* UYaralanma_Effect_C::GetDefaultObj()
{
	static class UYaralanma_Effect_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UYaralanma_Effect_C*>(UYaralanma_Effect_C::StaticClass()->DefaultObject);

	return Default;
}

}


