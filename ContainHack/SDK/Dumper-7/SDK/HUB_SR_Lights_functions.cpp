#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass HUB_SR_Lights.HUB_SR_Lights_C
// (Actor)

class UClass* UHUB_SR_Lights_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HUB_SR_Lights_C");

	return Clss;
}


// HUB_SR_Lights_C HUB_SR_Lights.Default__HUB_SR_Lights_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UHUB_SR_Lights_C* UHUB_SR_Lights_C::GetDefaultObj()
{
	static class UHUB_SR_Lights_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UHUB_SR_Lights_C*>(UHUB_SR_Lights_C::StaticClass()->DefaultObject);

	return Default;
}

}


