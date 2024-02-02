
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: DeveloperSettings
/// dependency: Engine

/// Enum /Script/CinematicCamera.ECameraFocusMethod
/// Size: 0x05
enum class ECameraFocusMethod : uint8_t
{
	ECameraFocusMethod__DoNotOverride                                                = 0,
	ECameraFocusMethod__Manual                                                       = 1,
	ECameraFocusMethod__Tracking                                                     = 2,
	ECameraFocusMethod__Disable                                                      = 3,
	ECameraFocusMethod__MAX                                                          = 4
};

/// Struct /Script/CinematicCamera.CameraLensSettings
/// Size: 0x001C (0x000000 - 0x00001C)
struct FCameraLensSettings
{ 
	float                                              MinFocalLength;                                             // 0x0000   (0x0004)  
	float                                              MaxFocalLength;                                             // 0x0004   (0x0004)  
	float                                              MinFStop;                                                   // 0x0008   (0x0004)  
	float                                              MaxFStop;                                                   // 0x000C   (0x0004)  
	float                                              MinimumFocusDistance;                                       // 0x0010   (0x0004)  
	float                                              SqueezeFactor;                                              // 0x0014   (0x0004)  
	int32_t                                            DiaphragmBladeCount;                                        // 0x0018   (0x0004)  
};

/// Struct /Script/CinematicCamera.NamedLensPreset
/// Size: 0x0030 (0x000000 - 0x000030)
struct FNamedLensPreset
{ 
	SDK_UNDEFINED(16,1174) /* FString */               __um(Name);                                                 // 0x0000   (0x0010)  
	FCameraLensSettings                                LensSettings;                                               // 0x0010   (0x001C)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x002C   (0x0004)  MISSED
};

/// Struct /Script/CinematicCamera.CameraFilmbackSettings
/// Size: 0x000C (0x000000 - 0x00000C)
struct FCameraFilmbackSettings
{ 
	float                                              SensorWidth;                                                // 0x0000   (0x0004)  
	float                                              SensorHeight;                                               // 0x0004   (0x0004)  
	float                                              SensorAspectRatio;                                          // 0x0008   (0x0004)  
};

/// Struct /Script/CinematicCamera.NamedFilmbackPreset
/// Size: 0x0020 (0x000000 - 0x000020)
struct FNamedFilmbackPreset
{ 
	SDK_UNDEFINED(16,1175) /* FString */               __um(Name);                                                 // 0x0000   (0x0010)  
	FCameraFilmbackSettings                            FilmbackSettings;                                           // 0x0010   (0x000C)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x001C   (0x0004)  MISSED
};

/// Struct /Script/CinematicCamera.PlateCropSettings
/// Size: 0x0004 (0x000000 - 0x000004)
struct FPlateCropSettings
{ 
	float                                              AspectRatio;                                                // 0x0000   (0x0004)  
};

/// Struct /Script/CinematicCamera.NamedPlateCropPreset
/// Size: 0x0018 (0x000000 - 0x000018)
struct FNamedPlateCropPreset
{ 
	SDK_UNDEFINED(16,1176) /* FString */               __um(Name);                                                 // 0x0000   (0x0010)  
	FPlateCropSettings                                 CropSettings;                                               // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0014   (0x0004)  MISSED
};

/// Class /Script/CinematicCamera.CineCameraSettings
/// Size: 0x0078 (0x000038 - 0x0000B0)
class UCineCameraSettings : public UDeveloperSettings
{ 
public:
	SDK_UNDEFINED(16,1177) /* FString */               __um(DefaultLensPresetName);                                // 0x0038   (0x0010)  
	float                                              DefaultLensFocalLength;                                     // 0x0048   (0x0004)  
	float                                              DefaultLensFStop;                                           // 0x004C   (0x0004)  
	TArray<FNamedLensPreset>                           LensPresets;                                                // 0x0050   (0x0010)  
	SDK_UNDEFINED(16,1178) /* FString */               __um(DefaultFilmbackPreset);                                // 0x0060   (0x0010)  
	TArray<FNamedFilmbackPreset>                       FilmbackPresets;                                            // 0x0070   (0x0010)  
	SDK_UNDEFINED(16,1179) /* FString */               __um(DefaultCropPresetName);                                // 0x0080   (0x0010)  
	TArray<FNamedPlateCropPreset>                      CropPresets;                                                // 0x0090   (0x0010)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x00A0   (0x0010)  MISSED


