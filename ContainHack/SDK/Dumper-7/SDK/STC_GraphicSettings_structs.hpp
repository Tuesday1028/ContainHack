#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x3A (0x3A - 0x0)
// UserDefinedStruct STC_GraphicSettings.STC_GraphicSettings
struct FSTC_GraphicSettings
{
public:
	enum class EWindowMode                       WindowMode_5_1A44548343CF018CEACDB590B5A595F8;     // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_385D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSTC_ScreenResoliton                  Screen_2_1B22B538442FB698FB2E58BC2A150305;         // 0x4(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Vsync_8_80CB67D24A151A210809A3983E10FF15;          // 0xC(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         FpsCapEnabled_10_1F3E09664C2DDB7FEDA52F819AAA8452; // 0xD(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_385F[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       FrameLimit_13_ACE608174C502864DC78BAA3E82EA223;    // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Fov_15_BAC1408C4083B16DDC3646B814DB5580;           // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Brightness_18_CB4ED34A47CCDAE456807481FBDCF875;    // 0x20(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        TextureQuality_23_ED0A3F834268A7FBF6BDA2862F1F2ABD; // 0x28(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        ShadowQuality_24_D1B1744F460F3639CF586E99BFF51619; // 0x2C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        AAQuality_26_B35163A64740FA14E98E8D962D8AF57F;     // 0x30(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        VFXQuality_28_24EBCA744B9AA75CA13BE2A4CAF9578F;    // 0x34(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         DLSS_31_8E8B3E56441382B9A441439759B1F814;          // 0x38(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         FSR_33_DA45A0C044DABC37E33F9EB444BD60D9;           // 0x39(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}


