#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass B_FlipSightRear_Parent.B_FlipSightRear_Parent_C
// (Actor)

class UClass* UB_FlipSightRear_Parent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("B_FlipSightRear_Parent_C");

	return Clss;
}


// B_FlipSightRear_Parent_C B_FlipSightRear_Parent.Default__B_FlipSightRear_Parent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UB_FlipSightRear_Parent_C* UB_FlipSightRear_Parent_C::GetDefaultObj()
{
	static class UB_FlipSightRear_Parent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UB_FlipSightRear_Parent_C*>(UB_FlipSightRear_Parent_C::StaticClass()->DefaultObject);

	return Default;
}


// Function B_FlipSightRear_Parent.B_FlipSightRear_Parent_C.CustomAction
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsCustomActioned                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UB_FlipSightRear_Parent_C::CustomAction(bool IsCustomActioned)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_FlipSightRear_Parent_C", "CustomAction");

	Params::UB_FlipSightRear_Parent_C_CustomAction_Params Parms{};

	Parms.IsCustomActioned = IsCustomActioned;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_FlipSightRear_Parent.B_FlipSightRear_Parent_C.ExecuteUbergraph_B_FlipSightRear_Parent
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FAimpoint                   CallFunc_Array_Get_Item                                          (NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsCustomActioned                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FAimpoint                   K2Node_MakeStruct_Aimpoint                                       (NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimInstance*               CallFunc_GetAnimInstance_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAB_FlipSightRear_C*         K2Node_DynamicCast_AsAB_Flip_Sight_Rear                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UB_FlipSightRear_Parent_C::ExecuteUbergraph_B_FlipSightRear_Parent(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, bool CallFunc_HasAuthority_ReturnValue, const struct FAimpoint& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool K2Node_Event_IsCustomActioned, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Not_PreBool_ReturnValue, const struct FAimpoint& K2Node_MakeStruct_Aimpoint, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, class UAB_FlipSightRear_C* K2Node_DynamicCast_AsAB_Flip_Sight_Rear, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_FlipSightRear_Parent_C", "ExecuteUbergraph_B_FlipSightRear_Parent");

	Params::UB_FlipSightRear_Parent_C_ExecuteUbergraph_B_FlipSightRear_Parent_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.K2Node_Event_IsCustomActioned = K2Node_Event_IsCustomActioned;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_MakeStruct_Aimpoint = K2Node_MakeStruct_Aimpoint;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetAnimInstance_ReturnValue = CallFunc_GetAnimInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsAB_Flip_Sight_Rear = K2Node_DynamicCast_AsAB_Flip_Sight_Rear;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}

}


