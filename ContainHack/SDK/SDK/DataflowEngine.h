
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/DataflowEngine.DataflowEdNode
/// Size: 0x0020 (0x000098 - 0x0000B8)
class UDataflowEdNode : public UEdGraphNode
{ 
public:
	unsigned char                                      UnknownData00_1[0x20];                                      // 0x0098   (0x0020)  MISSED
};

/// Class /Script/DataflowEngine.Dataflow
/// Size: 0x0028 (0x000060 - 0x000088)
class UDataflow : public UEdGraph
{ 
public:
	unsigned char                                      UnknownData00_2[0x10];                                      // 0x0060   (0x0010)  MISSED
	bool                                               bActive;                                                    // 0x0070   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0071   (0x0007)  MISSED
	TArray<class UObject*>                             Targets;                                                    // 0x0078   (0x0010)  
};

