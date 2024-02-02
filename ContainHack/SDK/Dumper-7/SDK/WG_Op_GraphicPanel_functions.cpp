#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WG_Op_GraphicPanel.WG_Op_GraphicPanel_C
// (None)

class UClass* UWG_Op_GraphicPanel_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WG_Op_GraphicPanel_C");

	return Clss;
}


// WG_Op_GraphicPanel_C WG_Op_GraphicPanel.Default__WG_Op_GraphicPanel_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWG_Op_GraphicPanel_C* UWG_Op_GraphicPanel_C::GetDefaultObj()
{
	static class UWG_Op_GraphicPanel_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWG_Op_GraphicPanel_C*>(UWG_Op_GraphicPanel_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WG_Op_GraphicPanel.WG_Op_GraphicPanel_C.DLSS_SR_Enabled
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDLSSSupported_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDLSSEnabled_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UWG_Op_GraphicPanel_C::DLSS_SR_Enabled(bool CallFunc_IsDLSSSupported_ReturnValue, bool CallFunc_IsDLSSEnabled_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WG_Op_GraphicPanel_C", "DLSS_SR_Enabled");

	Params::UWG_Op_GraphicPanel_C_DLSS_SR_Enabled_Params Parms{};

	Parms.CallFunc_IsDLSSSupported_ReturnValue = CallFunc_IsDLSSSupported_ReturnValue;
	Parms.CallFunc_IsDLSSEnabled_ReturnValue = CallFunc_IsDLSSEnabled_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WG_Op_GraphicPanel.WG_Op_GraphicPanel_C.DLSS_RR_CanBeEnabled
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_DLSS_RR_CanBeEnabled_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UWG_Op_GraphicPanel_C::DLSS_RR_CanBeEnabled(bool CallFunc_DLSS_RR_CanBeEnabled_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WG_Op_GraphicPanel_C", "DLSS_RR_CanBeEnabled");

	Params::UWG_Op_GraphicPanel_C_DLSS_RR_CanBeEnabled_Params Parms{};

	Parms.CallFunc_DLSS_RR_CanBeEnabled_ReturnValue = CallFunc_DLSS_RR_CanBeEnabled_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WG_Op_GraphicPanel.WG_Op_GraphicPanel_C.DLSS_SR_CanBeEnabled
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDLSSSupported_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UWG_Op_GraphicPanel_C::DLSS_SR_CanBeEnabled(bool CallFunc_IsDLSSSupported_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WG_Op_GraphicPanel_C", "DLSS_SR_CanBeEnabled");

	Params::UWG_Op_GraphicPanel_C_DLSS_SR_CanBeEnabled_Params Parms{};

	Parms.CallFunc_IsDLSSSupported_ReturnValue = CallFunc_IsDLSSSupported_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WG_Op_GraphicPanel.WG_Op_GraphicPanel_C.Func_GetTextQuality
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UComboBoxString*             Quality                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              QuelityIndex                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_MakeLiteralText_ReturnValue                             (None)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_3                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_4                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_5                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_1                           (None)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_2                           (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_1                         (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_2                         (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_3                           (None)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_3                         (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_GetViewDistanceQuality_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_6                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_7                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWG_Op_GraphicPanel_C::Func_GetTextQuality(class UComboBoxString* Quality, int32 QuelityIndex, class FText CallFunc_MakeLiteralText_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue_2, bool CallFunc_EqualEqual_IntInt_ReturnValue_3, bool CallFunc_EqualEqual_IntInt_ReturnValue_4, bool CallFunc_EqualEqual_IntInt_ReturnValue_5, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, class FText CallFunc_MakeLiteralText_ReturnValue_1, class FText CallFunc_MakeLiteralText_ReturnValue_2, const class FString& CallFunc_Conv_TextToString_ReturnValue_1, const class FString& CallFunc_Conv_TextToString_ReturnValue_2, class FText CallFunc_MakeLiteralText_ReturnValue_3, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue_3, int32 CallFunc_GetViewDistanceQuality_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_6, bool CallFunc_EqualEqual_IntInt_ReturnValue_7, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WG_Op_GraphicPanel_C", "Func_GetTextQuality");

	Params::UWG_Op_GraphicPanel_C_Func_GetTextQuality_Params Parms{};

	Parms.Quality = Quality;
	Parms.QuelityIndex = QuelityIndex;
	Parms.CallFunc_MakeLiteralText_ReturnValue = CallFunc_MakeLiteralText_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_1 = CallFunc_EqualEqual_IntInt_ReturnValue_1;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_2 = CallFunc_EqualEqual_IntInt_ReturnValue_2;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_3 = CallFunc_EqualEqual_IntInt_ReturnValue_3;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_4 = CallFunc_EqualEqual_IntInt_ReturnValue_4;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_5 = CallFunc_EqualEqual_IntInt_ReturnValue_5;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;
	Parms.CallFunc_MakeLiteralText_ReturnValue_1 = CallFunc_MakeLiteralText_ReturnValue_1;
	Parms.CallFunc_MakeLiteralText_ReturnValue_2 = CallFunc_MakeLiteralText_ReturnValue_2;
	Parms.CallFunc_Conv_TextToString_ReturnValue_1 = CallFunc_Conv_TextToString_ReturnValue_1;
	Parms.CallFunc_Conv_TextToString_ReturnValue_2 = CallFunc_Conv_TextToString_ReturnValue_2;
	Parms.CallFunc_MakeLiteralText_ReturnValue_3 = CallFunc_MakeLiteralText_ReturnValue_3;
	Parms.CallFunc_GetGameUserSettings_ReturnValue = CallFunc_GetGameUserSettings_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue_3 = CallFunc_Conv_TextToString_ReturnValue_3;
	Parms.CallFunc_GetViewDistanceQuality_ReturnValue = CallFunc_GetViewDistanceQuality_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_6 = CallFunc_EqualEqual_IntInt_ReturnValue_6;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_7 = CallFunc_EqualEqual_IntInt_ReturnValue_7;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WG_Op_GraphicPanel.WG_Op_GraphicPanel_C.Func_GraphicsSettings
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        CallFunc_MakeLiteralText_ReturnValue                             (None)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_1                           (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_1                         (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_2                           (None)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_3                           (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_2                         (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_3                         (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_4                           (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_4                         (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_RemoveOption_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_RemoveOption_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_RemoveOption_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_RemoveOption_ReturnValue_3                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetAntiAliasingQuality_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetVisualEffectQuality_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_3                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_4                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_5                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_6                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_7                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetShadowQuality_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetTextureQuality_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_8                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_9                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_10                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_11                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_12                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_13                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_14                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_4                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_5                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_6                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_7                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_8                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_15                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_9                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_10                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_11                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWG_Op_GraphicPanel_C::Func_GraphicsSettings(class FText CallFunc_MakeLiteralText_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue_1, const class FString& CallFunc_Conv_TextToString_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue_1, class FText CallFunc_MakeLiteralText_ReturnValue_2, class FText CallFunc_MakeLiteralText_ReturnValue_3, const class FString& CallFunc_Conv_TextToString_ReturnValue_2, const class FString& CallFunc_Conv_TextToString_ReturnValue_3, class FText CallFunc_MakeLiteralText_ReturnValue_4, const class FString& CallFunc_Conv_TextToString_ReturnValue_4, bool CallFunc_RemoveOption_ReturnValue, bool CallFunc_RemoveOption_ReturnValue_1, bool CallFunc_RemoveOption_ReturnValue_2, bool CallFunc_RemoveOption_ReturnValue_3, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, int32 CallFunc_GetAntiAliasingQuality_ReturnValue, int32 CallFunc_GetVisualEffectQuality_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue_2, bool CallFunc_EqualEqual_IntInt_ReturnValue_3, bool CallFunc_EqualEqual_IntInt_ReturnValue_4, bool CallFunc_EqualEqual_IntInt_ReturnValue_5, bool CallFunc_EqualEqual_IntInt_ReturnValue_6, bool CallFunc_EqualEqual_IntInt_ReturnValue_7, int32 CallFunc_GetShadowQuality_ReturnValue, int32 CallFunc_GetTextureQuality_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_8, bool CallFunc_EqualEqual_IntInt_ReturnValue_9, bool CallFunc_EqualEqual_IntInt_ReturnValue_10, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_11, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue_12, bool CallFunc_BooleanAND_ReturnValue_2, bool CallFunc_EqualEqual_IntInt_ReturnValue_13, bool CallFunc_BooleanAND_ReturnValue_3, bool CallFunc_EqualEqual_IntInt_ReturnValue_14, bool CallFunc_BooleanAND_ReturnValue_4, bool CallFunc_BooleanAND_ReturnValue_5, bool CallFunc_BooleanAND_ReturnValue_6, bool CallFunc_BooleanAND_ReturnValue_7, bool CallFunc_BooleanAND_ReturnValue_8, bool CallFunc_EqualEqual_IntInt_ReturnValue_15, bool CallFunc_BooleanAND_ReturnValue_9, bool CallFunc_BooleanAND_ReturnValue_10, bool CallFunc_BooleanAND_ReturnValue_11)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WG_Op_GraphicPanel_C", "Func_GraphicsSettings");

	Params::UWG_Op_GraphicPanel_C_Func_GraphicsSettings_Params Parms{};

	Parms.CallFunc_MakeLiteralText_ReturnValue = CallFunc_MakeLiteralText_ReturnValue;
	Parms.CallFunc_MakeLiteralText_ReturnValue_1 = CallFunc_MakeLiteralText_ReturnValue_1;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue_1 = CallFunc_Conv_TextToString_ReturnValue_1;
	Parms.CallFunc_MakeLiteralText_ReturnValue_2 = CallFunc_MakeLiteralText_ReturnValue_2;
	Parms.CallFunc_MakeLiteralText_ReturnValue_3 = CallFunc_MakeLiteralText_ReturnValue_3;
	Parms.CallFunc_Conv_TextToString_ReturnValue_2 = CallFunc_Conv_TextToString_ReturnValue_2;
	Parms.CallFunc_Conv_TextToString_ReturnValue_3 = CallFunc_Conv_TextToString_ReturnValue_3;
	Parms.CallFunc_MakeLiteralText_ReturnValue_4 = CallFunc_MakeLiteralText_ReturnValue_4;
	Parms.CallFunc_Conv_TextToString_ReturnValue_4 = CallFunc_Conv_TextToString_ReturnValue_4;
	Parms.CallFunc_RemoveOption_ReturnValue = CallFunc_RemoveOption_ReturnValue;
	Parms.CallFunc_RemoveOption_ReturnValue_1 = CallFunc_RemoveOption_ReturnValue_1;
	Parms.CallFunc_RemoveOption_ReturnValue_2 = CallFunc_RemoveOption_ReturnValue_2;
	Parms.CallFunc_RemoveOption_ReturnValue_3 = CallFunc_RemoveOption_ReturnValue_3;
	Parms.CallFunc_GetGameUserSettings_ReturnValue = CallFunc_GetGameUserSettings_ReturnValue;
	Parms.CallFunc_GetAntiAliasingQuality_ReturnValue = CallFunc_GetAntiAliasingQuality_ReturnValue;
	Parms.CallFunc_GetVisualEffectQuality_ReturnValue = CallFunc_GetVisualEffectQuality_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_1 = CallFunc_EqualEqual_IntInt_ReturnValue_1;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_2 = CallFunc_EqualEqual_IntInt_ReturnValue_2;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_3 = CallFunc_EqualEqual_IntInt_ReturnValue_3;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_4 = CallFunc_EqualEqual_IntInt_ReturnValue_4;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_5 = CallFunc_EqualEqual_IntInt_ReturnValue_5;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_6 = CallFunc_EqualEqual_IntInt_ReturnValue_6;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_7 = CallFunc_EqualEqual_IntInt_ReturnValue_7;
	Parms.CallFunc_GetShadowQuality_ReturnValue = CallFunc_GetShadowQuality_ReturnValue;
	Parms.CallFunc_GetTextureQuality_ReturnValue = CallFunc_GetTextureQuality_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_8 = CallFunc_EqualEqual_IntInt_ReturnValue_8;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_9 = CallFunc_EqualEqual_IntInt_ReturnValue_9;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_10 = CallFunc_EqualEqual_IntInt_ReturnValue_10;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_11 = CallFunc_EqualEqual_IntInt_ReturnValue_11;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_12 = CallFunc_EqualEqual_IntInt_ReturnValue_12;
	Parms.CallFunc_BooleanAND_ReturnValue_2 = CallFunc_BooleanAND_ReturnValue_2;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_13 = CallFunc_EqualEqual_IntInt_ReturnValue_13;
	Parms.CallFunc_BooleanAND_ReturnValue_3 = CallFunc_BooleanAND_ReturnValue_3;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_14 = CallFunc_EqualEqual_IntInt_ReturnValue_14;
	Parms.CallFunc_BooleanAND_ReturnValue_4 = CallFunc_BooleanAND_ReturnValue_4;
	Parms.CallFunc_BooleanAND_ReturnValue_5 = CallFunc_BooleanAND_ReturnValue_5;
	Parms.CallFunc_BooleanAND_ReturnValue_6 = CallFunc_BooleanAND_ReturnValue_6;
	Parms.CallFunc_BooleanAND_ReturnValue_7 = CallFunc_BooleanAND_ReturnValue_7;
	Parms.CallFunc_BooleanAND_ReturnValue_8 = CallFunc_BooleanAND_ReturnValue_8;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_15 = CallFunc_EqualEqual_IntInt_ReturnValue_15;
	Parms.CallFunc_BooleanAND_ReturnValue_9 = CallFunc_BooleanAND_ReturnValue_9;
	Parms.CallFunc_BooleanAND_ReturnValue_10 = CallFunc_BooleanAND_ReturnValue_10;
	Parms.CallFunc_BooleanAND_ReturnValue_11 = CallFunc_BooleanAND_ReturnValue_11;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WG_Op_GraphicPanel.WG_Op_GraphicPanel_C.Func_FrameLimitText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFrameRateLimit_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_DoubleDouble_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_DoubleDouble_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_DoubleDouble_ReturnValue_2                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_DoubleDouble_ReturnValue_3                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast_1                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast_2                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast_3                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWG_Op_GraphicPanel_C::Func_FrameLimitText(class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, float CallFunc_GetFrameRateLimit_ReturnValue, bool CallFunc_EqualEqual_DoubleDouble_ReturnValue, bool CallFunc_EqualEqual_DoubleDouble_ReturnValue_1, bool CallFunc_EqualEqual_DoubleDouble_ReturnValue_2, bool CallFunc_EqualEqual_DoubleDouble_ReturnValue_3, double CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast, double CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast_1, double CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast_2, double CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WG_Op_GraphicPanel_C", "Func_FrameLimitText");

	Params::UWG_Op_GraphicPanel_C_Func_FrameLimitText_Params Parms{};

	Parms.CallFunc_GetGameUserSettings_ReturnValue = CallFunc_GetGameUserSettings_ReturnValue;
	Parms.CallFunc_GetFrameRateLimit_ReturnValue = CallFunc_GetFrameRateLimit_ReturnValue;
	Parms.CallFunc_EqualEqual_DoubleDouble_ReturnValue = CallFunc_EqualEqual_DoubleDouble_ReturnValue;
	Parms.CallFunc_EqualEqual_DoubleDouble_ReturnValue_1 = CallFunc_EqualEqual_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_EqualEqual_DoubleDouble_ReturnValue_2 = CallFunc_EqualEqual_DoubleDouble_ReturnValue_2;
	Parms.CallFunc_EqualEqual_DoubleDouble_ReturnValue_3 = CallFunc_EqualEqual_DoubleDouble_ReturnValue_3;
	Parms.CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast = CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast_1 = CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast_1;
	Parms.CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast_2 = CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast_2;
	Parms.CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast_3 = CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast_3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WG_Op_GraphicPanel.WG_Op_GraphicPanel_C.Func_SyncText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWG_Op_GraphicPanel_C::Func_SyncText()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WG_Op_GraphicPanel_C", "Func_SyncText");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WG_Op_GraphicPanel.WG_Op_GraphicPanel_C.Func_WindowModeText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        CallFunc_MakeLiteralText_ReturnValue                             (None)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_1                           (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_1                         (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_2                           (None)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_2                         (ZeroConstructor, HasGetValueTypeHash)
// enum class EWindowMode             CallFunc_GetFullscreenMode_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWG_Op_GraphicPanel_C::Func_WindowModeText(class FText CallFunc_MakeLiteralText_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue_1, const class FString& CallFunc_Conv_TextToString_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue_1, class FText CallFunc_MakeLiteralText_ReturnValue_2, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue_2, enum class EWindowMode CallFunc_GetFullscreenMode_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WG_Op_GraphicPanel_C", "Func_WindowModeText");

	Params::UWG_Op_GraphicPanel_C_Func_WindowModeText_Params Parms{};

	Parms.CallFunc_MakeLiteralText_ReturnValue = CallFunc_MakeLiteralText_ReturnValue;
	Parms.CallFunc_MakeLiteralText_ReturnValue_1 = CallFunc_MakeLiteralText_ReturnValue_1;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue_1 = CallFunc_Conv_TextToString_ReturnValue_1;
	Parms.CallFunc_MakeLiteralText_ReturnValue_2 = CallFunc_MakeLiteralText_ReturnValue_2;
	Parms.CallFunc_GetGameUserSettings_ReturnValue = CallFunc_GetGameUserSettings_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue_2 = CallFunc_Conv_TextToString_ReturnValue_2;
	Parms.CallFunc_GetFullscreenMode_ReturnValue = CallFunc_GetFullscreenMode_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WG_Op_GraphicPanel.WG_Op_GraphicPanel_C.FsrCheck
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// bool                               CallFunc_IsChecked_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class FText UWG_Op_GraphicPanel_C::FsrCheck(bool CallFunc_IsChecked_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WG_Op_GraphicPanel_C", "FsrCheck");

	Params::UWG_Op_GraphicPanel_C_FsrCheck_Params Parms{};

	Parms.CallFunc_IsChecked_ReturnValue = CallFunc_IsChecked_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WG_Op_GraphicPanel.WG_Op_GraphicPanel_C.CapCheck
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// bool                               CallFunc_IsChecked_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class FText UWG_Op_GraphicPanel_C::CapCheck(bool CallFunc_IsChecked_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WG_Op_GraphicPanel_C", "CapCheck");

	Params::UWG_Op_GraphicPanel_C_CapCheck_Params Parms{};

	Parms.CallFunc_IsChecked_ReturnValue = CallFunc_IsChecked_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WG_Op_GraphicPanel.WG_Op_GraphicPanel_C.VsyncCheck
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// bool                               CallFunc_IsChecked_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class FText UWG_Op_GraphicPanel_C::VsyncCheck(bool CallFunc_IsChecked_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WG_Op_GraphicPanel_C", "VsyncCheck");

	Params::UWG_Op_GraphicPanel_C_VsyncCheck_Params Parms{};

	Parms.CallFunc_IsChecked_ReturnValue = CallFunc_IsChecked_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WG_Op_GraphicPanel.WG_Op_GraphicPanel_C.Completed_79C2D7F24343F8455C14C4B964ACFBE9
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class USaveGame*                   SaveGame                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               bSuccess                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWG_Op_GraphicPanel_C::Completed_79C2D7F24343F8455C14C4B964ACFBE9(class USaveGame* SaveGame, bool bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WG_Op_GraphicPanel_C", "Completed_79C2D7F24343F8455C14C4B964ACFBE9");

	Params::UWG_Op_GraphicPanel_C_Completed_79C2D7F24343F8455C14C4B964ACFBE9_Params Parms{};

	Parms.SaveGame = SaveGame;
	Parms.bSuccess = bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WG_Op_GraphicPanel.WG_Op_GraphicPanel_C.Completed_FC45457E400869E95083F78DFE2FEEC0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class USaveGame*                   SaveGame                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               bSuccess                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWG_Op_GraphicPanel_C::Completed_FC45457E400869E95083F78DFE2FEEC0(class USaveGame* SaveGame, bool bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WG_Op_GraphicPanel_C", "Completed_FC45457E400869E95083F78DFE2FEEC0");

	Params::UWG_Op_GraphicPanel_C_Completed_FC45457E400869E95083F78DFE2FEEC0_Params Parms{};

	Parms.SaveGame = SaveGame;
	Parms.bSuccess = bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WG_Op_GraphicPanel.WG_Op_GraphicPanel_C.Completed_6DE75D6C4F6A17D1050C95BAEE32A2BA
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class USaveGame*                   SaveGame                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               bSuccess                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWG_Op_GraphicPanel_C::Completed_6DE75D6C4F6A17D1050C95BAEE32A2BA(class USaveGame* SaveGame, bool bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WG_Op_GraphicPanel_C", "Completed_6DE75D6C4F6A17D1050C95BAEE32A2BA");

	Params::UWG_Op_GraphicPanel_C_Completed_6DE75D6C4F6A17D1050C95BAEE32A2BA_Params Parms{};

	Parms.SaveGame = SaveGame;
	Parms.bSuccess = bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WG_Op_GraphicPanel.WG_Op_GraphicPanel_C.Completed_1370A23040C4ED2997A5908FACAB45D3
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class USaveGame*                   SaveGame                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               bSuccess                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWG_Op_GraphicPanel_C::Completed_1370A23040C4ED2997A5908FACAB45D3(class USaveGame* SaveGame, bool bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WG_Op_GraphicPanel_C", "Completed_1370A23040C4ED2997A5908FACAB45D3");

	Params::UWG_Op_GraphicPanel_C_Completed_1370A23040C4ED2997A5908FACAB45D3_Params Parms{};

	Parms.SaveGame = SaveGame;
	Parms.bSuccess = bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WG_Op_GraphicPanel.WG_Op_GraphicPanel_C.Completed_CD5B8F2544B6B940D11C80AC8C51FBA8
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class USaveGame*                   SaveGame                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               bSuccess                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWG_Op_GraphicPanel_C::Completed_CD5B8F2544B6B940D11C80AC8C51FBA8(class USaveGame* SaveGame, bool bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WG_Op_GraphicPanel_C", "Completed_CD5B8F2544B6B940D11C80AC8C51FBA8");

	Params::UWG_Op_GraphicPanel_C_Completed_CD5B8F2544B6B940D11C80AC8C51FBA8_Params Parms{};

	Parms.SaveGame = SaveGame;
	Parms.bSuccess = bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WG_Op_GraphicPanel.WG_Op_GraphicPanel_C.Completed_A52DDF154D4986F553D71AB98C50FCEF
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class USaveGame*                   SaveGame                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               bSuccess                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWG_Op_GraphicPanel_C::Completed_A52DDF154D4986F553D71AB98C50FCEF(class USaveGame* SaveGame, bool bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WG_Op_GraphicPanel_C", "Completed_A52DDF154D4986F553D71AB98C50FCEF");

	Params::UWG_Op_GraphicPanel_C_Completed_A52DDF154D4986F553D71AB98C50FCEF_Params Parms{};

	Parms.SaveGame = SaveGame;
	Parms.bSuccess = bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WG_Op_GraphicPanel.WG_Op_GraphicPanel_C.Completed_C4A5883C415C1EAD5BD6D38FCB428030
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class USaveGame*                   SaveGame                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               bSuccess                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWG_Op_GraphicPanel_C::Completed_C4A5883C415C1EAD5BD6D38FCB428030(class USaveGame* SaveGame, bool bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WG_Op_GraphicPanel_C", "Completed_C4A5883C415C1EAD5BD6D38FCB428030");

	Params::UWG_Op_GraphicPanel_C_Completed_C4A5883C415C1EAD5BD6D38FCB428030_Params Parms{};

	Parms.SaveGame = SaveGame;
	Parms.bSuccess = bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WG_Op_GraphicPanel.WG_Op_GraphicPanel_C.Completed_97525F58479555F0281C8EBBCE4B6D17
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class USaveGame*                   SaveGame                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               bSuccess                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWG_Op_GraphicPanel_C::Completed_97525F58479555F0281C8EBBCE4B6D17(class USaveGame* SaveGame, bool bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WG_Op_GraphicPanel_C", "Completed_97525F58479555F0281C8EBBCE4B6D17");

	Params::UWG_Op_GraphicPanel_C_Completed_97525F58479555F0281C8EBBCE4B6D17_Params Parms{};

	Parms.SaveGame = SaveGame;
	Parms.bSuccess = bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WG_Op_GraphicPanel.WG_Op_GraphicPanel_C.Completed_1F5DB22244B1D084B66C58B0F4ED6DC6
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class USaveGame*                   SaveGame                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               bSuccess                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWG_Op_GraphicPanel_C::Completed_1F5DB22244B1D084B66C58B0F4ED6DC6(class USaveGame* SaveGame, bool bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WG_Op_GraphicPanel_C", "Completed_1F5DB22244B1D084B66C58B0F4ED6DC6");

	Params::UWG_Op_GraphicPanel_C_Completed_1F5DB22244B1D084B66C58B0F4ED6DC6_Params Parms{};

	Parms.SaveGame = SaveGame;
	Parms.bSuccess = bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WG_Op_GraphicPanel.WG_Op_GraphicPanel_C.Completed_0684104D4AD8DB46F5B52D8153E4768E
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class USaveGame*                   SaveGame                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               bSuccess                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWG_Op_GraphicPanel_C::Completed_0684104D4AD8DB46F5B52D8153E4768E(class USaveGame* SaveGame, bool bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WG_Op_GraphicPanel_C", "Completed_0684104D4AD8DB46F5B52D8153E4768E");

	Params::UWG_Op_GraphicPanel_C_Completed_0684104D4AD8DB46F5B52D8153E4768E_Params Parms{};

	Parms.SaveGame = SaveGame;
	Parms.bSuccess = bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WG_Op_GraphicPanel.WG_Op_GraphicPanel_C.Completed_B12383604C2A8C4CFC01D785908D4A18
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class USaveGame*                   SaveGame                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               bSuccess                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWG_Op_GraphicPanel_C::Completed_B12383604C2A8C4CFC01D785908D4A18(class USaveGame* SaveGame, bool bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WG_Op_GraphicPanel_C", "Completed_B12383604C2A8C4CFC01D785908D4A18");

	Params::UWG_Op_GraphicPanel_C_Completed_B12383604C2A8C4CFC01D785908D4A18_Params Parms{};

	Parms.SaveGame = SaveGame;
	Parms.bSuccess = bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WG_Op_GraphicPanel.WG_Op_GraphicPanel_C.Completed_2DAF796B4C784C382698FC80C80FADA2
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class USaveGame*                   SaveGame                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               bSuccess                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWG_Op_GraphicPanel_C::Completed_2DAF796B4C784C382698FC80C80FADA2(class USaveGame* SaveGame, bool bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WG_Op_GraphicPanel_C", "Completed_2DAF796B4C784C382698FC80C80FADA2");

	Params::UWG_Op_GraphicPanel_C_Completed_2DAF796B4C784C382698FC80C80FADA2_Params Parms{};

	Parms.SaveGame = SaveGame;
	Parms.bSuccess = bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WG_Op_GraphicPanel.WG_Op_GraphicPanel_C.Completed_77F1048344AD6D6E30530A99795E1C6D
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class USaveGame*                   SaveGame                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               bSuccess                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWG_Op_GraphicPanel_C::Completed_77F1048344AD6D6E30530A99795E1C6D(class USaveGame* SaveGame, bool bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WG_Op_GraphicPanel_C", "Completed_77F1048344AD6D6E30530A99795E1C6D");

	Params::UWG_Op_GraphicPanel_C_Completed_77F1048344AD6D6E30530A99795E1C6D_Params Parms{};

	Parms.SaveGame = SaveGame;
	Parms.bSuccess = bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WG_Op_GraphicPanel.WG_Op_GraphicPanel_C.Completed_42340A9C4593F7ABE174E0AAA48CD936
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class USaveGame*                   SaveGame                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               bSuccess                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWG_Op_GraphicPanel_C::Completed_42340A9C4593F7ABE174E0AAA48CD936(class USaveGame* SaveGame, bool bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WG_Op_GraphicPanel_C", "Completed_42340A9C4593F7ABE174E0AAA48CD936");

	Params::UWG_Op_GraphicPanel_C_Completed_42340A9C4593F7ABE174E0AAA48CD936_Params Parms{};

	Parms.SaveGame = SaveGame;
	Parms.bSuccess = bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WG_Op_GraphicPanel.WG_Op_GraphicPanel_C.Completed_5E858B2F418EFBE99FCC0BB12CA7B0F4
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class USaveGame*                   SaveGame                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               bSuccess                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWG_Op_GraphicPanel_C::Completed_5E858B2F418EFBE99FCC0BB12CA7B0F4(class USaveGame* SaveGame, bool bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WG_Op_GraphicPanel_C", "Completed_5E858B2F418EFBE99FCC0BB12CA7B0F4");

	Params::UWG_Op_GraphicPanel_C_Completed_5E858B2F418EFBE99FCC0BB12CA7B0F4_Params Parms{};

	Parms.SaveGame = SaveGame;
	Parms.bSuccess = bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WG_Op_GraphicPanel.WG_Op_GraphicPanel_C.Completed_26F8762C40D0FCE9277D018674E75783
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class USaveGame*                   SaveGame                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               bSuccess                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWG_Op_GraphicPanel_C::Completed_26F8762C40D0FCE9277D018674E75783(class USaveGame* SaveGame, bool bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WG_Op_GraphicPanel_C", "Completed_26F8762C40D0FCE9277D018674E75783");

	Params::UWG_Op_GraphicPanel_C_Completed_26F8762C40D0FCE9277D018674E75783_Params Parms{};

	Parms.SaveGame = SaveGame;
	Parms.bSuccess = bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WG_Op_GraphicPanel.WG_Op_GraphicPanel_C.Completed_70E276EE4A9BDDDFCE1439BF720861F1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class USaveGame*                   SaveGame                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               bSuccess                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWG_Op_GraphicPanel_C::Completed_70E276EE4A9BDDDFCE1439BF720861F1(class USaveGame* SaveGame, bool bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WG_Op_GraphicPanel_C", "Completed_70E276EE4A9BDDDFCE1439BF720861F1");

	Params::UWG_Op_GraphicPanel_C_Completed_70E276EE4A9BDDDFCE1439BF720861F1_Params Parms{};

	Parms.SaveGame = SaveGame;
	Parms.bSuccess = bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WG_Op_GraphicPanel.WG_Op_GraphicPanel_C.Completed_1B19C6484E5B967F6B909090FFA35DF1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class USaveGame*                   SaveGame                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               bSuccess                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWG_Op_GraphicPanel_C::Completed_1B19C6484E5B967F6B909090FFA35DF1(class USaveGame* SaveGame, bool bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WG_Op_GraphicPanel_C", "Completed_1B19C6484E5B967F6B909090FFA35DF1");

	Params::UWG_Op_GraphicPanel_C_Completed_1B19C6484E5B967F6B909090FFA35DF1_Params Parms{};

	Parms.SaveGame = SaveGame;
	Parms.bSuccess = bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WG_Op_GraphicPanel.WG_Op_GraphicPanel_C.Completed_6325EFB545460E8C04E4FDA1B6A9EE67
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class USaveGame*                   SaveGame                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               bSuccess                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWG_Op_GraphicPanel_C::Completed_6325EFB545460E8C04E4FDA1B6A9EE67(class USaveGame* SaveGame, bool bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WG_Op_GraphicPanel_C", "Completed_6325EFB545460E8C04E4FDA1B6A9EE67");

	Params::UWG_Op_GraphicPanel_C_Completed_6325EFB545460E8C04E4FDA1B6A9EE67_Params Parms{};

	Parms.SaveGame = SaveGame;
	Parms.bSuccess = bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WG_Op_GraphicPanel.WG_Op_GraphicPanel_C.Completed_EAE161384941A3E50B3DF398638BB921
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class USaveGame*                   SaveGame                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               bSuccess                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWG_Op_GraphicPanel_C::Completed_EAE161384941A3E50B3DF398638BB921(class USaveGame* SaveGame, bool bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WG_Op_GraphicPanel_C", "Completed_EAE161384941A3E50B3DF398638BB921");

	Params::UWG_Op_GraphicPanel_C_Completed_EAE161384941A3E50B3DF398638BB921_Params Parms{};

	Parms.SaveGame = SaveGame;
	Parms.bSuccess = bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WG_Op_GraphicPanel.WG_Op_GraphicPanel_C.Completed_06EC917D4E2C0C5EF6C30EA748048A5A
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class USaveGame*                   SaveGame                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               bSuccess                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWG_Op_GraphicPanel_C::Completed_06EC917D4E2C0C5EF6C30EA748048A5A(class USaveGame* SaveGame, bool bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WG_Op_GraphicPanel_C", "Completed_06EC917D4E2C0C5EF6C30EA748048A5A");

	Params::UWG_Op_GraphicPanel_C_Completed_06EC917D4E2C0C5EF6C30EA748048A5A_Params Parms{};

	Parms.SaveGame = SaveGame;
	Parms.bSuccess = bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WG_Op_GraphicPanel.WG_Op_GraphicPanel_C.BndEvt__WG_Op_GraphicPanel_CB_VsyncSetting_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               bIsChecked                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWG_Op_GraphicPanel_C::BndEvt__WG_Op_GraphicPanel_CB_VsyncSetting_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WG_Op_GraphicPanel_C", "BndEvt__WG_Op_GraphicPanel_CB_VsyncSetting_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature");

	Params::UWG_Op_GraphicPanel_C_BndEvt__WG_Op_GraphicPanel_CB_VsyncSetting_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature_Params Parms{};

	Parms.bIsChecked = bIsChecked;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WG_Op_GraphicPanel.WG_Op_GraphicPanel_C.BndEvt__WG_Op_GraphicPanel_CMB_FrameLimitSettings_K2Node_ComponentBoundEvent_1_OnSelectionChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                      SelectedItem                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// enum class ESelectInfo             SelectionType                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWG_Op_GraphicPanel_C::BndEvt__WG_Op_GraphicPanel_CMB_FrameLimitSettings_K2Node_ComponentBoundEvent_1_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, enum class ESelectInfo SelectionType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WG_Op_GraphicPanel_C", "BndEvt__WG_Op_GraphicPanel_CMB_FrameLimitSettings_K2Node_ComponentBoundEvent_1_OnSelectionChangedEvent__DelegateSignature");

	Params::UWG_Op_GraphicPanel_C_BndEvt__WG_Op_GraphicPanel_CMB_FrameLimitSettings_K2Node_ComponentBoundEvent_1_OnSelectionChangedEvent__DelegateSignature_Params Parms{};

	Parms.SelectedItem = SelectedItem;
	Parms.SelectionType = SelectionType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WG_Op_GraphicPanel.WG_Op_GraphicPanel_C.BndEvt__WG_Op_GraphicPanel_CMB_WindowModeSetting_K2Node_ComponentBoundEvent_2_OnSelectionChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                      SelectedItem                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// enum class ESelectInfo             SelectionType                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWG_Op_GraphicPanel_C::BndEvt__WG_Op_GraphicPanel_CMB_WindowModeSetting_K2Node_ComponentBoundEvent_2_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, enum class ESelectInfo SelectionType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WG_Op_GraphicPanel_C", "BndEvt__WG_Op_GraphicPanel_CMB_WindowModeSetting_K2Node_ComponentBoundEvent_2_OnSelectionChangedEvent__DelegateSignature");

	Params::UWG_Op_GraphicPanel_C_BndEvt__WG_Op_GraphicPanel_CMB_WindowModeSetting_K2Node_ComponentBoundEvent_2_OnSelectionChangedEvent__DelegateSignature_Params Parms{};

	Parms.SelectedItem = SelectedItem;
	Parms.SelectionType = SelectionType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WG_Op_GraphicPanel.WG_Op_GraphicPanel_C.BndEvt__WG_Op_GraphicPanel_CMB_GraphicQuality_K2Node_ComponentBoundEvent_3_OnSelectionChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                      SelectedItem                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// enum class ESelectInfo             SelectionType                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWG_Op_GraphicPanel_C::BndEvt__WG_Op_GraphicPanel_CMB_GraphicQuality_K2Node_ComponentBoundEvent_3_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, enum class ESelectInfo SelectionType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WG_Op_GraphicPanel_C", "BndEvt__WG_Op_GraphicPanel_CMB_GraphicQuality_K2Node_ComponentBoundEvent_3_OnSelectionChangedEvent__DelegateSignature");

	Params::UWG_Op_GraphicPanel_C_BndEvt__WG_Op_GraphicPanel_CMB_GraphicQuality_K2Node_ComponentBoundEvent_3_OnSelectionChangedEvent__DelegateSignature_Params Parms{};

	Parms.SelectedItem = SelectedItem;
	Parms.SelectionType = SelectionType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WG_Op_GraphicPanel.WG_Op_GraphicPanel_C.BndEvt__WG_Op_GraphicPanel_CMB_TextureQuality_K2Node_ComponentBoundEvent_4_OnSelectionChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                      SelectedItem                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// enum class ESelectInfo             SelectionType                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWG_Op_GraphicPanel_C::BndEvt__WG_Op_GraphicPanel_CMB_TextureQuality_K2Node_ComponentBoundEvent_4_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, enum class ESelectInfo SelectionType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WG_Op_GraphicPanel_C", "BndEvt__WG_Op_GraphicPanel_CMB_TextureQuality_K2Node_ComponentBoundEvent_4_OnSelectionChangedEvent__DelegateSignature");

	Params::UWG_Op_GraphicPanel_C_BndEvt__WG_Op_GraphicPanel_CMB_TextureQuality_K2Node_ComponentBoundEvent_4_OnSelectionChangedEvent__DelegateSignature_Params Parms{};

	Parms.SelectedItem = SelectedItem;
	Parms.SelectionType = SelectionType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WG_Op_GraphicPanel.WG_Op_GraphicPanel_C.BndEvt__WG_Op_GraphicPanel_CMB_ShadowQuality_K2Node_ComponentBoundEvent_8_OnSelectionChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                      SelectedItem                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// enum class ESelectInfo             SelectionType                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWG_Op_GraphicPanel_C::BndEvt__WG_Op_GraphicPanel_CMB_ShadowQuality_K2Node_ComponentBoundEvent_8_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, enum class ESelectInfo SelectionType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WG_Op_GraphicPanel_C", "BndEvt__WG_Op_GraphicPanel_CMB_ShadowQuality_K2Node_ComponentBoundEvent_8_OnSelectionChangedEvent__DelegateSignature");

	Params::UWG_Op_GraphicPanel_C_BndEvt__WG_Op_GraphicPanel_CMB_ShadowQuality_K2Node_ComponentBoundEvent_8_OnSelectionChangedEvent__DelegateSignature_Params Parms{};

	Parms.SelectedItem = SelectedItem;
	Parms.SelectionType = SelectionType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WG_Op_GraphicPanel.WG_Op_GraphicPanel_C.BndEvt__WG_Op_GraphicPanel_CMB_AAQuality_K2Node_ComponentBoundEvent_9_OnSelectionChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                      SelectedItem                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// enum class ESelectInfo             SelectionType                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWG_Op_GraphicPanel_C::BndEvt__WG_Op_GraphicPanel_CMB_AAQuality_K2Node_ComponentBoundEvent_9_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, enum class ESelectInfo SelectionType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WG_Op_GraphicPanel_C", "BndEvt__WG_Op_GraphicPanel_CMB_AAQuality_K2Node_ComponentBoundEvent_9_OnSelectionChangedEvent__DelegateSignature");

	Params::UWG_Op_GraphicPanel_C_BndEvt__WG_Op_GraphicPanel_CMB_AAQuality_K2Node_ComponentBoundEvent_9_OnSelectionChangedEvent__DelegateSignature_Params Parms{};

	Parms.SelectedItem = SelectedItem;
	Parms.SelectionType = SelectionType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WG_Op_GraphicPanel.WG_Op_GraphicPanel_C.BndEvt__WG_Op_GraphicPanel_CMB_VFXQuality_K2Node_ComponentBoundEvent_12_OnSelectionChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                      SelectedItem                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// enum class ESelectInfo             SelectionType                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWG_Op_GraphicPanel_C::BndEvt__WG_Op_GraphicPanel_CMB_VFXQuality_K2Node_ComponentBoundEvent_12_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, enum class ESelectInfo SelectionType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WG_Op_GraphicPanel_C", "BndEvt__WG_Op_GraphicPanel_CMB_VFXQuality_K2Node_ComponentBoundEvent_12_OnSelectionChangedEvent__DelegateSignature");

	Params::UWG_Op_GraphicPanel_C_BndEvt__WG_Op_GraphicPanel_CMB_VFXQuality_K2Node_ComponentBoundEvent_12_OnSelectionChangedEvent__DelegateSignature_Params Parms{};

	Parms.SelectedItem = SelectedItem;
	Parms.SelectionType = SelectionType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WG_Op_GraphicPanel.WG_Op_GraphicPanel_C.BndEvt__WG_Op_GraphicPanel_ComboBoxString_K2Node_ComponentBoundEvent_15_OnSelectionChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                      SelectedItem                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// enum class ESelectInfo             SelectionType                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWG_Op_GraphicPanel_C::BndEvt__WG_Op_GraphicPanel_ComboBoxString_K2Node_ComponentBoundEvent_15_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, enum class ESelectInfo SelectionType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WG_Op_GraphicPanel_C", "BndEvt__WG_Op_GraphicPanel_ComboBoxString_K2Node_ComponentBoundEvent_15_OnSelectionChangedEvent__DelegateSignature");

	Params::UWG_Op_GraphicPanel_C_BndEvt__WG_Op_GraphicPanel_ComboBoxString_K2Node_ComponentBoundEvent_15_OnSelectionChangedEvent__DelegateSignature_Params Parms{};

	Parms.SelectedItem = SelectedItem;
	Parms.SelectionType = SelectionType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WG_Op_GraphicPanel.WG_Op_GraphicPanel_C.BndEvt__WG_Op_GraphicPanel_CB_MotionBlur_K2Node_ComponentBoundEvent_4_OnCheckBoxComponentStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               bIsChecked                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWG_Op_GraphicPanel_C::BndEvt__WG_Op_GraphicPanel_CB_MotionBlur_K2Node_ComponentBoundEvent_4_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WG_Op_GraphicPanel_C", "BndEvt__WG_Op_GraphicPanel_CB_MotionBlur_K2Node_ComponentBoundEvent_4_OnCheckBoxComponentStateChanged__DelegateSignature");

	Params::UWG_Op_GraphicPanel_C_BndEvt__WG_Op_GraphicPanel_CB_MotionBlur_K2Node_ComponentBoundEvent_4_OnCheckBoxComponentStateChanged__DelegateSignature_Params Parms{};

	Parms.bIsChecked = bIsChecked;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WG_Op_GraphicPanel.WG_Op_GraphicPanel_C.BndEvt__WG_Op_GraphicPanel_ComboBoxString_2_K2Node_ComponentBoundEvent_5_OnSelectionChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                      SelectedItem                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// enum class ESelectInfo             SelectionType                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWG_Op_GraphicPanel_C::BndEvt__WG_Op_GraphicPanel_ComboBoxString_2_K2Node_ComponentBoundEvent_5_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, enum class ESelectInfo SelectionType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WG_Op_GraphicPanel_C", "BndEvt__WG_Op_GraphicPanel_ComboBoxString_2_K2Node_ComponentBoundEvent_5_OnSelectionChangedEvent__DelegateSignature");

	Params::UWG_Op_GraphicPanel_C_BndEvt__WG_Op_GraphicPanel_ComboBoxString_2_K2Node_ComponentBoundEvent_5_OnSelectionChangedEvent__DelegateSignature_Params Parms{};

	Parms.SelectedItem = SelectedItem;
	Parms.SelectionType = SelectionType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WG_Op_GraphicPanel.WG_Op_GraphicPanel_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWG_Op_GraphicPanel_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WG_Op_GraphicPanel_C", "PreConstruct");

	Params::UWG_Op_GraphicPanel_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WG_Op_GraphicPanel.WG_Op_GraphicPanel_C.SaveEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWG_Op_GraphicPanel_C::SaveEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WG_Op_GraphicPanel_C", "SaveEvent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WG_Op_GraphicPanel.WG_Op_GraphicPanel_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWG_Op_GraphicPanel_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WG_Op_GraphicPanel_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WG_Op_GraphicPanel.WG_Op_GraphicPanel_C.SaveSettings
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWG_Op_GraphicPanel_C::SaveSettings()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WG_Op_GraphicPanel_C", "SaveSettings");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WG_Op_GraphicPanel.WG_Op_GraphicPanel_C.LoadSettings
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWG_Op_GraphicPanel_C::LoadSettings()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WG_Op_GraphicPanel_C", "LoadSettings");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WG_Op_GraphicPanel.WG_Op_GraphicPanel_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWG_Op_GraphicPanel_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WG_Op_GraphicPanel_C", "Destruct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WG_Op_GraphicPanel.WG_Op_GraphicPanel_C.OnClicked_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWG_Op_GraphicPanel_C::OnClicked_Event()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WG_Op_GraphicPanel_C", "OnClicked_Event");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WG_Op_GraphicPanel.WG_Op_GraphicPanel_C.BndEvt__WG_Op_GraphicPanel_CB_Dlss_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               bIsChecked                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWG_Op_GraphicPanel_C::BndEvt__WG_Op_GraphicPanel_CB_Dlss_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WG_Op_GraphicPanel_C", "BndEvt__WG_Op_GraphicPanel_CB_Dlss_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature");

	Params::UWG_Op_GraphicPanel_C_BndEvt__WG_Op_GraphicPanel_CB_Dlss_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature_Params Parms{};

	Parms.bIsChecked = bIsChecked;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WG_Op_GraphicPanel.WG_Op_GraphicPanel_C.BndEvt__WG_Op_GraphicPanel_CMB_DlssQuality_K2Node_ComponentBoundEvent_1_OnSelectionChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                      SelectedItem                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// enum class ESelectInfo             SelectionType                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWG_Op_GraphicPanel_C::BndEvt__WG_Op_GraphicPanel_CMB_DlssQuality_K2Node_ComponentBoundEvent_1_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, enum class ESelectInfo SelectionType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WG_Op_GraphicPanel_C", "BndEvt__WG_Op_GraphicPanel_CMB_DlssQuality_K2Node_ComponentBoundEvent_1_OnSelectionChangedEvent__DelegateSignature");

	Params::UWG_Op_GraphicPanel_C_BndEvt__WG_Op_GraphicPanel_CMB_DlssQuality_K2Node_ComponentBoundEvent_1_OnSelectionChangedEvent__DelegateSignature_Params Parms{};

	Parms.SelectedItem = SelectedItem;
	Parms.SelectionType = SelectionType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WG_Op_GraphicPanel.WG_Op_GraphicPanel_C.BndEvt__WG_Op_GraphicPanel_CB_Dlss_RR_K2Node_ComponentBoundEvent_3_OnCheckBoxComponentStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               bIsChecked                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWG_Op_GraphicPanel_C::BndEvt__WG_Op_GraphicPanel_CB_Dlss_RR_K2Node_ComponentBoundEvent_3_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WG_Op_GraphicPanel_C", "BndEvt__WG_Op_GraphicPanel_CB_Dlss_RR_K2Node_ComponentBoundEvent_3_OnCheckBoxComponentStateChanged__DelegateSignature");

	Params::UWG_Op_GraphicPanel_C_BndEvt__WG_Op_GraphicPanel_CB_Dlss_RR_K2Node_ComponentBoundEvent_3_OnCheckBoxComponentStateChanged__DelegateSignature_Params Parms{};

	Parms.bIsChecked = bIsChecked;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WG_Op_GraphicPanel.WG_Op_GraphicPanel_C.RefreshDLSSModes
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWG_Op_GraphicPanel_C::RefreshDLSSModes()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WG_Op_GraphicPanel_C", "RefreshDLSSModes");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WG_Op_GraphicPanel.WG_Op_GraphicPanel_C.BenchmarkText
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWG_Op_GraphicPanel_C::BenchmarkText()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WG_Op_GraphicPanel_C", "BenchmarkText");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WG_Op_GraphicPanel.WG_Op_GraphicPanel_C.ExecuteUbergraph_WG_Op_GraphicPanel
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetDLSSModeInformation_bIsSupported                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetDLSSModeInformation_OptimalScreenPercentage          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetDLSSModeInformation_bIsFixedScreenPercentage         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetDLSSModeInformation_MinScreenPercentage              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetDLSSModeInformation_MaxScreenPercentage              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetDLSSModeInformation_OptimalSharpness                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SelectFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_DoubleToString_ReturnValue                         (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class USaveGame*                   K2Node_CustomEvent_SaveGame_12                                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bSuccess_12                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USaveGame*                   Temp_object_Variable                                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class USettings_SG_C*              K2Node_DynamicCast_AsSettings_SG                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAsyncActionHandleSaveGame*  CallFunc_AsyncLoadGameFromSlot_ReturnValue                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// class USaveGame*                   K2Node_CustomEvent_SaveGame_11                                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bSuccess_11                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USaveGame*                   Temp_object_Variable_1                                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class USettings_SG_C*              K2Node_DynamicCast_AsSettings_SG_1                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAsyncActionHandleSaveGame*  CallFunc_AsyncLoadGameFromSlot_ReturnValue_1                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAsyncActionHandleSaveGame*  CallFunc_AsyncSaveGameToSlot_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class USaveGame*                   K2Node_CustomEvent_SaveGame_10                                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bSuccess_10                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USaveGame*                   Temp_object_Variable_2                                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAsyncActionHandleSaveGame*  CallFunc_AsyncSaveGameToSlot_ReturnValue_1                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class USettings_SG_C*              K2Node_DynamicCast_AsSettings_SG_2                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_BoolToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class UAsyncActionHandleSaveGame*  CallFunc_AsyncLoadGameFromSlot_ReturnValue_2                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USaveGame*                   K2Node_CustomEvent_SaveGame_9                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bSuccess_9                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USaveGame*                   Temp_object_Variable_3                                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAsyncActionHandleSaveGame*  CallFunc_AsyncSaveGameToSlot_ReturnValue_2                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class USettings_SG_C*              K2Node_DynamicCast_AsSettings_SG_3                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_5                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_BoolToString_ReturnValue_1                         (ZeroConstructor, HasGetValueTypeHash)
// class UAsyncActionHandleSaveGame*  CallFunc_AsyncLoadGameFromSlot_ReturnValue_3                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_6                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USaveGame*                   K2Node_CustomEvent_SaveGame_8                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bSuccess_8                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USaveGame*                   Temp_object_Variable_4                                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class USaveGame*                   K2Node_CustomEvent_SaveGame_7                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bSuccess_7                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_6                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_5                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USaveGame*                   Temp_object_Variable_5                                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_7                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class USaveGame*                   K2Node_CustomEvent_SaveGame_6                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bSuccess_6                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_6                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USaveGame*                   Temp_object_Variable_6                                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class USaveGame*                   K2Node_CustomEvent_SaveGame_5                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bSuccess_5                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_8                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_7                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USaveGame*                   Temp_object_Variable_7                                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class USaveGame*                   K2Node_CustomEvent_SaveGame_4                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_9                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_8                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USaveGame*                   Temp_object_Variable_8                                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_10                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class USaveGame*                   K2Node_CustomEvent_SaveGame_3                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_9                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USaveGame*                   Temp_object_Variable_9                                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class USettings_SG_C*              K2Node_DynamicCast_AsSettings_SG_4                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAsyncActionHandleSaveGame*  CallFunc_AsyncLoadGameFromSlot_ReturnValue_4                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAsyncActionHandleSaveGame*  CallFunc_AsyncSaveGameToSlot_ReturnValue_3                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_7                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_8                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_11                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class USaveGame*                   K2Node_CustomEvent_SaveGame_2                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_10                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USaveGame*                   Temp_object_Variable_10                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_11                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_12                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_13                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_14                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable                                               (None)
// class FText                        Temp_text_Variable_1                                             (None)
// class USaveGame*                   K2Node_CustomEvent_SaveGame_1                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_12                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_15                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USaveGame*                   Temp_object_Variable_11                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class USettings_SG_C*              K2Node_DynamicCast_AsSettings_SG_5                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_5                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAsyncActionHandleSaveGame*  CallFunc_AsyncLoadGameFromSlot_ReturnValue_5                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select_Default                                            (None)
// bool                               CallFunc_IsValid_ReturnValue_9                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_16                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_17                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_MakeLiteralByte_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_4                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetDLSSModeInformation_bIsSupported_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetDLSSModeInformation_OptimalScreenPercentage_1        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetDLSSModeInformation_bIsFixedScreenPercentage_1       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetDLSSModeInformation_MinScreenPercentage_1            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetDLSSModeInformation_MaxScreenPercentage_1            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetDLSSModeInformation_OptimalSharpness_1               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_5                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SelectFloat_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_DoubleToString_ReturnValue_1                       (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// uint8                              CallFunc_MakeLiteralByte_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_4                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_6                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetDLSSModeInformation_bIsSupported_2                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetDLSSModeInformation_OptimalScreenPercentage_2        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetDLSSModeInformation_bIsFixedScreenPercentage_2       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetDLSSModeInformation_MinScreenPercentage_2            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetDLSSModeInformation_MaxScreenPercentage_2            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetDLSSModeInformation_OptimalSharpness_2               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_7                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SelectFloat_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_8                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_DoubleToString_ReturnValue_2                       (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_18                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable_2                                             (None)
// class FText                        Temp_text_Variable_3                                             (None)
// class USaveGame*                   K2Node_CustomEvent_SaveGame                                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_13                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_19                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USaveGame*                   Temp_object_Variable_12                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class USettings_SG_C*              K2Node_DynamicCast_AsSettings_SG_6                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_6                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAsyncActionHandleSaveGame*  CallFunc_AsyncLoadGameFromSlot_ReturnValue_6                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select_Default_1                                          (None)
// bool                               CallFunc_IsValid_ReturnValue_10                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_GetViewportSize_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetDLSSModeInformation_bIsSupported_3                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetDLSSModeInformation_OptimalScreenPercentage_3        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetDLSSModeInformation_bIsFixedScreenPercentage_3       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetDLSSModeInformation_MinScreenPercentage_3            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetDLSSModeInformation_MaxScreenPercentage_3            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetDLSSModeInformation_OptimalSharpness_3               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_GetViewportSize_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetDLSSModeInformation_bIsSupported_4                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetDLSSModeInformation_OptimalScreenPercentage_4        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetDLSSModeInformation_bIsFixedScreenPercentage_4       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetDLSSModeInformation_MinScreenPercentage_4            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetDLSSModeInformation_MaxScreenPercentage_4            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetDLSSModeInformation_OptimalSharpness_4               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_9                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_4                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SelectFloat_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_10                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_DoubleToString_ReturnValue_3                       (ZeroConstructor, HasGetValueTypeHash)
// double                             CallFunc_SelectFloat_ReturnValue_4                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_3                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_DoubleToString_ReturnValue_4                       (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_4                             (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_11                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_12                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_13                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAsyncActionHandleSaveGame*  CallFunc_AsyncLoadGameFromSlot_ReturnValue_7                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_14                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_11                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_GetViewportSize_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USaveGame*                   Temp_object_Variable_13                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetDLSSModeInformation_bIsSupported_5                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetDLSSModeInformation_OptimalScreenPercentage_5        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetDLSSModeInformation_bIsFixedScreenPercentage_5       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetDLSSModeInformation_MinScreenPercentage_5            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetDLSSModeInformation_MaxScreenPercentage_5            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetDLSSModeInformation_OptimalSharpness_5               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAsyncActionHandleSaveGame*  CallFunc_AsyncSaveGameToSlot_ReturnValue_4                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_2                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_12                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_5                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_15                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_16                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SelectFloat_ReturnValue_5                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_17                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_DoubleToString_ReturnValue_5                       (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_5                             (ZeroConstructor, HasGetValueTypeHash)
// class USettings_SG_C*              K2Node_DynamicCast_AsSettings_SG_7                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_7                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_GetViewportSize_ReturnValue_3                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_20                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetDLSSModeInformation_bIsSupported_6                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetDLSSModeInformation_OptimalScreenPercentage_6        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetDLSSModeInformation_bIsFixedScreenPercentage_6       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetDLSSModeInformation_MinScreenPercentage_6            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetDLSSModeInformation_MaxScreenPercentage_6            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetDLSSModeInformation_OptimalSharpness_6               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_GetViewportSize_ReturnValue_4                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_3                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetDLSSModeInformation_bIsSupported_7                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetDLSSModeInformation_OptimalScreenPercentage_7        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetDLSSModeInformation_bIsFixedScreenPercentage_7       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetDLSSModeInformation_MinScreenPercentage_7            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetDLSSModeInformation_MaxScreenPercentage_7            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetDLSSModeInformation_OptimalSharpness_7               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_4                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_6                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_4                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_18                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_7                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SelectFloat_ReturnValue_6                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_19                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_DoubleToString_ReturnValue_6                       (ZeroConstructor, HasGetValueTypeHash)
// double                             CallFunc_SelectFloat_ReturnValue_7                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_6                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_DoubleToString_ReturnValue_7                       (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_7                             (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_20                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_21                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_22                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_23                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USaveGame*                   K2Node_CustomEvent_SaveGame_19                                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bSuccess_19                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_14                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_bIsChecked_3                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_ComponentBoundEvent_SelectedItem_9                        (ZeroConstructor, HasGetValueTypeHash)
// enum class ESelectInfo             K2Node_ComponentBoundEvent_SelectionType_9                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StriStri_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StriStri_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StriStri_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_ComponentBoundEvent_SelectedItem_8                        (ZeroConstructor, HasGetValueTypeHash)
// enum class ESelectInfo             K2Node_ComponentBoundEvent_SelectionType_8                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_ComponentBoundEvent_SelectedItem_7                        (ZeroConstructor, HasGetValueTypeHash)
// enum class ESelectInfo             K2Node_ComponentBoundEvent_SelectionType_7                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_ComponentBoundEvent_SelectedItem_6                        (ZeroConstructor, HasGetValueTypeHash)
// enum class ESelectInfo             K2Node_ComponentBoundEvent_SelectionType_6                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_ComponentBoundEvent_SelectedItem_5                        (ZeroConstructor, HasGetValueTypeHash)
// enum class ESelectInfo             K2Node_ComponentBoundEvent_SelectionType_5                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_ComponentBoundEvent_SelectedItem_4                        (ZeroConstructor, HasGetValueTypeHash)
// enum class ESelectInfo             K2Node_ComponentBoundEvent_SelectionType_4                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_ComponentBoundEvent_SelectedItem_3                        (ZeroConstructor, HasGetValueTypeHash)
// enum class ESelectInfo             K2Node_ComponentBoundEvent_SelectionType_3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_ComponentBoundEvent_SelectedItem_2                        (ZeroConstructor, HasGetValueTypeHash)
// enum class ESelectInfo             K2Node_ComponentBoundEvent_SelectionType_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FIntPoint                   CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_15                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetSelectedIndex_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_MakeLiteralText_ReturnValue                             (None)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StriStri_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_1                           (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_1                         (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_2                           (None)
// bool                               CallFunc_EqualEqual_StriStri_ReturnValue_4                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_2                         (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StriStri_ReturnValue_5                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_3                           (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_3                         (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_4                           (None)
// bool                               CallFunc_EqualEqual_StriStri_ReturnValue_6                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_4                         (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StriStri_ReturnValue_7                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_5                           (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_5                         (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_6                           (None)
// bool                               CallFunc_EqualEqual_StriStri_ReturnValue_8                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_6                         (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StriStri_ReturnValue_9                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_7                           (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_7                         (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_8                           (None)
// bool                               CallFunc_EqualEqual_StriStri_ReturnValue_10                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_8                         (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StriStri_ReturnValue_11                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_9                           (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_9                         (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_10                          (None)
// bool                               CallFunc_EqualEqual_StriStri_ReturnValue_12                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_10                        (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StriStri_ReturnValue_13                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_11                          (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_11                        (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_12                          (None)
// bool                               CallFunc_EqualEqual_StriStri_ReturnValue_14                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_12                        (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StriStri_ReturnValue_15                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_13                          (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_13                        (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_14                          (None)
// bool                               CallFunc_EqualEqual_StriStri_ReturnValue_16                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_14                        (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StriStri_ReturnValue_17                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_15                          (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_15                        (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_16                          (None)
// bool                               CallFunc_EqualEqual_StriStri_ReturnValue_18                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_16                        (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StriStri_ReturnValue_19                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_17                          (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_17                        (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_18                          (None)
// bool                               CallFunc_EqualEqual_StriStri_ReturnValue_20                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_18                        (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StriStri_ReturnValue_21                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_19                          (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_19                        (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_20                          (None)
// bool                               CallFunc_EqualEqual_StriStri_ReturnValue_22                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_20                        (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StriStri_ReturnValue_23                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_21                          (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_21                        (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_22                          (None)
// bool                               CallFunc_EqualEqual_StriStri_ReturnValue_24                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_22                        (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StriStri_ReturnValue_25                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_23                          (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_23                        (ZeroConstructor, HasGetValueTypeHash)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StriStri_ReturnValue_26                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue_1                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue_2                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue_3                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_bIsChecked_2                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAsyncActionHandleSaveGame*  CallFunc_AsyncLoadGameFromSlot_ReturnValue_8                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_13                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_ComponentBoundEvent_SelectedItem_1                        (ZeroConstructor, HasGetValueTypeHash)
// enum class ESelectInfo             K2Node_ComponentBoundEvent_SelectionType_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Conv_StringToDouble_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Conv_StringToDouble_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USaveGame*                   Temp_object_Variable_14                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_21                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAsyncActionHandleSaveGame*  CallFunc_AsyncSaveGameToSlot_ReturnValue_5                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class USettings_SG_C*              K2Node_DynamicCast_AsSettings_SG_8                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_8                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_14                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPlayerController*           CallFunc_GetOwningPlayer_ReturnValue_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPawn*                       CallFunc_K2_GetPawn_ReturnValue_1                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UB_DemoCharacter_C*          K2Node_DynamicCast_AsB_Demo_Character                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_9                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UB_DemoCharacter_C*          K2Node_DynamicCast_AsB_Demo_Character_1                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_10                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_24                          (None)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_25                          (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_24                        (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_25                        (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_26                          (None)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_27                          (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_26                        (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_28                          (None)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_29                          (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_27                        (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_30                          (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_28                        (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_31                          (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_29                        (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_32                          (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_30                        (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_33                          (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_31                        (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_34                          (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_32                        (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_35                          (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_33                        (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_36                          (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_34                        (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_37                          (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_35                        (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_38                          (None)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_39                          (None)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue_4                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FIntPoint                   CallFunc_GetScreenResolution_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              CallFunc_Conv_IntToInt64_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              CallFunc_Conv_IntToInt64_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// class USaveGame*                   Temp_object_Variable_15                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// bool                               Temp_bool_Variable_22                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_36                        (ZeroConstructor, HasGetValueTypeHash)
// class USaveGame*                   K2Node_CustomEvent_SaveGame_13                                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bSuccess_13                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_16                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue_5                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FIntPoint                   CallFunc_GetScreenResolution_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USaveGame*                   Temp_object_Variable_16                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)
// class FText                        CallFunc_Conv_IntToText_ReturnValue_1                            (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_2                           (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_3                           (HasGetValueTypeHash)
// bool                               Temp_bool_Variable_23                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_1                                         (ReferenceParm)
// class USaveGame*                   K2Node_CustomEvent_SaveGame_14                                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bSuccess_14                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Format_ReturnValue_1                                    (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_37                        (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_38                        (ZeroConstructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class USaveGame*                   K2Node_CustomEvent_SaveGame_20                                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bSuccess_20                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGI_Contain_C*               K2Node_DynamicCast_AsGI_Contain                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_11                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              CallFunc_Conv_IntToInt64_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_4                           (HasGetValueTypeHash)
// struct FIntPoint                   K2Node_MakeStruct_IntPoint                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              CallFunc_Conv_IntToInt64_ReturnValue_3                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_5                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_2                                         (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue_2                                    (None)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_39                        (ZeroConstructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_17                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue_6                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_18                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_DoesSaveGameExist_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USettings_SG_C*              CallFunc_CreateSaveGameObject_ReturnValue                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAsyncActionHandleSaveGame*  CallFunc_AsyncSaveGameToSlot_ReturnValue_6                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_15                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_bIsChecked_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_ComponentBoundEvent_SelectedItem                          (ZeroConstructor, HasGetValueTypeHash)
// enum class ESelectInfo             K2Node_ComponentBoundEvent_SelectionType                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StriStri_ReturnValue_27                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StriStri_ReturnValue_28                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StriStri_ReturnValue_29                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StriStri_ReturnValue_30                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StriStri_ReturnValue_31                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StriStri_ReturnValue_32                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StriStri_ReturnValue_33                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_bIsChecked                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_DoesSaveGameExist_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USettings_SG_C*              CallFunc_CreateSaveGameObject_ReturnValue_1                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAsyncActionHandleSaveGame*  CallFunc_AsyncSaveGameToSlot_ReturnValue_7                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_16                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_MakeLiteralByte_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FIntPoint>           CallFunc_GetSupportedFullscreenResolutions_Resolutions           (ReferenceParm)
// bool                               CallFunc_GetSupportedFullscreenResolutions_ReturnValue           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FIntPoint                   CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_5                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue_2                            (None)
// class FText                        CallFunc_Conv_IntToText_ReturnValue_3                            (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_6                           (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_7                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_3                                         (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Format_ReturnValue_3                                    (None)
// bool                               CallFunc_Less_IntInt_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_40                        (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAsyncActionHandleSaveGame*  CallFunc_AsyncLoadGameFromSlot_ReturnValue_9                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue_7                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FIntPoint                   CallFunc_GetScreenResolution_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_17                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue_4                            (None)
// class FText                        CallFunc_Conv_IntToText_ReturnValue_5                            (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_8                           (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_9                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_4                                         (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue_4                                    (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_41                        (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_DLSS_SR_Enabled_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_40                          (None)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_41                          (None)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_42                          (None)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_43                          (None)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_44                          (None)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_45                          (None)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_46                          (None)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_47                          (None)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_48                          (None)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_49                          (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_42                        (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_43                        (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_50                          (None)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_51                          (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_44                        (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_45                        (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_52                          (None)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_53                          (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_46                        (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_47                        (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_54                          (None)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_55                          (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_48                        (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_49                        (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_56                          (None)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_57                          (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_50                        (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_51                        (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_58                          (None)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_59                          (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_52                        (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_53                        (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_60                          (None)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_61                          (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_54                        (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_55                        (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_62                          (None)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_63                          (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_56                        (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_57                        (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_64                          (None)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_65                          (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_58                        (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_59                        (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_66                          (None)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_67                          (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_60                        (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_61                        (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_68                          (None)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_69                          (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_62                        (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_63                        (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_70                          (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_64                        (ZeroConstructor, HasGetValueTypeHash)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue_8                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetAntiAliasingQuality_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_MakeLiteralByte_ReturnValue_3                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_6                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_24                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_7                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_8                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetDLSSModeInformation_bIsSupported_8                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetDLSSModeInformation_OptimalScreenPercentage_8        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetDLSSModeInformation_bIsFixedScreenPercentage_8       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetDLSSModeInformation_MinScreenPercentage_8            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetDLSSModeInformation_MaxScreenPercentage_8            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetDLSSModeInformation_OptimalSharpness_8               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_25                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SelectFloat_ReturnValue_8                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_26                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_DoubleToString_ReturnValue_8                       (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_8                             (ZeroConstructor, HasGetValueTypeHash)
// class USaveGame*                   Temp_object_Variable_17                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAsyncActionHandleSaveGame*  CallFunc_AsyncSaveGameToSlot_ReturnValue_8                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_18                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USettings_SG_C*              K2Node_DynamicCast_AsSettings_SG_9                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_12                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue_9                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EWindowMode             CallFunc_GetFullscreenMode_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_24                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue_10                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetViewDistanceQuality_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Select_Default_2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetVisualEffectQuality_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue_11                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetViewDistanceQuality_ReturnValue_1                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetShadowQuality_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Select_Default_3                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue_12                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetTextureQuality_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USaveGame*                   K2Node_CustomEvent_SaveGame_15                                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bSuccess_15                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_GetViewportSize_ReturnValue_5                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetDLSSModeInformation_bIsSupported_9                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetDLSSModeInformation_OptimalScreenPercentage_9        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetDLSSModeInformation_bIsFixedScreenPercentage_9       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetDLSSModeInformation_MinScreenPercentage_9            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetDLSSModeInformation_MaxScreenPercentage_9            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetDLSSModeInformation_OptimalSharpness_9               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_5                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue_13                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_5                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetViewDistanceQuality_ReturnValue_2                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_9                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess_4                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_27                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_28                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SelectFloat_ReturnValue_9                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_29                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_DoubleToString_ReturnValue_9                       (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_9                             (ZeroConstructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_19                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue_14                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFrameRateLimit_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_3                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAsyncActionHandleSaveGame*  CallFunc_AsyncLoadGameFromSlot_ReturnValue_10                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_8                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_30                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_10                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_19                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_31                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_32                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetDLSSModeInformation_bIsSupported_10                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetDLSSModeInformation_OptimalScreenPercentage_10       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetDLSSModeInformation_bIsFixedScreenPercentage_10      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetDLSSModeInformation_MinScreenPercentage_10           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetDLSSModeInformation_MaxScreenPercentage_10           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetDLSSModeInformation_OptimalSharpness_10              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USaveGame*                   Temp_object_Variable_18                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SelectFloat_ReturnValue_10                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAsyncActionHandleSaveGame*  CallFunc_AsyncSaveGameToSlot_ReturnValue_9                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_DoubleToString_ReturnValue_10                      (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_10                            (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_20                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USettings_SG_C*              K2Node_DynamicCast_AsSettings_SG_10                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_13                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_25                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USaveGame*                   K2Node_CustomEvent_SaveGame_16                                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bSuccess_16                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_20                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_MakeLiteralByte_ReturnValue_4                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_71                          (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_65                        (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_9                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_72                          (None)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_73                          (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_66                        (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_67                        (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_74                          (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_68                        (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_75                          (None)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_76                          (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_69                        (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_70                        (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_77                          (None)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_78                          (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_71                        (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_72                        (ZeroConstructor, HasGetValueTypeHash)
// class USaveGame*                   Temp_object_Variable_19                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_79                          (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_73                        (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_80                          (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_74                        (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_81                          (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_75                        (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_82                          (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_76                        (ZeroConstructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_26                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_83                          (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_77                        (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_84                          (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_78                        (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_85                          (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_79                        (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_86                          (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_80                        (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_87                          (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_81                        (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_88                          (None)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_89                          (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_82                        (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_83                        (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_90                          (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_84                        (ZeroConstructor, HasGetValueTypeHash)
// class USaveGame*                   K2Node_CustomEvent_SaveGame_17                                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bSuccess_17                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_10                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetDLSSModeInformation_bIsSupported_11                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetDLSSModeInformation_OptimalScreenPercentage_11       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetDLSSModeInformation_bIsFixedScreenPercentage_11      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetDLSSModeInformation_MinScreenPercentage_11           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetDLSSModeInformation_MaxScreenPercentage_11           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetDLSSModeInformation_OptimalSharpness_11              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_33                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_11                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SelectFloat_ReturnValue_11                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_34                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_DoubleToString_ReturnValue_11                      (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_35                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_11                            (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_91                          (None)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_92                          (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_85                        (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_86                        (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_87                        (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_88                        (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_93                          (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_89                        (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_90                        (ZeroConstructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_21                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_94                          (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_91                        (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_92                        (ZeroConstructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_GetViewportSize_ReturnValue_6                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USaveGame*                   Temp_object_Variable_20                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetDLSSModeInformation_bIsSupported_12                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetDLSSModeInformation_OptimalScreenPercentage_12       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetDLSSModeInformation_bIsFixedScreenPercentage_12      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetDLSSModeInformation_MinScreenPercentage_12           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetDLSSModeInformation_MaxScreenPercentage_12           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetDLSSModeInformation_OptimalSharpness_12              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_27                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_6                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_MakeLiteralByte_ReturnValue_5                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_6                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_12                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_11                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_36                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SelectFloat_ReturnValue_12                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_DoubleToString_ReturnValue_12                      (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_37                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_12                            (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_38                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USaveGame*                   K2Node_CustomEvent_SaveGame_18                                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bSuccess_18                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_22                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FIntPoint                   CallFunc_Array_Get_Item_2                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntPointToString_ReturnValue                       (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_RemoveOption_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue_15                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EWindowMode             CallFunc_GetFullscreenMode_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFrameRateLimit_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_DoubleDouble_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_DoubleDouble_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_DoubleDouble_ReturnValue_2                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_DoubleDouble_ReturnValue_3                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_12                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_39                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_13                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetDLSSModeInformation_bIsSupported_13                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetDLSSModeInformation_OptimalScreenPercentage_13       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetDLSSModeInformation_bIsFixedScreenPercentage_13      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetDLSSModeInformation_MinScreenPercentage_13           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetDLSSModeInformation_MaxScreenPercentage_13           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetDLSSModeInformation_OptimalSharpness_13              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_40                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SelectFloat_ReturnValue_13                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_41                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_DoubleToString_ReturnValue_13                      (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_13                            (ZeroConstructor, HasGetValueTypeHash)
// uint8                              CallFunc_MakeLiteralByte_ReturnValue_6                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_13                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue_16                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetAntiAliasingQuality_ReturnValue_1                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetVisualEffectQuality_ReturnValue_1                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetShadowQuality_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetTextureQuality_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SelectFloat_B_ImplicitCast                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SelectFloat_B_ImplicitCast_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SelectFloat_B_ImplicitCast_2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SelectFloat_B_ImplicitCast_3                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Greater_DoubleDouble_A_ImplicitCast                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SelectFloat_B_ImplicitCast_4                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Greater_DoubleDouble_A_ImplicitCast_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SelectFloat_B_ImplicitCast_5                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Greater_DoubleDouble_A_ImplicitCast_2                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SelectFloat_B_ImplicitCast_6                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Greater_DoubleDouble_A_ImplicitCast_3                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SelectFloat_B_ImplicitCast_7                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Greater_DoubleDouble_A_ImplicitCast_4                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetFieldOfView_InFieldOfView_ImplicitCast               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetFieldOfView_InFieldOfView_ImplicitCast_1             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetFrameRateLimit_NewLimit_ImplicitCast                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SelectFloat_B_ImplicitCast_8                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SelectFloat_B_ImplicitCast_9                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Greater_DoubleDouble_A_ImplicitCast_5                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FTrunc_A_ImplicitCast                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SelectFloat_B_ImplicitCast_10                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SelectFloat_B_ImplicitCast_11                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SelectFloat_B_ImplicitCast_12                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Greater_DoubleDouble_A_ImplicitCast_6                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast_1                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast_2                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast_3                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SelectFloat_B_ImplicitCast_13                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWG_Op_GraphicPanel_C::ExecuteUbergraph_WG_Op_GraphicPanel(int32 EntryPoint, bool CallFunc_EqualEqual_ByteByte_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_GetDLSSModeInformation_bIsSupported, float CallFunc_GetDLSSModeInformation_OptimalScreenPercentage, bool CallFunc_GetDLSSModeInformation_bIsFixedScreenPercentage, float CallFunc_GetDLSSModeInformation_MinScreenPercentage, float CallFunc_GetDLSSModeInformation_MaxScreenPercentage, float CallFunc_GetDLSSModeInformation_OptimalSharpness, bool CallFunc_BooleanOR_ReturnValue_1, double CallFunc_SelectFloat_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_2, const class FString& CallFunc_Conv_DoubleToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, class USaveGame* K2Node_CustomEvent_SaveGame_12, bool K2Node_CustomEvent_bSuccess_12, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool Temp_bool_Variable, class USaveGame* Temp_object_Variable, class USettings_SG_C* K2Node_DynamicCast_AsSettings_SG, bool K2Node_DynamicCast_bSuccess, class UAsyncActionHandleSaveGame* CallFunc_AsyncLoadGameFromSlot_ReturnValue, bool CallFunc_IsValid_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, class USaveGame* K2Node_CustomEvent_SaveGame_11, bool K2Node_CustomEvent_bSuccess_11, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, bool Temp_bool_Variable_1, class USaveGame* Temp_object_Variable_1, class USettings_SG_C* K2Node_DynamicCast_AsSettings_SG_1, bool K2Node_DynamicCast_bSuccess_1, class UAsyncActionHandleSaveGame* CallFunc_AsyncLoadGameFromSlot_ReturnValue_1, class UAsyncActionHandleSaveGame* CallFunc_AsyncSaveGameToSlot_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class USaveGame* K2Node_CustomEvent_SaveGame_10, bool K2Node_CustomEvent_bSuccess_10, bool Temp_bool_Variable_2, class USaveGame* Temp_object_Variable_2, class UAsyncActionHandleSaveGame* CallFunc_AsyncSaveGameToSlot_ReturnValue_1, class USettings_SG_C* K2Node_DynamicCast_AsSettings_SG_2, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_IsValid_ReturnValue_3, const class FString& CallFunc_Conv_BoolToString_ReturnValue, class UAsyncActionHandleSaveGame* CallFunc_AsyncLoadGameFromSlot_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, bool CallFunc_IsValid_ReturnValue_4, class USaveGame* K2Node_CustomEvent_SaveGame_9, bool K2Node_CustomEvent_bSuccess_9, bool Temp_bool_Variable_3, class USaveGame* Temp_object_Variable_3, class UAsyncActionHandleSaveGame* CallFunc_AsyncSaveGameToSlot_ReturnValue_2, class USettings_SG_C* K2Node_DynamicCast_AsSettings_SG_3, bool K2Node_DynamicCast_bSuccess_3, bool CallFunc_IsValid_ReturnValue_5, const class FString& CallFunc_Conv_BoolToString_ReturnValue_1, class UAsyncActionHandleSaveGame* CallFunc_AsyncLoadGameFromSlot_ReturnValue_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, bool CallFunc_IsValid_ReturnValue_6, class USaveGame* K2Node_CustomEvent_SaveGame_8, bool K2Node_CustomEvent_bSuccess_8, bool Temp_bool_Variable_4, class USaveGame* Temp_object_Variable_4, class USaveGame* K2Node_CustomEvent_SaveGame_7, bool K2Node_CustomEvent_bSuccess_7, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, bool Temp_bool_Variable_5, class USaveGame* Temp_object_Variable_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, class USaveGame* K2Node_CustomEvent_SaveGame_6, bool K2Node_CustomEvent_bSuccess_6, bool Temp_bool_Variable_6, class USaveGame* Temp_object_Variable_6, class USaveGame* K2Node_CustomEvent_SaveGame_5, bool K2Node_CustomEvent_bSuccess_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, bool Temp_bool_Variable_7, class USaveGame* Temp_object_Variable_7, class USaveGame* K2Node_CustomEvent_SaveGame_4, bool K2Node_CustomEvent_bSuccess_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_9, bool Temp_bool_Variable_8, class USaveGame* Temp_object_Variable_8, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_10, class USaveGame* K2Node_CustomEvent_SaveGame_3, bool K2Node_CustomEvent_bSuccess_3, bool Temp_bool_Variable_9, class USaveGame* Temp_object_Variable_9, class USettings_SG_C* K2Node_DynamicCast_AsSettings_SG_4, bool K2Node_DynamicCast_bSuccess_4, class UAsyncActionHandleSaveGame* CallFunc_AsyncLoadGameFromSlot_ReturnValue_4, class UAsyncActionHandleSaveGame* CallFunc_AsyncSaveGameToSlot_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_7, bool CallFunc_IsValid_ReturnValue_8, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_11, class USaveGame* K2Node_CustomEvent_SaveGame_2, bool K2Node_CustomEvent_bSuccess_2, bool Temp_bool_Variable_10, class USaveGame* Temp_object_Variable_10, int32 Temp_int_Variable, bool Temp_bool_Variable_11, bool Temp_bool_Variable_12, bool Temp_bool_Variable_13, bool Temp_bool_Variable_14, class FText Temp_text_Variable, class FText Temp_text_Variable_1, class USaveGame* K2Node_CustomEvent_SaveGame_1, bool K2Node_CustomEvent_bSuccess_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_12, bool Temp_bool_Variable_15, class USaveGame* Temp_object_Variable_11, class USettings_SG_C* K2Node_DynamicCast_AsSettings_SG_5, bool K2Node_DynamicCast_bSuccess_5, class UAsyncActionHandleSaveGame* CallFunc_AsyncLoadGameFromSlot_ReturnValue_5, class FText K2Node_Select_Default, bool CallFunc_IsValid_ReturnValue_9, int32 Temp_int_Variable_1, bool Temp_bool_Variable_16, bool Temp_bool_Variable_17, uint8 CallFunc_MakeLiteralByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue_3, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_4, bool CallFunc_GetDLSSModeInformation_bIsSupported_1, float CallFunc_GetDLSSModeInformation_OptimalScreenPercentage_1, bool CallFunc_GetDLSSModeInformation_bIsFixedScreenPercentage_1, float CallFunc_GetDLSSModeInformation_MinScreenPercentage_1, float CallFunc_GetDLSSModeInformation_MaxScreenPercentage_1, float CallFunc_GetDLSSModeInformation_OptimalSharpness_1, bool CallFunc_BooleanOR_ReturnValue_5, double CallFunc_SelectFloat_ReturnValue_1, const class FString& CallFunc_Conv_DoubleToString_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, uint8 CallFunc_MakeLiteralByte_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_3, bool CallFunc_EqualEqual_ByteByte_ReturnValue_4, bool CallFunc_BooleanOR_ReturnValue_6, bool CallFunc_Not_PreBool_ReturnValue_2, bool CallFunc_GetDLSSModeInformation_bIsSupported_2, float CallFunc_GetDLSSModeInformation_OptimalScreenPercentage_2, bool CallFunc_GetDLSSModeInformation_bIsFixedScreenPercentage_2, float CallFunc_GetDLSSModeInformation_MinScreenPercentage_2, float CallFunc_GetDLSSModeInformation_MaxScreenPercentage_2, float CallFunc_GetDLSSModeInformation_OptimalSharpness_2, bool CallFunc_BooleanOR_ReturnValue_7, double CallFunc_SelectFloat_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue_8, const class FString& CallFunc_Conv_DoubleToString_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, bool Temp_bool_Variable_18, class FText Temp_text_Variable_2, class FText Temp_text_Variable_3, class USaveGame* K2Node_CustomEvent_SaveGame, bool K2Node_CustomEvent_bSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_13, bool Temp_bool_Variable_19, class USaveGame* Temp_object_Variable_12, class USettings_SG_C* K2Node_DynamicCast_AsSettings_SG_6, bool K2Node_DynamicCast_bSuccess_6, class UAsyncActionHandleSaveGame* CallFunc_AsyncLoadGameFromSlot_ReturnValue_6, class FText K2Node_Select_Default_1, bool CallFunc_IsValid_ReturnValue_10, const struct FVector2D& CallFunc_GetViewportSize_ReturnValue, bool CallFunc_GetDLSSModeInformation_bIsSupported_3, float CallFunc_GetDLSSModeInformation_OptimalScreenPercentage_3, bool CallFunc_GetDLSSModeInformation_bIsFixedScreenPercentage_3, float CallFunc_GetDLSSModeInformation_MinScreenPercentage_3, float CallFunc_GetDLSSModeInformation_MaxScreenPercentage_3, float CallFunc_GetDLSSModeInformation_OptimalSharpness_3, const struct FVector2D& CallFunc_GetViewportSize_ReturnValue_1, bool CallFunc_Greater_DoubleDouble_ReturnValue, bool CallFunc_GetDLSSModeInformation_bIsSupported_4, float CallFunc_GetDLSSModeInformation_OptimalScreenPercentage_4, bool CallFunc_GetDLSSModeInformation_bIsFixedScreenPercentage_4, float CallFunc_GetDLSSModeInformation_MinScreenPercentage_4, float CallFunc_GetDLSSModeInformation_MaxScreenPercentage_4, float CallFunc_GetDLSSModeInformation_OptimalSharpness_4, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_3, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_9, bool CallFunc_Not_PreBool_ReturnValue_4, double CallFunc_SelectFloat_ReturnValue_3, bool CallFunc_BooleanOR_ReturnValue_10, const class FString& CallFunc_Conv_DoubleToString_ReturnValue_3, double CallFunc_SelectFloat_ReturnValue_4, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, const class FString& CallFunc_Conv_DoubleToString_ReturnValue_4, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, bool CallFunc_BooleanOR_ReturnValue_11, bool CallFunc_BooleanOR_ReturnValue_12, bool CallFunc_BooleanOR_ReturnValue_13, class UAsyncActionHandleSaveGame* CallFunc_AsyncLoadGameFromSlot_ReturnValue_7, bool CallFunc_BooleanOR_ReturnValue_14, bool CallFunc_IsValid_ReturnValue_11, const struct FVector2D& CallFunc_GetViewportSize_ReturnValue_2, class USaveGame* Temp_object_Variable_13, bool CallFunc_GetDLSSModeInformation_bIsSupported_5, float CallFunc_GetDLSSModeInformation_OptimalScreenPercentage_5, bool CallFunc_GetDLSSModeInformation_bIsFixedScreenPercentage_5, float CallFunc_GetDLSSModeInformation_MinScreenPercentage_5, float CallFunc_GetDLSSModeInformation_MaxScreenPercentage_5, float CallFunc_GetDLSSModeInformation_OptimalSharpness_5, class UAsyncActionHandleSaveGame* CallFunc_AsyncSaveGameToSlot_ReturnValue_4, bool CallFunc_Greater_DoubleDouble_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_12, bool CallFunc_Not_PreBool_ReturnValue_5, bool CallFunc_BooleanOR_ReturnValue_15, bool CallFunc_BooleanOR_ReturnValue_16, double CallFunc_SelectFloat_ReturnValue_5, bool CallFunc_BooleanOR_ReturnValue_17, const class FString& CallFunc_Conv_DoubleToString_ReturnValue_5, const class FString& CallFunc_Concat_StrStr_ReturnValue_5, class USettings_SG_C* K2Node_DynamicCast_AsSettings_SG_7, bool K2Node_DynamicCast_bSuccess_7, const struct FVector2D& CallFunc_GetViewportSize_ReturnValue_3, bool Temp_bool_Variable_20, bool CallFunc_GetDLSSModeInformation_bIsSupported_6, float CallFunc_GetDLSSModeInformation_OptimalScreenPercentage_6, bool CallFunc_GetDLSSModeInformation_bIsFixedScreenPercentage_6, float CallFunc_GetDLSSModeInformation_MinScreenPercentage_6, float CallFunc_GetDLSSModeInformation_MaxScreenPercentage_6, float CallFunc_GetDLSSModeInformation_OptimalSharpness_6, const struct FVector2D& CallFunc_GetViewportSize_ReturnValue_4, bool CallFunc_Greater_DoubleDouble_ReturnValue_3, bool CallFunc_GetDLSSModeInformation_bIsSupported_7, float CallFunc_GetDLSSModeInformation_OptimalScreenPercentage_7, bool CallFunc_GetDLSSModeInformation_bIsFixedScreenPercentage_7, float CallFunc_GetDLSSModeInformation_MinScreenPercentage_7, float CallFunc_GetDLSSModeInformation_MaxScreenPercentage_7, float CallFunc_GetDLSSModeInformation_OptimalSharpness_7, bool CallFunc_BooleanAND_ReturnValue_3, bool CallFunc_Greater_DoubleDouble_ReturnValue_4, bool CallFunc_Not_PreBool_ReturnValue_6, bool CallFunc_BooleanAND_ReturnValue_4, bool CallFunc_BooleanOR_ReturnValue_18, bool CallFunc_Not_PreBool_ReturnValue_7, double CallFunc_SelectFloat_ReturnValue_6, bool CallFunc_BooleanOR_ReturnValue_19, const class FString& CallFunc_Conv_DoubleToString_ReturnValue_6, double CallFunc_SelectFloat_ReturnValue_7, const class FString& CallFunc_Concat_StrStr_ReturnValue_6, const class FString& CallFunc_Conv_DoubleToString_ReturnValue_7, const class FString& CallFunc_Concat_StrStr_ReturnValue_7, bool CallFunc_BooleanOR_ReturnValue_20, bool CallFunc_BooleanOR_ReturnValue_21, bool CallFunc_BooleanOR_ReturnValue_22, bool CallFunc_BooleanOR_ReturnValue_23, int32 Temp_int_Loop_Counter_Variable, class USaveGame* K2Node_CustomEvent_SaveGame_19, bool K2Node_CustomEvent_bSuccess_19, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_14, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable, bool K2Node_ComponentBoundEvent_bIsChecked_3, const class FString& K2Node_ComponentBoundEvent_SelectedItem_9, enum class ESelectInfo K2Node_ComponentBoundEvent_SelectionType_9, bool CallFunc_EqualEqual_StriStri_ReturnValue, bool CallFunc_EqualEqual_StriStri_ReturnValue_1, bool CallFunc_EqualEqual_StriStri_ReturnValue_2, const class FString& K2Node_ComponentBoundEvent_SelectedItem_8, enum class ESelectInfo K2Node_ComponentBoundEvent_SelectionType_8, const class FString& K2Node_ComponentBoundEvent_SelectedItem_7, enum class ESelectInfo K2Node_ComponentBoundEvent_SelectionType_7, int32 Temp_int_Array_Index_Variable_1, const class FString& K2Node_ComponentBoundEvent_SelectedItem_6, enum class ESelectInfo K2Node_ComponentBoundEvent_SelectionType_6, const class FString& K2Node_ComponentBoundEvent_SelectedItem_5, enum class ESelectInfo K2Node_ComponentBoundEvent_SelectionType_5, const class FString& K2Node_ComponentBoundEvent_SelectedItem_4, enum class ESelectInfo K2Node_ComponentBoundEvent_SelectionType_4, const class FString& K2Node_ComponentBoundEvent_SelectedItem_3, enum class ESelectInfo K2Node_ComponentBoundEvent_SelectionType_3, const class FString& K2Node_ComponentBoundEvent_SelectedItem_2, enum class ESelectInfo K2Node_ComponentBoundEvent_SelectionType_2, const struct FIntPoint& CallFunc_Array_Get_Item, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_15, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_GetSelectedIndex_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, bool CallFunc_EqualEqual_StriStri_ReturnValue_3, class FText CallFunc_MakeLiteralText_ReturnValue_1, const class FString& CallFunc_Conv_TextToString_ReturnValue_1, class FText CallFunc_MakeLiteralText_ReturnValue_2, bool CallFunc_EqualEqual_StriStri_ReturnValue_4, const class FString& CallFunc_Conv_TextToString_ReturnValue_2, bool CallFunc_EqualEqual_StriStri_ReturnValue_5, class FText CallFunc_MakeLiteralText_ReturnValue_3, const class FString& CallFunc_Conv_TextToString_ReturnValue_3, class FText CallFunc_MakeLiteralText_ReturnValue_4, bool CallFunc_EqualEqual_StriStri_ReturnValue_6, const class FString& CallFunc_Conv_TextToString_ReturnValue_4, bool CallFunc_EqualEqual_StriStri_ReturnValue_7, class FText CallFunc_MakeLiteralText_ReturnValue_5, const class FString& CallFunc_Conv_TextToString_ReturnValue_5, class FText CallFunc_MakeLiteralText_ReturnValue_6, bool CallFunc_EqualEqual_StriStri_ReturnValue_8, const class FString& CallFunc_Conv_TextToString_ReturnValue_6, bool CallFunc_EqualEqual_StriStri_ReturnValue_9, class FText CallFunc_MakeLiteralText_ReturnValue_7, const class FString& CallFunc_Conv_TextToString_ReturnValue_7, class FText CallFunc_MakeLiteralText_ReturnValue_8, bool CallFunc_EqualEqual_StriStri_ReturnValue_10, const class FString& CallFunc_Conv_TextToString_ReturnValue_8, bool CallFunc_EqualEqual_StriStri_ReturnValue_11, class FText CallFunc_MakeLiteralText_ReturnValue_9, const class FString& CallFunc_Conv_TextToString_ReturnValue_9, class FText CallFunc_MakeLiteralText_ReturnValue_10, bool CallFunc_EqualEqual_StriStri_ReturnValue_12, const class FString& CallFunc_Conv_TextToString_ReturnValue_10, bool CallFunc_EqualEqual_StriStri_ReturnValue_13, class FText CallFunc_MakeLiteralText_ReturnValue_11, const class FString& CallFunc_Conv_TextToString_ReturnValue_11, class FText CallFunc_MakeLiteralText_ReturnValue_12, bool CallFunc_EqualEqual_StriStri_ReturnValue_14, const class FString& CallFunc_Conv_TextToString_ReturnValue_12, bool CallFunc_EqualEqual_StriStri_ReturnValue_15, class FText CallFunc_MakeLiteralText_ReturnValue_13, const class FString& CallFunc_Conv_TextToString_ReturnValue_13, class FText CallFunc_MakeLiteralText_ReturnValue_14, bool CallFunc_EqualEqual_StriStri_ReturnValue_16, const class FString& CallFunc_Conv_TextToString_ReturnValue_14, bool CallFunc_EqualEqual_StriStri_ReturnValue_17, class FText CallFunc_MakeLiteralText_ReturnValue_15, const class FString& CallFunc_Conv_TextToString_ReturnValue_15, class FText CallFunc_MakeLiteralText_ReturnValue_16, bool CallFunc_EqualEqual_StriStri_ReturnValue_18, const class FString& CallFunc_Conv_TextToString_ReturnValue_16, bool CallFunc_EqualEqual_StriStri_ReturnValue_19, class FText CallFunc_MakeLiteralText_ReturnValue_17, const class FString& CallFunc_Conv_TextToString_ReturnValue_17, class FText CallFunc_MakeLiteralText_ReturnValue_18, bool CallFunc_EqualEqual_StriStri_ReturnValue_20, const class FString& CallFunc_Conv_TextToString_ReturnValue_18, bool CallFunc_EqualEqual_StriStri_ReturnValue_21, class FText CallFunc_MakeLiteralText_ReturnValue_19, const class FString& CallFunc_Conv_TextToString_ReturnValue_19, class FText CallFunc_MakeLiteralText_ReturnValue_20, bool CallFunc_EqualEqual_StriStri_ReturnValue_22, const class FString& CallFunc_Conv_TextToString_ReturnValue_20, bool CallFunc_EqualEqual_StriStri_ReturnValue_23, class FText CallFunc_MakeLiteralText_ReturnValue_21, const class FString& CallFunc_Conv_TextToString_ReturnValue_21, class FText CallFunc_MakeLiteralText_ReturnValue_22, bool CallFunc_EqualEqual_StriStri_ReturnValue_24, const class FString& CallFunc_Conv_TextToString_ReturnValue_22, bool CallFunc_EqualEqual_StriStri_ReturnValue_25, class FText CallFunc_MakeLiteralText_ReturnValue_23, const class FString& CallFunc_Conv_TextToString_ReturnValue_23, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, bool CallFunc_EqualEqual_StriStri_ReturnValue_26, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue_1, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue_2, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue_3, bool K2Node_ComponentBoundEvent_bIsChecked_2, class UPlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UAsyncActionHandleSaveGame* CallFunc_AsyncLoadGameFromSlot_ReturnValue_8, bool CallFunc_IsValid_ReturnValue_13, const class FString& K2Node_ComponentBoundEvent_SelectedItem_1, enum class ESelectInfo K2Node_ComponentBoundEvent_SelectionType_1, double CallFunc_Conv_StringToDouble_ReturnValue, double CallFunc_Conv_StringToDouble_ReturnValue_1, bool CallFunc_EqualEqual_StrStr_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue_1, class USaveGame* Temp_object_Variable_14, bool Temp_bool_Variable_21, class UAsyncActionHandleSaveGame* CallFunc_AsyncSaveGameToSlot_ReturnValue_5, class USettings_SG_C* K2Node_DynamicCast_AsSettings_SG_8, bool K2Node_DynamicCast_bSuccess_8, bool CallFunc_IsValid_ReturnValue_14, class UPlayerController* CallFunc_GetOwningPlayer_ReturnValue_1, class UPawn* CallFunc_K2_GetPawn_ReturnValue, class UPawn* CallFunc_K2_GetPawn_ReturnValue_1, class UB_DemoCharacter_C* K2Node_DynamicCast_AsB_Demo_Character, bool K2Node_DynamicCast_bSuccess_9, class UB_DemoCharacter_C* K2Node_DynamicCast_AsB_Demo_Character_1, bool K2Node_DynamicCast_bSuccess_10, class FText CallFunc_MakeLiteralText_ReturnValue_24, class FText CallFunc_MakeLiteralText_ReturnValue_25, const class FString& CallFunc_Conv_TextToString_ReturnValue_24, const class FString& CallFunc_Conv_TextToString_ReturnValue_25, class FText CallFunc_MakeLiteralText_ReturnValue_26, class FText CallFunc_MakeLiteralText_ReturnValue_27, const class FString& CallFunc_Conv_TextToString_ReturnValue_26, class FText CallFunc_MakeLiteralText_ReturnValue_28, class FText CallFunc_MakeLiteralText_ReturnValue_29, const class FString& CallFunc_Conv_TextToString_ReturnValue_27, class FText CallFunc_MakeLiteralText_ReturnValue_30, const class FString& CallFunc_Conv_TextToString_ReturnValue_28, class FText CallFunc_MakeLiteralText_ReturnValue_31, const class FString& CallFunc_Conv_TextToString_ReturnValue_29, class FText CallFunc_MakeLiteralText_ReturnValue_32, const class FString& CallFunc_Conv_TextToString_ReturnValue_30, class FText CallFunc_MakeLiteralText_ReturnValue_33, const class FString& CallFunc_Conv_TextToString_ReturnValue_31, class FText CallFunc_MakeLiteralText_ReturnValue_34, const class FString& CallFunc_Conv_TextToString_ReturnValue_32, class FText CallFunc_MakeLiteralText_ReturnValue_35, const class FString& CallFunc_Conv_TextToString_ReturnValue_33, class FText CallFunc_MakeLiteralText_ReturnValue_36, const class FString& CallFunc_Conv_TextToString_ReturnValue_34, class FText CallFunc_MakeLiteralText_ReturnValue_37, const class FString& CallFunc_Conv_TextToString_ReturnValue_35, class FText CallFunc_MakeLiteralText_ReturnValue_38, class FText CallFunc_MakeLiteralText_ReturnValue_39, bool K2Node_Event_IsDesignTime, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue_4, const struct FIntPoint& CallFunc_GetScreenResolution_ReturnValue, int64 CallFunc_Conv_IntToInt64_ReturnValue, int64 CallFunc_Conv_IntToInt64_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, class USaveGame* Temp_object_Variable_15, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, bool Temp_bool_Variable_22, class FText CallFunc_Format_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue_36, class USaveGame* K2Node_CustomEvent_SaveGame_13, bool K2Node_CustomEvent_bSuccess_13, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_16, int32 Temp_int_Loop_Counter_Variable_2, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_2, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue_5, const struct FIntPoint& CallFunc_GetScreenResolution_ReturnValue_1, class USaveGame* Temp_object_Variable_16, class FText CallFunc_Conv_IntToText_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_3, bool Temp_bool_Variable_23, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, class USaveGame* K2Node_CustomEvent_SaveGame_14, bool K2Node_CustomEvent_bSuccess_14, class FText CallFunc_Format_ReturnValue_1, const class FString& CallFunc_Conv_TextToString_ReturnValue_37, const class FString& CallFunc_Conv_TextToString_ReturnValue_38, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class USaveGame* K2Node_CustomEvent_SaveGame_20, bool K2Node_CustomEvent_bSuccess_20, class UGI_Contain_C* K2Node_DynamicCast_AsGI_Contain, bool K2Node_DynamicCast_bSuccess_11, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, int64 CallFunc_Conv_IntToInt64_ReturnValue_2, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_4, const struct FIntPoint& K2Node_MakeStruct_IntPoint, int64 CallFunc_Conv_IntToInt64_ReturnValue_3, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_5, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_2, class FText CallFunc_Format_ReturnValue_2, bool Temp_bool_Has_Been_Initd_Variable, const class FString& CallFunc_Conv_TextToString_ReturnValue_39, bool Temp_bool_IsClosed_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_17, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_18, bool CallFunc_DoesSaveGameExist_ReturnValue, class USettings_SG_C* CallFunc_CreateSaveGameObject_ReturnValue, class UAsyncActionHandleSaveGame* CallFunc_AsyncSaveGameToSlot_ReturnValue_6, bool CallFunc_IsValid_ReturnValue_15, bool K2Node_ComponentBoundEvent_bIsChecked_1, const class FString& K2Node_ComponentBoundEvent_SelectedItem, enum class ESelectInfo K2Node_ComponentBoundEvent_SelectionType, bool CallFunc_EqualEqual_StriStri_ReturnValue_27, bool CallFunc_EqualEqual_StriStri_ReturnValue_28, bool CallFunc_EqualEqual_StriStri_ReturnValue_29, bool CallFunc_EqualEqual_StriStri_ReturnValue_30, bool CallFunc_EqualEqual_StriStri_ReturnValue_31, bool CallFunc_EqualEqual_StriStri_ReturnValue_32, bool CallFunc_EqualEqual_StriStri_ReturnValue_33, bool K2Node_ComponentBoundEvent_bIsChecked, bool CallFunc_DoesSaveGameExist_ReturnValue_1, class USettings_SG_C* CallFunc_CreateSaveGameObject_ReturnValue_1, class UAsyncActionHandleSaveGame* CallFunc_AsyncSaveGameToSlot_ReturnValue_7, bool CallFunc_IsValid_ReturnValue_16, uint8 CallFunc_MakeLiteralByte_ReturnValue_2, TArray<struct FIntPoint>& CallFunc_GetSupportedFullscreenResolutions_Resolutions, bool CallFunc_GetSupportedFullscreenResolutions_ReturnValue, const struct FIntPoint& CallFunc_Array_Get_Item_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_5, class FText CallFunc_Conv_IntToText_ReturnValue_2, class FText CallFunc_Conv_IntToText_ReturnValue_3, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_6, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_7, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_3, int32 CallFunc_Array_Length_ReturnValue_2, class FText CallFunc_Format_ReturnValue_3, bool CallFunc_Less_IntInt_ReturnValue_2, const class FString& CallFunc_Conv_TextToString_ReturnValue_40, int32 CallFunc_Array_Add_ReturnValue, class UAsyncActionHandleSaveGame* CallFunc_AsyncLoadGameFromSlot_ReturnValue_9, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue_7, const struct FIntPoint& CallFunc_GetScreenResolution_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_17, class FText CallFunc_Conv_IntToText_ReturnValue_4, class FText CallFunc_Conv_IntToText_ReturnValue_5, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_8, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_9, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_4, class FText CallFunc_Format_ReturnValue_4, const class FString& CallFunc_Conv_TextToString_ReturnValue_41, bool CallFunc_DLSS_SR_Enabled_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue_40, class FText CallFunc_MakeLiteralText_ReturnValue_41, class FText CallFunc_MakeLiteralText_ReturnValue_42, class FText CallFunc_MakeLiteralText_ReturnValue_43, class FText CallFunc_MakeLiteralText_ReturnValue_44, class FText CallFunc_MakeLiteralText_ReturnValue_45, class FText CallFunc_MakeLiteralText_ReturnValue_46, class FText CallFunc_MakeLiteralText_ReturnValue_47, class FText CallFunc_MakeLiteralText_ReturnValue_48, class FText CallFunc_MakeLiteralText_ReturnValue_49, const class FString& CallFunc_Conv_TextToString_ReturnValue_42, const class FString& CallFunc_Conv_TextToString_ReturnValue_43, class FText CallFunc_MakeLiteralText_ReturnValue_50, class FText CallFunc_MakeLiteralText_ReturnValue_51, const class FString& CallFunc_Conv_TextToString_ReturnValue_44, const class FString& CallFunc_Conv_TextToString_ReturnValue_45, class FText CallFunc_MakeLiteralText_ReturnValue_52, class FText CallFunc_MakeLiteralText_ReturnValue_53, const class FString& CallFunc_Conv_TextToString_ReturnValue_46, const class FString& CallFunc_Conv_TextToString_ReturnValue_47, class FText CallFunc_MakeLiteralText_ReturnValue_54, class FText CallFunc_MakeLiteralText_ReturnValue_55, const class FString& CallFunc_Conv_TextToString_ReturnValue_48, const class FString& CallFunc_Conv_TextToString_ReturnValue_49, class FText CallFunc_MakeLiteralText_ReturnValue_56, class FText CallFunc_MakeLiteralText_ReturnValue_57, const class FString& CallFunc_Conv_TextToString_ReturnValue_50, const class FString& CallFunc_Conv_TextToString_ReturnValue_51, class FText CallFunc_MakeLiteralText_ReturnValue_58, class FText CallFunc_MakeLiteralText_ReturnValue_59, const class FString& CallFunc_Conv_TextToString_ReturnValue_52, const class FString& CallFunc_Conv_TextToString_ReturnValue_53, class FText CallFunc_MakeLiteralText_ReturnValue_60, class FText CallFunc_MakeLiteralText_ReturnValue_61, const class FString& CallFunc_Conv_TextToString_ReturnValue_54, const class FString& CallFunc_Conv_TextToString_ReturnValue_55, class FText CallFunc_MakeLiteralText_ReturnValue_62, class FText CallFunc_MakeLiteralText_ReturnValue_63, const class FString& CallFunc_Conv_TextToString_ReturnValue_56, const class FString& CallFunc_Conv_TextToString_ReturnValue_57, class FText CallFunc_MakeLiteralText_ReturnValue_64, class FText CallFunc_MakeLiteralText_ReturnValue_65, const class FString& CallFunc_Conv_TextToString_ReturnValue_58, const class FString& CallFunc_Conv_TextToString_ReturnValue_59, class FText CallFunc_MakeLiteralText_ReturnValue_66, class FText CallFunc_MakeLiteralText_ReturnValue_67, const class FString& CallFunc_Conv_TextToString_ReturnValue_60, const class FString& CallFunc_Conv_TextToString_ReturnValue_61, class FText CallFunc_MakeLiteralText_ReturnValue_68, class FText CallFunc_MakeLiteralText_ReturnValue_69, const class FString& CallFunc_Conv_TextToString_ReturnValue_62, const class FString& CallFunc_Conv_TextToString_ReturnValue_63, class FText CallFunc_MakeLiteralText_ReturnValue_70, const class FString& CallFunc_Conv_TextToString_ReturnValue_64, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue_8, int32 CallFunc_GetAntiAliasingQuality_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess, uint8 CallFunc_MakeLiteralByte_ReturnValue_3, bool CallFunc_EqualEqual_ByteByte_ReturnValue_6, bool CallFunc_BooleanOR_ReturnValue_24, bool CallFunc_EqualEqual_ByteByte_ReturnValue_7, bool CallFunc_Not_PreBool_ReturnValue_8, bool CallFunc_GetDLSSModeInformation_bIsSupported_8, float CallFunc_GetDLSSModeInformation_OptimalScreenPercentage_8, bool CallFunc_GetDLSSModeInformation_bIsFixedScreenPercentage_8, float CallFunc_GetDLSSModeInformation_MinScreenPercentage_8, float CallFunc_GetDLSSModeInformation_MaxScreenPercentage_8, float CallFunc_GetDLSSModeInformation_OptimalSharpness_8, bool CallFunc_BooleanOR_ReturnValue_25, double CallFunc_SelectFloat_ReturnValue_8, bool CallFunc_BooleanOR_ReturnValue_26, const class FString& CallFunc_Conv_DoubleToString_ReturnValue_8, const class FString& CallFunc_Concat_StrStr_ReturnValue_8, class USaveGame* Temp_object_Variable_17, class UAsyncActionHandleSaveGame* CallFunc_AsyncSaveGameToSlot_ReturnValue_8, bool CallFunc_IsValid_ReturnValue_18, class USettings_SG_C* K2Node_DynamicCast_AsSettings_SG_9, bool K2Node_DynamicCast_bSuccess_12, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue_9, enum class EWindowMode CallFunc_GetFullscreenMode_ReturnValue, bool Temp_bool_Variable_24, bool K2Node_SwitchEnum_CmpSuccess, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue_10, int32 CallFunc_GetViewDistanceQuality_ReturnValue, bool K2Node_Select_Default_2, int32 CallFunc_GetVisualEffectQuality_ReturnValue, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue_11, bool K2Node_SwitchInteger_CmpSuccess_1, int32 CallFunc_GetViewDistanceQuality_ReturnValue_1, int32 CallFunc_GetShadowQuality_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess_2, bool K2Node_Select_Default_3, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue_12, int32 CallFunc_GetTextureQuality_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess_3, class USaveGame* K2Node_CustomEvent_SaveGame_15, bool K2Node_CustomEvent_bSuccess_15, const struct FVector2D& CallFunc_GetViewportSize_ReturnValue_5, bool CallFunc_GetDLSSModeInformation_bIsSupported_9, float CallFunc_GetDLSSModeInformation_OptimalScreenPercentage_9, bool CallFunc_GetDLSSModeInformation_bIsFixedScreenPercentage_9, float CallFunc_GetDLSSModeInformation_MinScreenPercentage_9, float CallFunc_GetDLSSModeInformation_MaxScreenPercentage_9, float CallFunc_GetDLSSModeInformation_OptimalSharpness_9, bool CallFunc_Greater_DoubleDouble_ReturnValue_5, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue_13, bool CallFunc_BooleanAND_ReturnValue_5, int32 CallFunc_GetViewDistanceQuality_ReturnValue_2, bool CallFunc_Not_PreBool_ReturnValue_9, bool K2Node_SwitchInteger_CmpSuccess_4, bool CallFunc_BooleanOR_ReturnValue_27, bool CallFunc_BooleanOR_ReturnValue_28, double CallFunc_SelectFloat_ReturnValue_9, bool CallFunc_BooleanOR_ReturnValue_29, const class FString& CallFunc_Conv_DoubleToString_ReturnValue_9, const class FString& CallFunc_Concat_StrStr_ReturnValue_9, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_19, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue_14, float CallFunc_GetFrameRateLimit_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue_2, bool CallFunc_EqualEqual_IntInt_ReturnValue_3, class UAsyncActionHandleSaveGame* CallFunc_AsyncLoadGameFromSlot_ReturnValue_10, bool CallFunc_EqualEqual_ByteByte_ReturnValue_8, bool CallFunc_BooleanOR_ReturnValue_30, bool CallFunc_Not_PreBool_ReturnValue_10, bool CallFunc_IsValid_ReturnValue_19, bool CallFunc_BooleanOR_ReturnValue_31, bool CallFunc_BooleanOR_ReturnValue_32, bool CallFunc_GetDLSSModeInformation_bIsSupported_10, float CallFunc_GetDLSSModeInformation_OptimalScreenPercentage_10, bool CallFunc_GetDLSSModeInformation_bIsFixedScreenPercentage_10, float CallFunc_GetDLSSModeInformation_MinScreenPercentage_10, float CallFunc_GetDLSSModeInformation_MaxScreenPercentage_10, float CallFunc_GetDLSSModeInformation_OptimalSharpness_10, class USaveGame* Temp_object_Variable_18, double CallFunc_SelectFloat_ReturnValue_10, class UAsyncActionHandleSaveGame* CallFunc_AsyncSaveGameToSlot_ReturnValue_9, const class FString& CallFunc_Conv_DoubleToString_ReturnValue_10, const class FString& CallFunc_Concat_StrStr_ReturnValue_10, bool CallFunc_IsValid_ReturnValue_20, class USettings_SG_C* K2Node_DynamicCast_AsSettings_SG_10, bool K2Node_DynamicCast_bSuccess_13, bool Temp_bool_Variable_25, class USaveGame* K2Node_CustomEvent_SaveGame_16, bool K2Node_CustomEvent_bSuccess_16, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_20, uint8 CallFunc_MakeLiteralByte_ReturnValue_4, class FText CallFunc_MakeLiteralText_ReturnValue_71, const class FString& CallFunc_Conv_TextToString_ReturnValue_65, bool CallFunc_EqualEqual_ByteByte_ReturnValue_9, class FText CallFunc_MakeLiteralText_ReturnValue_72, class FText CallFunc_MakeLiteralText_ReturnValue_73, const class FString& CallFunc_Conv_TextToString_ReturnValue_66, const class FString& CallFunc_Conv_TextToString_ReturnValue_67, class FText CallFunc_MakeLiteralText_ReturnValue_74, const class FString& CallFunc_Conv_TextToString_ReturnValue_68, class FText CallFunc_MakeLiteralText_ReturnValue_75, class FText CallFunc_MakeLiteralText_ReturnValue_76, const class FString& CallFunc_Conv_TextToString_ReturnValue_69, const class FString& CallFunc_Conv_TextToString_ReturnValue_70, class FText CallFunc_MakeLiteralText_ReturnValue_77, class FText CallFunc_MakeLiteralText_ReturnValue_78, const class FString& CallFunc_Conv_TextToString_ReturnValue_71, const class FString& CallFunc_Conv_TextToString_ReturnValue_72, class USaveGame* Temp_object_Variable_19, class FText CallFunc_MakeLiteralText_ReturnValue_79, const class FString& CallFunc_Conv_TextToString_ReturnValue_73, class FText CallFunc_MakeLiteralText_ReturnValue_80, const class FString& CallFunc_Conv_TextToString_ReturnValue_74, class FText CallFunc_MakeLiteralText_ReturnValue_81, const class FString& CallFunc_Conv_TextToString_ReturnValue_75, class FText CallFunc_MakeLiteralText_ReturnValue_82, const class FString& CallFunc_Conv_TextToString_ReturnValue_76, bool Temp_bool_Variable_26, class FText CallFunc_MakeLiteralText_ReturnValue_83, const class FString& CallFunc_Conv_TextToString_ReturnValue_77, class FText CallFunc_MakeLiteralText_ReturnValue_84, const class FString& CallFunc_Conv_TextToString_ReturnValue_78, class FText CallFunc_MakeLiteralText_ReturnValue_85, const class FString& CallFunc_Conv_TextToString_ReturnValue_79, class FText CallFunc_MakeLiteralText_ReturnValue_86, const class FString& CallFunc_Conv_TextToString_ReturnValue_80, class FText CallFunc_MakeLiteralText_ReturnValue_87, const class FString& CallFunc_Conv_TextToString_ReturnValue_81, class FText CallFunc_MakeLiteralText_ReturnValue_88, class FText CallFunc_MakeLiteralText_ReturnValue_89, const class FString& CallFunc_Conv_TextToString_ReturnValue_82, const class FString& CallFunc_Conv_TextToString_ReturnValue_83, class FText CallFunc_MakeLiteralText_ReturnValue_90, const class FString& CallFunc_Conv_TextToString_ReturnValue_84, class USaveGame* K2Node_CustomEvent_SaveGame_17, bool K2Node_CustomEvent_bSuccess_17, bool CallFunc_EqualEqual_ByteByte_ReturnValue_10, bool CallFunc_GetDLSSModeInformation_bIsSupported_11, float CallFunc_GetDLSSModeInformation_OptimalScreenPercentage_11, bool CallFunc_GetDLSSModeInformation_bIsFixedScreenPercentage_11, float CallFunc_GetDLSSModeInformation_MinScreenPercentage_11, float CallFunc_GetDLSSModeInformation_MaxScreenPercentage_11, float CallFunc_GetDLSSModeInformation_OptimalSharpness_11, bool CallFunc_BooleanOR_ReturnValue_33, bool CallFunc_Not_PreBool_ReturnValue_11, double CallFunc_SelectFloat_ReturnValue_11, bool CallFunc_BooleanOR_ReturnValue_34, const class FString& CallFunc_Conv_DoubleToString_ReturnValue_11, bool CallFunc_BooleanOR_ReturnValue_35, const class FString& CallFunc_Concat_StrStr_ReturnValue_11, class FText CallFunc_MakeLiteralText_ReturnValue_91, class FText CallFunc_MakeLiteralText_ReturnValue_92, const class FString& CallFunc_Conv_TextToString_ReturnValue_85, const class FString& CallFunc_Conv_TextToString_ReturnValue_86, const class FString& CallFunc_Conv_TextToString_ReturnValue_87, const class FString& CallFunc_Conv_TextToString_ReturnValue_88, class FText CallFunc_MakeLiteralText_ReturnValue_93, const class FString& CallFunc_Conv_TextToString_ReturnValue_89, const class FString& CallFunc_Conv_TextToString_ReturnValue_90, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_21, class FText CallFunc_MakeLiteralText_ReturnValue_94, const class FString& CallFunc_Conv_TextToString_ReturnValue_91, const class FString& CallFunc_Conv_TextToString_ReturnValue_92, const struct FVector2D& CallFunc_GetViewportSize_ReturnValue_6, class USaveGame* Temp_object_Variable_20, bool CallFunc_GetDLSSModeInformation_bIsSupported_12, float CallFunc_GetDLSSModeInformation_OptimalScreenPercentage_12, bool CallFunc_GetDLSSModeInformation_bIsFixedScreenPercentage_12, float CallFunc_GetDLSSModeInformation_MinScreenPercentage_12, float CallFunc_GetDLSSModeInformation_MaxScreenPercentage_12, float CallFunc_GetDLSSModeInformation_OptimalSharpness_12, bool Temp_bool_Variable_27, bool CallFunc_Greater_DoubleDouble_ReturnValue_6, uint8 CallFunc_MakeLiteralByte_ReturnValue_5, bool CallFunc_BooleanAND_ReturnValue_6, bool CallFunc_Not_PreBool_ReturnValue_12, bool CallFunc_EqualEqual_ByteByte_ReturnValue_11, bool CallFunc_BooleanOR_ReturnValue_36, double CallFunc_SelectFloat_ReturnValue_12, const class FString& CallFunc_Conv_DoubleToString_ReturnValue_12, bool CallFunc_BooleanOR_ReturnValue_37, const class FString& CallFunc_Concat_StrStr_ReturnValue_12, bool CallFunc_BooleanOR_ReturnValue_38, class USaveGame* K2Node_CustomEvent_SaveGame_18, bool K2Node_CustomEvent_bSuccess_18, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_22, int32 Temp_int_Array_Index_Variable_2, const struct FIntPoint& CallFunc_Array_Get_Item_2, const class FString& CallFunc_Conv_IntPointToString_ReturnValue, bool CallFunc_RemoveOption_ReturnValue, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue_15, enum class EWindowMode CallFunc_GetFullscreenMode_ReturnValue_1, float CallFunc_GetFrameRateLimit_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess_1, bool CallFunc_EqualEqual_DoubleDouble_ReturnValue, bool CallFunc_EqualEqual_DoubleDouble_ReturnValue_1, bool CallFunc_EqualEqual_DoubleDouble_ReturnValue_2, bool CallFunc_EqualEqual_DoubleDouble_ReturnValue_3, bool CallFunc_EqualEqual_ByteByte_ReturnValue_12, bool CallFunc_BooleanOR_ReturnValue_39, bool CallFunc_Not_PreBool_ReturnValue_13, bool CallFunc_GetDLSSModeInformation_bIsSupported_13, float CallFunc_GetDLSSModeInformation_OptimalScreenPercentage_13, bool CallFunc_GetDLSSModeInformation_bIsFixedScreenPercentage_13, float CallFunc_GetDLSSModeInformation_MinScreenPercentage_13, float CallFunc_GetDLSSModeInformation_MaxScreenPercentage_13, float CallFunc_GetDLSSModeInformation_OptimalSharpness_13, bool CallFunc_BooleanOR_ReturnValue_40, double CallFunc_SelectFloat_ReturnValue_13, bool CallFunc_BooleanOR_ReturnValue_41, const class FString& CallFunc_Conv_DoubleToString_ReturnValue_13, const class FString& CallFunc_Concat_StrStr_ReturnValue_13, uint8 CallFunc_MakeLiteralByte_ReturnValue_6, bool CallFunc_EqualEqual_ByteByte_ReturnValue_13, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue_16, int32 CallFunc_GetAntiAliasingQuality_ReturnValue_1, int32 CallFunc_GetVisualEffectQuality_ReturnValue_1, int32 CallFunc_GetShadowQuality_ReturnValue_1, int32 CallFunc_GetTextureQuality_ReturnValue_1, double CallFunc_SelectFloat_B_ImplicitCast, double CallFunc_SelectFloat_B_ImplicitCast_1, double CallFunc_SelectFloat_B_ImplicitCast_2, double CallFunc_SelectFloat_B_ImplicitCast_3, double CallFunc_Greater_DoubleDouble_A_ImplicitCast, double CallFunc_SelectFloat_B_ImplicitCast_4, double CallFunc_Greater_DoubleDouble_A_ImplicitCast_1, double CallFunc_SelectFloat_B_ImplicitCast_5, double CallFunc_Greater_DoubleDouble_A_ImplicitCast_2, double CallFunc_SelectFloat_B_ImplicitCast_6, double CallFunc_Greater_DoubleDouble_A_ImplicitCast_3, double CallFunc_SelectFloat_B_ImplicitCast_7, double CallFunc_Greater_DoubleDouble_A_ImplicitCast_4, float CallFunc_SetFieldOfView_InFieldOfView_ImplicitCast, float CallFunc_SetFieldOfView_InFieldOfView_ImplicitCast_1, float CallFunc_SetFrameRateLimit_NewLimit_ImplicitCast, double CallFunc_SelectFloat_B_ImplicitCast_8, double CallFunc_SelectFloat_B_ImplicitCast_9, double CallFunc_Greater_DoubleDouble_A_ImplicitCast_5, double CallFunc_FTrunc_A_ImplicitCast, double CallFunc_SelectFloat_B_ImplicitCast_10, double CallFunc_SelectFloat_B_ImplicitCast_11, double CallFunc_SelectFloat_B_ImplicitCast_12, double CallFunc_Greater_DoubleDouble_A_ImplicitCast_6, double CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast, double CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast_1, double CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast_2, double CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast_3, double CallFunc_SelectFloat_B_ImplicitCast_13)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WG_Op_GraphicPanel_C", "ExecuteUbergraph_WG_Op_GraphicPanel");

	Params::UWG_Op_GraphicPanel_C_ExecuteUbergraph_WG_Op_GraphicPanel_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetDLSSModeInformation_bIsSupported = CallFunc_GetDLSSModeInformation_bIsSupported;
	Parms.CallFunc_GetDLSSModeInformation_OptimalScreenPercentage = CallFunc_GetDLSSModeInformation_OptimalScreenPercentage;
	Parms.CallFunc_GetDLSSModeInformation_bIsFixedScreenPercentage = CallFunc_GetDLSSModeInformation_bIsFixedScreenPercentage;
	Parms.CallFunc_GetDLSSModeInformation_MinScreenPercentage = CallFunc_GetDLSSModeInformation_MinScreenPercentage;
	Parms.CallFunc_GetDLSSModeInformation_MaxScreenPercentage = CallFunc_GetDLSSModeInformation_MaxScreenPercentage;
	Parms.CallFunc_GetDLSSModeInformation_OptimalSharpness = CallFunc_GetDLSSModeInformation_OptimalSharpness;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;
	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue_2 = CallFunc_BooleanOR_ReturnValue_2;
	Parms.CallFunc_Conv_DoubleToString_ReturnValue = CallFunc_Conv_DoubleToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.K2Node_CustomEvent_SaveGame_12 = K2Node_CustomEvent_SaveGame_12;
	Parms.K2Node_CustomEvent_bSuccess_12 = K2Node_CustomEvent_bSuccess_12;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.K2Node_DynamicCast_AsSettings_SG = K2Node_DynamicCast_AsSettings_SG;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_AsyncLoadGameFromSlot_ReturnValue = CallFunc_AsyncLoadGameFromSlot_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.K2Node_CustomEvent_SaveGame_11 = K2Node_CustomEvent_SaveGame_11;
	Parms.K2Node_CustomEvent_bSuccess_11 = K2Node_CustomEvent_bSuccess_11;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.K2Node_DynamicCast_AsSettings_SG_1 = K2Node_DynamicCast_AsSettings_SG_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_AsyncLoadGameFromSlot_ReturnValue_1 = CallFunc_AsyncLoadGameFromSlot_ReturnValue_1;
	Parms.CallFunc_AsyncSaveGameToSlot_ReturnValue = CallFunc_AsyncSaveGameToSlot_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.K2Node_CustomEvent_SaveGame_10 = K2Node_CustomEvent_SaveGame_10;
	Parms.K2Node_CustomEvent_bSuccess_10 = K2Node_CustomEvent_bSuccess_10;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.Temp_object_Variable_2 = Temp_object_Variable_2;
	Parms.CallFunc_AsyncSaveGameToSlot_ReturnValue_1 = CallFunc_AsyncSaveGameToSlot_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsSettings_SG_2 = K2Node_DynamicCast_AsSettings_SG_2;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_Conv_BoolToString_ReturnValue = CallFunc_Conv_BoolToString_ReturnValue;
	Parms.CallFunc_AsyncLoadGameFromSlot_ReturnValue_2 = CallFunc_AsyncLoadGameFromSlot_ReturnValue_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;
	Parms.K2Node_CustomEvent_SaveGame_9 = K2Node_CustomEvent_SaveGame_9;
	Parms.K2Node_CustomEvent_bSuccess_9 = K2Node_CustomEvent_bSuccess_9;
	Parms.Temp_bool_Variable_3 = Temp_bool_Variable_3;
	Parms.Temp_object_Variable_3 = Temp_object_Variable_3;
	Parms.CallFunc_AsyncSaveGameToSlot_ReturnValue_2 = CallFunc_AsyncSaveGameToSlot_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsSettings_SG_3 = K2Node_DynamicCast_AsSettings_SG_3;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.CallFunc_IsValid_ReturnValue_5 = CallFunc_IsValid_ReturnValue_5;
	Parms.CallFunc_Conv_BoolToString_ReturnValue_1 = CallFunc_Conv_BoolToString_ReturnValue_1;
	Parms.CallFunc_AsyncLoadGameFromSlot_ReturnValue_3 = CallFunc_AsyncLoadGameFromSlot_ReturnValue_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.CallFunc_IsValid_ReturnValue_6 = CallFunc_IsValid_ReturnValue_6;
	Parms.K2Node_CustomEvent_SaveGame_8 = K2Node_CustomEvent_SaveGame_8;
	Parms.K2Node_CustomEvent_bSuccess_8 = K2Node_CustomEvent_bSuccess_8;
	Parms.Temp_bool_Variable_4 = Temp_bool_Variable_4;
	Parms.Temp_object_Variable_4 = Temp_object_Variable_4;
	Parms.K2Node_CustomEvent_SaveGame_7 = K2Node_CustomEvent_SaveGame_7;
	Parms.K2Node_CustomEvent_bSuccess_7 = K2Node_CustomEvent_bSuccess_7;
	Parms.K2Node_CreateDelegate_OutputDelegate_6 = K2Node_CreateDelegate_OutputDelegate_6;
	Parms.Temp_bool_Variable_5 = Temp_bool_Variable_5;
	Parms.Temp_object_Variable_5 = Temp_object_Variable_5;
	Parms.K2Node_CreateDelegate_OutputDelegate_7 = K2Node_CreateDelegate_OutputDelegate_7;
	Parms.K2Node_CustomEvent_SaveGame_6 = K2Node_CustomEvent_SaveGame_6;
	Parms.K2Node_CustomEvent_bSuccess_6 = K2Node_CustomEvent_bSuccess_6;
	Parms.Temp_bool_Variable_6 = Temp_bool_Variable_6;
	Parms.Temp_object_Variable_6 = Temp_object_Variable_6;
	Parms.K2Node_CustomEvent_SaveGame_5 = K2Node_CustomEvent_SaveGame_5;
	Parms.K2Node_CustomEvent_bSuccess_5 = K2Node_CustomEvent_bSuccess_5;
	Parms.K2Node_CreateDelegate_OutputDelegate_8 = K2Node_CreateDelegate_OutputDelegate_8;
	Parms.Temp_bool_Variable_7 = Temp_bool_Variable_7;
	Parms.Temp_object_Variable_7 = Temp_object_Variable_7;
	Parms.K2Node_CustomEvent_SaveGame_4 = K2Node_CustomEvent_SaveGame_4;
	Parms.K2Node_CustomEvent_bSuccess_4 = K2Node_CustomEvent_bSuccess_4;
	Parms.K2Node_CreateDelegate_OutputDelegate_9 = K2Node_CreateDelegate_OutputDelegate_9;
	Parms.Temp_bool_Variable_8 = Temp_bool_Variable_8;
	Parms.Temp_object_Variable_8 = Temp_object_Variable_8;
	Parms.K2Node_CreateDelegate_OutputDelegate_10 = K2Node_CreateDelegate_OutputDelegate_10;
	Parms.K2Node_CustomEvent_SaveGame_3 = K2Node_CustomEvent_SaveGame_3;
	Parms.K2Node_CustomEvent_bSuccess_3 = K2Node_CustomEvent_bSuccess_3;
	Parms.Temp_bool_Variable_9 = Temp_bool_Variable_9;
	Parms.Temp_object_Variable_9 = Temp_object_Variable_9;
	Parms.K2Node_DynamicCast_AsSettings_SG_4 = K2Node_DynamicCast_AsSettings_SG_4;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;
	Parms.CallFunc_AsyncLoadGameFromSlot_ReturnValue_4 = CallFunc_AsyncLoadGameFromSlot_ReturnValue_4;
	Parms.CallFunc_AsyncSaveGameToSlot_ReturnValue_3 = CallFunc_AsyncSaveGameToSlot_ReturnValue_3;
	Parms.CallFunc_IsValid_ReturnValue_7 = CallFunc_IsValid_ReturnValue_7;
	Parms.CallFunc_IsValid_ReturnValue_8 = CallFunc_IsValid_ReturnValue_8;
	Parms.K2Node_CreateDelegate_OutputDelegate_11 = K2Node_CreateDelegate_OutputDelegate_11;
	Parms.K2Node_CustomEvent_SaveGame_2 = K2Node_CustomEvent_SaveGame_2;
	Parms.K2Node_CustomEvent_bSuccess_2 = K2Node_CustomEvent_bSuccess_2;
	Parms.Temp_bool_Variable_10 = Temp_bool_Variable_10;
	Parms.Temp_object_Variable_10 = Temp_object_Variable_10;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_bool_Variable_11 = Temp_bool_Variable_11;
	Parms.Temp_bool_Variable_12 = Temp_bool_Variable_12;
	Parms.Temp_bool_Variable_13 = Temp_bool_Variable_13;
	Parms.Temp_bool_Variable_14 = Temp_bool_Variable_14;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;
	Parms.K2Node_CustomEvent_SaveGame_1 = K2Node_CustomEvent_SaveGame_1;
	Parms.K2Node_CustomEvent_bSuccess_1 = K2Node_CustomEvent_bSuccess_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_12 = K2Node_CreateDelegate_OutputDelegate_12;
	Parms.Temp_bool_Variable_15 = Temp_bool_Variable_15;
	Parms.Temp_object_Variable_11 = Temp_object_Variable_11;
	Parms.K2Node_DynamicCast_AsSettings_SG_5 = K2Node_DynamicCast_AsSettings_SG_5;
	Parms.K2Node_DynamicCast_bSuccess_5 = K2Node_DynamicCast_bSuccess_5;
	Parms.CallFunc_AsyncLoadGameFromSlot_ReturnValue_5 = CallFunc_AsyncLoadGameFromSlot_ReturnValue_5;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_IsValid_ReturnValue_9 = CallFunc_IsValid_ReturnValue_9;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.Temp_bool_Variable_16 = Temp_bool_Variable_16;
	Parms.Temp_bool_Variable_17 = Temp_bool_Variable_17;
	Parms.CallFunc_MakeLiteralByte_ReturnValue = CallFunc_MakeLiteralByte_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_2 = CallFunc_EqualEqual_ByteByte_ReturnValue_2;
	Parms.CallFunc_BooleanOR_ReturnValue_3 = CallFunc_BooleanOR_ReturnValue_3;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue_4 = CallFunc_BooleanOR_ReturnValue_4;
	Parms.CallFunc_GetDLSSModeInformation_bIsSupported_1 = CallFunc_GetDLSSModeInformation_bIsSupported_1;
	Parms.CallFunc_GetDLSSModeInformation_OptimalScreenPercentage_1 = CallFunc_GetDLSSModeInformation_OptimalScreenPercentage_1;
	Parms.CallFunc_GetDLSSModeInformation_bIsFixedScreenPercentage_1 = CallFunc_GetDLSSModeInformation_bIsFixedScreenPercentage_1;
	Parms.CallFunc_GetDLSSModeInformation_MinScreenPercentage_1 = CallFunc_GetDLSSModeInformation_MinScreenPercentage_1;
	Parms.CallFunc_GetDLSSModeInformation_MaxScreenPercentage_1 = CallFunc_GetDLSSModeInformation_MaxScreenPercentage_1;
	Parms.CallFunc_GetDLSSModeInformation_OptimalSharpness_1 = CallFunc_GetDLSSModeInformation_OptimalSharpness_1;
	Parms.CallFunc_BooleanOR_ReturnValue_5 = CallFunc_BooleanOR_ReturnValue_5;
	Parms.CallFunc_SelectFloat_ReturnValue_1 = CallFunc_SelectFloat_ReturnValue_1;
	Parms.CallFunc_Conv_DoubleToString_ReturnValue_1 = CallFunc_Conv_DoubleToString_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_MakeLiteralByte_ReturnValue_1 = CallFunc_MakeLiteralByte_ReturnValue_1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_3 = CallFunc_EqualEqual_ByteByte_ReturnValue_3;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_4 = CallFunc_EqualEqual_ByteByte_ReturnValue_4;
	Parms.CallFunc_BooleanOR_ReturnValue_6 = CallFunc_BooleanOR_ReturnValue_6;
	Parms.CallFunc_Not_PreBool_ReturnValue_2 = CallFunc_Not_PreBool_ReturnValue_2;
	Parms.CallFunc_GetDLSSModeInformation_bIsSupported_2 = CallFunc_GetDLSSModeInformation_bIsSupported_2;
	Parms.CallFunc_GetDLSSModeInformation_OptimalScreenPercentage_2 = CallFunc_GetDLSSModeInformation_OptimalScreenPercentage_2;
	Parms.CallFunc_GetDLSSModeInformation_bIsFixedScreenPercentage_2 = CallFunc_GetDLSSModeInformation_bIsFixedScreenPercentage_2;
	Parms.CallFunc_GetDLSSModeInformation_MinScreenPercentage_2 = CallFunc_GetDLSSModeInformation_MinScreenPercentage_2;
	Parms.CallFunc_GetDLSSModeInformation_MaxScreenPercentage_2 = CallFunc_GetDLSSModeInformation_MaxScreenPercentage_2;
	Parms.CallFunc_GetDLSSModeInformation_OptimalSharpness_2 = CallFunc_GetDLSSModeInformation_OptimalSharpness_2;
	Parms.CallFunc_BooleanOR_ReturnValue_7 = CallFunc_BooleanOR_ReturnValue_7;
	Parms.CallFunc_SelectFloat_ReturnValue_2 = CallFunc_SelectFloat_ReturnValue_2;
	Parms.CallFunc_BooleanOR_ReturnValue_8 = CallFunc_BooleanOR_ReturnValue_8;
	Parms.CallFunc_Conv_DoubleToString_ReturnValue_2 = CallFunc_Conv_DoubleToString_ReturnValue_2;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;
	Parms.Temp_bool_Variable_18 = Temp_bool_Variable_18;
	Parms.Temp_text_Variable_2 = Temp_text_Variable_2;
	Parms.Temp_text_Variable_3 = Temp_text_Variable_3;
	Parms.K2Node_CustomEvent_SaveGame = K2Node_CustomEvent_SaveGame;
	Parms.K2Node_CustomEvent_bSuccess = K2Node_CustomEvent_bSuccess;
	Parms.K2Node_CreateDelegate_OutputDelegate_13 = K2Node_CreateDelegate_OutputDelegate_13;
	Parms.Temp_bool_Variable_19 = Temp_bool_Variable_19;
	Parms.Temp_object_Variable_12 = Temp_object_Variable_12;
	Parms.K2Node_DynamicCast_AsSettings_SG_6 = K2Node_DynamicCast_AsSettings_SG_6;
	Parms.K2Node_DynamicCast_bSuccess_6 = K2Node_DynamicCast_bSuccess_6;
	Parms.CallFunc_AsyncLoadGameFromSlot_ReturnValue_6 = CallFunc_AsyncLoadGameFromSlot_ReturnValue_6;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_IsValid_ReturnValue_10 = CallFunc_IsValid_ReturnValue_10;
	Parms.CallFunc_GetViewportSize_ReturnValue = CallFunc_GetViewportSize_ReturnValue;
	Parms.CallFunc_GetDLSSModeInformation_bIsSupported_3 = CallFunc_GetDLSSModeInformation_bIsSupported_3;
	Parms.CallFunc_GetDLSSModeInformation_OptimalScreenPercentage_3 = CallFunc_GetDLSSModeInformation_OptimalScreenPercentage_3;
	Parms.CallFunc_GetDLSSModeInformation_bIsFixedScreenPercentage_3 = CallFunc_GetDLSSModeInformation_bIsFixedScreenPercentage_3;
	Parms.CallFunc_GetDLSSModeInformation_MinScreenPercentage_3 = CallFunc_GetDLSSModeInformation_MinScreenPercentage_3;
	Parms.CallFunc_GetDLSSModeInformation_MaxScreenPercentage_3 = CallFunc_GetDLSSModeInformation_MaxScreenPercentage_3;
	Parms.CallFunc_GetDLSSModeInformation_OptimalSharpness_3 = CallFunc_GetDLSSModeInformation_OptimalSharpness_3;
	Parms.CallFunc_GetViewportSize_ReturnValue_1 = CallFunc_GetViewportSize_ReturnValue_1;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;
	Parms.CallFunc_GetDLSSModeInformation_bIsSupported_4 = CallFunc_GetDLSSModeInformation_bIsSupported_4;
	Parms.CallFunc_GetDLSSModeInformation_OptimalScreenPercentage_4 = CallFunc_GetDLSSModeInformation_OptimalScreenPercentage_4;
	Parms.CallFunc_GetDLSSModeInformation_bIsFixedScreenPercentage_4 = CallFunc_GetDLSSModeInformation_bIsFixedScreenPercentage_4;
	Parms.CallFunc_GetDLSSModeInformation_MinScreenPercentage_4 = CallFunc_GetDLSSModeInformation_MinScreenPercentage_4;
	Parms.CallFunc_GetDLSSModeInformation_MaxScreenPercentage_4 = CallFunc_GetDLSSModeInformation_MaxScreenPercentage_4;
	Parms.CallFunc_GetDLSSModeInformation_OptimalSharpness_4 = CallFunc_GetDLSSModeInformation_OptimalSharpness_4;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue_1 = CallFunc_Greater_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_Not_PreBool_ReturnValue_3 = CallFunc_Not_PreBool_ReturnValue_3;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue_9 = CallFunc_BooleanOR_ReturnValue_9;
	Parms.CallFunc_Not_PreBool_ReturnValue_4 = CallFunc_Not_PreBool_ReturnValue_4;
	Parms.CallFunc_SelectFloat_ReturnValue_3 = CallFunc_SelectFloat_ReturnValue_3;
	Parms.CallFunc_BooleanOR_ReturnValue_10 = CallFunc_BooleanOR_ReturnValue_10;
	Parms.CallFunc_Conv_DoubleToString_ReturnValue_3 = CallFunc_Conv_DoubleToString_ReturnValue_3;
	Parms.CallFunc_SelectFloat_ReturnValue_4 = CallFunc_SelectFloat_ReturnValue_4;
	Parms.CallFunc_Concat_StrStr_ReturnValue_3 = CallFunc_Concat_StrStr_ReturnValue_3;
	Parms.CallFunc_Conv_DoubleToString_ReturnValue_4 = CallFunc_Conv_DoubleToString_ReturnValue_4;
	Parms.CallFunc_Concat_StrStr_ReturnValue_4 = CallFunc_Concat_StrStr_ReturnValue_4;
	Parms.CallFunc_BooleanOR_ReturnValue_11 = CallFunc_BooleanOR_ReturnValue_11;
	Parms.CallFunc_BooleanOR_ReturnValue_12 = CallFunc_BooleanOR_ReturnValue_12;
	Parms.CallFunc_BooleanOR_ReturnValue_13 = CallFunc_BooleanOR_ReturnValue_13;
	Parms.CallFunc_AsyncLoadGameFromSlot_ReturnValue_7 = CallFunc_AsyncLoadGameFromSlot_ReturnValue_7;
	Parms.CallFunc_BooleanOR_ReturnValue_14 = CallFunc_BooleanOR_ReturnValue_14;
	Parms.CallFunc_IsValid_ReturnValue_11 = CallFunc_IsValid_ReturnValue_11;
	Parms.CallFunc_GetViewportSize_ReturnValue_2 = CallFunc_GetViewportSize_ReturnValue_2;
	Parms.Temp_object_Variable_13 = Temp_object_Variable_13;
	Parms.CallFunc_GetDLSSModeInformation_bIsSupported_5 = CallFunc_GetDLSSModeInformation_bIsSupported_5;
	Parms.CallFunc_GetDLSSModeInformation_OptimalScreenPercentage_5 = CallFunc_GetDLSSModeInformation_OptimalScreenPercentage_5;
	Parms.CallFunc_GetDLSSModeInformation_bIsFixedScreenPercentage_5 = CallFunc_GetDLSSModeInformation_bIsFixedScreenPercentage_5;
	Parms.CallFunc_GetDLSSModeInformation_MinScreenPercentage_5 = CallFunc_GetDLSSModeInformation_MinScreenPercentage_5;
	Parms.CallFunc_GetDLSSModeInformation_MaxScreenPercentage_5 = CallFunc_GetDLSSModeInformation_MaxScreenPercentage_5;
	Parms.CallFunc_GetDLSSModeInformation_OptimalSharpness_5 = CallFunc_GetDLSSModeInformation_OptimalSharpness_5;
	Parms.CallFunc_AsyncSaveGameToSlot_ReturnValue_4 = CallFunc_AsyncSaveGameToSlot_ReturnValue_4;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue_2 = CallFunc_Greater_DoubleDouble_ReturnValue_2;
	Parms.CallFunc_BooleanAND_ReturnValue_2 = CallFunc_BooleanAND_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_12 = CallFunc_IsValid_ReturnValue_12;
	Parms.CallFunc_Not_PreBool_ReturnValue_5 = CallFunc_Not_PreBool_ReturnValue_5;
	Parms.CallFunc_BooleanOR_ReturnValue_15 = CallFunc_BooleanOR_ReturnValue_15;
	Parms.CallFunc_BooleanOR_ReturnValue_16 = CallFunc_BooleanOR_ReturnValue_16;
	Parms.CallFunc_SelectFloat_ReturnValue_5 = CallFunc_SelectFloat_ReturnValue_5;
	Parms.CallFunc_BooleanOR_ReturnValue_17 = CallFunc_BooleanOR_ReturnValue_17;
	Parms.CallFunc_Conv_DoubleToString_ReturnValue_5 = CallFunc_Conv_DoubleToString_ReturnValue_5;
	Parms.CallFunc_Concat_StrStr_ReturnValue_5 = CallFunc_Concat_StrStr_ReturnValue_5;
	Parms.K2Node_DynamicCast_AsSettings_SG_7 = K2Node_DynamicCast_AsSettings_SG_7;
	Parms.K2Node_DynamicCast_bSuccess_7 = K2Node_DynamicCast_bSuccess_7;
	Parms.CallFunc_GetViewportSize_ReturnValue_3 = CallFunc_GetViewportSize_ReturnValue_3;
	Parms.Temp_bool_Variable_20 = Temp_bool_Variable_20;
	Parms.CallFunc_GetDLSSModeInformation_bIsSupported_6 = CallFunc_GetDLSSModeInformation_bIsSupported_6;
	Parms.CallFunc_GetDLSSModeInformation_OptimalScreenPercentage_6 = CallFunc_GetDLSSModeInformation_OptimalScreenPercentage_6;
	Parms.CallFunc_GetDLSSModeInformation_bIsFixedScreenPercentage_6 = CallFunc_GetDLSSModeInformation_bIsFixedScreenPercentage_6;
	Parms.CallFunc_GetDLSSModeInformation_MinScreenPercentage_6 = CallFunc_GetDLSSModeInformation_MinScreenPercentage_6;
	Parms.CallFunc_GetDLSSModeInformation_MaxScreenPercentage_6 = CallFunc_GetDLSSModeInformation_MaxScreenPercentage_6;
	Parms.CallFunc_GetDLSSModeInformation_OptimalSharpness_6 = CallFunc_GetDLSSModeInformation_OptimalSharpness_6;
	Parms.CallFunc_GetViewportSize_ReturnValue_4 = CallFunc_GetViewportSize_ReturnValue_4;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue_3 = CallFunc_Greater_DoubleDouble_ReturnValue_3;
	Parms.CallFunc_GetDLSSModeInformation_bIsSupported_7 = CallFunc_GetDLSSModeInformation_bIsSupported_7;
	Parms.CallFunc_GetDLSSModeInformation_OptimalScreenPercentage_7 = CallFunc_GetDLSSModeInformation_OptimalScreenPercentage_7;
	Parms.CallFunc_GetDLSSModeInformation_bIsFixedScreenPercentage_7 = CallFunc_GetDLSSModeInformation_bIsFixedScreenPercentage_7;
	Parms.CallFunc_GetDLSSModeInformation_MinScreenPercentage_7 = CallFunc_GetDLSSModeInformation_MinScreenPercentage_7;
	Parms.CallFunc_GetDLSSModeInformation_MaxScreenPercentage_7 = CallFunc_GetDLSSModeInformation_MaxScreenPercentage_7;
	Parms.CallFunc_GetDLSSModeInformation_OptimalSharpness_7 = CallFunc_GetDLSSModeInformation_OptimalSharpness_7;
	Parms.CallFunc_BooleanAND_ReturnValue_3 = CallFunc_BooleanAND_ReturnValue_3;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue_4 = CallFunc_Greater_DoubleDouble_ReturnValue_4;
	Parms.CallFunc_Not_PreBool_ReturnValue_6 = CallFunc_Not_PreBool_ReturnValue_6;
	Parms.CallFunc_BooleanAND_ReturnValue_4 = CallFunc_BooleanAND_ReturnValue_4;
	Parms.CallFunc_BooleanOR_ReturnValue_18 = CallFunc_BooleanOR_ReturnValue_18;
	Parms.CallFunc_Not_PreBool_ReturnValue_7 = CallFunc_Not_PreBool_ReturnValue_7;
	Parms.CallFunc_SelectFloat_ReturnValue_6 = CallFunc_SelectFloat_ReturnValue_6;
	Parms.CallFunc_BooleanOR_ReturnValue_19 = CallFunc_BooleanOR_ReturnValue_19;
	Parms.CallFunc_Conv_DoubleToString_ReturnValue_6 = CallFunc_Conv_DoubleToString_ReturnValue_6;
	Parms.CallFunc_SelectFloat_ReturnValue_7 = CallFunc_SelectFloat_ReturnValue_7;
	Parms.CallFunc_Concat_StrStr_ReturnValue_6 = CallFunc_Concat_StrStr_ReturnValue_6;
	Parms.CallFunc_Conv_DoubleToString_ReturnValue_7 = CallFunc_Conv_DoubleToString_ReturnValue_7;
	Parms.CallFunc_Concat_StrStr_ReturnValue_7 = CallFunc_Concat_StrStr_ReturnValue_7;
	Parms.CallFunc_BooleanOR_ReturnValue_20 = CallFunc_BooleanOR_ReturnValue_20;
	Parms.CallFunc_BooleanOR_ReturnValue_21 = CallFunc_BooleanOR_ReturnValue_21;
	Parms.CallFunc_BooleanOR_ReturnValue_22 = CallFunc_BooleanOR_ReturnValue_22;
	Parms.CallFunc_BooleanOR_ReturnValue_23 = CallFunc_BooleanOR_ReturnValue_23;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.K2Node_CustomEvent_SaveGame_19 = K2Node_CustomEvent_SaveGame_19;
	Parms.K2Node_CustomEvent_bSuccess_19 = K2Node_CustomEvent_bSuccess_19;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_14 = K2Node_CreateDelegate_OutputDelegate_14;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.K2Node_ComponentBoundEvent_bIsChecked_3 = K2Node_ComponentBoundEvent_bIsChecked_3;
	Parms.K2Node_ComponentBoundEvent_SelectedItem_9 = K2Node_ComponentBoundEvent_SelectedItem_9;
	Parms.K2Node_ComponentBoundEvent_SelectionType_9 = K2Node_ComponentBoundEvent_SelectionType_9;
	Parms.CallFunc_EqualEqual_StriStri_ReturnValue = CallFunc_EqualEqual_StriStri_ReturnValue;
	Parms.CallFunc_EqualEqual_StriStri_ReturnValue_1 = CallFunc_EqualEqual_StriStri_ReturnValue_1;
	Parms.CallFunc_EqualEqual_StriStri_ReturnValue_2 = CallFunc_EqualEqual_StriStri_ReturnValue_2;
	Parms.K2Node_ComponentBoundEvent_SelectedItem_8 = K2Node_ComponentBoundEvent_SelectedItem_8;
	Parms.K2Node_ComponentBoundEvent_SelectionType_8 = K2Node_ComponentBoundEvent_SelectionType_8;
	Parms.K2Node_ComponentBoundEvent_SelectedItem_7 = K2Node_ComponentBoundEvent_SelectedItem_7;
	Parms.K2Node_ComponentBoundEvent_SelectionType_7 = K2Node_ComponentBoundEvent_SelectionType_7;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.K2Node_ComponentBoundEvent_SelectedItem_6 = K2Node_ComponentBoundEvent_SelectedItem_6;
	Parms.K2Node_ComponentBoundEvent_SelectionType_6 = K2Node_ComponentBoundEvent_SelectionType_6;
	Parms.K2Node_ComponentBoundEvent_SelectedItem_5 = K2Node_ComponentBoundEvent_SelectedItem_5;
	Parms.K2Node_ComponentBoundEvent_SelectionType_5 = K2Node_ComponentBoundEvent_SelectionType_5;
	Parms.K2Node_ComponentBoundEvent_SelectedItem_4 = K2Node_ComponentBoundEvent_SelectedItem_4;
	Parms.K2Node_ComponentBoundEvent_SelectionType_4 = K2Node_ComponentBoundEvent_SelectionType_4;
	Parms.K2Node_ComponentBoundEvent_SelectedItem_3 = K2Node_ComponentBoundEvent_SelectedItem_3;
	Parms.K2Node_ComponentBoundEvent_SelectionType_3 = K2Node_ComponentBoundEvent_SelectionType_3;
	Parms.K2Node_ComponentBoundEvent_SelectedItem_2 = K2Node_ComponentBoundEvent_SelectedItem_2;
	Parms.K2Node_ComponentBoundEvent_SelectionType_2 = K2Node_ComponentBoundEvent_SelectionType_2;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_CreateDelegate_OutputDelegate_15 = K2Node_CreateDelegate_OutputDelegate_15;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_GetSelectedIndex_ReturnValue = CallFunc_GetSelectedIndex_ReturnValue;
	Parms.CallFunc_MakeLiteralText_ReturnValue = CallFunc_MakeLiteralText_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_EqualEqual_StriStri_ReturnValue_3 = CallFunc_EqualEqual_StriStri_ReturnValue_3;
	Parms.CallFunc_MakeLiteralText_ReturnValue_1 = CallFunc_MakeLiteralText_ReturnValue_1;
	Parms.CallFunc_Conv_TextToString_ReturnValue_1 = CallFunc_Conv_TextToString_ReturnValue_1;
	Parms.CallFunc_MakeLiteralText_ReturnValue_2 = CallFunc_MakeLiteralText_ReturnValue_2;
	Parms.CallFunc_EqualEqual_StriStri_ReturnValue_4 = CallFunc_EqualEqual_StriStri_ReturnValue_4;
	Parms.CallFunc_Conv_TextToString_ReturnValue_2 = CallFunc_Conv_TextToString_ReturnValue_2;
	Parms.CallFunc_EqualEqual_StriStri_ReturnValue_5 = CallFunc_EqualEqual_StriStri_ReturnValue_5;
	Parms.CallFunc_MakeLiteralText_ReturnValue_3 = CallFunc_MakeLiteralText_ReturnValue_3;
	Parms.CallFunc_Conv_TextToString_ReturnValue_3 = CallFunc_Conv_TextToString_ReturnValue_3;
	Parms.CallFunc_MakeLiteralText_ReturnValue_4 = CallFunc_MakeLiteralText_ReturnValue_4;
	Parms.CallFunc_EqualEqual_StriStri_ReturnValue_6 = CallFunc_EqualEqual_StriStri_ReturnValue_6;
	Parms.CallFunc_Conv_TextToString_ReturnValue_4 = CallFunc_Conv_TextToString_ReturnValue_4;
	Parms.CallFunc_EqualEqual_StriStri_ReturnValue_7 = CallFunc_EqualEqual_StriStri_ReturnValue_7;
	Parms.CallFunc_MakeLiteralText_ReturnValue_5 = CallFunc_MakeLiteralText_ReturnValue_5;
	Parms.CallFunc_Conv_TextToString_ReturnValue_5 = CallFunc_Conv_TextToString_ReturnValue_5;
	Parms.CallFunc_MakeLiteralText_ReturnValue_6 = CallFunc_MakeLiteralText_ReturnValue_6;
	Parms.CallFunc_EqualEqual_StriStri_ReturnValue_8 = CallFunc_EqualEqual_StriStri_ReturnValue_8;
	Parms.CallFunc_Conv_TextToString_ReturnValue_6 = CallFunc_Conv_TextToString_ReturnValue_6;
	Parms.CallFunc_EqualEqual_StriStri_ReturnValue_9 = CallFunc_EqualEqual_StriStri_ReturnValue_9;
	Parms.CallFunc_MakeLiteralText_ReturnValue_7 = CallFunc_MakeLiteralText_ReturnValue_7;
	Parms.CallFunc_Conv_TextToString_ReturnValue_7 = CallFunc_Conv_TextToString_ReturnValue_7;
	Parms.CallFunc_MakeLiteralText_ReturnValue_8 = CallFunc_MakeLiteralText_ReturnValue_8;
	Parms.CallFunc_EqualEqual_StriStri_ReturnValue_10 = CallFunc_EqualEqual_StriStri_ReturnValue_10;
	Parms.CallFunc_Conv_TextToString_ReturnValue_8 = CallFunc_Conv_TextToString_ReturnValue_8;
	Parms.CallFunc_EqualEqual_StriStri_ReturnValue_11 = CallFunc_EqualEqual_StriStri_ReturnValue_11;
	Parms.CallFunc_MakeLiteralText_ReturnValue_9 = CallFunc_MakeLiteralText_ReturnValue_9;
	Parms.CallFunc_Conv_TextToString_ReturnValue_9 = CallFunc_Conv_TextToString_ReturnValue_9;
	Parms.CallFunc_MakeLiteralText_ReturnValue_10 = CallFunc_MakeLiteralText_ReturnValue_10;
	Parms.CallFunc_EqualEqual_StriStri_ReturnValue_12 = CallFunc_EqualEqual_StriStri_ReturnValue_12;
	Parms.CallFunc_Conv_TextToString_ReturnValue_10 = CallFunc_Conv_TextToString_ReturnValue_10;
	Parms.CallFunc_EqualEqual_StriStri_ReturnValue_13 = CallFunc_EqualEqual_StriStri_ReturnValue_13;
	Parms.CallFunc_MakeLiteralText_ReturnValue_11 = CallFunc_MakeLiteralText_ReturnValue_11;
	Parms.CallFunc_Conv_TextToString_ReturnValue_11 = CallFunc_Conv_TextToString_ReturnValue_11;
	Parms.CallFunc_MakeLiteralText_ReturnValue_12 = CallFunc_MakeLiteralText_ReturnValue_12;
	Parms.CallFunc_EqualEqual_StriStri_ReturnValue_14 = CallFunc_EqualEqual_StriStri_ReturnValue_14;
	Parms.CallFunc_Conv_TextToString_ReturnValue_12 = CallFunc_Conv_TextToString_ReturnValue_12;
	Parms.CallFunc_EqualEqual_StriStri_ReturnValue_15 = CallFunc_EqualEqual_StriStri_ReturnValue_15;
	Parms.CallFunc_MakeLiteralText_ReturnValue_13 = CallFunc_MakeLiteralText_ReturnValue_13;
	Parms.CallFunc_Conv_TextToString_ReturnValue_13 = CallFunc_Conv_TextToString_ReturnValue_13;
	Parms.CallFunc_MakeLiteralText_ReturnValue_14 = CallFunc_MakeLiteralText_ReturnValue_14;
	Parms.CallFunc_EqualEqual_StriStri_ReturnValue_16 = CallFunc_EqualEqual_StriStri_ReturnValue_16;
	Parms.CallFunc_Conv_TextToString_ReturnValue_14 = CallFunc_Conv_TextToString_ReturnValue_14;
	Parms.CallFunc_EqualEqual_StriStri_ReturnValue_17 = CallFunc_EqualEqual_StriStri_ReturnValue_17;
	Parms.CallFunc_MakeLiteralText_ReturnValue_15 = CallFunc_MakeLiteralText_ReturnValue_15;
	Parms.CallFunc_Conv_TextToString_ReturnValue_15 = CallFunc_Conv_TextToString_ReturnValue_15;
	Parms.CallFunc_MakeLiteralText_ReturnValue_16 = CallFunc_MakeLiteralText_ReturnValue_16;
	Parms.CallFunc_EqualEqual_StriStri_ReturnValue_18 = CallFunc_EqualEqual_StriStri_ReturnValue_18;
	Parms.CallFunc_Conv_TextToString_ReturnValue_16 = CallFunc_Conv_TextToString_ReturnValue_16;
	Parms.CallFunc_EqualEqual_StriStri_ReturnValue_19 = CallFunc_EqualEqual_StriStri_ReturnValue_19;
	Parms.CallFunc_MakeLiteralText_ReturnValue_17 = CallFunc_MakeLiteralText_ReturnValue_17;
	Parms.CallFunc_Conv_TextToString_ReturnValue_17 = CallFunc_Conv_TextToString_ReturnValue_17;
	Parms.CallFunc_MakeLiteralText_ReturnValue_18 = CallFunc_MakeLiteralText_ReturnValue_18;
	Parms.CallFunc_EqualEqual_StriStri_ReturnValue_20 = CallFunc_EqualEqual_StriStri_ReturnValue_20;
	Parms.CallFunc_Conv_TextToString_ReturnValue_18 = CallFunc_Conv_TextToString_ReturnValue_18;
	Parms.CallFunc_EqualEqual_StriStri_ReturnValue_21 = CallFunc_EqualEqual_StriStri_ReturnValue_21;
	Parms.CallFunc_MakeLiteralText_ReturnValue_19 = CallFunc_MakeLiteralText_ReturnValue_19;
	Parms.CallFunc_Conv_TextToString_ReturnValue_19 = CallFunc_Conv_TextToString_ReturnValue_19;
	Parms.CallFunc_MakeLiteralText_ReturnValue_20 = CallFunc_MakeLiteralText_ReturnValue_20;
	Parms.CallFunc_EqualEqual_StriStri_ReturnValue_22 = CallFunc_EqualEqual_StriStri_ReturnValue_22;
	Parms.CallFunc_Conv_TextToString_ReturnValue_20 = CallFunc_Conv_TextToString_ReturnValue_20;
	Parms.CallFunc_EqualEqual_StriStri_ReturnValue_23 = CallFunc_EqualEqual_StriStri_ReturnValue_23;
	Parms.CallFunc_MakeLiteralText_ReturnValue_21 = CallFunc_MakeLiteralText_ReturnValue_21;
	Parms.CallFunc_Conv_TextToString_ReturnValue_21 = CallFunc_Conv_TextToString_ReturnValue_21;
	Parms.CallFunc_MakeLiteralText_ReturnValue_22 = CallFunc_MakeLiteralText_ReturnValue_22;
	Parms.CallFunc_EqualEqual_StriStri_ReturnValue_24 = CallFunc_EqualEqual_StriStri_ReturnValue_24;
	Parms.CallFunc_Conv_TextToString_ReturnValue_22 = CallFunc_Conv_TextToString_ReturnValue_22;
	Parms.CallFunc_EqualEqual_StriStri_ReturnValue_25 = CallFunc_EqualEqual_StriStri_ReturnValue_25;
	Parms.CallFunc_MakeLiteralText_ReturnValue_23 = CallFunc_MakeLiteralText_ReturnValue_23;
	Parms.CallFunc_Conv_TextToString_ReturnValue_23 = CallFunc_Conv_TextToString_ReturnValue_23;
	Parms.CallFunc_GetGameUserSettings_ReturnValue = CallFunc_GetGameUserSettings_ReturnValue;
	Parms.CallFunc_EqualEqual_StriStri_ReturnValue_26 = CallFunc_EqualEqual_StriStri_ReturnValue_26;
	Parms.CallFunc_GetGameUserSettings_ReturnValue_1 = CallFunc_GetGameUserSettings_ReturnValue_1;
	Parms.CallFunc_GetGameUserSettings_ReturnValue_2 = CallFunc_GetGameUserSettings_ReturnValue_2;
	Parms.CallFunc_GetGameUserSettings_ReturnValue_3 = CallFunc_GetGameUserSettings_ReturnValue_3;
	Parms.K2Node_ComponentBoundEvent_bIsChecked_2 = K2Node_ComponentBoundEvent_bIsChecked_2;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_AsyncLoadGameFromSlot_ReturnValue_8 = CallFunc_AsyncLoadGameFromSlot_ReturnValue_8;
	Parms.CallFunc_IsValid_ReturnValue_13 = CallFunc_IsValid_ReturnValue_13;
	Parms.K2Node_ComponentBoundEvent_SelectedItem_1 = K2Node_ComponentBoundEvent_SelectedItem_1;
	Parms.K2Node_ComponentBoundEvent_SelectionType_1 = K2Node_ComponentBoundEvent_SelectionType_1;
	Parms.CallFunc_Conv_StringToDouble_ReturnValue = CallFunc_Conv_StringToDouble_ReturnValue;
	Parms.CallFunc_Conv_StringToDouble_ReturnValue_1 = CallFunc_Conv_StringToDouble_ReturnValue_1;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue = CallFunc_EqualEqual_StrStr_ReturnValue;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue_1 = CallFunc_EqualEqual_StrStr_ReturnValue_1;
	Parms.Temp_object_Variable_14 = Temp_object_Variable_14;
	Parms.Temp_bool_Variable_21 = Temp_bool_Variable_21;
	Parms.CallFunc_AsyncSaveGameToSlot_ReturnValue_5 = CallFunc_AsyncSaveGameToSlot_ReturnValue_5;
	Parms.K2Node_DynamicCast_AsSettings_SG_8 = K2Node_DynamicCast_AsSettings_SG_8;
	Parms.K2Node_DynamicCast_bSuccess_8 = K2Node_DynamicCast_bSuccess_8;
	Parms.CallFunc_IsValid_ReturnValue_14 = CallFunc_IsValid_ReturnValue_14;
	Parms.CallFunc_GetOwningPlayer_ReturnValue_1 = CallFunc_GetOwningPlayer_ReturnValue_1;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.CallFunc_K2_GetPawn_ReturnValue_1 = CallFunc_K2_GetPawn_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsB_Demo_Character = K2Node_DynamicCast_AsB_Demo_Character;
	Parms.K2Node_DynamicCast_bSuccess_9 = K2Node_DynamicCast_bSuccess_9;
	Parms.K2Node_DynamicCast_AsB_Demo_Character_1 = K2Node_DynamicCast_AsB_Demo_Character_1;
	Parms.K2Node_DynamicCast_bSuccess_10 = K2Node_DynamicCast_bSuccess_10;
	Parms.CallFunc_MakeLiteralText_ReturnValue_24 = CallFunc_MakeLiteralText_ReturnValue_24;
	Parms.CallFunc_MakeLiteralText_ReturnValue_25 = CallFunc_MakeLiteralText_ReturnValue_25;
	Parms.CallFunc_Conv_TextToString_ReturnValue_24 = CallFunc_Conv_TextToString_ReturnValue_24;
	Parms.CallFunc_Conv_TextToString_ReturnValue_25 = CallFunc_Conv_TextToString_ReturnValue_25;
	Parms.CallFunc_MakeLiteralText_ReturnValue_26 = CallFunc_MakeLiteralText_ReturnValue_26;
	Parms.CallFunc_MakeLiteralText_ReturnValue_27 = CallFunc_MakeLiteralText_ReturnValue_27;
	Parms.CallFunc_Conv_TextToString_ReturnValue_26 = CallFunc_Conv_TextToString_ReturnValue_26;
	Parms.CallFunc_MakeLiteralText_ReturnValue_28 = CallFunc_MakeLiteralText_ReturnValue_28;
	Parms.CallFunc_MakeLiteralText_ReturnValue_29 = CallFunc_MakeLiteralText_ReturnValue_29;
	Parms.CallFunc_Conv_TextToString_ReturnValue_27 = CallFunc_Conv_TextToString_ReturnValue_27;
	Parms.CallFunc_MakeLiteralText_ReturnValue_30 = CallFunc_MakeLiteralText_ReturnValue_30;
	Parms.CallFunc_Conv_TextToString_ReturnValue_28 = CallFunc_Conv_TextToString_ReturnValue_28;
	Parms.CallFunc_MakeLiteralText_ReturnValue_31 = CallFunc_MakeLiteralText_ReturnValue_31;
	Parms.CallFunc_Conv_TextToString_ReturnValue_29 = CallFunc_Conv_TextToString_ReturnValue_29;
	Parms.CallFunc_MakeLiteralText_ReturnValue_32 = CallFunc_MakeLiteralText_ReturnValue_32;
	Parms.CallFunc_Conv_TextToString_ReturnValue_30 = CallFunc_Conv_TextToString_ReturnValue_30;
	Parms.CallFunc_MakeLiteralText_ReturnValue_33 = CallFunc_MakeLiteralText_ReturnValue_33;
	Parms.CallFunc_Conv_TextToString_ReturnValue_31 = CallFunc_Conv_TextToString_ReturnValue_31;
	Parms.CallFunc_MakeLiteralText_ReturnValue_34 = CallFunc_MakeLiteralText_ReturnValue_34;
	Parms.CallFunc_Conv_TextToString_ReturnValue_32 = CallFunc_Conv_TextToString_ReturnValue_32;
	Parms.CallFunc_MakeLiteralText_ReturnValue_35 = CallFunc_MakeLiteralText_ReturnValue_35;
	Parms.CallFunc_Conv_TextToString_ReturnValue_33 = CallFunc_Conv_TextToString_ReturnValue_33;
	Parms.CallFunc_MakeLiteralText_ReturnValue_36 = CallFunc_MakeLiteralText_ReturnValue_36;
	Parms.CallFunc_Conv_TextToString_ReturnValue_34 = CallFunc_Conv_TextToString_ReturnValue_34;
	Parms.CallFunc_MakeLiteralText_ReturnValue_37 = CallFunc_MakeLiteralText_ReturnValue_37;
	Parms.CallFunc_Conv_TextToString_ReturnValue_35 = CallFunc_Conv_TextToString_ReturnValue_35;
	Parms.CallFunc_MakeLiteralText_ReturnValue_38 = CallFunc_MakeLiteralText_ReturnValue_38;
	Parms.CallFunc_MakeLiteralText_ReturnValue_39 = CallFunc_MakeLiteralText_ReturnValue_39;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_GetGameUserSettings_ReturnValue_4 = CallFunc_GetGameUserSettings_ReturnValue_4;
	Parms.CallFunc_GetScreenResolution_ReturnValue = CallFunc_GetScreenResolution_ReturnValue;
	Parms.CallFunc_Conv_IntToInt64_ReturnValue = CallFunc_Conv_IntToInt64_ReturnValue;
	Parms.CallFunc_Conv_IntToInt64_ReturnValue_1 = CallFunc_Conv_IntToInt64_ReturnValue_1;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.Temp_object_Variable_15 = Temp_object_Variable_15;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.Temp_bool_Variable_22 = Temp_bool_Variable_22;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue_36 = CallFunc_Conv_TextToString_ReturnValue_36;
	Parms.K2Node_CustomEvent_SaveGame_13 = K2Node_CustomEvent_SaveGame_13;
	Parms.K2Node_CustomEvent_bSuccess_13 = K2Node_CustomEvent_bSuccess_13;
	Parms.K2Node_CreateDelegate_OutputDelegate_16 = K2Node_CreateDelegate_OutputDelegate_16;
	Parms.Temp_int_Loop_Counter_Variable_2 = Temp_int_Loop_Counter_Variable_2;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.CallFunc_GetGameUserSettings_ReturnValue_5 = CallFunc_GetGameUserSettings_ReturnValue_5;
	Parms.CallFunc_GetScreenResolution_ReturnValue_1 = CallFunc_GetScreenResolution_ReturnValue_1;
	Parms.Temp_object_Variable_16 = Temp_object_Variable_16;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.CallFunc_Conv_IntToText_ReturnValue_1 = CallFunc_Conv_IntToText_ReturnValue_1;
	Parms.K2Node_MakeStruct_FormatArgumentData_2 = K2Node_MakeStruct_FormatArgumentData_2;
	Parms.K2Node_MakeStruct_FormatArgumentData_3 = K2Node_MakeStruct_FormatArgumentData_3;
	Parms.Temp_bool_Variable_23 = Temp_bool_Variable_23;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.K2Node_CustomEvent_SaveGame_14 = K2Node_CustomEvent_SaveGame_14;
	Parms.K2Node_CustomEvent_bSuccess_14 = K2Node_CustomEvent_bSuccess_14;
	Parms.CallFunc_Format_ReturnValue_1 = CallFunc_Format_ReturnValue_1;
	Parms.CallFunc_Conv_TextToString_ReturnValue_37 = CallFunc_Conv_TextToString_ReturnValue_37;
	Parms.CallFunc_Conv_TextToString_ReturnValue_38 = CallFunc_Conv_TextToString_ReturnValue_38;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_CustomEvent_SaveGame_20 = K2Node_CustomEvent_SaveGame_20;
	Parms.K2Node_CustomEvent_bSuccess_20 = K2Node_CustomEvent_bSuccess_20;
	Parms.K2Node_DynamicCast_AsGI_Contain = K2Node_DynamicCast_AsGI_Contain;
	Parms.K2Node_DynamicCast_bSuccess_11 = K2Node_DynamicCast_bSuccess_11;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Conv_IntToInt64_ReturnValue_2 = CallFunc_Conv_IntToInt64_ReturnValue_2;
	Parms.K2Node_MakeStruct_FormatArgumentData_4 = K2Node_MakeStruct_FormatArgumentData_4;
	Parms.K2Node_MakeStruct_IntPoint = K2Node_MakeStruct_IntPoint;
	Parms.CallFunc_Conv_IntToInt64_ReturnValue_3 = CallFunc_Conv_IntToInt64_ReturnValue_3;
	Parms.K2Node_MakeStruct_FormatArgumentData_5 = K2Node_MakeStruct_FormatArgumentData_5;
	Parms.K2Node_MakeArray_Array_2 = K2Node_MakeArray_Array_2;
	Parms.CallFunc_Format_ReturnValue_2 = CallFunc_Format_ReturnValue_2;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.CallFunc_Conv_TextToString_ReturnValue_39 = CallFunc_Conv_TextToString_ReturnValue_39;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate_17 = K2Node_CreateDelegate_OutputDelegate_17;
	Parms.CallFunc_GetGameUserSettings_ReturnValue_6 = CallFunc_GetGameUserSettings_ReturnValue_6;
	Parms.K2Node_CreateDelegate_OutputDelegate_18 = K2Node_CreateDelegate_OutputDelegate_18;
	Parms.CallFunc_DoesSaveGameExist_ReturnValue = CallFunc_DoesSaveGameExist_ReturnValue;
	Parms.CallFunc_CreateSaveGameObject_ReturnValue = CallFunc_CreateSaveGameObject_ReturnValue;
	Parms.CallFunc_AsyncSaveGameToSlot_ReturnValue_6 = CallFunc_AsyncSaveGameToSlot_ReturnValue_6;
	Parms.CallFunc_IsValid_ReturnValue_15 = CallFunc_IsValid_ReturnValue_15;
	Parms.K2Node_ComponentBoundEvent_bIsChecked_1 = K2Node_ComponentBoundEvent_bIsChecked_1;
	Parms.K2Node_ComponentBoundEvent_SelectedItem = K2Node_ComponentBoundEvent_SelectedItem;
	Parms.K2Node_ComponentBoundEvent_SelectionType = K2Node_ComponentBoundEvent_SelectionType;
	Parms.CallFunc_EqualEqual_StriStri_ReturnValue_27 = CallFunc_EqualEqual_StriStri_ReturnValue_27;
	Parms.CallFunc_EqualEqual_StriStri_ReturnValue_28 = CallFunc_EqualEqual_StriStri_ReturnValue_28;
	Parms.CallFunc_EqualEqual_StriStri_ReturnValue_29 = CallFunc_EqualEqual_StriStri_ReturnValue_29;
	Parms.CallFunc_EqualEqual_StriStri_ReturnValue_30 = CallFunc_EqualEqual_StriStri_ReturnValue_30;
	Parms.CallFunc_EqualEqual_StriStri_ReturnValue_31 = CallFunc_EqualEqual_StriStri_ReturnValue_31;
	Parms.CallFunc_EqualEqual_StriStri_ReturnValue_32 = CallFunc_EqualEqual_StriStri_ReturnValue_32;
	Parms.CallFunc_EqualEqual_StriStri_ReturnValue_33 = CallFunc_EqualEqual_StriStri_ReturnValue_33;
	Parms.K2Node_ComponentBoundEvent_bIsChecked = K2Node_ComponentBoundEvent_bIsChecked;
	Parms.CallFunc_DoesSaveGameExist_ReturnValue_1 = CallFunc_DoesSaveGameExist_ReturnValue_1;
	Parms.CallFunc_CreateSaveGameObject_ReturnValue_1 = CallFunc_CreateSaveGameObject_ReturnValue_1;
	Parms.CallFunc_AsyncSaveGameToSlot_ReturnValue_7 = CallFunc_AsyncSaveGameToSlot_ReturnValue_7;
	Parms.CallFunc_IsValid_ReturnValue_16 = CallFunc_IsValid_ReturnValue_16;
	Parms.CallFunc_MakeLiteralByte_ReturnValue_2 = CallFunc_MakeLiteralByte_ReturnValue_2;
	Parms.CallFunc_GetSupportedFullscreenResolutions_Resolutions = CallFunc_GetSupportedFullscreenResolutions_Resolutions;
	Parms.CallFunc_GetSupportedFullscreenResolutions_ReturnValue = CallFunc_GetSupportedFullscreenResolutions_ReturnValue;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_5 = CallFunc_EqualEqual_ByteByte_ReturnValue_5;
	Parms.CallFunc_Conv_IntToText_ReturnValue_2 = CallFunc_Conv_IntToText_ReturnValue_2;
	Parms.CallFunc_Conv_IntToText_ReturnValue_3 = CallFunc_Conv_IntToText_ReturnValue_3;
	Parms.K2Node_MakeStruct_FormatArgumentData_6 = K2Node_MakeStruct_FormatArgumentData_6;
	Parms.K2Node_MakeStruct_FormatArgumentData_7 = K2Node_MakeStruct_FormatArgumentData_7;
	Parms.K2Node_MakeArray_Array_3 = K2Node_MakeArray_Array_3;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.CallFunc_Format_ReturnValue_3 = CallFunc_Format_ReturnValue_3;
	Parms.CallFunc_Less_IntInt_ReturnValue_2 = CallFunc_Less_IntInt_ReturnValue_2;
	Parms.CallFunc_Conv_TextToString_ReturnValue_40 = CallFunc_Conv_TextToString_ReturnValue_40;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_AsyncLoadGameFromSlot_ReturnValue_9 = CallFunc_AsyncLoadGameFromSlot_ReturnValue_9;
	Parms.CallFunc_GetGameUserSettings_ReturnValue_7 = CallFunc_GetGameUserSettings_ReturnValue_7;
	Parms.CallFunc_GetScreenResolution_ReturnValue_2 = CallFunc_GetScreenResolution_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_17 = CallFunc_IsValid_ReturnValue_17;
	Parms.CallFunc_Conv_IntToText_ReturnValue_4 = CallFunc_Conv_IntToText_ReturnValue_4;
	Parms.CallFunc_Conv_IntToText_ReturnValue_5 = CallFunc_Conv_IntToText_ReturnValue_5;
	Parms.K2Node_MakeStruct_FormatArgumentData_8 = K2Node_MakeStruct_FormatArgumentData_8;
	Parms.K2Node_MakeStruct_FormatArgumentData_9 = K2Node_MakeStruct_FormatArgumentData_9;
	Parms.K2Node_MakeArray_Array_4 = K2Node_MakeArray_Array_4;
	Parms.CallFunc_Format_ReturnValue_4 = CallFunc_Format_ReturnValue_4;
	Parms.CallFunc_Conv_TextToString_ReturnValue_41 = CallFunc_Conv_TextToString_ReturnValue_41;
	Parms.CallFunc_DLSS_SR_Enabled_ReturnValue = CallFunc_DLSS_SR_Enabled_ReturnValue;
	Parms.CallFunc_MakeLiteralText_ReturnValue_40 = CallFunc_MakeLiteralText_ReturnValue_40;
	Parms.CallFunc_MakeLiteralText_ReturnValue_41 = CallFunc_MakeLiteralText_ReturnValue_41;
	Parms.CallFunc_MakeLiteralText_ReturnValue_42 = CallFunc_MakeLiteralText_ReturnValue_42;
	Parms.CallFunc_MakeLiteralText_ReturnValue_43 = CallFunc_MakeLiteralText_ReturnValue_43;
	Parms.CallFunc_MakeLiteralText_ReturnValue_44 = CallFunc_MakeLiteralText_ReturnValue_44;
	Parms.CallFunc_MakeLiteralText_ReturnValue_45 = CallFunc_MakeLiteralText_ReturnValue_45;
	Parms.CallFunc_MakeLiteralText_ReturnValue_46 = CallFunc_MakeLiteralText_ReturnValue_46;
	Parms.CallFunc_MakeLiteralText_ReturnValue_47 = CallFunc_MakeLiteralText_ReturnValue_47;
	Parms.CallFunc_MakeLiteralText_ReturnValue_48 = CallFunc_MakeLiteralText_ReturnValue_48;
	Parms.CallFunc_MakeLiteralText_ReturnValue_49 = CallFunc_MakeLiteralText_ReturnValue_49;
	Parms.CallFunc_Conv_TextToString_ReturnValue_42 = CallFunc_Conv_TextToString_ReturnValue_42;
	Parms.CallFunc_Conv_TextToString_ReturnValue_43 = CallFunc_Conv_TextToString_ReturnValue_43;
	Parms.CallFunc_MakeLiteralText_ReturnValue_50 = CallFunc_MakeLiteralText_ReturnValue_50;
	Parms.CallFunc_MakeLiteralText_ReturnValue_51 = CallFunc_MakeLiteralText_ReturnValue_51;
	Parms.CallFunc_Conv_TextToString_ReturnValue_44 = CallFunc_Conv_TextToString_ReturnValue_44;
	Parms.CallFunc_Conv_TextToString_ReturnValue_45 = CallFunc_Conv_TextToString_ReturnValue_45;
	Parms.CallFunc_MakeLiteralText_ReturnValue_52 = CallFunc_MakeLiteralText_ReturnValue_52;
	Parms.CallFunc_MakeLiteralText_ReturnValue_53 = CallFunc_MakeLiteralText_ReturnValue_53;
	Parms.CallFunc_Conv_TextToString_ReturnValue_46 = CallFunc_Conv_TextToString_ReturnValue_46;
	Parms.CallFunc_Conv_TextToString_ReturnValue_47 = CallFunc_Conv_TextToString_ReturnValue_47;
	Parms.CallFunc_MakeLiteralText_ReturnValue_54 = CallFunc_MakeLiteralText_ReturnValue_54;
	Parms.CallFunc_MakeLiteralText_ReturnValue_55 = CallFunc_MakeLiteralText_ReturnValue_55;
	Parms.CallFunc_Conv_TextToString_ReturnValue_48 = CallFunc_Conv_TextToString_ReturnValue_48;
	Parms.CallFunc_Conv_TextToString_ReturnValue_49 = CallFunc_Conv_TextToString_ReturnValue_49;
	Parms.CallFunc_MakeLiteralText_ReturnValue_56 = CallFunc_MakeLiteralText_ReturnValue_56;
	Parms.CallFunc_MakeLiteralText_ReturnValue_57 = CallFunc_MakeLiteralText_ReturnValue_57;
	Parms.CallFunc_Conv_TextToString_ReturnValue_50 = CallFunc_Conv_TextToString_ReturnValue_50;
	Parms.CallFunc_Conv_TextToString_ReturnValue_51 = CallFunc_Conv_TextToString_ReturnValue_51;
	Parms.CallFunc_MakeLiteralText_ReturnValue_58 = CallFunc_MakeLiteralText_ReturnValue_58;
	Parms.CallFunc_MakeLiteralText_ReturnValue_59 = CallFunc_MakeLiteralText_ReturnValue_59;
	Parms.CallFunc_Conv_TextToString_ReturnValue_52 = CallFunc_Conv_TextToString_ReturnValue_52;
	Parms.CallFunc_Conv_TextToString_ReturnValue_53 = CallFunc_Conv_TextToString_ReturnValue_53;
	Parms.CallFunc_MakeLiteralText_ReturnValue_60 = CallFunc_MakeLiteralText_ReturnValue_60;
	Parms.CallFunc_MakeLiteralText_ReturnValue_61 = CallFunc_MakeLiteralText_ReturnValue_61;
	Parms.CallFunc_Conv_TextToString_ReturnValue_54 = CallFunc_Conv_TextToString_ReturnValue_54;
	Parms.CallFunc_Conv_TextToString_ReturnValue_55 = CallFunc_Conv_TextToString_ReturnValue_55;
	Parms.CallFunc_MakeLiteralText_ReturnValue_62 = CallFunc_MakeLiteralText_ReturnValue_62;
	Parms.CallFunc_MakeLiteralText_ReturnValue_63 = CallFunc_MakeLiteralText_ReturnValue_63;
	Parms.CallFunc_Conv_TextToString_ReturnValue_56 = CallFunc_Conv_TextToString_ReturnValue_56;
	Parms.CallFunc_Conv_TextToString_ReturnValue_57 = CallFunc_Conv_TextToString_ReturnValue_57;
	Parms.CallFunc_MakeLiteralText_ReturnValue_64 = CallFunc_MakeLiteralText_ReturnValue_64;
	Parms.CallFunc_MakeLiteralText_ReturnValue_65 = CallFunc_MakeLiteralText_ReturnValue_65;
	Parms.CallFunc_Conv_TextToString_ReturnValue_58 = CallFunc_Conv_TextToString_ReturnValue_58;
	Parms.CallFunc_Conv_TextToString_ReturnValue_59 = CallFunc_Conv_TextToString_ReturnValue_59;
	Parms.CallFunc_MakeLiteralText_ReturnValue_66 = CallFunc_MakeLiteralText_ReturnValue_66;
	Parms.CallFunc_MakeLiteralText_ReturnValue_67 = CallFunc_MakeLiteralText_ReturnValue_67;
	Parms.CallFunc_Conv_TextToString_ReturnValue_60 = CallFunc_Conv_TextToString_ReturnValue_60;
	Parms.CallFunc_Conv_TextToString_ReturnValue_61 = CallFunc_Conv_TextToString_ReturnValue_61;
	Parms.CallFunc_MakeLiteralText_ReturnValue_68 = CallFunc_MakeLiteralText_ReturnValue_68;
	Parms.CallFunc_MakeLiteralText_ReturnValue_69 = CallFunc_MakeLiteralText_ReturnValue_69;
	Parms.CallFunc_Conv_TextToString_ReturnValue_62 = CallFunc_Conv_TextToString_ReturnValue_62;
	Parms.CallFunc_Conv_TextToString_ReturnValue_63 = CallFunc_Conv_TextToString_ReturnValue_63;
	Parms.CallFunc_MakeLiteralText_ReturnValue_70 = CallFunc_MakeLiteralText_ReturnValue_70;
	Parms.CallFunc_Conv_TextToString_ReturnValue_64 = CallFunc_Conv_TextToString_ReturnValue_64;
	Parms.CallFunc_GetGameUserSettings_ReturnValue_8 = CallFunc_GetGameUserSettings_ReturnValue_8;
	Parms.CallFunc_GetAntiAliasingQuality_ReturnValue = CallFunc_GetAntiAliasingQuality_ReturnValue;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.CallFunc_MakeLiteralByte_ReturnValue_3 = CallFunc_MakeLiteralByte_ReturnValue_3;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_6 = CallFunc_EqualEqual_ByteByte_ReturnValue_6;
	Parms.CallFunc_BooleanOR_ReturnValue_24 = CallFunc_BooleanOR_ReturnValue_24;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_7 = CallFunc_EqualEqual_ByteByte_ReturnValue_7;
	Parms.CallFunc_Not_PreBool_ReturnValue_8 = CallFunc_Not_PreBool_ReturnValue_8;
	Parms.CallFunc_GetDLSSModeInformation_bIsSupported_8 = CallFunc_GetDLSSModeInformation_bIsSupported_8;
	Parms.CallFunc_GetDLSSModeInformation_OptimalScreenPercentage_8 = CallFunc_GetDLSSModeInformation_OptimalScreenPercentage_8;
	Parms.CallFunc_GetDLSSModeInformation_bIsFixedScreenPercentage_8 = CallFunc_GetDLSSModeInformation_bIsFixedScreenPercentage_8;
	Parms.CallFunc_GetDLSSModeInformation_MinScreenPercentage_8 = CallFunc_GetDLSSModeInformation_MinScreenPercentage_8;
	Parms.CallFunc_GetDLSSModeInformation_MaxScreenPercentage_8 = CallFunc_GetDLSSModeInformation_MaxScreenPercentage_8;
	Parms.CallFunc_GetDLSSModeInformation_OptimalSharpness_8 = CallFunc_GetDLSSModeInformation_OptimalSharpness_8;
	Parms.CallFunc_BooleanOR_ReturnValue_25 = CallFunc_BooleanOR_ReturnValue_25;
	Parms.CallFunc_SelectFloat_ReturnValue_8 = CallFunc_SelectFloat_ReturnValue_8;
	Parms.CallFunc_BooleanOR_ReturnValue_26 = CallFunc_BooleanOR_ReturnValue_26;
	Parms.CallFunc_Conv_DoubleToString_ReturnValue_8 = CallFunc_Conv_DoubleToString_ReturnValue_8;
	Parms.CallFunc_Concat_StrStr_ReturnValue_8 = CallFunc_Concat_StrStr_ReturnValue_8;
	Parms.Temp_object_Variable_17 = Temp_object_Variable_17;
	Parms.CallFunc_AsyncSaveGameToSlot_ReturnValue_8 = CallFunc_AsyncSaveGameToSlot_ReturnValue_8;
	Parms.CallFunc_IsValid_ReturnValue_18 = CallFunc_IsValid_ReturnValue_18;
	Parms.K2Node_DynamicCast_AsSettings_SG_9 = K2Node_DynamicCast_AsSettings_SG_9;
	Parms.K2Node_DynamicCast_bSuccess_12 = K2Node_DynamicCast_bSuccess_12;
	Parms.CallFunc_GetGameUserSettings_ReturnValue_9 = CallFunc_GetGameUserSettings_ReturnValue_9;
	Parms.CallFunc_GetFullscreenMode_ReturnValue = CallFunc_GetFullscreenMode_ReturnValue;
	Parms.Temp_bool_Variable_24 = Temp_bool_Variable_24;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetGameUserSettings_ReturnValue_10 = CallFunc_GetGameUserSettings_ReturnValue_10;
	Parms.CallFunc_GetViewDistanceQuality_ReturnValue = CallFunc_GetViewDistanceQuality_ReturnValue;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.CallFunc_GetVisualEffectQuality_ReturnValue = CallFunc_GetVisualEffectQuality_ReturnValue;
	Parms.CallFunc_GetGameUserSettings_ReturnValue_11 = CallFunc_GetGameUserSettings_ReturnValue_11;
	Parms.K2Node_SwitchInteger_CmpSuccess_1 = K2Node_SwitchInteger_CmpSuccess_1;
	Parms.CallFunc_GetViewDistanceQuality_ReturnValue_1 = CallFunc_GetViewDistanceQuality_ReturnValue_1;
	Parms.CallFunc_GetShadowQuality_ReturnValue = CallFunc_GetShadowQuality_ReturnValue;
	Parms.K2Node_SwitchInteger_CmpSuccess_2 = K2Node_SwitchInteger_CmpSuccess_2;
	Parms.K2Node_Select_Default_3 = K2Node_Select_Default_3;
	Parms.CallFunc_GetGameUserSettings_ReturnValue_12 = CallFunc_GetGameUserSettings_ReturnValue_12;
	Parms.CallFunc_GetTextureQuality_ReturnValue = CallFunc_GetTextureQuality_ReturnValue;
	Parms.K2Node_SwitchInteger_CmpSuccess_3 = K2Node_SwitchInteger_CmpSuccess_3;
	Parms.K2Node_CustomEvent_SaveGame_15 = K2Node_CustomEvent_SaveGame_15;
	Parms.K2Node_CustomEvent_bSuccess_15 = K2Node_CustomEvent_bSuccess_15;
	Parms.CallFunc_GetViewportSize_ReturnValue_5 = CallFunc_GetViewportSize_ReturnValue_5;
	Parms.CallFunc_GetDLSSModeInformation_bIsSupported_9 = CallFunc_GetDLSSModeInformation_bIsSupported_9;
	Parms.CallFunc_GetDLSSModeInformation_OptimalScreenPercentage_9 = CallFunc_GetDLSSModeInformation_OptimalScreenPercentage_9;
	Parms.CallFunc_GetDLSSModeInformation_bIsFixedScreenPercentage_9 = CallFunc_GetDLSSModeInformation_bIsFixedScreenPercentage_9;
	Parms.CallFunc_GetDLSSModeInformation_MinScreenPercentage_9 = CallFunc_GetDLSSModeInformation_MinScreenPercentage_9;
	Parms.CallFunc_GetDLSSModeInformation_MaxScreenPercentage_9 = CallFunc_GetDLSSModeInformation_MaxScreenPercentage_9;
	Parms.CallFunc_GetDLSSModeInformation_OptimalSharpness_9 = CallFunc_GetDLSSModeInformation_OptimalSharpness_9;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue_5 = CallFunc_Greater_DoubleDouble_ReturnValue_5;
	Parms.CallFunc_GetGameUserSettings_ReturnValue_13 = CallFunc_GetGameUserSettings_ReturnValue_13;
	Parms.CallFunc_BooleanAND_ReturnValue_5 = CallFunc_BooleanAND_ReturnValue_5;
	Parms.CallFunc_GetViewDistanceQuality_ReturnValue_2 = CallFunc_GetViewDistanceQuality_ReturnValue_2;
	Parms.CallFunc_Not_PreBool_ReturnValue_9 = CallFunc_Not_PreBool_ReturnValue_9;
	Parms.K2Node_SwitchInteger_CmpSuccess_4 = K2Node_SwitchInteger_CmpSuccess_4;
	Parms.CallFunc_BooleanOR_ReturnValue_27 = CallFunc_BooleanOR_ReturnValue_27;
	Parms.CallFunc_BooleanOR_ReturnValue_28 = CallFunc_BooleanOR_ReturnValue_28;
	Parms.CallFunc_SelectFloat_ReturnValue_9 = CallFunc_SelectFloat_ReturnValue_9;
	Parms.CallFunc_BooleanOR_ReturnValue_29 = CallFunc_BooleanOR_ReturnValue_29;
	Parms.CallFunc_Conv_DoubleToString_ReturnValue_9 = CallFunc_Conv_DoubleToString_ReturnValue_9;
	Parms.CallFunc_Concat_StrStr_ReturnValue_9 = CallFunc_Concat_StrStr_ReturnValue_9;
	Parms.K2Node_CreateDelegate_OutputDelegate_19 = K2Node_CreateDelegate_OutputDelegate_19;
	Parms.CallFunc_GetGameUserSettings_ReturnValue_14 = CallFunc_GetGameUserSettings_ReturnValue_14;
	Parms.CallFunc_GetFrameRateLimit_ReturnValue = CallFunc_GetFrameRateLimit_ReturnValue;
	Parms.CallFunc_FTrunc_ReturnValue = CallFunc_FTrunc_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_1 = CallFunc_EqualEqual_IntInt_ReturnValue_1;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_2 = CallFunc_EqualEqual_IntInt_ReturnValue_2;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_3 = CallFunc_EqualEqual_IntInt_ReturnValue_3;
	Parms.CallFunc_AsyncLoadGameFromSlot_ReturnValue_10 = CallFunc_AsyncLoadGameFromSlot_ReturnValue_10;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_8 = CallFunc_EqualEqual_ByteByte_ReturnValue_8;
	Parms.CallFunc_BooleanOR_ReturnValue_30 = CallFunc_BooleanOR_ReturnValue_30;
	Parms.CallFunc_Not_PreBool_ReturnValue_10 = CallFunc_Not_PreBool_ReturnValue_10;
	Parms.CallFunc_IsValid_ReturnValue_19 = CallFunc_IsValid_ReturnValue_19;
	Parms.CallFunc_BooleanOR_ReturnValue_31 = CallFunc_BooleanOR_ReturnValue_31;
	Parms.CallFunc_BooleanOR_ReturnValue_32 = CallFunc_BooleanOR_ReturnValue_32;
	Parms.CallFunc_GetDLSSModeInformation_bIsSupported_10 = CallFunc_GetDLSSModeInformation_bIsSupported_10;
	Parms.CallFunc_GetDLSSModeInformation_OptimalScreenPercentage_10 = CallFunc_GetDLSSModeInformation_OptimalScreenPercentage_10;
	Parms.CallFunc_GetDLSSModeInformation_bIsFixedScreenPercentage_10 = CallFunc_GetDLSSModeInformation_bIsFixedScreenPercentage_10;
	Parms.CallFunc_GetDLSSModeInformation_MinScreenPercentage_10 = CallFunc_GetDLSSModeInformation_MinScreenPercentage_10;
	Parms.CallFunc_GetDLSSModeInformation_MaxScreenPercentage_10 = CallFunc_GetDLSSModeInformation_MaxScreenPercentage_10;
	Parms.CallFunc_GetDLSSModeInformation_OptimalSharpness_10 = CallFunc_GetDLSSModeInformation_OptimalSharpness_10;
	Parms.Temp_object_Variable_18 = Temp_object_Variable_18;
	Parms.CallFunc_SelectFloat_ReturnValue_10 = CallFunc_SelectFloat_ReturnValue_10;
	Parms.CallFunc_AsyncSaveGameToSlot_ReturnValue_9 = CallFunc_AsyncSaveGameToSlot_ReturnValue_9;
	Parms.CallFunc_Conv_DoubleToString_ReturnValue_10 = CallFunc_Conv_DoubleToString_ReturnValue_10;
	Parms.CallFunc_Concat_StrStr_ReturnValue_10 = CallFunc_Concat_StrStr_ReturnValue_10;
	Parms.CallFunc_IsValid_ReturnValue_20 = CallFunc_IsValid_ReturnValue_20;
	Parms.K2Node_DynamicCast_AsSettings_SG_10 = K2Node_DynamicCast_AsSettings_SG_10;
	Parms.K2Node_DynamicCast_bSuccess_13 = K2Node_DynamicCast_bSuccess_13;
	Parms.Temp_bool_Variable_25 = Temp_bool_Variable_25;
	Parms.K2Node_CustomEvent_SaveGame_16 = K2Node_CustomEvent_SaveGame_16;
	Parms.K2Node_CustomEvent_bSuccess_16 = K2Node_CustomEvent_bSuccess_16;
	Parms.K2Node_CreateDelegate_OutputDelegate_20 = K2Node_CreateDelegate_OutputDelegate_20;
	Parms.CallFunc_MakeLiteralByte_ReturnValue_4 = CallFunc_MakeLiteralByte_ReturnValue_4;
	Parms.CallFunc_MakeLiteralText_ReturnValue_71 = CallFunc_MakeLiteralText_ReturnValue_71;
	Parms.CallFunc_Conv_TextToString_ReturnValue_65 = CallFunc_Conv_TextToString_ReturnValue_65;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_9 = CallFunc_EqualEqual_ByteByte_ReturnValue_9;
	Parms.CallFunc_MakeLiteralText_ReturnValue_72 = CallFunc_MakeLiteralText_ReturnValue_72;
	Parms.CallFunc_MakeLiteralText_ReturnValue_73 = CallFunc_MakeLiteralText_ReturnValue_73;
	Parms.CallFunc_Conv_TextToString_ReturnValue_66 = CallFunc_Conv_TextToString_ReturnValue_66;
	Parms.CallFunc_Conv_TextToString_ReturnValue_67 = CallFunc_Conv_TextToString_ReturnValue_67;
	Parms.CallFunc_MakeLiteralText_ReturnValue_74 = CallFunc_MakeLiteralText_ReturnValue_74;
	Parms.CallFunc_Conv_TextToString_ReturnValue_68 = CallFunc_Conv_TextToString_ReturnValue_68;
	Parms.CallFunc_MakeLiteralText_ReturnValue_75 = CallFunc_MakeLiteralText_ReturnValue_75;
	Parms.CallFunc_MakeLiteralText_ReturnValue_76 = CallFunc_MakeLiteralText_ReturnValue_76;
	Parms.CallFunc_Conv_TextToString_ReturnValue_69 = CallFunc_Conv_TextToString_ReturnValue_69;
	Parms.CallFunc_Conv_TextToString_ReturnValue_70 = CallFunc_Conv_TextToString_ReturnValue_70;
	Parms.CallFunc_MakeLiteralText_ReturnValue_77 = CallFunc_MakeLiteralText_ReturnValue_77;
	Parms.CallFunc_MakeLiteralText_ReturnValue_78 = CallFunc_MakeLiteralText_ReturnValue_78;
	Parms.CallFunc_Conv_TextToString_ReturnValue_71 = CallFunc_Conv_TextToString_ReturnValue_71;
	Parms.CallFunc_Conv_TextToString_ReturnValue_72 = CallFunc_Conv_TextToString_ReturnValue_72;
	Parms.Temp_object_Variable_19 = Temp_object_Variable_19;
	Parms.CallFunc_MakeLiteralText_ReturnValue_79 = CallFunc_MakeLiteralText_ReturnValue_79;
	Parms.CallFunc_Conv_TextToString_ReturnValue_73 = CallFunc_Conv_TextToString_ReturnValue_73;
	Parms.CallFunc_MakeLiteralText_ReturnValue_80 = CallFunc_MakeLiteralText_ReturnValue_80;
	Parms.CallFunc_Conv_TextToString_ReturnValue_74 = CallFunc_Conv_TextToString_ReturnValue_74;
	Parms.CallFunc_MakeLiteralText_ReturnValue_81 = CallFunc_MakeLiteralText_ReturnValue_81;
	Parms.CallFunc_Conv_TextToString_ReturnValue_75 = CallFunc_Conv_TextToString_ReturnValue_75;
	Parms.CallFunc_MakeLiteralText_ReturnValue_82 = CallFunc_MakeLiteralText_ReturnValue_82;
	Parms.CallFunc_Conv_TextToString_ReturnValue_76 = CallFunc_Conv_TextToString_ReturnValue_76;
	Parms.Temp_bool_Variable_26 = Temp_bool_Variable_26;
	Parms.CallFunc_MakeLiteralText_ReturnValue_83 = CallFunc_MakeLiteralText_ReturnValue_83;
	Parms.CallFunc_Conv_TextToString_ReturnValue_77 = CallFunc_Conv_TextToString_ReturnValue_77;
	Parms.CallFunc_MakeLiteralText_ReturnValue_84 = CallFunc_MakeLiteralText_ReturnValue_84;
	Parms.CallFunc_Conv_TextToString_ReturnValue_78 = CallFunc_Conv_TextToString_ReturnValue_78;
	Parms.CallFunc_MakeLiteralText_ReturnValue_85 = CallFunc_MakeLiteralText_ReturnValue_85;
	Parms.CallFunc_Conv_TextToString_ReturnValue_79 = CallFunc_Conv_TextToString_ReturnValue_79;
	Parms.CallFunc_MakeLiteralText_ReturnValue_86 = CallFunc_MakeLiteralText_ReturnValue_86;
	Parms.CallFunc_Conv_TextToString_ReturnValue_80 = CallFunc_Conv_TextToString_ReturnValue_80;
	Parms.CallFunc_MakeLiteralText_ReturnValue_87 = CallFunc_MakeLiteralText_ReturnValue_87;
	Parms.CallFunc_Conv_TextToString_ReturnValue_81 = CallFunc_Conv_TextToString_ReturnValue_81;
	Parms.CallFunc_MakeLiteralText_ReturnValue_88 = CallFunc_MakeLiteralText_ReturnValue_88;
	Parms.CallFunc_MakeLiteralText_ReturnValue_89 = CallFunc_MakeLiteralText_ReturnValue_89;
	Parms.CallFunc_Conv_TextToString_ReturnValue_82 = CallFunc_Conv_TextToString_ReturnValue_82;
	Parms.CallFunc_Conv_TextToString_ReturnValue_83 = CallFunc_Conv_TextToString_ReturnValue_83;
	Parms.CallFunc_MakeLiteralText_ReturnValue_90 = CallFunc_MakeLiteralText_ReturnValue_90;
	Parms.CallFunc_Conv_TextToString_ReturnValue_84 = CallFunc_Conv_TextToString_ReturnValue_84;
	Parms.K2Node_CustomEvent_SaveGame_17 = K2Node_CustomEvent_SaveGame_17;
	Parms.K2Node_CustomEvent_bSuccess_17 = K2Node_CustomEvent_bSuccess_17;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_10 = CallFunc_EqualEqual_ByteByte_ReturnValue_10;
	Parms.CallFunc_GetDLSSModeInformation_bIsSupported_11 = CallFunc_GetDLSSModeInformation_bIsSupported_11;
	Parms.CallFunc_GetDLSSModeInformation_OptimalScreenPercentage_11 = CallFunc_GetDLSSModeInformation_OptimalScreenPercentage_11;
	Parms.CallFunc_GetDLSSModeInformation_bIsFixedScreenPercentage_11 = CallFunc_GetDLSSModeInformation_bIsFixedScreenPercentage_11;
	Parms.CallFunc_GetDLSSModeInformation_MinScreenPercentage_11 = CallFunc_GetDLSSModeInformation_MinScreenPercentage_11;
	Parms.CallFunc_GetDLSSModeInformation_MaxScreenPercentage_11 = CallFunc_GetDLSSModeInformation_MaxScreenPercentage_11;
	Parms.CallFunc_GetDLSSModeInformation_OptimalSharpness_11 = CallFunc_GetDLSSModeInformation_OptimalSharpness_11;
	Parms.CallFunc_BooleanOR_ReturnValue_33 = CallFunc_BooleanOR_ReturnValue_33;
	Parms.CallFunc_Not_PreBool_ReturnValue_11 = CallFunc_Not_PreBool_ReturnValue_11;
	Parms.CallFunc_SelectFloat_ReturnValue_11 = CallFunc_SelectFloat_ReturnValue_11;
	Parms.CallFunc_BooleanOR_ReturnValue_34 = CallFunc_BooleanOR_ReturnValue_34;
	Parms.CallFunc_Conv_DoubleToString_ReturnValue_11 = CallFunc_Conv_DoubleToString_ReturnValue_11;
	Parms.CallFunc_BooleanOR_ReturnValue_35 = CallFunc_BooleanOR_ReturnValue_35;
	Parms.CallFunc_Concat_StrStr_ReturnValue_11 = CallFunc_Concat_StrStr_ReturnValue_11;
	Parms.CallFunc_MakeLiteralText_ReturnValue_91 = CallFunc_MakeLiteralText_ReturnValue_91;
	Parms.CallFunc_MakeLiteralText_ReturnValue_92 = CallFunc_MakeLiteralText_ReturnValue_92;
	Parms.CallFunc_Conv_TextToString_ReturnValue_85 = CallFunc_Conv_TextToString_ReturnValue_85;
	Parms.CallFunc_Conv_TextToString_ReturnValue_86 = CallFunc_Conv_TextToString_ReturnValue_86;
	Parms.CallFunc_Conv_TextToString_ReturnValue_87 = CallFunc_Conv_TextToString_ReturnValue_87;
	Parms.CallFunc_Conv_TextToString_ReturnValue_88 = CallFunc_Conv_TextToString_ReturnValue_88;
	Parms.CallFunc_MakeLiteralText_ReturnValue_93 = CallFunc_MakeLiteralText_ReturnValue_93;
	Parms.CallFunc_Conv_TextToString_ReturnValue_89 = CallFunc_Conv_TextToString_ReturnValue_89;
	Parms.CallFunc_Conv_TextToString_ReturnValue_90 = CallFunc_Conv_TextToString_ReturnValue_90;
	Parms.K2Node_CreateDelegate_OutputDelegate_21 = K2Node_CreateDelegate_OutputDelegate_21;
	Parms.CallFunc_MakeLiteralText_ReturnValue_94 = CallFunc_MakeLiteralText_ReturnValue_94;
	Parms.CallFunc_Conv_TextToString_ReturnValue_91 = CallFunc_Conv_TextToString_ReturnValue_91;
	Parms.CallFunc_Conv_TextToString_ReturnValue_92 = CallFunc_Conv_TextToString_ReturnValue_92;
	Parms.CallFunc_GetViewportSize_ReturnValue_6 = CallFunc_GetViewportSize_ReturnValue_6;
	Parms.Temp_object_Variable_20 = Temp_object_Variable_20;
	Parms.CallFunc_GetDLSSModeInformation_bIsSupported_12 = CallFunc_GetDLSSModeInformation_bIsSupported_12;
	Parms.CallFunc_GetDLSSModeInformation_OptimalScreenPercentage_12 = CallFunc_GetDLSSModeInformation_OptimalScreenPercentage_12;
	Parms.CallFunc_GetDLSSModeInformation_bIsFixedScreenPercentage_12 = CallFunc_GetDLSSModeInformation_bIsFixedScreenPercentage_12;
	Parms.CallFunc_GetDLSSModeInformation_MinScreenPercentage_12 = CallFunc_GetDLSSModeInformation_MinScreenPercentage_12;
	Parms.CallFunc_GetDLSSModeInformation_MaxScreenPercentage_12 = CallFunc_GetDLSSModeInformation_MaxScreenPercentage_12;
	Parms.CallFunc_GetDLSSModeInformation_OptimalSharpness_12 = CallFunc_GetDLSSModeInformation_OptimalSharpness_12;
	Parms.Temp_bool_Variable_27 = Temp_bool_Variable_27;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue_6 = CallFunc_Greater_DoubleDouble_ReturnValue_6;
	Parms.CallFunc_MakeLiteralByte_ReturnValue_5 = CallFunc_MakeLiteralByte_ReturnValue_5;
	Parms.CallFunc_BooleanAND_ReturnValue_6 = CallFunc_BooleanAND_ReturnValue_6;
	Parms.CallFunc_Not_PreBool_ReturnValue_12 = CallFunc_Not_PreBool_ReturnValue_12;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_11 = CallFunc_EqualEqual_ByteByte_ReturnValue_11;
	Parms.CallFunc_BooleanOR_ReturnValue_36 = CallFunc_BooleanOR_ReturnValue_36;
	Parms.CallFunc_SelectFloat_ReturnValue_12 = CallFunc_SelectFloat_ReturnValue_12;
	Parms.CallFunc_Conv_DoubleToString_ReturnValue_12 = CallFunc_Conv_DoubleToString_ReturnValue_12;
	Parms.CallFunc_BooleanOR_ReturnValue_37 = CallFunc_BooleanOR_ReturnValue_37;
	Parms.CallFunc_Concat_StrStr_ReturnValue_12 = CallFunc_Concat_StrStr_ReturnValue_12;
	Parms.CallFunc_BooleanOR_ReturnValue_38 = CallFunc_BooleanOR_ReturnValue_38;
	Parms.K2Node_CustomEvent_SaveGame_18 = K2Node_CustomEvent_SaveGame_18;
	Parms.K2Node_CustomEvent_bSuccess_18 = K2Node_CustomEvent_bSuccess_18;
	Parms.K2Node_CreateDelegate_OutputDelegate_22 = K2Node_CreateDelegate_OutputDelegate_22;
	Parms.Temp_int_Array_Index_Variable_2 = Temp_int_Array_Index_Variable_2;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_Conv_IntPointToString_ReturnValue = CallFunc_Conv_IntPointToString_ReturnValue;
	Parms.CallFunc_RemoveOption_ReturnValue = CallFunc_RemoveOption_ReturnValue;
	Parms.CallFunc_GetGameUserSettings_ReturnValue_15 = CallFunc_GetGameUserSettings_ReturnValue_15;
	Parms.CallFunc_GetFullscreenMode_ReturnValue_1 = CallFunc_GetFullscreenMode_ReturnValue_1;
	Parms.CallFunc_GetFrameRateLimit_ReturnValue_1 = CallFunc_GetFrameRateLimit_ReturnValue_1;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_EqualEqual_DoubleDouble_ReturnValue = CallFunc_EqualEqual_DoubleDouble_ReturnValue;
	Parms.CallFunc_EqualEqual_DoubleDouble_ReturnValue_1 = CallFunc_EqualEqual_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_EqualEqual_DoubleDouble_ReturnValue_2 = CallFunc_EqualEqual_DoubleDouble_ReturnValue_2;
	Parms.CallFunc_EqualEqual_DoubleDouble_ReturnValue_3 = CallFunc_EqualEqual_DoubleDouble_ReturnValue_3;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_12 = CallFunc_EqualEqual_ByteByte_ReturnValue_12;
	Parms.CallFunc_BooleanOR_ReturnValue_39 = CallFunc_BooleanOR_ReturnValue_39;
	Parms.CallFunc_Not_PreBool_ReturnValue_13 = CallFunc_Not_PreBool_ReturnValue_13;
	Parms.CallFunc_GetDLSSModeInformation_bIsSupported_13 = CallFunc_GetDLSSModeInformation_bIsSupported_13;
	Parms.CallFunc_GetDLSSModeInformation_OptimalScreenPercentage_13 = CallFunc_GetDLSSModeInformation_OptimalScreenPercentage_13;
	Parms.CallFunc_GetDLSSModeInformation_bIsFixedScreenPercentage_13 = CallFunc_GetDLSSModeInformation_bIsFixedScreenPercentage_13;
	Parms.CallFunc_GetDLSSModeInformation_MinScreenPercentage_13 = CallFunc_GetDLSSModeInformation_MinScreenPercentage_13;
	Parms.CallFunc_GetDLSSModeInformation_MaxScreenPercentage_13 = CallFunc_GetDLSSModeInformation_MaxScreenPercentage_13;
	Parms.CallFunc_GetDLSSModeInformation_OptimalSharpness_13 = CallFunc_GetDLSSModeInformation_OptimalSharpness_13;
	Parms.CallFunc_BooleanOR_ReturnValue_40 = CallFunc_BooleanOR_ReturnValue_40;
	Parms.CallFunc_SelectFloat_ReturnValue_13 = CallFunc_SelectFloat_ReturnValue_13;
	Parms.CallFunc_BooleanOR_ReturnValue_41 = CallFunc_BooleanOR_ReturnValue_41;
	Parms.CallFunc_Conv_DoubleToString_ReturnValue_13 = CallFunc_Conv_DoubleToString_ReturnValue_13;
	Parms.CallFunc_Concat_StrStr_ReturnValue_13 = CallFunc_Concat_StrStr_ReturnValue_13;
	Parms.CallFunc_MakeLiteralByte_ReturnValue_6 = CallFunc_MakeLiteralByte_ReturnValue_6;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_13 = CallFunc_EqualEqual_ByteByte_ReturnValue_13;
	Parms.CallFunc_GetGameUserSettings_ReturnValue_16 = CallFunc_GetGameUserSettings_ReturnValue_16;
	Parms.CallFunc_GetAntiAliasingQuality_ReturnValue_1 = CallFunc_GetAntiAliasingQuality_ReturnValue_1;
	Parms.CallFunc_GetVisualEffectQuality_ReturnValue_1 = CallFunc_GetVisualEffectQuality_ReturnValue_1;
	Parms.CallFunc_GetShadowQuality_ReturnValue_1 = CallFunc_GetShadowQuality_ReturnValue_1;
	Parms.CallFunc_GetTextureQuality_ReturnValue_1 = CallFunc_GetTextureQuality_ReturnValue_1;
	Parms.CallFunc_SelectFloat_B_ImplicitCast = CallFunc_SelectFloat_B_ImplicitCast;
	Parms.CallFunc_SelectFloat_B_ImplicitCast_1 = CallFunc_SelectFloat_B_ImplicitCast_1;
	Parms.CallFunc_SelectFloat_B_ImplicitCast_2 = CallFunc_SelectFloat_B_ImplicitCast_2;
	Parms.CallFunc_SelectFloat_B_ImplicitCast_3 = CallFunc_SelectFloat_B_ImplicitCast_3;
	Parms.CallFunc_Greater_DoubleDouble_A_ImplicitCast = CallFunc_Greater_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_SelectFloat_B_ImplicitCast_4 = CallFunc_SelectFloat_B_ImplicitCast_4;
	Parms.CallFunc_Greater_DoubleDouble_A_ImplicitCast_1 = CallFunc_Greater_DoubleDouble_A_ImplicitCast_1;
	Parms.CallFunc_SelectFloat_B_ImplicitCast_5 = CallFunc_SelectFloat_B_ImplicitCast_5;
	Parms.CallFunc_Greater_DoubleDouble_A_ImplicitCast_2 = CallFunc_Greater_DoubleDouble_A_ImplicitCast_2;
	Parms.CallFunc_SelectFloat_B_ImplicitCast_6 = CallFunc_SelectFloat_B_ImplicitCast_6;
	Parms.CallFunc_Greater_DoubleDouble_A_ImplicitCast_3 = CallFunc_Greater_DoubleDouble_A_ImplicitCast_3;
	Parms.CallFunc_SelectFloat_B_ImplicitCast_7 = CallFunc_SelectFloat_B_ImplicitCast_7;
	Parms.CallFunc_Greater_DoubleDouble_A_ImplicitCast_4 = CallFunc_Greater_DoubleDouble_A_ImplicitCast_4;
	Parms.CallFunc_SetFieldOfView_InFieldOfView_ImplicitCast = CallFunc_SetFieldOfView_InFieldOfView_ImplicitCast;
	Parms.CallFunc_SetFieldOfView_InFieldOfView_ImplicitCast_1 = CallFunc_SetFieldOfView_InFieldOfView_ImplicitCast_1;
	Parms.CallFunc_SetFrameRateLimit_NewLimit_ImplicitCast = CallFunc_SetFrameRateLimit_NewLimit_ImplicitCast;
	Parms.CallFunc_SelectFloat_B_ImplicitCast_8 = CallFunc_SelectFloat_B_ImplicitCast_8;
	Parms.CallFunc_SelectFloat_B_ImplicitCast_9 = CallFunc_SelectFloat_B_ImplicitCast_9;
	Parms.CallFunc_Greater_DoubleDouble_A_ImplicitCast_5 = CallFunc_Greater_DoubleDouble_A_ImplicitCast_5;
	Parms.CallFunc_FTrunc_A_ImplicitCast = CallFunc_FTrunc_A_ImplicitCast;
	Parms.CallFunc_SelectFloat_B_ImplicitCast_10 = CallFunc_SelectFloat_B_ImplicitCast_10;
	Parms.CallFunc_SelectFloat_B_ImplicitCast_11 = CallFunc_SelectFloat_B_ImplicitCast_11;
	Parms.CallFunc_SelectFloat_B_ImplicitCast_12 = CallFunc_SelectFloat_B_ImplicitCast_12;
	Parms.CallFunc_Greater_DoubleDouble_A_ImplicitCast_6 = CallFunc_Greater_DoubleDouble_A_ImplicitCast_6;
	Parms.CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast = CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast_1 = CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast_1;
	Parms.CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast_2 = CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast_2;
	Parms.CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast_3 = CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast_3;
	Parms.CallFunc_SelectFloat_B_ImplicitCast_13 = CallFunc_SelectFloat_B_ImplicitCast_13;

	UObject::ProcessEvent(Func, &Parms);

}

}


