#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass HasarAlma_Effect.HasarAlma_Effect_C
// (Actor)

class UClass* UHasarAlma_Effect_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HasarAlma_Effect_C");

	return Clss;
}


// HasarAlma_Effect_C HasarAlma_Effect.Default__HasarAlma_Effect_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UHasarAlma_Effect_C* UHasarAlma_Effect_C::GetDefaultObj()
{
	static class UHasarAlma_Effect_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UHasarAlma_Effect_C*>(UHasarAlma_Effect_C::StaticClass()->DefaultObject);

	return Default;
}

}


