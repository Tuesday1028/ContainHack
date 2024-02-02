
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

/// Enum /Script/MovieScene.EMovieSceneKeyInterpolation
/// Size: 0x06
enum class EMovieSceneKeyInterpolation : uint8_t
{
	EMovieSceneKeyInterpolation__Auto                                                = 0,
	EMovieSceneKeyInterpolation__User                                                = 1,
	EMovieSceneKeyInterpolation__Break                                               = 2,
	EMovieSceneKeyInterpolation__Linear                                              = 3,
	EMovieSceneKeyInterpolation__Constant                                            = 4,
	EMovieSceneKeyInterpolation__EMovieSceneKeyInterpolation_MAX                     = 5
};

/// Enum /Script/MovieScene.EMovieSceneCompletionMode
/// Size: 0x04
enum class EMovieSceneCompletionMode : uint8_t
{
	EMovieSceneCompletionMode__KeepState                                             = 0,
	EMovieSceneCompletionMode__RestoreState                                          = 1,
	EMovieSceneCompletionMode__ProjectDefault                                        = 2,
	EMovieSceneCompletionMode__EMovieSceneCompletionMode_MAX                         = 3
};

/// Enum /Script/MovieScene.EMovieScenePlayerStatus
/// Size: 0x07
enum class EMovieScenePlayerStatus : uint8_t
{
	EMovieScenePlayerStatus__Stopped                                                 = 0,
	EMovieScenePlayerStatus__Playing                                                 = 1,
	EMovieScenePlayerStatus__Scrubbing                                               = 2,
	EMovieScenePlayerStatus__Jumping                                                 = 3,
	EMovieScenePlayerStatus__Stepping                                                = 4,
	EMovieScenePlayerStatus__Paused                                                  = 5,
	EMovieScenePlayerStatus__MAX                                                     = 6
};

/// Enum /Script/MovieScene.EMovieSceneEvaluationType
/// Size: 0x03
enum class EMovieSceneEvaluationType : uint8_t
{
	EMovieSceneEvaluationType__FrameLocked                                           = 0,
	EMovieSceneEvaluationType__WithSubFrames                                         = 1,
	EMovieSceneEvaluationType__EMovieSceneEvaluationType_MAX                         = 2
};

/// Enum /Script/MovieScene.EUpdateClockSource
/// Size: 0x08
enum class EUpdateClockSource : uint8_t
{
	EUpdateClockSource__Tick                                                         = 0,
	EUpdateClockSource__Platform                                                     = 1,
	EUpdateClockSource__Audio                                                        = 2,
	EUpdateClockSource__RelativeTimecode                                             = 3,
	EUpdateClockSource__Timecode                                                     = 4,
	EUpdateClockSource__PlayEveryFrame                                               = 5,
	EUpdateClockSource__Custom                                                       = 6,
	EUpdateClockSource__EUpdateClockSource_MAX                                       = 7
};

/// Enum /Script/MovieScene.EMovieSceneSequenceFlags
/// Size: 0x05
enum class EMovieSceneSequenceFlags : uint8_t
{
	EMovieSceneSequenceFlags__None                                                   = 0,
	EMovieSceneSequenceFlags__Volatile                                               = 1,
	EMovieSceneSequenceFlags__BlockingEvaluation                                     = 2,
	EMovieSceneSequenceFlags__InheritedFlags                                         = 1,
	EMovieSceneSequenceFlags__EMovieSceneSequenceFlags_MAX                           = 3
};

/// Enum /Script/MovieScene.EMovieSceneServerClientMask
/// Size: 0x05
enum class EMovieSceneServerClientMask : uint8_t
{
	EMovieSceneServerClientMask__None                                                = 0,
	EMovieSceneServerClientMask__Server                                              = 1,
	EMovieSceneServerClientMask__Client                                              = 2,
	EMovieSceneServerClientMask__All                                                 = 3,
	EMovieSceneServerClientMask__EMovieSceneServerClientMask_MAX                     = 4
};

/// Enum /Script/MovieScene.ESectionEvaluationFlags
/// Size: 0x04
enum class ESectionEvaluationFlags : uint8_t
{
	ESectionEvaluationFlags__None                                                    = 0,
	ESectionEvaluationFlags__PreRoll                                                 = 1,
	ESectionEvaluationFlags__PostRoll                                                = 2,
	ESectionEvaluationFlags__ESectionEvaluationFlags_MAX                             = 3
};

/// Enum /Script/MovieScene.EMovieSceneBlendType
/// Size: 0x06
enum class EMovieSceneBlendType : uint8_t
{
	EMovieSceneBlendType__Invalid                                                    = 0,
	EMovieSceneBlendType__Absolute                                                   = 1,
	EMovieSceneBlendType__Additive                                                   = 2,
	EMovieSceneBlendType__Relative                                                   = 4,
	EMovieSceneBlendType__AdditiveFromBase                                           = 8,
	EMovieSceneBlendType__EMovieSceneBlendType_MAX                                   = 9
};

/// Enum /Script/MovieScene.EEvaluationMethod
/// Size: 0x03
enum class EEvaluationMethod : uint8_t
{
	EEvaluationMethod__Static                                                        = 0,
	EEvaluationMethod__Swept                                                         = 1,
	EEvaluationMethod__EEvaluationMethod_MAX                                         = 2
};

/// Enum /Script/MovieScene.EMovieSceneBuiltInEasing
/// Size: 0x23
enum class EMovieSceneBuiltInEasing : uint8_t
{
	EMovieSceneBuiltInEasing__Linear                                                 = 0,
	EMovieSceneBuiltInEasing__SinIn                                                  = 1,
	EMovieSceneBuiltInEasing__SinOut                                                 = 2,
	EMovieSceneBuiltInEasing__SinInOut                                               = 3,
	EMovieSceneBuiltInEasing__QuadIn                                                 = 4,
	EMovieSceneBuiltInEasing__QuadOut                                                = 5,
	EMovieSceneBuiltInEasing__QuadInOut                                              = 6,
	EMovieSceneBuiltInEasing__CubicIn                                                = 7,
	EMovieSceneBuiltInEasing__CubicOut                                               = 8,
	EMovieSceneBuiltInEasing__CubicInOut                                             = 9,
	EMovieSceneBuiltInEasing__QuartIn                                                = 10,
	EMovieSceneBuiltInEasing__QuartOut                                               = 11,
	EMovieSceneBuiltInEasing__QuartInOut                                             = 12,
	EMovieSceneBuiltInEasing__QuintIn                                                = 13,
	EMovieSceneBuiltInEasing__QuintOut                                               = 14,
	EMovieSceneBuiltInEasing__QuintInOut                                             = 15,
	EMovieSceneBuiltInEasing__ExpoIn                                                 = 16,
	EMovieSceneBuiltInEasing__ExpoOut                                                = 17,
	EMovieSceneBuiltInEasing__ExpoInOut                                              = 18,
	EMovieSceneBuiltInEasing__CircIn                                                 = 19,
	EMovieSceneBuiltInEasing__CircOut                                                = 20,
	EMovieSceneBuiltInEasing__CircInOut                                              = 21,
	EMovieSceneBuiltInEasing__EMovieSceneBuiltInEasing_MAX                           = 22
};

/// Enum /Script/MovieScene.EMovieSceneObjectBindingSpace
/// Size: 0x04
enum class EMovieSceneObjectBindingSpace : uint8_t
{
	EMovieSceneObjectBindingSpace__Local                                             = 0,
	EMovieSceneObjectBindingSpace__Root                                              = 1,
	EMovieSceneObjectBindingSpace__Unused                                            = 2,
	EMovieSceneObjectBindingSpace__EMovieSceneObjectBindingSpace_MAX                 = 3
};

/// Enum /Script/MovieScene.EUpdatePositionMethod
/// Size: 0x04
enum class EUpdatePositionMethod : uint8_t
{
	EUpdatePositionMethod__Play                                                      = 0,
	EUpdatePositionMethod__Jump                                                      = 1,
	EUpdatePositionMethod__Scrub                                                     = 2,
	EUpdatePositionMethod__EUpdatePositionMethod_MAX                                 = 3
};

/// Enum /Script/MovieScene.EMovieScenePositionType
/// Size: 0x04
enum class EMovieScenePositionType : uint8_t
{
	EMovieScenePositionType__Frame                                                   = 0,
	EMovieScenePositionType__Time                                                    = 1,
	EMovieScenePositionType__MarkedFrame                                             = 2,
	EMovieScenePositionType__EMovieScenePositionType_MAX                             = 3
};

/// Enum /Script/MovieScene.ESpawnOwnership
/// Size: 0x04
enum class ESpawnOwnership : uint8_t
{
	ESpawnOwnership__InnerSequence                                                   = 0,
	ESpawnOwnership__MasterSequence                                                  = 1,
	ESpawnOwnership__External                                                        = 2,
	ESpawnOwnership__ESpawnOwnership_MAX                                             = 3
};

/// Class /Script/MovieScene.MovieSceneSignedObject
/// Size: 0x0030 (0x000028 - 0x000058)
class UMovieSceneSignedObject : public UObject
{ 
public:
	unsigned char                                      UnknownData00_2[0x4];                                       // 0x0028   (0x0004)  MISSED
	FGuid                                              Signature;                                                  // 0x002C   (0x0010)  
	unsigned char                                      UnknownData01_6[0x1C];                                      // 0x003C   (0x001C)  MISSED
};

/// Struct /Script/MovieScene.MovieSceneSectionEvalOptions
/// Size: 0x0002 (0x000000 - 0x000002)
struct FMovieSceneSectionEvalOptions
{ 
	bool                                               bCanEditCompletionMode;                                     // 0x0000   (0x0001)  
	EMovieSceneCompletionMode                          CompletionMode;                                             // 0x0001   (0x0001)  
};

/// Struct /Script/MovieScene.MovieSceneEasingSettings
/// Size: 0x0038 (0x000000 - 0x000038)
struct FMovieSceneEasingSettings
{ 
	int32_t                                            AutoEaseInDuration;                                         // 0x0000   (0x0004)  
	int32_t                                            AutoEaseOutDuration;                                        // 0x0004   (0x0004)  
	SDK_UNDEFINED(16,916) /* TScriptInterface<Class> */ __um(EaseIn);                                              // 0x0008   (0x0010)  
	bool                                               bManualEaseIn;                                              // 0x0018   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0019   (0x0003)  MISSED
	int32_t                                            ManualEaseInDuration;                                       // 0x001C   (0x0004)  
	SDK_UNDEFINED(16,917) /* TScriptInterface<Class> */ __um(EaseOut);                                             // 0x0020   (0x0010)  
	bool                                               bManualEaseOut;                                             // 0x0030   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0031   (0x0003)  MISSED
	int32_t                                            ManualEaseOutDuration;                                      // 0x0034   (0x0004)  
};

/// Struct /Script/MovieScene.MovieSceneFrameRange
/// Size: 0x0010 (0x000000 - 0x000010)
struct FMovieSceneFrameRange
{ 
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0000   (0x0010)  MISSED
};

/// Struct /Script/MovieScene.OptionalMovieSceneBlendType
/// Size: 0x0002 (0x000000 - 0x000002)
struct FOptionalMovieSceneBlendType
{ 
	EMovieSceneBlendType                               BlendType;                                                  // 0x0000   (0x0001)  
	bool                                               bIsValid;                                                   // 0x0001   (0x0001)  
};

/// Class /Script/MovieScene.MovieSceneSection
/// Size: 0x0098 (0x000058 - 0x0000F0)
class UMovieSceneSection : public UMovieSceneSignedObject
{ 
public:
	FMovieSceneSectionEvalOptions                      EvalOptions;                                                // 0x0058   (0x0002)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x005A   (0x0006)  MISSED
	FMovieSceneEasingSettings                          Easing;                                                     // 0x0060   (0x0038)  
	FMovieSceneFrameRange                              SectionRange;                                               // 0x0098   (0x0010)  
	FFrameNumber                                       PreRollFrames;                                              // 0x00A8   (0x0004)  
	FFrameNumber                                       PostRollFrames;                                             // 0x00AC   (0x0004)  
	int32_t                                            RowIndex;                                                   // 0x00B0   (0x0004)  
	int32_t                                            OverlapPriority;                                            // 0x00B4   (0x0004)  
	bool                                               bIsActive : 1;                                              // 0x00B8:0 (0x0001)  
	bool                                               bIsLocked : 1;                                              // 0x00B8:1 (0x0001)  
	unsigned char                                      UnknownData01_4[0x3];                                       // 0x00B9   (0x0003)  MISSED
	float                                              StartTime;                                                  // 0x00BC   (0x0004)  
	float                                              EndTime;                                                    // 0x00C0   (0x0004)  
	float                                              PrerollTime;                                                // 0x00C4   (0x0004)  
	float                                              PostrollTime;                                               // 0x00C8   (0x0004)  
	bool                                               bIsInfinite : 1;                                            // 0x00CC:0 (0x0001)  
	unsigned char                                      UnknownData02_4[0x3];                                       // 0x00CD   (0x0003)  MISSED
	bool                                               bSupportsInfiniteRange;                                     // 0x00D0   (0x0001)  
	FOptionalMovieSceneBlendType                       BlendType;                                                  // 0x00D1   (0x0002)  
	unsigned char                                      UnknownData03_6[0x1D];                                      // 0x00D3   (0x001D)  MISSED


