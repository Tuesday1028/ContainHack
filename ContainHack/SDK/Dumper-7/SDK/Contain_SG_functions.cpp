#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Contain_SG.Contain_SG_C
// (None)

class UClass* UContain_SG_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Contain_SG_C");

	return Clss;
}


// Contain_SG_C Contain_SG.Default__Contain_SG_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UContain_SG_C* UContain_SG_C::GetDefaultObj()
{
	static class UContain_SG_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UContain_SG_C*>(UContain_SG_C::StaticClass()->DefaultObject);

	return Default;
}

}


