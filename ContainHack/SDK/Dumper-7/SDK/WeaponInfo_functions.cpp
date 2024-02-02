#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WeaponInfo.WeaponInfo_C
// (None)

class UClass* UWeaponInfo_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WeaponInfo_C");

	return Clss;
}


// WeaponInfo_C WeaponInfo.Default__WeaponInfo_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWeaponInfo_C* UWeaponInfo_C::GetDefaultObj()
{
	static class UWeaponInfo_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWeaponInfo_C*>(UWeaponInfo_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WeaponInfo.WeaponInfo_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWeaponInfo_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WeaponInfo_C", "Tick");

	Params::UWeaponInfo_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WeaponInfo.WeaponInfo_C.ExecuteUbergraph_WeaponInfo
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InDeltaTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCharacter*                  CallFunc_GetPlayerCharacter_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UB_DemoCharacter_C*          K2Node_DynamicCast_AsB_Demo_Character                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Array_Get_Item                                          (None)
// class FText                        CallFunc_Array_Get_Item_1                                        (None)
// bool                               CallFunc_EqualEqual_TextText_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Array_Get_Item_2                                        (None)
// class FText                        CallFunc_Array_Get_Item_3                                        (None)
// class FText                        CallFunc_Array_Get_Item_4                                        (None)
// class FText                        CallFunc_Array_Get_Item_5                                        (None)
// class FText                        CallFunc_Array_Get_Item_6                                        (None)
// class FText                        CallFunc_Array_Get_Item_7                                        (None)
// class FText                        CallFunc_Array_Get_Item_8                                        (None)
// class FText                        CallFunc_Array_Get_Item_9                                        (None)
// class FText                        CallFunc_Array_Get_Item_10                                       (None)
// class FText                        CallFunc_Array_Get_Item_11                                       (None)
// class FText                        CallFunc_Array_Get_Item_12                                       (None)
// class FText                        CallFunc_Array_Get_Item_13                                       (None)
// class FText                        CallFunc_Array_Get_Item_14                                       (None)
// class FText                        CallFunc_Array_Get_Item_15                                       (None)
// class FText                        CallFunc_Array_Get_Item_16                                       (None)
// class FText                        CallFunc_Array_Get_Item_17                                       (None)
// bool                               CallFunc_EqualEqual_TextText_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_TextText_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_TextText_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_TextText_ReturnValue_4                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_TextText_ReturnValue_5                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_TextText_ReturnValue_6                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_TextText_ReturnValue_7                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_TextText_ReturnValue_8                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_TextText_ReturnValue_9                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_TextText_ReturnValue_10                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_TextText_ReturnValue_11                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_TextText_ReturnValue_12                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_TextText_ReturnValue_13                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_TextText_ReturnValue_14                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_TextText_ReturnValue_15                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_TextText_ReturnValue_16                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_TextText_ReturnValue_17                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWeaponInfo_C::ExecuteUbergraph_WeaponInfo(int32 EntryPoint, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, class UCharacter* CallFunc_GetPlayerCharacter_ReturnValue, class UB_DemoCharacter_C* K2Node_DynamicCast_AsB_Demo_Character, bool K2Node_DynamicCast_bSuccess, class FText CallFunc_Array_Get_Item, class FText CallFunc_Array_Get_Item_1, bool CallFunc_EqualEqual_TextText_ReturnValue, class FText CallFunc_Array_Get_Item_2, class FText CallFunc_Array_Get_Item_3, class FText CallFunc_Array_Get_Item_4, class FText CallFunc_Array_Get_Item_5, class FText CallFunc_Array_Get_Item_6, class FText CallFunc_Array_Get_Item_7, class FText CallFunc_Array_Get_Item_8, class FText CallFunc_Array_Get_Item_9, class FText CallFunc_Array_Get_Item_10, class FText CallFunc_Array_Get_Item_11, class FText CallFunc_Array_Get_Item_12, class FText CallFunc_Array_Get_Item_13, class FText CallFunc_Array_Get_Item_14, class FText CallFunc_Array_Get_Item_15, class FText CallFunc_Array_Get_Item_16, class FText CallFunc_Array_Get_Item_17, bool CallFunc_EqualEqual_TextText_ReturnValue_1, bool CallFunc_EqualEqual_TextText_ReturnValue_2, bool CallFunc_EqualEqual_TextText_ReturnValue_3, bool CallFunc_EqualEqual_TextText_ReturnValue_4, bool CallFunc_EqualEqual_TextText_ReturnValue_5, bool CallFunc_EqualEqual_TextText_ReturnValue_6, bool CallFunc_EqualEqual_TextText_ReturnValue_7, bool CallFunc_EqualEqual_TextText_ReturnValue_8, bool CallFunc_EqualEqual_TextText_ReturnValue_9, bool CallFunc_EqualEqual_TextText_ReturnValue_10, bool CallFunc_EqualEqual_TextText_ReturnValue_11, bool CallFunc_EqualEqual_TextText_ReturnValue_12, bool CallFunc_EqualEqual_TextText_ReturnValue_13, bool CallFunc_EqualEqual_TextText_ReturnValue_14, bool CallFunc_EqualEqual_TextText_ReturnValue_15, bool CallFunc_EqualEqual_TextText_ReturnValue_16, bool CallFunc_EqualEqual_TextText_ReturnValue_17)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WeaponInfo_C", "ExecuteUbergraph_WeaponInfo");

	Params::UWeaponInfo_C_ExecuteUbergraph_WeaponInfo_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;
	Parms.CallFunc_GetPlayerCharacter_ReturnValue = CallFunc_GetPlayerCharacter_ReturnValue;
	Parms.K2Node_DynamicCast_AsB_Demo_Character = K2Node_DynamicCast_AsB_Demo_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_EqualEqual_TextText_ReturnValue = CallFunc_EqualEqual_TextText_ReturnValue;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_Array_Get_Item_3 = CallFunc_Array_Get_Item_3;
	Parms.CallFunc_Array_Get_Item_4 = CallFunc_Array_Get_Item_4;
	Parms.CallFunc_Array_Get_Item_5 = CallFunc_Array_Get_Item_5;
	Parms.CallFunc_Array_Get_Item_6 = CallFunc_Array_Get_Item_6;
	Parms.CallFunc_Array_Get_Item_7 = CallFunc_Array_Get_Item_7;
	Parms.CallFunc_Array_Get_Item_8 = CallFunc_Array_Get_Item_8;
	Parms.CallFunc_Array_Get_Item_9 = CallFunc_Array_Get_Item_9;
	Parms.CallFunc_Array_Get_Item_10 = CallFunc_Array_Get_Item_10;
	Parms.CallFunc_Array_Get_Item_11 = CallFunc_Array_Get_Item_11;
	Parms.CallFunc_Array_Get_Item_12 = CallFunc_Array_Get_Item_12;
	Parms.CallFunc_Array_Get_Item_13 = CallFunc_Array_Get_Item_13;
	Parms.CallFunc_Array_Get_Item_14 = CallFunc_Array_Get_Item_14;
	Parms.CallFunc_Array_Get_Item_15 = CallFunc_Array_Get_Item_15;
	Parms.CallFunc_Array_Get_Item_16 = CallFunc_Array_Get_Item_16;
	Parms.CallFunc_Array_Get_Item_17 = CallFunc_Array_Get_Item_17;
	Parms.CallFunc_EqualEqual_TextText_ReturnValue_1 = CallFunc_EqualEqual_TextText_ReturnValue_1;
	Parms.CallFunc_EqualEqual_TextText_ReturnValue_2 = CallFunc_EqualEqual_TextText_ReturnValue_2;
	Parms.CallFunc_EqualEqual_TextText_ReturnValue_3 = CallFunc_EqualEqual_TextText_ReturnValue_3;
	Parms.CallFunc_EqualEqual_TextText_ReturnValue_4 = CallFunc_EqualEqual_TextText_ReturnValue_4;
	Parms.CallFunc_EqualEqual_TextText_ReturnValue_5 = CallFunc_EqualEqual_TextText_ReturnValue_5;
	Parms.CallFunc_EqualEqual_TextText_ReturnValue_6 = CallFunc_EqualEqual_TextText_ReturnValue_6;
	Parms.CallFunc_EqualEqual_TextText_ReturnValue_7 = CallFunc_EqualEqual_TextText_ReturnValue_7;
	Parms.CallFunc_EqualEqual_TextText_ReturnValue_8 = CallFunc_EqualEqual_TextText_ReturnValue_8;
	Parms.CallFunc_EqualEqual_TextText_ReturnValue_9 = CallFunc_EqualEqual_TextText_ReturnValue_9;
	Parms.CallFunc_EqualEqual_TextText_ReturnValue_10 = CallFunc_EqualEqual_TextText_ReturnValue_10;
	Parms.CallFunc_EqualEqual_TextText_ReturnValue_11 = CallFunc_EqualEqual_TextText_ReturnValue_11;
	Parms.CallFunc_EqualEqual_TextText_ReturnValue_12 = CallFunc_EqualEqual_TextText_ReturnValue_12;
	Parms.CallFunc_EqualEqual_TextText_ReturnValue_13 = CallFunc_EqualEqual_TextText_ReturnValue_13;
	Parms.CallFunc_EqualEqual_TextText_ReturnValue_14 = CallFunc_EqualEqual_TextText_ReturnValue_14;
	Parms.CallFunc_EqualEqual_TextText_ReturnValue_15 = CallFunc_EqualEqual_TextText_ReturnValue_15;
	Parms.CallFunc_EqualEqual_TextText_ReturnValue_16 = CallFunc_EqualEqual_TextText_ReturnValue_16;
	Parms.CallFunc_EqualEqual_TextText_ReturnValue_17 = CallFunc_EqualEqual_TextText_ReturnValue_17;

	UObject::ProcessEvent(Func, &Parms);

}

}


