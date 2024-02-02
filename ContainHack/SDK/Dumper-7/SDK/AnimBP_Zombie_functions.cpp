#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass AnimBP_Zombie.AnimBP_Zombie_C
// (None)

class UClass* UAnimBP_Zombie_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AnimBP_Zombie_C");

	return Clss;
}


// AnimBP_Zombie_C AnimBP_Zombie.Default__AnimBP_Zombie_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAnimBP_Zombie_C* UAnimBP_Zombie_C::GetDefaultObj()
{
	static class UAnimBP_Zombie_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAnimBP_Zombie_C*>(UAnimBP_Zombie_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AnimBP_Zombie.AnimBP_Zombie_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UAnimBP_Zombie_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnimBP_Zombie_C", "AnimGraph");

	Params::UAnimBP_Zombie_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function AnimBP_Zombie.AnimBP_Zombie_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Zombie_AnimGraphNode_BlendSpacePlayer_E4219A384AE5AC3DD2689B85F0022881
// (BlueprintEvent)
// Parameters:

void UAnimBP_Zombie_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Zombie_AnimGraphNode_BlendSpacePlayer_E4219A384AE5AC3DD2689B85F0022881()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnimBP_Zombie_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Zombie_AnimGraphNode_BlendSpacePlayer_E4219A384AE5AC3DD2689B85F0022881");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AnimBP_Zombie.AnimBP_Zombie_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Zombie_AnimGraphNode_TransitionResult_D4CA3CEA4134D7E19A7333804FB91992
// (BlueprintEvent)
// Parameters:

void UAnimBP_Zombie_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Zombie_AnimGraphNode_TransitionResult_D4CA3CEA4134D7E19A7333804FB91992()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnimBP_Zombie_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Zombie_AnimGraphNode_TransitionResult_D4CA3CEA4134D7E19A7333804FB91992");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AnimBP_Zombie.AnimBP_Zombie_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Zombie_AnimGraphNode_TransitionResult_7E2678C348A1594BCD781683C9EA850C
// (BlueprintEvent)
// Parameters:

void UAnimBP_Zombie_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Zombie_AnimGraphNode_TransitionResult_7E2678C348A1594BCD781683C9EA850C()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnimBP_Zombie_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Zombie_AnimGraphNode_TransitionResult_7E2678C348A1594BCD781683C9EA850C");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AnimBP_Zombie.AnimBP_Zombie_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaTimeX                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAnimBP_Zombie_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnimBP_Zombie_C", "BlueprintUpdateAnimation");

	Params::UAnimBP_Zombie_C_BlueprintUpdateAnimation_Params Parms{};

	Parms.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AnimBP_Zombie.AnimBP_Zombie_C.BlueprintBeginPlay
// (Event, Public, BlueprintEvent)
// Parameters:

void UAnimBP_Zombie_C::BlueprintBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnimBP_Zombie_C", "BlueprintBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AnimBP_Zombie.AnimBP_Zombie_C.AnimNotify_Hit
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAnimBP_Zombie_C::AnimNotify_Hit()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnimBP_Zombie_C", "AnimNotify_Hit");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AnimBP_Zombie.AnimBP_Zombie_C.AnimNotify_HitEnd
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAnimBP_Zombie_C::AnimNotify_HitEnd()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnimBP_Zombie_C", "AnimNotify_HitEnd");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AnimBP_Zombie.AnimBP_Zombie_C.AnimNotify_Attack
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAnimBP_Zombie_C::AnimNotify_Attack()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnimBP_Zombie_C", "AnimNotify_Attack");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AnimBP_Zombie.AnimBP_Zombie_C.AnimNotify_AttackNotify
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAnimBP_Zombie_C::AnimNotify_AttackNotify()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnimBP_Zombie_C", "AnimNotify_AttackNotify");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AnimBP_Zombie.AnimBP_Zombie_C.ExecuteUbergraph_AnimBP_Zombie
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_MakeLiteralByte_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaTimeX                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPawn*                       CallFunc_TryGetPawnOwner_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAI_Steve_C*                 K2Node_DynamicCast_AsAI_Steve                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_Zombie_Pawn_C*           K2Node_DynamicCast_AsBP_Zombie_Pawn                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetVelocity_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Vector_GetAbs_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetMaxElement_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_GetSocketTransform_ReturnValue                          (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakTransform_Location                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Roll                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Pitch                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Yaw                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UMermiAtesi_Ai_Child_C*      CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_StructMemberSet___FloatProperty_ImplicitCast              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_StructMemberSet___FloatProperty_0_ImplicitCast            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAnimBP_Zombie_C::ExecuteUbergraph_AnimBP_Zombie(int32 EntryPoint, double CallFunc_Divide_DoubleDouble_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue_1, double CallFunc_Divide_DoubleDouble_ReturnValue_2, uint8 CallFunc_MakeLiteralByte_ReturnValue, float K2Node_Event_DeltaTimeX, class UPawn* CallFunc_TryGetPawnOwner_ReturnValue, class UAI_Steve_C* K2Node_DynamicCast_AsAI_Steve, bool K2Node_DynamicCast_bSuccess, class UBP_Zombie_Pawn_C* K2Node_DynamicCast_AsBP_Zombie_Pawn, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_GetVelocity_ReturnValue, const struct FVector& CallFunc_Vector_GetAbs_ReturnValue, double CallFunc_GetMaxElement_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue_3, bool CallFunc_Less_DoubleDouble_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, const struct FTransform& CallFunc_GetSocketTransform_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, const struct FRotator& CallFunc_MakeRotator_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class UActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class UMermiAtesi_Ai_Child_C* CallFunc_FinishSpawningActor_ReturnValue, float K2Node_StructMemberSet___FloatProperty_ImplicitCast, float K2Node_StructMemberSet___FloatProperty_0_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnimBP_Zombie_C", "ExecuteUbergraph_AnimBP_Zombie");

	Params::UAnimBP_Zombie_C_ExecuteUbergraph_AnimBP_Zombie_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue = CallFunc_Divide_DoubleDouble_ReturnValue;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue_1 = CallFunc_Divide_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue_2 = CallFunc_Divide_DoubleDouble_ReturnValue_2;
	Parms.CallFunc_MakeLiteralByte_ReturnValue = CallFunc_MakeLiteralByte_ReturnValue;
	Parms.K2Node_Event_DeltaTimeX = K2Node_Event_DeltaTimeX;
	Parms.CallFunc_TryGetPawnOwner_ReturnValue = CallFunc_TryGetPawnOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsAI_Steve = K2Node_DynamicCast_AsAI_Steve;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsBP_Zombie_Pawn = K2Node_DynamicCast_AsBP_Zombie_Pawn;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetVelocity_ReturnValue = CallFunc_GetVelocity_ReturnValue;
	Parms.CallFunc_Vector_GetAbs_ReturnValue = CallFunc_Vector_GetAbs_ReturnValue;
	Parms.CallFunc_GetMaxElement_ReturnValue = CallFunc_GetMaxElement_ReturnValue;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue_3 = CallFunc_Divide_DoubleDouble_ReturnValue_3;
	Parms.CallFunc_Less_DoubleDouble_ReturnValue = CallFunc_Less_DoubleDouble_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_GetSocketTransform_ReturnValue = CallFunc_GetSocketTransform_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_BreakTransform_Location = CallFunc_BreakTransform_Location;
	Parms.CallFunc_BreakTransform_Rotation = CallFunc_BreakTransform_Rotation;
	Parms.CallFunc_BreakTransform_Scale = CallFunc_BreakTransform_Scale;
	Parms.CallFunc_BreakRotator_Roll = CallFunc_BreakRotator_Roll;
	Parms.CallFunc_BreakRotator_Pitch = CallFunc_BreakRotator_Pitch;
	Parms.CallFunc_BreakRotator_Yaw = CallFunc_BreakRotator_Yaw;
	Parms.CallFunc_MakeRotator_ReturnValue = CallFunc_MakeRotator_ReturnValue;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;
	Parms.K2Node_StructMemberSet___FloatProperty_ImplicitCast = K2Node_StructMemberSet___FloatProperty_ImplicitCast;
	Parms.K2Node_StructMemberSet___FloatProperty_0_ImplicitCast = K2Node_StructMemberSet___FloatProperty_0_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}

}


