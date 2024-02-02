#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass Crawler_AnimBP.Crawler_AnimBP_C
// (None)

class UClass* UCrawler_AnimBP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Crawler_AnimBP_C");

	return Clss;
}


// Crawler_AnimBP_C Crawler_AnimBP.Default__Crawler_AnimBP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCrawler_AnimBP_C* UCrawler_AnimBP_C::GetDefaultObj()
{
	static class UCrawler_AnimBP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCrawler_AnimBP_C*>(UCrawler_AnimBP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Crawler_AnimBP.Crawler_AnimBP_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UCrawler_AnimBP_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Crawler_AnimBP_C", "AnimGraph");

	Params::UCrawler_AnimBP_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function Crawler_AnimBP.Crawler_AnimBP_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaTimeX                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCrawler_AnimBP_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Crawler_AnimBP_C", "BlueprintUpdateAnimation");

	Params::UCrawler_AnimBP_C_BlueprintUpdateAnimation_Params Parms{};

	Parms.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Crawler_AnimBP.Crawler_AnimBP_C.AnimNotify_EndSpawn
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UCrawler_AnimBP_C::AnimNotify_EndSpawn()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Crawler_AnimBP_C", "AnimNotify_EndSpawn");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Crawler_AnimBP.Crawler_AnimBP_C.AliveAnim
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:

void UCrawler_AnimBP_C::AliveAnim()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Crawler_AnimBP_C", "AliveAnim");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Crawler_AnimBP.Crawler_AnimBP_C.AliveAnim_Serv
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:

void UCrawler_AnimBP_C::AliveAnim_Serv()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Crawler_AnimBP_C", "AliveAnim_Serv");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Crawler_AnimBP.Crawler_AnimBP_C.AnimNotify_Death
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UCrawler_AnimBP_C::AnimNotify_Death()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Crawler_AnimBP_C", "AnimNotify_Death");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Crawler_AnimBP.Crawler_AnimBP_C.AnimNotify_SpawnAudio
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UCrawler_AnimBP_C::AnimNotify_SpawnAudio()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Crawler_AnimBP_C", "AnimNotify_SpawnAudio");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Crawler_AnimBP.Crawler_AnimBP_C.ExecuteUbergraph_Crawler_AnimBP
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaTimeX                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPawn*                       CallFunc_TryGetPawnOwner_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBlackboardComponent*        CallFunc_GetBlackboard_ReturnValue                               (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UBlackboardComponent*        CallFunc_GetBlackboard_ReturnValue_1                             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UCrawler_CharacterBP_C*      K2Node_DynamicCast_AsCrawler_Character_BP                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_MakeLiteralName_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_MakeLiteralName_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetValueAsBool_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_VSizeXY_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_VariableSet_Speed_ImplicitCast                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCrawler_AnimBP_C::ExecuteUbergraph_Crawler_AnimBP(int32 EntryPoint, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_IsClosed_Variable, bool Temp_bool_Has_Been_Initd_Variable_1, float K2Node_Event_DeltaTimeX, class UPawn* CallFunc_TryGetPawnOwner_ReturnValue, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue_1, class UCrawler_CharacterBP_C* K2Node_DynamicCast_AsCrawler_Character_BP, bool K2Node_DynamicCast_bSuccess, class FName CallFunc_MakeLiteralName_ReturnValue, bool Temp_bool_IsClosed_Variable_1, class FName CallFunc_MakeLiteralName_ReturnValue_1, bool CallFunc_GetValueAsBool_ReturnValue, double CallFunc_VSizeXY_ReturnValue, float K2Node_VariableSet_Speed_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Crawler_AnimBP_C", "ExecuteUbergraph_Crawler_AnimBP");

	Params::UCrawler_AnimBP_C_ExecuteUbergraph_Crawler_AnimBP_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.Temp_bool_Has_Been_Initd_Variable_1 = Temp_bool_Has_Been_Initd_Variable_1;
	Parms.K2Node_Event_DeltaTimeX = K2Node_Event_DeltaTimeX;
	Parms.CallFunc_TryGetPawnOwner_ReturnValue = CallFunc_TryGetPawnOwner_ReturnValue;
	Parms.CallFunc_GetBlackboard_ReturnValue = CallFunc_GetBlackboard_ReturnValue;
	Parms.CallFunc_GetBlackboard_ReturnValue_1 = CallFunc_GetBlackboard_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsCrawler_Character_BP = K2Node_DynamicCast_AsCrawler_Character_BP;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_MakeLiteralName_ReturnValue = CallFunc_MakeLiteralName_ReturnValue;
	Parms.Temp_bool_IsClosed_Variable_1 = Temp_bool_IsClosed_Variable_1;
	Parms.CallFunc_MakeLiteralName_ReturnValue_1 = CallFunc_MakeLiteralName_ReturnValue_1;
	Parms.CallFunc_GetValueAsBool_ReturnValue = CallFunc_GetValueAsBool_ReturnValue;
	Parms.CallFunc_VSizeXY_ReturnValue = CallFunc_VSizeXY_ReturnValue;
	Parms.K2Node_VariableSet_Speed_ImplicitCast = K2Node_VariableSet_Speed_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}

}


