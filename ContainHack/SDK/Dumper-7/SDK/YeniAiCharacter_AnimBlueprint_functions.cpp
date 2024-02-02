#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass YeniAiCharacter_AnimBlueprint.YeniAiCharacter_AnimBlueprint_C
// (None)

class UClass* UYeniAiCharacter_AnimBlueprint_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("YeniAiCharacter_AnimBlueprint_C");

	return Clss;
}


// YeniAiCharacter_AnimBlueprint_C YeniAiCharacter_AnimBlueprint.Default__YeniAiCharacter_AnimBlueprint_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UYeniAiCharacter_AnimBlueprint_C* UYeniAiCharacter_AnimBlueprint_C::GetDefaultObj()
{
	static class UYeniAiCharacter_AnimBlueprint_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UYeniAiCharacter_AnimBlueprint_C*>(UYeniAiCharacter_AnimBlueprint_C::StaticClass()->DefaultObject);

	return Default;
}


// Function YeniAiCharacter_AnimBlueprint.YeniAiCharacter_AnimBlueprint_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UYeniAiCharacter_AnimBlueprint_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("YeniAiCharacter_AnimBlueprint_C", "AnimGraph");

	Params::UYeniAiCharacter_AnimBlueprint_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function YeniAiCharacter_AnimBlueprint.YeniAiCharacter_AnimBlueprint_C.AnimPlay
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimMontage*                MontageToPlay                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Montage_Play_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UYeniAiCharacter_AnimBlueprint_C::AnimPlay(class UAnimMontage* MontageToPlay, float CallFunc_Montage_Play_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("YeniAiCharacter_AnimBlueprint_C", "AnimPlay");

	Params::UYeniAiCharacter_AnimBlueprint_C_AnimPlay_Params Parms{};

	Parms.MontageToPlay = MontageToPlay;
	Parms.CallFunc_Montage_Play_ReturnValue = CallFunc_Montage_Play_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function YeniAiCharacter_AnimBlueprint.YeniAiCharacter_AnimBlueprint_C.HitAnimFunc
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Random                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               _0_                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               _1_                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               _2_                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               _3_                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_RandomIntegerInRange_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<bool>                       K2Node_MakeArray_Array                                           (ReferenceParm)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<bool>                       K2Node_MakeArray_Array_1                                         (ReferenceParm)

void UYeniAiCharacter_AnimBlueprint_C::HitAnimFunc(bool Random, bool _0_, bool _1_, bool _2_, bool _3_, int32 CallFunc_RandomIntegerInRange_ReturnValue, TArray<bool>& K2Node_MakeArray_Array, bool CallFunc_GreaterEqual_IntInt_ReturnValue, TArray<bool>& K2Node_MakeArray_Array_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("YeniAiCharacter_AnimBlueprint_C", "HitAnimFunc");

	Params::UYeniAiCharacter_AnimBlueprint_C_HitAnimFunc_Params Parms{};

	Parms.Random = Random;
	Parms._0_ = _0_;
	Parms._1_ = _1_;
	Parms._2_ = _2_;
	Parms._3_ = _3_;
	Parms.CallFunc_RandomIntegerInRange_ReturnValue = CallFunc_RandomIntegerInRange_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function YeniAiCharacter_AnimBlueprint.YeniAiCharacter_AnimBlueprint_C.DeadFakeFunc
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimMontage*                MontageToPlay                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Montage_Play_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<bool>                       K2Node_MakeArray_Array                                           (ReferenceParm)

void UYeniAiCharacter_AnimBlueprint_C::DeadFakeFunc(class UAnimMontage* MontageToPlay, float CallFunc_Montage_Play_ReturnValue, TArray<bool>& K2Node_MakeArray_Array)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("YeniAiCharacter_AnimBlueprint_C", "DeadFakeFunc");

	Params::UYeniAiCharacter_AnimBlueprint_C_DeadFakeFunc_Params Parms{};

	Parms.MontageToPlay = MontageToPlay;
	Parms.CallFunc_Montage_Play_ReturnValue = CallFunc_Montage_Play_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;

	UObject::ProcessEvent(Func, &Parms);

}


// Function YeniAiCharacter_AnimBlueprint.YeniAiCharacter_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_YeniAiCharacter_AnimBlueprint_AnimGraphNode_BlendListByBool_92A99C4E4A37B83A45E96BAE4824EB1D
// (BlueprintEvent)
// Parameters:

void UYeniAiCharacter_AnimBlueprint_C::EvaluateGraphExposedInputs_ExecuteUbergraph_YeniAiCharacter_AnimBlueprint_AnimGraphNode_BlendListByBool_92A99C4E4A37B83A45E96BAE4824EB1D()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("YeniAiCharacter_AnimBlueprint_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_YeniAiCharacter_AnimBlueprint_AnimGraphNode_BlendListByBool_92A99C4E4A37B83A45E96BAE4824EB1D");



	UObject::ProcessEvent(Func, nullptr);

}


