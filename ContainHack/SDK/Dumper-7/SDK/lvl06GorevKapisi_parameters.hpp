#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x8 - 0x0)
// Function lvl06GorevKapisi.lvl06GorevKapisi (Director BP)_C.SequenceEvent__ENTRYPOINTlvl06GorevKapisi (Director BP)_0
struct ULvl06GorevKapisi__Director_BP__C_SequenceEvent__ENTRYPOINTlvl06GorevKapisi__Director_BP__0_Params
{
public:
	class UAmbientSound*                         bunker_door2_Cue;                                  // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function lvl06GorevKapisi.lvl06GorevKapisi (Director BP)_C.SequenceEvent__ENTRYPOINTlvl06GorevKapisi (Director BP)
struct ULvl06GorevKapisi__Director_BP__C_SequenceEvent__ENTRYPOINTlvl06GorevKapisi__Director_BP__Params
{
public:
	class UAmbientSound*                         bunker_door1_Cue;                                  // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0xC (0xC - 0x0)
// Function lvl06GorevKapisi.lvl06GorevKapisi (Director BP)_C.bunker_door1_Cue_Event
struct ULvl06GorevKapisi__Director_BP__C_bunker_door1_Cue_Event_Params
{
public:
	class UAmbientSound*                         bunker_door1_Cue;                                  // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                        StartTime;                                         // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xC (0xC - 0x0)
// Function lvl06GorevKapisi.lvl06GorevKapisi (Director BP)_C.bunker_door2_Cue_Event
struct ULvl06GorevKapisi__Director_BP__C_bunker_door2_Cue_Event_Params
{
public:
	class UAmbientSound*                         bunker_door2_Cue;                                  // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                        StartTime;                                         // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x24 (0x24 - 0x0)
// Function lvl06GorevKapisi.lvl06GorevKapisi (Director BP)_C.ExecuteUbergraph_lvl06GorevKapisi (Director BP)
struct ULvl06GorevKapisi__Director_BP__C_ExecuteUbergraph_lvl06GorevKapisi__Director_BP__Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2638[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAmbientSound*                         K2Node_CustomEvent_bunker_door2_Cue;               // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_CustomEvent_StartTime;                      // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2639[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAmbientSound*                         K2Node_CustomEvent_bunker_door1_Cue;               // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_CustomEvent_StartTime_1;                    // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


