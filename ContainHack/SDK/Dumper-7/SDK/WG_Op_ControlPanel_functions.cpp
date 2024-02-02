#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WG_Op_ControlPanel.WG_Op_ControlPanel_C
// (None)

class UClass* UWG_Op_ControlPanel_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WG_Op_ControlPanel_C");

	return Clss;
}


// WG_Op_ControlPanel_C WG_Op_ControlPanel.Default__WG_Op_ControlPanel_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWG_Op_ControlPanel_C* UWG_Op_ControlPanel_C::GetDefaultObj()
{
	static class UWG_Op_ControlPanel_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWG_Op_ControlPanel_C*>(UWG_Op_ControlPanel_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WG_Op_ControlPanel.WG_Op_ControlPanel_C.ConstructActionRemap
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        Action_Name                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInputChord                 Key                                                              (Parm, OutParm, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInputSettings*              CallFunc_GetInputSettings_ReturnValue                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<struct FInputActionKeyMapping>CallFunc_GetActionMappingByName_OutMappings                      (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInputActionKeyMapping      CallFunc_Array_Get_Item                                          (None)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInputChord                 K2Node_MakeStruct_InputChord                                     (HasGetValueTypeHash)

void UWG_Op_ControlPanel_C::ConstructActionRemap(class FName Action_Name, struct FInputChord* Key, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UInputSettings* CallFunc_GetInputSettings_ReturnValue, TArray<struct FInputActionKeyMapping>& CallFunc_GetActionMappingByName_OutMappings, int32 CallFunc_Array_Length_ReturnValue, const struct FInputActionKeyMapping& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, const struct FInputChord& K2Node_MakeStruct_InputChord)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WG_Op_ControlPanel_C", "ConstructActionRemap");

	Params::UWG_Op_ControlPanel_C_ConstructActionRemap_Params Parms{};

	Parms.Action_Name = Action_Name;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetInputSettings_ReturnValue = CallFunc_GetInputSettings_ReturnValue;
	Parms.CallFunc_GetActionMappingByName_OutMappings = CallFunc_GetActionMappingByName_OutMappings;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_MakeStruct_InputChord = K2Node_MakeStruct_InputChord;

	UObject::ProcessEvent(Func, &Parms);

	if (Key != nullptr)
		*Key = std::move(Parms.Key);

}


// Function WG_Op_ControlPanel.WG_Op_ControlPanel_C.ConstructAxisRemap
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        InAxisName                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Scale                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInputChord                 InputChord                                                       (Parm, OutParm, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInputSettings*              CallFunc_GetInputSettings_ReturnValue                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<struct FInputAxisKeyMapping>CallFunc_GetAxisMappingByName_OutMappings                        (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInputAxisKeyMapping        CallFunc_Array_Get_Item                                          (None)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInputChord                 K2Node_MakeStruct_InputChord                                     (HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_DoubleDouble_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWG_Op_ControlPanel_C::ConstructAxisRemap(class FName InAxisName, double Scale, struct FInputChord* InputChord, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UInputSettings* CallFunc_GetInputSettings_ReturnValue, TArray<struct FInputAxisKeyMapping>& CallFunc_GetAxisMappingByName_OutMappings, int32 CallFunc_Array_Length_ReturnValue, const struct FInputAxisKeyMapping& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, const struct FInputChord& K2Node_MakeStruct_InputChord, bool CallFunc_EqualEqual_DoubleDouble_ReturnValue, double CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WG_Op_ControlPanel_C", "ConstructAxisRemap");

	Params::UWG_Op_ControlPanel_C_ConstructAxisRemap_Params Parms{};

	Parms.InAxisName = InAxisName;
	Parms.Scale = Scale;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetInputSettings_ReturnValue = CallFunc_GetInputSettings_ReturnValue;
	Parms.CallFunc_GetAxisMappingByName_OutMappings = CallFunc_GetAxisMappingByName_OutMappings;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_MakeStruct_InputChord = K2Node_MakeStruct_InputChord;
	Parms.CallFunc_EqualEqual_DoubleDouble_ReturnValue = CallFunc_EqualEqual_DoubleDouble_ReturnValue;
	Parms.CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast = CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (InputChord != nullptr)
		*InputChord = std::move(Parms.InputChord);

}


// Function WG_Op_ControlPanel.WG_Op_ControlPanel_C.DefaultRemap
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInputChord                 K2Node_MakeStruct_InputChord                                     (HasGetValueTypeHash)
// class UInputSettings*              CallFunc_GetInputSettings_ReturnValue                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FInputChord                 K2Node_MakeStruct_InputChord_1                                   (HasGetValueTypeHash)
// struct FInputChord                 K2Node_MakeStruct_InputChord_2                                   (HasGetValueTypeHash)
// struct FInputChord                 K2Node_MakeStruct_InputChord_3                                   (HasGetValueTypeHash)
// struct FInputChord                 K2Node_MakeStruct_InputChord_4                                   (HasGetValueTypeHash)
// struct FInputChord                 K2Node_MakeStruct_InputChord_5                                   (HasGetValueTypeHash)
// struct FInputChord                 K2Node_MakeStruct_InputChord_6                                   (HasGetValueTypeHash)
// struct FInputChord                 K2Node_MakeStruct_InputChord_7                                   (HasGetValueTypeHash)
// struct FInputChord                 K2Node_MakeStruct_InputChord_8                                   (HasGetValueTypeHash)
// struct FInputChord                 K2Node_MakeStruct_InputChord_9                                   (HasGetValueTypeHash)
// struct FInputChord                 K2Node_MakeStruct_InputChord_10                                  (HasGetValueTypeHash)
// struct FInputChord                 K2Node_MakeStruct_InputChord_11                                  (HasGetValueTypeHash)
// struct FInputChord                 K2Node_MakeStruct_InputChord_12                                  (HasGetValueTypeHash)
// struct FInputChord                 K2Node_MakeStruct_InputChord_13                                  (HasGetValueTypeHash)
// struct FInputChord                 K2Node_MakeStruct_InputChord_14                                  (HasGetValueTypeHash)
// struct FInputChord                 K2Node_MakeStruct_InputChord_15                                  (HasGetValueTypeHash)
// struct FInputChord                 K2Node_MakeStruct_InputChord_16                                  (HasGetValueTypeHash)
// struct FInputChord                 K2Node_MakeStruct_InputChord_17                                  (HasGetValueTypeHash)
// struct FInputChord                 K2Node_MakeStruct_InputChord_18                                  (HasGetValueTypeHash)
// struct FInputChord                 K2Node_MakeStruct_InputChord_19                                  (HasGetValueTypeHash)
// struct FInputChord                 K2Node_MakeStruct_InputChord_20                                  (HasGetValueTypeHash)
// struct FInputChord                 K2Node_MakeStruct_InputChord_21                                  (HasGetValueTypeHash)
// struct FInputChord                 K2Node_MakeStruct_InputChord_22                                  (HasGetValueTypeHash)
// struct FInputChord                 K2Node_MakeStruct_InputChord_23                                  (HasGetValueTypeHash)
// struct FInputChord                 K2Node_MakeStruct_InputChord_24                                  (HasGetValueTypeHash)

void UWG_Op_ControlPanel_C::DefaultRemap(const struct FInputChord& K2Node_MakeStruct_InputChord, class UInputSettings* CallFunc_GetInputSettings_ReturnValue, const struct FInputChord& K2Node_MakeStruct_InputChord_1, const struct FInputChord& K2Node_MakeStruct_InputChord_2, const struct FInputChord& K2Node_MakeStruct_InputChord_3, const struct FInputChord& K2Node_MakeStruct_InputChord_4, const struct FInputChord& K2Node_MakeStruct_InputChord_5, const struct FInputChord& K2Node_MakeStruct_InputChord_6, const struct FInputChord& K2Node_MakeStruct_InputChord_7, const struct FInputChord& K2Node_MakeStruct_InputChord_8, const struct FInputChord& K2Node_MakeStruct_InputChord_9, const struct FInputChord& K2Node_MakeStruct_InputChord_10, const struct FInputChord& K2Node_MakeStruct_InputChord_11, const struct FInputChord& K2Node_MakeStruct_InputChord_12, const struct FInputChord& K2Node_MakeStruct_InputChord_13, const struct FInputChord& K2Node_MakeStruct_InputChord_14, const struct FInputChord& K2Node_MakeStruct_InputChord_15, const struct FInputChord& K2Node_MakeStruct_InputChord_16, const struct FInputChord& K2Node_MakeStruct_InputChord_17, const struct FInputChord& K2Node_MakeStruct_InputChord_18, const struct FInputChord& K2Node_MakeStruct_InputChord_19, const struct FInputChord& K2Node_MakeStruct_InputChord_20, const struct FInputChord& K2Node_MakeStruct_InputChord_21, const struct FInputChord& K2Node_MakeStruct_InputChord_22, const struct FInputChord& K2Node_MakeStruct_InputChord_23, const struct FInputChord& K2Node_MakeStruct_InputChord_24)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WG_Op_ControlPanel_C", "DefaultRemap");

	Params::UWG_Op_ControlPanel_C_DefaultRemap_Params Parms{};

	Parms.K2Node_MakeStruct_InputChord = K2Node_MakeStruct_InputChord;
	Parms.CallFunc_GetInputSettings_ReturnValue = CallFunc_GetInputSettings_ReturnValue;
	Parms.K2Node_MakeStruct_InputChord_1 = K2Node_MakeStruct_InputChord_1;
	Parms.K2Node_MakeStruct_InputChord_2 = K2Node_MakeStruct_InputChord_2;
	Parms.K2Node_MakeStruct_InputChord_3 = K2Node_MakeStruct_InputChord_3;
	Parms.K2Node_MakeStruct_InputChord_4 = K2Node_MakeStruct_InputChord_4;
	Parms.K2Node_MakeStruct_InputChord_5 = K2Node_MakeStruct_InputChord_5;
	Parms.K2Node_MakeStruct_InputChord_6 = K2Node_MakeStruct_InputChord_6;
	Parms.K2Node_MakeStruct_InputChord_7 = K2Node_MakeStruct_InputChord_7;
	Parms.K2Node_MakeStruct_InputChord_8 = K2Node_MakeStruct_InputChord_8;
	Parms.K2Node_MakeStruct_InputChord_9 = K2Node_MakeStruct_InputChord_9;
	Parms.K2Node_MakeStruct_InputChord_10 = K2Node_MakeStruct_InputChord_10;
	Parms.K2Node_MakeStruct_InputChord_11 = K2Node_MakeStruct_InputChord_11;
	Parms.K2Node_MakeStruct_InputChord_12 = K2Node_MakeStruct_InputChord_12;
	Parms.K2Node_MakeStruct_InputChord_13 = K2Node_MakeStruct_InputChord_13;
	Parms.K2Node_MakeStruct_InputChord_14 = K2Node_MakeStruct_InputChord_14;
	Parms.K2Node_MakeStruct_InputChord_15 = K2Node_MakeStruct_InputChord_15;
	Parms.K2Node_MakeStruct_InputChord_16 = K2Node_MakeStruct_InputChord_16;
	Parms.K2Node_MakeStruct_InputChord_17 = K2Node_MakeStruct_InputChord_17;
	Parms.K2Node_MakeStruct_InputChord_18 = K2Node_MakeStruct_InputChord_18;
	Parms.K2Node_MakeStruct_InputChord_19 = K2Node_MakeStruct_InputChord_19;
	Parms.K2Node_MakeStruct_InputChord_20 = K2Node_MakeStruct_InputChord_20;
	Parms.K2Node_MakeStruct_InputChord_21 = K2Node_MakeStruct_InputChord_21;
	Parms.K2Node_MakeStruct_InputChord_22 = K2Node_MakeStruct_InputChord_22;
	Parms.K2Node_MakeStruct_InputChord_23 = K2Node_MakeStruct_InputChord_23;
	Parms.K2Node_MakeStruct_InputChord_24 = K2Node_MakeStruct_InputChord_24;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WG_Op_ControlPanel.WG_Op_ControlPanel_C.InputAxisRemap
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInputChord                 AxisInputChord                                                   (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class FName                        AxisName                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Scale                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInputAxisKeyMapping        K2Node_MakeStruct_InputAxisKeyMapping                            (None)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInputSettings*              CallFunc_GetInputSettings_ReturnValue                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInputSettings*              CallFunc_GetInputSettings_ReturnValue_1                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<struct FInputAxisKeyMapping>CallFunc_GetAxisMappingByName_OutMappings                        (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInputAxisKeyMapping        CallFunc_Array_Get_Item                                          (None)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_DoubleDouble_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_MakeStruct_Scale_ImplicitCast                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWG_Op_ControlPanel_C::InputAxisRemap(const struct FInputChord& AxisInputChord, class FName AxisName, double Scale, int32 Temp_int_Array_Index_Variable, const struct FInputAxisKeyMapping& K2Node_MakeStruct_InputAxisKeyMapping, int32 Temp_int_Loop_Counter_Variable, class UInputSettings* CallFunc_GetInputSettings_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class UInputSettings* CallFunc_GetInputSettings_ReturnValue_1, TArray<struct FInputAxisKeyMapping>& CallFunc_GetAxisMappingByName_OutMappings, int32 CallFunc_Array_Length_ReturnValue, const struct FInputAxisKeyMapping& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_DoubleDouble_ReturnValue, float K2Node_MakeStruct_Scale_ImplicitCast, double CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WG_Op_ControlPanel_C", "InputAxisRemap");

	Params::UWG_Op_ControlPanel_C_InputAxisRemap_Params Parms{};

	Parms.AxisInputChord = AxisInputChord;
	Parms.AxisName = AxisName;
	Parms.Scale = Scale;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.K2Node_MakeStruct_InputAxisKeyMapping = K2Node_MakeStruct_InputAxisKeyMapping;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_GetInputSettings_ReturnValue = CallFunc_GetInputSettings_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetInputSettings_ReturnValue_1 = CallFunc_GetInputSettings_ReturnValue_1;
	Parms.CallFunc_GetAxisMappingByName_OutMappings = CallFunc_GetAxisMappingByName_OutMappings;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_DoubleDouble_ReturnValue = CallFunc_EqualEqual_DoubleDouble_ReturnValue;
	Parms.K2Node_MakeStruct_Scale_ImplicitCast = K2Node_MakeStruct_Scale_ImplicitCast;
	Parms.CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast = CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WG_Op_ControlPanel.WG_Op_ControlPanel_C.InputActionRemap
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInputChord                 ActionInputChord                                                 (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class FName                        ActionName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInputSettings*              CallFunc_GetInputSettings_ReturnValue                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FInputActionKeyMapping      K2Node_MakeStruct_InputActionKeyMapping                          (None)
// class UInputSettings*              CallFunc_GetInputSettings_ReturnValue_1                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UInputSettings*              CallFunc_GetInputSettings_ReturnValue_2                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UInputSettings*              CallFunc_GetInputSettings_ReturnValue_3                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<struct FInputActionKeyMapping>CallFunc_GetActionMappingByName_OutMappings                      (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInputActionKeyMapping      CallFunc_Array_Get_Item                                          (None)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWG_Op_ControlPanel_C::InputActionRemap(const struct FInputChord& ActionInputChord, class FName ActionName, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UInputSettings* CallFunc_GetInputSettings_ReturnValue, const struct FInputActionKeyMapping& K2Node_MakeStruct_InputActionKeyMapping, class UInputSettings* CallFunc_GetInputSettings_ReturnValue_1, class UInputSettings* CallFunc_GetInputSettings_ReturnValue_2, class UInputSettings* CallFunc_GetInputSettings_ReturnValue_3, TArray<struct FInputActionKeyMapping>& CallFunc_GetActionMappingByName_OutMappings, int32 CallFunc_Array_Length_ReturnValue, const struct FInputActionKeyMapping& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WG_Op_ControlPanel_C", "InputActionRemap");

	Params::UWG_Op_ControlPanel_C_InputActionRemap_Params Parms{};

	Parms.ActionInputChord = ActionInputChord;
	Parms.ActionName = ActionName;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetInputSettings_ReturnValue = CallFunc_GetInputSettings_ReturnValue;
	Parms.K2Node_MakeStruct_InputActionKeyMapping = K2Node_MakeStruct_InputActionKeyMapping;
	Parms.CallFunc_GetInputSettings_ReturnValue_1 = CallFunc_GetInputSettings_ReturnValue_1;
	Parms.CallFunc_GetInputSettings_ReturnValue_2 = CallFunc_GetInputSettings_ReturnValue_2;
	Parms.CallFunc_GetInputSettings_ReturnValue_3 = CallFunc_GetInputSettings_ReturnValue_3;
	Parms.CallFunc_GetActionMappingByName_OutMappings = CallFunc_GetActionMappingByName_OutMappings;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WG_Op_ControlPanel.WG_Op_ControlPanel_C.GetText
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)

class FText UWG_Op_ControlPanel_C::GetText(double CallFunc_Multiply_DoubleDouble_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WG_Op_ControlPanel_C", "GetText");

	Params::UWG_Op_ControlPanel_C_GetText_Params Parms{};

	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_FTrunc_ReturnValue = CallFunc_FTrunc_ReturnValue;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WG_Op_ControlPanel.WG_Op_ControlPanel_C.Get_SLD_MouseSensitivity_Value
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_FunctionResult_ReturnValue_ImplicitCast                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float UWG_Op_ControlPanel_C::Get_SLD_MouseSensitivity_Value(float K2Node_FunctionResult_ReturnValue_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WG_Op_ControlPanel_C", "Get_SLD_MouseSensitivity_Value");

	Params::UWG_Op_ControlPanel_C_Get_SLD_MouseSensitivity_Value_Params Parms{};

	Parms.K2Node_FunctionResult_ReturnValue_ImplicitCast = K2Node_FunctionResult_ReturnValue_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WG_Op_ControlPanel.WG_Op_ControlPanel_C.Get_CB_AimHold_CheckedState
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class ECheckBoxState          ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

enum class ECheckBoxState UWG_Op_ControlPanel_C::Get_CB_AimHold_CheckedState()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WG_Op_ControlPanel_C", "Get_CB_AimHold_CheckedState");

	Params::UWG_Op_ControlPanel_C_Get_CB_AimHold_CheckedState_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WG_Op_ControlPanel.WG_Op_ControlPanel_C.Get_CB_LeanRight_CheckedState
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class ECheckBoxState          ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

enum class ECheckBoxState UWG_Op_ControlPanel_C::Get_CB_LeanRight_CheckedState()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WG_Op_ControlPanel_C", "Get_CB_LeanRight_CheckedState");

	Params::UWG_Op_ControlPanel_C_Get_CB_LeanRight_CheckedState_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WG_Op_ControlPanel.WG_Op_ControlPanel_C.Completed_3BBCD9AD4FAD3A74EAAFBD890266BABD
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class USaveGame*                   SaveGame                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               bSuccess                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWG_Op_ControlPanel_C::Completed_3BBCD9AD4FAD3A74EAAFBD890266BABD(class USaveGame* SaveGame, bool bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WG_Op_ControlPanel_C", "Completed_3BBCD9AD4FAD3A74EAAFBD890266BABD");

	Params::UWG_Op_ControlPanel_C_Completed_3BBCD9AD4FAD3A74EAAFBD890266BABD_Params Parms{};

	Parms.SaveGame = SaveGame;
	Parms.bSuccess = bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WG_Op_ControlPanel.WG_Op_ControlPanel_C.Completed_1245296E4C0F0B976461068E2F166959
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class USaveGame*                   SaveGame                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               bSuccess                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWG_Op_ControlPanel_C::Completed_1245296E4C0F0B976461068E2F166959(class USaveGame* SaveGame, bool bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WG_Op_ControlPanel_C", "Completed_1245296E4C0F0B976461068E2F166959");

	Params::UWG_Op_ControlPanel_C_Completed_1245296E4C0F0B976461068E2F166959_Params Parms{};

	Parms.SaveGame = SaveGame;
	Parms.bSuccess = bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WG_Op_ControlPanel.WG_Op_ControlPanel_C.Completed_E24E40784B30E8A00CB5AC98084EACBA
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class USaveGame*                   SaveGame                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               bSuccess                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWG_Op_ControlPanel_C::Completed_E24E40784B30E8A00CB5AC98084EACBA(class USaveGame* SaveGame, bool bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WG_Op_ControlPanel_C", "Completed_E24E40784B30E8A00CB5AC98084EACBA");

	Params::UWG_Op_ControlPanel_C_Completed_E24E40784B30E8A00CB5AC98084EACBA_Params Parms{};

	Parms.SaveGame = SaveGame;
	Parms.bSuccess = bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WG_Op_ControlPanel.WG_Op_ControlPanel_C.Completed_14195EDA44668A0CD3499E9B6AE8E970
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class USaveGame*                   SaveGame                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               bSuccess                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWG_Op_ControlPanel_C::Completed_14195EDA44668A0CD3499E9B6AE8E970(class USaveGame* SaveGame, bool bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WG_Op_ControlPanel_C", "Completed_14195EDA44668A0CD3499E9B6AE8E970");

	Params::UWG_Op_ControlPanel_C_Completed_14195EDA44668A0CD3499E9B6AE8E970_Params Parms{};

	Parms.SaveGame = SaveGame;
	Parms.bSuccess = bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WG_Op_ControlPanel.WG_Op_ControlPanel_C.Completed_FE2482314CB847D6DA9946B195D5187C
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class USaveGame*                   SaveGame                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               bSuccess                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWG_Op_ControlPanel_C::Completed_FE2482314CB847D6DA9946B195D5187C(class USaveGame* SaveGame, bool bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WG_Op_ControlPanel_C", "Completed_FE2482314CB847D6DA9946B195D5187C");

	Params::UWG_Op_ControlPanel_C_Completed_FE2482314CB847D6DA9946B195D5187C_Params Parms{};

	Parms.SaveGame = SaveGame;
	Parms.bSuccess = bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WG_Op_ControlPanel.WG_Op_ControlPanel_C.Completed_55EDD4DD4617007FF5CC3EA5051E36B3
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class USaveGame*                   SaveGame                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               bSuccess                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWG_Op_ControlPanel_C::Completed_55EDD4DD4617007FF5CC3EA5051E36B3(class USaveGame* SaveGame, bool bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WG_Op_ControlPanel_C", "Completed_55EDD4DD4617007FF5CC3EA5051E36B3");

	Params::UWG_Op_ControlPanel_C_Completed_55EDD4DD4617007FF5CC3EA5051E36B3_Params Parms{};

	Parms.SaveGame = SaveGame;
	Parms.bSuccess = bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WG_Op_ControlPanel.WG_Op_ControlPanel_C.Completed_3C77DA0F4171F107B2E8BE8A389970AF
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class USaveGame*                   SaveGame                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               bSuccess                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWG_Op_ControlPanel_C::Completed_3C77DA0F4171F107B2E8BE8A389970AF(class USaveGame* SaveGame, bool bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WG_Op_ControlPanel_C", "Completed_3C77DA0F4171F107B2E8BE8A389970AF");

	Params::UWG_Op_ControlPanel_C_Completed_3C77DA0F4171F107B2E8BE8A389970AF_Params Parms{};

	Parms.SaveGame = SaveGame;
	Parms.bSuccess = bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WG_Op_ControlPanel.WG_Op_ControlPanel_C.Completed_4B4F119A44161F6026EBDA9A166DF279
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class USaveGame*                   SaveGame                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               bSuccess                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWG_Op_ControlPanel_C::Completed_4B4F119A44161F6026EBDA9A166DF279(class USaveGame* SaveGame, bool bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WG_Op_ControlPanel_C", "Completed_4B4F119A44161F6026EBDA9A166DF279");

	Params::UWG_Op_ControlPanel_C_Completed_4B4F119A44161F6026EBDA9A166DF279_Params Parms{};

	Parms.SaveGame = SaveGame;
	Parms.bSuccess = bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WG_Op_ControlPanel.WG_Op_ControlPanel_C.Completed_D037ACD44C895F43C5524087B26EE012
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class USaveGame*                   SaveGame                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               bSuccess                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWG_Op_ControlPanel_C::Completed_D037ACD44C895F43C5524087B26EE012(class USaveGame* SaveGame, bool bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WG_Op_ControlPanel_C", "Completed_D037ACD44C895F43C5524087B26EE012");

	Params::UWG_Op_ControlPanel_C_Completed_D037ACD44C895F43C5524087B26EE012_Params Parms{};

	Parms.SaveGame = SaveGame;
	Parms.bSuccess = bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WG_Op_ControlPanel.WG_Op_ControlPanel_C.BndEvt__WG_Op_ControlPanel_FireKeySelector_K2Node_ComponentBoundEvent_10_OnKeySelected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FInputChord                 SelectedKey                                                      (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UWG_Op_ControlPanel_C::BndEvt__WG_Op_ControlPanel_FireKeySelector_K2Node_ComponentBoundEvent_10_OnKeySelected__DelegateSignature(const struct FInputChord& SelectedKey)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WG_Op_ControlPanel_C", "BndEvt__WG_Op_ControlPanel_FireKeySelector_K2Node_ComponentBoundEvent_10_OnKeySelected__DelegateSignature");

	Params::UWG_Op_ControlPanel_C_BndEvt__WG_Op_ControlPanel_FireKeySelector_K2Node_ComponentBoundEvent_10_OnKeySelected__DelegateSignature_Params Parms{};

	Parms.SelectedKey = SelectedKey;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WG_Op_ControlPanel.WG_Op_ControlPanel_C.BndEvt__WG_Op_ControlPanel_FlashbangKeySelector_K2Node_ComponentBoundEvent_11_OnKeySelected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FInputChord                 SelectedKey                                                      (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UWG_Op_ControlPanel_C::BndEvt__WG_Op_ControlPanel_FlashbangKeySelector_K2Node_ComponentBoundEvent_11_OnKeySelected__DelegateSignature(const struct FInputChord& SelectedKey)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WG_Op_ControlPanel_C", "BndEvt__WG_Op_ControlPanel_FlashbangKeySelector_K2Node_ComponentBoundEvent_11_OnKeySelected__DelegateSignature");

	Params::UWG_Op_ControlPanel_C_BndEvt__WG_Op_ControlPanel_FlashbangKeySelector_K2Node_ComponentBoundEvent_11_OnKeySelected__DelegateSignature_Params Parms{};

	Parms.SelectedKey = SelectedKey;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WG_Op_ControlPanel.WG_Op_ControlPanel_C.BndEvt__WG_Op_ControlPanel_FlashlightKeySelector_K2Node_ComponentBoundEvent_12_OnKeySelected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FInputChord                 SelectedKey                                                      (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UWG_Op_ControlPanel_C::BndEvt__WG_Op_ControlPanel_FlashlightKeySelector_K2Node_ComponentBoundEvent_12_OnKeySelected__DelegateSignature(const struct FInputChord& SelectedKey)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WG_Op_ControlPanel_C", "BndEvt__WG_Op_ControlPanel_FlashlightKeySelector_K2Node_ComponentBoundEvent_12_OnKeySelected__DelegateSignature");

	Params::UWG_Op_ControlPanel_C_BndEvt__WG_Op_ControlPanel_FlashlightKeySelector_K2Node_ComponentBoundEvent_12_OnKeySelected__DelegateSignature_Params Parms{};

	Parms.SelectedKey = SelectedKey;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WG_Op_ControlPanel.WG_Op_ControlPanel_C.BndEvt__WG_Op_ControlPanel_FreeLookKeySelector_K2Node_ComponentBoundEvent_13_OnKeySelected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FInputChord                 SelectedKey                                                      (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UWG_Op_ControlPanel_C::BndEvt__WG_Op_ControlPanel_FreeLookKeySelector_K2Node_ComponentBoundEvent_13_OnKeySelected__DelegateSignature(const struct FInputChord& SelectedKey)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WG_Op_ControlPanel_C", "BndEvt__WG_Op_ControlPanel_FreeLookKeySelector_K2Node_ComponentBoundEvent_13_OnKeySelected__DelegateSignature");

	Params::UWG_Op_ControlPanel_C_BndEvt__WG_Op_ControlPanel_FreeLookKeySelector_K2Node_ComponentBoundEvent_13_OnKeySelected__DelegateSignature_Params Parms{};

	Parms.SelectedKey = SelectedKey;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WG_Op_ControlPanel.WG_Op_ControlPanel_C.BndEvt__WG_Op_ControlPanel_GrenadeKeySelector_K2Node_ComponentBoundEvent_17_OnKeySelected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FInputChord                 SelectedKey                                                      (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UWG_Op_ControlPanel_C::BndEvt__WG_Op_ControlPanel_GrenadeKeySelector_K2Node_ComponentBoundEvent_17_OnKeySelected__DelegateSignature(const struct FInputChord& SelectedKey)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WG_Op_ControlPanel_C", "BndEvt__WG_Op_ControlPanel_GrenadeKeySelector_K2Node_ComponentBoundEvent_17_OnKeySelected__DelegateSignature");

	Params::UWG_Op_ControlPanel_C_BndEvt__WG_Op_ControlPanel_GrenadeKeySelector_K2Node_ComponentBoundEvent_17_OnKeySelected__DelegateSignature_Params Parms{};

	Parms.SelectedKey = SelectedKey;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WG_Op_ControlPanel.WG_Op_ControlPanel_C.BndEvt__WG_Op_ControlPanel_InspectKeySelector_K2Node_ComponentBoundEvent_21_OnKeySelected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FInputChord                 SelectedKey                                                      (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UWG_Op_ControlPanel_C::BndEvt__WG_Op_ControlPanel_InspectKeySelector_K2Node_ComponentBoundEvent_21_OnKeySelected__DelegateSignature(const struct FInputChord& SelectedKey)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WG_Op_ControlPanel_C", "BndEvt__WG_Op_ControlPanel_InspectKeySelector_K2Node_ComponentBoundEvent_21_OnKeySelected__DelegateSignature");

	Params::UWG_Op_ControlPanel_C_BndEvt__WG_Op_ControlPanel_InspectKeySelector_K2Node_ComponentBoundEvent_21_OnKeySelected__DelegateSignature_Params Parms{};

	Parms.SelectedKey = SelectedKey;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WG_Op_ControlPanel.WG_Op_ControlPanel_C.BndEvt__WG_Op_ControlPanel_InteractKeySelector_K2Node_ComponentBoundEvent_22_OnKeySelected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FInputChord                 SelectedKey                                                      (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UWG_Op_ControlPanel_C::BndEvt__WG_Op_ControlPanel_InteractKeySelector_K2Node_ComponentBoundEvent_22_OnKeySelected__DelegateSignature(const struct FInputChord& SelectedKey)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WG_Op_ControlPanel_C", "BndEvt__WG_Op_ControlPanel_InteractKeySelector_K2Node_ComponentBoundEvent_22_OnKeySelected__DelegateSignature");

	Params::UWG_Op_ControlPanel_C_BndEvt__WG_Op_ControlPanel_InteractKeySelector_K2Node_ComponentBoundEvent_22_OnKeySelected__DelegateSignature_Params Parms{};

	Parms.SelectedKey = SelectedKey;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WG_Op_ControlPanel.WG_Op_ControlPanel_C.BndEvt__WG_Op_ControlPanel_LaserKeySelector_K2Node_ComponentBoundEvent_23_OnKeySelected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FInputChord                 SelectedKey                                                      (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UWG_Op_ControlPanel_C::BndEvt__WG_Op_ControlPanel_LaserKeySelector_K2Node_ComponentBoundEvent_23_OnKeySelected__DelegateSignature(const struct FInputChord& SelectedKey)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WG_Op_ControlPanel_C", "BndEvt__WG_Op_ControlPanel_LaserKeySelector_K2Node_ComponentBoundEvent_23_OnKeySelected__DelegateSignature");

	Params::UWG_Op_ControlPanel_C_BndEvt__WG_Op_ControlPanel_LaserKeySelector_K2Node_ComponentBoundEvent_23_OnKeySelected__DelegateSignature_Params Parms{};

	Parms.SelectedKey = SelectedKey;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WG_Op_ControlPanel.WG_Op_ControlPanel_C.BndEvt__WG_Op_ControlPanel_LLeftSelector_K2Node_ComponentBoundEvent_24_OnKeySelected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FInputChord                 SelectedKey                                                      (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UWG_Op_ControlPanel_C::BndEvt__WG_Op_ControlPanel_LLeftSelector_K2Node_ComponentBoundEvent_24_OnKeySelected__DelegateSignature(const struct FInputChord& SelectedKey)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WG_Op_ControlPanel_C", "BndEvt__WG_Op_ControlPanel_LLeftSelector_K2Node_ComponentBoundEvent_24_OnKeySelected__DelegateSignature");

	Params::UWG_Op_ControlPanel_C_BndEvt__WG_Op_ControlPanel_LLeftSelector_K2Node_ComponentBoundEvent_24_OnKeySelected__DelegateSignature_Params Parms{};

	Parms.SelectedKey = SelectedKey;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WG_Op_ControlPanel.WG_Op_ControlPanel_C.BndEvt__WG_Op_ControlPanel_LRightSelector_K2Node_ComponentBoundEvent_25_OnKeySelected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FInputChord                 SelectedKey                                                      (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UWG_Op_ControlPanel_C::BndEvt__WG_Op_ControlPanel_LRightSelector_K2Node_ComponentBoundEvent_25_OnKeySelected__DelegateSignature(const struct FInputChord& SelectedKey)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WG_Op_ControlPanel_C", "BndEvt__WG_Op_ControlPanel_LRightSelector_K2Node_ComponentBoundEvent_25_OnKeySelected__DelegateSignature");

	Params::UWG_Op_ControlPanel_C_BndEvt__WG_Op_ControlPanel_LRightSelector_K2Node_ComponentBoundEvent_25_OnKeySelected__DelegateSignature_Params Parms{};

	Parms.SelectedKey = SelectedKey;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WG_Op_ControlPanel.WG_Op_ControlPanel_C.BndEvt__WG_Op_ControlPanel_MenuKeySelector_K2Node_ComponentBoundEvent_26_OnKeySelected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FInputChord                 SelectedKey                                                      (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UWG_Op_ControlPanel_C::BndEvt__WG_Op_ControlPanel_MenuKeySelector_K2Node_ComponentBoundEvent_26_OnKeySelected__DelegateSignature(const struct FInputChord& SelectedKey)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WG_Op_ControlPanel_C", "BndEvt__WG_Op_ControlPanel_MenuKeySelector_K2Node_ComponentBoundEvent_26_OnKeySelected__DelegateSignature");

	Params::UWG_Op_ControlPanel_C_BndEvt__WG_Op_ControlPanel_MenuKeySelector_K2Node_ComponentBoundEvent_26_OnKeySelected__DelegateSignature_Params Parms{};

	Parms.SelectedKey = SelectedKey;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WG_Op_ControlPanel.WG_Op_ControlPanel_C.BndEvt__WG_Op_ControlPanel_NVGKeySelector_K2Node_ComponentBoundEvent_27_OnKeySelected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FInputChord                 SelectedKey                                                      (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UWG_Op_ControlPanel_C::BndEvt__WG_Op_ControlPanel_NVGKeySelector_K2Node_ComponentBoundEvent_27_OnKeySelected__DelegateSignature(const struct FInputChord& SelectedKey)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WG_Op_ControlPanel_C", "BndEvt__WG_Op_ControlPanel_NVGKeySelector_K2Node_ComponentBoundEvent_27_OnKeySelected__DelegateSignature");

	Params::UWG_Op_ControlPanel_C_BndEvt__WG_Op_ControlPanel_NVGKeySelector_K2Node_ComponentBoundEvent_27_OnKeySelected__DelegateSignature_Params Parms{};

	Parms.SelectedKey = SelectedKey;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WG_Op_ControlPanel.WG_Op_ControlPanel_C.BndEvt__WG_Op_ControlPanel_SmokeKeySelector_K2Node_ComponentBoundEvent_28_OnKeySelected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FInputChord                 SelectedKey                                                      (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UWG_Op_ControlPanel_C::BndEvt__WG_Op_ControlPanel_SmokeKeySelector_K2Node_ComponentBoundEvent_28_OnKeySelected__DelegateSignature(const struct FInputChord& SelectedKey)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WG_Op_ControlPanel_C", "BndEvt__WG_Op_ControlPanel_SmokeKeySelector_K2Node_ComponentBoundEvent_28_OnKeySelected__DelegateSignature");

	Params::UWG_Op_ControlPanel_C_BndEvt__WG_Op_ControlPanel_SmokeKeySelector_K2Node_ComponentBoundEvent_28_OnKeySelected__DelegateSignature_Params Parms{};

	Parms.SelectedKey = SelectedKey;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WG_Op_ControlPanel.WG_Op_ControlPanel_C.BndEvt__WG_Op_ControlPanel_SwitchFireKeySelector_K2Node_ComponentBoundEvent_29_OnKeySelected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FInputChord                 SelectedKey                                                      (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UWG_Op_ControlPanel_C::BndEvt__WG_Op_ControlPanel_SwitchFireKeySelector_K2Node_ComponentBoundEvent_29_OnKeySelected__DelegateSignature(const struct FInputChord& SelectedKey)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WG_Op_ControlPanel_C", "BndEvt__WG_Op_ControlPanel_SwitchFireKeySelector_K2Node_ComponentBoundEvent_29_OnKeySelected__DelegateSignature");

	Params::UWG_Op_ControlPanel_C_BndEvt__WG_Op_ControlPanel_SwitchFireKeySelector_K2Node_ComponentBoundEvent_29_OnKeySelected__DelegateSignature_Params Parms{};

	Parms.SelectedKey = SelectedKey;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WG_Op_ControlPanel.WG_Op_ControlPanel_C.BndEvt__WG_Op_ControlPanel_RunSelector_K2Node_ComponentBoundEvent_30_OnKeySelected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FInputChord                 SelectedKey                                                      (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UWG_Op_ControlPanel_C::BndEvt__WG_Op_ControlPanel_RunSelector_K2Node_ComponentBoundEvent_30_OnKeySelected__DelegateSignature(const struct FInputChord& SelectedKey)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WG_Op_ControlPanel_C", "BndEvt__WG_Op_ControlPanel_RunSelector_K2Node_ComponentBoundEvent_30_OnKeySelected__DelegateSignature");

	Params::UWG_Op_ControlPanel_C_BndEvt__WG_Op_ControlPanel_RunSelector_K2Node_ComponentBoundEvent_30_OnKeySelected__DelegateSignature_Params Parms{};

	Parms.SelectedKey = SelectedKey;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WG_Op_ControlPanel.WG_Op_ControlPanel_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWG_Op_ControlPanel_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WG_Op_ControlPanel_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WG_Op_ControlPanel.WG_Op_ControlPanel_C.BndEvt__WG_Op_ControlPanel_CheckBox_2_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               bIsChecked                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWG_Op_ControlPanel_C::BndEvt__WG_Op_ControlPanel_CheckBox_2_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WG_Op_ControlPanel_C", "BndEvt__WG_Op_ControlPanel_CheckBox_2_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature");

	Params::UWG_Op_ControlPanel_C_BndEvt__WG_Op_ControlPanel_CheckBox_2_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature_Params Parms{};

	Parms.bIsChecked = bIsChecked;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WG_Op_ControlPanel.WG_Op_ControlPanel_C.BndEvt__WG_Op_ControlPanel_CB_LeanRight_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               bIsChecked                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWG_Op_ControlPanel_C::BndEvt__WG_Op_ControlPanel_CB_LeanRight_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WG_Op_ControlPanel_C", "BndEvt__WG_Op_ControlPanel_CB_LeanRight_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature");

	Params::UWG_Op_ControlPanel_C_BndEvt__WG_Op_ControlPanel_CB_LeanRight_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature_Params Parms{};

	Parms.bIsChecked = bIsChecked;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WG_Op_ControlPanel.WG_Op_ControlPanel_C.BndEvt__WG_Op_ControlPanel_DatapadKeySelector_K2Node_ComponentBoundEvent_9_OnKeySelected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FInputChord                 SelectedKey                                                      (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UWG_Op_ControlPanel_C::BndEvt__WG_Op_ControlPanel_DatapadKeySelector_K2Node_ComponentBoundEvent_9_OnKeySelected__DelegateSignature(const struct FInputChord& SelectedKey)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WG_Op_ControlPanel_C", "BndEvt__WG_Op_ControlPanel_DatapadKeySelector_K2Node_ComponentBoundEvent_9_OnKeySelected__DelegateSignature");

	Params::UWG_Op_ControlPanel_C_BndEvt__WG_Op_ControlPanel_DatapadKeySelector_K2Node_ComponentBoundEvent_9_OnKeySelected__DelegateSignature_Params Parms{};

	Parms.SelectedKey = SelectedKey;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WG_Op_ControlPanel.WG_Op_ControlPanel_C.BndEvt__WG_Op_ControlPanel_SLD_MouseSensitivity_K2Node_ComponentBoundEvent_2_OnFloatValueChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWG_Op_ControlPanel_C::BndEvt__WG_Op_ControlPanel_SLD_MouseSensitivity_K2Node_ComponentBoundEvent_2_OnFloatValueChangedEvent__DelegateSignature(float Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WG_Op_ControlPanel_C", "BndEvt__WG_Op_ControlPanel_SLD_MouseSensitivity_K2Node_ComponentBoundEvent_2_OnFloatValueChangedEvent__DelegateSignature");

	Params::UWG_Op_ControlPanel_C_BndEvt__WG_Op_ControlPanel_SLD_MouseSensitivity_K2Node_ComponentBoundEvent_2_OnFloatValueChangedEvent__DelegateSignature_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WG_Op_ControlPanel.WG_Op_ControlPanel_C.SaveButton
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWG_Op_ControlPanel_C::SaveButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WG_Op_ControlPanel_C", "SaveButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WG_Op_ControlPanel.WG_Op_ControlPanel_C.DefaultButton
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWG_Op_ControlPanel_C::DefaultButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WG_Op_ControlPanel_C", "DefaultButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WG_Op_ControlPanel.WG_Op_ControlPanel_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWG_Op_ControlPanel_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WG_Op_ControlPanel_C", "PreConstruct");

	Params::UWG_Op_ControlPanel_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WG_Op_ControlPanel.WG_Op_ControlPanel_C.LoadControls
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWG_Op_ControlPanel_C::LoadControls()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WG_Op_ControlPanel_C", "LoadControls");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WG_Op_ControlPanel.WG_Op_ControlPanel_C.BndEvt__WG_Op_ControlPanel_CrouchKeySelector_K2Node_ComponentBoundEvent_8_OnKeySelected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FInputChord                 SelectedKey                                                      (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UWG_Op_ControlPanel_C::BndEvt__WG_Op_ControlPanel_CrouchKeySelector_K2Node_ComponentBoundEvent_8_OnKeySelected__DelegateSignature(const struct FInputChord& SelectedKey)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WG_Op_ControlPanel_C", "BndEvt__WG_Op_ControlPanel_CrouchKeySelector_K2Node_ComponentBoundEvent_8_OnKeySelected__DelegateSignature");

	Params::UWG_Op_ControlPanel_C_BndEvt__WG_Op_ControlPanel_CrouchKeySelector_K2Node_ComponentBoundEvent_8_OnKeySelected__DelegateSignature_Params Parms{};

	Parms.SelectedKey = SelectedKey;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WG_Op_ControlPanel.WG_Op_ControlPanel_C.BndEvt__WG_Op_ControlPanel_AimKeySelector_K2Node_ComponentBoundEvent_7_OnKeySelected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FInputChord                 SelectedKey                                                      (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UWG_Op_ControlPanel_C::BndEvt__WG_Op_ControlPanel_AimKeySelector_K2Node_ComponentBoundEvent_7_OnKeySelected__DelegateSignature(const struct FInputChord& SelectedKey)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WG_Op_ControlPanel_C", "BndEvt__WG_Op_ControlPanel_AimKeySelector_K2Node_ComponentBoundEvent_7_OnKeySelected__DelegateSignature");

	Params::UWG_Op_ControlPanel_C_BndEvt__WG_Op_ControlPanel_AimKeySelector_K2Node_ComponentBoundEvent_7_OnKeySelected__DelegateSignature_Params Parms{};

	Parms.SelectedKey = SelectedKey;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WG_Op_ControlPanel.WG_Op_ControlPanel_C.BndEvt__WG_Op_ControlPanel_ADSKeySelector_K2Node_ComponentBoundEvent_6_OnKeySelected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FInputChord                 SelectedKey                                                      (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UWG_Op_ControlPanel_C::BndEvt__WG_Op_ControlPanel_ADSKeySelector_K2Node_ComponentBoundEvent_6_OnKeySelected__DelegateSignature(const struct FInputChord& SelectedKey)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WG_Op_ControlPanel_C", "BndEvt__WG_Op_ControlPanel_ADSKeySelector_K2Node_ComponentBoundEvent_6_OnKeySelected__DelegateSignature");

	Params::UWG_Op_ControlPanel_C_BndEvt__WG_Op_ControlPanel_ADSKeySelector_K2Node_ComponentBoundEvent_6_OnKeySelected__DelegateSignature_Params Parms{};

	Parms.SelectedKey = SelectedKey;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WG_Op_ControlPanel.WG_Op_ControlPanel_C.BndEvt__WG_Op_ControlPanel_ReloadKeySelector_K2Node_ComponentBoundEvent_0_OnKeySelected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FInputChord                 SelectedKey                                                      (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UWG_Op_ControlPanel_C::BndEvt__WG_Op_ControlPanel_ReloadKeySelector_K2Node_ComponentBoundEvent_0_OnKeySelected__DelegateSignature(const struct FInputChord& SelectedKey)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WG_Op_ControlPanel_C", "BndEvt__WG_Op_ControlPanel_ReloadKeySelector_K2Node_ComponentBoundEvent_0_OnKeySelected__DelegateSignature");

	Params::UWG_Op_ControlPanel_C_BndEvt__WG_Op_ControlPanel_ReloadKeySelector_K2Node_ComponentBoundEvent_0_OnKeySelected__DelegateSignature_Params Parms{};

	Parms.SelectedKey = SelectedKey;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WG_Op_ControlPanel.WG_Op_ControlPanel_C.BndEvt__WG_Op_ControlPanel_RightKeySelector_K2Node_ComponentBoundEvent_3_OnKeySelected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FInputChord                 SelectedKey                                                      (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UWG_Op_ControlPanel_C::BndEvt__WG_Op_ControlPanel_RightKeySelector_K2Node_ComponentBoundEvent_3_OnKeySelected__DelegateSignature(const struct FInputChord& SelectedKey)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WG_Op_ControlPanel_C", "BndEvt__WG_Op_ControlPanel_RightKeySelector_K2Node_ComponentBoundEvent_3_OnKeySelected__DelegateSignature");

	Params::UWG_Op_ControlPanel_C_BndEvt__WG_Op_ControlPanel_RightKeySelector_K2Node_ComponentBoundEvent_3_OnKeySelected__DelegateSignature_Params Parms{};

	Parms.SelectedKey = SelectedKey;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WG_Op_ControlPanel.WG_Op_ControlPanel_C.BndEvt__WG_Op_ControlPanel_LeftKeySelector_K2Node_ComponentBoundEvent_2_OnKeySelected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FInputChord                 SelectedKey                                                      (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UWG_Op_ControlPanel_C::BndEvt__WG_Op_ControlPanel_LeftKeySelector_K2Node_ComponentBoundEvent_2_OnKeySelected__DelegateSignature(const struct FInputChord& SelectedKey)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WG_Op_ControlPanel_C", "BndEvt__WG_Op_ControlPanel_LeftKeySelector_K2Node_ComponentBoundEvent_2_OnKeySelected__DelegateSignature");

	Params::UWG_Op_ControlPanel_C_BndEvt__WG_Op_ControlPanel_LeftKeySelector_K2Node_ComponentBoundEvent_2_OnKeySelected__DelegateSignature_Params Parms{};

	Parms.SelectedKey = SelectedKey;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WG_Op_ControlPanel.WG_Op_ControlPanel_C.BndEvt__WG_Op_ControlPanel_BackwardKeySelector_K2Node_ComponentBoundEvent_1_OnKeySelected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FInputChord                 SelectedKey                                                      (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UWG_Op_ControlPanel_C::BndEvt__WG_Op_ControlPanel_BackwardKeySelector_K2Node_ComponentBoundEvent_1_OnKeySelected__DelegateSignature(const struct FInputChord& SelectedKey)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WG_Op_ControlPanel_C", "BndEvt__WG_Op_ControlPanel_BackwardKeySelector_K2Node_ComponentBoundEvent_1_OnKeySelected__DelegateSignature");

	Params::UWG_Op_ControlPanel_C_BndEvt__WG_Op_ControlPanel_BackwardKeySelector_K2Node_ComponentBoundEvent_1_OnKeySelected__DelegateSignature_Params Parms{};

	Parms.SelectedKey = SelectedKey;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WG_Op_ControlPanel.WG_Op_ControlPanel_C.BndEvt__WG_Op_ControlPanel_ForwardKeySelector_K2Node_ComponentBoundEvent_5_OnKeySelected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FInputChord                 SelectedKey                                                      (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UWG_Op_ControlPanel_C::BndEvt__WG_Op_ControlPanel_ForwardKeySelector_K2Node_ComponentBoundEvent_5_OnKeySelected__DelegateSignature(const struct FInputChord& SelectedKey)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WG_Op_ControlPanel_C", "BndEvt__WG_Op_ControlPanel_ForwardKeySelector_K2Node_ComponentBoundEvent_5_OnKeySelected__DelegateSignature");

	Params::UWG_Op_ControlPanel_C_BndEvt__WG_Op_ControlPanel_ForwardKeySelector_K2Node_ComponentBoundEvent_5_OnKeySelected__DelegateSignature_Params Parms{};

	Parms.SelectedKey = SelectedKey;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WG_Op_ControlPanel.WG_Op_ControlPanel_C.KeyEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWG_Op_ControlPanel_C::KeyEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WG_Op_ControlPanel_C", "KeyEvent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WG_Op_ControlPanel.WG_Op_ControlPanel_C.ExecuteUbergraph_WG_Op_ControlPanel
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USaveGame*                   Temp_object_Variable                                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class USaveGame*                   K2Node_CustomEvent_SaveGame_6                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bSuccess_6                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USaveGame*                   Temp_object_Variable_1                                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UControls_SG_C*              K2Node_DynamicCast_AsControls_SG                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAsyncActionHandleSaveGame*  CallFunc_AsyncLoadGameFromSlot_ReturnValue                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class USaveGame*                   K2Node_CustomEvent_SaveGame_5                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bSuccess_5                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USaveGame*                   Temp_object_Variable_2                                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class USaveGame*                   K2Node_CustomEvent_SaveGame_4                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USaveGame*                   Temp_object_Variable_3                                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class USaveGame*                   K2Node_CustomEvent_SaveGame_3                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USaveGame*                   Temp_object_Variable_4                                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UControls_SG_C*              K2Node_DynamicCast_AsControls_SG_1                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAsyncActionHandleSaveGame*  CallFunc_AsyncSaveGameToSlot_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USaveGame*                   K2Node_CustomEvent_SaveGame_2                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_5                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USaveGame*                   Temp_object_Variable_5                                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UControls_SG_C*              K2Node_DynamicCast_AsControls_SG_2                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAsyncActionHandleSaveGame*  CallFunc_AsyncLoadGameFromSlot_ReturnValue_1                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAsyncActionHandleSaveGame*  CallFunc_AsyncSaveGameToSlot_ReturnValue_1                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class USaveGame*                   K2Node_CustomEvent_SaveGame_1                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_6                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USaveGame*                   Temp_object_Variable_6                                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UControls_SG_C*              K2Node_DynamicCast_AsControls_SG_3                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAsyncActionHandleSaveGame*  CallFunc_AsyncLoadGameFromSlot_ReturnValue_2                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAsyncActionHandleSaveGame*  CallFunc_AsyncSaveGameToSlot_ReturnValue_2                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_5                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_6                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class USaveGame*                   K2Node_CustomEvent_SaveGame                                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_7                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USaveGame*                   Temp_object_Variable_7                                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UControls_SG_C*              K2Node_DynamicCast_AsControls_SG_4                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAsyncActionHandleSaveGame*  CallFunc_AsyncLoadGameFromSlot_ReturnValue_3                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAsyncActionHandleSaveGame*  CallFunc_AsyncSaveGameToSlot_ReturnValue_3                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_6                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_7                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInputChord                 K2Node_ComponentBoundEvent_SelectedKey_23                        (HasGetValueTypeHash)
// struct FInputChord                 K2Node_ComponentBoundEvent_SelectedKey_22                        (HasGetValueTypeHash)
// struct FInputChord                 K2Node_ComponentBoundEvent_SelectedKey_21                        (HasGetValueTypeHash)
// struct FInputChord                 K2Node_ComponentBoundEvent_SelectedKey_20                        (HasGetValueTypeHash)
// struct FInputChord                 K2Node_ComponentBoundEvent_SelectedKey_19                        (HasGetValueTypeHash)
// struct FInputChord                 K2Node_ComponentBoundEvent_SelectedKey_18                        (HasGetValueTypeHash)
// struct FInputChord                 K2Node_ComponentBoundEvent_SelectedKey_17                        (HasGetValueTypeHash)
// struct FInputChord                 K2Node_ComponentBoundEvent_SelectedKey_16                        (HasGetValueTypeHash)
// struct FInputChord                 K2Node_ComponentBoundEvent_SelectedKey_15                        (HasGetValueTypeHash)
// struct FInputChord                 K2Node_ComponentBoundEvent_SelectedKey_14                        (HasGetValueTypeHash)
// struct FInputChord                 K2Node_ComponentBoundEvent_SelectedKey_13                        (HasGetValueTypeHash)
// struct FInputChord                 K2Node_ComponentBoundEvent_SelectedKey_12                        (HasGetValueTypeHash)
// struct FInputChord                 K2Node_ComponentBoundEvent_SelectedKey_11                        (HasGetValueTypeHash)
// struct FInputChord                 K2Node_ComponentBoundEvent_SelectedKey_10                        (HasGetValueTypeHash)
// struct FInputChord                 K2Node_ComponentBoundEvent_SelectedKey_9                         (HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_bIsChecked_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USaveGame*                   K2Node_CustomEvent_SaveGame_7                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bSuccess_7                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_bIsChecked                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInputChord                 K2Node_ComponentBoundEvent_SelectedKey_8                         (HasGetValueTypeHash)
// float                              K2Node_ComponentBoundEvent_Value                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_7                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_DoesSaveGameExist_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UControls_SG_C*              CallFunc_CreateSaveGameObject_ReturnValue                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAsyncActionHandleSaveGame*  CallFunc_AsyncSaveGameToSlot_ReturnValue_4                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_8                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_8                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class USaveGame*                   K2Node_CustomEvent_SaveGame_8                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bSuccess_8                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPawn*                       CallFunc_GetOwningPlayerPawn_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UB_DemoCharacter_C*          K2Node_DynamicCast_AsB_Demo_Character                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_5                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_9                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class USaveGame*                   Temp_object_Variable_8                                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_8                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInputChord                 CallFunc_ConstructAxisRemap_InputChord                           (HasGetValueTypeHash)
// struct FInputChord                 CallFunc_ConstructAxisRemap_InputChord_1                         (HasGetValueTypeHash)
// struct FInputChord                 CallFunc_ConstructAxisRemap_InputChord_2                         (HasGetValueTypeHash)
// struct FInputChord                 CallFunc_ConstructAxisRemap_InputChord_3                         (HasGetValueTypeHash)
// struct FInputChord                 CallFunc_ConstructActionRemap_Key                                (HasGetValueTypeHash)
// struct FInputChord                 CallFunc_ConstructActionRemap_Key_1                              (HasGetValueTypeHash)
// struct FInputChord                 CallFunc_ConstructActionRemap_Key_2                              (HasGetValueTypeHash)
// struct FInputChord                 CallFunc_ConstructActionRemap_Key_3                              (HasGetValueTypeHash)
// struct FInputChord                 CallFunc_ConstructActionRemap_Key_4                              (HasGetValueTypeHash)
// struct FInputChord                 CallFunc_ConstructActionRemap_Key_5                              (HasGetValueTypeHash)
// struct FInputChord                 CallFunc_ConstructActionRemap_Key_6                              (HasGetValueTypeHash)
// struct FInputChord                 CallFunc_ConstructActionRemap_Key_7                              (HasGetValueTypeHash)
// struct FInputChord                 CallFunc_ConstructActionRemap_Key_8                              (HasGetValueTypeHash)
// struct FInputChord                 CallFunc_ConstructActionRemap_Key_9                              (HasGetValueTypeHash)
// struct FInputChord                 K2Node_ComponentBoundEvent_SelectedKey_7                         (HasGetValueTypeHash)
// struct FInputChord                 K2Node_ComponentBoundEvent_SelectedKey_6                         (HasGetValueTypeHash)
// struct FInputChord                 K2Node_ComponentBoundEvent_SelectedKey_5                         (HasGetValueTypeHash)
// struct FInputChord                 CallFunc_ConstructActionRemap_Key_10                             (HasGetValueTypeHash)
// struct FInputChord                 CallFunc_ConstructActionRemap_Key_11                             (HasGetValueTypeHash)
// struct FInputChord                 CallFunc_ConstructActionRemap_Key_12                             (HasGetValueTypeHash)
// struct FInputChord                 CallFunc_ConstructActionRemap_Key_13                             (HasGetValueTypeHash)
// struct FInputChord                 K2Node_ComponentBoundEvent_SelectedKey_4                         (HasGetValueTypeHash)
// struct FInputChord                 K2Node_ComponentBoundEvent_SelectedKey_3                         (HasGetValueTypeHash)
// struct FInputChord                 K2Node_ComponentBoundEvent_SelectedKey_2                         (HasGetValueTypeHash)
// struct FInputChord                 K2Node_ComponentBoundEvent_SelectedKey_1                         (HasGetValueTypeHash)
// struct FInputChord                 K2Node_ComponentBoundEvent_SelectedKey                           (HasGetValueTypeHash)
// class UInputSettings*              CallFunc_GetInputSettings_ReturnValue                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FInputChord                 CallFunc_ConstructActionRemap_Key_14                             (HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_10                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetValue_InValue_ImplicitCast                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSet_Mouse_Sensitivity_ImplicitCast                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWG_Op_ControlPanel_C::ExecuteUbergraph_WG_Op_ControlPanel(int32 EntryPoint, bool Temp_bool_Variable, class USaveGame* Temp_object_Variable, class USaveGame* K2Node_CustomEvent_SaveGame_6, bool K2Node_CustomEvent_bSuccess_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool Temp_bool_Variable_1, class USaveGame* Temp_object_Variable_1, class UControls_SG_C* K2Node_DynamicCast_AsControls_SG, bool K2Node_DynamicCast_bSuccess, class UAsyncActionHandleSaveGame* CallFunc_AsyncLoadGameFromSlot_ReturnValue, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class USaveGame* K2Node_CustomEvent_SaveGame_5, bool K2Node_CustomEvent_bSuccess_5, bool Temp_bool_Variable_2, class USaveGame* Temp_object_Variable_2, class USaveGame* K2Node_CustomEvent_SaveGame_4, bool K2Node_CustomEvent_bSuccess_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, bool Temp_bool_Variable_3, class USaveGame* Temp_object_Variable_3, class USaveGame* K2Node_CustomEvent_SaveGame_3, bool K2Node_CustomEvent_bSuccess_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, bool Temp_bool_Variable_4, class USaveGame* Temp_object_Variable_4, class UControls_SG_C* K2Node_DynamicCast_AsControls_SG_1, bool K2Node_DynamicCast_bSuccess_1, class UAsyncActionHandleSaveGame* CallFunc_AsyncSaveGameToSlot_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, bool CallFunc_IsValid_ReturnValue_1, class USaveGame* K2Node_CustomEvent_SaveGame_2, bool K2Node_CustomEvent_bSuccess_2, bool Temp_bool_Variable_5, class USaveGame* Temp_object_Variable_5, class UControls_SG_C* K2Node_DynamicCast_AsControls_SG_2, bool K2Node_DynamicCast_bSuccess_2, class UAsyncActionHandleSaveGame* CallFunc_AsyncLoadGameFromSlot_ReturnValue_1, class UAsyncActionHandleSaveGame* CallFunc_AsyncSaveGameToSlot_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, class USaveGame* K2Node_CustomEvent_SaveGame_1, bool K2Node_CustomEvent_bSuccess_1, bool Temp_bool_Variable_6, class USaveGame* Temp_object_Variable_6, class UControls_SG_C* K2Node_DynamicCast_AsControls_SG_3, bool K2Node_DynamicCast_bSuccess_3, class UAsyncActionHandleSaveGame* CallFunc_AsyncLoadGameFromSlot_ReturnValue_2, class UAsyncActionHandleSaveGame* CallFunc_AsyncSaveGameToSlot_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_4, bool CallFunc_IsValid_ReturnValue_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, class USaveGame* K2Node_CustomEvent_SaveGame, bool K2Node_CustomEvent_bSuccess, bool Temp_bool_Variable_7, class USaveGame* Temp_object_Variable_7, class UControls_SG_C* K2Node_DynamicCast_AsControls_SG_4, bool K2Node_DynamicCast_bSuccess_4, class UAsyncActionHandleSaveGame* CallFunc_AsyncLoadGameFromSlot_ReturnValue_3, class UAsyncActionHandleSaveGame* CallFunc_AsyncSaveGameToSlot_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_6, bool CallFunc_IsValid_ReturnValue_7, const struct FInputChord& K2Node_ComponentBoundEvent_SelectedKey_23, const struct FInputChord& K2Node_ComponentBoundEvent_SelectedKey_22, const struct FInputChord& K2Node_ComponentBoundEvent_SelectedKey_21, const struct FInputChord& K2Node_ComponentBoundEvent_SelectedKey_20, const struct FInputChord& K2Node_ComponentBoundEvent_SelectedKey_19, const struct FInputChord& K2Node_ComponentBoundEvent_SelectedKey_18, const struct FInputChord& K2Node_ComponentBoundEvent_SelectedKey_17, const struct FInputChord& K2Node_ComponentBoundEvent_SelectedKey_16, const struct FInputChord& K2Node_ComponentBoundEvent_SelectedKey_15, const struct FInputChord& K2Node_ComponentBoundEvent_SelectedKey_14, const struct FInputChord& K2Node_ComponentBoundEvent_SelectedKey_13, const struct FInputChord& K2Node_ComponentBoundEvent_SelectedKey_12, const struct FInputChord& K2Node_ComponentBoundEvent_SelectedKey_11, const struct FInputChord& K2Node_ComponentBoundEvent_SelectedKey_10, const struct FInputChord& K2Node_ComponentBoundEvent_SelectedKey_9, bool K2Node_ComponentBoundEvent_bIsChecked_1, class USaveGame* K2Node_CustomEvent_SaveGame_7, bool K2Node_CustomEvent_bSuccess_7, bool K2Node_ComponentBoundEvent_bIsChecked, const struct FInputChord& K2Node_ComponentBoundEvent_SelectedKey_8, float K2Node_ComponentBoundEvent_Value, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, bool CallFunc_DoesSaveGameExist_ReturnValue, class UControls_SG_C* CallFunc_CreateSaveGameObject_ReturnValue, class UAsyncActionHandleSaveGame* CallFunc_AsyncSaveGameToSlot_ReturnValue_4, bool CallFunc_IsValid_ReturnValue_8, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, class USaveGame* K2Node_CustomEvent_SaveGame_8, bool K2Node_CustomEvent_bSuccess_8, class UPawn* CallFunc_GetOwningPlayerPawn_ReturnValue, class UB_DemoCharacter_C* K2Node_DynamicCast_AsB_Demo_Character, bool K2Node_DynamicCast_bSuccess_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_9, class USaveGame* Temp_object_Variable_8, bool K2Node_Event_IsDesignTime, bool Temp_bool_Variable_8, const struct FInputChord& CallFunc_ConstructAxisRemap_InputChord, const struct FInputChord& CallFunc_ConstructAxisRemap_InputChord_1, const struct FInputChord& CallFunc_ConstructAxisRemap_InputChord_2, const struct FInputChord& CallFunc_ConstructAxisRemap_InputChord_3, const struct FInputChord& CallFunc_ConstructActionRemap_Key, const struct FInputChord& CallFunc_ConstructActionRemap_Key_1, const struct FInputChord& CallFunc_ConstructActionRemap_Key_2, const struct FInputChord& CallFunc_ConstructActionRemap_Key_3, const struct FInputChord& CallFunc_ConstructActionRemap_Key_4, const struct FInputChord& CallFunc_ConstructActionRemap_Key_5, const struct FInputChord& CallFunc_ConstructActionRemap_Key_6, const struct FInputChord& CallFunc_ConstructActionRemap_Key_7, const struct FInputChord& CallFunc_ConstructActionRemap_Key_8, const struct FInputChord& CallFunc_ConstructActionRemap_Key_9, const struct FInputChord& K2Node_ComponentBoundEvent_SelectedKey_7, const struct FInputChord& K2Node_ComponentBoundEvent_SelectedKey_6, const struct FInputChord& K2Node_ComponentBoundEvent_SelectedKey_5, const struct FInputChord& CallFunc_ConstructActionRemap_Key_10, const struct FInputChord& CallFunc_ConstructActionRemap_Key_11, const struct FInputChord& CallFunc_ConstructActionRemap_Key_12, const struct FInputChord& CallFunc_ConstructActionRemap_Key_13, const struct FInputChord& K2Node_ComponentBoundEvent_SelectedKey_4, const struct FInputChord& K2Node_ComponentBoundEvent_SelectedKey_3, const struct FInputChord& K2Node_ComponentBoundEvent_SelectedKey_2, const struct FInputChord& K2Node_ComponentBoundEvent_SelectedKey_1, const struct FInputChord& K2Node_ComponentBoundEvent_SelectedKey, class UInputSettings* CallFunc_GetInputSettings_ReturnValue, const struct FInputChord& CallFunc_ConstructActionRemap_Key_14, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_10, float CallFunc_SetValue_InValue_ImplicitCast, double K2Node_VariableSet_Mouse_Sensitivity_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WG_Op_ControlPanel_C", "ExecuteUbergraph_WG_Op_ControlPanel");

	Params::UWG_Op_ControlPanel_C_ExecuteUbergraph_WG_Op_ControlPanel_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.K2Node_CustomEvent_SaveGame_6 = K2Node_CustomEvent_SaveGame_6;
	Parms.K2Node_CustomEvent_bSuccess_6 = K2Node_CustomEvent_bSuccess_6;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.K2Node_DynamicCast_AsControls_SG = K2Node_DynamicCast_AsControls_SG;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_AsyncLoadGameFromSlot_ReturnValue = CallFunc_AsyncLoadGameFromSlot_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CustomEvent_SaveGame_5 = K2Node_CustomEvent_SaveGame_5;
	Parms.K2Node_CustomEvent_bSuccess_5 = K2Node_CustomEvent_bSuccess_5;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.Temp_object_Variable_2 = Temp_object_Variable_2;
	Parms.K2Node_CustomEvent_SaveGame_4 = K2Node_CustomEvent_SaveGame_4;
	Parms.K2Node_CustomEvent_bSuccess_4 = K2Node_CustomEvent_bSuccess_4;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.Temp_bool_Variable_3 = Temp_bool_Variable_3;
	Parms.Temp_object_Variable_3 = Temp_object_Variable_3;
	Parms.K2Node_CustomEvent_SaveGame_3 = K2Node_CustomEvent_SaveGame_3;
	Parms.K2Node_CustomEvent_bSuccess_3 = K2Node_CustomEvent_bSuccess_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.Temp_bool_Variable_4 = Temp_bool_Variable_4;
	Parms.Temp_object_Variable_4 = Temp_object_Variable_4;
	Parms.K2Node_DynamicCast_AsControls_SG_1 = K2Node_DynamicCast_AsControls_SG_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_AsyncSaveGameToSlot_ReturnValue = CallFunc_AsyncSaveGameToSlot_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_CustomEvent_SaveGame_2 = K2Node_CustomEvent_SaveGame_2;
	Parms.K2Node_CustomEvent_bSuccess_2 = K2Node_CustomEvent_bSuccess_2;
	Parms.Temp_bool_Variable_5 = Temp_bool_Variable_5;
	Parms.Temp_object_Variable_5 = Temp_object_Variable_5;
	Parms.K2Node_DynamicCast_AsControls_SG_2 = K2Node_DynamicCast_AsControls_SG_2;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_AsyncLoadGameFromSlot_ReturnValue_1 = CallFunc_AsyncLoadGameFromSlot_ReturnValue_1;
	Parms.CallFunc_AsyncSaveGameToSlot_ReturnValue_1 = CallFunc_AsyncSaveGameToSlot_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.K2Node_CustomEvent_SaveGame_1 = K2Node_CustomEvent_SaveGame_1;
	Parms.K2Node_CustomEvent_bSuccess_1 = K2Node_CustomEvent_bSuccess_1;
	Parms.Temp_bool_Variable_6 = Temp_bool_Variable_6;
	Parms.Temp_object_Variable_6 = Temp_object_Variable_6;
	Parms.K2Node_DynamicCast_AsControls_SG_3 = K2Node_DynamicCast_AsControls_SG_3;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.CallFunc_AsyncLoadGameFromSlot_ReturnValue_2 = CallFunc_AsyncLoadGameFromSlot_ReturnValue_2;
	Parms.CallFunc_AsyncSaveGameToSlot_ReturnValue_2 = CallFunc_AsyncSaveGameToSlot_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;
	Parms.CallFunc_IsValid_ReturnValue_5 = CallFunc_IsValid_ReturnValue_5;
	Parms.K2Node_CreateDelegate_OutputDelegate_6 = K2Node_CreateDelegate_OutputDelegate_6;
	Parms.K2Node_CustomEvent_SaveGame = K2Node_CustomEvent_SaveGame;
	Parms.K2Node_CustomEvent_bSuccess = K2Node_CustomEvent_bSuccess;
	Parms.Temp_bool_Variable_7 = Temp_bool_Variable_7;
	Parms.Temp_object_Variable_7 = Temp_object_Variable_7;
	Parms.K2Node_DynamicCast_AsControls_SG_4 = K2Node_DynamicCast_AsControls_SG_4;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;
	Parms.CallFunc_AsyncLoadGameFromSlot_ReturnValue_3 = CallFunc_AsyncLoadGameFromSlot_ReturnValue_3;
	Parms.CallFunc_AsyncSaveGameToSlot_ReturnValue_3 = CallFunc_AsyncSaveGameToSlot_ReturnValue_3;
	Parms.CallFunc_IsValid_ReturnValue_6 = CallFunc_IsValid_ReturnValue_6;
	Parms.CallFunc_IsValid_ReturnValue_7 = CallFunc_IsValid_ReturnValue_7;
	Parms.K2Node_ComponentBoundEvent_SelectedKey_23 = K2Node_ComponentBoundEvent_SelectedKey_23;
	Parms.K2Node_ComponentBoundEvent_SelectedKey_22 = K2Node_ComponentBoundEvent_SelectedKey_22;
	Parms.K2Node_ComponentBoundEvent_SelectedKey_21 = K2Node_ComponentBoundEvent_SelectedKey_21;
	Parms.K2Node_ComponentBoundEvent_SelectedKey_20 = K2Node_ComponentBoundEvent_SelectedKey_20;
	Parms.K2Node_ComponentBoundEvent_SelectedKey_19 = K2Node_ComponentBoundEvent_SelectedKey_19;
	Parms.K2Node_ComponentBoundEvent_SelectedKey_18 = K2Node_ComponentBoundEvent_SelectedKey_18;
	Parms.K2Node_ComponentBoundEvent_SelectedKey_17 = K2Node_ComponentBoundEvent_SelectedKey_17;
	Parms.K2Node_ComponentBoundEvent_SelectedKey_16 = K2Node_ComponentBoundEvent_SelectedKey_16;
	Parms.K2Node_ComponentBoundEvent_SelectedKey_15 = K2Node_ComponentBoundEvent_SelectedKey_15;
	Parms.K2Node_ComponentBoundEvent_SelectedKey_14 = K2Node_ComponentBoundEvent_SelectedKey_14;
	Parms.K2Node_ComponentBoundEvent_SelectedKey_13 = K2Node_ComponentBoundEvent_SelectedKey_13;
	Parms.K2Node_ComponentBoundEvent_SelectedKey_12 = K2Node_ComponentBoundEvent_SelectedKey_12;
	Parms.K2Node_ComponentBoundEvent_SelectedKey_11 = K2Node_ComponentBoundEvent_SelectedKey_11;
	Parms.K2Node_ComponentBoundEvent_SelectedKey_10 = K2Node_ComponentBoundEvent_SelectedKey_10;
	Parms.K2Node_ComponentBoundEvent_SelectedKey_9 = K2Node_ComponentBoundEvent_SelectedKey_9;
	Parms.K2Node_ComponentBoundEvent_bIsChecked_1 = K2Node_ComponentBoundEvent_bIsChecked_1;
	Parms.K2Node_CustomEvent_SaveGame_7 = K2Node_CustomEvent_SaveGame_7;
	Parms.K2Node_CustomEvent_bSuccess_7 = K2Node_CustomEvent_bSuccess_7;
	Parms.K2Node_ComponentBoundEvent_bIsChecked = K2Node_ComponentBoundEvent_bIsChecked;
	Parms.K2Node_ComponentBoundEvent_SelectedKey_8 = K2Node_ComponentBoundEvent_SelectedKey_8;
	Parms.K2Node_ComponentBoundEvent_Value = K2Node_ComponentBoundEvent_Value;
	Parms.K2Node_CreateDelegate_OutputDelegate_7 = K2Node_CreateDelegate_OutputDelegate_7;
	Parms.CallFunc_DoesSaveGameExist_ReturnValue = CallFunc_DoesSaveGameExist_ReturnValue;
	Parms.CallFunc_CreateSaveGameObject_ReturnValue = CallFunc_CreateSaveGameObject_ReturnValue;
	Parms.CallFunc_AsyncSaveGameToSlot_ReturnValue_4 = CallFunc_AsyncSaveGameToSlot_ReturnValue_4;
	Parms.CallFunc_IsValid_ReturnValue_8 = CallFunc_IsValid_ReturnValue_8;
	Parms.K2Node_CreateDelegate_OutputDelegate_8 = K2Node_CreateDelegate_OutputDelegate_8;
	Parms.K2Node_CustomEvent_SaveGame_8 = K2Node_CustomEvent_SaveGame_8;
	Parms.K2Node_CustomEvent_bSuccess_8 = K2Node_CustomEvent_bSuccess_8;
	Parms.CallFunc_GetOwningPlayerPawn_ReturnValue = CallFunc_GetOwningPlayerPawn_ReturnValue;
	Parms.K2Node_DynamicCast_AsB_Demo_Character = K2Node_DynamicCast_AsB_Demo_Character;
	Parms.K2Node_DynamicCast_bSuccess_5 = K2Node_DynamicCast_bSuccess_5;
	Parms.K2Node_CreateDelegate_OutputDelegate_9 = K2Node_CreateDelegate_OutputDelegate_9;
	Parms.Temp_object_Variable_8 = Temp_object_Variable_8;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.Temp_bool_Variable_8 = Temp_bool_Variable_8;
	Parms.CallFunc_ConstructAxisRemap_InputChord = CallFunc_ConstructAxisRemap_InputChord;
	Parms.CallFunc_ConstructAxisRemap_InputChord_1 = CallFunc_ConstructAxisRemap_InputChord_1;
	Parms.CallFunc_ConstructAxisRemap_InputChord_2 = CallFunc_ConstructAxisRemap_InputChord_2;
	Parms.CallFunc_ConstructAxisRemap_InputChord_3 = CallFunc_ConstructAxisRemap_InputChord_3;
	Parms.CallFunc_ConstructActionRemap_Key = CallFunc_ConstructActionRemap_Key;
	Parms.CallFunc_ConstructActionRemap_Key_1 = CallFunc_ConstructActionRemap_Key_1;
	Parms.CallFunc_ConstructActionRemap_Key_2 = CallFunc_ConstructActionRemap_Key_2;
	Parms.CallFunc_ConstructActionRemap_Key_3 = CallFunc_ConstructActionRemap_Key_3;
	Parms.CallFunc_ConstructActionRemap_Key_4 = CallFunc_ConstructActionRemap_Key_4;
	Parms.CallFunc_ConstructActionRemap_Key_5 = CallFunc_ConstructActionRemap_Key_5;
	Parms.CallFunc_ConstructActionRemap_Key_6 = CallFunc_ConstructActionRemap_Key_6;
	Parms.CallFunc_ConstructActionRemap_Key_7 = CallFunc_ConstructActionRemap_Key_7;
	Parms.CallFunc_ConstructActionRemap_Key_8 = CallFunc_ConstructActionRemap_Key_8;
	Parms.CallFunc_ConstructActionRemap_Key_9 = CallFunc_ConstructActionRemap_Key_9;
	Parms.K2Node_ComponentBoundEvent_SelectedKey_7 = K2Node_ComponentBoundEvent_SelectedKey_7;
	Parms.K2Node_ComponentBoundEvent_SelectedKey_6 = K2Node_ComponentBoundEvent_SelectedKey_6;
	Parms.K2Node_ComponentBoundEvent_SelectedKey_5 = K2Node_ComponentBoundEvent_SelectedKey_5;
	Parms.CallFunc_ConstructActionRemap_Key_10 = CallFunc_ConstructActionRemap_Key_10;
	Parms.CallFunc_ConstructActionRemap_Key_11 = CallFunc_ConstructActionRemap_Key_11;
	Parms.CallFunc_ConstructActionRemap_Key_12 = CallFunc_ConstructActionRemap_Key_12;
	Parms.CallFunc_ConstructActionRemap_Key_13 = CallFunc_ConstructActionRemap_Key_13;
	Parms.K2Node_ComponentBoundEvent_SelectedKey_4 = K2Node_ComponentBoundEvent_SelectedKey_4;
	Parms.K2Node_ComponentBoundEvent_SelectedKey_3 = K2Node_ComponentBoundEvent_SelectedKey_3;
	Parms.K2Node_ComponentBoundEvent_SelectedKey_2 = K2Node_ComponentBoundEvent_SelectedKey_2;
	Parms.K2Node_ComponentBoundEvent_SelectedKey_1 = K2Node_ComponentBoundEvent_SelectedKey_1;
	Parms.K2Node_ComponentBoundEvent_SelectedKey = K2Node_ComponentBoundEvent_SelectedKey;
	Parms.CallFunc_GetInputSettings_ReturnValue = CallFunc_GetInputSettings_ReturnValue;
	Parms.CallFunc_ConstructActionRemap_Key_14 = CallFunc_ConstructActionRemap_Key_14;
	Parms.K2Node_CreateDelegate_OutputDelegate_10 = K2Node_CreateDelegate_OutputDelegate_10;
	Parms.CallFunc_SetValue_InValue_ImplicitCast = CallFunc_SetValue_InValue_ImplicitCast;
	Parms.K2Node_VariableSet_Mouse_Sensitivity_ImplicitCast = K2Node_VariableSet_Mouse_Sensitivity_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}

}