	/// Functions
	// Function /Script/MovieScene.MovieSceneSection.SetRowIndex
	// void SetRowIndex(int32_t NewRowIndex);                                                                                // [0x339ea50] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/MovieScene.MovieSceneSection.SetPreRollFrames
	// void SetPreRollFrames(int32_t InPreRollFrames);                                                                       // [0x339e9c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieScene.MovieSceneSection.SetPostRollFrames
	// void SetPostRollFrames(int32_t InPostRollFrames);                                                                     // [0x339e930] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieScene.MovieSceneSection.SetOverlapPriority
	// void SetOverlapPriority(int32_t NewPriority);                                                                         // [0x339e700] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieScene.MovieSceneSection.SetIsLocked
	// void SetIsLocked(bool bInIsLocked);                                                                                   // [0x339e670] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieScene.MovieSceneSection.SetIsActive
	// void SetIsActive(bool bInIsActive);                                                                                   // [0x339e5d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieScene.MovieSceneSection.SetCompletionMode
	// void SetCompletionMode(EMovieSceneCompletionMode InCompletionMode);                                                   // [0x339e280] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieScene.MovieSceneSection.SetBlendType
	// void SetBlendType(EMovieSceneBlendType InBlendType);                                                                  // [0x339e200] RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/MovieScene.MovieSceneSection.IsLocked
	// bool IsLocked();                                                                                                      // [0x339d280] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MovieScene.MovieSceneSection.IsActive
	// bool IsActive();                                                                                                      // [0x339d250] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MovieScene.MovieSceneSection.GetRowIndex
	// int32_t GetRowIndex();                                                                                                // [0x339cfe0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MovieScene.MovieSceneSection.GetPreRollFrames
	// int32_t GetPreRollFrames();                                                                                           // [0x1e30780] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MovieScene.MovieSceneSection.GetPostRollFrames
	// int32_t GetPostRollFrames();                                                                                          // [0x339cfc0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MovieScene.MovieSceneSection.GetOverlapPriority
	// int32_t GetOverlapPriority();                                                                                         // [0x339cf80] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MovieScene.MovieSceneSection.GetCompletionMode
	// EMovieSceneCompletionMode GetCompletionMode();                                                                        // [0x339cca0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MovieScene.MovieSceneSection.GetBlendType
	// FOptionalMovieSceneBlendType GetBlendType();                                                                          // [0x339cb60] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Struct /Script/MovieScene.MovieSceneTrackEvalOptions
/// Size: 0x0004 (0x000000 - 0x000004)
struct FMovieSceneTrackEvalOptions
{ 
	bool                                               bCanEvaluateNearestSection : 1;                             // 0x0000:0 (0x0001)  
	bool                                               bEvalNearestSection : 1;                                    // 0x0000:1 (0x0001)  
	bool                                               bEvaluateInPreroll : 1;                                     // 0x0000:2 (0x0001)  
	bool                                               bEvaluateInPostroll : 1;                                    // 0x0000:3 (0x0001)  
	bool                                               bEvaluateNearestSection : 1;                                // 0x0000:4 (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0001   (0x0003)  MISSED
};

/// Struct /Script/MovieScene.MovieSceneTrackEvaluationFieldEntry
/// Size: 0x0020 (0x000000 - 0x000020)
struct FMovieSceneTrackEvaluationFieldEntry
{ 
	class UMovieSceneSection*                          Section;                                                    // 0x0000   (0x0008)  
	FFrameNumberRange                                  Range;                                                      // 0x0008   (0x0010)  
	FFrameNumber                                       ForcedTime;                                                 // 0x0018   (0x0004)  
	ESectionEvaluationFlags                            Flags;                                                      // 0x001C   (0x0001)  
	unsigned char                                      UnknownData00_5[0x1];                                       // 0x001D   (0x0001)  MISSED
	int16_t                                            LegacySortOrder;                                            // 0x001E   (0x0002)  
};

/// Struct /Script/MovieScene.MovieSceneTrackEvaluationField
/// Size: 0x0010 (0x000000 - 0x000010)
struct FMovieSceneTrackEvaluationField
{ 
	TArray<FMovieSceneTrackEvaluationFieldEntry>       Entries;                                                    // 0x0000   (0x0010)  
};

/// Class /Script/MovieScene.MovieSceneTrack
/// Size: 0x0040 (0x000058 - 0x000098)
class UMovieSceneTrack : public UMovieSceneSignedObject
{ 
public:
	FMovieSceneTrackEvalOptions                        EvalOptions;                                                // 0x0058   (0x0004)  
	unsigned char                                      UnknownData00_5[0x1];                                       // 0x005C   (0x0001)  MISSED
	bool                                               bIsEvalDisabled;                                            // 0x005D   (0x0001)  
	unsigned char                                      UnknownData01_5[0x2];                                       // 0x005E   (0x0002)  MISSED
	TArray<int32_t>                                    RowsDisabled;                                               // 0x0060   (0x0010)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x0070   (0x0004)  MISSED
	FGuid                                              EvaluationFieldGuid;                                        // 0x0074   (0x0010)  
	unsigned char                                      UnknownData03_5[0x4];                                       // 0x0084   (0x0004)  MISSED
	FMovieSceneTrackEvaluationField                    EvaluationField;                                            // 0x0088   (0x0010)  
};

/// Class /Script/MovieScene.MovieSceneNameableTrack
/// Size: 0x0000 (0x000098 - 0x000098)
class UMovieSceneNameableTrack : public UMovieSceneTrack
{ 
public:
};

/// Class /Script/MovieScene.MovieSceneSequence
/// Size: 0x0010 (0x000058 - 0x000068)
class UMovieSceneSequence : public UMovieSceneSignedObject
{ 
public:
	class UMovieSceneCompiledData*                     CompiledData;                                               // 0x0058   (0x0008)  
	EMovieSceneCompletionMode                          DefaultCompletionMode;                                      // 0x0060   (0x0001)  
	bool                                               bParentContextsAreSignificant;                              // 0x0061   (0x0001)  
	bool                                               bPlayableDirectly;                                          // 0x0062   (0x0001)  
	EMovieSceneSequenceFlags                           SequenceFlags;                                              // 0x0063   (0x0001)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0064   (0x0004)  MISSED


	/// Functions
	// Function /Script/MovieScene.MovieSceneSequence.GetEarliestTimecodeSource
	// FMovieSceneTimecodeSource GetEarliestTimecodeSource();                                                                // [0x339cdb0] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MovieScene.MovieSceneSequence.FindBindingsByTag
	// TArray<FMovieSceneObjectBindingID> FindBindingsByTag(FName InBindingName);                                            // [0x339cac0] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MovieScene.MovieSceneSequence.FindBindingByTag
	// FMovieSceneObjectBindingID FindBindingByTag(FName InBindingName);                                                     // [0x339ca10] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/MovieScene.MovieSceneEntitySystem
/// Size: 0x0018 (0x000028 - 0x000040)
class UMovieSceneEntitySystem : public UObject
{ 
public:
	class UMovieSceneEntitySystemLinker*               Linker;                                                     // 0x0028   (0x0008)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x0030   (0x0010)  MISSED
};

/// Class /Script/MovieScene.MovieSceneEntityInstantiatorSystem
/// Size: 0x0000 (0x000040 - 0x000040)
class UMovieSceneEntityInstantiatorSystem : public UMovieSceneEntitySystem
{ 
public:
};

/// Struct /Script/MovieScene.MovieSceneEntitySystemGraphNodes
/// Size: 0x0038 (0x000000 - 0x000038)
struct FMovieSceneEntitySystemGraphNodes
{ 
	unsigned char                                      UnknownData00_1[0x38];                                      // 0x0000   (0x0038)  MISSED
};

/// Struct /Script/MovieScene.MovieSceneEntitySystemGraph
/// Size: 0x0138 (0x000000 - 0x000138)
struct FMovieSceneEntitySystemGraph
{ 
	unsigned char                                      UnknownData00_2[0x80];                                      // 0x0000   (0x0080)  MISSED
	FMovieSceneEntitySystemGraphNodes                  Nodes;                                                      // 0x0080   (0x0038)  
	unsigned char                                      UnknownData01_6[0x80];                                      // 0x00B8   (0x0080)  MISSED
};

/// Class /Script/MovieScene.MovieSceneEntitySystemLinker
/// Size: 0x06B0 (0x000028 - 0x0006D8)
class UMovieSceneEntitySystemLinker : public UObject
{ 
public:
	unsigned char                                      UnknownData00_2[0x270];                                     // 0x0028   (0x0270)  MISSED
	FMovieSceneEntitySystemGraph                       SystemGraph;                                                // 0x0298   (0x0138)  
	unsigned char                                      UnknownData01_6[0x308];                                     // 0x03D0   (0x0308)  MISSED
};

/// Struct /Script/MovieScene.MovieSceneSectionParameters
/// Size: 0x0024 (0x000000 - 0x000024)
struct FMovieSceneSectionParameters
{ 
	FFrameNumber                                       StartFrameOffset;                                           // 0x0000   (0x0004)  
	bool                                               bCanLoop;                                                   // 0x0004   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0005   (0x0003)  MISSED
	FFrameNumber                                       EndFrameOffset;                                             // 0x0008   (0x0004)  
	FFrameNumber                                       FirstLoopStartFrameOffset;                                  // 0x000C   (0x0004)  
	float                                              TimeScale;                                                  // 0x0010   (0x0004)  
	int32_t                                            HierarchicalBias;                                           // 0x0014   (0x0004)  
	float                                              StartOffset;                                                // 0x0018   (0x0004)  
	float                                              PrerollTime;                                                // 0x001C   (0x0004)  
	float                                              PostrollTime;                                               // 0x0020   (0x0004)  
};

/// Class /Script/MovieScene.MovieSceneSubSection
/// Size: 0x0040 (0x0000F0 - 0x000130)
class UMovieSceneSubSection : public UMovieSceneSection
{ 
public:
	FMovieSceneSectionParameters                       Parameters;                                                 // 0x00F0   (0x0024)  
	float                                              StartOffset;                                                // 0x0114   (0x0004)  
	float                                              TimeScale;                                                  // 0x0118   (0x0004)  
	float                                              PrerollTime;                                                // 0x011C   (0x0004)  
	char                                               NetworkMask;                                                // 0x0120   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0121   (0x0007)  MISSED
	class UMovieSceneSequence*                         SubSequence;                                                // 0x0128   (0x0008)  


