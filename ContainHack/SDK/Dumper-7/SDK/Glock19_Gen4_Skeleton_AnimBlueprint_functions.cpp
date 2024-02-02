#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass Glock19_Gen4_Skeleton_AnimBlueprint.Glock19_Gen4_Skeleton_AnimBlueprint_C
// (None)

class UClass* UGlock19_Gen4_Skeleton_AnimBlueprint_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Glock19_Gen4_Skeleton_AnimBlueprint_C");

	return Clss;
}


// Glock19_Gen4_Skeleton_AnimBlueprint_C Glock19_Gen4_Skeleton_AnimBlueprint.Default__Glock19_Gen4_Skeleton_AnimBlueprint_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGlock19_Gen4_Skeleton_AnimBlueprint_C* UGlock19_Gen4_Skeleton_AnimBlueprint_C::GetDefaultObj()
{
	static class UGlock19_Gen4_Skeleton_AnimBlueprint_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGlock19_Gen4_Skeleton_AnimBlueprint_C*>(UGlock19_Gen4_Skeleton_AnimBlueprint_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Glock19_Gen4_Skeleton_AnimBlueprint.Glock19_Gen4_Skeleton_AnimBlueprint_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UGlock19_Gen4_Skeleton_AnimBlueprint_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Glock19_Gen4_Skeleton_AnimBlueprint_C", "AnimGraph");

	Params::UGlock19_Gen4_Skeleton_AnimBlueprint_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function Glock19_Gen4_Skeleton_AnimBlueprint.Glock19_Gen4_Skeleton_AnimBlueprint_C.OnNewFunction
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAnimUpdateContext          Context                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FAnimNodeReference          Node                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)

void UGlock19_Gen4_Skeleton_AnimBlueprint_C::OnNewFunction(struct FAnimUpdateContext& Context, struct FAnimNodeReference& Node)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Glock19_Gen4_Skeleton_AnimBlueprint_C", "OnNewFunction");

	Params::UGlock19_Gen4_Skeleton_AnimBlueprint_C_OnNewFunction_Params Parms{};

	Parms.Context = Context;
	Parms.Node = Node;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Glock19_Gen4_Skeleton_AnimBlueprint.Glock19_Gen4_Skeleton_AnimBlueprint_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaTimeX                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGlock19_Gen4_Skeleton_AnimBlueprint_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Glock19_Gen4_Skeleton_AnimBlueprint_C", "BlueprintUpdateAnimation");

	Params::UGlock19_Gen4_Skeleton_AnimBlueprint_C_BlueprintUpdateAnimation_Params Parms{};

	Parms.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Glock19_Gen4_Skeleton_AnimBlueprint.Glock19_Gen4_Skeleton_AnimBlueprint_C.ExecuteUbergraph_Glock19_Gen4_Skeleton_AnimBlueprint
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaTimeX                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPawn*                       CallFunc_TryGetPawnOwner_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UB_DemoCharacter_C*          K2Node_DynamicCast_AsB_Demo_Character                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USceneComponent*             CallFunc_GetAttachParent_ReturnValue                             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGlock19_Gen4_Skeleton_AnimBlueprint_C::ExecuteUbergraph_Glock19_Gen4_Skeleton_AnimBlueprint(int32 EntryPoint, float K2Node_Event_DeltaTimeX, class UPawn* CallFunc_TryGetPawnOwner_ReturnValue, class UB_DemoCharacter_C* K2Node_DynamicCast_AsB_Demo_Character, bool K2Node_DynamicCast_bSuccess, class USceneComponent* CallFunc_GetAttachParent_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Glock19_Gen4_Skeleton_AnimBlueprint_C", "ExecuteUbergraph_Glock19_Gen4_Skeleton_AnimBlueprint");

	Params::UGlock19_Gen4_Skeleton_AnimBlueprint_C_ExecuteUbergraph_Glock19_Gen4_Skeleton_AnimBlueprint_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_DeltaTimeX = K2Node_Event_DeltaTimeX;
	Parms.CallFunc_TryGetPawnOwner_ReturnValue = CallFunc_TryGetPawnOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsB_Demo_Character = K2Node_DynamicCast_AsB_Demo_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetAttachParent_ReturnValue = CallFunc_GetAttachParent_ReturnValue;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


