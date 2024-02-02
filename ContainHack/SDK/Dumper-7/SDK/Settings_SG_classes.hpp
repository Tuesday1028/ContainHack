#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xCD (0xF5 - 0x28)
// BlueprintGeneratedClass Settings_SG.Settings_SG_C
class USettings_SG_C : public USaveGame
{
public:
	TArray<class FName>                          Controls;                                          // 0x28(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         SaveControls;                                      // 0x38(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2604[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FText>                          ControlsKeySave;                                   // 0x40(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSTC_GraphicSettings                  Settings;                                          // 0x50(0x3A)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2605[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<double>                               SoundValues;                                       // 0x90(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         IsBenchmark;                                       // 0xA0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         FirstCinematics;                                   // 0xA1(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Subtites;                                          // 0xA2(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2606[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Language;                                          // 0xA8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                         HoldAim;                                           // 0xB8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         HoldLean;                                          // 0xB9(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2607[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       MouseSensitivity;                                  // 0xC0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsConnectionLost;                                  // 0xC8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         MotionBlur;                                        // 0xC9(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2608[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        FOV;                                               // 0xCC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         DLSS_SR;                                           // 0xD0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         DLSS_RR;                                           // 0xD1(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_260A[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                DLSS_SR_Quality;                                   // 0xD8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	enum class EUDLSSMode                        DLSSMode;                                          // 0xE8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EWindowMode                       WindowMode;                                        // 0xE9(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_260C[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FIntPoint                             Res;                                               // 0xEC(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         VSYNC;                                             // 0xF4(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class USettings_SG_C* GetDefaultObj();

};

}


