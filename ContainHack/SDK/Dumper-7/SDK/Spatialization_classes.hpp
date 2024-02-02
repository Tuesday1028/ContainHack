#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x90 (0xB8 - 0x28)
// Class Spatialization.ITDSpatializationSourceSettings
class UITDSpatializationSourceSettings : public USpatializationPluginSourceSettingsBase
{
public:
	bool                                         bEnableILD;                                        // 0x28(0x1)(Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A10[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRuntimeFloatCurve                    PanningIntensityOverDistance;                      // 0x30(0x88)(Edit, BlueprintVisible, Config, GlobalConfig, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UITDSpatializationSourceSettings* GetDefaultObj();

};

}