// Function YeniAiCharacter_AnimBlueprint.YeniAiCharacter_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_YeniAiCharacter_AnimBlueprint_AnimGraphNode_ModifyBone_2C77A61E43AFA1C68CF49F9B0B25AF39
// (BlueprintEvent)
// Parameters:

void UYeniAiCharacter_AnimBlueprint_C::EvaluateGraphExposedInputs_ExecuteUbergraph_YeniAiCharacter_AnimBlueprint_AnimGraphNode_ModifyBone_2C77A61E43AFA1C68CF49F9B0B25AF39()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("YeniAiCharacter_AnimBlueprint_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_YeniAiCharacter_AnimBlueprint_AnimGraphNode_ModifyBone_2C77A61E43AFA1C68CF49F9B0B25AF39");



	UObject::ProcessEvent(Func, nullptr);

}


// Function YeniAiCharacter_AnimBlueprint.YeniAiCharacter_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_YeniAiCharacter_AnimBlueprint_AnimGraphNode_ModifyBone_3B99DCD74BC2A4196FAFBD80517CEFCA
// (BlueprintEvent)
// Parameters:

void UYeniAiCharacter_AnimBlueprint_C::EvaluateGraphExposedInputs_ExecuteUbergraph_YeniAiCharacter_AnimBlueprint_AnimGraphNode_ModifyBone_3B99DCD74BC2A4196FAFBD80517CEFCA()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("YeniAiCharacter_AnimBlueprint_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_YeniAiCharacter_AnimBlueprint_AnimGraphNode_ModifyBone_3B99DCD74BC2A4196FAFBD80517CEFCA");



	UObject::ProcessEvent(Func, nullptr);

}


// Function YeniAiCharacter_AnimBlueprint.YeniAiCharacter_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_YeniAiCharacter_AnimBlueprint_AnimGraphNode_BlendListByBool_98DFDDD54BD04A36B21FA88C57A9795B
// (BlueprintEvent)
// Parameters:

void UYeniAiCharacter_AnimBlueprint_C::EvaluateGraphExposedInputs_ExecuteUbergraph_YeniAiCharacter_AnimBlueprint_AnimGraphNode_BlendListByBool_98DFDDD54BD04A36B21FA88C57A9795B()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("YeniAiCharacter_AnimBlueprint_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_YeniAiCharacter_AnimBlueprint_AnimGraphNode_BlendListByBool_98DFDDD54BD04A36B21FA88C57A9795B");



	UObject::ProcessEvent(Func, nullptr);

}


// Function YeniAiCharacter_AnimBlueprint.YeniAiCharacter_AnimBlueprint_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaTimeX                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UYeniAiCharacter_AnimBlueprint_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("YeniAiCharacter_AnimBlueprint_C", "BlueprintUpdateAnimation");

	Params::UYeniAiCharacter_AnimBlueprint_C_BlueprintUpdateAnimation_Params Parms{};

	Parms.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);

}


// Function YeniAiCharacter_AnimBlueprint.YeniAiCharacter_AnimBlueprint_C.BlueprintInitializeAnimation
// (Event, Public, BlueprintEvent)
// Parameters:

void UYeniAiCharacter_AnimBlueprint_C::BlueprintInitializeAnimation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("YeniAiCharacter_AnimBlueprint_C", "BlueprintInitializeAnimation");



	UObject::ProcessEvent(Func, nullptr);

}


