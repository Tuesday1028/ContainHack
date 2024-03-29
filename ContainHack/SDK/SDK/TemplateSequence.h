
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CinematicCamera
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: MovieScene

/// Enum /Script/TemplateSequence.ETemplateSectionPropertyScaleType
/// Size: 0x04
enum class ETemplateSectionPropertyScaleType : uint32_t
{
	ETemplateSectionPropertyScaleType__FloatProperty                                 = 0,
	ETemplateSectionPropertyScaleType__TransformPropertyLocationOnly                 = 1,
	ETemplateSectionPropertyScaleType__TransformPropertyRotationOnly                 = 2,
	ETemplateSectionPropertyScaleType__ETemplateSectionPropertyScaleType_MAX         = 3
};

/// Class /Script/TemplateSequence.TemplateSequence
/// Size: 0x00B8 (0x000068 - 0x000120)
class UTemplateSequence : public UMovieSceneSequence
{ 
public:
	class UMovieScene*                                 MovieScene;                                                 // 0x0068   (0x0008)  
	SDK_UNDEFINED(48,1185) /* TWeakObjectPtr<UClass*> */ __um(BoundActorClass);                                    // 0x0070   (0x0030)  
	SDK_UNDEFINED(48,1186) /* TWeakObjectPtr<AActor*> */ __um(BoundPreviewActor);                                  // 0x00A0   (0x0030)  
	SDK_UNDEFINED(80,1187) /* TMap<FGuid, FName> */    __um(BoundActorComponents);                                 // 0x00D0   (0x0050)  
};

/// Class /Script/TemplateSequence.CameraAnimationSequence
/// Size: 0x0000 (0x000120 - 0x000120)
class UCameraAnimationSequence : public UTemplateSequence
{ 
public:
};

/// Class /Script/TemplateSequence.CameraAnimationSequenceCameraStandIn
/// Size: 0x0818 (0x000028 - 0x000840)
class UCameraAnimationSequenceCameraStandIn : public UObject
{ 
public:
	float                                              FieldOfView;                                                // 0x0028   (0x0004)  
	bool                                               bConstrainAspectRatio : 1;                                  // 0x002C:0 (0x0001)  
	unsigned char                                      UnknownData00_4[0x3];                                       // 0x002D   (0x0003)  MISSED
	float                                              AspectRatio;                                                // 0x0030   (0x0004)  
	unsigned char                                      UnknownData01_5[0xC];                                       // 0x0034   (0x000C)  MISSED
	FPostProcessSettings                               PostProcessSettings;                                        // 0x0040   (0x06E0)  
	float                                              PostProcessBlendWeight;                                     // 0x0720   (0x0004)  
	FCameraFilmbackSettings                            Filmback;                                                   // 0x0724   (0x000C)  
	FCameraLensSettings                                LensSettings;                                               // 0x0730   (0x001C)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x074C   (0x0004)  MISSED
	FCameraFocusSettings                               FocusSettings;                                              // 0x0750   (0x0068)  
	float                                              CurrentFocalLength;                                         // 0x07B8   (0x0004)  
	float                                              CurrentAperture;                                            // 0x07BC   (0x0004)  
	float                                              CurrentFocusDistance;                                       // 0x07C0   (0x0004)  
	unsigned char                                      UnknownData03_6[0x7C];                                      // 0x07C4   (0x007C)  MISSED
};

/// Class /Script/TemplateSequence.CameraAnimationSequencePlayer
/// Size: 0x0358 (0x000028 - 0x000380)
class UCameraAnimationSequencePlayer : public UObject
{ 
public:
	unsigned char                                      UnknownData00_2[0x260];                                     // 0x0028   (0x0260)  MISSED
	class UObject*                                     BoundObjectOverride;                                        // 0x0288   (0x0008)  
	class UMovieSceneSequence*                         Sequence;                                                   // 0x0290   (0x0008)  
	FMovieSceneRootEvaluationTemplateInstance          RootTemplateInstance;                                       // 0x0298   (0x0088)  
	unsigned char                                      UnknownData01_6[0x60];                                      // 0x0320   (0x0060)  MISSED
};

