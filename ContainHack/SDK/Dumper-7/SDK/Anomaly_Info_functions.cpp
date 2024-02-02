#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Anomaly_Info.Anomaly_Info_C
// (Actor)

class UClass* UAnomaly_Info_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Anomaly_Info_C");

	return Clss;
}


// Anomaly_Info_C Anomaly_Info.Default__Anomaly_Info_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAnomaly_Info_C* UAnomaly_Info_C::GetDefaultObj()
{
	static class UAnomaly_Info_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAnomaly_Info_C*>(UAnomaly_Info_C::StaticClass()->DefaultObject);

	return Default;
}

}