	/// Functions
	// Function /Script/CinematicCamera.CineCameraSettings.SetLensPresets
	// void SetLensPresets(TArray<FNamedLensPreset>& InLensPresets);                                                         // [0x376e5a0] Final|Native|Private|HasOutParms|BlueprintCallable 
	// Function /Script/CinematicCamera.CineCameraSettings.SetFilmbackPresets
	// void SetFilmbackPresets(TArray<FNamedFilmbackPreset>& InFilmbackPresets);                                             // [0x376e240] Final|Native|Private|HasOutParms|BlueprintCallable 
	// Function /Script/CinematicCamera.CineCameraSettings.SetDefaultLensPresetName
	// void SetDefaultLensPresetName(FString InDefaultLensPresetName);                                                       // [0x376dfb0] Final|Native|Private|BlueprintCallable 
	// Function /Script/CinematicCamera.CineCameraSettings.SetDefaultLensFStop
	// void SetDefaultLensFStop(float InDefaultLensFStop);                                                                   // [0x376de70] Final|Native|Private|BlueprintCallable 
	// Function /Script/CinematicCamera.CineCameraSettings.SetDefaultLensFocalLength
	// void SetDefaultLensFocalLength(float InDefaultLensFocalLength);                                                       // [0x376df10] Final|Native|Private|BlueprintCallable 
	// Function /Script/CinematicCamera.CineCameraSettings.SetDefaultFilmbackPreset
	// void SetDefaultFilmbackPreset(FString InDefaultFilmbackPreset);                                                       // [0x376dd60] Final|Native|Private|BlueprintCallable 
	// Function /Script/CinematicCamera.CineCameraSettings.SetDefaultCropPresetName
	// void SetDefaultCropPresetName(FString InDefaultCropPresetName);                                                       // [0x376dc40] Final|Native|Private|BlueprintCallable 
	// Function /Script/CinematicCamera.CineCameraSettings.SetCropPresets
	// void SetCropPresets(TArray<FNamedPlateCropPreset>& InCropPresets);                                                    // [0x376d8d0] Final|Native|Private|HasOutParms|BlueprintCallable 
	// Function /Script/CinematicCamera.CineCameraSettings.GetLensPresetNames
	// TArray<FString> GetLensPresetNames();                                                                                 // [0x376d490] Final|Native|Private|Const 
	// Function /Script/CinematicCamera.CineCameraSettings.GetLensPresetByName
	// bool GetLensPresetByName(FString PresetName, FCameraLensSettings& LensSettings);                                      // [0x376d0c0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CinematicCamera.CineCameraSettings.GetFilmbackPresetNames
	// TArray<FString> GetFilmbackPresetNames();                                                                             // [0x376cdd0] Final|Native|Private|Const 
	// Function /Script/CinematicCamera.CineCameraSettings.GetFilmbackPresetByName
	// bool GetFilmbackPresetByName(FString PresetName, FCameraFilmbackSettings& FilmbackSettings);                          // [0x376ca80] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CinematicCamera.CineCameraSettings.GetCropPresetNames
	// TArray<FString> GetCropPresetNames();                                                                                 // [0x376c830] Final|Native|Private|Const 
	// Function /Script/CinematicCamera.CineCameraSettings.GetCropPresetByName
	// bool GetCropPresetByName(FString PresetName, FPlateCropSettings& CropSettings);                                       // [0x376c520] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CinematicCamera.CineCameraSettings.GetCineCameraSettings
	// class UCineCameraSettings* GetCineCameraSettings();                                                                   // [0x376c4c0] Final|Native|Static|Private|BlueprintCallable 
};

/// Class /Script/CinematicCamera.CameraRig_Crane
/// Size: 0x0030 (0x000290 - 0x0002C0)
class ACameraRig_Crane : public AActor
{ 
public:
	float                                              CranePitch;                                                 // 0x0290   (0x0004)  
	float                                              CraneYaw;                                                   // 0x0294   (0x0004)  
	float                                              CraneArmLength;                                             // 0x0298   (0x0004)  
	bool                                               bLockMountPitch;                                            // 0x029C   (0x0001)  
	bool                                               bLockMountYaw;                                              // 0x029D   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x029E   (0x0002)  MISSED
	class USceneComponent*                             TransformComponent;                                         // 0x02A0   (0x0008)  
	class USceneComponent*                             CraneYawControl;                                            // 0x02A8   (0x0008)  
	class USceneComponent*                             CranePitchControl;                                          // 0x02B0   (0x0008)  
	class USceneComponent*                             CraneCameraMount;                                           // 0x02B8   (0x0008)  
};

