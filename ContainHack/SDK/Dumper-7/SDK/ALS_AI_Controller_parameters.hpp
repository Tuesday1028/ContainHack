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
// Function ALS_AI_Controller.ALS_AI_Controller_C.ReceivePossess
struct UALS_AI_Controller_C_ReceivePossess_Params
{
public:
	class UPawn*                                 PossessedPawn;                                     // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function ALS_AI_Controller.ALS_AI_Controller_C.ExecuteUbergraph_ALS_AI_Controller
struct UALS_AI_Controller_C_ExecuteUbergraph_ALS_AI_Controller_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_RunBehaviorTree_ReturnValue;              // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3502[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPawn*                                 K2Node_Event_PossessedPawn;                        // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

}
}


