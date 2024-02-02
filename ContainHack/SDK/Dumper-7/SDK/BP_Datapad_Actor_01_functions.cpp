#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Datapad_Actor_01.BP_Datapad_Actor_01_C
// (Actor)

class UClass* UBP_Datapad_Actor_01_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Datapad_Actor_01_C");

	return Clss;
}


// BP_Datapad_Actor_01_C BP_Datapad_Actor_01.Default__BP_Datapad_Actor_01_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_Datapad_Actor_01_C* UBP_Datapad_Actor_01_C::GetDefaultObj()
{
	static class UBP_Datapad_Actor_01_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_Datapad_Actor_01_C*>(UBP_Datapad_Actor_01_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Datapad_Actor_01.BP_Datapad_Actor_01_C.OnRep_GaigerSil
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_Datapad_Actor_01_C::OnRep_GaigerSil()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Datapad_Actor_01_C", "OnRep_GaigerSil");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Datapad_Actor_01.BP_Datapad_Actor_01_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void UBP_Datapad_Actor_01_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Datapad_Actor_01_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Datapad_Actor_01.BP_Datapad_Actor_01_C.ServerBaslangic
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_Datapad_Actor_01_C::ServerBaslangic()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Datapad_Actor_01_C", "ServerBaslangic");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Datapad_Actor_01.BP_Datapad_Actor_01_C.ExecuteUbergraph_BP_Datapad_Actor_01
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCharacter*                  CallFunc_GetPlayerCharacter_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UB_DemoCharacter_C*          K2Node_DynamicCast_AsB_Demo_Character                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Datapad_Actor_01_C::ExecuteUbergraph_BP_Datapad_Actor_01(int32 EntryPoint, class UCharacter* CallFunc_GetPlayerCharacter_ReturnValue, class UB_DemoCharacter_C* K2Node_DynamicCast_AsB_Demo_Character, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Datapad_Actor_01_C", "ExecuteUbergraph_BP_Datapad_Actor_01");

	Params::UBP_Datapad_Actor_01_C_ExecuteUbergraph_BP_Datapad_Actor_01_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetPlayerCharacter_ReturnValue = CallFunc_GetPlayerCharacter_ReturnValue;
	Parms.K2Node_DynamicCast_AsB_Demo_Character = K2Node_DynamicCast_AsB_Demo_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}

}