	/// Functions
	// Function /Script/MovieScene.MovieSceneSubSection.SetSequence
	// void SetSequence(class UMovieSceneSequence* Sequence);                                                                // [0x33aad80] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieScene.MovieSceneSubSection.GetSequence
	// class UMovieSceneSequence* GetSequence();                                                                             // [0x16d65f0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Struct /Script/MovieScene.MovieSceneSequenceLoopCount
/// Size: 0x0004 (0x000000 - 0x000004)
struct FMovieSceneSequenceLoopCount
{ 
	int32_t                                            Value;                                                      // 0x0000   (0x0004)  
};

/// Struct /Script/MovieScene.MovieSceneSequenceTickInterval
/// Size: 0x000C (0x000000 - 0x00000C)
struct FMovieSceneSequenceTickInterval
{ 
	float                                              TickIntervalSeconds;                                        // 0x0000   (0x0004)  
	float                                              EvaluationBudgetMicroseconds;                               // 0x0004   (0x0004)  
	bool                                               bTickWhenPaused;                                            // 0x0008   (0x0001)  
	bool                                               bAllowRounding;                                             // 0x0009   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x000A   (0x0002)  MISSED
};

/// Struct /Script/MovieScene.MovieSceneSequencePlaybackSettings
/// Size: 0x0020 (0x000000 - 0x000020)
struct FMovieSceneSequencePlaybackSettings
{ 
	bool                                               bAutoPlay : 1;                                              // 0x0000:0 (0x0001)  
	unsigned char                                      UnknownData00_4[0x3];                                       // 0x0001   (0x0003)  MISSED
	FMovieSceneSequenceLoopCount                       LoopCount;                                                  // 0x0004   (0x0004)  
	FMovieSceneSequenceTickInterval                    TickInterval;                                               // 0x0008   (0x000C)  
	float                                              PlayRate;                                                   // 0x0014   (0x0004)  
	float                                              StartTime;                                                  // 0x0018   (0x0004)  
	bool                                               bRandomStartTime : 1;                                       // 0x001C:0 (0x0001)  
	bool                                               bRestoreState : 1;                                          // 0x001C:1 (0x0001)  
	bool                                               bDisableMovementInput : 1;                                  // 0x001C:2 (0x0001)  
	bool                                               bDisableLookAtInput : 1;                                    // 0x001C:3 (0x0001)  
	bool                                               bHidePlayer : 1;                                            // 0x001C:4 (0x0001)  
	bool                                               bHideHud : 1;                                               // 0x001C:5 (0x0001)  
	bool                                               bDisableCameraCuts : 1;                                     // 0x001C:6 (0x0001)  
	bool                                               bPauseAtEnd : 1;                                            // 0x001C:7 (0x0001)  
	bool                                               bInheritTickIntervalFromOwner : 1;                          // 0x001D:0 (0x0001)  
	unsigned char                                      UnknownData01_6[0x2];                                       // 0x001E   (0x0002)  MISSED
};

/// Struct /Script/MovieScene.MovieSceneRootEvaluationTemplateInstance
/// Size: 0x0088 (0x000000 - 0x000088)
struct FMovieSceneRootEvaluationTemplateInstance
{ 
	SDK_UNDEFINED(8,918) /* TWeakObjectPtr<UMovieSceneSequence*> */ __um(WeakRootSequence);                        // 0x0000   (0x0008)  
	class UMovieSceneCompiledDataManager*              CompiledDataManager;                                        // 0x0008   (0x0008)  
	unsigned char                                      UnknownData00_5[0x18];                                      // 0x0010   (0x0018)  MISSED
	class UMovieSceneEntitySystemLinker*               EntitySystemLinker;                                         // 0x0028   (0x0008)  
	SDK_UNDEFINED(80,919) /* TMap<FMovieSceneSequenceID, UObject*> */ __um(DirectorInstances);                     // 0x0030   (0x0050)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0080   (0x0008)  MISSED
};

/// Struct /Script/MovieScene.MovieSceneSequenceReplProperties
/// Size: 0x0010 (0x000000 - 0x000010)
struct FMovieSceneSequenceReplProperties
{ 
	FFrameTime                                         LastKnownPosition;                                          // 0x0000   (0x0008)  
	SDK_UNDEFINED(1,920) /* TEnumAsByte<EMovieScenePlayerStatus> */ __um(LastKnownStatus);                         // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0009   (0x0003)  MISSED
	int32_t                                            LastKnownNumLoops;                                          // 0x000C   (0x0004)  
};

/// Class /Script/MovieScene.MovieSceneSequencePlayer
/// Size: 0x0480 (0x000028 - 0x0004A8)
class UMovieSceneSequencePlayer : public UObject
{ 
public:
	unsigned char                                      UnknownData00_2[0x1F8];                                     // 0x0028   (0x01F8)  MISSED
	SDK_UNDEFINED(16,921) /* TScriptInterface<Class> */ __um(Observer);                                            // 0x0220   (0x0010)  
	SDK_UNDEFINED(16,922) /* FMulticastInlineDelegate */ __um(OnPlay);                                             // 0x0230   (0x0010)  
	SDK_UNDEFINED(16,923) /* FMulticastInlineDelegate */ __um(OnPlayReverse);                                      // 0x0240   (0x0010)  
	SDK_UNDEFINED(16,924) /* FMulticastInlineDelegate */ __um(OnStop);                                             // 0x0250   (0x0010)  
	SDK_UNDEFINED(16,925) /* FMulticastInlineDelegate */ __um(OnPause);                                            // 0x0260   (0x0010)  
	SDK_UNDEFINED(16,926) /* FMulticastInlineDelegate */ __um(OnFinished);                                         // 0x0270   (0x0010)  
	SDK_UNDEFINED(1,927) /* TEnumAsByte<EMovieScenePlayerStatus> */ __um(Status);                                  // 0x0280   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0281   (0x0003)  MISSED
	bool                                               bReversePlayback : 1;                                       // 0x0284:0 (0x0001)  
	unsigned char                                      UnknownData02_4[0x3];                                       // 0x0285   (0x0003)  MISSED
	class UMovieSceneSequence*                         Sequence;                                                   // 0x0288   (0x0008)  
	FFrameNumber                                       StartTime;                                                  // 0x0290   (0x0004)  
	int32_t                                            DurationFrames;                                             // 0x0294   (0x0004)  
	float                                              DurationSubFrames;                                          // 0x0298   (0x0004)  
	int32_t                                            CurrentNumLoops;                                            // 0x029C   (0x0004)  
	FMovieSceneSequencePlaybackSettings                PlaybackSettings;                                           // 0x02A0   (0x0020)  
	FMovieSceneRootEvaluationTemplateInstance          RootTemplateInstance;                                       // 0x02C0   (0x0088)  
	unsigned char                                      UnknownData03_5[0x88];                                      // 0x0348   (0x0088)  MISSED
	FMovieSceneSequenceReplProperties                  NetSyncProps;                                               // 0x03D0   (0x0010)  
	SDK_UNDEFINED(16,928) /* TScriptInterface<Class> */ __um(PlaybackClient);                                      // 0x03E0   (0x0010)  
	class UMovieSceneSequenceTickManager*              TickManager;                                                // 0x03F0   (0x0008)  
	unsigned char                                      UnknownData04_6[0xB0];                                      // 0x03F8   (0x00B0)  MISSED


	/// Functions
	// Function /Script/MovieScene.MovieSceneSequencePlayer.StopAtCurrentTime
	// void StopAtCurrentTime();                                                                                             // [0x339edb0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieScene.MovieSceneSequencePlayer.Stop
	// void Stop();                                                                                                          // [0x339ed10] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieScene.MovieSceneSequencePlayer.SetTimeRange
	// void SetTimeRange(float StartTime, float Duration);                                                                   // [0x339eae0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieScene.MovieSceneSequencePlayer.SetPlayRate
	// void SetPlayRate(float PlayRate);                                                                                     // [0x339e790] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieScene.MovieSceneSequencePlayer.SetPlaybackPosition
	// void SetPlaybackPosition(FMovieSceneSequencePlaybackParams PlaybackParams);                                           // [0x339e810] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieScene.MovieSceneSequencePlayer.SetFrameRate
	// void SetFrameRate(FFrameRate FrameRate);                                                                              // [0x339e4a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieScene.MovieSceneSequencePlayer.SetFrameRange
	// void SetFrameRange(int32_t StartFrame, int32_t Duration, float SubFrames);                                            // [0x339e390] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieScene.MovieSceneSequencePlayer.SetDisableCameraCuts
	// void SetDisableCameraCuts(bool bInDisableCameraCuts);                                                                 // [0x339e300] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieScene.MovieSceneSequencePlayer.ScrubToSeconds
	// void ScrubToSeconds(float TimeInSeconds);                                                                             // [0x339e150] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieScene.MovieSceneSequencePlayer.ScrubToMarkedFrame
	// bool ScrubToMarkedFrame(FString InLabel);                                                                             // [0x339e040] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieScene.MovieSceneSequencePlayer.ScrubToFrame
	// void ScrubToFrame(FFrameTime NewPosition);                                                                            // [0x339df90] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieScene.MovieSceneSequencePlayer.Scrub
	// void Scrub();                                                                                                         // [0x339df70] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieScene.MovieSceneSequencePlayer.RPC_OnStopEvent
	// void RPC_OnStopEvent(FFrameTime StoppedTime);                                                                         // [0x339de60] Final|Net|NetReliableNative|Event|NetMulticast|Private 
	// Function /Script/MovieScene.MovieSceneSequencePlayer.RPC_OnFinishPlaybackEvent
	// void RPC_OnFinishPlaybackEvent(FFrameTime StoppedTime);                                                               // [0x339ddc0] Final|Net|NetReliableNative|Event|NetMulticast|Private 
	// Function /Script/MovieScene.MovieSceneSequencePlayer.RPC_ExplicitServerUpdateEvent
	// void RPC_ExplicitServerUpdateEvent(EUpdatePositionMethod Method, FFrameTime RelevantTime);                            // [0x339dce0] Final|Net|NetReliableNative|Event|NetMulticast|Private 
	// Function /Script/MovieScene.MovieSceneSequencePlayer.RestoreState
	// void RestoreState();                                                                                                  // [0x339df00] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieScene.MovieSceneSequencePlayer.PlayToSeconds
	// void PlayToSeconds(float TimeInSeconds);                                                                              // [0x339dc30] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieScene.MovieSceneSequencePlayer.PlayToMarkedFrame
	// bool PlayToMarkedFrame(FString InLabel);                                                                              // [0x339db20] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieScene.MovieSceneSequencePlayer.PlayToFrame
	// void PlayToFrame(FFrameTime NewPosition);                                                                             // [0x339da70] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieScene.MovieSceneSequencePlayer.PlayTo
	// void PlayTo(FMovieSceneSequencePlaybackParams PlaybackParams, FMovieSceneSequencePlayToParams PlayToParams);          // [0x339d6a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieScene.MovieSceneSequencePlayer.PlayReverse
	// void PlayReverse();                                                                                                   // [0x339d680] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieScene.MovieSceneSequencePlayer.PlayLooping
	// void PlayLooping(int32_t NumLoops);                                                                                   // [0x339d5f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieScene.MovieSceneSequencePlayer.Play
	// void Play();                                                                                                          // [0x339d5d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieScene.MovieSceneSequencePlayer.Pause
	// void Pause();                                                                                                         // [0x339d5b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieScene.MovieSceneSequencePlayer.JumpToSeconds
	// void JumpToSeconds(float TimeInSeconds);                                                                              // [0x339d500] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieScene.MovieSceneSequencePlayer.JumpToMarkedFrame
	// bool JumpToMarkedFrame(FString InLabel);                                                                              // [0x339d3f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieScene.MovieSceneSequencePlayer.JumpToFrame
	// void JumpToFrame(FFrameTime NewPosition);                                                                             // [0x339d340] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieScene.MovieSceneSequencePlayer.IsReversed
	// bool IsReversed();                                                                                                    // [0x339d310] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MovieScene.MovieSceneSequencePlayer.IsPlaying
	// bool IsPlaying();                                                                                                     // [0x339d2e0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MovieScene.MovieSceneSequencePlayer.IsPaused
	// bool IsPaused();                                                                                                      // [0x339d2b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MovieScene.MovieSceneSequencePlayer.GoToEndAndStop
	// void GoToEndAndStop();                                                                                                // [0x339d150] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieScene.MovieSceneSequencePlayer.GetStartTime
	// FQualifiedFrameTime GetStartTime();                                                                                   // [0x339d100] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MovieScene.MovieSceneSequencePlayer.GetSequenceName
	// FString GetSequenceName(bool bAddClientInfo);                                                                         // [0x339d020] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MovieScene.MovieSceneSequencePlayer.GetSequence
	// class UMovieSceneSequence* GetSequence();                                                                             // [0x339d000] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MovieScene.MovieSceneSequencePlayer.GetPlayRate
	// float GetPlayRate();                                                                                                  // [0x339cfa0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MovieScene.MovieSceneSequencePlayer.GetObjectBindings
	// TArray<FMovieSceneObjectBindingID> GetObjectBindings(class UObject* InObject);                                        // [0x339ce90] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieScene.MovieSceneSequencePlayer.GetFrameRate
	// FFrameRate GetFrameRate();                                                                                            // [0x339ce70] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MovieScene.MovieSceneSequencePlayer.GetFrameDuration
	// int32_t GetFrameDuration();                                                                                           // [0x339ce50] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MovieScene.MovieSceneSequencePlayer.GetEndTime
	// FQualifiedFrameTime GetEndTime();                                                                                     // [0x339cdf0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MovieScene.MovieSceneSequencePlayer.GetDuration
	// FQualifiedFrameTime GetDuration();                                                                                    // [0x339cd30] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MovieScene.MovieSceneSequencePlayer.GetDisableCameraCuts
	// bool GetDisableCameraCuts();                                                                                          // [0x339cd00] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieScene.MovieSceneSequencePlayer.GetCurrentTime
	// FQualifiedFrameTime GetCurrentTime();                                                                                 // [0x339ccc0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MovieScene.MovieSceneSequencePlayer.GetBoundObjects
	// TArray<UObject*> GetBoundObjects(FMovieSceneObjectBindingID ObjectBinding);                                           // [0x339cb90] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieScene.MovieSceneSequencePlayer.ChangePlaybackDirection
	// void ChangePlaybackDirection();                                                                                       // [0x339c9f0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/MovieScene.MovieSceneSubTrack
/// Size: 0x0010 (0x000098 - 0x0000A8)
class UMovieSceneSubTrack : public UMovieSceneNameableTrack
{ 
public:
	TArray<class UMovieSceneSection*>                  Sections;                                                   // 0x0098   (0x0010)  
};

/// Class /Script/MovieScene.MovieSceneChannelOverrideProvider
/// Size: 0x0000 (0x000028 - 0x000028)
class UMovieSceneChannelOverrideProvider : public UInterface
{ 
public:
};

/// Class /Script/MovieScene.MovieSceneDeterminismSource
/// Size: 0x0000 (0x000028 - 0x000028)
class UMovieSceneDeterminismSource : public UInterface
{ 
public:
};

/// Class /Script/MovieScene.MovieSceneEvaluationHook
/// Size: 0x0000 (0x000028 - 0x000028)
class UMovieSceneEvaluationHook : public UInterface
{ 
public:
};

/// Class /Script/MovieScene.MovieScenePlaybackClient
/// Size: 0x0000 (0x000028 - 0x000028)
class UMovieScenePlaybackClient : public UInterface
{ 
public:
};

/// Class /Script/MovieScene.MovieSceneSequencePlayerObserver
/// Size: 0x0000 (0x000028 - 0x000028)
class UMovieSceneSequencePlayerObserver : public UInterface
{ 
public:
};

/// Class /Script/MovieScene.MovieSceneBindingOwnerInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UMovieSceneBindingOwnerInterface : public UInterface
{ 
public:
};

/// Class /Script/MovieScene.MovieSceneChannelOverrideContainer
/// Size: 0x0000 (0x000058 - 0x000058)
class UMovieSceneChannelOverrideContainer : public UMovieSceneSignedObject
{ 
public:
};

/// Class /Script/MovieScene.MovieSceneEasingFunction
/// Size: 0x0000 (0x000028 - 0x000028)
class UMovieSceneEasingFunction : public UInterface
{ 
public:


	/// Functions
	// Function /Script/MovieScene.MovieSceneEasingFunction.OnEvaluate
	// float OnEvaluate(float Interp);                                                                                       // [0x2119480] Event|Protected|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
};

/// Class /Script/MovieScene.MovieSceneKeyProxy
/// Size: 0x0000 (0x000028 - 0x000028)
class UMovieSceneKeyProxy : public UInterface
{ 
public:
};

/// Class /Script/MovieScene.MovieSceneSequenceTickManagerClient
/// Size: 0x0000 (0x000028 - 0x000028)
class UMovieSceneSequenceTickManagerClient : public UInterface
{ 
public:
};

/// Class /Script/MovieScene.MovieSceneSectionChannelOverrideRegistry
/// Size: 0x0050 (0x000028 - 0x000078)
class UMovieSceneSectionChannelOverrideRegistry : public UObject
{ 
public:
	SDK_UNDEFINED(80,929) /* TMap<FName, UMovieSceneChannelOverrideContainer*> */ __um(Overrides);                 // 0x0028   (0x0050)  
};

/// Class /Script/MovieScene.MovieSceneTrackTemplateProducer
/// Size: 0x0000 (0x000028 - 0x000028)
class UMovieSceneTrackTemplateProducer : public UInterface
{ 
public:
};

/// Struct /Script/MovieScene.MovieSceneEvaluationTemplateSerialNumber
/// Size: 0x0004 (0x000000 - 0x000004)
struct FMovieSceneEvaluationTemplateSerialNumber
{ 
	uint32_t                                           Value;                                                      // 0x0000   (0x0004)  
};

/// Struct /Script/MovieScene.MovieSceneTrackIdentifier
/// Size: 0x0004 (0x000000 - 0x000004)
struct FMovieSceneTrackIdentifier
{ 
	uint32_t                                           Value;                                                      // 0x0000   (0x0004)  
};

/// Struct /Script/MovieScene.MovieSceneTemplateGenerationLedger
/// Size: 0x00A8 (0x000000 - 0x0000A8)
struct FMovieSceneTemplateGenerationLedger
{ 
	FMovieSceneTrackIdentifier                         LastTrackIdentifier;                                        // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	SDK_UNDEFINED(80,930) /* TMap<FGuid, FMovieSceneTrackIdentifier> */ __um(TrackSignatureToTrackIdentifier);     // 0x0008   (0x0050)  
	SDK_UNDEFINED(80,931) /* TMap<FGuid, FMovieSceneFrameRange> */ __um(SubSectionRanges);                         // 0x0058   (0x0050)  
};

/// Struct /Script/MovieScene.MovieSceneEvaluationTemplate
/// Size: 0x0160 (0x000000 - 0x000160)
struct FMovieSceneEvaluationTemplate
{ 
	SDK_UNDEFINED(80,932) /* TMap<FMovieSceneTrackIdentifier, FMovieSceneEvaluationTrack> */ __um(Tracks);         // 0x0000   (0x0050)  
	unsigned char                                      UnknownData00_5[0x50];                                      // 0x0050   (0x0050)  MISSED
	FGuid                                              SequenceSignature;                                          // 0x00A0   (0x0010)  
	FMovieSceneEvaluationTemplateSerialNumber          TemplateSerialNumber;                                       // 0x00B0   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x00B4   (0x0004)  MISSED
	FMovieSceneTemplateGenerationLedger                TemplateLedger;                                             // 0x00B8   (0x00A8)  
};

/// Struct /Script/MovieScene.MovieSceneSequenceID
/// Size: 0x0004 (0x000000 - 0x000004)
struct FMovieSceneSequenceID
{ 
	uint32_t                                           Value;                                                      // 0x0000   (0x0004)  
};

/// Struct /Script/MovieScene.MovieSceneSequenceHierarchyNode
/// Size: 0x0018 (0x000000 - 0x000018)
struct FMovieSceneSequenceHierarchyNode
{ 
	FMovieSceneSequenceID                              ParentID;                                                   // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	TArray<FMovieSceneSequenceID>                      Children;                                                   // 0x0008   (0x0010)  
};

/// Struct /Script/MovieScene.MovieSceneSubSequenceTree
/// Size: 0x0060 (0x000000 - 0x000060)
struct FMovieSceneSubSequenceTree
{ 
	unsigned char                                      UnknownData00_1[0x60];                                      // 0x0000   (0x0060)  MISSED
};

/// Struct /Script/MovieScene.MovieSceneSequenceHierarchy
/// Size: 0x0118 (0x000000 - 0x000118)
struct FMovieSceneSequenceHierarchy
{ 
	FMovieSceneSequenceHierarchyNode                   RootNode;                                                   // 0x0000   (0x0018)  
	FMovieSceneSubSequenceTree                         Tree;                                                       // 0x0018   (0x0060)  
	SDK_UNDEFINED(80,933) /* TMap<FMovieSceneSequenceID, FMovieSceneSubSequenceData> */ __um(SubSequences);        // 0x0078   (0x0050)  
	SDK_UNDEFINED(80,934) /* TMap<FMovieSceneSequenceID, FMovieSceneSequenceHierarchyNode> */ __um(Hierarchy);     // 0x00C8   (0x0050)  
};

/// Struct /Script/MovieScene.MovieSceneEvaluationFieldEntityTree
/// Size: 0x0060 (0x000000 - 0x000060)
struct FMovieSceneEvaluationFieldEntityTree
{ 
	unsigned char                                      UnknownData00_1[0x60];                                      // 0x0000   (0x0060)  MISSED
};

/// Struct /Script/MovieScene.MovieSceneEvaluationFieldEntityKey
/// Size: 0x000C (0x000000 - 0x00000C)
struct FMovieSceneEvaluationFieldEntityKey
{ 
	SDK_UNDEFINED(8,935) /* TWeakObjectPtr<UObject*> */ __um(EntityOwner);                                         // 0x0000   (0x0008)  
	uint32_t                                           EntityID;                                                   // 0x0008   (0x0004)  
};

/// Struct /Script/MovieScene.MovieSceneEvaluationFieldEntity
/// Size: 0x0010 (0x000000 - 0x000010)
struct FMovieSceneEvaluationFieldEntity
{ 
	FMovieSceneEvaluationFieldEntityKey                Key;                                                        // 0x0000   (0x000C)  
	int32_t                                            SharedMetaDataIndex;                                        // 0x000C   (0x0004)  
};

/// Struct /Script/MovieScene.MovieSceneEvaluationFieldEntityMetaData
/// Size: 0x0020 (0x000000 - 0x000020)
struct FMovieSceneEvaluationFieldEntityMetaData
{ 
	SDK_UNDEFINED(16,936) /* FString */                __um(OverrideBoundPropertyPath);                            // 0x0000   (0x0010)  
	FFrameNumber                                       ForcedTime;                                                 // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0014   (0x0004)  MISSED
	ESectionEvaluationFlags                            Flags;                                                      // 0x0018   (0x0001)  
	bool                                               bEvaluateInSequencePreRoll : 1;                             // 0x0019:0 (0x0001)  
	bool                                               bEvaluateInSequencePostRoll : 1;                            // 0x0019:1 (0x0001)  
	unsigned char                                      UnknownData01_6[0x6];                                       // 0x001A   (0x0006)  MISSED
};

/// Struct /Script/MovieScene.MovieSceneEvaluationFieldSharedEntityMetaData
/// Size: 0x0010 (0x000000 - 0x000010)
struct FMovieSceneEvaluationFieldSharedEntityMetaData
{ 
	FGuid                                              ObjectBindingID;                                            // 0x0000   (0x0010)  
};

/// Struct /Script/MovieScene.MovieSceneEntityComponentField
/// Size: 0x00F0 (0x000000 - 0x0000F0)
struct FMovieSceneEntityComponentField
{ 
	FMovieSceneEvaluationFieldEntityTree               PersistentEntityTree;                                       // 0x0000   (0x0060)  
	FMovieSceneEvaluationFieldEntityTree               OneShotEntityTree;                                          // 0x0060   (0x0060)  
	TArray<FMovieSceneEvaluationFieldEntity>           Entities;                                                   // 0x00C0   (0x0010)  
	TArray<FMovieSceneEvaluationFieldEntityMetaData>   EntityMetaData;                                             // 0x00D0   (0x0010)  
	TArray<FMovieSceneEvaluationFieldSharedEntityMetaData> SharedMetaData;                                         // 0x00E0   (0x0010)  
};

/// Struct /Script/MovieScene.MovieSceneEvaluationGroupLUTIndex
/// Size: 0x0008 (0x000000 - 0x000008)
struct FMovieSceneEvaluationGroupLUTIndex
{ 
	int32_t                                            NumInitPtrs;                                                // 0x0000   (0x0004)  
	int32_t                                            NumEvalPtrs;                                                // 0x0004   (0x0004)  
};

/// Struct /Script/MovieScene.MovieSceneEvaluationFieldTrackPtr
/// Size: 0x0008 (0x000000 - 0x000008)
struct FMovieSceneEvaluationFieldTrackPtr
{ 
	FMovieSceneSequenceID                              SequenceID;                                                 // 0x0000   (0x0004)  
	FMovieSceneTrackIdentifier                         TrackIdentifier;                                            // 0x0004   (0x0004)  
};

/// Struct /Script/MovieScene.MovieSceneFieldEntry_EvaluationTrack
/// Size: 0x000C (0x000000 - 0x00000C)
struct FMovieSceneFieldEntry_EvaluationTrack
{ 
	FMovieSceneEvaluationFieldTrackPtr                 TrackPtr;                                                   // 0x0000   (0x0008)  
	uint16_t                                           NumChildren;                                                // 0x0008   (0x0002)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x000A   (0x0002)  MISSED
};

/// Struct /Script/MovieScene.MovieSceneFieldEntry_ChildTemplate
/// Size: 0x0008 (0x000000 - 0x000008)
struct FMovieSceneFieldEntry_ChildTemplate
{ 
	uint16_t                                           ChildIndex;                                                 // 0x0000   (0x0002)  
	ESectionEvaluationFlags                            Flags;                                                      // 0x0002   (0x0001)  
	unsigned char                                      UnknownData00_5[0x1];                                       // 0x0003   (0x0001)  MISSED
	FFrameNumber                                       ForcedTime;                                                 // 0x0004   (0x0004)  
};

/// Struct /Script/MovieScene.MovieSceneEvaluationGroup
/// Size: 0x0030 (0x000000 - 0x000030)
struct FMovieSceneEvaluationGroup
{ 
	TArray<FMovieSceneEvaluationGroupLUTIndex>         LUTIndices;                                                 // 0x0000   (0x0010)  
	TArray<FMovieSceneFieldEntry_EvaluationTrack>      TrackLUT;                                                   // 0x0010   (0x0010)  
	TArray<FMovieSceneFieldEntry_ChildTemplate>        SectionLUT;                                                 // 0x0020   (0x0010)  
};

/// Struct /Script/MovieScene.MovieSceneEvaluationKey
/// Size: 0x000C (0x000000 - 0x00000C)
struct FMovieSceneEvaluationKey
{ 
	FMovieSceneSequenceID                              SequenceID;                                                 // 0x0000   (0x0004)  
	FMovieSceneTrackIdentifier                         TrackIdentifier;                                            // 0x0004   (0x0004)  
	uint32_t                                           SectionIndex;                                               // 0x0008   (0x0004)  
};

/// Struct /Script/MovieScene.MovieSceneOrderedEvaluationKey
/// Size: 0x0010 (0x000000 - 0x000010)
struct FMovieSceneOrderedEvaluationKey
{ 
	FMovieSceneEvaluationKey                           Key;                                                        // 0x0000   (0x000C)  
	uint16_t                                           SetupIndex;                                                 // 0x000C   (0x0002)  
	uint16_t                                           TearDownIndex;                                              // 0x000E   (0x0002)  
};

/// Struct /Script/MovieScene.MovieSceneEvaluationMetaData
/// Size: 0x0020 (0x000000 - 0x000020)
struct FMovieSceneEvaluationMetaData
{ 
	TArray<FMovieSceneSequenceID>                      ActiveSequences;                                            // 0x0000   (0x0010)  
	TArray<FMovieSceneOrderedEvaluationKey>            ActiveEntities;                                             // 0x0010   (0x0010)  
};

/// Struct /Script/MovieScene.MovieSceneEvaluationField
/// Size: 0x0030 (0x000000 - 0x000030)
struct FMovieSceneEvaluationField
{ 
	TArray<FMovieSceneFrameRange>                      Ranges;                                                     // 0x0000   (0x0010)  
	TArray<FMovieSceneEvaluationGroup>                 Groups;                                                     // 0x0010   (0x0010)  
	TArray<FMovieSceneEvaluationMetaData>              MetaData;                                                   // 0x0020   (0x0010)  
};

/// Struct /Script/MovieScene.MovieSceneSequenceCompilerMaskStruct
/// Size: 0x0001 (0x000000 - 0x000001)
struct FMovieSceneSequenceCompilerMaskStruct
{ 
	bool                                               bHierarchy : 1;                                             // 0x0000:0 (0x0001)  
	bool                                               bEvaluationTemplate : 1;                                    // 0x0000:1 (0x0001)  
	bool                                               bEvaluationTemplateField : 1;                               // 0x0000:2 (0x0001)  
	bool                                               bEntityComponentField : 1;                                  // 0x0000:3 (0x0001)  
};

/// Class /Script/MovieScene.MovieSceneCompiledData
/// Size: 0x03D0 (0x000028 - 0x0003F8)
class UMovieSceneCompiledData : public UObject
{ 
public:
	FMovieSceneEvaluationTemplate                      EvaluationTemplate;                                         // 0x0028   (0x0160)  
	FMovieSceneSequenceHierarchy                       Hierarchy;                                                  // 0x0188   (0x0118)  
	FMovieSceneEntityComponentField                    EntityComponentField;                                       // 0x02A0   (0x00F0)  
	FMovieSceneEvaluationField                         TrackTemplateField;                                         // 0x0390   (0x0030)  
	TArray<FFrameTime>                                 DeterminismFences;                                          // 0x03C0   (0x0010)  
	FGuid                                              CompiledSignature;                                          // 0x03D0   (0x0010)  
	FGuid                                              CompilerVersion;                                            // 0x03E0   (0x0010)  
	FMovieSceneSequenceCompilerMaskStruct              AccumulatedMask;                                            // 0x03F0   (0x0001)  
	FMovieSceneSequenceCompilerMaskStruct              AllocatedMask;                                              // 0x03F1   (0x0001)  
	EMovieSceneSequenceFlags                           AccumulatedFlags;                                           // 0x03F2   (0x0001)  
	unsigned char                                      UnknownData00_6[0x5];                                       // 0x03F3   (0x0005)  MISSED
};

/// Class /Script/MovieScene.MovieSceneCompiledDataManager
/// Size: 0x0208 (0x000028 - 0x000230)
class UMovieSceneCompiledDataManager : public UObject
{ 
public:
	unsigned char                                      UnknownData00_2[0xB0];                                      // 0x0028   (0x00B0)  MISSED
	SDK_UNDEFINED(80,937) /* TMap<int32_t, FMovieSceneSequenceHierarchy> */ __um(Hierarchies);                     // 0x00D8   (0x0050)  
	SDK_UNDEFINED(80,938) /* TMap<int32_t, FMovieSceneEvaluationTemplate> */ __um(TrackTemplates);                 // 0x0128   (0x0050)  
	SDK_UNDEFINED(80,939) /* TMap<int32_t, FMovieSceneEvaluationField> */ __um(TrackTemplateFields);               // 0x0178   (0x0050)  
	SDK_UNDEFINED(80,940) /* TMap<int32_t, FMovieSceneEntityComponentField> */ __um(EntityComponentFields);        // 0x01C8   (0x0050)  
	unsigned char                                      UnknownData01_6[0x18];                                      // 0x0218   (0x0018)  MISSED
};

/// Class /Script/MovieScene.MovieSceneEntityProvider
/// Size: 0x0000 (0x000028 - 0x000028)
class UMovieSceneEntityProvider : public UInterface
{ 
public:
};

/// Class /Script/MovieScene.MovieSceneBlenderSystem
/// Size: 0x0028 (0x000040 - 0x000068)
class UMovieSceneBlenderSystem : public UMovieSceneEntitySystem
{ 
public:
	unsigned char                                      UnknownData00_1[0x28];                                      // 0x0040   (0x0028)  MISSED
};

/// Class /Script/MovieScene.MovieSceneGenericBoundObjectInstantiator
/// Size: 0x0000 (0x000040 - 0x000040)
class UMovieSceneGenericBoundObjectInstantiator : public UMovieSceneEntityInstantiatorSystem
{ 
public:
};

/// Class /Script/MovieScene.MovieSceneBoundSceneComponentInstantiator
/// Size: 0x0000 (0x000040 - 0x000040)
class UMovieSceneBoundSceneComponentInstantiator : public UMovieSceneEntityInstantiatorSystem
{ 
public:
};

/// Class /Script/MovieScene.MovieSceneValueDecomposer
/// Size: 0x0000 (0x000028 - 0x000028)
class UMovieSceneValueDecomposer : public UInterface
{ 
public:
};

/// Class /Script/MovieScene.MovieSceneEvalTimeSystem
/// Size: 0x0010 (0x000040 - 0x000050)
class UMovieSceneEvalTimeSystem : public UMovieSceneEntitySystem
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0040   (0x0010)  MISSED
};

/// Class /Script/MovieScene.MovieSceneEvaluationHookSystem
/// Size: 0x0050 (0x000040 - 0x000090)
class UMovieSceneEvaluationHookSystem : public UMovieSceneEntitySystem
{ 
public:
	SDK_UNDEFINED(80,941) /* TMap<FMovieSceneEvaluationInstanceKey, FMovieSceneEvaluationHookEventContainer> */ __um(PendingEventsByRootInstance); // 0x0040   (0x0050)  
};

/// Class /Script/MovieScene.MovieSceneMasterInstantiatorSystem
/// Size: 0x0000 (0x000040 - 0x000040)
class UMovieSceneMasterInstantiatorSystem : public UMovieSceneEntityInstantiatorSystem
{ 
public:
};

/// Class /Script/MovieScene.MovieScenePreAnimatedStateSystemInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UMovieScenePreAnimatedStateSystemInterface : public UInterface
{ 
public:
};

/// Class /Script/MovieScene.MovieSceneCachePreAnimatedStateSystem
/// Size: 0x0000 (0x000040 - 0x000040)
class UMovieSceneCachePreAnimatedStateSystem : public UMovieSceneEntityInstantiatorSystem
{ 
public:
};

/// Class /Script/MovieScene.MovieSceneRestorePreAnimatedStateSystem
/// Size: 0x0010 (0x000040 - 0x000050)
class UMovieSceneRestorePreAnimatedStateSystem : public UMovieSceneEntityInstantiatorSystem
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0040   (0x0010)  MISSED
};

/// Class /Script/MovieScene.MovieSceneSpawnablesSystem
/// Size: 0x0000 (0x000040 - 0x000040)
class UMovieSceneSpawnablesSystem : public UMovieSceneEntitySystem
{ 
public:
};

/// Struct /Script/MovieScene.MovieSceneTrackInstanceInput
/// Size: 0x0010 (0x000000 - 0x000010)
struct FMovieSceneTrackInstanceInput
{ 
	class UMovieSceneSection*                          Section;                                                    // 0x0000   (0x0008)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0008   (0x0008)  MISSED
};

/// Class /Script/MovieScene.MovieSceneTrackInstance
/// Size: 0x0028 (0x000028 - 0x000050)
class UMovieSceneTrackInstance : public UObject
{ 
public:
	class UObject*                                     AnimatedObject;                                             // 0x0028   (0x0008)  
	bool                                               bIsMasterTrackInstance;                                     // 0x0030   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0031   (0x0007)  MISSED
	class UMovieSceneEntitySystemLinker*               PrivateLinker;                                              // 0x0038   (0x0008)  
	TArray<FMovieSceneTrackInstanceInput>              Inputs;                                                     // 0x0040   (0x0010)  
};

/// Class /Script/MovieScene.MovieSceneTrackInstanceInstantiator
/// Size: 0x00B0 (0x000040 - 0x0000F0)
class UMovieSceneTrackInstanceInstantiator : public UMovieSceneEntityInstantiatorSystem
{ 
public:
	unsigned char                                      UnknownData00_1[0xB0];                                      // 0x0040   (0x00B0)  MISSED
};

/// Class /Script/MovieScene.MovieSceneTrackInstanceSystem
/// Size: 0x0008 (0x000040 - 0x000048)
class UMovieSceneTrackInstanceSystem : public UMovieSceneEntitySystem
{ 
public:
	class UMovieSceneTrackInstanceInstantiator*        Instantiator;                                               // 0x0040   (0x0008)  
};

/// Class /Script/MovieScene.MovieSceneCustomClockSource
/// Size: 0x0000 (0x000028 - 0x000028)
class UMovieSceneCustomClockSource : public UInterface
{ 
public:


