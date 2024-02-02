#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x714 (0x73C - 0x28)
// BlueprintGeneratedClass Character_Echo.Character_Echo_C
class UCharacter_Echo_C : public USaveGame
{
public:
	struct FKarakterAyakkabi                     KarakterAyakkabiSave;                              // 0x28(0xA)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3AB4[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKarakterEldiven                      KarakterEldivenSave;                               // 0x38(0xA)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3AB6[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKarakterGovde                        KarakterGovdeSave;                                 // 0x48(0xA)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3AB9[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKarakterGozluk                       KarakterGozlukSave;                                // 0x58(0xA)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3ABB[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKarakterHolster                      KarakterHolsterSave;                               // 0x68(0xA)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3ABE[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKarakterKafa                         KarakterKafaSave;                                  // 0x78(0xA)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3AC0[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKarakterKask                         KarakterKaskSave;                                  // 0x88(0x24)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3AC3[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKarakterKemer                        KarakterKemerSave;                                 // 0xB0(0xA)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3AC5[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKarakterKulaklik                     KarakterKulaklikSave;                              // 0xC0(0xB)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3AC7[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKarakterPantolon                     KarakterPantolonSave;                              // 0xD0(0xA)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3AC8[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKarakterZirh                         KarakterZirhSave;                                  // 0xE0(0x1B)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3AC9[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKaskAttach                           KaskAttach;                                        // 0x100(0x40)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FKemerAttach                          KemerAttach;                                       // 0x140(0x1E0)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FZirhAttach                           ZirhAttach;                                        // 0x320(0x3F0)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FVector>                       SilahlarKonum;                                     // 0x710(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FPatchAttach                          PatchAttach;                                       // 0x720(0x1B)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         SaveYapildi;                                       // 0x73B(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UCharacter_Echo_C* GetDefaultObj();

};

}