/// Class /Script/CinematicCamera.CameraRig_Rail
/// Size: 0x0020 (0x000290 - 0x0002B0)
class ACameraRig_Rail : public AActor
{ 
public:
	float                                              CurrentPositionOnRail;                                      // 0x0290   (0x0004)  
	bool                                               bLockOrientationToRail;                                     // 0x0294   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0295   (0x0003)  MISSED
	class USceneComponent*                             TransformComponent;                                         // 0x0298   (0x0008)  
	class USplineComponent*                            RailSplineComponent;                                        // 0x02A0   (0x0008)  
	class USceneComponent*                             RailCameraMount;                                            // 0x02A8   (0x0008)  


	/// Functions
	// Function /Script/CinematicCamera.CameraRig_Rail.GetRailSplineComponent
	// class USplineComponent* GetRailSplineComponent();                                                                     // [0x376d760] Final|Native|Public|BlueprintCallable|BlueprintPure 
};

/// Struct /Script/CinematicCamera.CameraLookatTrackingSettings
/// Size: 0x0070 (0x000000 - 0x000070)
struct FCameraLookatTrackingSettings
{ 
	bool                                               bEnableLookAtTracking : 1;                                  // 0x0000:0 (0x0001)  
	bool                                               bDrawDebugLookAtTrackingPosition : 1;                       // 0x0000:1 (0x0001)  
	unsigned char                                      UnknownData00_4[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              LookAtTrackingInterpSpeed;                                  // 0x0004   (0x0004)  
	unsigned char                                      UnknownData01_5[0x18];                                      // 0x0008   (0x0018)  MISSED
	SDK_UNDEFINED(48,1180) /* TWeakObjectPtr<AActor*> */ __um(ActorToTrack);                                       // 0x0020   (0x0030)  
	FVector                                            RelativeOffset;                                             // 0x0050   (0x0018)  
	bool                                               bAllowRoll : 1;                                             // 0x0068:0 (0x0001)  
	unsigned char                                      UnknownData02_6[0x7];                                       // 0x0069   (0x0007)  MISSED
};

/// Class /Script/CinematicCamera.CineCameraActor
/// Size: 0x0080 (0x0009A0 - 0x000A20)
class ACineCameraActor : public ACameraActor
{ 
public:
	FCameraLookatTrackingSettings                      LookatTrackingSettings;                                     // 0x09A0   (0x0070)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x0A10   (0x0010)  MISSED


	/// Functions
	// Function /Script/CinematicCamera.CineCameraActor.GetCineCameraComponent
	// class UCineCameraComponent* GetCineCameraComponent();                                                                 // [0x376c4a0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Struct /Script/CinematicCamera.CameraTrackingFocusSettings
/// Size: 0x0050 (0x000000 - 0x000050)
struct FCameraTrackingFocusSettings
{ 
	SDK_UNDEFINED(48,1181) /* TWeakObjectPtr<AActor*> */ __um(ActorToTrack);                                       // 0x0000   (0x0030)  
	FVector                                            RelativeOffset;                                             // 0x0030   (0x0018)  
	bool                                               bDrawDebugTrackingFocusPoint : 1;                           // 0x0048:0 (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0049   (0x0007)  MISSED
};

/// Struct /Script/CinematicCamera.CameraFocusSettings
/// Size: 0x0068 (0x000000 - 0x000068)
struct FCameraFocusSettings
{ 
	ECameraFocusMethod                                 FocusMethod;                                                // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              ManualFocusDistance;                                        // 0x0004   (0x0004)  
	FCameraTrackingFocusSettings                       TrackingFocusSettings;                                      // 0x0008   (0x0050)  
	bool                                               bSmoothFocusChanges : 1;                                    // 0x0058:0 (0x0001)  
	unsigned char                                      UnknownData01_4[0x3];                                       // 0x0059   (0x0003)  MISSED
	float                                              FocusSmoothingInterpSpeed;                                  // 0x005C   (0x0004)  
	float                                              FocusOffset;                                                // 0x0060   (0x0004)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x0064   (0x0004)  MISSED
};

/// Class /Script/CinematicCamera.CineCameraComponent
/// Size: 0x0120 (0x000A30 - 0x000B50)
class UCineCameraComponent : public UCameraComponent
{ 
public:
	FCameraFilmbackSettings                            FilmbackSettings;                                           // 0x0A30   (0x000C)  
	FCameraFilmbackSettings                            Filmback;                                                   // 0x0A3C   (0x000C)  
	FCameraLensSettings                                LensSettings;                                               // 0x0A48   (0x001C)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0A64   (0x0004)  MISSED
	FCameraFocusSettings                               FocusSettings;                                              // 0x0A68   (0x0068)  
	FPlateCropSettings                                 CropSettings;                                               // 0x0AD0   (0x0004)  
	float                                              CurrentFocalLength;                                         // 0x0AD4   (0x0004)  
	float                                              CurrentAperture;                                            // 0x0AD8   (0x0004)  
	float                                              CurrentFocusDistance;                                       // 0x0ADC   (0x0004)  
	bool                                               bOverride_CustomNearClippingPlane : 1;                      // 0x0AE0:0 (0x0001)  
	unsigned char                                      UnknownData01_4[0x3];                                       // 0x0AE1   (0x0003)  MISSED
	float                                              CustomNearClippingPlane;                                    // 0x0AE4   (0x0004)  
	unsigned char                                      UnknownData02_5[0x8];                                       // 0x0AE8   (0x0008)  MISSED
	TArray<FNamedFilmbackPreset>                       FilmbackPresets;                                            // 0x0AF0   (0x0010)  
	TArray<FNamedLensPreset>                           LensPresets;                                                // 0x0B00   (0x0010)  
	SDK_UNDEFINED(16,1182) /* FString */               __um(DefaultFilmbackPresetName);                            // 0x0B10   (0x0010)  
	SDK_UNDEFINED(16,1183) /* FString */               __um(DefaultFilmbackPreset);                                // 0x0B20   (0x0010)  
	SDK_UNDEFINED(16,1184) /* FString */               __um(DefaultLensPresetName);                                // 0x0B30   (0x0010)  
	float                                              DefaultLensFocalLength;                                     // 0x0B40   (0x0004)  
	float                                              DefaultLensFStop;                                           // 0x0B44   (0x0004)  
	unsigned char                                      UnknownData03_6[0x8];                                       // 0x0B48   (0x0008)  MISSED


