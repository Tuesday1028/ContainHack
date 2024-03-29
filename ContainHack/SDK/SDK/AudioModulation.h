
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: AudioExtensions
/// dependency: CoreUObject
/// dependency: DeveloperSettings
/// dependency: Engine
/// dependency: WaveTable

/// Enum /Script/AudioModulation.ESoundModulationLFOShape
/// Size: 0x09
enum class ESoundModulationLFOShape : uint8_t
{
	ESoundModulationLFOShape__Sine                                                   = 0,
	ESoundModulationLFOShape__UpSaw                                                  = 1,
	ESoundModulationLFOShape__DownSaw                                                = 2,
	ESoundModulationLFOShape__Square                                                 = 3,
	ESoundModulationLFOShape__Triangle                                               = 4,
	ESoundModulationLFOShape__Exponential                                            = 5,
	ESoundModulationLFOShape__RandomSampleHold                                       = 6,
	ESoundModulationLFOShape__COUNT                                                  = 7,
	ESoundModulationLFOShape__ESoundModulationLFOShape_MAX                           = 8
};

/// Class /Script/AudioModulation.AudioModulationStyle
/// Size: 0x0000 (0x000028 - 0x000028)
class UAudioModulationStyle : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/AudioModulation.AudioModulationStyle.GetPatchColor
	// FColor GetPatchColor();                                                                                               // [0x158f920] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/AudioModulation.AudioModulationStyle.GetParameterColor
	// FColor GetParameterColor();                                                                                           // [0x158f8f0] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/AudioModulation.AudioModulationStyle.GetModulationGeneratorColor
	// FColor GetModulationGeneratorColor();                                                                                 // [0x158f8c0] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/AudioModulation.AudioModulationStyle.GetControlBusMixColor
	// FColor GetControlBusMixColor();                                                                                       // [0x158f890] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/AudioModulation.AudioModulationStyle.GetControlBusColor
	// FColor GetControlBusColor();                                                                                          // [0x158f860] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
};

/// Class /Script/AudioModulation.AudioModulationSettings
/// Size: 0x0010 (0x000038 - 0x000048)
class UAudioModulationSettings : public UDeveloperSettings
{ 
public:
	TArray<FSoftObjectPath>                            Parameters;                                                 // 0x0038   (0x0010)  
};

