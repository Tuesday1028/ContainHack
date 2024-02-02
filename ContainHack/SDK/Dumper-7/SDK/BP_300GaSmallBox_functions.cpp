#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_300GaSmallBox.BP_300GaSmallBox_C
// (Actor)

class UClass* UBP_300GaSmallBox_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_300GaSmallBox_C");

	return Clss;
}


// BP_300GaSmallBox_C BP_300GaSmallBox.Default__BP_300GaSmallBox_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_300GaSmallBox_C* UBP_300GaSmallBox_C::GetDefaultObj()
{
	static class UBP_300GaSmallBox_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_300GaSmallBox_C*>(UBP_300GaSmallBox_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_300GaSmallBox.BP_300GaSmallBox_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetCullDistance_NewCullDistance_ImplicitCast            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetCullDistance_NewCullDistance_ImplicitCast_1          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_300GaSmallBox_C::UserConstructionScript(bool K2Node_SwitchInteger_CmpSuccess, float CallFunc_SetCullDistance_NewCullDistance_ImplicitCast, float CallFunc_SetCullDistance_NewCullDistance_ImplicitCast_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_300GaSmallBox_C", "UserConstructionScript");

	Params::UBP_300GaSmallBox_C_UserConstructionScript_Params Parms{};

	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.CallFunc_SetCullDistance_NewCullDistance_ImplicitCast = CallFunc_SetCullDistance_NewCullDistance_ImplicitCast;
	Parms.CallFunc_SetCullDistance_NewCullDistance_ImplicitCast_1 = CallFunc_SetCullDistance_NewCullDistance_ImplicitCast_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


