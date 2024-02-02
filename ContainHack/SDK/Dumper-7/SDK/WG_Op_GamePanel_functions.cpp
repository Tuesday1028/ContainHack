#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WG_Op_GamePanel.WG_Op_GamePanel_C
// (None)

class UClass* UWG_Op_GamePanel_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WG_Op_GamePanel_C");

	return Clss;
}


// WG_Op_GamePanel_C WG_Op_GamePanel.Default__WG_Op_GamePanel_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWG_Op_GamePanel_C* UWG_Op_GamePanel_C::GetDefaultObj()
{
	static class UWG_Op_GamePanel_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWG_Op_GamePanel_C*>(UWG_Op_GamePanel_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WG_Op_GamePanel.WG_Op_GamePanel_C.Completed_0207022E43F32552EE18CAACDE849409
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class USaveGame*                   SaveGame                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               bSuccess                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWG_Op_GamePanel_C::Completed_0207022E43F32552EE18CAACDE849409(class USaveGame* SaveGame, bool bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WG_Op_GamePanel_C", "Completed_0207022E43F32552EE18CAACDE849409");

	Params::UWG_Op_GamePanel_C_Completed_0207022E43F32552EE18CAACDE849409_Params Parms{};

	Parms.SaveGame = SaveGame;
	Parms.bSuccess = bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WG_Op_GamePanel.WG_Op_GamePanel_C.Completed_C159D4F1454DE29044D7E69F57C576CA
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class USaveGame*                   SaveGame                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               bSuccess                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWG_Op_GamePanel_C::Completed_C159D4F1454DE29044D7E69F57C576CA(class USaveGame* SaveGame, bool bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WG_Op_GamePanel_C", "Completed_C159D4F1454DE29044D7E69F57C576CA");

	Params::UWG_Op_GamePanel_C_Completed_C159D4F1454DE29044D7E69F57C576CA_Params Parms{};

	Parms.SaveGame = SaveGame;
	Parms.bSuccess = bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WG_Op_GamePanel.WG_Op_GamePanel_C.Completed_F4AF4D514685DBBE633CCBBB011151D4
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class USaveGame*                   SaveGame                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               bSuccess                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWG_Op_GamePanel_C::Completed_F4AF4D514685DBBE633CCBBB011151D4(class USaveGame* SaveGame, bool bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WG_Op_GamePanel_C", "Completed_F4AF4D514685DBBE633CCBBB011151D4");

	Params::UWG_Op_GamePanel_C_Completed_F4AF4D514685DBBE633CCBBB011151D4_Params Parms{};

	Parms.SaveGame = SaveGame;
	Parms.bSuccess = bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WG_Op_GamePanel.WG_Op_GamePanel_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWG_Op_GamePanel_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WG_Op_GamePanel_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WG_Op_GamePanel.WG_Op_GamePanel_C.BndEvt__WG_Op_GamePanel_ComboBoxString_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                      SelectedItem                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// enum class ESelectInfo             SelectionType                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWG_Op_GamePanel_C::BndEvt__WG_Op_GamePanel_ComboBoxString_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, enum class ESelectInfo SelectionType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WG_Op_GamePanel_C", "BndEvt__WG_Op_GamePanel_ComboBoxString_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature");

	Params::UWG_Op_GamePanel_C_BndEvt__WG_Op_GamePanel_ComboBoxString_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature_Params Parms{};

	Parms.SelectedItem = SelectedItem;
	Parms.SelectionType = SelectionType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WG_Op_GamePanel.WG_Op_GamePanel_C.Reload
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWG_Op_GamePanel_C::Reload()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WG_Op_GamePanel_C", "Reload");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WG_Op_GamePanel.WG_Op_GamePanel_C.ResetDoOnce
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWG_Op_GamePanel_C::ResetDoOnce()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WG_Op_GamePanel_C", "ResetDoOnce");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WG_Op_GamePanel.WG_Op_GamePanel_C.ExecuteUbergraph_WG_Op_GamePanel
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_MakeLiteralText_ReturnValue                             (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class USaveGame*                   K2Node_CustomEvent_SaveGame_2                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USaveGame*                   Temp_object_Variable                                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class USaveGame*                   K2Node_CustomEvent_SaveGame_1                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USaveGame*                   Temp_object_Variable_1                                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class USettings_SG_C*              K2Node_DynamicCast_AsSettings_SG                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAsyncActionHandleSaveGame*  CallFunc_AsyncLoadGameFromSlot_ReturnValue                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class USaveGame*                   K2Node_CustomEvent_SaveGame                                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USaveGame*                   Temp_object_Variable_2                                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_ComponentBoundEvent_SelectedItem                          (ZeroConstructor, HasGetValueTypeHash)
// enum class ESelectInfo             K2Node_ComponentBoundEvent_SelectionType                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StriStri_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StriStri_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StriStri_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetCurrentCulture_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetCurrentCulture_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetCurrentCulture_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetCurrentCulture_ReturnValue_3                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetCurrentCulture_ReturnValue_4                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetCurrentCulture_ReturnValue_5                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetCurrentCulture_ReturnValue_6                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USettings_SG_C*              CallFunc_CreateSaveGameObject_ReturnValue                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetCurrentCulture_ReturnValue_7                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAsyncActionHandleSaveGame*  CallFunc_AsyncSaveGameToSlot_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetCurrentCulture_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StriStri_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StriStri_ReturnValue_4                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StriStri_ReturnValue_5                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StriStri_ReturnValue_6                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StriStri_ReturnValue_7                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StriStri_ReturnValue_8                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StriStri_ReturnValue_9                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StriStri_ReturnValue_10                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_DoesSaveGameExist_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_1                           (None)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_2                           (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_1                         (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_2                         (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_3                           (None)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_4                           (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_3                         (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_4                         (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_5                           (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_5                         (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_6                           (None)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_7                           (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_6                         (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_7                         (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_8                           (None)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_9                           (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_8                         (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_9                         (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetCurrentCulture_ReturnValue_1                         (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StriStri_ReturnValue_11                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StriStri_ReturnValue_12                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StriStri_ReturnValue_13                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StriStri_ReturnValue_14                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StriStri_ReturnValue_15                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StriStri_ReturnValue_16                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StriStri_ReturnValue_17                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_10                          (None)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_11                          (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_10                        (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_11                        (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_12                          (None)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_13                          (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_12                        (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_13                        (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_14                          (None)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_15                          (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_14                        (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_15                        (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_16                          (None)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_17                          (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_16                        (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_17                        (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StriStri_ReturnValue_18                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_18                          (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_18                        (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_19                          (None)
// bool                               CallFunc_EqualEqual_StriStri_ReturnValue_19                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_19                        (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StriStri_ReturnValue_20                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_20                          (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_20                        (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_21                          (None)
// bool                               CallFunc_EqualEqual_StriStri_ReturnValue_21                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_21                        (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StriStri_ReturnValue_22                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAsyncActionHandleSaveGame*  CallFunc_AsyncSaveGameToSlot_ReturnValue_1                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWG_Op_GamePanel_C::ExecuteUbergraph_WG_Op_GamePanel(int32 EntryPoint, class FText CallFunc_MakeLiteralText_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class USaveGame* K2Node_CustomEvent_SaveGame_2, bool K2Node_CustomEvent_bSuccess_2, bool Temp_bool_Variable, class USaveGame* Temp_object_Variable, class USaveGame* K2Node_CustomEvent_SaveGame_1, bool K2Node_CustomEvent_bSuccess_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool Temp_bool_Variable_1, class USaveGame* Temp_object_Variable_1, class USettings_SG_C* K2Node_DynamicCast_AsSettings_SG, bool K2Node_DynamicCast_bSuccess, class UAsyncActionHandleSaveGame* CallFunc_AsyncLoadGameFromSlot_ReturnValue, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class USaveGame* K2Node_CustomEvent_SaveGame, bool K2Node_CustomEvent_bSuccess, bool Temp_bool_Variable_2, class USaveGame* Temp_object_Variable_2, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_IsClosed_Variable, const class FString& K2Node_ComponentBoundEvent_SelectedItem, enum class ESelectInfo K2Node_ComponentBoundEvent_SelectionType, bool CallFunc_EqualEqual_StriStri_ReturnValue, bool CallFunc_EqualEqual_StriStri_ReturnValue_1, bool CallFunc_EqualEqual_StriStri_ReturnValue_2, bool CallFunc_SetCurrentCulture_ReturnValue, bool CallFunc_SetCurrentCulture_ReturnValue_1, bool CallFunc_SetCurrentCulture_ReturnValue_2, bool CallFunc_SetCurrentCulture_ReturnValue_3, bool CallFunc_SetCurrentCulture_ReturnValue_4, bool CallFunc_SetCurrentCulture_ReturnValue_5, bool CallFunc_SetCurrentCulture_ReturnValue_6, class USettings_SG_C* CallFunc_CreateSaveGameObject_ReturnValue, bool CallFunc_SetCurrentCulture_ReturnValue_7, class UAsyncActionHandleSaveGame* CallFunc_AsyncSaveGameToSlot_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const class FString& CallFunc_GetCurrentCulture_ReturnValue, bool CallFunc_EqualEqual_StriStri_ReturnValue_3, bool CallFunc_EqualEqual_StriStri_ReturnValue_4, bool CallFunc_EqualEqual_StriStri_ReturnValue_5, bool CallFunc_EqualEqual_StriStri_ReturnValue_6, bool CallFunc_EqualEqual_StriStri_ReturnValue_7, bool CallFunc_EqualEqual_StriStri_ReturnValue_8, bool CallFunc_EqualEqual_StriStri_ReturnValue_9, bool CallFunc_EqualEqual_StriStri_ReturnValue_10, bool CallFunc_DoesSaveGameExist_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue_1, class FText CallFunc_MakeLiteralText_ReturnValue_2, const class FString& CallFunc_Conv_TextToString_ReturnValue_1, const class FString& CallFunc_Conv_TextToString_ReturnValue_2, class FText CallFunc_MakeLiteralText_ReturnValue_3, class FText CallFunc_MakeLiteralText_ReturnValue_4, const class FString& CallFunc_Conv_TextToString_ReturnValue_3, const class FString& CallFunc_Conv_TextToString_ReturnValue_4, class FText CallFunc_MakeLiteralText_ReturnValue_5, const class FString& CallFunc_Conv_TextToString_ReturnValue_5, class FText CallFunc_MakeLiteralText_ReturnValue_6, class FText CallFunc_MakeLiteralText_ReturnValue_7, const class FString& CallFunc_Conv_TextToString_ReturnValue_6, const class FString& CallFunc_Conv_TextToString_ReturnValue_7, class FText CallFunc_MakeLiteralText_ReturnValue_8, class FText CallFunc_MakeLiteralText_ReturnValue_9, const class FString& CallFunc_Conv_TextToString_ReturnValue_8, const class FString& CallFunc_Conv_TextToString_ReturnValue_9, const class FString& CallFunc_GetCurrentCulture_ReturnValue_1, bool CallFunc_EqualEqual_StriStri_ReturnValue_11, bool CallFunc_EqualEqual_StriStri_ReturnValue_12, bool CallFunc_EqualEqual_StriStri_ReturnValue_13, bool CallFunc_EqualEqual_StriStri_ReturnValue_14, bool CallFunc_EqualEqual_StriStri_ReturnValue_15, bool CallFunc_EqualEqual_StriStri_ReturnValue_16, bool CallFunc_EqualEqual_StriStri_ReturnValue_17, class FText CallFunc_MakeLiteralText_ReturnValue_10, class FText CallFunc_MakeLiteralText_ReturnValue_11, const class FString& CallFunc_Conv_TextToString_ReturnValue_10, const class FString& CallFunc_Conv_TextToString_ReturnValue_11, class FText CallFunc_MakeLiteralText_ReturnValue_12, class FText CallFunc_MakeLiteralText_ReturnValue_13, const class FString& CallFunc_Conv_TextToString_ReturnValue_12, const class FString& CallFunc_Conv_TextToString_ReturnValue_13, class FText CallFunc_MakeLiteralText_ReturnValue_14, class FText CallFunc_MakeLiteralText_ReturnValue_15, const class FString& CallFunc_Conv_TextToString_ReturnValue_14, const class FString& CallFunc_Conv_TextToString_ReturnValue_15, class FText CallFunc_MakeLiteralText_ReturnValue_16, class FText CallFunc_MakeLiteralText_ReturnValue_17, const class FString& CallFunc_Conv_TextToString_ReturnValue_16, const class FString& CallFunc_Conv_TextToString_ReturnValue_17, bool CallFunc_EqualEqual_StriStri_ReturnValue_18, class FText CallFunc_MakeLiteralText_ReturnValue_18, const class FString& CallFunc_Conv_TextToString_ReturnValue_18, class FText CallFunc_MakeLiteralText_ReturnValue_19, bool CallFunc_EqualEqual_StriStri_ReturnValue_19, const class FString& CallFunc_Conv_TextToString_ReturnValue_19, bool CallFunc_EqualEqual_StriStri_ReturnValue_20, class FText CallFunc_MakeLiteralText_ReturnValue_20, const class FString& CallFunc_Conv_TextToString_ReturnValue_20, class FText CallFunc_MakeLiteralText_ReturnValue_21, bool CallFunc_EqualEqual_StriStri_ReturnValue_21, const class FString& CallFunc_Conv_TextToString_ReturnValue_21, bool CallFunc_EqualEqual_StriStri_ReturnValue_22, class UAsyncActionHandleSaveGame* CallFunc_AsyncSaveGameToSlot_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WG_Op_GamePanel_C", "ExecuteUbergraph_WG_Op_GamePanel");

	Params::UWG_Op_GamePanel_C_ExecuteUbergraph_WG_Op_GamePanel_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_MakeLiteralText_ReturnValue = CallFunc_MakeLiteralText_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CustomEvent_SaveGame_2 = K2Node_CustomEvent_SaveGame_2;
	Parms.K2Node_CustomEvent_bSuccess_2 = K2Node_CustomEvent_bSuccess_2;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.K2Node_CustomEvent_SaveGame_1 = K2Node_CustomEvent_SaveGame_1;
	Parms.K2Node_CustomEvent_bSuccess_1 = K2Node_CustomEvent_bSuccess_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.K2Node_DynamicCast_AsSettings_SG = K2Node_DynamicCast_AsSettings_SG;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_AsyncLoadGameFromSlot_ReturnValue = CallFunc_AsyncLoadGameFromSlot_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CustomEvent_SaveGame = K2Node_CustomEvent_SaveGame;
	Parms.K2Node_CustomEvent_bSuccess = K2Node_CustomEvent_bSuccess;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.Temp_object_Variable_2 = Temp_object_Variable_2;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.K2Node_ComponentBoundEvent_SelectedItem = K2Node_ComponentBoundEvent_SelectedItem;
	Parms.K2Node_ComponentBoundEvent_SelectionType = K2Node_ComponentBoundEvent_SelectionType;
	Parms.CallFunc_EqualEqual_StriStri_ReturnValue = CallFunc_EqualEqual_StriStri_ReturnValue;
	Parms.CallFunc_EqualEqual_StriStri_ReturnValue_1 = CallFunc_EqualEqual_StriStri_ReturnValue_1;
	Parms.CallFunc_EqualEqual_StriStri_ReturnValue_2 = CallFunc_EqualEqual_StriStri_ReturnValue_2;
	Parms.CallFunc_SetCurrentCulture_ReturnValue = CallFunc_SetCurrentCulture_ReturnValue;
	Parms.CallFunc_SetCurrentCulture_ReturnValue_1 = CallFunc_SetCurrentCulture_ReturnValue_1;
	Parms.CallFunc_SetCurrentCulture_ReturnValue_2 = CallFunc_SetCurrentCulture_ReturnValue_2;
	Parms.CallFunc_SetCurrentCulture_ReturnValue_3 = CallFunc_SetCurrentCulture_ReturnValue_3;
	Parms.CallFunc_SetCurrentCulture_ReturnValue_4 = CallFunc_SetCurrentCulture_ReturnValue_4;
	Parms.CallFunc_SetCurrentCulture_ReturnValue_5 = CallFunc_SetCurrentCulture_ReturnValue_5;
	Parms.CallFunc_SetCurrentCulture_ReturnValue_6 = CallFunc_SetCurrentCulture_ReturnValue_6;
	Parms.CallFunc_CreateSaveGameObject_ReturnValue = CallFunc_CreateSaveGameObject_ReturnValue;
	Parms.CallFunc_SetCurrentCulture_ReturnValue_7 = CallFunc_SetCurrentCulture_ReturnValue_7;
	Parms.CallFunc_AsyncSaveGameToSlot_ReturnValue = CallFunc_AsyncSaveGameToSlot_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetCurrentCulture_ReturnValue = CallFunc_GetCurrentCulture_ReturnValue;
	Parms.CallFunc_EqualEqual_StriStri_ReturnValue_3 = CallFunc_EqualEqual_StriStri_ReturnValue_3;
	Parms.CallFunc_EqualEqual_StriStri_ReturnValue_4 = CallFunc_EqualEqual_StriStri_ReturnValue_4;
	Parms.CallFunc_EqualEqual_StriStri_ReturnValue_5 = CallFunc_EqualEqual_StriStri_ReturnValue_5;
	Parms.CallFunc_EqualEqual_StriStri_ReturnValue_6 = CallFunc_EqualEqual_StriStri_ReturnValue_6;
	Parms.CallFunc_EqualEqual_StriStri_ReturnValue_7 = CallFunc_EqualEqual_StriStri_ReturnValue_7;
	Parms.CallFunc_EqualEqual_StriStri_ReturnValue_8 = CallFunc_EqualEqual_StriStri_ReturnValue_8;
	Parms.CallFunc_EqualEqual_StriStri_ReturnValue_9 = CallFunc_EqualEqual_StriStri_ReturnValue_9;
	Parms.CallFunc_EqualEqual_StriStri_ReturnValue_10 = CallFunc_EqualEqual_StriStri_ReturnValue_10;
	Parms.CallFunc_DoesSaveGameExist_ReturnValue = CallFunc_DoesSaveGameExist_ReturnValue;
	Parms.CallFunc_MakeLiteralText_ReturnValue_1 = CallFunc_MakeLiteralText_ReturnValue_1;
	Parms.CallFunc_MakeLiteralText_ReturnValue_2 = CallFunc_MakeLiteralText_ReturnValue_2;
	Parms.CallFunc_Conv_TextToString_ReturnValue_1 = CallFunc_Conv_TextToString_ReturnValue_1;
	Parms.CallFunc_Conv_TextToString_ReturnValue_2 = CallFunc_Conv_TextToString_ReturnValue_2;
	Parms.CallFunc_MakeLiteralText_ReturnValue_3 = CallFunc_MakeLiteralText_ReturnValue_3;
	Parms.CallFunc_MakeLiteralText_ReturnValue_4 = CallFunc_MakeLiteralText_ReturnValue_4;
	Parms.CallFunc_Conv_TextToString_ReturnValue_3 = CallFunc_Conv_TextToString_ReturnValue_3;
	Parms.CallFunc_Conv_TextToString_ReturnValue_4 = CallFunc_Conv_TextToString_ReturnValue_4;
	Parms.CallFunc_MakeLiteralText_ReturnValue_5 = CallFunc_MakeLiteralText_ReturnValue_5;
	Parms.CallFunc_Conv_TextToString_ReturnValue_5 = CallFunc_Conv_TextToString_ReturnValue_5;
	Parms.CallFunc_MakeLiteralText_ReturnValue_6 = CallFunc_MakeLiteralText_ReturnValue_6;
	Parms.CallFunc_MakeLiteralText_ReturnValue_7 = CallFunc_MakeLiteralText_ReturnValue_7;
	Parms.CallFunc_Conv_TextToString_ReturnValue_6 = CallFunc_Conv_TextToString_ReturnValue_6;
	Parms.CallFunc_Conv_TextToString_ReturnValue_7 = CallFunc_Conv_TextToString_ReturnValue_7;
	Parms.CallFunc_MakeLiteralText_ReturnValue_8 = CallFunc_MakeLiteralText_ReturnValue_8;
	Parms.CallFunc_MakeLiteralText_ReturnValue_9 = CallFunc_MakeLiteralText_ReturnValue_9;
	Parms.CallFunc_Conv_TextToString_ReturnValue_8 = CallFunc_Conv_TextToString_ReturnValue_8;
	Parms.CallFunc_Conv_TextToString_ReturnValue_9 = CallFunc_Conv_TextToString_ReturnValue_9;
	Parms.CallFunc_GetCurrentCulture_ReturnValue_1 = CallFunc_GetCurrentCulture_ReturnValue_1;
	Parms.CallFunc_EqualEqual_StriStri_ReturnValue_11 = CallFunc_EqualEqual_StriStri_ReturnValue_11;
	Parms.CallFunc_EqualEqual_StriStri_ReturnValue_12 = CallFunc_EqualEqual_StriStri_ReturnValue_12;
	Parms.CallFunc_EqualEqual_StriStri_ReturnValue_13 = CallFunc_EqualEqual_StriStri_ReturnValue_13;
	Parms.CallFunc_EqualEqual_StriStri_ReturnValue_14 = CallFunc_EqualEqual_StriStri_ReturnValue_14;
	Parms.CallFunc_EqualEqual_StriStri_ReturnValue_15 = CallFunc_EqualEqual_StriStri_ReturnValue_15;
	Parms.CallFunc_EqualEqual_StriStri_ReturnValue_16 = CallFunc_EqualEqual_StriStri_ReturnValue_16;
	Parms.CallFunc_EqualEqual_StriStri_ReturnValue_17 = CallFunc_EqualEqual_StriStri_ReturnValue_17;
	Parms.CallFunc_MakeLiteralText_ReturnValue_10 = CallFunc_MakeLiteralText_ReturnValue_10;
	Parms.CallFunc_MakeLiteralText_ReturnValue_11 = CallFunc_MakeLiteralText_ReturnValue_11;
	Parms.CallFunc_Conv_TextToString_ReturnValue_10 = CallFunc_Conv_TextToString_ReturnValue_10;
	Parms.CallFunc_Conv_TextToString_ReturnValue_11 = CallFunc_Conv_TextToString_ReturnValue_11;
	Parms.CallFunc_MakeLiteralText_ReturnValue_12 = CallFunc_MakeLiteralText_ReturnValue_12;
	Parms.CallFunc_MakeLiteralText_ReturnValue_13 = CallFunc_MakeLiteralText_ReturnValue_13;
	Parms.CallFunc_Conv_TextToString_ReturnValue_12 = CallFunc_Conv_TextToString_ReturnValue_12;
	Parms.CallFunc_Conv_TextToString_ReturnValue_13 = CallFunc_Conv_TextToString_ReturnValue_13;
	Parms.CallFunc_MakeLiteralText_ReturnValue_14 = CallFunc_MakeLiteralText_ReturnValue_14;
	Parms.CallFunc_MakeLiteralText_ReturnValue_15 = CallFunc_MakeLiteralText_ReturnValue_15;
	Parms.CallFunc_Conv_TextToString_ReturnValue_14 = CallFunc_Conv_TextToString_ReturnValue_14;
	Parms.CallFunc_Conv_TextToString_ReturnValue_15 = CallFunc_Conv_TextToString_ReturnValue_15;
	Parms.CallFunc_MakeLiteralText_ReturnValue_16 = CallFunc_MakeLiteralText_ReturnValue_16;
	Parms.CallFunc_MakeLiteralText_ReturnValue_17 = CallFunc_MakeLiteralText_ReturnValue_17;
	Parms.CallFunc_Conv_TextToString_ReturnValue_16 = CallFunc_Conv_TextToString_ReturnValue_16;
	Parms.CallFunc_Conv_TextToString_ReturnValue_17 = CallFunc_Conv_TextToString_ReturnValue_17;
	Parms.CallFunc_EqualEqual_StriStri_ReturnValue_18 = CallFunc_EqualEqual_StriStri_ReturnValue_18;
	Parms.CallFunc_MakeLiteralText_ReturnValue_18 = CallFunc_MakeLiteralText_ReturnValue_18;
	Parms.CallFunc_Conv_TextToString_ReturnValue_18 = CallFunc_Conv_TextToString_ReturnValue_18;
	Parms.CallFunc_MakeLiteralText_ReturnValue_19 = CallFunc_MakeLiteralText_ReturnValue_19;
	Parms.CallFunc_EqualEqual_StriStri_ReturnValue_19 = CallFunc_EqualEqual_StriStri_ReturnValue_19;
	Parms.CallFunc_Conv_TextToString_ReturnValue_19 = CallFunc_Conv_TextToString_ReturnValue_19;
	Parms.CallFunc_EqualEqual_StriStri_ReturnValue_20 = CallFunc_EqualEqual_StriStri_ReturnValue_20;
	Parms.CallFunc_MakeLiteralText_ReturnValue_20 = CallFunc_MakeLiteralText_ReturnValue_20;
	Parms.CallFunc_Conv_TextToString_ReturnValue_20 = CallFunc_Conv_TextToString_ReturnValue_20;
	Parms.CallFunc_MakeLiteralText_ReturnValue_21 = CallFunc_MakeLiteralText_ReturnValue_21;
	Parms.CallFunc_EqualEqual_StriStri_ReturnValue_21 = CallFunc_EqualEqual_StriStri_ReturnValue_21;
	Parms.CallFunc_Conv_TextToString_ReturnValue_21 = CallFunc_Conv_TextToString_ReturnValue_21;
	Parms.CallFunc_EqualEqual_StriStri_ReturnValue_22 = CallFunc_EqualEqual_StriStri_ReturnValue_22;
	Parms.CallFunc_AsyncSaveGameToSlot_ReturnValue_1 = CallFunc_AsyncSaveGameToSlot_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}

}


