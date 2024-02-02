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
// Function Orb_Emp.Orb_Emp (Director BP)_C.SequenceEvent__ENTRYPOINTOrb_Emp (Director BP)
struct UOrb_Emp__Director_BP__C_SequenceEvent__ENTRYPOINTOrb_Emp__Director_BP__Params
{
public:
	class UNiagaraActor*                         FX_Cube_Construction;                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function Orb_Emp.Orb_Emp (Director BP)_C.FX_Cube_Construction_Event
struct UOrb_Emp__Director_BP__C_FX_Cube_Construction_Event_Params
{
public:
	class UNiagaraActor*                         FX_Cube_Construction;                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function Orb_Emp.Orb_Emp (Director BP)_C.ExecuteUbergraph_Orb_Emp (Director BP)
struct UOrb_Emp__Director_BP__C_ExecuteUbergraph_Orb_Emp__Director_BP__Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8D1[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UNiagaraActor*                         K2Node_CustomEvent_FX_Cube_Construction;           // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       CallFunc_K2_GetRootComponent_ReturnValue;          // 0x10(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

}
}


