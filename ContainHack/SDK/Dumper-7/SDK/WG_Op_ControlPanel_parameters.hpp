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

// 0xA8 (0xA8 - 0x0)
// Function WG_Op_ControlPanel.WG_Op_ControlPanel_C.ConstructActionRemap
struct UWG_Op_ControlPanel_C_ConstructActionRemap_Params
{
public:
	class FName                                  Action_Name;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FInputChord                           Key;                                               // 0x8(0x20)(Parm, OutParm, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3C25[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UInputSettings*                        CallFunc_GetInputSettings_ReturnValue;             // 0x38(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<struct FInputActionKeyMapping>        CallFunc_GetActionMappingByName_OutMappings;       // 0x40(0x10)(ReferenceParm)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x50(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3C26[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInputActionKeyMapping                CallFunc_Array_Get_Item;                           // 0x58(0x28)(None)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3C27[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInputChord                           K2Node_MakeStruct_InputChord;                      // 0x88(0x20)(HasGetValueTypeHash)
};

// 0xC0 (0xC0 - 0x0)
// Function WG_Op_ControlPanel.WG_Op_ControlPanel_C.ConstructAxisRemap
struct UWG_Op_ControlPanel_C_ConstructAxisRemap_Params
{
public:
	class FName                                  InAxisName;                                        // 0x0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Scale;                                             // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FInputChord                           InputChord;                                        // 0x10(0x20)(Parm, OutParm, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3C41[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UInputSettings*                        CallFunc_GetInputSettings_ReturnValue;             // 0x40(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<struct FInputAxisKeyMapping>          CallFunc_GetAxisMappingByName_OutMappings;         // 0x48(0x10)(ReferenceParm)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x58(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3C44[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInputAxisKeyMapping                  CallFunc_Array_Get_Item;                           // 0x60(0x28)(None)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x88(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3C46[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInputChord                           K2Node_MakeStruct_InputChord;                      // 0x90(0x20)(HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_DoubleDouble_ReturnValue;      // 0xB0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3C49[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast;   // 0xB8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x328 (0x328 - 0x0)
// Function WG_Op_ControlPanel.WG_Op_ControlPanel_C.DefaultRemap
struct UWG_Op_ControlPanel_C_DefaultRemap_Params
{
public:
	struct FInputChord                           K2Node_MakeStruct_InputChord;                      // 0x0(0x20)(HasGetValueTypeHash)
	class UInputSettings*                        CallFunc_GetInputSettings_ReturnValue;             // 0x20(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FInputChord                           K2Node_MakeStruct_InputChord_1;                    // 0x28(0x20)(HasGetValueTypeHash)
	struct FInputChord                           K2Node_MakeStruct_InputChord_2;                    // 0x48(0x20)(HasGetValueTypeHash)
	struct FInputChord                           K2Node_MakeStruct_InputChord_3;                    // 0x68(0x20)(HasGetValueTypeHash)
	struct FInputChord                           K2Node_MakeStruct_InputChord_4;                    // 0x88(0x20)(HasGetValueTypeHash)
	struct FInputChord                           K2Node_MakeStruct_InputChord_5;                    // 0xA8(0x20)(HasGetValueTypeHash)
	struct FInputChord                           K2Node_MakeStruct_InputChord_6;                    // 0xC8(0x20)(HasGetValueTypeHash)
	struct FInputChord                           K2Node_MakeStruct_InputChord_7;                    // 0xE8(0x20)(HasGetValueTypeHash)
	struct FInputChord                           K2Node_MakeStruct_InputChord_8;                    // 0x108(0x20)(HasGetValueTypeHash)
	struct FInputChord                           K2Node_MakeStruct_InputChord_9;                    // 0x128(0x20)(HasGetValueTypeHash)
	struct FInputChord                           K2Node_MakeStruct_InputChord_10;                   // 0x148(0x20)(HasGetValueTypeHash)
	struct FInputChord                           K2Node_MakeStruct_InputChord_11;                   // 0x168(0x20)(HasGetValueTypeHash)
	struct FInputChord                           K2Node_MakeStruct_InputChord_12;                   // 0x188(0x20)(HasGetValueTypeHash)
	struct FInputChord                           K2Node_MakeStruct_InputChord_13;                   // 0x1A8(0x20)(HasGetValueTypeHash)
	struct FInputChord                           K2Node_MakeStruct_InputChord_14;                   // 0x1C8(0x20)(HasGetValueTypeHash)
	struct FInputChord                           K2Node_MakeStruct_InputChord_15;                   // 0x1E8(0x20)(HasGetValueTypeHash)
	struct FInputChord                           K2Node_MakeStruct_InputChord_16;                   // 0x208(0x20)(HasGetValueTypeHash)
	struct FInputChord                           K2Node_MakeStruct_InputChord_17;                   // 0x228(0x20)(HasGetValueTypeHash)
	struct FInputChord                           K2Node_MakeStruct_InputChord_18;                   // 0x248(0x20)(HasGetValueTypeHash)
	struct FInputChord                           K2Node_MakeStruct_InputChord_19;                   // 0x268(0x20)(HasGetValueTypeHash)
	struct FInputChord                           K2Node_MakeStruct_InputChord_20;                   // 0x288(0x20)(HasGetValueTypeHash)
	struct FInputChord                           K2Node_MakeStruct_InputChord_21;                   // 0x2A8(0x20)(HasGetValueTypeHash)
	struct FInputChord                           K2Node_MakeStruct_InputChord_22;                   // 0x2C8(0x20)(HasGetValueTypeHash)
	struct FInputChord                           K2Node_MakeStruct_InputChord_23;                   // 0x2E8(0x20)(HasGetValueTypeHash)
	struct FInputChord                           K2Node_MakeStruct_InputChord_24;                   // 0x308(0x20)(HasGetValueTypeHash)
};

// 0xD0 (0xD0 - 0x0)
// Function WG_Op_ControlPanel.WG_Op_ControlPanel_C.InputAxisRemap
struct UWG_Op_ControlPanel_C_InputAxisRemap_Params
{
public:
	struct FInputChord                           AxisInputChord;                                    // 0x0(0x20)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	class FName                                  AxisName;                                          // 0x20(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Scale;                                             // 0x28(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3C73[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInputAxisKeyMapping                  K2Node_MakeStruct_InputAxisKeyMapping;             // 0x38(0x28)(None)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x60(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3C74[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UInputSettings*                        CallFunc_GetInputSettings_ReturnValue;             // 0x68(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x70(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3C76[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UInputSettings*                        CallFunc_GetInputSettings_ReturnValue_1;           // 0x78(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<struct FInputAxisKeyMapping>          CallFunc_GetAxisMappingByName_OutMappings;         // 0x80(0x10)(ReferenceParm)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x90(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3C79[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInputAxisKeyMapping                  CallFunc_Array_Get_Item;                           // 0x98(0x28)(None)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0xC0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_DoubleDouble_ReturnValue;      // 0xC1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3C7C[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        K2Node_MakeStruct_Scale_ImplicitCast;              // 0xC4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast;   // 0xC8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xC1 (0xC1 - 0x0)
// Function WG_Op_ControlPanel.WG_Op_ControlPanel_C.InputActionRemap
struct UWG_Op_ControlPanel_C_InputActionRemap_Params
{
public:
	struct FInputChord                           ActionInputChord;                                  // 0x0(0x20)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	class FName                                  ActionName;                                        // 0x20(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3C88[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UInputSettings*                        CallFunc_GetInputSettings_ReturnValue;             // 0x38(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FInputActionKeyMapping                K2Node_MakeStruct_InputActionKeyMapping;           // 0x40(0x28)(None)
	class UInputSettings*                        CallFunc_GetInputSettings_ReturnValue_1;           // 0x68(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UInputSettings*                        CallFunc_GetInputSettings_ReturnValue_2;           // 0x70(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UInputSettings*                        CallFunc_GetInputSettings_ReturnValue_3;           // 0x78(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<struct FInputActionKeyMapping>        CallFunc_GetActionMappingByName_OutMappings;       // 0x80(0x10)(ReferenceParm)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x90(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3C8B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInputActionKeyMapping                CallFunc_Array_Get_Item;                           // 0x98(0x28)(None)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0xC0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x40 (0x40 - 0x0)
// Function WG_Op_ControlPanel.WG_Op_ControlPanel_C.GetText
struct UWG_Op_ControlPanel_C_GetText_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm)
	double                                       CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_FTrunc_ReturnValue;                       // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3C91[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Conv_IntToText_ReturnValue;               // 0x28(0x18)(None)
};

// 0x8 (0x8 - 0x0)
// Function WG_Op_ControlPanel.WG_Op_ControlPanel_C.Get_SLD_MouseSensitivity_Value
struct UWG_Op_ControlPanel_C_Get_SLD_MouseSensitivity_Value_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_FunctionResult_ReturnValue_ImplicitCast;    // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function WG_Op_ControlPanel.WG_Op_ControlPanel_C.Get_CB_AimHold_CheckedState
struct UWG_Op_ControlPanel_C_Get_CB_AimHold_CheckedState_Params
{
public:
	enum class ECheckBoxState                    ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function WG_Op_ControlPanel.WG_Op_ControlPanel_C.Get_CB_LeanRight_CheckedState
struct UWG_Op_ControlPanel_C_Get_CB_LeanRight_CheckedState_Params
{
public:
	enum class ECheckBoxState                    ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function WG_Op_ControlPanel.WG_Op_ControlPanel_C.Completed_3BBCD9AD4FAD3A74EAAFBD890266BABD
struct UWG_Op_ControlPanel_C_Completed_3BBCD9AD4FAD3A74EAAFBD890266BABD_Params
{
public:
	class USaveGame*                             SaveGame;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         bSuccess;                                          // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function WG_Op_ControlPanel.WG_Op_ControlPanel_C.Completed_1245296E4C0F0B976461068E2F166959
struct UWG_Op_ControlPanel_C_Completed_1245296E4C0F0B976461068E2F166959_Params
{
public:
	class USaveGame*                             SaveGame;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         bSuccess;                                          // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function WG_Op_ControlPanel.WG_Op_ControlPanel_C.Completed_E24E40784B30E8A00CB5AC98084EACBA
struct UWG_Op_ControlPanel_C_Completed_E24E40784B30E8A00CB5AC98084EACBA_Params
{
public:
	class USaveGame*                             SaveGame;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         bSuccess;                                          // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function WG_Op_ControlPanel.WG_Op_ControlPanel_C.Completed_14195EDA44668A0CD3499E9B6AE8E970
struct UWG_Op_ControlPanel_C_Completed_14195EDA44668A0CD3499E9B6AE8E970_Params
{
public:
	class USaveGame*                             SaveGame;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         bSuccess;                                          // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function WG_Op_ControlPanel.WG_Op_ControlPanel_C.Completed_FE2482314CB847D6DA9946B195D5187C
struct UWG_Op_ControlPanel_C_Completed_FE2482314CB847D6DA9946B195D5187C_Params
{
public:
	class USaveGame*                             SaveGame;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         bSuccess;                                          // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function WG_Op_ControlPanel.WG_Op_ControlPanel_C.Completed_55EDD4DD4617007FF5CC3EA5051E36B3
struct UWG_Op_ControlPanel_C_Completed_55EDD4DD4617007FF5CC3EA5051E36B3_Params
{
public:
	class USaveGame*                             SaveGame;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         bSuccess;                                          // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function WG_Op_ControlPanel.WG_Op_ControlPanel_C.Completed_3C77DA0F4171F107B2E8BE8A389970AF
struct UWG_Op_ControlPanel_C_Completed_3C77DA0F4171F107B2E8BE8A389970AF_Params
{
public:
	class USaveGame*                             SaveGame;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         bSuccess;                                          // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function WG_Op_ControlPanel.WG_Op_ControlPanel_C.Completed_4B4F119A44161F6026EBDA9A166DF279
struct UWG_Op_ControlPanel_C_Completed_4B4F119A44161F6026EBDA9A166DF279_Params
{
public:
	class USaveGame*                             SaveGame;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         bSuccess;                                          // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function WG_Op_ControlPanel.WG_Op_ControlPanel_C.Completed_D037ACD44C895F43C5524087B26EE012
struct UWG_Op_ControlPanel_C_Completed_D037ACD44C895F43C5524087B26EE012_Params
{
public:
	class USaveGame*                             SaveGame;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         bSuccess;                                          // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function WG_Op_ControlPanel.WG_Op_ControlPanel_C.BndEvt__WG_Op_ControlPanel_FireKeySelector_K2Node_ComponentBoundEvent_10_OnKeySelected__DelegateSignature
struct UWG_Op_ControlPanel_C_BndEvt__WG_Op_ControlPanel_FireKeySelector_K2Node_ComponentBoundEvent_10_OnKeySelected__DelegateSignature_Params
{
public:
	struct FInputChord                           SelectedKey;                                       // 0x0(0x20)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function WG_Op_ControlPanel.WG_Op_ControlPanel_C.BndEvt__WG_Op_ControlPanel_FlashbangKeySelector_K2Node_ComponentBoundEvent_11_OnKeySelected__DelegateSignature
struct UWG_Op_ControlPanel_C_BndEvt__WG_Op_ControlPanel_FlashbangKeySelector_K2Node_ComponentBoundEvent_11_OnKeySelected__DelegateSignature_Params
{
public:
	struct FInputChord                           SelectedKey;                                       // 0x0(0x20)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function WG_Op_ControlPanel.WG_Op_ControlPanel_C.BndEvt__WG_Op_ControlPanel_FlashlightKeySelector_K2Node_ComponentBoundEvent_12_OnKeySelected__DelegateSignature
struct UWG_Op_ControlPanel_C_BndEvt__WG_Op_ControlPanel_FlashlightKeySelector_K2Node_ComponentBoundEvent_12_OnKeySelected__DelegateSignature_Params
{
public:
	struct FInputChord                           SelectedKey;                                       // 0x0(0x20)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function WG_Op_ControlPanel.WG_Op_ControlPanel_C.BndEvt__WG_Op_ControlPanel_FreeLookKeySelector_K2Node_ComponentBoundEvent_13_OnKeySelected__DelegateSignature
struct UWG_Op_ControlPanel_C_BndEvt__WG_Op_ControlPanel_FreeLookKeySelector_K2Node_ComponentBoundEvent_13_OnKeySelected__DelegateSignature_Params
{
public:
	struct FInputChord                           SelectedKey;                                       // 0x0(0x20)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function WG_Op_ControlPanel.WG_Op_ControlPanel_C.BndEvt__WG_Op_ControlPanel_GrenadeKeySelector_K2Node_ComponentBoundEvent_17_OnKeySelected__DelegateSignature
struct UWG_Op_ControlPanel_C_BndEvt__WG_Op_ControlPanel_GrenadeKeySelector_K2Node_ComponentBoundEvent_17_OnKeySelected__DelegateSignature_Params
{
public:
	struct FInputChord                           SelectedKey;                                       // 0x0(0x20)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function WG_Op_ControlPanel.WG_Op_ControlPanel_C.BndEvt__WG_Op_ControlPanel_InspectKeySelector_K2Node_ComponentBoundEvent_21_OnKeySelected__DelegateSignature
struct UWG_Op_ControlPanel_C_BndEvt__WG_Op_ControlPanel_InspectKeySelector_K2Node_ComponentBoundEvent_21_OnKeySelected__DelegateSignature_Params
{
public:
	struct FInputChord                           SelectedKey;                                       // 0x0(0x20)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function WG_Op_ControlPanel.WG_Op_ControlPanel_C.BndEvt__WG_Op_ControlPanel_InteractKeySelector_K2Node_ComponentBoundEvent_22_OnKeySelected__DelegateSignature
struct UWG_Op_ControlPanel_C_BndEvt__WG_Op_ControlPanel_InteractKeySelector_K2Node_ComponentBoundEvent_22_OnKeySelected__DelegateSignature_Params
{
public:
	struct FInputChord                           SelectedKey;                                       // 0x0(0x20)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function WG_Op_ControlPanel.WG_Op_ControlPanel_C.BndEvt__WG_Op_ControlPanel_LaserKeySelector_K2Node_ComponentBoundEvent_23_OnKeySelected__DelegateSignature
struct UWG_Op_ControlPanel_C_BndEvt__WG_Op_ControlPanel_LaserKeySelector_K2Node_ComponentBoundEvent_23_OnKeySelected__DelegateSignature_Params
{
public:
	struct FInputChord                           SelectedKey;                                       // 0x0(0x20)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function WG_Op_ControlPanel.WG_Op_ControlPanel_C.BndEvt__WG_Op_ControlPanel_LLeftSelector_K2Node_ComponentBoundEvent_24_OnKeySelected__DelegateSignature
struct UWG_Op_ControlPanel_C_BndEvt__WG_Op_ControlPanel_LLeftSelector_K2Node_ComponentBoundEvent_24_OnKeySelected__DelegateSignature_Params
{
public:
	struct FInputChord                           SelectedKey;                                       // 0x0(0x20)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function WG_Op_ControlPanel.WG_Op_ControlPanel_C.BndEvt__WG_Op_ControlPanel_LRightSelector_K2Node_ComponentBoundEvent_25_OnKeySelected__DelegateSignature
struct UWG_Op_ControlPanel_C_BndEvt__WG_Op_ControlPanel_LRightSelector_K2Node_ComponentBoundEvent_25_OnKeySelected__DelegateSignature_Params
{
public:
	struct FInputChord                           SelectedKey;                                       // 0x0(0x20)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function WG_Op_ControlPanel.WG_Op_ControlPanel_C.BndEvt__WG_Op_ControlPanel_MenuKeySelector_K2Node_ComponentBoundEvent_26_OnKeySelected__DelegateSignature
struct UWG_Op_ControlPanel_C_BndEvt__WG_Op_ControlPanel_MenuKeySelector_K2Node_ComponentBoundEvent_26_OnKeySelected__DelegateSignature_Params
{
public:
	struct FInputChord                           SelectedKey;                                       // 0x0(0x20)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function WG_Op_ControlPanel.WG_Op_ControlPanel_C.BndEvt__WG_Op_ControlPanel_NVGKeySelector_K2Node_ComponentBoundEvent_27_OnKeySelected__DelegateSignature
struct UWG_Op_ControlPanel_C_BndEvt__WG_Op_ControlPanel_NVGKeySelector_K2Node_ComponentBoundEvent_27_OnKeySelected__DelegateSignature_Params
{
public:
	struct FInputChord                           SelectedKey;                                       // 0x0(0x20)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function WG_Op_ControlPanel.WG_Op_ControlPanel_C.BndEvt__WG_Op_ControlPanel_SmokeKeySelector_K2Node_ComponentBoundEvent_28_OnKeySelected__DelegateSignature
struct UWG_Op_ControlPanel_C_BndEvt__WG_Op_ControlPanel_SmokeKeySelector_K2Node_ComponentBoundEvent_28_OnKeySelected__DelegateSignature_Params
{
public:
	struct FInputChord                           SelectedKey;                                       // 0x0(0x20)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function WG_Op_ControlPanel.WG_Op_ControlPanel_C.BndEvt__WG_Op_ControlPanel_SwitchFireKeySelector_K2Node_ComponentBoundEvent_29_OnKeySelected__DelegateSignature
struct UWG_Op_ControlPanel_C_BndEvt__WG_Op_ControlPanel_SwitchFireKeySelector_K2Node_ComponentBoundEvent_29_OnKeySelected__DelegateSignature_Params
{
public:
	struct FInputChord                           SelectedKey;                                       // 0x0(0x20)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function WG_Op_ControlPanel.WG_Op_ControlPanel_C.BndEvt__WG_Op_ControlPanel_RunSelector_K2Node_ComponentBoundEvent_30_OnKeySelected__DelegateSignature
struct UWG_Op_ControlPanel_C_BndEvt__WG_Op_ControlPanel_RunSelector_K2Node_ComponentBoundEvent_30_OnKeySelected__DelegateSignature_Params
{
public:
	struct FInputChord                           SelectedKey;                                       // 0x0(0x20)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function WG_Op_ControlPanel.WG_Op_ControlPanel_C.BndEvt__WG_Op_ControlPanel_CheckBox_2_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature
struct UWG_Op_ControlPanel_C_BndEvt__WG_Op_ControlPanel_CheckBox_2_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature_Params
{
public:
	bool                                         bIsChecked;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function WG_Op_ControlPanel.WG_Op_ControlPanel_C.BndEvt__WG_Op_ControlPanel_CB_LeanRight_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature
struct UWG_Op_ControlPanel_C_BndEvt__WG_Op_ControlPanel_CB_LeanRight_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature_Params
{
public:
	bool                                         bIsChecked;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function WG_Op_ControlPanel.WG_Op_ControlPanel_C.BndEvt__WG_Op_ControlPanel_DatapadKeySelector_K2Node_ComponentBoundEvent_9_OnKeySelected__DelegateSignature
struct UWG_Op_ControlPanel_C_BndEvt__WG_Op_ControlPanel_DatapadKeySelector_K2Node_ComponentBoundEvent_9_OnKeySelected__DelegateSignature_Params
{
public:
	struct FInputChord                           SelectedKey;                                       // 0x0(0x20)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function WG_Op_ControlPanel.WG_Op_ControlPanel_C.BndEvt__WG_Op_ControlPanel_SLD_MouseSensitivity_K2Node_ComponentBoundEvent_2_OnFloatValueChangedEvent__DelegateSignature
struct UWG_Op_ControlPanel_C_BndEvt__WG_Op_ControlPanel_SLD_MouseSensitivity_K2Node_ComponentBoundEvent_2_OnFloatValueChangedEvent__DelegateSignature_Params
{
public:
	float                                        Value;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function WG_Op_ControlPanel.WG_Op_ControlPanel_C.PreConstruct
struct UWG_Op_ControlPanel_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function WG_Op_ControlPanel.WG_Op_ControlPanel_C.BndEvt__WG_Op_ControlPanel_CrouchKeySelector_K2Node_ComponentBoundEvent_8_OnKeySelected__DelegateSignature
struct UWG_Op_ControlPanel_C_BndEvt__WG_Op_ControlPanel_CrouchKeySelector_K2Node_ComponentBoundEvent_8_OnKeySelected__DelegateSignature_Params
{
public:
	struct FInputChord                           SelectedKey;                                       // 0x0(0x20)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function WG_Op_ControlPanel.WG_Op_ControlPanel_C.BndEvt__WG_Op_ControlPanel_AimKeySelector_K2Node_ComponentBoundEvent_7_OnKeySelected__DelegateSignature
struct UWG_Op_ControlPanel_C_BndEvt__WG_Op_ControlPanel_AimKeySelector_K2Node_ComponentBoundEvent_7_OnKeySelected__DelegateSignature_Params
{
public:
	struct FInputChord                           SelectedKey;                                       // 0x0(0x20)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function WG_Op_ControlPanel.WG_Op_ControlPanel_C.BndEvt__WG_Op_ControlPanel_ADSKeySelector_K2Node_ComponentBoundEvent_6_OnKeySelected__DelegateSignature
struct UWG_Op_ControlPanel_C_BndEvt__WG_Op_ControlPanel_ADSKeySelector_K2Node_ComponentBoundEvent_6_OnKeySelected__DelegateSignature_Params
{
public:
	struct FInputChord                           SelectedKey;                                       // 0x0(0x20)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function WG_Op_ControlPanel.WG_Op_ControlPanel_C.BndEvt__WG_Op_ControlPanel_ReloadKeySelector_K2Node_ComponentBoundEvent_0_OnKeySelected__DelegateSignature
struct UWG_Op_ControlPanel_C_BndEvt__WG_Op_ControlPanel_ReloadKeySelector_K2Node_ComponentBoundEvent_0_OnKeySelected__DelegateSignature_Params
{
public:
	struct FInputChord                           SelectedKey;                                       // 0x0(0x20)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function WG_Op_ControlPanel.WG_Op_ControlPanel_C.BndEvt__WG_Op_ControlPanel_RightKeySelector_K2Node_ComponentBoundEvent_3_OnKeySelected__DelegateSignature
struct UWG_Op_ControlPanel_C_BndEvt__WG_Op_ControlPanel_RightKeySelector_K2Node_ComponentBoundEvent_3_OnKeySelected__DelegateSignature_Params
{
public:
	struct FInputChord                           SelectedKey;                                       // 0x0(0x20)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function WG_Op_ControlPanel.WG_Op_ControlPanel_C.BndEvt__WG_Op_ControlPanel_LeftKeySelector_K2Node_ComponentBoundEvent_2_OnKeySelected__DelegateSignature
struct UWG_Op_ControlPanel_C_BndEvt__WG_Op_ControlPanel_LeftKeySelector_K2Node_ComponentBoundEvent_2_OnKeySelected__DelegateSignature_Params
{
public:
	struct FInputChord                           SelectedKey;                                       // 0x0(0x20)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function WG_Op_ControlPanel.WG_Op_ControlPanel_C.BndEvt__WG_Op_ControlPanel_BackwardKeySelector_K2Node_ComponentBoundEvent_1_OnKeySelected__DelegateSignature
struct UWG_Op_ControlPanel_C_BndEvt__WG_Op_ControlPanel_BackwardKeySelector_K2Node_ComponentBoundEvent_1_OnKeySelected__DelegateSignature_Params
{
public:
	struct FInputChord                           SelectedKey;                                       // 0x0(0x20)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function WG_Op_ControlPanel.WG_Op_ControlPanel_C.BndEvt__WG_Op_ControlPanel_ForwardKeySelector_K2Node_ComponentBoundEvent_5_OnKeySelected__DelegateSignature
struct UWG_Op_ControlPanel_C_BndEvt__WG_Op_ControlPanel_ForwardKeySelector_K2Node_ComponentBoundEvent_5_OnKeySelected__DelegateSignature_Params
{
public:
	struct FInputChord                           SelectedKey;                                       // 0x0(0x20)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x808 (0x808 - 0x0)
// Function WG_Op_ControlPanel.WG_Op_ControlPanel_C.ExecuteUbergraph_WG_Op_ControlPanel
struct UWG_Op_ControlPanel_C_ExecuteUbergraph_WG_Op_ControlPanel_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3D8E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USaveGame*                             Temp_object_Variable;                              // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class USaveGame*                             K2Node_CustomEvent_SaveGame_6;                     // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_bSuccess_6;                     // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3D90[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x1C(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_1;                              // 0x2C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3D91[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USaveGame*                             Temp_object_Variable_1;                            // 0x30(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UControls_SG_C*                        K2Node_DynamicCast_AsControls_SG;                  // 0x38(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3D93[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAsyncActionHandleSaveGame*            CallFunc_AsyncLoadGameFromSlot_ReturnValue;        // 0x48(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3D94[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x54(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3D95[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USaveGame*                             K2Node_CustomEvent_SaveGame_5;                     // 0x68(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_bSuccess_5;                     // 0x70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_2;                              // 0x71(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3D96[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USaveGame*                             Temp_object_Variable_2;                            // 0x78(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class USaveGame*                             K2Node_CustomEvent_SaveGame_4;                     // 0x80(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_bSuccess_4;                     // 0x88(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3D97[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0x8C(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_3;                              // 0x9C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3D99[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USaveGame*                             Temp_object_Variable_3;                            // 0xA0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class USaveGame*                             K2Node_CustomEvent_SaveGame_3;                     // 0xA8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_bSuccess_3;                     // 0xB0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3D9B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_3;            // 0xB4(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_4;                              // 0xC4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3D9C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USaveGame*                             Temp_object_Variable_4;                            // 0xC8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UControls_SG_C*                        K2Node_DynamicCast_AsControls_SG_1;                // 0xD0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0xD8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3D9E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAsyncActionHandleSaveGame*            CallFunc_AsyncSaveGameToSlot_ReturnValue;          // 0xE0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_4;            // 0xE8(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0xF8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3D9F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USaveGame*                             K2Node_CustomEvent_SaveGame_2;                     // 0x100(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_bSuccess_2;                     // 0x108(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_5;                              // 0x109(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3DA1[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USaveGame*                             Temp_object_Variable_5;                            // 0x110(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UControls_SG_C*                        K2Node_DynamicCast_AsControls_SG_2;                // 0x118(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0x120(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3DA2[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAsyncActionHandleSaveGame*            CallFunc_AsyncLoadGameFromSlot_ReturnValue_1;      // 0x128(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAsyncActionHandleSaveGame*            CallFunc_AsyncSaveGameToSlot_ReturnValue_1;        // 0x130(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x138(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_3;                    // 0x139(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3DA4[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_5;            // 0x13C(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3DA5[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USaveGame*                             K2Node_CustomEvent_SaveGame_1;                     // 0x150(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_bSuccess_1;                     // 0x158(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_6;                              // 0x159(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3DA6[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USaveGame*                             Temp_object_Variable_6;                            // 0x160(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UControls_SG_C*                        K2Node_DynamicCast_AsControls_SG_3;                // 0x168(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_3;                     // 0x170(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3DA7[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAsyncActionHandleSaveGame*            CallFunc_AsyncLoadGameFromSlot_ReturnValue_2;      // 0x178(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAsyncActionHandleSaveGame*            CallFunc_AsyncSaveGameToSlot_ReturnValue_2;        // 0x180(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_4;                    // 0x188(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_5;                    // 0x189(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3DA8[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_6;            // 0x18C(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3DA9[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USaveGame*                             K2Node_CustomEvent_SaveGame;                       // 0x1A0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_bSuccess;                       // 0x1A8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_7;                              // 0x1A9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3DAA[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USaveGame*                             Temp_object_Variable_7;                            // 0x1B0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UControls_SG_C*                        K2Node_DynamicCast_AsControls_SG_4;                // 0x1B8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_4;                     // 0x1C0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3DAC[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAsyncActionHandleSaveGame*            CallFunc_AsyncLoadGameFromSlot_ReturnValue_3;      // 0x1C8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAsyncActionHandleSaveGame*            CallFunc_AsyncSaveGameToSlot_ReturnValue_3;        // 0x1D0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_6;                    // 0x1D8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_7;                    // 0x1D9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3DAD[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInputChord                           K2Node_ComponentBoundEvent_SelectedKey_23;         // 0x1E0(0x20)(HasGetValueTypeHash)
	struct FInputChord                           K2Node_ComponentBoundEvent_SelectedKey_22;         // 0x200(0x20)(HasGetValueTypeHash)
	struct FInputChord                           K2Node_ComponentBoundEvent_SelectedKey_21;         // 0x220(0x20)(HasGetValueTypeHash)
	struct FInputChord                           K2Node_ComponentBoundEvent_SelectedKey_20;         // 0x240(0x20)(HasGetValueTypeHash)
	struct FInputChord                           K2Node_ComponentBoundEvent_SelectedKey_19;         // 0x260(0x20)(HasGetValueTypeHash)
	struct FInputChord                           K2Node_ComponentBoundEvent_SelectedKey_18;         // 0x280(0x20)(HasGetValueTypeHash)
	struct FInputChord                           K2Node_ComponentBoundEvent_SelectedKey_17;         // 0x2A0(0x20)(HasGetValueTypeHash)
	struct FInputChord                           K2Node_ComponentBoundEvent_SelectedKey_16;         // 0x2C0(0x20)(HasGetValueTypeHash)
	struct FInputChord                           K2Node_ComponentBoundEvent_SelectedKey_15;         // 0x2E0(0x20)(HasGetValueTypeHash)
	struct FInputChord                           K2Node_ComponentBoundEvent_SelectedKey_14;         // 0x300(0x20)(HasGetValueTypeHash)
	struct FInputChord                           K2Node_ComponentBoundEvent_SelectedKey_13;         // 0x320(0x20)(HasGetValueTypeHash)
	struct FInputChord                           K2Node_ComponentBoundEvent_SelectedKey_12;         // 0x340(0x20)(HasGetValueTypeHash)
	struct FInputChord                           K2Node_ComponentBoundEvent_SelectedKey_11;         // 0x360(0x20)(HasGetValueTypeHash)
	struct FInputChord                           K2Node_ComponentBoundEvent_SelectedKey_10;         // 0x380(0x20)(HasGetValueTypeHash)
	struct FInputChord                           K2Node_ComponentBoundEvent_SelectedKey_9;          // 0x3A0(0x20)(HasGetValueTypeHash)
	bool                                         K2Node_ComponentBoundEvent_bIsChecked_1;           // 0x3C0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3DB2[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USaveGame*                             K2Node_CustomEvent_SaveGame_7;                     // 0x3C8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_bSuccess_7;                     // 0x3D0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_ComponentBoundEvent_bIsChecked;             // 0x3D1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3DB4[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInputChord                           K2Node_ComponentBoundEvent_SelectedKey_8;          // 0x3D8(0x20)(HasGetValueTypeHash)
	float                                        K2Node_ComponentBoundEvent_Value;                  // 0x3F8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_7;            // 0x3FC(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_DoesSaveGameExist_ReturnValue;            // 0x40C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3DB8[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UControls_SG_C*                        CallFunc_CreateSaveGameObject_ReturnValue;         // 0x410(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAsyncActionHandleSaveGame*            CallFunc_AsyncSaveGameToSlot_ReturnValue_4;        // 0x418(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_8;                    // 0x420(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3DB9[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_8;            // 0x424(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3DBA[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USaveGame*                             K2Node_CustomEvent_SaveGame_8;                     // 0x438(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_bSuccess_8;                     // 0x440(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3DBB[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPawn*                                 CallFunc_GetOwningPlayerPawn_ReturnValue;          // 0x448(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UB_DemoCharacter_C*                    K2Node_DynamicCast_AsB_Demo_Character;             // 0x450(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_5;                     // 0x458(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3DBC[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_9;            // 0x45C(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3DBD[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USaveGame*                             Temp_object_Variable_8;                            // 0x470(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x478(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_8;                              // 0x479(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3DBE[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInputChord                           CallFunc_ConstructAxisRemap_InputChord;            // 0x480(0x20)(HasGetValueTypeHash)
	struct FInputChord                           CallFunc_ConstructAxisRemap_InputChord_1;          // 0x4A0(0x20)(HasGetValueTypeHash)
	struct FInputChord                           CallFunc_ConstructAxisRemap_InputChord_2;          // 0x4C0(0x20)(HasGetValueTypeHash)
	struct FInputChord                           CallFunc_ConstructAxisRemap_InputChord_3;          // 0x4E0(0x20)(HasGetValueTypeHash)
	struct FInputChord                           CallFunc_ConstructActionRemap_Key;                 // 0x500(0x20)(HasGetValueTypeHash)
	struct FInputChord                           CallFunc_ConstructActionRemap_Key_1;               // 0x520(0x20)(HasGetValueTypeHash)
	struct FInputChord                           CallFunc_ConstructActionRemap_Key_2;               // 0x540(0x20)(HasGetValueTypeHash)
	struct FInputChord                           CallFunc_ConstructActionRemap_Key_3;               // 0x560(0x20)(HasGetValueTypeHash)
	struct FInputChord                           CallFunc_ConstructActionRemap_Key_4;               // 0x580(0x20)(HasGetValueTypeHash)
	struct FInputChord                           CallFunc_ConstructActionRemap_Key_5;               // 0x5A0(0x20)(HasGetValueTypeHash)
	struct FInputChord                           CallFunc_ConstructActionRemap_Key_6;               // 0x5C0(0x20)(HasGetValueTypeHash)
	struct FInputChord                           CallFunc_ConstructActionRemap_Key_7;               // 0x5E0(0x20)(HasGetValueTypeHash)
	struct FInputChord                           CallFunc_ConstructActionRemap_Key_8;               // 0x600(0x20)(HasGetValueTypeHash)
	struct FInputChord                           CallFunc_ConstructActionRemap_Key_9;               // 0x620(0x20)(HasGetValueTypeHash)
	struct FInputChord                           K2Node_ComponentBoundEvent_SelectedKey_7;          // 0x640(0x20)(HasGetValueTypeHash)
	struct FInputChord                           K2Node_ComponentBoundEvent_SelectedKey_6;          // 0x660(0x20)(HasGetValueTypeHash)
	struct FInputChord                           K2Node_ComponentBoundEvent_SelectedKey_5;          // 0x680(0x20)(HasGetValueTypeHash)
	struct FInputChord                           CallFunc_ConstructActionRemap_Key_10;              // 0x6A0(0x20)(HasGetValueTypeHash)
	struct FInputChord                           CallFunc_ConstructActionRemap_Key_11;              // 0x6C0(0x20)(HasGetValueTypeHash)
	struct FInputChord                           CallFunc_ConstructActionRemap_Key_12;              // 0x6E0(0x20)(HasGetValueTypeHash)
	struct FInputChord                           CallFunc_ConstructActionRemap_Key_13;              // 0x700(0x20)(HasGetValueTypeHash)
	struct FInputChord                           K2Node_ComponentBoundEvent_SelectedKey_4;          // 0x720(0x20)(HasGetValueTypeHash)
	struct FInputChord                           K2Node_ComponentBoundEvent_SelectedKey_3;          // 0x740(0x20)(HasGetValueTypeHash)
	struct FInputChord                           K2Node_ComponentBoundEvent_SelectedKey_2;          // 0x760(0x20)(HasGetValueTypeHash)
	struct FInputChord                           K2Node_ComponentBoundEvent_SelectedKey_1;          // 0x780(0x20)(HasGetValueTypeHash)
	struct FInputChord                           K2Node_ComponentBoundEvent_SelectedKey;            // 0x7A0(0x20)(HasGetValueTypeHash)
	class UInputSettings*                        CallFunc_GetInputSettings_ReturnValue;             // 0x7C0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FInputChord                           CallFunc_ConstructActionRemap_Key_14;              // 0x7C8(0x20)(HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_10;           // 0x7E8(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_SetValue_InValue_ImplicitCast;            // 0x7F8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3DBF[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       K2Node_VariableSet_Mouse_Sensitivity_ImplicitCast; // 0x800(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


