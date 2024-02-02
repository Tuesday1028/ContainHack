#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Karakter_Tam_Kamera.Karakter_Tam_Kamera_C
// (Actor)

class UClass* UKarakter_Tam_Kamera_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Karakter_Tam_Kamera_C");

	return Clss;
}


// Karakter_Tam_Kamera_C Karakter_Tam_Kamera.Default__Karakter_Tam_Kamera_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UKarakter_Tam_Kamera_C* UKarakter_Tam_Kamera_C::GetDefaultObj()
{
	static class UKarakter_Tam_Kamera_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UKarakter_Tam_Kamera_C*>(UKarakter_Tam_Kamera_C::StaticClass()->DefaultObject);

	return Default;
}

}


