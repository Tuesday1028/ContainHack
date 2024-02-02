#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DataPad_Effect.DataPad_Effect_C
// (Actor)

class UClass* UDataPad_Effect_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DataPad_Effect_C");

	return Clss;
}


// DataPad_Effect_C DataPad_Effect.Default__DataPad_Effect_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDataPad_Effect_C* UDataPad_Effect_C::GetDefaultObj()
{
	static class UDataPad_Effect_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDataPad_Effect_C*>(UDataPad_Effect_C::StaticClass()->DefaultObject);

	return Default;
}


// Function DataPad_Effect.DataPad_Effect_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void UDataPad_Effect_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DataPad_Effect_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function DataPad_Effect.DataPad_Effect_C.SonarWave
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             A                                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             InterpSpeed                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDataPad_Effect_C::SonarWave(double A, double InterpSpeed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DataPad_Effect_C", "SonarWave");

	Params::UDataPad_Effect_C_SonarWave_Params Parms{};

	Parms.A = A;
	Parms.InterpSpeed = InterpSpeed;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DataPad_Effect.DataPad_Effect_C.SonarOpacity
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             A                                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             InterpSpeed                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDataPad_Effect_C::SonarOpacity(double A, double InterpSpeed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DataPad_Effect_C", "SonarOpacity");

	Params::UDataPad_Effect_C_SonarOpacity_Params Parms{};

	Parms.A = A;
	Parms.InterpSpeed = InterpSpeed;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DataPad_Effect.DataPad_Effect_C.DigitizeOpacity
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             A                                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             InterpSpeed                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDataPad_Effect_C::DigitizeOpacity(double A, double InterpSpeed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DataPad_Effect_C", "DigitizeOpacity");

	Params::UDataPad_Effect_C_DigitizeOpacity_Params Parms{};

	Parms.A = A;
	Parms.InterpSpeed = InterpSpeed;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DataPad_Effect.DataPad_Effect_C.GridCellOpacity
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             A                                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             InterpSpeed                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDataPad_Effect_C::GridCellOpacity(double A, double InterpSpeed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DataPad_Effect_C", "GridCellOpacity");

	Params::UDataPad_Effect_C_GridCellOpacity_Params Parms{};

	Parms.A = A;
	Parms.InterpSpeed = InterpSpeed;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DataPad_Effect.DataPad_Effect_C.GlitchOpacity
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             A                                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             InterpSpeed                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDataPad_Effect_C::GlitchOpacity(double A, double InterpSpeed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DataPad_Effect_C", "GlitchOpacity");

	Params::UDataPad_Effect_C_GlitchOpacity_Params Parms{};

	Parms.A = A;
	Parms.InterpSpeed = InterpSpeed;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DataPad_Effect.DataPad_Effect_C.NeonOpacity
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             A                                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             InterpSpeed                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDataPad_Effect_C::NeonOpacity(double A, double InterpSpeed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DataPad_Effect_C", "NeonOpacity");

	Params::UDataPad_Effect_C_NeonOpacity_Params Parms{};

	Parms.A = A;
	Parms.InterpSpeed = InterpSpeed;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DataPad_Effect.DataPad_Effect_C.SonarSes
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UDataPad_Effect_C::SonarSes()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DataPad_Effect_C", "SonarSes");



	UObject::ProcessEvent(Func, nullptr);

}


// Function DataPad_Effect.DataPad_Effect_C.ExecuteUbergraph_DataPad_Effect
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_RandomFloatInRange_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetWorldDeltaSeconds_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_CustomEvent_A_5                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_CustomEvent_InterpSpeed_5                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetWorldDeltaSeconds_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_CustomEvent_A_4                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_CustomEvent_InterpSpeed_4                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FInterpTo_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_DoubleDouble_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetWorldDeltaSeconds_ReturnValue_2                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FInterpTo_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_DoubleDouble_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FAdvancedEffectFeatures     K2Node_MakeStruct_AdvancedEffectFeatures                         (NoDestructor, HasGetValueTypeHash)
// double                             K2Node_CustomEvent_A_3                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_CustomEvent_InterpSpeed_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FInterpTo_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_DoubleDouble_ReturnValue_2                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FAdvancedEffectFeatures     K2Node_MakeStruct_AdvancedEffectFeatures_1                       (NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetWorldDeltaSeconds_ReturnValue_3                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_CustomEvent_A_2                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_CustomEvent_InterpSpeed_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FInterpTo_ReturnValue_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_DoubleDouble_ReturnValue_3                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FAdvancedEffectFeatures     K2Node_MakeStruct_AdvancedEffectFeatures_2                       (NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetWorldDeltaSeconds_ReturnValue_4                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_CustomEvent_A_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_CustomEvent_InterpSpeed_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FInterpTo_ReturnValue_4                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_DoubleDouble_ReturnValue_4                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FAdvancedEffectFeatures     K2Node_MakeStruct_AdvancedEffectFeatures_3                       (NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetWorldDeltaSeconds_ReturnValue_5                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_CustomEvent_A                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_CustomEvent_InterpSpeed                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetCurrentLevelName_ReturnValue                         (ZeroConstructor, HasGetValueTypeHash)
// double                             CallFunc_FInterpTo_ReturnValue_5                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FAdvancedEffectFeatures     K2Node_MakeStruct_AdvancedEffectFeatures_4                       (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue_3                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue_4                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_DoubleDouble_ReturnValue_5                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCharacter*                  CallFunc_GetPlayerCharacter_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UB_DemoCharacter_C*          K2Node_DynamicCast_AsB_Demo_Character                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 CallFunc_GetWidget_ReturnValue                                   (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UDataPad_C*                  K2Node_DynamicCast_AsData_Pad                                    (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Delay_Duration_ImplicitCast                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_EqualEqual_DoubleDouble_B_ImplicitCast                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FInterpTo_Current_ImplicitCast                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_MakeStruct_BlendingOpacity_10_63DB57664274BA07E8C302A5DE11468B_ImplicitCast(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_EqualEqual_DoubleDouble_B_ImplicitCast_1                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FInterpTo_Current_ImplicitCast_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_MakeStruct_BlendingOpacity_10_63DB57664274BA07E8C302A5DE11468B_ImplicitCast_1(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_EqualEqual_DoubleDouble_B_ImplicitCast_2                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FInterpTo_Current_ImplicitCast_2                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_MakeStruct_BlendingOpacity_10_63DB57664274BA07E8C302A5DE11468B_ImplicitCast_2(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_EqualEqual_DoubleDouble_B_ImplicitCast_3                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FInterpTo_Current_ImplicitCast_3                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_MakeStruct_BlendingOpacity_10_63DB57664274BA07E8C302A5DE11468B_ImplicitCast_3(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_EqualEqual_DoubleDouble_B_ImplicitCast_4                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FInterpTo_Current_ImplicitCast_4                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_MakeStruct_BlendingOpacity_10_63DB57664274BA07E8C302A5DE11468B_ImplicitCast_4(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDataPad_Effect_C::ExecuteUbergraph_DataPad_Effect(int32 EntryPoint, double CallFunc_RandomFloatInRange_ReturnValue, double CallFunc_GetWorldDeltaSeconds_ReturnValue, double K2Node_CustomEvent_A_5, double K2Node_CustomEvent_InterpSpeed_5, double CallFunc_GetWorldDeltaSeconds_ReturnValue_1, double K2Node_CustomEvent_A_4, double K2Node_CustomEvent_InterpSpeed_4, double CallFunc_FInterpTo_ReturnValue, bool CallFunc_EqualEqual_DoubleDouble_ReturnValue, double CallFunc_GetWorldDeltaSeconds_ReturnValue_2, double CallFunc_FInterpTo_ReturnValue_1, bool CallFunc_EqualEqual_DoubleDouble_ReturnValue_1, const struct FAdvancedEffectFeatures& K2Node_MakeStruct_AdvancedEffectFeatures, double K2Node_CustomEvent_A_3, double K2Node_CustomEvent_InterpSpeed_3, double CallFunc_FInterpTo_ReturnValue_2, bool CallFunc_EqualEqual_DoubleDouble_ReturnValue_2, const struct FAdvancedEffectFeatures& K2Node_MakeStruct_AdvancedEffectFeatures_1, double CallFunc_GetWorldDeltaSeconds_ReturnValue_3, bool Temp_bool_IsClosed_Variable, double K2Node_CustomEvent_A_2, double K2Node_CustomEvent_InterpSpeed_2, double CallFunc_FInterpTo_ReturnValue_3, bool CallFunc_EqualEqual_DoubleDouble_ReturnValue_3, const struct FAdvancedEffectFeatures& K2Node_MakeStruct_AdvancedEffectFeatures_2, double CallFunc_GetWorldDeltaSeconds_ReturnValue_4, double K2Node_CustomEvent_A_1, double K2Node_CustomEvent_InterpSpeed_1, double CallFunc_FInterpTo_ReturnValue_4, bool CallFunc_EqualEqual_DoubleDouble_ReturnValue_4, const struct FAdvancedEffectFeatures& K2Node_MakeStruct_AdvancedEffectFeatures_3, double CallFunc_GetWorldDeltaSeconds_ReturnValue_5, bool Temp_bool_Has_Been_Initd_Variable, double K2Node_CustomEvent_A, double K2Node_CustomEvent_InterpSpeed, const class FString& CallFunc_GetCurrentLevelName_ReturnValue, double CallFunc_FInterpTo_ReturnValue_5, bool CallFunc_EqualEqual_StrStr_ReturnValue, const struct FAdvancedEffectFeatures& K2Node_MakeStruct_AdvancedEffectFeatures_4, bool CallFunc_EqualEqual_StrStr_ReturnValue_1, bool CallFunc_EqualEqual_StrStr_ReturnValue_2, bool CallFunc_EqualEqual_StrStr_ReturnValue_3, bool CallFunc_EqualEqual_StrStr_ReturnValue_4, bool CallFunc_EqualEqual_DoubleDouble_ReturnValue_5, class UCharacter* CallFunc_GetPlayerCharacter_ReturnValue, class UB_DemoCharacter_C* K2Node_DynamicCast_AsB_Demo_Character, bool K2Node_DynamicCast_bSuccess, class UUserWidget* CallFunc_GetWidget_ReturnValue, class UDataPad_C* K2Node_DynamicCast_AsData_Pad, bool K2Node_DynamicCast_bSuccess_1, float CallFunc_Delay_Duration_ImplicitCast, double CallFunc_EqualEqual_DoubleDouble_B_ImplicitCast, double CallFunc_FInterpTo_Current_ImplicitCast, float K2Node_MakeStruct_BlendingOpacity_10_63DB57664274BA07E8C302A5DE11468B_ImplicitCast, double CallFunc_EqualEqual_DoubleDouble_B_ImplicitCast_1, double CallFunc_FInterpTo_Current_ImplicitCast_1, float K2Node_MakeStruct_BlendingOpacity_10_63DB57664274BA07E8C302A5DE11468B_ImplicitCast_1, double CallFunc_EqualEqual_DoubleDouble_B_ImplicitCast_2, double CallFunc_FInterpTo_Current_ImplicitCast_2, float K2Node_MakeStruct_BlendingOpacity_10_63DB57664274BA07E8C302A5DE11468B_ImplicitCast_2, double CallFunc_EqualEqual_DoubleDouble_B_ImplicitCast_3, double CallFunc_FInterpTo_Current_ImplicitCast_3, float K2Node_MakeStruct_BlendingOpacity_10_63DB57664274BA07E8C302A5DE11468B_ImplicitCast_3, double CallFunc_EqualEqual_DoubleDouble_B_ImplicitCast_4, double CallFunc_FInterpTo_Current_ImplicitCast_4, float K2Node_MakeStruct_BlendingOpacity_10_63DB57664274BA07E8C302A5DE11468B_ImplicitCast_4)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DataPad_Effect_C", "ExecuteUbergraph_DataPad_Effect");

	Params::UDataPad_Effect_C_ExecuteUbergraph_DataPad_Effect_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_RandomFloatInRange_ReturnValue = CallFunc_RandomFloatInRange_ReturnValue;
	Parms.CallFunc_GetWorldDeltaSeconds_ReturnValue = CallFunc_GetWorldDeltaSeconds_ReturnValue;
	Parms.K2Node_CustomEvent_A_5 = K2Node_CustomEvent_A_5;
	Parms.K2Node_CustomEvent_InterpSpeed_5 = K2Node_CustomEvent_InterpSpeed_5;
	Parms.CallFunc_GetWorldDeltaSeconds_ReturnValue_1 = CallFunc_GetWorldDeltaSeconds_ReturnValue_1;
	Parms.K2Node_CustomEvent_A_4 = K2Node_CustomEvent_A_4;
	Parms.K2Node_CustomEvent_InterpSpeed_4 = K2Node_CustomEvent_InterpSpeed_4;
	Parms.CallFunc_FInterpTo_ReturnValue = CallFunc_FInterpTo_ReturnValue;
	Parms.CallFunc_EqualEqual_DoubleDouble_ReturnValue = CallFunc_EqualEqual_DoubleDouble_ReturnValue;
	Parms.CallFunc_GetWorldDeltaSeconds_ReturnValue_2 = CallFunc_GetWorldDeltaSeconds_ReturnValue_2;
	Parms.CallFunc_FInterpTo_ReturnValue_1 = CallFunc_FInterpTo_ReturnValue_1;
	Parms.CallFunc_EqualEqual_DoubleDouble_ReturnValue_1 = CallFunc_EqualEqual_DoubleDouble_ReturnValue_1;
	Parms.K2Node_MakeStruct_AdvancedEffectFeatures = K2Node_MakeStruct_AdvancedEffectFeatures;
	Parms.K2Node_CustomEvent_A_3 = K2Node_CustomEvent_A_3;
	Parms.K2Node_CustomEvent_InterpSpeed_3 = K2Node_CustomEvent_InterpSpeed_3;
	Parms.CallFunc_FInterpTo_ReturnValue_2 = CallFunc_FInterpTo_ReturnValue_2;
	Parms.CallFunc_EqualEqual_DoubleDouble_ReturnValue_2 = CallFunc_EqualEqual_DoubleDouble_ReturnValue_2;
	Parms.K2Node_MakeStruct_AdvancedEffectFeatures_1 = K2Node_MakeStruct_AdvancedEffectFeatures_1;
	Parms.CallFunc_GetWorldDeltaSeconds_ReturnValue_3 = CallFunc_GetWorldDeltaSeconds_ReturnValue_3;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.K2Node_CustomEvent_A_2 = K2Node_CustomEvent_A_2;
	Parms.K2Node_CustomEvent_InterpSpeed_2 = K2Node_CustomEvent_InterpSpeed_2;
	Parms.CallFunc_FInterpTo_ReturnValue_3 = CallFunc_FInterpTo_ReturnValue_3;
	Parms.CallFunc_EqualEqual_DoubleDouble_ReturnValue_3 = CallFunc_EqualEqual_DoubleDouble_ReturnValue_3;
	Parms.K2Node_MakeStruct_AdvancedEffectFeatures_2 = K2Node_MakeStruct_AdvancedEffectFeatures_2;
	Parms.CallFunc_GetWorldDeltaSeconds_ReturnValue_4 = CallFunc_GetWorldDeltaSeconds_ReturnValue_4;
	Parms.K2Node_CustomEvent_A_1 = K2Node_CustomEvent_A_1;
	Parms.K2Node_CustomEvent_InterpSpeed_1 = K2Node_CustomEvent_InterpSpeed_1;
	Parms.CallFunc_FInterpTo_ReturnValue_4 = CallFunc_FInterpTo_ReturnValue_4;
	Parms.CallFunc_EqualEqual_DoubleDouble_ReturnValue_4 = CallFunc_EqualEqual_DoubleDouble_ReturnValue_4;
	Parms.K2Node_MakeStruct_AdvancedEffectFeatures_3 = K2Node_MakeStruct_AdvancedEffectFeatures_3;
	Parms.CallFunc_GetWorldDeltaSeconds_ReturnValue_5 = CallFunc_GetWorldDeltaSeconds_ReturnValue_5;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.K2Node_CustomEvent_A = K2Node_CustomEvent_A;
	Parms.K2Node_CustomEvent_InterpSpeed = K2Node_CustomEvent_InterpSpeed;
	Parms.CallFunc_GetCurrentLevelName_ReturnValue = CallFunc_GetCurrentLevelName_ReturnValue;
	Parms.CallFunc_FInterpTo_ReturnValue_5 = CallFunc_FInterpTo_ReturnValue_5;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue = CallFunc_EqualEqual_StrStr_ReturnValue;
	Parms.K2Node_MakeStruct_AdvancedEffectFeatures_4 = K2Node_MakeStruct_AdvancedEffectFeatures_4;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue_1 = CallFunc_EqualEqual_StrStr_ReturnValue_1;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue_2 = CallFunc_EqualEqual_StrStr_ReturnValue_2;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue_3 = CallFunc_EqualEqual_StrStr_ReturnValue_3;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue_4 = CallFunc_EqualEqual_StrStr_ReturnValue_4;
	Parms.CallFunc_EqualEqual_DoubleDouble_ReturnValue_5 = CallFunc_EqualEqual_DoubleDouble_ReturnValue_5;
	Parms.CallFunc_GetPlayerCharacter_ReturnValue = CallFunc_GetPlayerCharacter_ReturnValue;
	Parms.K2Node_DynamicCast_AsB_Demo_Character = K2Node_DynamicCast_AsB_Demo_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetWidget_ReturnValue = CallFunc_GetWidget_ReturnValue;
	Parms.K2Node_DynamicCast_AsData_Pad = K2Node_DynamicCast_AsData_Pad;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_Delay_Duration_ImplicitCast = CallFunc_Delay_Duration_ImplicitCast;
	Parms.CallFunc_EqualEqual_DoubleDouble_B_ImplicitCast = CallFunc_EqualEqual_DoubleDouble_B_ImplicitCast;
	Parms.CallFunc_FInterpTo_Current_ImplicitCast = CallFunc_FInterpTo_Current_ImplicitCast;
	Parms.K2Node_MakeStruct_BlendingOpacity_10_63DB57664274BA07E8C302A5DE11468B_ImplicitCast = K2Node_MakeStruct_BlendingOpacity_10_63DB57664274BA07E8C302A5DE11468B_ImplicitCast;
	Parms.CallFunc_EqualEqual_DoubleDouble_B_ImplicitCast_1 = CallFunc_EqualEqual_DoubleDouble_B_ImplicitCast_1;
	Parms.CallFunc_FInterpTo_Current_ImplicitCast_1 = CallFunc_FInterpTo_Current_ImplicitCast_1;
	Parms.K2Node_MakeStruct_BlendingOpacity_10_63DB57664274BA07E8C302A5DE11468B_ImplicitCast_1 = K2Node_MakeStruct_BlendingOpacity_10_63DB57664274BA07E8C302A5DE11468B_ImplicitCast_1;
	Parms.CallFunc_EqualEqual_DoubleDouble_B_ImplicitCast_2 = CallFunc_EqualEqual_DoubleDouble_B_ImplicitCast_2;
	Parms.CallFunc_FInterpTo_Current_ImplicitCast_2 = CallFunc_FInterpTo_Current_ImplicitCast_2;
	Parms.K2Node_MakeStruct_BlendingOpacity_10_63DB57664274BA07E8C302A5DE11468B_ImplicitCast_2 = K2Node_MakeStruct_BlendingOpacity_10_63DB57664274BA07E8C302A5DE11468B_ImplicitCast_2;
	Parms.CallFunc_EqualEqual_DoubleDouble_B_ImplicitCast_3 = CallFunc_EqualEqual_DoubleDouble_B_ImplicitCast_3;
	Parms.CallFunc_FInterpTo_Current_ImplicitCast_3 = CallFunc_FInterpTo_Current_ImplicitCast_3;
	Parms.K2Node_MakeStruct_BlendingOpacity_10_63DB57664274BA07E8C302A5DE11468B_ImplicitCast_3 = K2Node_MakeStruct_BlendingOpacity_10_63DB57664274BA07E8C302A5DE11468B_ImplicitCast_3;
	Parms.CallFunc_EqualEqual_DoubleDouble_B_ImplicitCast_4 = CallFunc_EqualEqual_DoubleDouble_B_ImplicitCast_4;
	Parms.CallFunc_FInterpTo_Current_ImplicitCast_4 = CallFunc_FInterpTo_Current_ImplicitCast_4;
	Parms.K2Node_MakeStruct_BlendingOpacity_10_63DB57664274BA07E8C302A5DE11468B_ImplicitCast_4 = K2Node_MakeStruct_BlendingOpacity_10_63DB57664274BA07E8C302A5DE11468B_ImplicitCast_4;

	UObject::ProcessEvent(Func, &Parms);

}

}


