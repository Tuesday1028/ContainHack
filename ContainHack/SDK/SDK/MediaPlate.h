
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: MediaAssets

/// Class /Script/MediaPlate.MediaPlateAssetUserData
/// Size: 0x0010 (0x000028 - 0x000038)
class UMediaPlateAssetUserData : public UAssetUserData
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0028   (0x0010)  MISSED
};

/// Class /Script/MediaPlate.MediaPlate
/// Size: 0x0010 (0x000290 - 0x0002A0)
class AMediaPlate : public AActor
{ 
public:
	class UMediaPlateComponent*                        MediaPlateComponent;                                        // 0x0290   (0x0008)  
	class UStaticMeshComponent*                        StaticMeshComponent;                                        // 0x0298   (0x0008)  
};

/// Class /Script/MediaPlate.MediaPlateComponent
/// Size: 0x00A8 (0x0000A0 - 0x000148)
class UMediaPlateComponent : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x00A0   (0x0008)  MISSED
	bool                                               bPlayOnOpen;                                                // 0x00A8   (0x0001)  
	bool                                               bAutoPlay;                                                  // 0x00A9   (0x0001)  
	bool                                               bEnableAudio;                                               // 0x00AA   (0x0001)  
	unsigned char                                      UnknownData01_5[0x1];                                       // 0x00AB   (0x0001)  MISSED
	float                                              StartTime;                                                  // 0x00AC   (0x0004)  
	bool                                               bIsAspectRatioAuto;                                         // 0x00B0   (0x0001)  
	unsigned char                                      UnknownData02_5[0x7];                                       // 0x00B1   (0x0007)  MISSED
	class UMediaSoundComponent*                        SoundComponent;                                             // 0x00B8   (0x0008)  
	class UStaticMeshComponent*                        StaticMeshComponent;                                        // 0x00C0   (0x0008)  
	TArray<class UStaticMeshComponent*>                Letterboxes;                                                // 0x00C8   (0x0010)  
	class UMediaPlaylist*                              MediaPlaylist;                                              // 0x00D8   (0x0008)  
	int32_t                                            PlaylistIndex;                                              // 0x00E0   (0x0004)  
	FMediaSourceCacheSettings                          CacheSettings;                                              // 0x00E4   (0x0008)  
	bool                                               bIsMediaPlatePlaying;                                       // 0x00EC   (0x0001)  
	unsigned char                                      UnknownData03_5[0x7];                                       // 0x00ED   (0x0007)  MISSED
	bool                                               bPlayOnlyWhenVisible;                                       // 0x00F4   (0x0001)  
	bool                                               bLoop;                                                      // 0x00F5   (0x0001)  
	EMediaTextureVisibleMipsTiles                      VisibleMipsTilesCalculations;                               // 0x00F6   (0x0001)  
	unsigned char                                      UnknownData04_5[0x1];                                       // 0x00F7   (0x0001)  MISSED
	float                                              MipMapBias;                                                 // 0x00F8   (0x0004)  
	float                                              LetterboxAspectRatio;                                       // 0x00FC   (0x0004)  
	FVector2D                                          MeshRange;                                                  // 0x0100   (0x0010)  
	class UMediaTexture*                               MediaTexture;                                               // 0x0110   (0x0008)  
	class UMediaPlayer*                                MediaPlayer;                                                // 0x0118   (0x0008)  
	unsigned char                                      UnknownData05_6[0x28];                                      // 0x0120   (0x0028)  MISSED


	/// Functions
	// Function /Script/MediaPlate.MediaPlateComponent.SetPlayOnlyWhenVisible
	// void SetPlayOnlyWhenVisible(bool bInPlayOnlyWhenVisible);                                                             // [0x1d86fd0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MediaPlate.MediaPlateComponent.SetMeshRange
	// void SetMeshRange(FVector2D InMeshRange);                                                                             // [0x1d86f40] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/MediaPlate.MediaPlateComponent.SetLoop
	// void SetLoop(bool bInLoop);                                                                                           // [0x1d86ea0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MediaPlate.MediaPlateComponent.SetLetterboxAspectRatio
	// void SetLetterboxAspectRatio(float AspectRatio);                                                                      // [0x1d86d80] Final|Native|Public|BlueprintCallable 
	// Function /Script/MediaPlate.MediaPlateComponent.Seek
	// bool Seek(FTimespan& Time);                                                                                           // [0x1d86cd0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/MediaPlate.MediaPlateComponent.Rewind
	// bool Rewind();                                                                                                        // [0x1d86c80] Final|Native|Public|BlueprintCallable 
	// Function /Script/MediaPlate.MediaPlateComponent.Play
	// void Play();                                                                                                          // [0x1d86c40] Final|Native|Public|BlueprintCallable 
	// Function /Script/MediaPlate.MediaPlateComponent.Pause
	// void Pause();                                                                                                         // [0x1d86c00] Final|Native|Public|BlueprintCallable 
	// Function /Script/MediaPlate.MediaPlateComponent.Open
	// void Open();                                                                                                          // [0x1d86be0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MediaPlate.MediaPlateComponent.OnMediaOpened
	// void OnMediaOpened(FString DeviceUrl);                                                                                // [0x1d86ac0] Final|Native|Private 
	// Function /Script/MediaPlate.MediaPlateComponent.OnMediaEnd
	// void OnMediaEnd();                                                                                                    // [0x1d86a50] Final|Native|Private 
	// Function /Script/MediaPlate.MediaPlateComponent.IsMediaPlatePlaying
	// bool IsMediaPlatePlaying();                                                                                           // [0x1d86a30] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaPlate.MediaPlateComponent.GetMeshRange
	// FVector2D GetMeshRange();                                                                                             // [0x1d86a00] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaPlate.MediaPlateComponent.GetMediaTexture
	// class UMediaTexture* GetMediaTexture();                                                                               // [0x1d869e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MediaPlate.MediaPlateComponent.GetMediaPlayer
	// class UMediaPlayer* GetMediaPlayer();                                                                                 // [0x1985da0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MediaPlate.MediaPlateComponent.GetLoop
	// bool GetLoop();                                                                                                       // [0x1d869c0] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/MediaPlate.MediaPlateComponent.GetLetterboxAspectRatio
	// float GetLetterboxAspectRatio();                                                                                      // [0x1d869a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MediaPlate.MediaPlateComponent.Close
	// void Close();                                                                                                         // [0x1d86940] Final|Native|Public|BlueprintCallable 
};