// Function YeniAiCharacter_AnimBlueprint.YeniAiCharacter_AnimBlueprint_C.RLMovment
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             A                                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Interp                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UYeniAiCharacter_AnimBlueprint_C::RLMovment(double A, double Interp)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("YeniAiCharacter_AnimBlueprint_C", "RLMovment");

	Params::UYeniAiCharacter_AnimBlueprint_C_RLMovment_Params Parms{};

	Parms.A = A;
	Parms.Interp = Interp;

	UObject::ProcessEvent(Func, &Parms);

}


// Function YeniAiCharacter_AnimBlueprint.YeniAiCharacter_AnimBlueprint_C.ExecuteUbergraph_YeniAiCharacter_AnimBlueprint
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPawn*                       CallFunc_TryGetPawnOwner_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UYeniAiAnimCharacter_C*      K2Node_DynamicCast_AsYeni_Ai_Anim_Character                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_Get_Item_2                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Event_DeltaTimeX                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_Get_Item_3                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_Get_Item_4                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_Get_Item_5                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_Get_Item_6                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetWorldDeltaSeconds_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_CustomEvent_A                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_CustomEvent_Interp                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_4                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FInterpTo_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_DoubleDouble_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_ComposeRotators_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakRotator_Roll                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Pitch                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Yaw                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsCrouching_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<bool>                       K2Node_MakeArray_Array                                           (ReferenceParm)
// struct FRotator                    CallFunc_K2_GetActorRotation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GetVelocity_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_VSize_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_CalculateDirection_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MakeRotator_Yaw_ImplicitCast                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MakeRotator_Yaw_ImplicitCast_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_A_ImplicitCast                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_A_ImplicitCast_1                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MakeRotator_Roll_ImplicitCast                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MakeRotator_Roll_ImplicitCast_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSet_Direction_ImplicitCast                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UYeniAiCharacter_AnimBlueprint_C::ExecuteUbergraph_YeniAiCharacter_AnimBlueprint(int32 EntryPoint, class UPawn* CallFunc_TryGetPawnOwner_ReturnValue, class UYeniAiAnimCharacter_C* K2Node_DynamicCast_AsYeni_Ai_Anim_Character, bool K2Node_DynamicCast_bSuccess, double CallFunc_Multiply_DoubleDouble_ReturnValue, bool CallFunc_Array_Get_Item, const struct FRotator& CallFunc_MakeRotator_ReturnValue, bool CallFunc_Array_Get_Item_1, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_Array_Get_Item_2, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_1, const struct FRotator& CallFunc_MakeRotator_ReturnValue_1, float K2Node_Event_DeltaTimeX, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Array_Get_Item_3, bool CallFunc_Array_Get_Item_4, bool CallFunc_Array_Get_Item_5, bool CallFunc_BooleanOR_ReturnValue_2, bool CallFunc_Array_Get_Item_6, double CallFunc_GetWorldDeltaSeconds_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_3, double K2Node_CustomEvent_A, double K2Node_CustomEvent_Interp, bool CallFunc_BooleanOR_ReturnValue_4, double CallFunc_FInterpTo_ReturnValue, bool CallFunc_EqualEqual_DoubleDouble_ReturnValue, const struct FRotator& CallFunc_ComposeRotators_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, double CallFunc_Divide_DoubleDouble_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue_2, double CallFunc_Divide_DoubleDouble_ReturnValue_1, const struct FRotator& CallFunc_MakeRotator_ReturnValue_3, bool CallFunc_IsCrouching_ReturnValue, TArray<bool>& K2Node_MakeArray_Array, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, const struct FVector& CallFunc_GetVelocity_ReturnValue, double CallFunc_VSize_ReturnValue, float CallFunc_CalculateDirection_ReturnValue, float CallFunc_MakeRotator_Yaw_ImplicitCast, float CallFunc_MakeRotator_Yaw_ImplicitCast_1, double CallFunc_Divide_DoubleDouble_A_ImplicitCast, double CallFunc_Divide_DoubleDouble_A_ImplicitCast_1, float CallFunc_MakeRotator_Roll_ImplicitCast, float CallFunc_MakeRotator_Roll_ImplicitCast_1, double K2Node_VariableSet_Direction_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("YeniAiCharacter_AnimBlueprint_C", "ExecuteUbergraph_YeniAiCharacter_AnimBlueprint");

	Params::UYeniAiCharacter_AnimBlueprint_C_ExecuteUbergraph_YeniAiCharacter_AnimBlueprint_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_TryGetPawnOwner_ReturnValue = CallFunc_TryGetPawnOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsYeni_Ai_Anim_Character = K2Node_DynamicCast_AsYeni_Ai_Anim_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_MakeRotator_ReturnValue = CallFunc_MakeRotator_ReturnValue;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_1 = CallFunc_Multiply_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;
	Parms.CallFunc_MakeRotator_ReturnValue_1 = CallFunc_MakeRotator_ReturnValue_1;
	Parms.K2Node_Event_DeltaTimeX = K2Node_Event_DeltaTimeX;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Array_Get_Item_3 = CallFunc_Array_Get_Item_3;
	Parms.CallFunc_Array_Get_Item_4 = CallFunc_Array_Get_Item_4;
	Parms.CallFunc_Array_Get_Item_5 = CallFunc_Array_Get_Item_5;
	Parms.CallFunc_BooleanOR_ReturnValue_2 = CallFunc_BooleanOR_ReturnValue_2;
	Parms.CallFunc_Array_Get_Item_6 = CallFunc_Array_Get_Item_6;
	Parms.CallFunc_GetWorldDeltaSeconds_ReturnValue = CallFunc_GetWorldDeltaSeconds_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue_3 = CallFunc_BooleanOR_ReturnValue_3;
	Parms.K2Node_CustomEvent_A = K2Node_CustomEvent_A;
	Parms.K2Node_CustomEvent_Interp = K2Node_CustomEvent_Interp;
	Parms.CallFunc_BooleanOR_ReturnValue_4 = CallFunc_BooleanOR_ReturnValue_4;
	Parms.CallFunc_FInterpTo_ReturnValue = CallFunc_FInterpTo_ReturnValue;
	Parms.CallFunc_EqualEqual_DoubleDouble_ReturnValue = CallFunc_EqualEqual_DoubleDouble_ReturnValue;
	Parms.CallFunc_ComposeRotators_ReturnValue = CallFunc_ComposeRotators_ReturnValue;
	Parms.CallFunc_BreakRotator_Roll = CallFunc_BreakRotator_Roll;
	Parms.CallFunc_BreakRotator_Pitch = CallFunc_BreakRotator_Pitch;
	Parms.CallFunc_BreakRotator_Yaw = CallFunc_BreakRotator_Yaw;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue = CallFunc_Divide_DoubleDouble_ReturnValue;
	Parms.CallFunc_MakeRotator_ReturnValue_2 = CallFunc_MakeRotator_ReturnValue_2;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue_1 = CallFunc_Divide_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_MakeRotator_ReturnValue_3 = CallFunc_MakeRotator_ReturnValue_3;
	Parms.CallFunc_IsCrouching_ReturnValue = CallFunc_IsCrouching_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_K2_GetActorRotation_ReturnValue = CallFunc_K2_GetActorRotation_ReturnValue;
	Parms.CallFunc_GetVelocity_ReturnValue = CallFunc_GetVelocity_ReturnValue;
	Parms.CallFunc_VSize_ReturnValue = CallFunc_VSize_ReturnValue;
	Parms.CallFunc_CalculateDirection_ReturnValue = CallFunc_CalculateDirection_ReturnValue;
	Parms.CallFunc_MakeRotator_Yaw_ImplicitCast = CallFunc_MakeRotator_Yaw_ImplicitCast;
	Parms.CallFunc_MakeRotator_Yaw_ImplicitCast_1 = CallFunc_MakeRotator_Yaw_ImplicitCast_1;
	Parms.CallFunc_Divide_DoubleDouble_A_ImplicitCast = CallFunc_Divide_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_Divide_DoubleDouble_A_ImplicitCast_1 = CallFunc_Divide_DoubleDouble_A_ImplicitCast_1;
	Parms.CallFunc_MakeRotator_Roll_ImplicitCast = CallFunc_MakeRotator_Roll_ImplicitCast;
	Parms.CallFunc_MakeRotator_Roll_ImplicitCast_1 = CallFunc_MakeRotator_Roll_ImplicitCast_1;
	Parms.K2Node_VariableSet_Direction_ImplicitCast = K2Node_VariableSet_Direction_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}

}