/// Class /Script/TemplateSequence.CameraAnimationSpawnableSystem
/// Size: 0x0000 (0x000040 - 0x000040)
class UCameraAnimationSpawnableSystem : public UMovieSceneEntitySystem
{ 
public:
};

/// Class /Script/TemplateSequence.CameraAnimationBoundObjectInstantiator
/// Size: 0x0000 (0x000040 - 0x000040)
class UCameraAnimationBoundObjectInstantiator : public UMovieSceneEntityInstantiatorSystem
{ 
public:
};

/// Class /Script/TemplateSequence.CameraAnimationEntitySystemLinker
/// Size: 0x0000 (0x0006D8 - 0x0006D8)
class UCameraAnimationEntitySystemLinker : public UMovieSceneEntitySystemLinker
{ 
public:
};

/// Class /Script/TemplateSequence.CameraAnimationSequenceSubsystem
/// Size: 0x0018 (0x000030 - 0x000048)
class UCameraAnimationSequenceSubsystem : public UWorldSubsystem
{ 
public:
	class UMovieSceneEntitySystemLinker*               Linker;                                                     // 0x0030   (0x0008)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x0038   (0x0010)  MISSED
};

/// Struct /Script/TemplateSequence.TemplateSectionPropertyScale
/// Size: 0x0138 (0x000000 - 0x000138)
struct FTemplateSectionPropertyScale
{ 
	FGuid                                              ObjectBinding;                                              // 0x0000   (0x0010)  
	FMovieScenePropertyBinding                         PropertyBinding;                                            // 0x0010   (0x0014)  
	ETemplateSectionPropertyScaleType                  PropertyScaleType;                                          // 0x0024   (0x0004)  
	FMovieSceneFloatChannel                            FloatChannel;                                               // 0x0028   (0x0110)  
};

/// Class /Script/TemplateSequence.TemplateSequenceSection
/// Size: 0x0018 (0x000130 - 0x000148)
class UTemplateSequenceSection : public UMovieSceneSubSection
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0130   (0x0008)  MISSED
	TArray<FTemplateSectionPropertyScale>              PropertyScales;                                             // 0x0138   (0x0010)  
};

/// Class /Script/TemplateSequence.SequenceCameraShakePattern
/// Size: 0x0030 (0x000028 - 0x000058)
class USequenceCameraShakePattern : public UCameraShakePattern
{ 
public:
	class UCameraAnimationSequence*                    Sequence;                                                   // 0x0028   (0x0008)  
	float                                              PlayRate;                                                   // 0x0030   (0x0004)  
	float                                              Scale;                                                      // 0x0034   (0x0004)  
	float                                              BlendInTime;                                                // 0x0038   (0x0004)  
	float                                              BlendOutTime;                                               // 0x003C   (0x0004)  
	float                                              RandomSegmentDuration;                                      // 0x0040   (0x0004)  
	bool                                               bRandomSegment;                                             // 0x0044   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0045   (0x0003)  MISSED
	class UCameraAnimationSequencePlayer*              Player;                                                     // 0x0048   (0x0008)  
	class UCameraAnimationSequenceCameraStandIn*       CameraStandIn;                                              // 0x0050   (0x0008)  
};

/// Class /Script/TemplateSequence.TemplateSequenceSystem
/// Size: 0x0070 (0x000040 - 0x0000B0)
class UTemplateSequenceSystem : public UMovieSceneEntitySystem
{ 
public:
	unsigned char                                      UnknownData00_1[0x70];                                      // 0x0040   (0x0070)  MISSED
};

/// Class /Script/TemplateSequence.TemplateSequencePropertyScalingInstantiatorSystem
/// Size: 0x0058 (0x000040 - 0x000098)
class UTemplateSequencePropertyScalingInstantiatorSystem : public UMovieSceneEntitySystem
{ 
public:
	unsigned char                                      UnknownData00_1[0x58];                                      // 0x0040   (0x0058)  MISSED
};

/// Class /Script/TemplateSequence.TemplateSequencePropertyScalingEvaluatorSystem
/// Size: 0x0050 (0x000040 - 0x000090)
class UTemplateSequencePropertyScalingEvaluatorSystem : public UMovieSceneEntitySystem
{ 
public:
	unsigned char                                      UnknownData00_1[0x50];                                      // 0x0040   (0x0050)  MISSED
};

