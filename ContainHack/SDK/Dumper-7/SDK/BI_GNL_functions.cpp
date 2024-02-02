#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BI_GNL.BI_GNL_C
// (None)

class UClass* UBI_GNL_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BI_GNL_C");

	return Clss;
}


// BI_GNL_C BI_GNL.Default__BI_GNL_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBI_GNL_C* UBI_GNL_C::GetDefaultObj()
{
	static class UBI_GNL_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBI_GNL_C*>(UBI_GNL_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BI_GNL.BI_GNL_C.MissionEnabled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBI_GNL_C::MissionEnabled()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BI_GNL_C", "MissionEnabled");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BI_GNL.BI_GNL_C.dooropen
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBI_GNL_C::Dooropen()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BI_GNL_C", "dooropen");



	UObject::ProcessEvent(Func, nullptr);

}

}


