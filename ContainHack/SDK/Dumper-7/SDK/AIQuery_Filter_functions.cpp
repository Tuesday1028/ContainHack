#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AIQuery_Filter.AIQuery_Filter_C
// (None)

class UClass* UAIQuery_Filter_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AIQuery_Filter_C");

	return Clss;
}


// AIQuery_Filter_C AIQuery_Filter.Default__AIQuery_Filter_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAIQuery_Filter_C* UAIQuery_Filter_C::GetDefaultObj()
{
	static class UAIQuery_Filter_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAIQuery_Filter_C*>(UAIQuery_Filter_C::StaticClass()->DefaultObject);

	return Default;
}

}


