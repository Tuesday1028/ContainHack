#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass CharacterStat.CharacterStat_C
// (None)

class UClass* UCharacterStat_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CharacterStat_C");

	return Clss;
}


// CharacterStat_C CharacterStat.Default__CharacterStat_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCharacterStat_C* UCharacterStat_C::GetDefaultObj()
{
	static class UCharacterStat_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCharacterStat_C*>(UCharacterStat_C::StaticClass()->DefaultObject);

	return Default;
}


// Function CharacterStat.CharacterStat_C.Stat
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Heavy0                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        HeavyText                                                        (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               Resistance1                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        ResistanceText                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               Protection2                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        ProtectionText                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               Magazine3                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        MagazineText                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               StimPack4                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        StimPackText                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
// TArray<bool>                       Renkler                                                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     (None)
// bool                               CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_Get_Item_2                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_Get_Item_3                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_Get_Item_4                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_1                                   (None)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_2                                   (None)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_3                                   (None)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_4                                   (None)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_5                                   (None)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_6                                   (None)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_7                                   (None)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_8                                   (None)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_9                                   (None)

void UCharacterStat_C::Stat(bool Heavy0, class FText HeavyText, bool Resistance1, class FText ResistanceText, bool Protection2, class FText ProtectionText, bool Magazine3, class FText MagazineText, bool StimPack4, class FText StimPackText, TArray<bool>& Renkler, const struct FSlateColor& K2Node_MakeStruct_SlateColor, bool CallFunc_Array_Get_Item, bool CallFunc_Array_Get_Item_1, bool CallFunc_Array_Get_Item_2, bool CallFunc_Array_Get_Item_3, bool CallFunc_Array_Get_Item_4, const struct FSlateColor& K2Node_MakeStruct_SlateColor_1, const struct FSlateColor& K2Node_MakeStruct_SlateColor_2, const struct FSlateColor& K2Node_MakeStruct_SlateColor_3, const struct FSlateColor& K2Node_MakeStruct_SlateColor_4, const struct FSlateColor& K2Node_MakeStruct_SlateColor_5, const struct FSlateColor& K2Node_MakeStruct_SlateColor_6, const struct FSlateColor& K2Node_MakeStruct_SlateColor_7, const struct FSlateColor& K2Node_MakeStruct_SlateColor_8, const struct FSlateColor& K2Node_MakeStruct_SlateColor_9)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CharacterStat_C", "Stat");

	Params::UCharacterStat_C_Stat_Params Parms{};

	Parms.Heavy0 = Heavy0;
	Parms.HeavyText = HeavyText;
	Parms.Resistance1 = Resistance1;
	Parms.ResistanceText = ResistanceText;
	Parms.Protection2 = Protection2;
	Parms.ProtectionText = ProtectionText;
	Parms.Magazine3 = Magazine3;
	Parms.MagazineText = MagazineText;
	Parms.StimPack4 = StimPack4;
	Parms.StimPackText = StimPackText;
	Parms.Renkler = Renkler;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_Array_Get_Item_3 = CallFunc_Array_Get_Item_3;
	Parms.CallFunc_Array_Get_Item_4 = CallFunc_Array_Get_Item_4;
	Parms.K2Node_MakeStruct_SlateColor_1 = K2Node_MakeStruct_SlateColor_1;
	Parms.K2Node_MakeStruct_SlateColor_2 = K2Node_MakeStruct_SlateColor_2;
	Parms.K2Node_MakeStruct_SlateColor_3 = K2Node_MakeStruct_SlateColor_3;
	Parms.K2Node_MakeStruct_SlateColor_4 = K2Node_MakeStruct_SlateColor_4;
	Parms.K2Node_MakeStruct_SlateColor_5 = K2Node_MakeStruct_SlateColor_5;
	Parms.K2Node_MakeStruct_SlateColor_6 = K2Node_MakeStruct_SlateColor_6;
	Parms.K2Node_MakeStruct_SlateColor_7 = K2Node_MakeStruct_SlateColor_7;
	Parms.K2Node_MakeStruct_SlateColor_8 = K2Node_MakeStruct_SlateColor_8;
	Parms.K2Node_MakeStruct_SlateColor_9 = K2Node_MakeStruct_SlateColor_9;

	UObject::ProcessEvent(Func, &Parms);

}

}


