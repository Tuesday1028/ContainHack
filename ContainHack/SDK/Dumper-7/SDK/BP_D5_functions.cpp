#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_D5.BP_D5_C
// (Actor)

class UClass* UBP_D5_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_D5_C");

	return Clss;
}


// BP_D5_C BP_D5.Default__BP_D5_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_D5_C* UBP_D5_C::GetDefaultObj()
{
	static class UBP_D5_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_D5_C*>(UBP_D5_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_D5.BP_D5_C.OpenDoor
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_D5_C::OpenDoor()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_D5_C", "OpenDoor");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_D5.BP_D5_C.OpenDoor_Server
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_D5_C::OpenDoor_Server()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_D5_C", "OpenDoor_Server");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_D5.BP_D5_C.CloseDoor
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_D5_C::CloseDoor()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_D5_C", "CloseDoor");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_D5.BP_D5_C.CloseDoor_Server
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_D5_C::CloseDoor_Server()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_D5_C", "CloseDoor_Server");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_D5.BP_D5_C.ExecuteUbergraph_BP_D5
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetPosition_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetPosition_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameStateBase*              CallFunc_GetGameState_ReturnValue                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UContainGameState_C*         K2Node_DynamicCast_AsContain_Game_State                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetPosition_InPos_ImplicitCast                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetPosition_InPos_ImplicitCast_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSet_AnimationTime_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSet_AnimationTime_ImplicitCast_1                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_D5_C::ExecuteUbergraph_BP_D5(int32 EntryPoint, float CallFunc_GetPosition_ReturnValue, float CallFunc_GetPosition_ReturnValue_1, class UGameStateBase* CallFunc_GetGameState_ReturnValue, class UContainGameState_C* K2Node_DynamicCast_AsContain_Game_State, bool K2Node_DynamicCast_bSuccess, float CallFunc_SetPosition_InPos_ImplicitCast, float CallFunc_SetPosition_InPos_ImplicitCast_1, double K2Node_VariableSet_AnimationTime_ImplicitCast, double K2Node_VariableSet_AnimationTime_ImplicitCast_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_D5_C", "ExecuteUbergraph_BP_D5");

	Params::UBP_D5_C_ExecuteUbergraph_BP_D5_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetPosition_ReturnValue = CallFunc_GetPosition_ReturnValue;
	Parms.CallFunc_GetPosition_ReturnValue_1 = CallFunc_GetPosition_ReturnValue_1;
	Parms.CallFunc_GetGameState_ReturnValue = CallFunc_GetGameState_ReturnValue;
	Parms.K2Node_DynamicCast_AsContain_Game_State = K2Node_DynamicCast_AsContain_Game_State;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_SetPosition_InPos_ImplicitCast = CallFunc_SetPosition_InPos_ImplicitCast;
	Parms.CallFunc_SetPosition_InPos_ImplicitCast_1 = CallFunc_SetPosition_InPos_ImplicitCast_1;
	Parms.K2Node_VariableSet_AnimationTime_ImplicitCast = K2Node_VariableSet_AnimationTime_ImplicitCast;
	Parms.K2Node_VariableSet_AnimationTime_ImplicitCast_1 = K2Node_VariableSet_AnimationTime_ImplicitCast_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