	/// Functions
	// Function /Script/CinematicCamera.CineCameraComponent.SetLensSettings
	// void SetLensSettings(FCameraLensSettings& NewLensSettings);                                                           // [0x376e6e0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CinematicCamera.CineCameraComponent.SetLensPresetByName
	// void SetLensPresetByName(FString InPresetName);                                                                       // [0x376e4f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CinematicCamera.CineCameraComponent.SetFocusSettings
	// void SetFocusSettings(FCameraFocusSettings& NewFocusSettings);                                                        // [0x376e3c0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CinematicCamera.CineCameraComponent.SetFilmbackPresetByName
	// void SetFilmbackPresetByName(FString InPresetName);                                                                   // [0x376e190] Final|Native|Public|BlueprintCallable 
	// Function /Script/CinematicCamera.CineCameraComponent.SetFilmback
	// void SetFilmback(FCameraFilmbackSettings& NewFilmback);                                                               // [0x376e0c0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CinematicCamera.CineCameraComponent.SetCurrentFocalLength
	// void SetCurrentFocalLength(float InFocalLength);                                                                      // [0x376dbb0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CinematicCamera.CineCameraComponent.SetCurrentAperture
	// void SetCurrentAperture(float NewCurrentAperture);                                                                    // [0x376db20] Final|Native|Public|BlueprintCallable 
	// Function /Script/CinematicCamera.CineCameraComponent.SetCropSettings
	// void SetCropSettings(FPlateCropSettings& NewCropSettings);                                                            // [0x376da70] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CinematicCamera.CineCameraComponent.SetCropPresetByName
	// void SetCropPresetByName(FString InPresetName);                                                                       // [0x376d820] Final|Native|Public|BlueprintCallable 
	// Function /Script/CinematicCamera.CineCameraComponent.GetVerticalFieldOfView
	// float GetVerticalFieldOfView();                                                                                       // [0x376d780] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CinematicCamera.CineCameraComponent.GetLensPresetsCopy
	// TArray<FNamedLensPreset> GetLensPresetsCopy();                                                                        // [0x376d5e0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/CinematicCamera.CineCameraComponent.GetLensPresetName
	// FString GetLensPresetName();                                                                                          // [0x376d310] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CinematicCamera.CineCameraComponent.GetHorizontalFieldOfView
	// float GetHorizontalFieldOfView();                                                                                     // [0x376d090] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CinematicCamera.CineCameraComponent.GetFilmbackPresetsCopy
	// TArray<FNamedFilmbackPreset> GetFilmbackPresetsCopy();                                                                // [0x376cf20] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/CinematicCamera.CineCameraComponent.GetFilmbackPresetName
	// FString GetFilmbackPresetName();                                                                                      // [0x376cca0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CinematicCamera.CineCameraComponent.GetDefaultFilmbackPresetName
	// FString GetDefaultFilmbackPresetName();                                                                               // [0x376c980] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CinematicCamera.CineCameraComponent.GetCropPresetName
	// FString GetCropPresetName();                                                                                          // [0x376c700] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

