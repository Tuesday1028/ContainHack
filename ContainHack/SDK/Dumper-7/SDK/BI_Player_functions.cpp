#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BI_Player.BI_Player_C
// (None)

class UClass* UBI_Player_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BI_Player_C");

	return Clss;
}


// BI_Player_C BI_Player.Default__BI_Player_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBI_Player_C* UBI_Player_C::GetDefaultObj()
{
	static class UBI_Player_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBI_Player_C*>(UBI_Player_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BI_Player.BI_Player_C.FastReload
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBI_Player_C::FastReload()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BI_Player_C", "FastReload");



	UObject::ProcessEvent(Func, nullptr);

}

}


