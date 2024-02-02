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

// 0x98 (0x98 - 0x0)
// UserDefinedStruct FXMaterialData.FXMaterialData
struct FFXMaterialData
{
public:
	enum class EPhysicalSurface                  Surface_5_A13BA84C444F7DFF70888788C6FCCCC2;        // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3894[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UParticleSystem*                       ImpactParticleFX_47_2D1ADA5E4AE492B40F6A018E974AFC88; // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                       RicochetParticleTrailFX_89_A804146D4F1C22B014298B9F801BFD53; // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                       DebrisParticleFX_78_0D9CC68F469BBA2E68FE8BAD0FBA4293; // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class USoundCue*                             ImpactSoundFX_52_26AFC5FF4B225EF2B2C41E94EB0ED683; // 0x20(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UMaterial*                             ImpactDecal_72_AFAE4BE8469F751D5996A58C8AC0177C;   // 0x28(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UMaterial*                             RicochetDecal_73_BA1A3A3147C74AFF1BE4C1823C48F711; // 0x30(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                               DecalSize_39_3448E2FF4BC678271EB742853872E7C2;     // 0x38(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterial*                             ParticleDecal_92_D26A7B3D4F10A3F168E1D0A0B8A04E1A; // 0x50(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                               ParticleDecalSize_90_662BB5AF4483ED558A378B991B0319FB; // 0x58(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterial*                             RearSpatterDecal_124_69E3B9034ED961553C1830B154855E80; // 0x70(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class USoundCue*                             ParticleCollisionSounds_95_D12C7B394C9112DB7312428752345A16; // 0x78(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         LiquidSurface_24_C03386A444373E401ED1CE9CBDE432C5; // 0x80(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         HotSurface_97_40A8C1CC41B1B65462A21B98D09A678D;    // 0x81(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ColdSurface_103_8A3EDA61407CAA9014059DA8707DE7BD;  // 0x82(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Absorbant_99_1EA3FC5043D2C407F4FCD49B1484CF9F;     // 0x83(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Conductive_101_68E6B3B1478513C4738E5690BE4F6175;   // 0x84(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Flammable_110_20E5C07646851E782F138697A7FC19FC;    // 0x85(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Caustic_121_992CDE584A6F006FC3F901A49916A947;      // 0x86(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EMaterialState                    MaterialState_109_530FAB1948850D8B126EC3A58F6426F5; // 0x87(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Temperature_113_01E4F81C469340C33D67C88676011699;  // 0x88(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Flammability_115_635CCA024B0C5A5736CA668C10996472; // 0x8C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Conductivity_117_BCB9477E4295BFB34F4BC2A04ECDFF8E; // 0x90(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Absorbance_119_E906A72E4D061790AAA8D59C0A9C5580;   // 0x94(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}