/// Class /Script/AudioModulation.AudioModulationStatics
/// Size: 0x0000 (0x000028 - 0x000028)
class UAudioModulationStatics : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/AudioModulation.AudioModulationStatics.UpdateModulator
	// void UpdateModulator(class UObject* WorldContextObject, class USoundModulatorBase* Modulator);                        // [0x1590a70] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AudioModulation.AudioModulationStatics.UpdateMixFromObject
	// void UpdateMixFromObject(class UObject* WorldContextObject, class USoundControlBusMix* Mix, float FadeTime);          // [0x1590880] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AudioModulation.AudioModulationStatics.UpdateMixByFilter
	// void UpdateMixByFilter(class UObject* WorldContextObject, class USoundControlBusMix* Mix, FString AddressFilter, class UClass* ParamClassFilter, class USoundModulationParameter* ParamFilter, float Value, float FadeTime); // [0x1590510] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AudioModulation.AudioModulationStatics.UpdateMix
	// void UpdateMix(class UObject* WorldContextObject, class USoundControlBusMix* Mix, TArray<FSoundControlBusMixStage> Stages, float FadeTime); // [0x1590270] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AudioModulation.AudioModulationStatics.SetGlobalBusMixValue
	// void SetGlobalBusMixValue(class UObject* WorldContextObject, class USoundControlBus* Bus, float Value, float FadeTime); // [0x158ffa0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AudioModulation.AudioModulationStatics.SaveMixToProfile
	// void SaveMixToProfile(class UObject* WorldContextObject, class USoundControlBusMix* Mix, int32_t ProfileIndex);       // [0x158fe80] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AudioModulation.AudioModulationStatics.LoadMixFromProfile
	// TArray<FSoundControlBusMixStage> LoadMixFromProfile(class UObject* WorldContextObject, class USoundControlBusMix* Mix, bool bActivate, int32_t ProfileIndex); // [0x158f950] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AudioModulation.AudioModulationStatics.DeactivateGenerator
	// void DeactivateGenerator(class UObject* WorldContextObject, class USoundModulationGenerator* Generator);              // [0x158f5f0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AudioModulation.AudioModulationStatics.DeactivateBusMix
	// void DeactivateBusMix(class UObject* WorldContextObject, class USoundControlBusMix* Mix);                             // [0x158f410] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AudioModulation.AudioModulationStatics.DeactivateBus
	// void DeactivateBus(class UObject* WorldContextObject, class USoundControlBus* Bus);                                   // [0x158f270] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AudioModulation.AudioModulationStatics.CreateBusMixStage
	// FSoundControlBusMixStage CreateBusMixStage(class UObject* WorldContextObject, class USoundControlBus* Bus, float Value, float AttackTime, float ReleaseTime); // [0x158eff0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AudioModulation.AudioModulationStatics.CreateBusMix
	// class USoundControlBusMix* CreateBusMix(class UObject* WorldContextObject, FName Name, TArray<FSoundControlBusMixStage> Stages, bool Activate); // [0x158ee50] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AudioModulation.AudioModulationStatics.CreateBus
	// class USoundControlBus* CreateBus(class UObject* WorldContextObject, FName Name, class USoundModulationParameter* Parameter, bool Activate); // [0x158ed00] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AudioModulation.AudioModulationStatics.ClearGlobalBusMixValue
	// void ClearGlobalBusMixValue(class UObject* WorldContextObject, class USoundControlBus* Bus, float FadeTime);          // [0x158eb10] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AudioModulation.AudioModulationStatics.ClearAllGlobalBusMixValues
	// void ClearAllGlobalBusMixValues(class UObject* WorldContextObject, float FadeTime);                                   // [0x158e950] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AudioModulation.AudioModulationStatics.ActivateGenerator
	// void ActivateGenerator(class UObject* WorldContextObject, class USoundModulationGenerator* Generator);                // [0x158e870] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AudioModulation.AudioModulationStatics.ActivateBusMix
	// void ActivateBusMix(class UObject* WorldContextObject, class USoundControlBusMix* Mix);                               // [0x158e6a0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AudioModulation.AudioModulationStatics.ActivateBus
	// void ActivateBus(class UObject* WorldContextObject, class USoundControlBus* Bus);                                     // [0x158e500] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/AudioModulation.SoundModulationGenerator
/// Size: 0x0000 (0x000030 - 0x000030)
class USoundModulationGenerator : public USoundModulatorBase
{ 
public:
};

/// Struct /Script/AudioModulation.EnvelopeFollowerGeneratorParams
/// Size: 0x0020 (0x000000 - 0x000020)
struct FEnvelopeFollowerGeneratorParams
{ 
	bool                                               bBypass;                                                    // 0x0000   (0x0001)  
	bool                                               bInvert;                                                    // 0x0001   (0x0001)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x0002   (0x0006)  MISSED
	class UAudioBus*                                   AudioBus;                                                   // 0x0008   (0x0008)  
	float                                              Gain;                                                       // 0x0010   (0x0004)  
	float                                              AttackTime;                                                 // 0x0014   (0x0004)  
	float                                              ReleaseTime;                                                // 0x0018   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x001C   (0x0004)  MISSED
};

/// Class /Script/AudioModulation.SoundModulationGeneratorEnvelopeFollower
/// Size: 0x0020 (0x000030 - 0x000050)
class USoundModulationGeneratorEnvelopeFollower : public USoundModulationGenerator
{ 
public:
	FEnvelopeFollowerGeneratorParams                   Params;                                                     // 0x0030   (0x0020)  
};

