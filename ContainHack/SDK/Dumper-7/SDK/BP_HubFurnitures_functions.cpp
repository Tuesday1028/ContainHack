#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_HubFurnitures.BP_HubFurnitures_C
// (Actor)

class UClass* UBP_HubFurnitures_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_HubFurnitures_C");

	return Clss;
}


// BP_HubFurnitures_C BP_HubFurnitures.Default__BP_HubFurnitures_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_HubFurnitures_C* UBP_HubFurnitures_C::GetDefaultObj()
{
	static class UBP_HubFurnitures_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_HubFurnitures_C*>(UBP_HubFurnitures_C::StaticClass()->DefaultObject);

	return Default;
}

}


