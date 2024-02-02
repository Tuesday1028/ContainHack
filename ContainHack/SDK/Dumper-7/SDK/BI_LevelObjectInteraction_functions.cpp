#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BI_LevelObjectInteraction.BI_LevelObjectInteraction_C
// (None)

class UClass* UBI_LevelObjectInteraction_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BI_LevelObjectInteraction_C");

	return Clss;
}


// BI_LevelObjectInteraction_C BI_LevelObjectInteraction.Default__BI_LevelObjectInteraction_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBI_LevelObjectInteraction_C* UBI_LevelObjectInteraction_C::GetDefaultObj()
{
	static class UBI_LevelObjectInteraction_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBI_LevelObjectInteraction_C*>(UBI_LevelObjectInteraction_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BI_LevelObjectInteraction.BI_LevelObjectInteraction_C.Deactivate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBI_LevelObjectInteraction_C::Deactivate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BI_LevelObjectInteraction_C", "Deactivate");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BI_LevelObjectInteraction.BI_LevelObjectInteraction_C.Activate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBI_LevelObjectInteraction_C::Activate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BI_LevelObjectInteraction_C", "Activate");



	UObject::ProcessEvent(Func, nullptr);

}

}


