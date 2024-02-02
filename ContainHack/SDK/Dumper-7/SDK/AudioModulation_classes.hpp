#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// Class AudioModulation.AudioModulationStyle
class UAudioModulationStyle : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UAudioModulationStyle* GetDefaultObj();

	struct FColor GetPatchColor();
	struct FColor GetParameterColor();
	struct FColor GetModulationGeneratorColor();
	struct FColor GetControlBusMixColor();
	struct FColor GetControlBusColor();
};

// 0x10 (0x48 - 0x38)
// Class AudioModulation.AudioModulationSettings
class UAudioModulationSettings : public UDeveloperSettings
{
public:
	TArray<struct FSoftObjectPath>               Parameters;                                        // 0x38(0x10)(Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UAudioModulationSettings* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class AudioModulation.AudioModulationStatics
class UAudioModulationStatics : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UAudioModulationStatics* GetDefaultObj();

	void UpdateModulator(class UObject* WorldContextObject, class USoundModulatorBase* Modulator);
	void UpdateMixFromObject(class UObject* WorldContextObject, class USoundControlBusMix* Mix, float FadeTime);
	void UpdateMixByFilter(class UObject* WorldContextObject, class USoundControlBusMix* Mix, const class FString& AddressFilter, TSubclassOf<class USoundModulationParameter> ParamClassFilter, class USoundModulationParameter* ParamFilter, float Value, float FadeTime);
	void UpdateMix(class UObject* WorldContextObject, class USoundControlBusMix* Mix, const TArray<struct FSoundControlBusMixStage>& Stages, float FadeTime);
	void SetGlobalBusMixValue(class UObject* WorldContextObject, class USoundControlBus* Bus, float Value, float FadeTime);
	void SaveMixToProfile(class UObject* WorldContextObject, class USoundControlBusMix* Mix, int32 ProfileIndex);
	TArray<struct FSoundControlBusMixStage> LoadMixFromProfile(class UObject* WorldContextObject, class USoundControlBusMix* Mix, bool bActivate, int32 ProfileIndex);
	void DeactivateGenerator(class UObject* WorldContextObject, class USoundModulationGenerator* Generator);
	void DeactivateBusMix(class UObject* WorldContextObject, class USoundControlBusMix* Mix);
	void DeactivateBus(class UObject* WorldContextObject, class USoundControlBus* Bus);
	struct FSoundControlBusMixStage CreateBusMixStage(class UObject* WorldContextObject, class USoundControlBus* Bus, float Value, float AttackTime, float ReleaseTime);
	class USoundControlBusMix* CreateBusMix(class UObject* WorldContextObject, class FName Name, const TArray<struct FSoundControlBusMixStage>& Stages, bool Activate);
	class USoundControlBus* CreateBus(class UObject* WorldContextObject, class FName Name, class USoundModulationParameter* Parameter, bool Activate);
	void ClearGlobalBusMixValue(class UObject* WorldContextObject, class USoundControlBus* Bus, float FadeTime);
	void ClearAllGlobalBusMixValues(class UObject* WorldContextObject, float FadeTime);
	void ActivateGenerator(class UObject* WorldContextObject, class USoundModulationGenerator* Generator);
	void ActivateBusMix(class UObject* WorldContextObject, class USoundControlBusMix* Mix);
	void ActivateBus(class UObject* WorldContextObject, class USoundControlBus* Bus);
};

// 0x0 (0x30 - 0x30)
// Class AudioModulation.SoundModulationGenerator
class USoundModulationGenerator : public USoundModulatorBase
{
public:

	static class UClass* StaticClass();
	static class USoundModulationGenerator* GetDefaultObj();

};

// 0x20 (0x50 - 0x30)
// Class AudioModulation.SoundModulationGeneratorEnvelopeFollower
class USoundModulationGeneratorEnvelopeFollower : public USoundModulationGenerator
{
public:
	struct FEnvelopeFollowerGeneratorParams      Params;                                            // 0x30(0x20)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class USoundModulationGeneratorEnvelopeFollower* GetDefaultObj();

};

// 0x20 (0x50 - 0x30)
// Class AudioModulation.SoundModulationGeneratorLFO
class USoundModulationGeneratorLFO : public USoundModulationGenerator
{
public:
	struct FSoundModulationLFOParams             Params;                                            // 0x30(0x20)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class USoundModulationGeneratorLFO* GetDefaultObj();

};

