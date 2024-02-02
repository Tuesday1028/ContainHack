#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass NightVision_A_Skeleton_AnimBlueprint.NightVision_A_Skeleton_AnimBlueprint_C
// (None)

class UClass* UNightVision_A_Skeleton_AnimBlueprint_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NightVision_A_Skeleton_AnimBlueprint_C");

	return Clss;
}


// NightVision_A_Skeleton_AnimBlueprint_C NightVision_A_Skeleton_AnimBlueprint.Default__NightVision_A_Skeleton_AnimBlueprint_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UNightVision_A_Skeleton_AnimBlueprint_C* UNightVision_A_Skeleton_AnimBlueprint_C::GetDefaultObj()
{
	static class UNightVision_A_Skeleton_AnimBlueprint_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UNightVision_A_Skeleton_AnimBlueprint_C*>(UNightVision_A_Skeleton_AnimBlueprint_C::StaticClass()->DefaultObject);

	return Default;
}


// Function NightVision_A_Skeleton_AnimBlueprint.NightVision_A_Skeleton_AnimBlueprint_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UNightVision_A_Skeleton_AnimBlueprint_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NightVision_A_Skeleton_AnimBlueprint_C", "AnimGraph");

	Params::UNightVision_A_Skeleton_AnimBlueprint_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function NightVision_A_Skeleton_AnimBlueprint.NightVision_A_Skeleton_AnimBlueprint_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaTimeX                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNightVision_A_Skeleton_AnimBlueprint_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NightVision_A_Skeleton_AnimBlueprint_C", "BlueprintUpdateAnimation");

	Params::UNightVision_A_Skeleton_AnimBlueprint_C_BlueprintUpdateAnimation_Params Parms{};

	Parms.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NightVision_A_Skeleton_AnimBlueprint.NightVision_A_Skeleton_AnimBlueprint_C.ExecuteUbergraph_NightVision_A_Skeleton_AnimBlueprint
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPawn*                       CallFunc_TryGetPawnOwner_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UB_DemoCharacter_C*          K2Node_DynamicCast_AsB_Demo_Character                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaTimeX                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNightVision_A_Skeleton_AnimBlueprint_C::ExecuteUbergraph_NightVision_A_Skeleton_AnimBlueprint(int32 EntryPoint, class UPawn* CallFunc_TryGetPawnOwner_ReturnValue, class UB_DemoCharacter_C* K2Node_DynamicCast_AsB_Demo_Character, bool K2Node_DynamicCast_bSuccess, float K2Node_Event_DeltaTimeX)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NightVision_A_Skeleton_AnimBlueprint_C", "ExecuteUbergraph_NightVision_A_Skeleton_AnimBlueprint");

	Params::UNightVision_A_Skeleton_AnimBlueprint_C_ExecuteUbergraph_NightVision_A_Skeleton_AnimBlueprint_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_TryGetPawnOwner_ReturnValue = CallFunc_TryGetPawnOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsB_Demo_Character = K2Node_DynamicCast_AsB_Demo_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_Event_DeltaTimeX = K2Node_Event_DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);

}

}


