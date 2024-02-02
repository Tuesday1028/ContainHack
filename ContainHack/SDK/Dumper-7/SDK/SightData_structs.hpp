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

// 0x90 (0x90 - 0x0)
// UserDefinedStruct SightData.SightData
struct FSightData
{
public:
	enum class ESightTypes                       Type_20_6B63DEB749D65FE933349ABC3DE84FCF;          // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1C86[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  OpticOrFrontSocket_59_B7C998514EE46E4AC3166C8CF7EC1B9E; // 0x4(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1C89[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMeshComponent*                        OpticOrFrontComponent_56_A687386643DF819B77881F910F174891; // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FName                                  RearSocket_60_6941F35A46204D54FFC1DA9C2285E782;    // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMeshComponent*                        RearComponent_58_DD96E1B14016B814B4A7C09C72749BA6; // 0x20(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1C8F[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            HandTransform_66_959FDB4745BF067C4CEF32B6631C5855; // 0x30(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}


