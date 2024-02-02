#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass NavArea_Crouch.NavArea_Crouch_C
// (None)

class UClass* UNavArea_Crouch_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NavArea_Crouch_C");

	return Clss;
}


// NavArea_Crouch_C NavArea_Crouch.Default__NavArea_Crouch_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UNavArea_Crouch_C* UNavArea_Crouch_C::GetDefaultObj()
{
	static class UNavArea_Crouch_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UNavArea_Crouch_C*>(UNavArea_Crouch_C::StaticClass()->DefaultObject);

	return Default;
}

}


