#pragma once

// Dumped with Dumper-7!


namespace SDK
{
	namespace HeliSeq
	{


		//---------------------------------------------------------------------------------------------------------------------
		// ENUMS
		//---------------------------------------------------------------------------------------------------------------------


		//---------------------------------------------------------------------------------------------------------------------
		// STRUCTS
		//---------------------------------------------------------------------------------------------------------------------

		// 0x107 (0x108 - 0x1)
		// ScriptStruct HeliSeq.HeliSeq_C.AnimBlueprintGeneratedConstantData
		struct FAnimBlueprintGeneratedConstantData : public FAnimBlueprintConstantData
		{
		public:
			uint8                                        Pad_3A8D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
			class FName                                  __NameProperty_19;                                 // 0x4(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			bool                                         __BoolProperty_20;                                 // 0xC(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			uint8                                        Pad_3A8F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
			float                                        __FloatProperty_21;                                // 0x10(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			struct FInputScaleBiasClampConstants         __StructProperty_22;                               // 0x14(0x2C)(BlueprintVisible, NoDestructor)
			float                                        __FloatProperty_23;                                // 0x40(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			bool                                         __BoolProperty_24;                                 // 0x44(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			enum class EAnimSyncMethod                   __EnumProperty_25;                                 // 0x45(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			enum class EAnimGroupRole                    __ByteProperty_26;                                 // 0x46(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			uint8                                        Pad_3A91[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
			class FName                                  __NameProperty_27;                                 // 0x48(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			struct FAnimNodeFunctionRef                  __StructProperty_28;                               // 0x50(0x20)(BlueprintVisible, NoDestructor)
			struct FAnimSubsystem_PropertyAccess         AnimBlueprintExtension_PropertyAccess;             // 0x70(0x80)(None)
			struct FAnimSubsystem_Base                   AnimBlueprintExtension_Base;                       // 0xF0(0x18)(None)
		};
	}
}


