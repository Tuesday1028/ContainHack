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

// 0x9 (0x9 - 0x0)
// Function CLM_BPI_NPC.CLM_BPI_NPC_C.CrouchOut
struct UCLM_BPI_NPC_C_CrouchOut_Params
{
public:
	int32                                        IlkIndex;                                          // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        SonIndex;                                          // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsSee;                                             // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2 (0x2 - 0x0)
// Function CLM_BPI_NPC.CLM_BPI_NPC_C.PickDoorEvent
struct UCLM_BPI_NPC_C_PickDoorEvent_Params
{
public:
	bool                                         Pick;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Unlock;                                            // 0x1(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function CLM_BPI_NPC.CLM_BPI_NPC_C.GetLocation
struct UCLM_BPI_NPC_C_GetLocation_Params
{
public:
	struct FVector                               CharacterLoc;                                      // 0x0(0x18)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function CLM_BPI_NPC.CLM_BPI_NPC_C.GetisDutyEnabled
struct UCLM_BPI_NPC_C_GetisDutyEnabled_Params
{
public:
	bool                                         DutyEnabled;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function CLM_BPI_NPC.CLM_BPI_NPC_C.GetNextLocation
struct UCLM_BPI_NPC_C_GetNextLocation_Params
{
public:
	struct FVector                               Location;                                          // 0x0(0x18)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


