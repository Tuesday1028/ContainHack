
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: AudioMixer
/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/AudioCapture.AudioCapture
/// Size: 0x0008 (0x0000A8 - 0x0000B0)
class UAudioCapture : public UAudioGenerator
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x00A8   (0x0008)  MISSED


	/// Functions
	// Function /Script/AudioCapture.AudioCapture.StopCapturingAudio
	// void StopCapturingAudio();                                                                                            // [0x1dde2c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioCapture.AudioCapture.StartCapturingAudio
	// void StartCapturingAudio();                                                                                           // [0x1dde270] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioCapture.AudioCapture.IsCapturingAudio
	// bool IsCapturingAudio();                                                                                              // [0x1dde230] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioCapture.AudioCapture.GetAudioCaptureDeviceInfo
	// bool GetAudioCaptureDeviceInfo(FAudioCaptureDeviceInfo& OutInfo);                                                     // [0x1dde000] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/AudioCapture.AudioCaptureFunctionLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UAudioCaptureFunctionLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/AudioCapture.AudioCaptureFunctionLibrary.CreateAudioCapture
	// class UAudioCapture* CreateAudioCapture();                                                                            // [0x1ddde10] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/AudioCapture.AudioCaptureBlueprintLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UAudioCaptureBlueprintLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/AudioCapture.AudioCaptureBlueprintLibrary.GetAvailableAudioInputDevices
	// void GetAvailableAudioInputDevices(class UObject* WorldContextObject, FDelegateProperty& OnObtainDevicesEvent);       // [0x1dde150] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AudioCapture.AudioCaptureBlueprintLibrary.Conv_AudioInputDeviceInfoToString
	// FString Conv_AudioInputDeviceInfoToString(FAudioInputDeviceInfo& Info);                                               // [0x1dddca0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
};

/// Class /Script/AudioCapture.AudioCaptureComponent
/// Size: 0x00C0 (0x000790 - 0x000850)
class UAudioCaptureComponent : public USynthComponent
{ 
public:
	int32_t                                            JitterLatencyFrames;                                        // 0x0790   (0x0004)  
	unsigned char                                      UnknownData00_6[0xBC];                                      // 0x0794   (0x00BC)  MISSED
};

/// Struct /Script/AudioCapture.AudioInputDeviceInfo
/// Size: 0x0030 (0x000000 - 0x000030)
struct FAudioInputDeviceInfo
{ 
	SDK_UNDEFINED(16,1172) /* FString */               __um(DeviceName);                                           // 0x0000   (0x0010)  
	SDK_UNDEFINED(16,1173) /* FString */               __um(DeviceID);                                             // 0x0010   (0x0010)  
	int32_t                                            InputChannels;                                              // 0x0020   (0x0004)  
	int32_t                                            PreferredSampleRate;                                        // 0x0024   (0x0004)  
	bool                                               bSupportsHardwareAEC : 1;                                   // 0x0028:0 (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0029   (0x0007)  MISSED
};

/// Struct /Script/AudioCapture.AudioCaptureDeviceInfo
/// Size: 0x0010 (0x000000 - 0x000010)
struct FAudioCaptureDeviceInfo
{ 
	FName                                              DeviceName;                                                 // 0x0000   (0x0008)  
	int32_t                                            NumInputChannels;                                           // 0x0008   (0x0004)  
	int32_t                                            SampleRate;                                                 // 0x000C   (0x0004)  
};