/// Struct /Script/TemplateSequence.TemplateSequenceBindingOverrideData
/// Size: 0x000C (0x000000 - 0x00000C)
struct FTemplateSequenceBindingOverrideData
{ 
	SDK_UNDEFINED(8,1188) /* TWeakObjectPtr<UObject*> */ __um(Object);                                             // 0x0000   (0x0008)  
	bool                                               bOverridesDefault;                                          // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0009   (0x0003)  MISSED
};

/// Class /Script/TemplateSequence.TemplateSequenceActor
/// Size: 0x0060 (0x000290 - 0x0002F0)
class ATemplateSequenceActor : public AActor
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0290   (0x0008)  MISSED
	FMovieSceneSequencePlaybackSettings                PlaybackSettings;                                           // 0x0298   (0x0020)  
	class UTemplateSequencePlayer*                     SequencePlayer;                                             // 0x02B8   (0x0008)  
	FSoftObjectPath                                    TemplateSequence;                                           // 0x02C0   (0x0020)  
	FTemplateSequenceBindingOverrideData               BindingOverride;                                            // 0x02E0   (0x000C)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x02EC   (0x0004)  MISSED


	/// Functions
	// Function /Script/TemplateSequence.TemplateSequenceActor.SetSequence
	// void SetSequence(class UTemplateSequence* InSequence);                                                                // [0x1bf6e00] Final|Native|Public|BlueprintCallable 
	// Function /Script/TemplateSequence.TemplateSequenceActor.SetBinding
	// void SetBinding(class AActor* Actor, bool bOverridesDefault);                                                         // [0x1bf6c70] Final|Native|Public|BlueprintCallable 
	// Function /Script/TemplateSequence.TemplateSequenceActor.LoadSequence
	// class UTemplateSequence* LoadSequence();                                                                              // [0x1bf6bf0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TemplateSequence.TemplateSequenceActor.GetSequencePlayer
	// class UTemplateSequencePlayer* GetSequencePlayer();                                                                   // [0x1bf6bb0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TemplateSequence.TemplateSequenceActor.GetSequence
	// class UTemplateSequence* GetSequence();                                                                               // [0x1bf6b30] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/TemplateSequence.TemplateSequencePlayer
/// Size: 0x0008 (0x0004A8 - 0x0004B0)
class UTemplateSequencePlayer : public UMovieSceneSequencePlayer
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x04A8   (0x0008)  MISSED


	/// Functions
	// Function /Script/TemplateSequence.TemplateSequencePlayer.CreateTemplateSequencePlayer
	// class UTemplateSequencePlayer* CreateTemplateSequencePlayer(class UObject* WorldContextObject, class UTemplateSequence* TemplateSequence, FMovieSceneSequencePlaybackSettings Settings, class ATemplateSequenceActor*& OutActor); // [0x1bf63a0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/TemplateSequence.SequenceCameraShakeTestUtil
/// Size: 0x0000 (0x000028 - 0x000028)
class USequenceCameraShakeTestUtil : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/TemplateSequence.SequenceCameraShakeTestUtil.GetPostProcessBlendCache
	// bool GetPostProcessBlendCache(class APlayerController* PlayerController, int32_t PPIndex, FPostProcessSettings& OutPPSettings, float& OutPPBlendWeight); // [0x1bf6920] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/TemplateSequence.SequenceCameraShakeTestUtil.GetLastFrameCameraCachePOV
	// FMinimalViewInfo GetLastFrameCameraCachePOV(class APlayerController* PlayerController);                               // [0x1bf6830] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/TemplateSequence.SequenceCameraShakeTestUtil.GetCameraCachePOV
	// FMinimalViewInfo GetCameraCachePOV(class APlayerController* PlayerController);                                        // [0x1bf6740] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/TemplateSequence.TemplateSequenceTrack
/// Size: 0x0000 (0x0000A8 - 0x0000A8)
class UTemplateSequenceTrack : public UMovieSceneSubTrack
{ 
public:
};