	/// Functions
	// Function /Script/MovieScene.MovieSceneCustomClockSource.OnTick
	// void OnTick(float DeltaSeconds, float InPlayRate);                                                                    // [0x3362fe0] Native|Public        
	// Function /Script/MovieScene.MovieSceneCustomClockSource.OnStopPlaying
	// void OnStopPlaying(FQualifiedFrameTime& InStopTime);                                                                  // [0x3362f30] Native|Public|HasOutParms 
	// Function /Script/MovieScene.MovieSceneCustomClockSource.OnStartPlaying
	// void OnStartPlaying(FQualifiedFrameTime& InStartTime);                                                                // [0x3362e80] Native|Public|HasOutParms 
	// Function /Script/MovieScene.MovieSceneCustomClockSource.OnRequestCurrentTime
	// FFrameTime OnRequestCurrentTime(FQualifiedFrameTime& InCurrentTime, float InPlayRate);                                // [0x3362d70] Native|Public|HasOutParms 
};

/// Class /Script/MovieScene.MovieSceneBuiltInEasingFunction
/// Size: 0x0010 (0x000028 - 0x000038)
class UMovieSceneBuiltInEasingFunction : public UObject
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0028   (0x0008)  MISSED
	EMovieSceneBuiltInEasing                           Type;                                                       // 0x0030   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0031   (0x0007)  MISSED
};

/// Class /Script/MovieScene.MovieSceneEasingExternalCurve
/// Size: 0x0010 (0x000028 - 0x000038)
class UMovieSceneEasingExternalCurve : public UObject
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0028   (0x0008)  MISSED
	class UCurveFloat*                                 Curve;                                                      // 0x0030   (0x0008)  
};

/// Class /Script/MovieScene.NodeAndChannelMappings
/// Size: 0x0000 (0x000028 - 0x000028)
class UNodeAndChannelMappings : public UInterface
{ 
public:
};

/// Class /Script/MovieScene.MovieSceneNodeGroup
/// Size: 0x0000 (0x000028 - 0x000028)
class UMovieSceneNodeGroup : public UObject
{ 
public:
};

/// Class /Script/MovieScene.MovieSceneNodeGroupCollection
/// Size: 0x0000 (0x000028 - 0x000028)
class UMovieSceneNodeGroupCollection : public UObject
{ 
public:
};

/// Struct /Script/MovieScene.MovieSceneSpawnable
/// Size: 0x00C0 (0x000000 - 0x0000C0)
struct FMovieSceneSpawnable
{ 
	FTransform                                         SpawnTransform;                                             // 0x0000   (0x0060)  
	TArray<FName>                                      Tags;                                                       // 0x0060   (0x0010)  
	bool                                               bContinuouslyRespawn;                                       // 0x0070   (0x0001)  
	bool                                               bNetAddressableName;                                        // 0x0071   (0x0001)  
	bool                                               bEvaluateTracksWhenNotSpawned;                              // 0x0072   (0x0001)  
	unsigned char                                      UnknownData00_5[0x1];                                       // 0x0073   (0x0001)  MISSED
	FGuid                                              Guid;                                                       // 0x0074   (0x0010)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x0084   (0x0004)  MISSED
	SDK_UNDEFINED(16,942) /* FString */                __um(Name);                                                 // 0x0088   (0x0010)  
	class UObject*                                     ObjectTemplate;                                             // 0x0098   (0x0008)  
	TArray<FGuid>                                      ChildPossessables;                                          // 0x00A0   (0x0010)  
	ESpawnOwnership                                    Ownership;                                                  // 0x00B0   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x00B1   (0x0003)  MISSED
	FName                                              LevelName;                                                  // 0x00B4   (0x0008)  
	unsigned char                                      UnknownData03_6[0x4];                                       // 0x00BC   (0x0004)  MISSED
};

/// Struct /Script/MovieScene.MovieSceneObjectBindingID
/// Size: 0x0018 (0x000000 - 0x000018)
struct FMovieSceneObjectBindingID
{ 
	FGuid                                              Guid;                                                       // 0x0000   (0x0010)  
	int32_t                                            SequenceID;                                                 // 0x0010   (0x0004)  
	int32_t                                            ResolveParentIndex;                                         // 0x0014   (0x0004)  
};

/// Struct /Script/MovieScene.MovieScenePossessable
/// Size: 0x0058 (0x000000 - 0x000058)
struct FMovieScenePossessable
{ 
	TArray<FName>                                      Tags;                                                       // 0x0000   (0x0010)  
	FGuid                                              Guid;                                                       // 0x0010   (0x0010)  
	SDK_UNDEFINED(16,943) /* FString */                __um(Name);                                                 // 0x0020   (0x0010)  
	FGuid                                              ParentGuid;                                                 // 0x0030   (0x0010)  
	FMovieSceneObjectBindingID                         SpawnableObjectBindingID;                                   // 0x0040   (0x0018)  
};