/// Struct /Script/AudioModulation.SoundModulationLFOParams
/// Size: 0x0020 (0x000000 - 0x000020)
struct FSoundModulationLFOParams
{ 
	ESoundModulationLFOShape                           Shape;                                                      // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              ExponentialFactor;                                          // 0x0004   (0x0004)  
	float                                              Width;                                                      // 0x0008   (0x0004)  
	float                                              Amplitude;                                                  // 0x000C   (0x0004)  
	float                                              Frequency;                                                  // 0x0010   (0x0004)  
	float                                              Offset;                                                     // 0x0014   (0x0004)  
	float                                              Phase;                                                      // 0x0018   (0x0004)  
	bool                                               bLooping;                                                   // 0x001C   (0x0001)  
	bool                                               bBypass;                                                    // 0x001D   (0x0001)  
	unsigned char                                      UnknownData01_6[0x2];                                       // 0x001E   (0x0002)  MISSED
};

/// Class /Script/AudioModulation.SoundModulationGeneratorLFO
/// Size: 0x0020 (0x000030 - 0x000050)
class USoundModulationGeneratorLFO : public USoundModulationGenerator
{ 
public:
	FSoundModulationLFOParams                          Params;                                                     // 0x0030   (0x0020)  
};

/// Class /Script/AudioModulation.SoundControlBus
/// Size: 0x0030 (0x000030 - 0x000060)
class USoundControlBus : public USoundModulatorBase
{ 
public:
	bool                                               bBypass;                                                    // 0x0030   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0031   (0x0007)  MISSED
	SDK_UNDEFINED(16,1942) /* FString */               __um(Address);                                              // 0x0038   (0x0010)  
	TArray<class USoundModulationGenerator*>           Generators;                                                 // 0x0048   (0x0010)  
	class USoundModulationParameter*                   Parameter;                                                  // 0x0058   (0x0008)  
};

/// Struct /Script/AudioModulation.SoundModulationMixValue
/// Size: 0x0020 (0x000000 - 0x000020)
struct FSoundModulationMixValue
{ 
	float                                              TargetValue;                                                // 0x0000   (0x0004)  
	float                                              AttackTime;                                                 // 0x0004   (0x0004)  
	float                                              ReleaseTime;                                                // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x14];                                      // 0x000C   (0x0014)  MISSED
};

/// Struct /Script/AudioModulation.SoundControlBusMixStage
/// Size: 0x0028 (0x000000 - 0x000028)
struct FSoundControlBusMixStage
{ 
	class USoundControlBus*                            Bus;                                                        // 0x0000   (0x0008)  
	FSoundModulationMixValue                           Value;                                                      // 0x0008   (0x0020)  
};

/// Class /Script/AudioModulation.SoundControlBusMix
/// Size: 0x0018 (0x000028 - 0x000040)
class USoundControlBusMix : public UObject
{ 
public:
	uint32_t                                           ProfileIndex;                                               // 0x0028   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x002C   (0x0004)  MISSED
	TArray<FSoundControlBusMixStage>                   MixStages;                                                  // 0x0030   (0x0010)  


	/// Functions
	// Function /Script/AudioModulation.SoundControlBusMix.SoloMix
	// void SoloMix();                                                                                                       // [0x15901d0] Final|Native|Protected 
	// Function /Script/AudioModulation.SoundControlBusMix.SaveMixToProfile
	// void SaveMixToProfile();                                                                                              // [0x158ff80] Final|Native|Protected 
	// Function /Script/AudioModulation.SoundControlBusMix.LoadMixFromProfile
	// void LoadMixFromProfile();                                                                                            // [0x158fe40] Final|Native|Protected 
	// Function /Script/AudioModulation.SoundControlBusMix.DeactivateMix
	// void DeactivateMix();                                                                                                 // [0x158f7c0] Final|Native|Protected 
	// Function /Script/AudioModulation.SoundControlBusMix.DeactivateAllMixes
	// void DeactivateAllMixes();                                                                                            // [0x158f1d0] Final|Native|Protected 
	// Function /Script/AudioModulation.SoundControlBusMix.ActivateMix
	// void ActivateMix();                                                                                                   // [0x158e930] Final|Native|Protected 
};

/// Struct /Script/AudioModulation.SoundModulationParameterSettings
/// Size: 0x0004 (0x000000 - 0x000004)
struct FSoundModulationParameterSettings
{ 
	float                                              ValueNormalized;                                            // 0x0000   (0x0004)  
};

