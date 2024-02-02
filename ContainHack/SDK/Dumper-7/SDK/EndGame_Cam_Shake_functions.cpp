#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EndGame_Cam_Shake.EndGame_Cam_Shake_C
// (None)

class UClass* UEndGame_Cam_Shake_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EndGame_Cam_Shake_C");

	return Clss;
}


// EndGame_Cam_Shake_C EndGame_Cam_Shake.Default__EndGame_Cam_Shake_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEndGame_Cam_Shake_C* UEndGame_Cam_Shake_C::GetDefaultObj()
{
	static class UEndGame_Cam_Shake_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEndGame_Cam_Shake_C*>(UEndGame_Cam_Shake_C::StaticClass()->DefaultObject);

	return Default;
}

}


