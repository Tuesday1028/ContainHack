#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x41 (0x2B9 - 0x278)
// WidgetBlueprintGeneratedClass EndGameWidget.EndGameWidget_C
class UEndGameWidget_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x278(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWG_OptionsButton_C*                   WG_HButton;                                        // 0x280(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWG_OptionsButton_C*                   WG_RestartButton;                                  // 0x288(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWG_OptionsButton_C*                   WG_ReturnButton;                                   // 0x290(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UGameMode*                             As_Game_Mode;                                      // 0x298(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UB_DemoGameModeBase_C*                 As_B_Demo_Game_Mode_Base;                          // 0x2A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UGI_Contain_C*                         As_GI_Contain;                                     // 0x2A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UB_DemoController_C*                   As_B_Demo_Controller;                              // 0x2B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         IsFinish;                                          // 0x2B8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UEndGameWidget_C* GetDefaultObj();

	void PreConstruct(bool IsDesignTime);
	void Construct();
	void RestartEvent();
	void LoadingWidget(class UClass* Class);
	void LoadingWidget_Server(class UClass* Class);
	void Menu_Event();
	void ReturnHub();
	void ExecuteUbergraph_EndGameWidget(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool K2Node_Event_IsDesignTime, class UPlayerController* CallFunc_GetPlayerController_ReturnValue, class UGameModeBase* CallFunc_GetGameMode_ReturnValue, class UB_DemoGameModeBase_C* K2Node_DynamicCast_AsB_Demo_Game_Mode_Base, bool K2Node_DynamicCast_bSuccess, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UGI_Contain_C* K2Node_DynamicCast_AsGI_Contain, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue, class UPlayerController* CallFunc_GetPlayerController_ReturnValue_1, class UB_DemoController_C* K2Node_DynamicCast_AsB_Demo_Controller, bool K2Node_DynamicCast_bSuccess_2, const class FString& CallFunc_GetCurrentLevelName_ReturnValue, bool CallFunc_EqualEqual_StriStri_ReturnValue, bool CallFunc_EqualEqual_StriStri_ReturnValue_1, bool CallFunc_EqualEqual_StriStri_ReturnValue_2, bool CallFunc_EqualEqual_StriStri_ReturnValue_3, class FText CallFunc_MakeLiteralText_ReturnValue, bool CallFunc_IsServer_ReturnValue, class UClass* K2Node_CustomEvent_Class_1, class UUserWidget* CallFunc_Create_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class UClass* K2Node_CustomEvent_Class, class UGameModeBase* CallFunc_GetGameMode_ReturnValue_1, class UAraPlayerStart_C* K2Node_DynamicCast_AsAra_Player_Start, bool K2Node_DynamicCast_bSuccess_3, class UGameModeBase* CallFunc_GetGameMode_ReturnValue_2, bool CallFunc_IsStandalone_ReturnValue, class UAraPlayerStart_C* K2Node_DynamicCast_AsAra_Player_Start_1, bool K2Node_DynamicCast_bSuccess_4, bool CallFunc_IsStandalone_ReturnValue_1, const class FString& CallFunc_GetCurrentLevelName_ReturnValue_1, bool CallFunc_EqualEqual_StriStri_ReturnValue_4, bool CallFunc_EqualEqual_StriStri_ReturnValue_5, bool CallFunc_EqualEqual_StriStri_ReturnValue_6, bool CallFunc_EqualEqual_StriStri_ReturnValue_7);
};

}


