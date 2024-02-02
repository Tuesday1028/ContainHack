
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: CoreUObject
/// dependency: MovieRenderPipelineCore

/// Enum /Script/DLSSMoviePipelineSupport.EMoviePipelineDLSSQuality
/// Size: 0x07
enum class EMoviePipelineDLSSQuality : uint8_t
{
	EMoviePipelineDLSSQuality__EMoviePipelineDLSSQuality_DLAA                        = 0,
	EMoviePipelineDLSSQuality__EMoviePipelineDLSSQuality_UltraQuality                = 1,
	EMoviePipelineDLSSQuality__EMoviePipelineDLSSQuality_Quality                     = 2,
	EMoviePipelineDLSSQuality__EMoviePipelineDLSSQuality_Balanced                    = 3,
	EMoviePipelineDLSSQuality__EMoviePipelineDLSSQuality_Performance                 = 4,
	EMoviePipelineDLSSQuality__EMoviePipelineDLSSQuality_UltraPerformance            = 5,
	EMoviePipelineDLSSQuality__EMoviePipelineDLSSQuality_MAX                         = 6
};

/// Class /Script/DLSSMoviePipelineSupport.MoviePipelineDLSSSetting
/// Size: 0x0008 (0x000048 - 0x000050)
class UMoviePipelineDLSSSetting : public UMoviePipelineViewFamilySetting
{ 
public:
	EMoviePipelineDLSSQuality                          DLSSQuality;                                                // 0x0048   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0049   (0x0007)  MISSED
};

