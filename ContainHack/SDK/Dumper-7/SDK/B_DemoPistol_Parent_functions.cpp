#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass B_DemoPistol_Parent.B_DemoPistol_Parent_C
// (Actor)

class UClass* UB_DemoPistol_Parent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("B_DemoPistol_Parent_C");

	return Clss;
}


// B_DemoPistol_Parent_C B_DemoPistol_Parent.Default__B_DemoPistol_Parent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UB_DemoPistol_Parent_C* UB_DemoPistol_Parent_C::GetDefaultObj()
{
	static class UB_DemoPistol_Parent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UB_DemoPistol_Parent_C*>(UB_DemoPistol_Parent_C::StaticClass()->DefaultObject);

	return Default;
}

}


