#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Karakter_Attach_Kask_Orta_Kamera.Karakter_Attach_Kask_Orta_Kamera_C
// (Actor)

class UClass* UKarakter_Attach_Kask_Orta_Kamera_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Karakter_Attach_Kask_Orta_Kamera_C");

	return Clss;
}


// Karakter_Attach_Kask_Orta_Kamera_C Karakter_Attach_Kask_Orta_Kamera.Default__Karakter_Attach_Kask_Orta_Kamera_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UKarakter_Attach_Kask_Orta_Kamera_C* UKarakter_Attach_Kask_Orta_Kamera_C::GetDefaultObj()
{
	static class UKarakter_Attach_Kask_Orta_Kamera_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UKarakter_Attach_Kask_Orta_Kamera_C*>(UKarakter_Attach_Kask_Orta_Kamera_C::StaticClass()->DefaultObject);

	return Default;
}

}


