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

// 0x2C (0x2C - 0x0)
// UserDefinedStruct ProjectileMaterialData.ProjectileMaterialData
struct FProjectileMaterialData
{
public:
	enum class EPhysicalSurface                  Surface_5_A13BA84C444F7DFF70888788C6FCCCC2;        // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_37A5[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        RicochetConeAngleMulti_17_32A0AE944DE3022C18C793B5CA5018A6; // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        RicochetDecideAngleMulti_18_8EE57C55424CA7D67636B5964626EDB6; // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        RicochetVelocityMultiply_21_9A5B02584E10D7CC4C3F4686274BCC61; // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         LiquidSurface_24_C03386A444373E401ED1CE9CBDE432C5; // 0x10(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_37A6[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        BaseArmour_28_373117FC4706CE9BA693BB8D49C42E78;    // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Resistance_30_2DC2D4E1415EF3C1AFB5C0BED0C65727;    // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TrajectoryModifier_32_BB5E20884B7958AD5DC4ABAF2EE5135C; // 0x1C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        FragmentationModifier_35_D7D2831849763BD514ACC4A86D5A8008; // 0x20(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         WildRicochets_85_3A62A0124D4BC86DA3DE6B85035C13D3; // 0x24(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_37A7[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        WildRicochetChance_88_744E437446EE5CE88A5A2C99213530C6; // 0x28(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}


