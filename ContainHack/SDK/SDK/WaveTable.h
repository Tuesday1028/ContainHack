
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

/// Enum /Script/WaveTable.EWaveTableResolution
/// Size: 0x14
enum class EWaveTableResolution : uint8_t
{
	EWaveTableResolution__None                                                       = 0,
	EWaveTableResolution__Res                                                        = 3,
	EWaveTableResolution__Res3                                                       = 4,
	EWaveTableResolution__Res4                                                       = 5,
	EWaveTableResolution__Res5                                                       = 6,
	EWaveTableResolution__Res6                                                       = 7,
	EWaveTableResolution__Res7                                                       = 8,
	EWaveTableResolution__Res8                                                       = 9,
	EWaveTableResolution__Res9                                                       = 10,
	EWaveTableResolution__Res10                                                      = 11,
	EWaveTableResolution__Res11                                                      = 12,
	EWaveTableResolution__Res_Max                                                    = 12,
	EWaveTableResolution__Maximum                                                    = 13,
	EWaveTableResolution__EWaveTableResolution_MAX                                   = 14
};

/// Enum /Script/WaveTable.EWaveTableCurve
/// Size: 0x13
enum class EWaveTableCurve : uint8_t
{
	EWaveTableCurve__Linear                                                          = 0,
	EWaveTableCurve__Linear_Inv                                                      = 1,
	EWaveTableCurve__Exp                                                             = 2,
	EWaveTableCurve__Exp_Inverse                                                     = 3,
	EWaveTableCurve__Log                                                             = 4,
	EWaveTableCurve__Sin                                                             = 5,
	EWaveTableCurve__Sin_Full                                                        = 6,
	EWaveTableCurve__SCurve                                                          = 7,
	EWaveTableCurve__Shared                                                          = 8,
	EWaveTableCurve__Custom                                                          = 9,
	EWaveTableCurve__File                                                            = 10,
	EWaveTableCurve__Count                                                           = 11,
	EWaveTableCurve__EWaveTableCurve_MAX                                             = 12
};

/// Struct /Script/WaveTable.WaveTableTransform
/// Size: 0x00A0 (0x000000 - 0x0000A0)
struct FWaveTableTransform
{ 
	EWaveTableCurve                                    Curve;                                                      // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              Scalar;                                                     // 0x0004   (0x0004)  
	FRichCurve                                         CurveCustom;                                                // 0x0008   (0x0080)  
	class UCurveFloat*                                 CurveShared;                                                // 0x0088   (0x0008)  
	TArray<float>                                      WaveTable;                                                  // 0x0090   (0x0010)  
};

/// Struct /Script/WaveTable.WaveTableBankEntry
/// Size: 0x00A0 (0x000000 - 0x0000A0)
struct FWaveTableBankEntry
{ 
	FWaveTableTransform                                Transform;                                                  // 0x0000   (0x00A0)  
};

/// Class /Script/WaveTable.WaveTableBank
/// Size: 0x0020 (0x000028 - 0x000048)
class UWaveTableBank : public UObject
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0028   (0x0008)  MISSED
	EWaveTableResolution                               Resolution;                                                 // 0x0030   (0x0001)  
	bool                                               bBipolar;                                                   // 0x0031   (0x0001)  
	unsigned char                                      UnknownData01_5[0x6];                                       // 0x0032   (0x0006)  MISSED
	TArray<FWaveTableBankEntry>                        Entries;                                                    // 0x0038   (0x0010)  
};

/// Struct /Script/WaveTable.WaveTableSettings
/// Size: 0x0040 (0x000000 - 0x000040)
struct FWaveTableSettings
{ 
	FFilePath                                          FilePath;                                                   // 0x0000   (0x0010)  
	int32_t                                            ChannelIndex;                                               // 0x0010   (0x0004)  
	float                                              Phase;                                                      // 0x0014   (0x0004)  
	float                                              Top;                                                        // 0x0018   (0x0004)  
	float                                              Tail;                                                       // 0x001C   (0x0004)  
	float                                              FadeIn;                                                     // 0x0020   (0x0004)  
	float                                              FadeOut;                                                    // 0x0024   (0x0004)  
	bool                                               bNormalize;                                                 // 0x0028   (0x0001)  
	bool                                               bRemoveOffset;                                              // 0x0029   (0x0001)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x002A   (0x0006)  MISSED
	TArray<float>                                      SourcePCMData;                                              // 0x0030   (0x0010)  
};

