#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AnaSilah_Orta_Kamera.AnaSilah_Orta_Kamera_C
// (Actor)

class UClass* UAnaSilah_Orta_Kamera_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AnaSilah_Orta_Kamera_C");

	return Clss;
}


// AnaSilah_Orta_Kamera_C AnaSilah_Orta_Kamera.Default__AnaSilah_Orta_Kamera_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAnaSilah_Orta_Kamera_C* UAnaSilah_Orta_Kamera_C::GetDefaultObj()
{
	static class UAnaSilah_Orta_Kamera_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAnaSilah_Orta_Kamera_C*>(UAnaSilah_Orta_Kamera_C::StaticClass()->DefaultObject);

	return Default;
}

}


