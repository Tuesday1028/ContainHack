#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AIC_Husk.AIC_Husk_C
// (Actor)

class UClass* UAIC_Husk_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AIC_Husk_C");

	return Clss;
}


// AIC_Husk_C AIC_Husk.Default__AIC_Husk_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAIC_Husk_C* UAIC_Husk_C::GetDefaultObj()
{
	static class UAIC_Husk_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAIC_Husk_C*>(UAIC_Husk_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AIC_Husk.AIC_Husk_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBlackboardComponent*        CallFunc_UseBlackboard_BlackboardComponent                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_UseBlackboard_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_RunBehaviorTree_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAIC_Husk_C::UserConstructionScript(class UBlackboardComponent* CallFunc_UseBlackboard_BlackboardComponent, bool CallFunc_UseBlackboard_ReturnValue, bool CallFunc_RunBehaviorTree_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIC_Husk_C", "UserConstructionScript");

	Params::UAIC_Husk_C_UserConstructionScript_Params Parms{};

	Parms.CallFunc_UseBlackboard_BlackboardComponent = CallFunc_UseBlackboard_BlackboardComponent;
	Parms.CallFunc_UseBlackboard_ReturnValue = CallFunc_UseBlackboard_ReturnValue;
	Parms.CallFunc_RunBehaviorTree_ReturnValue = CallFunc_RunBehaviorTree_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