/// Struct /Script/MovieScene.MovieSceneBinding
/// Size: 0x0030 (0x000000 - 0x000030)
struct FMovieSceneBinding
{ 
	FGuid                                              ObjectGuid;                                                 // 0x0000   (0x0010)  
	SDK_UNDEFINED(16,944) /* FString */                __um(BindingName);                                          // 0x0010   (0x0010)  
	TArray<class UMovieSceneTrack*>                    Tracks;                                                     // 0x0020   (0x0010)  
};

/// Struct /Script/MovieScene.MovieSceneMarkedFrame
/// Size: 0x0020 (0x000000 - 0x000020)
struct FMovieSceneMarkedFrame
{ 
	FFrameNumber                                       FrameNumber;                                                // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	SDK_UNDEFINED(16,945) /* FString */                __um(Label);                                                // 0x0008   (0x0010)  
	bool                                               bIsDeterminismFence;                                        // 0x0018   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0019   (0x0007)  MISSED
};

/// Class /Script/MovieScene.MovieScene
/// Size: 0x0108 (0x000058 - 0x000160)
class UMovieScene : public UMovieSceneSignedObject
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0058   (0x0008)  MISSED
	TArray<FMovieSceneSpawnable>                       Spawnables;                                                 // 0x0060   (0x0010)  
	TArray<FMovieScenePossessable>                     Possessables;                                               // 0x0070   (0x0010)  
	TArray<FMovieSceneBinding>                         ObjectBindings;                                             // 0x0080   (0x0010)  
	SDK_UNDEFINED(80,946) /* TMap<FName, FMovieSceneObjectBindingIDs> */ __um(BindingGroups);                      // 0x0090   (0x0050)  
	TArray<class UMovieSceneTrack*>                    MasterTracks;                                               // 0x00E0   (0x0010)  
	class UMovieSceneTrack*                            CameraCutTrack;                                             // 0x00F0   (0x0008)  
	FMovieSceneFrameRange                              SelectionRange;                                             // 0x00F8   (0x0010)  
	FMovieSceneFrameRange                              PlaybackRange;                                              // 0x0108   (0x0010)  
	FFrameRate                                         TickResolution;                                             // 0x0118   (0x0008)  
	FFrameRate                                         DisplayRate;                                                // 0x0120   (0x0008)  
	EMovieSceneEvaluationType                          EvaluationType;                                             // 0x0128   (0x0001)  
	EUpdateClockSource                                 ClockSource;                                                // 0x0129   (0x0001)  
	unsigned char                                      UnknownData01_5[0x6];                                       // 0x012A   (0x0006)  MISSED
	FSoftObjectPath                                    CustomClockSourcePath;                                      // 0x0130   (0x0020)  
	TArray<FMovieSceneMarkedFrame>                     MarkedFrames;                                               // 0x0150   (0x0010)  
};

/// Struct /Script/MovieScene.MovieSceneBindingOverrideData
/// Size: 0x0050 (0x000000 - 0x000050)
struct FMovieSceneBindingOverrideData
{ 
	FMovieSceneObjectBindingID                         ObjectBindingID;                                            // 0x0000   (0x0018)  
	SDK_UNDEFINED(48,947) /* TWeakObjectPtr<UObject*> */ __um(Object);                                             // 0x0018   (0x0030)  
	bool                                               bOverridesDefault;                                          // 0x0048   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0049   (0x0007)  MISSED
};

/// Class /Script/MovieScene.MovieSceneBindingOverrides
/// Size: 0x0068 (0x000028 - 0x000090)
class UMovieSceneBindingOverrides : public UObject
{ 
public:
	TArray<FMovieSceneBindingOverrideData>             BindingData;                                                // 0x0028   (0x0010)  
	unsigned char                                      UnknownData00_6[0x58];                                      // 0x0038   (0x0058)  MISSED
};

/// Class /Script/MovieScene.MovieSceneFolder
/// Size: 0x0050 (0x000028 - 0x000078)
class UMovieSceneFolder : public UObject
{ 
public:
	unsigned char                                      UnknownData00_2[0x4];                                       // 0x0028   (0x0004)  MISSED
	FName                                              FolderName;                                                 // 0x002C   (0x0008)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x0034   (0x0004)  MISSED
	TArray<class UMovieSceneFolder*>                   ChildFolders;                                               // 0x0038   (0x0010)  
	TArray<class UMovieSceneTrack*>                    ChildMasterTracks;                                          // 0x0048   (0x0010)  
	SDK_UNDEFINED(16,948) /* TArray<FString> */        __um(ChildObjectBindingStrings);                            // 0x0058   (0x0010)  
	unsigned char                                      UnknownData02_6[0x10];                                      // 0x0068   (0x0010)  MISSED
};

/// Class /Script/MovieScene.MovieSceneSequenceTickManager
/// Size: 0x0070 (0x000028 - 0x000098)
class UMovieSceneSequenceTickManager : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x70];                                      // 0x0028   (0x0070)  MISSED
};

/// Struct /Script/MovieScene.MovieSceneChannel
/// Size: 0x0050 (0x000000 - 0x000050)
struct FMovieSceneChannel
{ 
	unsigned char                                      UnknownData00_1[0x50];                                      // 0x0000   (0x0050)  MISSED
};

/// Struct /Script/MovieScene.MovieSceneBoolChannel
/// Size: 0x00B0 (0x000050 - 0x000100)
struct FMovieSceneBoolChannel : FMovieSceneChannel
{ 
	TArray<FFrameNumber>                               Times;                                                      // 0x0050   (0x0010)  
	bool                                               DefaultValue;                                               // 0x0060   (0x0001)  
	bool                                               bHasDefaultValue;                                           // 0x0061   (0x0001)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x0062   (0x0006)  MISSED
	TArray<bool>                                       Values;                                                     // 0x0068   (0x0010)  
	unsigned char                                      UnknownData01_6[0x88];                                      // 0x0078   (0x0088)  MISSED
};

/// Class /Script/MovieScene.MovieSceneBoolSection
/// Size: 0x0108 (0x0000F0 - 0x0001F8)
class UMovieSceneBoolSection : public UMovieSceneSection
{ 
public:
	bool                                               DefaultValue;                                               // 0x00F0   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x00F1   (0x0007)  MISSED
	FMovieSceneBoolChannel                             BoolCurve;                                                  // 0x00F8   (0x0100)  
};

/// Class /Script/MovieScene.MovieSceneHookSection
/// Size: 0x0018 (0x0000F0 - 0x000108)
class UMovieSceneHookSection : public UMovieSceneSection
{ 
public:
	unsigned char                                      UnknownData00_2[0x10];                                      // 0x00F0   (0x0010)  MISSED
	bool                                               bRequiresRangedHook : 1;                                    // 0x0100:0 (0x0001)  
	bool                                               bRequiresTriggerHooks : 1;                                  // 0x0100:1 (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0101   (0x0007)  MISSED
};

/// Class /Script/MovieScene.MovieSceneSpawnSection
/// Size: 0x0008 (0x0001F8 - 0x000200)
class UMovieSceneSpawnSection : public UMovieSceneBoolSection
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x01F8   (0x0008)  MISSED
};

/// Class /Script/MovieScene.TestMovieSceneTrack
/// Size: 0x0020 (0x000098 - 0x0000B8)
class UTestMovieSceneTrack : public UMovieSceneTrack
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0098   (0x0008)  MISSED
	bool                                               bHighPassFilter;                                            // 0x00A0   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x00A1   (0x0007)  MISSED
	TArray<class UMovieSceneSection*>                  SectionArray;                                               // 0x00A8   (0x0010)  
};

/// Class /Script/MovieScene.TestMovieSceneSection
/// Size: 0x0000 (0x0000F0 - 0x0000F0)
class UTestMovieSceneSection : public UMovieSceneSection
{ 
public:
};

/// Class /Script/MovieScene.TestMovieSceneSequence
/// Size: 0x0008 (0x000068 - 0x000070)
class UTestMovieSceneSequence : public UMovieSceneSequence
{ 
public:
	class UMovieScene*                                 MovieScene;                                                 // 0x0068   (0x0008)  
};

/// Class /Script/MovieScene.TestMovieSceneSubTrack
/// Size: 0x0010 (0x0000A8 - 0x0000B8)
class UTestMovieSceneSubTrack : public UMovieSceneSubTrack
{ 
public:
	TArray<class UMovieSceneSection*>                  SectionArray;                                               // 0x00A8   (0x0010)  
};

/// Class /Script/MovieScene.TestMovieSceneSubSection
/// Size: 0x0000 (0x000130 - 0x000130)
class UTestMovieSceneSubSection : public UMovieSceneSubSection
{ 
public:
};

/// Class /Script/MovieScene.TestMovieSceneEvalHookTrack
/// Size: 0x0010 (0x000098 - 0x0000A8)
class UTestMovieSceneEvalHookTrack : public UMovieSceneTrack
{ 
public:
	TArray<class UMovieSceneSection*>                  SectionArray;                                               // 0x0098   (0x0010)  
};

/// Class /Script/MovieScene.TestMovieSceneEvalHookSection
/// Size: 0x0018 (0x000108 - 0x000120)
class UTestMovieSceneEvalHookSection : public UMovieSceneHookSection
{ 
public:
	unsigned char                                      UnknownData00_1[0x18];                                      // 0x0108   (0x0018)  MISSED
};

/// Class /Script/MovieScene.MovieSceneSpawnTrack
/// Size: 0x0020 (0x000098 - 0x0000B8)
class UMovieSceneSpawnTrack : public UMovieSceneTrack
{ 
public:
	TArray<class UMovieSceneSection*>                  Sections;                                                   // 0x0098   (0x0010)  
	FGuid                                              ObjectGuid;                                                 // 0x00A8   (0x0010)  
};

/// Struct /Script/MovieScene.MovieSceneEvalTemplateBase
/// Size: 0x0010 (0x000000 - 0x000010)
struct FMovieSceneEvalTemplateBase
{ 
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0000   (0x0010)  MISSED
};

/// Struct /Script/MovieScene.MovieSceneEvalTemplate
/// Size: 0x0010 (0x000010 - 0x000020)
struct FMovieSceneEvalTemplate : FMovieSceneEvalTemplateBase
{ 
	EMovieSceneCompletionMode                          CompletionMode;                                             // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0011   (0x0003)  MISSED
	SDK_UNDEFINED(8,949) /* TWeakObjectPtr<UMovieSceneSection*> */ __um(SourceSectionPtr);                         // 0x0014   (0x0008)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x001C   (0x0004)  MISSED
};

/// Struct /Script/MovieScene.MovieSceneTrackImplementation
/// Size: 0x0000 (0x000010 - 0x000010)
struct FMovieSceneTrackImplementation : FMovieSceneEvalTemplateBase
{ 
};

/// Struct /Script/MovieScene.MovieSceneTangentData
/// Size: 0x0014 (0x000000 - 0x000014)
struct FMovieSceneTangentData
{ 
	float                                              ArriveTangent;                                              // 0x0000   (0x0004)  
	float                                              LeaveTangent;                                               // 0x0004   (0x0004)  
	float                                              ArriveTangentWeight;                                        // 0x0008   (0x0004)  
	float                                              LeaveTangentWeight;                                         // 0x000C   (0x0004)  
	SDK_UNDEFINED(1,950) /* TEnumAsByte<ERichCurveTangentWeightMode> */ __um(TangentWeightMode);                   // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0011   (0x0003)  MISSED
};

/// Struct /Script/MovieScene.MovieSceneFloatValue
/// Size: 0x001C (0x000000 - 0x00001C)
struct FMovieSceneFloatValue
{ 
	float                                              Value;                                                      // 0x0000   (0x0004)  
	FMovieSceneTangentData                             Tangent;                                                    // 0x0004   (0x0014)  
	SDK_UNDEFINED(1,951) /* TEnumAsByte<ERichCurveInterpMode> */ __um(InterpMode);                                 // 0x0018   (0x0001)  
	SDK_UNDEFINED(1,952) /* TEnumAsByte<ERichCurveTangentMode> */ __um(TangentMode);                               // 0x0019   (0x0001)  
	char                                               PaddingByte;                                                // 0x001A   (0x0001)  
	unsigned char                                      UnknownData00_6[0x1];                                       // 0x001B   (0x0001)  MISSED
};

/// Struct /Script/MovieScene.MovieSceneKeyHandleMap
/// Size: 0x0000 (0x000088 - 0x000088)
struct FMovieSceneKeyHandleMap : FKeyHandleLookupTable
{ 
};

/// Struct /Script/MovieScene.MovieSceneFloatChannel
/// Size: 0x00C0 (0x000050 - 0x000110)
struct FMovieSceneFloatChannel : FMovieSceneChannel
{ 
	SDK_UNDEFINED(1,953) /* TEnumAsByte<ERichCurveExtrapolation> */ __um(PreInfinityExtrap);                       // 0x0050   (0x0001)  
	SDK_UNDEFINED(1,954) /* TEnumAsByte<ERichCurveExtrapolation> */ __um(PostInfinityExtrap);                      // 0x0051   (0x0001)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x0052   (0x0006)  MISSED
	TArray<FFrameNumber>                               Times;                                                      // 0x0058   (0x0010)  
	TArray<FMovieSceneFloatValue>                      Values;                                                     // 0x0068   (0x0010)  
	float                                              DefaultValue;                                               // 0x0078   (0x0004)  
	bool                                               bHasDefaultValue;                                           // 0x007C   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x007D   (0x0003)  MISSED
	FMovieSceneKeyHandleMap                            KeyHandles;                                                 // 0x0080   (0x0088)  
	FFrameRate                                         TickResolution;                                             // 0x0108   (0x0008)  
};

