
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: AudioExtensions
/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/Spatialization.ITDSpatializationSourceSettings
/// Size: 0x0090 (0x000028 - 0x0000B8)
class UITDSpatializationSourceSettings : public USpatializationPluginSourceSettingsBase
{ 
public:
	bool                                               bEnableILD;                                                 // 0x0028   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0029   (0x0007)  MISSED
	FRuntimeFloatCurve                                 PanningIntensityOverDistance;                               // 0x0030   (0x0088)  
};

