#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass RestockSarjor.RestockSarjor_C
// (Actor)

class UClass* URestockSarjor_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RestockSarjor_C");

	return Clss;
}


// RestockSarjor_C RestockSarjor.Default__RestockSarjor_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class URestockSarjor_C* URestockSarjor_C::GetDefaultObj()
{
	static class URestockSarjor_C* Default = nullptr;

	if (!Default)
		Default = static_cast<URestockSarjor_C*>(URestockSarjor_C::StaticClass()->DefaultObject);

	return Default;
}

}


