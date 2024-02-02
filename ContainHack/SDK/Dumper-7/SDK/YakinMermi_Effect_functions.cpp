#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass YakinMermi_Effect.YakinMermi_Effect_C
// (Actor)

class UClass* UYakinMermi_Effect_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("YakinMermi_Effect_C");

	return Clss;
}


// YakinMermi_Effect_C YakinMermi_Effect.Default__YakinMermi_Effect_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UYakinMermi_Effect_C* UYakinMermi_Effect_C::GetDefaultObj()
{
	static class UYakinMermi_Effect_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UYakinMermi_Effect_C*>(UYakinMermi_Effect_C::StaticClass()->DefaultObject);

	return Default;
}

}


