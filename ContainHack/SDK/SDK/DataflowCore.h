
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once

/// Struct /Script/DataflowCore.DataflowNode
/// Size: 0x00D0 (0x000000 - 0x0000D0)
struct FDataflowNode
{ 
	unsigned char                                      UnknownData00_2[0xC8];                                      // 0x0000   (0x00C8)  MISSED
	bool                                               bActive;                                                    // 0x00C8   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x00C9   (0x0007)  MISSED
};

/// Struct /Script/DataflowCore.DataflowConnection
/// Size: 0x0040 (0x000000 - 0x000040)
struct FDataflowConnection
{ 
	unsigned char                                      UnknownData00_1[0x40];                                      // 0x0000   (0x0040)  MISSED
};

/// Struct /Script/DataflowCore.DataflowInput
/// Size: 0x0008 (0x000040 - 0x000048)
struct FDataflowInput : FDataflowConnection
{ 
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0040   (0x0008)  MISSED
};

/// Struct /Script/DataflowCore.DataflowOutput
/// Size: 0x0028 (0x000040 - 0x000068)
struct FDataflowOutput : FDataflowConnection
{ 
	unsigned char                                      UnknownData00_1[0x28];                                      // 0x0040   (0x0028)  MISSED
};

