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

// 0x751 (0x751 - 0x0)
// Function HUB01.HUB01_C.ExecuteUbergraph_HUB01
struct UHUB01_C_ExecuteUbergraph_HUB01_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4329[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FWeightedBlendable                    K2Node_MakeStruct_WeightedBlendable;               // 0x8(0x10)(NoDestructor)
	class UGameInstance*                         CallFunc_GetGameInstance_ReturnValue;              // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<struct FWeightedBlendable>            K2Node_MakeArray_Array;                            // 0x20(0x10)(ReferenceParm)
	class UGI_Contain_C*                         K2Node_DynamicCast_AsGI_Contain;                   // 0x30(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_432A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FWeightedBlendables                   K2Node_MakeStruct_WeightedBlendables;              // 0x40(0x10)(None)
	struct FPostProcessSettings                  K2Node_MakeStruct_PostProcessSettings;             // 0x50(0x6E0)(None)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x730(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_432B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UHub_Loading_C*                        CallFunc_Create_ReturnValue;                       // 0x738(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UCharacter*                            CallFunc_GetPlayerCharacter_ReturnValue;           // 0x740(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UB_DemoCharacter_C*                    K2Node_DynamicCast_AsB_Demo_Character;             // 0x748(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x750(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


