#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x4F9 (0x521 - 0x28)
// BlueprintGeneratedClass Silah_Delta.Silah_Delta_C
class USilah_Delta_C : public USaveGame
{
public:
	struct FAnaSilah                             AnaSilahSave;                                      // 0x28(0x80)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAnaAttachBHandguard                  AnaAttachBHandguardSave;                           // 0xA8(0x44)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_25C0[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAnaAttachBOptic                      AnaAttachBOpticSave;                               // 0xF0(0x30)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAnaAttachFHandguard                  AnaAttachFHandguardSave;                           // 0x120(0x17)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_25C1[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAnaAttachFOptic                      AnaAttachFOpticSave;                               // 0x138(0x33)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_25C3[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAnaAttachHandguard                   AnaAttachHandguardSave;                            // 0x170(0x4F)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_25C6[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAnaAttachLHandguard                  AnaAttachLHandguardSave;                           // 0x1C0(0x17)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_25C9[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAnaAttachMag                         AnaAttachMagazineSave;                             // 0x1D8(0x36)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_25CB[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAnaAttachMuz                         AnaAttachMuzzleSave;                               // 0x210(0x59)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_25CE[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAnaAttachRHandguard                  AnaAttachRHandguardSave;                           // 0x270(0x17)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_25D0[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAnaAttachStok                        AnaAttachStockSave;                                // 0x288(0x53)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_25D2[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAnaAttachUHandguard                  AnaAttachUHandguardSave;                           // 0x2E0(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAltAttachBOptic                      AltAttachBOpticSave;                               // 0x2F8(0xA)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_25D4[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAltSilah                             AltSilahSave;                                      // 0x308(0x76)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_25D5[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAltAttachFHandguard                  AltAttachFHandguardSave;                           // 0x380(0xA)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_25D6[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAltAttachFOptic                      AltAttachFOpticSave;                               // 0x390(0xA)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_25D7[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAltAttachMag                         AltAttachMagazineSave;                             // 0x3A0(0x1E)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_25D8[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAltAttachMuz                         AltAttachMuzzleSave;                               // 0x3C0(0xA)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_25D9[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAltAttachUpper1                      AltAttachUpperSave;                                // 0x3D0(0xA)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_25DA[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTool                                 ToolSave;                                          // 0x3E0(0xB)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_25DC[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FVector>                       SilahlarKonum;                                     // 0x3F0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FAnaAttachBarrel                      AnaAttachBarrelSave;                               // 0x400(0x53)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_25DD[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAnaAttachCharging                    AnaAttachChargingSave;                             // 0x458(0x11)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_25DE[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAnaAttachTrigger                     AnaAttachTriggerSave;                              // 0x470(0x19)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_25DF[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAnaAttachHandGrip                    AnaAttachHandGripSave;                             // 0x490(0x2D)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_25E0[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAnaAttachBullet                      AnaAttachBulletSave;                               // 0x4C0(0x30)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAnaAttachORail1                      AnaAttachORail1Save;                               // 0x4F0(0x12)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_25E2[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAnaAttachUHandRail1                  AnaAttachUHandRail1Save;                           // 0x508(0x12)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_25E3[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         SaveYapildi;                                       // 0x520(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class USilah_Delta_C* GetDefaultObj();

};

}


