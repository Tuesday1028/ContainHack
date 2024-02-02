#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GaigerHedefi.GaigerHedefi_C
// (Actor)

class UClass* UGaigerHedefi_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GaigerHedefi_C");

	return Clss;
}


// GaigerHedefi_C GaigerHedefi.Default__GaigerHedefi_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGaigerHedefi_C* UGaigerHedefi_C::GetDefaultObj()
{
	static class UGaigerHedefi_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGaigerHedefi_C*>(UGaigerHedefi_C::StaticClass()->DefaultObject);

	return Default;
}

}