// 0x30 (0x60 - 0x30)
// Class AudioModulation.SoundControlBus
class USoundControlBus : public USoundModulatorBase
{
public:
	bool                                         bBypass;                                           // 0x30(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_9A4[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Address;                                           // 0x38(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class USoundModulationGenerator*>     Generators;                                        // 0x48(0x10)(Edit, BlueprintVisible, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	class USoundModulationParameter*             Parameter;                                         // 0x58(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class USoundControlBus* GetDefaultObj();

};

// 0x18 (0x40 - 0x28)
// Class AudioModulation.SoundControlBusMix
class USoundControlBusMix : public UObject
{
public:
	uint32                                       ProfileIndex;                                      // 0x28(0x4)(Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_9A8[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FSoundControlBusMixStage>      MixStages;                                         // 0x30(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class USoundControlBusMix* GetDefaultObj();

	void SoloMix();
	void SaveMixToProfile();
	void LoadMixFromProfile();
	void DeactivateMix();
	void DeactivateAllMixes();
	void ActivateMix();
};

// 0x10 (0x38 - 0x28)
// Class AudioModulation.SoundModulationParameter
class USoundModulationParameter : public UObject
{
public:
	uint8                                        Pad_9AA[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSoundModulationParameterSettings     Settings;                                          // 0x30(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_9AB[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USoundModulationParameter* GetDefaultObj();

};

// 0x8 (0x40 - 0x38)
// Class AudioModulation.SoundModulationParameterScaled
class USoundModulationParameterScaled : public USoundModulationParameter
{
public:
	float                                        UnitMin;                                           // 0x38(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        UnitMax;                                           // 0x3C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class USoundModulationParameterScaled* GetDefaultObj();

};

// 0x0 (0x38 - 0x38)
// Class AudioModulation.SoundModulationParameterFrequencyBase
class USoundModulationParameterFrequencyBase : public USoundModulationParameter
{
public:

	static class UClass* StaticClass();
	static class USoundModulationParameterFrequencyBase* GetDefaultObj();

};

// 0x8 (0x40 - 0x38)
// Class AudioModulation.SoundModulationParameterFrequency
class USoundModulationParameterFrequency : public USoundModulationParameterFrequencyBase
{
public:
	float                                        UnitMin;                                           // 0x38(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        UnitMax;                                           // 0x3C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class USoundModulationParameterFrequency* GetDefaultObj();

};

// 0x0 (0x38 - 0x38)
// Class AudioModulation.SoundModulationParameterFilterFrequency
class USoundModulationParameterFilterFrequency : public USoundModulationParameterFrequencyBase
{
public:

	static class UClass* StaticClass();
	static class USoundModulationParameterFilterFrequency* GetDefaultObj();

};

// 0x0 (0x38 - 0x38)
// Class AudioModulation.SoundModulationParameterLPFFrequency
class USoundModulationParameterLPFFrequency : public USoundModulationParameterFilterFrequency
{
public:

	static class UClass* StaticClass();
	static class USoundModulationParameterLPFFrequency* GetDefaultObj();

};

// 0x0 (0x38 - 0x38)
// Class AudioModulation.SoundModulationParameterHPFFrequency
class USoundModulationParameterHPFFrequency : public USoundModulationParameterFilterFrequency
{
public:

	static class UClass* StaticClass();
	static class USoundModulationParameterHPFFrequency* GetDefaultObj();

};

// 0x8 (0x40 - 0x38)
// Class AudioModulation.SoundModulationParameterBipolar
class USoundModulationParameterBipolar : public USoundModulationParameter
{
public:
	float                                        UnitRange;                                         // 0x38(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_9B8[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USoundModulationParameterBipolar* GetDefaultObj();

};

// 0x8 (0x40 - 0x38)
// Class AudioModulation.SoundModulationParameterVolume
class USoundModulationParameterVolume : public USoundModulationParameter
{
public:
	float                                        MinVolume;                                         // 0x38(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_9B9[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USoundModulationParameterVolume* GetDefaultObj();

};

// 0x20 (0x50 - 0x30)
// Class AudioModulation.SoundModulationPatch
class USoundModulationPatch : public USoundModulatorBase
{
public:
	struct FSoundControlModulationPatch          PatchSettings;                                     // 0x30(0x20)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class USoundModulationPatch* GetDefaultObj();

};

}