/// Struct /Script/MovieScene.MovieSceneIntegerChannel
/// Size: 0x00B0 (0x000050 - 0x000100)
struct FMovieSceneIntegerChannel : FMovieSceneChannel
{ 
	TArray<FFrameNumber>                               Times;                                                      // 0x0050   (0x0010)  
	int32_t                                            DefaultValue;                                               // 0x0060   (0x0004)  
	bool                                               bHasDefaultValue;                                           // 0x0064   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0065   (0x0003)  MISSED
	TArray<int32_t>                                    Values;                                                     // 0x0068   (0x0010)  
	unsigned char                                      UnknownData01_6[0x88];                                      // 0x0078   (0x0088)  MISSED
};

/// Struct /Script/MovieScene.MovieSceneSequenceInstanceData
/// Size: 0x0008 (0x000000 - 0x000008)
struct FMovieSceneSequenceInstanceData
{ 
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0000   (0x0008)  MISSED
};

/// Struct /Script/MovieScene.MovieSceneEvaluationOperand
/// Size: 0x0014 (0x000000 - 0x000014)
struct FMovieSceneEvaluationOperand
{ 
	FGuid                                              ObjectBindingID;                                            // 0x0000   (0x0010)  
	FMovieSceneSequenceID                              SequenceID;                                                 // 0x0010   (0x0004)  
};

/// Struct /Script/MovieScene.MovieSceneByteChannel
/// Size: 0x00B8 (0x000050 - 0x000108)
struct FMovieSceneByteChannel : FMovieSceneChannel
{ 
	TArray<FFrameNumber>                               Times;                                                      // 0x0050   (0x0010)  
	char                                               DefaultValue;                                               // 0x0060   (0x0001)  
	bool                                               bHasDefaultValue;                                           // 0x0061   (0x0001)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x0062   (0x0006)  MISSED
	TArray<char>                                       Values;                                                     // 0x0068   (0x0010)  
	class UEnum*                                       Enum;                                                       // 0x0078   (0x0008)  
	unsigned char                                      UnknownData01_6[0x88];                                      // 0x0080   (0x0088)  MISSED
};

/// Struct /Script/MovieScene.MovieScenePropertyBinding
/// Size: 0x0014 (0x000000 - 0x000014)
struct FMovieScenePropertyBinding
{ 
	FName                                              PropertyName;                                               // 0x0000   (0x0008)  
	FName                                              PropertyPath;                                               // 0x0008   (0x0008)  
	bool                                               bCanUseClassLookup;                                         // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0011   (0x0003)  MISSED
};

/// Struct /Script/MovieScene.MovieScenePropertySectionData
/// Size: 0x0018 (0x000000 - 0x000018)
struct FMovieScenePropertySectionData
{ 
	FName                                              PropertyName;                                               // 0x0000   (0x0008)  
	SDK_UNDEFINED(16,955) /* FString */                __um(PropertyPath);                                         // 0x0008   (0x0010)  
};

/// Struct /Script/MovieScene.MovieScenePropertySectionTemplate
/// Size: 0x0018 (0x000020 - 0x000038)
struct FMovieScenePropertySectionTemplate : FMovieSceneEvalTemplate
{ 
	FMovieScenePropertySectionData                     PropertyData;                                               // 0x0020   (0x0018)  
};

/// Struct /Script/MovieScene.ActorForWorldTransforms
/// Size: 0x0018 (0x000000 - 0x000018)
struct FActorForWorldTransforms
{ 
	SDK_UNDEFINED(8,956) /* TWeakObjectPtr<AActor*> */ __um(Actor);                                                // 0x0000   (0x0008)  
	SDK_UNDEFINED(8,957) /* TWeakObjectPtr<USceneComponent*> */ __um(Component);                                   // 0x0008   (0x0008)  
	FName                                              SocketName;                                                 // 0x0010   (0x0008)  
};

/// Struct /Script/MovieScene.MovieSceneDeterminismData
/// Size: 0x0018 (0x000000 - 0x000018)
struct FMovieSceneDeterminismData
{ 
	TArray<FFrameTime>                                 Fences;                                                     // 0x0000   (0x0010)  
	bool                                               bParentSequenceRequiresLowerFence;                          // 0x0010   (0x0001)  
	bool                                               bParentSequenceRequiresUpperFence;                          // 0x0011   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x0012   (0x0006)  MISSED
};

