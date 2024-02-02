#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ConstDatapadHedefiToplu.ConstDatapadHedefiToplu_C
// (Actor)

class UClass* UConstDatapadHedefiToplu_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ConstDatapadHedefiToplu_C");

	return Clss;
}


// ConstDatapadHedefiToplu_C ConstDatapadHedefiToplu.Default__ConstDatapadHedefiToplu_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UConstDatapadHedefiToplu_C* UConstDatapadHedefiToplu_C::GetDefaultObj()
{
	static class UConstDatapadHedefiToplu_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UConstDatapadHedefiToplu_C*>(UConstDatapadHedefiToplu_C::StaticClass()->DefaultObject);

	return Default;
}

}


