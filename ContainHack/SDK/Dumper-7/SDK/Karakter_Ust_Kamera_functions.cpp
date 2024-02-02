#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Karakter_Ust_Kamera.Karakter_Ust_Kamera_C
// (Actor)

class UClass* UKarakter_Ust_Kamera_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Karakter_Ust_Kamera_C");

	return Clss;
}


// Karakter_Ust_Kamera_C Karakter_Ust_Kamera.Default__Karakter_Ust_Kamera_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UKarakter_Ust_Kamera_C* UKarakter_Ust_Kamera_C::GetDefaultObj()
{
	static class UKarakter_Ust_Kamera_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UKarakter_Ust_Kamera_C*>(UKarakter_Ust_Kamera_C::StaticClass()->DefaultObject);

	return Default;
}

}