/// Struct /Script/MovieScene.MovieSceneEmptyStruct
/// Size: 0x0001 (0x000000 - 0x000001)
struct FMovieSceneEmptyStruct
{ 
	unsigned char                                      UnknownData00_1[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/MovieScene.MovieSceneKeyStruct
/// Size: 0x0008 (0x000000 - 0x000008)
struct FMovieSceneKeyStruct
{ 
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0000   (0x0008)  MISSED
};

/// Struct /Script/MovieScene.GeneratedMovieSceneKeyStruct
/// Size: 0x0050 (0x000000 - 0x000050)
struct FGeneratedMovieSceneKeyStruct
{ 
	unsigned char                                      UnknownData00_1[0x50];                                      // 0x0000   (0x0050)  MISSED
};

/// Struct /Script/MovieScene.MovieSceneKeyTimeStruct
/// Size: 0x0020 (0x000008 - 0x000028)
struct FMovieSceneKeyTimeStruct : FMovieSceneKeyStruct
{ 
	FFrameNumber                                       Time;                                                       // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x1C];                                      // 0x000C   (0x001C)  MISSED
};

/// Struct /Script/MovieScene.MovieSceneSegmentIdentifier
/// Size: 0x0004 (0x000000 - 0x000004)
struct FMovieSceneSegmentIdentifier
{ 
	int32_t                                            IdentifierIndex;                                            // 0x0000   (0x0004)  
};

/// Struct /Script/MovieScene.SectionEvaluationData
/// Size: 0x000C (0x000000 - 0x00000C)
struct FSectionEvaluationData
{ 
	int32_t                                            ImplIndex;                                                  // 0x0000   (0x0004)  
	FFrameNumber                                       ForcedTime;                                                 // 0x0004   (0x0004)  
	ESectionEvaluationFlags                            Flags;                                                      // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0009   (0x0003)  MISSED
};

/// Struct /Script/MovieScene.MovieSceneSegment
/// Size: 0x0058 (0x000000 - 0x000058)
struct FMovieSceneSegment
{ 
	unsigned char                                      UnknownData00_1[0x58];                                      // 0x0000   (0x0058)  MISSED
};

/// Struct /Script/MovieScene.MovieSceneTimeTransform
/// Size: 0x000C (0x000000 - 0x00000C)
struct FMovieSceneTimeTransform
{ 
	float                                              TimeScale;                                                  // 0x0000   (0x0004)  
	FFrameTime                                         Offset;                                                     // 0x0004   (0x0008)  
};

/// Struct /Script/MovieScene.MovieSceneAudioTriggerChannel
/// Size: 0x00A8 (0x000050 - 0x0000F8)
struct FMovieSceneAudioTriggerChannel : FMovieSceneChannel
{ 
	TArray<FFrameNumber>                               Times;                                                      // 0x0050   (0x0010)  
	TArray<bool>                                       Values;                                                     // 0x0060   (0x0010)  
	unsigned char                                      UnknownData00_6[0x88];                                      // 0x0070   (0x0088)  MISSED
};

/// Struct /Script/MovieScene.MovieSceneDoubleValue
/// Size: 0x0020 (0x000000 - 0x000020)
struct FMovieSceneDoubleValue
{ 
	double                                             Value;                                                      // 0x0000   (0x0008)  
	FMovieSceneTangentData                             Tangent;                                                    // 0x0008   (0x0014)  
	SDK_UNDEFINED(1,958) /* TEnumAsByte<ERichCurveInterpMode> */ __um(InterpMode);                                 // 0x001C   (0x0001)  
	SDK_UNDEFINED(1,959) /* TEnumAsByte<ERichCurveTangentMode> */ __um(TangentMode);                               // 0x001D   (0x0001)  
	char                                               PaddingByte;                                                // 0x001E   (0x0001)  
	unsigned char                                      UnknownData00_6[0x1];                                       // 0x001F   (0x0001)  MISSED
};

/// Struct /Script/MovieScene.MovieSceneDoubleChannel
/// Size: 0x00C8 (0x000050 - 0x000118)
struct FMovieSceneDoubleChannel : FMovieSceneChannel
{ 
	SDK_UNDEFINED(1,960) /* TEnumAsByte<ERichCurveExtrapolation> */ __um(PreInfinityExtrap);                       // 0x0050   (0x0001)  
	SDK_UNDEFINED(1,961) /* TEnumAsByte<ERichCurveExtrapolation> */ __um(PostInfinityExtrap);                      // 0x0051   (0x0001)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x0052   (0x0006)  MISSED
	TArray<FFrameNumber>                               Times;                                                      // 0x0058   (0x0010)  
	TArray<FMovieSceneDoubleValue>                     Values;                                                     // 0x0068   (0x0010)  
	double                                             DefaultValue;                                               // 0x0078   (0x0008)  
	bool                                               bHasDefaultValue;                                           // 0x0080   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0081   (0x0007)  MISSED
	FMovieSceneKeyHandleMap                            KeyHandles;                                                 // 0x0088   (0x0088)  
	FFrameRate                                         TickResolution;                                             // 0x0110   (0x0008)  
};

/// Struct /Script/MovieScene.MovieSceneObjectPathChannelKeyValue
/// Size: 0x0038 (0x000000 - 0x000038)
struct FMovieSceneObjectPathChannelKeyValue
{ 
	SDK_UNDEFINED(48,962) /* TWeakObjectPtr<UObject*> */ __um(SoftPtr);                                            // 0x0000   (0x0030)  
	class UObject*                                     HardPtr;                                                    // 0x0030   (0x0008)  
};

/// Struct /Script/MovieScene.MovieSceneObjectPathChannel
/// Size: 0x00E8 (0x000050 - 0x000138)
struct FMovieSceneObjectPathChannel : FMovieSceneChannel
{ 
	class UClass*                                      PropertyClass;                                              // 0x0050   (0x0008)  
	TArray<FFrameNumber>                               Times;                                                      // 0x0058   (0x0010)  
	TArray<FMovieSceneObjectPathChannelKeyValue>       Values;                                                     // 0x0068   (0x0010)  
	FMovieSceneObjectPathChannelKeyValue               DefaultValue;                                               // 0x0078   (0x0038)  
	unsigned char                                      UnknownData00_6[0x88];                                      // 0x00B0   (0x0088)  MISSED
};

/// Struct /Script/MovieScene.MovieSceneCompiledSequenceFlagStruct
/// Size: 0x0001 (0x000000 - 0x000001)
struct FMovieSceneCompiledSequenceFlagStruct
{ 
	bool                                               bParentSequenceRequiresLowerFence : 1;                      // 0x0000:0 (0x0001)  
	bool                                               bParentSequenceRequiresUpperFence : 1;                      // 0x0000:1 (0x0001)  
};

/// Struct /Script/MovieScene.EasingComponentData
/// Size: 0x0008 (0x000000 - 0x000008)
struct FEasingComponentData
{ 
	class UMovieSceneSection*                          Section;                                                    // 0x0000   (0x0008)  
};

/// Struct /Script/MovieScene.MovieSceneTrackInstanceComponent
/// Size: 0x0010 (0x000000 - 0x000010)
struct FMovieSceneTrackInstanceComponent
{ 
	class UMovieSceneSection*                          Owner;                                                      // 0x0000   (0x0008)  
	class UClass*                                      TrackInstanceClass;                                         // 0x0008   (0x0008)  
};

/// Struct /Script/MovieScene.MovieSceneEvaluationHookComponent
/// Size: 0x0020 (0x000000 - 0x000020)
struct FMovieSceneEvaluationHookComponent
{ 
	SDK_UNDEFINED(16,963) /* TScriptInterface<Class> */ __um(Interface);                                           // 0x0000   (0x0010)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x0010   (0x0010)  MISSED
};

/// Struct /Script/MovieScene.TrackInstanceInputComponent
/// Size: 0x0010 (0x000000 - 0x000010)
struct FTrackInstanceInputComponent
{ 
	class UMovieSceneSection*                          Section;                                                    // 0x0000   (0x0008)  
	int32_t                                            OutputIndex;                                                // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
};

/// Struct /Script/MovieScene.MovieSceneEntitySystemGraphNode
/// Size: 0x0028 (0x000000 - 0x000028)
struct FMovieSceneEntitySystemGraphNode
{ 
	unsigned char                                      UnknownData00_2[0x20];                                      // 0x0000   (0x0020)  MISSED
	class UMovieSceneEntitySystem*                     System;                                                     // 0x0020   (0x0008)  
};

/// Struct /Script/MovieScene.MovieSceneEvaluationHookEvent
/// Size: 0x0038 (0x000000 - 0x000038)
struct FMovieSceneEvaluationHookEvent
{ 
	FMovieSceneEvaluationHookComponent                 Hook;                                                       // 0x0000   (0x0020)  
	unsigned char                                      UnknownData00_6[0x18];                                      // 0x0020   (0x0018)  MISSED
};

/// Struct /Script/MovieScene.MovieSceneEvaluationHookEventContainer
/// Size: 0x0010 (0x000000 - 0x000010)
struct FMovieSceneEvaluationHookEventContainer
{ 
	TArray<FMovieSceneEvaluationHookEvent>             Events;                                                     // 0x0000   (0x0010)  
};

/// Struct /Script/MovieScene.MovieSceneEvaluationInstanceKey
/// Size: 0x0004 (0x000000 - 0x000004)
struct FMovieSceneEvaluationInstanceKey
{ 
	unsigned char                                      UnknownData00_1[0x4];                                       // 0x0000   (0x0004)  MISSED
};

/// Struct /Script/MovieScene.MovieSceneTrackInstanceEntry
/// Size: 0x0010 (0x000000 - 0x000010)
struct FMovieSceneTrackInstanceEntry
{ 
	class UObject*                                     BoundObject;                                                // 0x0000   (0x0008)  
	class UMovieSceneTrackInstance*                    TrackInstance;                                              // 0x0008   (0x0008)  
};

/// Struct /Script/MovieScene.MovieSceneEvalTemplatePtr
/// Size: 0x0088 (0x000000 - 0x000088)
struct FMovieSceneEvalTemplatePtr
{ 
	unsigned char                                      UnknownData00_1[0x88];                                      // 0x0000   (0x0088)  MISSED
};

/// Struct /Script/MovieScene.MovieSceneEvaluationFieldSegmentPtr
/// Size: 0x0004 (0x000008 - 0x00000C)
struct FMovieSceneEvaluationFieldSegmentPtr : FMovieSceneEvaluationFieldTrackPtr
{ 
	FMovieSceneSegmentIdentifier                       SegmentID;                                                  // 0x0008   (0x0004)  
};

/// Struct /Script/MovieScene.MovieSceneSubSectionData
/// Size: 0x001C (0x000000 - 0x00001C)
struct FMovieSceneSubSectionData
{ 
	SDK_UNDEFINED(8,964) /* TWeakObjectPtr<UMovieSceneSubSection*> */ __um(Section);                               // 0x0000   (0x0008)  
	FGuid                                              ObjectBindingID;                                            // 0x0008   (0x0010)  
	ESectionEvaluationFlags                            Flags;                                                      // 0x0018   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0019   (0x0003)  MISSED
};

/// Struct /Script/MovieScene.MovieSceneTrackImplementationPtr
/// Size: 0x0038 (0x000000 - 0x000038)
struct FMovieSceneTrackImplementationPtr
{ 
	unsigned char                                      UnknownData00_1[0x38];                                      // 0x0000   (0x0038)  MISSED
};

/// Struct /Script/MovieScene.MovieSceneEvaluationTrack
/// Size: 0x0078 (0x000000 - 0x000078)
struct FMovieSceneEvaluationTrack
{ 
	FGuid                                              ObjectBindingID;                                            // 0x0000   (0x0010)  
	uint16_t                                           EvaluationPriority;                                         // 0x0010   (0x0002)  
	EEvaluationMethod                                  EvaluationMethod;                                           // 0x0012   (0x0001)  
	unsigned char                                      UnknownData00_5[0x1];                                       // 0x0013   (0x0001)  MISSED
	SDK_UNDEFINED(8,965) /* TWeakObjectPtr<UMovieSceneTrack*> */ __um(SourceTrack);                                // 0x0014   (0x0008)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x001C   (0x0004)  MISSED
	TArray<FMovieSceneEvalTemplatePtr>                 ChildTemplates;                                             // 0x0020   (0x0010)  
	FMovieSceneTrackImplementationPtr                  TrackTemplate;                                              // 0x0030   (0x0038)  
	FName                                              EvaluationGroup;                                            // 0x0068   (0x0008)  
	bool                                               bEvaluateInPreroll : 1;                                     // 0x0070:0 (0x0001)  
	bool                                               bEvaluateInPostroll : 1;                                    // 0x0070:1 (0x0001)  
	bool                                               bTearDownPriority : 1;                                      // 0x0070:2 (0x0001)  
	unsigned char                                      UnknownData02_6[0x7];                                       // 0x0071   (0x0007)  MISSED
};

/// Struct /Script/MovieScene.MovieSceneTimeWarping
/// Size: 0x0008 (0x000000 - 0x000008)
struct FMovieSceneTimeWarping
{ 
	FFrameNumber                                       Start;                                                      // 0x0000   (0x0004)  
	FFrameNumber                                       End;                                                        // 0x0004   (0x0004)  
};

/// Struct /Script/MovieScene.MovieSceneNestedSequenceTransform
/// Size: 0x0014 (0x000000 - 0x000014)
struct FMovieSceneNestedSequenceTransform
{ 
	FMovieSceneTimeTransform                           LinearTransform;                                            // 0x0000   (0x000C)  
	FMovieSceneTimeWarping                             Warping;                                                    // 0x000C   (0x0008)  
};

/// Struct /Script/MovieScene.MovieSceneSequenceTransform
/// Size: 0x0020 (0x000000 - 0x000020)
struct FMovieSceneSequenceTransform
{ 
	FMovieSceneTimeTransform                           LinearTransform;                                            // 0x0000   (0x000C)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x000C   (0x0004)  MISSED
	TArray<FMovieSceneNestedSequenceTransform>         NestedTransforms;                                           // 0x0010   (0x0010)  
};

/// Struct /Script/MovieScene.MovieSceneSequenceInstanceDataPtr
/// Size: 0x0018 (0x000000 - 0x000018)
struct FMovieSceneSequenceInstanceDataPtr
{ 
	unsigned char                                      UnknownData00_1[0x18];                                      // 0x0000   (0x0018)  MISSED
};

/// Struct /Script/MovieScene.MovieSceneSubSequenceData
/// Size: 0x0110 (0x000000 - 0x000110)
struct FMovieSceneSubSequenceData
{ 
	FSoftObjectPath                                    Sequence;                                                   // 0x0000   (0x0020)  
	FMovieSceneSequenceTransform                       OuterToInnerTransform;                                      // 0x0020   (0x0020)  
	FMovieSceneSequenceTransform                       RootToSequenceTransform;                                    // 0x0040   (0x0020)  
	FFrameRate                                         TickResolution;                                             // 0x0060   (0x0008)  
	FMovieSceneSequenceID                              DeterministicSequenceID;                                    // 0x0068   (0x0004)  
	FMovieSceneFrameRange                              ParentPlayRange;                                            // 0x006C   (0x0010)  
	FFrameNumber                                       ParentStartFrameOffset;                                     // 0x007C   (0x0004)  
	FFrameNumber                                       ParentEndFrameOffset;                                       // 0x0080   (0x0004)  
	FFrameNumber                                       ParentFirstLoopStartFrameOffset;                            // 0x0084   (0x0004)  
	bool                                               bCanLoop;                                                   // 0x0088   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0089   (0x0003)  MISSED
	FMovieSceneFrameRange                              PlayRange;                                                  // 0x008C   (0x0010)  
	FMovieSceneFrameRange                              FullPlayRange;                                              // 0x009C   (0x0010)  
	FMovieSceneFrameRange                              UnwarpedPlayRange;                                          // 0x00AC   (0x0010)  
	FMovieSceneFrameRange                              PreRollRange;                                               // 0x00BC   (0x0010)  
	FMovieSceneFrameRange                              PostRollRange;                                              // 0x00CC   (0x0010)  
	int16_t                                            HierarchicalBias;                                           // 0x00DC   (0x0002)  
	bool                                               bHasHierarchicalEasing;                                     // 0x00DE   (0x0001)  
	unsigned char                                      UnknownData01_5[0x1];                                       // 0x00DF   (0x0001)  MISSED
	FMovieSceneSequenceInstanceDataPtr                 InstanceData;                                               // 0x00E0   (0x0018)  
	unsigned char                                      UnknownData02_5[0x8];                                       // 0x00F8   (0x0008)  MISSED
	FGuid                                              SubSectionSignature;                                        // 0x0100   (0x0010)  
};

/// Struct /Script/MovieScene.MovieSceneSubSequenceTreeEntry
/// Size: 0x0018 (0x000000 - 0x000018)
struct FMovieSceneSubSequenceTreeEntry
{ 
	unsigned char                                      UnknownData00_1[0x18];                                      // 0x0000   (0x0018)  MISSED
};

/// Struct /Script/MovieScene.MovieSceneWarpCounter
/// Size: 0x0010 (0x000000 - 0x000010)
struct FMovieSceneWarpCounter
{ 
	TArray<uint32_t>                                   WarpCounts;                                                 // 0x0000   (0x0010)  
};

/// Struct /Script/MovieScene.MovieSceneExpansionState
/// Size: 0x0001 (0x000000 - 0x000001)
struct FMovieSceneExpansionState
{ 
	bool                                               bExpanded;                                                  // 0x0000   (0x0001)  
};

/// Struct /Script/MovieScene.MovieSceneEditorData
/// Size: 0x00F0 (0x000000 - 0x0000F0)
struct FMovieSceneEditorData
{ 
	SDK_UNDEFINED(80,966) /* TMap<FString, FMovieSceneExpansionState> */ __um(ExpansionStates);                    // 0x0000   (0x0050)  
	SDK_UNDEFINED(16,967) /* TArray<FString> */        __um(PinnedNodes);                                          // 0x0050   (0x0010)  
	double                                             ViewStart;                                                  // 0x0060   (0x0008)  
	double                                             ViewEnd;                                                    // 0x0068   (0x0008)  
	double                                             WorkStart;                                                  // 0x0070   (0x0008)  
	double                                             WorkEnd;                                                    // 0x0078   (0x0008)  
	SDK_UNDEFINED(80,968) /* TSet<FFrameNumber> */     __um(MarkedFrames);                                         // 0x0080   (0x0050)  
	FFloatRange                                        WorkingRange;                                               // 0x00D0   (0x0010)  
	FFloatRange                                        ViewRange;                                                  // 0x00E0   (0x0010)  
};

/// Struct /Script/MovieScene.MovieSceneTrackLabels
/// Size: 0x0010 (0x000000 - 0x000010)
struct FMovieSceneTrackLabels
{ 
	SDK_UNDEFINED(16,969) /* TArray<FString> */        __um(Strings);                                              // 0x0000   (0x0010)  
};

/// Struct /Script/MovieScene.MovieSceneObjectBindingIDs
/// Size: 0x0010 (0x000000 - 0x000010)
struct FMovieSceneObjectBindingIDs
{ 
	TArray<FMovieSceneObjectBindingID>                 IDs;                                                        // 0x0000   (0x0010)  
};

/// Struct /Script/MovieScene.MovieSceneSectionGroup
/// Size: 0x0010 (0x000000 - 0x000010)
struct FMovieSceneSectionGroup
{ 
	SDK_UNDEFINED(16,970) /* TArray<TWeakObjectPtr<UMovieSceneSection*>> */ __um(Sections);                        // 0x0000   (0x0010)  
};

/// Struct /Script/MovieScene.MovieSceneBindingProxy
/// Size: 0x0018 (0x000000 - 0x000018)
struct FMovieSceneBindingProxy
{ 
	FGuid                                              BindingId;                                                  // 0x0000   (0x0010)  
	class UMovieSceneSequence*                         Sequence;                                                   // 0x0010   (0x0008)  
};

/// Struct /Script/MovieScene.MovieSceneTimecodeSource
/// Size: 0x0014 (0x000000 - 0x000014)
struct FMovieSceneTimecodeSource
{ 
	FTimecode                                          Timecode;                                                   // 0x0000   (0x0014)  
};

/// Struct /Script/MovieScene.MovieSceneSequencePlaybackParams
/// Size: 0x0028 (0x000000 - 0x000028)
struct FMovieSceneSequencePlaybackParams
{ 
	FFrameTime                                         Frame;                                                      // 0x0000   (0x0008)  
	float                                              Time;                                                       // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x000C   (0x0004)  MISSED
	SDK_UNDEFINED(16,971) /* FString */                __um(MarkedFrame);                                          // 0x0010   (0x0010)  
	EMovieScenePositionType                            PositionType;                                               // 0x0020   (0x0001)  
	EUpdatePositionMethod                              UpdateMethod;                                               // 0x0021   (0x0001)  
	bool                                               bHasJumped;                                                 // 0x0022   (0x0001)  
	unsigned char                                      UnknownData01_6[0x5];                                       // 0x0023   (0x0005)  MISSED
};

/// Struct /Script/MovieScene.MovieSceneSequencePlayToParams
/// Size: 0x0001 (0x000000 - 0x000001)
struct FMovieSceneSequencePlayToParams
{ 
	bool                                               bExclusive;                                                 // 0x0000   (0x0001)  
};

/// Struct /Script/MovieScene.MovieSceneTrackDisplayOptions
/// Size: 0x0004 (0x000000 - 0x000004)
struct FMovieSceneTrackDisplayOptions
{ 
	bool                                               bShowVerticalFrames : 1;                                    // 0x0000:0 (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0001   (0x0003)  MISSED
};

/// Struct /Script/MovieScene.TestMovieSceneEvalTemplate
/// Size: 0x0000 (0x000020 - 0x000020)
struct FTestMovieSceneEvalTemplate : FMovieSceneEvalTemplate
{ 
};
