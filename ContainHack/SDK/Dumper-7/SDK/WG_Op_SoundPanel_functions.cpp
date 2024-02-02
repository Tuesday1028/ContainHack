#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WG_Op_SoundPanel.WG_Op_SoundPanel_C
// (None)

class UClass* UWG_Op_SoundPanel_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WG_Op_SoundPanel_C");

	return Clss;
}


// WG_Op_SoundPanel_C WG_Op_SoundPanel.Default__WG_Op_SoundPanel_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWG_Op_SoundPanel_C* UWG_Op_SoundPanel_C::GetDefaultObj()
{
	static class UWG_Op_SoundPanel_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWG_Op_SoundPanel_C*>(UWG_Op_SoundPanel_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WG_Op_SoundPanel.WG_Op_SoundPanel_C.SetVolume
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWG_Op_SoundPanel_C::SetVolume()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WG_Op_SoundPanel_C", "SetVolume");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WG_Op_SoundPanel.WG_Op_SoundPanel_C.Completed_50D3EDB140D343E9CE70208ECBB49801
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class USaveGame*                   SaveGame                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               bSuccess                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWG_Op_SoundPanel_C::Completed_50D3EDB140D343E9CE70208ECBB49801(class USaveGame* SaveGame, bool bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WG_Op_SoundPanel_C", "Completed_50D3EDB140D343E9CE70208ECBB49801");

	Params::UWG_Op_SoundPanel_C_Completed_50D3EDB140D343E9CE70208ECBB49801_Params Parms{};

	Parms.SaveGame = SaveGame;
	Parms.bSuccess = bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WG_Op_SoundPanel.WG_Op_SoundPanel_C.Completed_043D4B774C4801F29434C991BDAFD73F
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class USaveGame*                   SaveGame                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               bSuccess                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWG_Op_SoundPanel_C::Completed_043D4B774C4801F29434C991BDAFD73F(class USaveGame* SaveGame, bool bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WG_Op_SoundPanel_C", "Completed_043D4B774C4801F29434C991BDAFD73F");

	Params::UWG_Op_SoundPanel_C_Completed_043D4B774C4801F29434C991BDAFD73F_Params Parms{};

	Parms.SaveGame = SaveGame;
	Parms.bSuccess = bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WG_Op_SoundPanel.WG_Op_SoundPanel_C.Completed_787A5449414061DEDD326CB15639EDAF
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class USaveGame*                   SaveGame                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               bSuccess                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWG_Op_SoundPanel_C::Completed_787A5449414061DEDD326CB15639EDAF(class USaveGame* SaveGame, bool bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WG_Op_SoundPanel_C", "Completed_787A5449414061DEDD326CB15639EDAF");

	Params::UWG_Op_SoundPanel_C_Completed_787A5449414061DEDD326CB15639EDAF_Params Parms{};

	Parms.SaveGame = SaveGame;
	Parms.bSuccess = bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WG_Op_SoundPanel.WG_Op_SoundPanel_C.Completed_02EE912C4AD83C51F59D12A080663919
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class USaveGame*                   SaveGame                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               bSuccess                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWG_Op_SoundPanel_C::Completed_02EE912C4AD83C51F59D12A080663919(class USaveGame* SaveGame, bool bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WG_Op_SoundPanel_C", "Completed_02EE912C4AD83C51F59D12A080663919");

	Params::UWG_Op_SoundPanel_C_Completed_02EE912C4AD83C51F59D12A080663919_Params Parms{};

	Parms.SaveGame = SaveGame;
	Parms.bSuccess = bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WG_Op_SoundPanel.WG_Op_SoundPanel_C.Completed_FD62ABC0442692581B285380E63EFE4C
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class USaveGame*                   SaveGame                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               bSuccess                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWG_Op_SoundPanel_C::Completed_FD62ABC0442692581B285380E63EFE4C(class USaveGame* SaveGame, bool bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WG_Op_SoundPanel_C", "Completed_FD62ABC0442692581B285380E63EFE4C");

	Params::UWG_Op_SoundPanel_C_Completed_FD62ABC0442692581B285380E63EFE4C_Params Parms{};

	Parms.SaveGame = SaveGame;
	Parms.bSuccess = bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WG_Op_SoundPanel.WG_Op_SoundPanel_C.Completed_BF732BE04A89D507F4CD49B9777FD62A
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class USaveGame*                   SaveGame                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               bSuccess                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWG_Op_SoundPanel_C::Completed_BF732BE04A89D507F4CD49B9777FD62A(class USaveGame* SaveGame, bool bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WG_Op_SoundPanel_C", "Completed_BF732BE04A89D507F4CD49B9777FD62A");

	Params::UWG_Op_SoundPanel_C_Completed_BF732BE04A89D507F4CD49B9777FD62A_Params Parms{};

	Parms.SaveGame = SaveGame;
	Parms.bSuccess = bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WG_Op_SoundPanel.WG_Op_SoundPanel_C.Completed_8865D6834CFA0666561F949087E2183A
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class USaveGame*                   SaveGame                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               bSuccess                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWG_Op_SoundPanel_C::Completed_8865D6834CFA0666561F949087E2183A(class USaveGame* SaveGame, bool bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WG_Op_SoundPanel_C", "Completed_8865D6834CFA0666561F949087E2183A");

	Params::UWG_Op_SoundPanel_C_Completed_8865D6834CFA0666561F949087E2183A_Params Parms{};

	Parms.SaveGame = SaveGame;
	Parms.bSuccess = bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WG_Op_SoundPanel.WG_Op_SoundPanel_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWG_Op_SoundPanel_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WG_Op_SoundPanel_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WG_Op_SoundPanel.WG_Op_SoundPanel_C.BndEvt__WG_Op_SoundPanel_Slider_179_K2Node_ComponentBoundEvent_1_OnFloatValueChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWG_Op_SoundPanel_C::BndEvt__WG_Op_SoundPanel_Slider_179_K2Node_ComponentBoundEvent_1_OnFloatValueChangedEvent__DelegateSignature(float Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WG_Op_SoundPanel_C", "BndEvt__WG_Op_SoundPanel_Slider_179_K2Node_ComponentBoundEvent_1_OnFloatValueChangedEvent__DelegateSignature");

	Params::UWG_Op_SoundPanel_C_BndEvt__WG_Op_SoundPanel_Slider_179_K2Node_ComponentBoundEvent_1_OnFloatValueChangedEvent__DelegateSignature_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WG_Op_SoundPanel.WG_Op_SoundPanel_C.BndEvt__WG_Op_SoundPanel_Slider_K2Node_ComponentBoundEvent_2_OnFloatValueChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWG_Op_SoundPanel_C::BndEvt__WG_Op_SoundPanel_Slider_K2Node_ComponentBoundEvent_2_OnFloatValueChangedEvent__DelegateSignature(float Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WG_Op_SoundPanel_C", "BndEvt__WG_Op_SoundPanel_Slider_K2Node_ComponentBoundEvent_2_OnFloatValueChangedEvent__DelegateSignature");

	Params::UWG_Op_SoundPanel_C_BndEvt__WG_Op_SoundPanel_Slider_K2Node_ComponentBoundEvent_2_OnFloatValueChangedEvent__DelegateSignature_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WG_Op_SoundPanel.WG_Op_SoundPanel_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWG_Op_SoundPanel_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WG_Op_SoundPanel_C", "PreConstruct");

	Params::UWG_Op_SoundPanel_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WG_Op_SoundPanel.WG_Op_SoundPanel_C.BndEvt__WG_Op_SoundPanel_SLD_Music_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWG_Op_SoundPanel_C::BndEvt__WG_Op_SoundPanel_SLD_Music_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature(float Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WG_Op_SoundPanel_C", "BndEvt__WG_Op_SoundPanel_SLD_Music_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature");

	Params::UWG_Op_SoundPanel_C_BndEvt__WG_Op_SoundPanel_SLD_Music_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WG_Op_SoundPanel.WG_Op_SoundPanel_C.BndEvt__WG_Op_SoundPanel_SLD_VOIP_K2Node_ComponentBoundEvent_1_OnFloatValueChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWG_Op_SoundPanel_C::BndEvt__WG_Op_SoundPanel_SLD_VOIP_K2Node_ComponentBoundEvent_1_OnFloatValueChangedEvent__DelegateSignature(float Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WG_Op_SoundPanel_C", "BndEvt__WG_Op_SoundPanel_SLD_VOIP_K2Node_ComponentBoundEvent_1_OnFloatValueChangedEvent__DelegateSignature");

	Params::UWG_Op_SoundPanel_C_BndEvt__WG_Op_SoundPanel_SLD_VOIP_K2Node_ComponentBoundEvent_1_OnFloatValueChangedEvent__DelegateSignature_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WG_Op_SoundPanel.WG_Op_SoundPanel_C.Inputs
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FAudioInputDeviceInfo>AvailableDevices                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWG_Op_SoundPanel_C::Inputs(TArray<struct FAudioInputDeviceInfo>& AvailableDevices)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WG_Op_SoundPanel_C", "Inputs");

	Params::UWG_Op_SoundPanel_C_Inputs_Params Parms{};

	Parms.AvailableDevices = AvailableDevices;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WG_Op_SoundPanel.WG_Op_SoundPanel_C.BndEvt__WG_Op_SoundPanel_SLD_MasterVolume_K2Node_ComponentBoundEvent_3_OnMouseCaptureEndEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWG_Op_SoundPanel_C::BndEvt__WG_Op_SoundPanel_SLD_MasterVolume_K2Node_ComponentBoundEvent_3_OnMouseCaptureEndEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WG_Op_SoundPanel_C", "BndEvt__WG_Op_SoundPanel_SLD_MasterVolume_K2Node_ComponentBoundEvent_3_OnMouseCaptureEndEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WG_Op_SoundPanel.WG_Op_SoundPanel_C.BndEvt__WG_Op_SoundPanel_SLD_SFX_K2Node_ComponentBoundEvent_4_OnMouseCaptureEndEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWG_Op_SoundPanel_C::BndEvt__WG_Op_SoundPanel_SLD_SFX_K2Node_ComponentBoundEvent_4_OnMouseCaptureEndEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WG_Op_SoundPanel_C", "BndEvt__WG_Op_SoundPanel_SLD_SFX_K2Node_ComponentBoundEvent_4_OnMouseCaptureEndEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WG_Op_SoundPanel.WG_Op_SoundPanel_C.BndEvt__WG_Op_SoundPanel_SLD_Music_K2Node_ComponentBoundEvent_5_OnMouseCaptureEndEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWG_Op_SoundPanel_C::BndEvt__WG_Op_SoundPanel_SLD_Music_K2Node_ComponentBoundEvent_5_OnMouseCaptureEndEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WG_Op_SoundPanel_C", "BndEvt__WG_Op_SoundPanel_SLD_Music_K2Node_ComponentBoundEvent_5_OnMouseCaptureEndEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WG_Op_SoundPanel.WG_Op_SoundPanel_C.BndEvt__WG_Op_SoundPanel_SLD_VOIP_K2Node_ComponentBoundEvent_6_OnMouseCaptureEndEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWG_Op_SoundPanel_C::BndEvt__WG_Op_SoundPanel_SLD_VOIP_K2Node_ComponentBoundEvent_6_OnMouseCaptureEndEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WG_Op_SoundPanel_C", "BndEvt__WG_Op_SoundPanel_SLD_VOIP_K2Node_ComponentBoundEvent_6_OnMouseCaptureEndEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WG_Op_SoundPanel.WG_Op_SoundPanel_C.SaveBtn
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWG_Op_SoundPanel_C::SaveBtn()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WG_Op_SoundPanel_C", "SaveBtn");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WG_Op_SoundPanel.WG_Op_SoundPanel_C.Outputs
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FAudioOutputDeviceInfo>AvailableDevices                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWG_Op_SoundPanel_C::Outputs(TArray<struct FAudioOutputDeviceInfo>& AvailableDevices)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WG_Op_SoundPanel_C", "Outputs");

	Params::UWG_Op_SoundPanel_C_Outputs_Params Parms{};

	Parms.AvailableDevices = AvailableDevices;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WG_Op_SoundPanel.WG_Op_SoundPanel_C.BndEvt__WG_Op_SoundPanel_SLD_Gain_K2Node_ComponentBoundEvent_10_OnFloatValueChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWG_Op_SoundPanel_C::BndEvt__WG_Op_SoundPanel_SLD_Gain_K2Node_ComponentBoundEvent_10_OnFloatValueChangedEvent__DelegateSignature(float Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WG_Op_SoundPanel_C", "BndEvt__WG_Op_SoundPanel_SLD_Gain_K2Node_ComponentBoundEvent_10_OnFloatValueChangedEvent__DelegateSignature");

	Params::UWG_Op_SoundPanel_C_BndEvt__WG_Op_SoundPanel_SLD_Gain_K2Node_ComponentBoundEvent_10_OnFloatValueChangedEvent__DelegateSignature_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WG_Op_SoundPanel.WG_Op_SoundPanel_C.ExecuteUbergraph_WG_Op_SoundPanel
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USaveGame*                   K2Node_CustomEvent_SaveGame_5                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bSuccess_5                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USaveGame*                   Temp_object_Variable                                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class USaveGame*                   K2Node_CustomEvent_SaveGame_4                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USaveGame*                   Temp_object_Variable_1                                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class USaveGame*                   K2Node_CustomEvent_SaveGame_3                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USaveGame*                   Temp_object_Variable_2                                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class USaveGame*                   K2Node_CustomEvent_SaveGame_2                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USaveGame*                   Temp_object_Variable_3                                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class USaveGame_Sound_C*           K2Node_DynamicCast_AsSave_Game_Sound                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class USaveGame*                   K2Node_CustomEvent_SaveGame_1                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USaveGame*                   Temp_object_Variable_4                                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class USaveGame_Sound_C*           K2Node_DynamicCast_AsSave_Game_Sound_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAsyncActionHandleSaveGame*  CallFunc_AsyncLoadGameFromSlot_ReturnValue                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class USaveGame*                   K2Node_CustomEvent_SaveGame                                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_6                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_5                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USaveGame*                   Temp_object_Variable_5                                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class USaveGame*                   Temp_object_Variable_6                                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_6                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USaveGame*                   K2Node_CustomEvent_SaveGame_6                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bSuccess_6                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_ComponentBoundEvent_Value_4                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_ComponentBoundEvent_Value_3                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_DoesSaveGameExist_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_ComponentBoundEvent_Value_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_ComponentBoundEvent_Value_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FAudioCaptureDeviceInfo     CallFunc_GetAudioCaptureDeviceInfo_OutInfo                       (NoDestructor)
// bool                               CallFunc_GetAudioCaptureDeviceInfo_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FAudioInputDeviceInfo>K2Node_CustomEvent_AvailableDevices_1                            (ConstParm, ReferenceParm)
// class FString                      CallFunc_Conv_NameToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// struct FAudioInputDeviceInfo       CallFunc_Array_Get_Item_1                                        (None)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_NameToString_ReturnValue_1                         (ZeroConstructor, HasGetValueTypeHash)
// class UAsyncActionHandleSaveGame*  CallFunc_AsyncSaveGameToSlot_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAsyncActionHandleSaveGame*  CallFunc_AsyncSaveGameToSlot_ReturnValue_1                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_5                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_7                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAsyncActionHandleSaveGame*  CallFunc_AsyncSaveGameToSlot_ReturnValue_2                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_6                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAsyncActionHandleSaveGame*  CallFunc_AsyncSaveGameToSlot_ReturnValue_3                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_7                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_8                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_9                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USaveGame_Sound_C*           CallFunc_CreateSaveGameObject_ReturnValue                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAsyncActionHandleSaveGame*  CallFunc_AsyncSaveGameToSlot_ReturnValue_4                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_10                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_DoubleToString_ReturnValue                         (ZeroConstructor, HasGetValueTypeHash)
// class UAsyncActionHandleSaveGame*  CallFunc_AsyncSaveGameToSlot_ReturnValue_5                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_11                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FAudioOutputDeviceInfo>K2Node_CustomEvent_AvailableDevices                              (ConstParm, ReferenceParm)
// int32                              Temp_int_Loop_Counter_Variable_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_ComponentBoundEvent_Value                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetValue_InValue_ImplicitCast                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetValue_InValue_ImplicitCast_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetValue_InValue_ImplicitCast_2                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetValue_InValue_ImplicitCast_3                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetValue_InValue_ImplicitCast_4                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSet_MasterSoundValue_ImplicitCast                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSet_SfxSoundValue_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSet_MusicSoundValue_ImplicitCast                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSet_VoipSoundValue_ImplicitCast                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetSoundMixClassOverride_Volume_ImplicitCast            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetSoundMixClassOverride_Volume_ImplicitCast_1          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetSoundMixClassOverride_Volume_ImplicitCast_2          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetSoundMixClassOverride_Volume_ImplicitCast_3          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSet_MicGain_ImplicitCast                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWG_Op_SoundPanel_C::ExecuteUbergraph_WG_Op_SoundPanel(int32 EntryPoint, class USaveGame* K2Node_CustomEvent_SaveGame_5, bool K2Node_CustomEvent_bSuccess_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool Temp_bool_Variable, class USaveGame* Temp_object_Variable, class USaveGame* K2Node_CustomEvent_SaveGame_4, bool K2Node_CustomEvent_bSuccess_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool Temp_bool_Variable_1, class USaveGame* Temp_object_Variable_1, class USaveGame* K2Node_CustomEvent_SaveGame_3, bool K2Node_CustomEvent_bSuccess_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, bool Temp_bool_Variable_2, class USaveGame* Temp_object_Variable_2, class USaveGame* K2Node_CustomEvent_SaveGame_2, bool K2Node_CustomEvent_bSuccess_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, bool Temp_bool_Variable_3, class USaveGame* Temp_object_Variable_3, class USaveGame_Sound_C* K2Node_DynamicCast_AsSave_Game_Sound, bool K2Node_DynamicCast_bSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, class USaveGame* K2Node_CustomEvent_SaveGame_1, bool K2Node_CustomEvent_bSuccess_1, bool Temp_bool_Variable_4, class USaveGame* Temp_object_Variable_4, class USaveGame_Sound_C* K2Node_DynamicCast_AsSave_Game_Sound_1, bool K2Node_DynamicCast_bSuccess_1, class UAsyncActionHandleSaveGame* CallFunc_AsyncLoadGameFromSlot_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, class USaveGame* K2Node_CustomEvent_SaveGame, bool K2Node_CustomEvent_bSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, bool Temp_bool_Variable_5, class USaveGame* Temp_object_Variable_5, class USaveGame* Temp_object_Variable_6, bool Temp_bool_Variable_6, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, double CallFunc_Array_Get_Item, int32 CallFunc_Add_IntInt_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess, int32 Temp_int_Array_Index_Variable_1, class USaveGame* K2Node_CustomEvent_SaveGame_6, bool K2Node_CustomEvent_bSuccess_6, int32 Temp_int_Array_Index_Variable_2, float K2Node_ComponentBoundEvent_Value_4, float K2Node_ComponentBoundEvent_Value_3, bool K2Node_Event_IsDesignTime, bool CallFunc_DoesSaveGameExist_ReturnValue, float K2Node_ComponentBoundEvent_Value_2, float K2Node_ComponentBoundEvent_Value_1, bool CallFunc_IsValid_ReturnValue_1, const struct FAudioCaptureDeviceInfo& CallFunc_GetAudioCaptureDeviceInfo_OutInfo, bool CallFunc_GetAudioCaptureDeviceInfo_ReturnValue, TArray<struct FAudioInputDeviceInfo>& K2Node_CustomEvent_AvailableDevices_1, const class FString& CallFunc_Conv_NameToString_ReturnValue, const struct FAudioInputDeviceInfo& CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, const class FString& CallFunc_Conv_NameToString_ReturnValue_1, class UAsyncActionHandleSaveGame* CallFunc_AsyncSaveGameToSlot_ReturnValue, class UAsyncActionHandleSaveGame* CallFunc_AsyncSaveGameToSlot_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_4, bool CallFunc_IsValid_ReturnValue_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, class UAsyncActionHandleSaveGame* CallFunc_AsyncSaveGameToSlot_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_6, class UAsyncActionHandleSaveGame* CallFunc_AsyncSaveGameToSlot_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_7, bool CallFunc_IsValid_ReturnValue_8, bool CallFunc_IsValid_ReturnValue_9, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, class USaveGame_Sound_C* CallFunc_CreateSaveGameObject_ReturnValue, class UAsyncActionHandleSaveGame* CallFunc_AsyncSaveGameToSlot_ReturnValue_4, bool CallFunc_IsValid_ReturnValue_10, const class FString& CallFunc_Conv_DoubleToString_ReturnValue, class UAsyncActionHandleSaveGame* CallFunc_AsyncSaveGameToSlot_ReturnValue_5, const class FString& CallFunc_Concat_StrStr_ReturnValue, bool CallFunc_IsValid_ReturnValue_11, TArray<struct FAudioOutputDeviceInfo>& K2Node_CustomEvent_AvailableDevices, int32 Temp_int_Loop_Counter_Variable_2, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue_2, float K2Node_ComponentBoundEvent_Value, float CallFunc_SetValue_InValue_ImplicitCast, float CallFunc_SetValue_InValue_ImplicitCast_1, float CallFunc_SetValue_InValue_ImplicitCast_2, float CallFunc_SetValue_InValue_ImplicitCast_3, float CallFunc_SetValue_InValue_ImplicitCast_4, double K2Node_VariableSet_MasterSoundValue_ImplicitCast, double K2Node_VariableSet_SfxSoundValue_ImplicitCast, double K2Node_VariableSet_MusicSoundValue_ImplicitCast, double K2Node_VariableSet_VoipSoundValue_ImplicitCast, float CallFunc_SetSoundMixClassOverride_Volume_ImplicitCast, float CallFunc_SetSoundMixClassOverride_Volume_ImplicitCast_1, float CallFunc_SetSoundMixClassOverride_Volume_ImplicitCast_2, float CallFunc_SetSoundMixClassOverride_Volume_ImplicitCast_3, double K2Node_VariableSet_MicGain_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WG_Op_SoundPanel_C", "ExecuteUbergraph_WG_Op_SoundPanel");

	Params::UWG_Op_SoundPanel_C_ExecuteUbergraph_WG_Op_SoundPanel_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_SaveGame_5 = K2Node_CustomEvent_SaveGame_5;
	Parms.K2Node_CustomEvent_bSuccess_5 = K2Node_CustomEvent_bSuccess_5;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.K2Node_CustomEvent_SaveGame_4 = K2Node_CustomEvent_SaveGame_4;
	Parms.K2Node_CustomEvent_bSuccess_4 = K2Node_CustomEvent_bSuccess_4;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.K2Node_CustomEvent_SaveGame_3 = K2Node_CustomEvent_SaveGame_3;
	Parms.K2Node_CustomEvent_bSuccess_3 = K2Node_CustomEvent_bSuccess_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.Temp_object_Variable_2 = Temp_object_Variable_2;
	Parms.K2Node_CustomEvent_SaveGame_2 = K2Node_CustomEvent_SaveGame_2;
	Parms.K2Node_CustomEvent_bSuccess_2 = K2Node_CustomEvent_bSuccess_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.Temp_bool_Variable_3 = Temp_bool_Variable_3;
	Parms.Temp_object_Variable_3 = Temp_object_Variable_3;
	Parms.K2Node_DynamicCast_AsSave_Game_Sound = K2Node_DynamicCast_AsSave_Game_Sound;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.K2Node_CustomEvent_SaveGame_1 = K2Node_CustomEvent_SaveGame_1;
	Parms.K2Node_CustomEvent_bSuccess_1 = K2Node_CustomEvent_bSuccess_1;
	Parms.Temp_bool_Variable_4 = Temp_bool_Variable_4;
	Parms.Temp_object_Variable_4 = Temp_object_Variable_4;
	Parms.K2Node_DynamicCast_AsSave_Game_Sound_1 = K2Node_DynamicCast_AsSave_Game_Sound_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_AsyncLoadGameFromSlot_ReturnValue = CallFunc_AsyncLoadGameFromSlot_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.K2Node_CustomEvent_SaveGame = K2Node_CustomEvent_SaveGame;
	Parms.K2Node_CustomEvent_bSuccess = K2Node_CustomEvent_bSuccess;
	Parms.K2Node_CreateDelegate_OutputDelegate_6 = K2Node_CreateDelegate_OutputDelegate_6;
	Parms.Temp_bool_Variable_5 = Temp_bool_Variable_5;
	Parms.Temp_object_Variable_5 = Temp_object_Variable_5;
	Parms.Temp_object_Variable_6 = Temp_object_Variable_6;
	Parms.Temp_bool_Variable_6 = Temp_bool_Variable_6;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.K2Node_CustomEvent_SaveGame_6 = K2Node_CustomEvent_SaveGame_6;
	Parms.K2Node_CustomEvent_bSuccess_6 = K2Node_CustomEvent_bSuccess_6;
	Parms.Temp_int_Array_Index_Variable_2 = Temp_int_Array_Index_Variable_2;
	Parms.K2Node_ComponentBoundEvent_Value_4 = K2Node_ComponentBoundEvent_Value_4;
	Parms.K2Node_ComponentBoundEvent_Value_3 = K2Node_ComponentBoundEvent_Value_3;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_DoesSaveGameExist_ReturnValue = CallFunc_DoesSaveGameExist_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Value_2 = K2Node_ComponentBoundEvent_Value_2;
	Parms.K2Node_ComponentBoundEvent_Value_1 = K2Node_ComponentBoundEvent_Value_1;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetAudioCaptureDeviceInfo_OutInfo = CallFunc_GetAudioCaptureDeviceInfo_OutInfo;
	Parms.CallFunc_GetAudioCaptureDeviceInfo_ReturnValue = CallFunc_GetAudioCaptureDeviceInfo_ReturnValue;
	Parms.K2Node_CustomEvent_AvailableDevices_1 = K2Node_CustomEvent_AvailableDevices_1;
	Parms.CallFunc_Conv_NameToString_ReturnValue = CallFunc_Conv_NameToString_ReturnValue;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Conv_NameToString_ReturnValue_1 = CallFunc_Conv_NameToString_ReturnValue_1;
	Parms.CallFunc_AsyncSaveGameToSlot_ReturnValue = CallFunc_AsyncSaveGameToSlot_ReturnValue;
	Parms.CallFunc_AsyncSaveGameToSlot_ReturnValue_1 = CallFunc_AsyncSaveGameToSlot_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;
	Parms.CallFunc_IsValid_ReturnValue_5 = CallFunc_IsValid_ReturnValue_5;
	Parms.K2Node_CreateDelegate_OutputDelegate_7 = K2Node_CreateDelegate_OutputDelegate_7;
	Parms.CallFunc_AsyncSaveGameToSlot_ReturnValue_2 = CallFunc_AsyncSaveGameToSlot_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_6 = CallFunc_IsValid_ReturnValue_6;
	Parms.CallFunc_AsyncSaveGameToSlot_ReturnValue_3 = CallFunc_AsyncSaveGameToSlot_ReturnValue_3;
	Parms.CallFunc_IsValid_ReturnValue_7 = CallFunc_IsValid_ReturnValue_7;
	Parms.CallFunc_IsValid_ReturnValue_8 = CallFunc_IsValid_ReturnValue_8;
	Parms.CallFunc_IsValid_ReturnValue_9 = CallFunc_IsValid_ReturnValue_9;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_CreateSaveGameObject_ReturnValue = CallFunc_CreateSaveGameObject_ReturnValue;
	Parms.CallFunc_AsyncSaveGameToSlot_ReturnValue_4 = CallFunc_AsyncSaveGameToSlot_ReturnValue_4;
	Parms.CallFunc_IsValid_ReturnValue_10 = CallFunc_IsValid_ReturnValue_10;
	Parms.CallFunc_Conv_DoubleToString_ReturnValue = CallFunc_Conv_DoubleToString_ReturnValue;
	Parms.CallFunc_AsyncSaveGameToSlot_ReturnValue_5 = CallFunc_AsyncSaveGameToSlot_ReturnValue_5;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_11 = CallFunc_IsValid_ReturnValue_11;
	Parms.K2Node_CustomEvent_AvailableDevices = K2Node_CustomEvent_AvailableDevices;
	Parms.Temp_int_Loop_Counter_Variable_2 = Temp_int_Loop_Counter_Variable_2;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_2 = CallFunc_Less_IntInt_ReturnValue_2;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.K2Node_ComponentBoundEvent_Value = K2Node_ComponentBoundEvent_Value;
	Parms.CallFunc_SetValue_InValue_ImplicitCast = CallFunc_SetValue_InValue_ImplicitCast;
	Parms.CallFunc_SetValue_InValue_ImplicitCast_1 = CallFunc_SetValue_InValue_ImplicitCast_1;
	Parms.CallFunc_SetValue_InValue_ImplicitCast_2 = CallFunc_SetValue_InValue_ImplicitCast_2;
	Parms.CallFunc_SetValue_InValue_ImplicitCast_3 = CallFunc_SetValue_InValue_ImplicitCast_3;
	Parms.CallFunc_SetValue_InValue_ImplicitCast_4 = CallFunc_SetValue_InValue_ImplicitCast_4;
	Parms.K2Node_VariableSet_MasterSoundValue_ImplicitCast = K2Node_VariableSet_MasterSoundValue_ImplicitCast;
	Parms.K2Node_VariableSet_SfxSoundValue_ImplicitCast = K2Node_VariableSet_SfxSoundValue_ImplicitCast;
	Parms.K2Node_VariableSet_MusicSoundValue_ImplicitCast = K2Node_VariableSet_MusicSoundValue_ImplicitCast;
	Parms.K2Node_VariableSet_VoipSoundValue_ImplicitCast = K2Node_VariableSet_VoipSoundValue_ImplicitCast;
	Parms.CallFunc_SetSoundMixClassOverride_Volume_ImplicitCast = CallFunc_SetSoundMixClassOverride_Volume_ImplicitCast;
	Parms.CallFunc_SetSoundMixClassOverride_Volume_ImplicitCast_1 = CallFunc_SetSoundMixClassOverride_Volume_ImplicitCast_1;
	Parms.CallFunc_SetSoundMixClassOverride_Volume_ImplicitCast_2 = CallFunc_SetSoundMixClassOverride_Volume_ImplicitCast_2;
	Parms.CallFunc_SetSoundMixClassOverride_Volume_ImplicitCast_3 = CallFunc_SetSoundMixClassOverride_Volume_ImplicitCast_3;
	Parms.K2Node_VariableSet_MicGain_ImplicitCast = K2Node_VariableSet_MicGain_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}

}


