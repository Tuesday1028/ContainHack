#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x51 (0x2E1 - 0x290)
// BlueprintGeneratedClass Action_SoundBP.Action_SoundBP_C
class UAction_SoundBP_C : public UActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x290(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UAudioComponent*                       Audio;                                             // 0x298(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FFActionSound                         ActionSound;                                       // 0x2A0(0x20)(Edit, BlueprintVisible, Net, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	enum class EActionSoundTypes                 Type;                                              // 0x2C0(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         bIsAbsolutelyPlay;                                 // 0x2C1(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_777[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       SearchArea;                                        // 0x2C8(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	TArray<class UAction_SoundBP_C*>             ClosedActionSounds;                                // 0x2D0(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	bool                                         bShouldPlay;                                       // 0x2E0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UAction_SoundBP_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void Multicast_PlayActionSound(const struct FFActionSound& ActionSound);
	void OnAudioFinished();
	void ExecuteUbergraph_Action_SoundBP(int32 EntryPoint, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_HasAuthority_ReturnValue, const struct FFActionSound& K2Node_CustomEvent_ActionSound, TArray<class UAction_SoundBP_C*>& CallFunc_GetAllActorsOfClass_OutActors, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, class UAction_SoundBP_C* CallFunc_Array_Get_Item, class UAction_SoundBP_C* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Add_ReturnValue, float CallFunc_GetDistanceTo_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_LessEqual_DoubleDouble_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_NotEqual_ObjectObject_ReturnValue, class UActor* CallFunc_GetOwner_ReturnValue, class USoldiers_CharacterBP_C* K2Node_DynamicCast_AsSoldiers_Character_BP, bool K2Node_DynamicCast_bSuccess, bool CallFunc_BooleanOR_ReturnValue, double CallFunc_LessEqual_DoubleDouble_A_ImplicitCast, float CallFunc_SetVolumeMultiplier_NewVolumeMultiplier_ImplicitCast, float CallFunc_SetPitchMultiplier_NewPitchMultiplier_ImplicitCast);
};

}


