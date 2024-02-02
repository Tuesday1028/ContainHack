#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass IF_NPC.IF_NPC_C
// (None)

class UClass* UIF_NPC_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("IF_NPC_C");

	return Clss;
}


// IF_NPC_C IF_NPC.Default__IF_NPC_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UIF_NPC_C* UIF_NPC_C::GetDefaultObj()
{
	static class UIF_NPC_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UIF_NPC_C*>(UIF_NPC_C::StaticClass()->DefaultObject);

	return Default;
}


// Function IF_NPC.IF_NPC_C.ZombieSpawn
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UIF_NPC_C::ZombieSpawn()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IF_NPC_C", "ZombieSpawn");



	UObject::ProcessEvent(Func, nullptr);

}


// Function IF_NPC.IF_NPC_C.AiSee
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UIF_NPC_C::AiSee()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IF_NPC_C", "AiSee");



	UObject::ProcessEvent(Func, nullptr);

}

}


