#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass RandomMesh_berk.RandomMesh_berk_C
// (Actor)

class UClass* URandomMesh_berk_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RandomMesh_berk_C");

	return Clss;
}


// RandomMesh_berk_C RandomMesh_berk.Default__RandomMesh_berk_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class URandomMesh_berk_C* URandomMesh_berk_C::GetDefaultObj()
{
	static class URandomMesh_berk_C* Default = nullptr;

	if (!Default)
		Default = static_cast<URandomMesh_berk_C*>(URandomMesh_berk_C::StaticClass()->DefaultObject);

	return Default;
}


// Function RandomMesh_berk.RandomMesh_berk_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void URandomMesh_berk_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RandomMesh_berk_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function RandomMesh_berk.RandomMesh_berk_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URandomMesh_berk_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RandomMesh_berk_C", "ReceiveTick");

	Params::URandomMesh_berk_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function RandomMesh_berk.RandomMesh_berk_C.ExecuteUbergraph_RandomMesh_berk
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameModeBase*               CallFunc_GetGameMode_ReturnValue                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAraPlayerStart_C*           K2Node_DynamicCast_AsAra_Player_Start                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_RandomBoolFromStream_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetStaticMesh_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URandomMesh_berk_C::ExecuteUbergraph_RandomMesh_berk(int32 EntryPoint, class UGameModeBase* CallFunc_GetGameMode_ReturnValue, class UAraPlayerStart_C* K2Node_DynamicCast_AsAra_Player_Start, bool K2Node_DynamicCast_bSuccess, float K2Node_Event_DeltaSeconds, bool CallFunc_RandomBoolFromStream_ReturnValue, bool CallFunc_SetStaticMesh_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RandomMesh_berk_C", "ExecuteUbergraph_RandomMesh_berk");

	Params::URandomMesh_berk_C_ExecuteUbergraph_RandomMesh_berk_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetGameMode_ReturnValue = CallFunc_GetGameMode_ReturnValue;
	Parms.K2Node_DynamicCast_AsAra_Player_Start = K2Node_DynamicCast_AsAra_Player_Start;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.CallFunc_RandomBoolFromStream_ReturnValue = CallFunc_RandomBoolFromStream_ReturnValue;
	Parms.CallFunc_SetStaticMesh_ReturnValue = CallFunc_SetStaticMesh_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


