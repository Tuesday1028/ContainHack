#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BHandguardAlan.BHandguardAlan_C
// (Actor)

class UClass* UBHandguardAlan_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BHandguardAlan_C");

	return Clss;
}


// BHandguardAlan_C BHandguardAlan.Default__BHandguardAlan_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBHandguardAlan_C* UBHandguardAlan_C::GetDefaultObj()
{
	static class UBHandguardAlan_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBHandguardAlan_C*>(UBHandguardAlan_C::StaticClass()->DefaultObject);

	return Default;
}

}


