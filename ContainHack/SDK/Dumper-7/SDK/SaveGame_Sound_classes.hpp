#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x40 - 0x28)
// BlueprintGeneratedClass SaveGame_Sound.SaveGame_Sound_C
class USaveGame_Sound_C : public USaveGame
{
public:
	TArray<double>                               SoundVolume;                                       // 0x28(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	double                                       MGain;                                             // 0x38(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class USaveGame_Sound_C* GetDefaultObj();

};

}