/// Class /Script/AudioModulation.SoundModulationParameter
/// Size: 0x0010 (0x000028 - 0x000038)
class USoundModulationParameter : public UObject
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0028   (0x0008)  MISSED
	FSoundModulationParameterSettings                  Settings;                                                   // 0x0030   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0034   (0x0004)  MISSED
};

/// Class /Script/AudioModulation.SoundModulationParameterScaled
/// Size: 0x0008 (0x000038 - 0x000040)
class USoundModulationParameterScaled : public USoundModulationParameter
{ 
public:
	float                                              UnitMin;                                                    // 0x0038   (0x0004)  
	float                                              UnitMax;                                                    // 0x003C   (0x0004)  
};

/// Class /Script/AudioModulation.SoundModulationParameterFrequencyBase
/// Size: 0x0000 (0x000038 - 0x000038)
class USoundModulationParameterFrequencyBase : public USoundModulationParameter
{ 
public:
};

/// Class /Script/AudioModulation.SoundModulationParameterFrequency
/// Size: 0x0008 (0x000038 - 0x000040)
class USoundModulationParameterFrequency : public USoundModulationParameterFrequencyBase
{ 
public:
	float                                              UnitMin;                                                    // 0x0038   (0x0004)  
	float                                              UnitMax;                                                    // 0x003C   (0x0004)  
};

/// Class /Script/AudioModulation.SoundModulationParameterFilterFrequency
/// Size: 0x0000 (0x000038 - 0x000038)
class USoundModulationParameterFilterFrequency : public USoundModulationParameterFrequencyBase
{ 
public:
};

/// Class /Script/AudioModulation.SoundModulationParameterLPFFrequency
/// Size: 0x0000 (0x000038 - 0x000038)
class USoundModulationParameterLPFFrequency : public USoundModulationParameterFilterFrequency
{ 
public:
};

/// Class /Script/AudioModulation.SoundModulationParameterHPFFrequency
/// Size: 0x0000 (0x000038 - 0x000038)
class USoundModulationParameterHPFFrequency : public USoundModulationParameterFilterFrequency
{ 
public:
};

/// Class /Script/AudioModulation.SoundModulationParameterBipolar
/// Size: 0x0008 (0x000038 - 0x000040)
class USoundModulationParameterBipolar : public USoundModulationParameter
{ 
public:
	float                                              UnitRange;                                                  // 0x0038   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x003C   (0x0004)  MISSED
};

/// Class /Script/AudioModulation.SoundModulationParameterVolume
/// Size: 0x0008 (0x000038 - 0x000040)
class USoundModulationParameterVolume : public USoundModulationParameter
{ 
public:
	float                                              MinVolume;                                                  // 0x0038   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x003C   (0x0004)  MISSED
};

/// Struct /Script/AudioModulation.SoundModulationTransform
/// Size: 0x0000 (0x0000A0 - 0x0000A0)
struct FSoundModulationTransform : FWaveTableTransform
{ 
};

/// Struct /Script/AudioModulation.SoundControlModulationInput
/// Size: 0x00B0 (0x000000 - 0x0000B0)
struct FSoundControlModulationInput
{ 
	bool                                               bSampleAndHold : 1;                                         // 0x0000:0 (0x0001)  
	unsigned char                                      UnknownData00_4[0x7];                                       // 0x0001   (0x0007)  MISSED
	FSoundModulationTransform                          Transform;                                                  // 0x0008   (0x00A0)  
	class USoundControlBus*                            Bus;                                                        // 0x00A8   (0x0008)  
};

/// Struct /Script/AudioModulation.SoundControlModulationPatch
/// Size: 0x0020 (0x000000 - 0x000020)
struct FSoundControlModulationPatch
{ 
	bool                                               bBypass;                                                    // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0001   (0x0007)  MISSED
	class USoundModulationParameter*                   OutputParameter;                                            // 0x0008   (0x0008)  
	TArray<FSoundControlModulationInput>               Inputs;                                                     // 0x0010   (0x0010)  
};

/// Class /Script/AudioModulation.SoundModulationPatch
/// Size: 0x0020 (0x000030 - 0x000050)
class USoundModulationPatch : public USoundModulatorBase
{ 
public:
	FSoundControlModulationPatch                       PatchSettings;                                              // 0x0030   (0x0020)  
};

