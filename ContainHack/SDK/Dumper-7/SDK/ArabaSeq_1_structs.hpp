#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0xCF (0xD0 - 0x1)
// ScriptStruct ArabaSeq.ArabaSeq_C.AnimBlueprintGeneratedConstantData
struct FAnimBlueprintGeneratedConstantData : public FAnimBlueprintConstantData
{
public:
	uint8                                        Pad_23EB[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  __NameProperty_16;                                 // 0x4(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  __NameProperty_17;                                 // 0xC(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_23EC[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAnimNodeFunctionRef                  __StructProperty_18;                               // 0x18(0x20)(BlueprintVisible, NoDestructor)
	struct FAnimSubsystem_PropertyAccess         AnimBlueprintExtension_PropertyAccess;             // 0x38(0x80)(None)
	struct FAnimSubsystem_Base                   AnimBlueprintExtension_Base;                       // 0xB8(0x18)(None)
};

}


