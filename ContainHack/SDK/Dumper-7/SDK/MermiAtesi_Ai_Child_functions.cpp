#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MermiAtesi_Ai_Child.MermiAtesi_Ai_Child_C
// (Actor)

class UClass* UMermiAtesi_Ai_Child_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MermiAtesi_Ai_Child_C");

	return Clss;
}


// MermiAtesi_Ai_Child_C MermiAtesi_Ai_Child.Default__MermiAtesi_Ai_Child_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMermiAtesi_Ai_Child_C* UMermiAtesi_Ai_Child_C::GetDefaultObj()
{
	static class UMermiAtesi_Ai_Child_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMermiAtesi_Ai_Child_C*>(UMermiAtesi_Ai_Child_C::StaticClass()->DefaultObject);

	return Default;
}

}


