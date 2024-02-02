#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x88 (0x300 - 0x278)
// WidgetBlueprintGeneratedClass WG_Op_SoundPanel.WG_Op_SoundPanel_C
class UWG_Op_SoundPanel_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x278(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UComboBoxString*                       CB_Microfon;                                       // 0x280(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USlider*                               SLD_Gain;                                          // 0x288(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USlider*                               SLD_MasterVolume;                                  // 0x290(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USlider*                               SLD_Music;                                         // 0x298(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USlider*                               SLD_SFX;                                           // 0x2A0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USlider*                               SLD_Ui;                                            // 0x2A8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USlider*                               SLD_VOIP;                                          // 0x2B0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWG_OptionsButton_C*                   WG_OptionsButton;                                  // 0x2B8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UB_DemoCharacter_Child_C*              As_B_Demo_Character_Child;                         // 0x2C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UAudioCapture*                         Audio;                                             // 0x2C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class USaveGame_Sound_C*                     SaveSound;                                         // 0x2D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                       MasterSoundValue;                                  // 0x2D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       SfxSoundValue;                                     // 0x2E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       MusicSoundValue;                                   // 0x2E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       VoipSoundValue;                                    // 0x2F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       MicGain;                                           // 0x2F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWG_Op_SoundPanel_C* GetDefaultObj();

	void SetVolume();
	void Completed_50D3EDB140D343E9CE70208ECBB49801(class USaveGame* SaveGame, bool bSuccess);
	void Completed_043D4B774C4801F29434C991BDAFD73F(class USaveGame* SaveGame, bool bSuccess);
	void Completed_787A5449414061DEDD326CB15639EDAF(class USaveGame* SaveGame, bool bSuccess);
	void Completed_02EE912C4AD83C51F59D12A080663919(class USaveGame* SaveGame, bool bSuccess);
	void Completed_FD62ABC0442692581B285380E63EFE4C(class USaveGame* SaveGame, bool bSuccess);
	void Completed_BF732BE04A89D507F4CD49B9777FD62A(class USaveGame* SaveGame, bool bSuccess);
	void Completed_8865D6834CFA0666561F949087E2183A(class USaveGame* SaveGame, bool bSuccess);
	void Construct();
	void BndEvt__WG_Op_SoundPanel_Slider_179_K2Node_ComponentBoundEvent_1_OnFloatValueChangedEvent__DelegateSignature(float Value);
	void BndEvt__WG_Op_SoundPanel_Slider_K2Node_ComponentBoundEvent_2_OnFloatValueChangedEvent__DelegateSignature(float Value);
	void PreConstruct(bool IsDesignTime);
	void BndEvt__WG_Op_SoundPanel_SLD_Music_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature(float Value);
	void BndEvt__WG_Op_SoundPanel_SLD_VOIP_K2Node_ComponentBoundEvent_1_OnFloatValueChangedEvent__DelegateSignature(float Value);
	void Inputs(TArray<struct FAudioInputDeviceInfo>& AvailableDevices);
	void BndEvt__WG_Op_SoundPanel_SLD_MasterVolume_K2Node_ComponentBoundEvent_3_OnMouseCaptureEndEvent__DelegateSignature();
	void BndEvt__WG_Op_SoundPanel_SLD_SFX_K2Node_ComponentBoundEvent_4_OnMouseCaptureEndEvent__DelegateSignature();
	void BndEvt__WG_Op_SoundPanel_SLD_Music_K2Node_ComponentBoundEvent_5_OnMouseCaptureEndEvent__DelegateSignature();
	void BndEvt__WG_Op_SoundPanel_SLD_VOIP_K2Node_ComponentBoundEvent_6_OnMouseCaptureEndEvent__DelegateSignature();
	void SaveBtn();
	void Outputs(TArray<struct FAudioOutputDeviceInfo>& AvailableDevices);
	void BndEvt__WG_Op_SoundPanel_SLD_Gain_K2Node_ComponentBoundEvent_10_OnFloatValueChangedEvent__DelegateSignature(float Value);
	void ExecuteUbergraph_WG_Op_SoundPanel(int32 EntryPoint, class USaveGame* K2Node_CustomEvent_SaveGame_5, bool K2Node_CustomEvent_bSuccess_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool Temp_bool_Variable, class USaveGame* Temp_object_Variable, class USaveGame* K2Node_CustomEvent_SaveGame_4, bool K2Node_CustomEvent_bSuccess_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool Temp_bool_Variable_1, class USaveGame* Temp_object_Variable_1, class USaveGame* K2Node_CustomEvent_SaveGame_3, bool K2Node_CustomEvent_bSuccess_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, bool Temp_bool_Variable_2, class USaveGame* Temp_object_Variable_2, class USaveGame* K2Node_CustomEvent_SaveGame_2, bool K2Node_CustomEvent_bSuccess_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, bool Temp_bool_Variable_3, class USaveGame* Temp_object_Variable_3, class USaveGame_Sound_C* K2Node_DynamicCast_AsSave_Game_Sound, bool K2Node_DynamicCast_bSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, class USaveGame* K2Node_CustomEvent_SaveGame_1, bool K2Node_CustomEvent_bSuccess_1, bool Temp_bool_Variable_4, class USaveGame* Temp_object_Variable_4, class USaveGame_Sound_C* K2Node_DynamicCast_AsSave_Game_Sound_1, bool K2Node_DynamicCast_bSuccess_1, class UAsyncActionHandleSaveGame* CallFunc_AsyncLoadGameFromSlot_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, class USaveGame* K2Node_CustomEvent_SaveGame, bool K2Node_CustomEvent_bSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, bool Temp_bool_Variable_5, class USaveGame* Temp_object_Variable_5, class USaveGame* Temp_object_Variable_6, bool Temp_bool_Variable_6, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, double CallFunc_Array_Get_Item, int32 CallFunc_Add_IntInt_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess, int32 Temp_int_Array_Index_Variable_1, class USaveGame* K2Node_CustomEvent_SaveGame_6, bool K2Node_CustomEvent_bSuccess_6, int32 Temp_int_Array_Index_Variable_2, float K2Node_ComponentBoundEvent_Value_4, float K2Node_ComponentBoundEvent_Value_3, bool K2Node_Event_IsDesignTime, bool CallFunc_DoesSaveGameExist_ReturnValue, float K2Node_ComponentBoundEvent_Value_2, float K2Node_ComponentBoundEvent_Value_1, bool CallFunc_IsValid_ReturnValue_1, const struct FAudioCaptureDeviceInfo& CallFunc_GetAudioCaptureDeviceInfo_OutInfo, bool CallFunc_GetAudioCaptureDeviceInfo_ReturnValue, TArray<struct FAudioInputDeviceInfo>& K2Node_CustomEvent_AvailableDevices_1, const class FString& CallFunc_Conv_NameToString_ReturnValue, const struct FAudioInputDeviceInfo& CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, const class FString& CallFunc_Conv_NameToString_ReturnValue_1, class UAsyncActionHandleSaveGame* CallFunc_AsyncSaveGameToSlot_ReturnValue, class UAsyncActionHandleSaveGame* CallFunc_AsyncSaveGameToSlot_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_4, bool CallFunc_IsValid_ReturnValue_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, class UAsyncActionHandleSaveGame* CallFunc_AsyncSaveGameToSlot_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_6, class UAsyncActionHandleSaveGame* CallFunc_AsyncSaveGameToSlot_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_7, bool CallFunc_IsValid_ReturnValue_8, bool CallFunc_IsValid_ReturnValue_9, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, class USaveGame_Sound_C* CallFunc_CreateSaveGameObject_ReturnValue, class UAsyncActionHandleSaveGame* CallFunc_AsyncSaveGameToSlot_ReturnValue_4, bool CallFunc_IsValid_ReturnValue_10, const class FString& CallFunc_Conv_DoubleToString_ReturnValue, class UAsyncActionHandleSaveGame* CallFunc_AsyncSaveGameToSlot_ReturnValue_5, const class FString& CallFunc_Concat_StrStr_ReturnValue, bool CallFunc_IsValid_ReturnValue_11, TArray<struct FAudioOutputDeviceInfo>& K2Node_CustomEvent_AvailableDevices, int32 Temp_int_Loop_Counter_Variable_2, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue_2, float K2Node_ComponentBoundEvent_Value, float CallFunc_SetValue_InValue_ImplicitCast, float CallFunc_SetValue_InValue_ImplicitCast_1, float CallFunc_SetValue_InValue_ImplicitCast_2, float CallFunc_SetValue_InValue_ImplicitCast_3, float CallFunc_SetValue_InValue_ImplicitCast_4, double K2Node_VariableSet_MasterSoundValue_ImplicitCast, double K2Node_VariableSet_SfxSoundValue_ImplicitCast, double K2Node_VariableSet_MusicSoundValue_ImplicitCast, double K2Node_VariableSet_VoipSoundValue_ImplicitCast, float CallFunc_SetSoundMixClassOverride_Volume_ImplicitCast, float CallFunc_SetSoundMixClassOverride_Volume_ImplicitCast_1, float CallFunc_SetSoundMixClassOverride_Volume_ImplicitCast_2, float CallFunc_SetSoundMixClassOverride_Volume_ImplicitCast_3, double K2Node_VariableSet_MicGain_ImplicitCast);
};

}


