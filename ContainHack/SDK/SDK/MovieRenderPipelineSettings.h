
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: MovieRenderPipelineCore
/// dependency: UMG

/// Class /Script/MovieRenderPipelineSettings.MoviePipelineBurnInWidget
/// Size: 0x0000 (0x000278 - 0x000278)
class UMoviePipelineBurnInWidget : public UUserWidget
{ 
public:


	/// Functions
	// Function /Script/MovieRenderPipelineSettings.MoviePipelineBurnInWidget.OnOutputFrameStarted
	// void OnOutputFrameStarted(class UMoviePipeline* ForPipeline);                                                         // [0x2119480] Event|Public|BlueprintEvent 
};

/// Class /Script/MovieRenderPipelineSettings.MoviePipelineBurnInSetting
/// Size: 0x0068 (0x000048 - 0x0000B0)
class UMoviePipelineBurnInSetting : public UMoviePipelineRenderPass
{ 
public:
	FSoftClassPath                                     BurnInClass;                                                // 0x0048   (0x0020)  
	bool                                               bCompositeOntoFinalImage;                                   // 0x0068   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2F];                                      // 0x0069   (0x002F)  MISSED
	class UTextureRenderTarget2D*                      RenderTarget;                                               // 0x0098   (0x0008)  
	TArray<class UMoviePipelineBurnInWidget*>          BurnInWidgetInstances;                                      // 0x00A0   (0x0010)  
};

/// Class /Script/MovieRenderPipelineSettings.MoviePipelineConsoleVariableSetting
/// Size: 0x0080 (0x000048 - 0x0000C8)
class UMoviePipelineConsoleVariableSetting : public UMoviePipelineSetting
{ 
public:
	SDK_UNDEFINED(80,2520) /* TMap<FString, float> */  __um(ConsoleVariables);                                     // 0x0048   (0x0050)  
	SDK_UNDEFINED(16,2521) /* TArray<FString> */       __um(StartConsoleCommands);                                 // 0x0098   (0x0010)  
	SDK_UNDEFINED(16,2522) /* TArray<FString> */       __um(EndConsoleCommands);                                   // 0x00A8   (0x0010)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x00B8   (0x0010)  MISSED
};

/// Class /Script/MovieRenderPipelineSettings.MoviePipelineWidgetRenderer
/// Size: 0x0020 (0x000048 - 0x000068)
class UMoviePipelineWidgetRenderer : public UMoviePipelineRenderPass
{ 
public:
	bool                                               bCompositeOntoFinalImage;                                   // 0x0048   (0x0001)  
	unsigned char                                      UnknownData00_5[0x17];                                      // 0x0049   (0x0017)  MISSED
	class UTextureRenderTarget2D*                      RenderTarget;                                               // 0x0060   (0x0008)  
};

