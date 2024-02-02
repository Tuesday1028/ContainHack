#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x68 (0x300 - 0x298)
// BlueprintGeneratedClass HUB01.HUB01_C
class UHUB01_C : public ULevelScriptActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x298(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UB_DemoCharacter_C*                    As_B_Demo_Character;                               // 0x2A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UObject*                               WGRef;                                             // 0x2A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UB_DemoController_C*                   As_B_Demo_Controller;                              // 0x2B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UObject*                               NewVar_0;                                          // 0x2B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class FString                                In_URL_0;                                          // 0x2C0(0x10)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class UB_DemoGameModeBase_C*                 As_B_Demo_Game_Mode_Base;                          // 0x2D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UGI_Contain_C*                         As_GI_Contain;                                     // 0x2D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UMediaPlayer*                          MediaPlayer;                                       // 0x2E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UGI_Contain_C*                         As_GI_Contain_0;                                   // 0x2E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class USettings_SG_C*                        SettingsSave;                                      // 0x2F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UPostProcessVolume*                    PostProcessVolume_0_ExecuteUbergraph_HUB01_RefProperty; // 0x2F8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UHUB01_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void ClientCharacter();
	void ExecuteUbergraph_HUB01(int32 EntryPoint, const struct FWeightedBlendable& K2Node_MakeStruct_WeightedBlendable, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, TArray<struct FWeightedBlendable>& K2Node_MakeArray_Array, class UGI_Contain_C* K2Node_DynamicCast_AsGI_Contain, bool K2Node_DynamicCast_bSuccess, const struct FWeightedBlendables& K2Node_MakeStruct_WeightedBlendables, const struct FPostProcessSettings& K2Node_MakeStruct_PostProcessSettings, bool CallFunc_IsValid_ReturnValue, class UHub_Loading_C* CallFunc_Create_ReturnValue, class UCharacter* CallFunc_GetPlayerCharacter_ReturnValue, class UB_DemoCharacter_C* K2Node_DynamicCast_AsB_Demo_Character, bool K2Node_DynamicCast_bSuccess_1);
};

}


