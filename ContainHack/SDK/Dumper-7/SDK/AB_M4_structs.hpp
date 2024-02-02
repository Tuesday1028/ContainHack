#pragma once

// Dumped with Dumper-7!


namespace SDK
{
	namespace AB_M4 {


		//---------------------------------------------------------------------------------------------------------------------
		// ENUMS
		//---------------------------------------------------------------------------------------------------------------------


		//---------------------------------------------------------------------------------------------------------------------
		// STRUCTS
		//---------------------------------------------------------------------------------------------------------------------

		// 0x137 (0x138 - 0x1)
		// ScriptStruct AB_M4.AB_M4_C.AnimBlueprintGeneratedConstantData
		struct FAnimBlueprintGeneratedConstantData : public FAnimBlueprintConstantData
		{
		public:
			uint8                                        Pad_2D55[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
			class FName                                  __NameProperty_36;                                 // 0x4(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			uint8                                        Pad_2D56[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
			class UBlendProfile* __BlendProfile_37;                                 // 0x10(0x8)(BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
			class UCurveFloat* __CurveFloat_38;                                   // 0x18(0x8)(BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
			enum class EAlphaBlendOption                 __EnumProperty_39;                                 // 0x20(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			enum class EBlendListTransitionType          __EnumProperty_40;                                 // 0x21(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			uint8                                        Pad_2D57[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
			TArray<float>                                __ArrayProperty_41;                                // 0x28(0x10)(BlueprintVisible, EditFixedSize)
			struct FAnimNodeFunctionRef                  __StructProperty_42;                               // 0x38(0x20)(BlueprintVisible, NoDestructor)
			bool                                         __BoolProperty_43;                                 // 0x58(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			uint8                                        Pad_2D58[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
			float                                        __FloatProperty_44;                                // 0x5C(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			struct FInputScaleBiasClampConstants         __StructProperty_45;                               // 0x60(0x2C)(BlueprintVisible, NoDestructor)
			float                                        __FloatProperty_46;                                // 0x8C(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			bool                                         __BoolProperty_47;                                 // 0x90(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			enum class EAnimSyncMethod                   __EnumProperty_48;                                 // 0x91(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			enum class EAnimGroupRole                    __ByteProperty_49;                                 // 0x92(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			uint8                                        Pad_2D59[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
			class FName                                  __NameProperty_50;                                 // 0x94(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			uint8                                        Pad_2D5A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
			struct FAnimSubsystem_PropertyAccess         AnimBlueprintExtension_PropertyAccess;             // 0xA0(0x80)(None)
			struct FAnimSubsystem_Base                   AnimBlueprintExtension_Base;                       // 0x120(0x18)(None)
		};

		// 0x1 (0x2 - 0x1)
		// ScriptStruct AB_M4.AB_M4_C.AnimBlueprintGeneratedMutableData
		struct FAnimBlueprintGeneratedMutableData : public FAnimBlueprintMutableData
		{
		public:
			bool                                         __BoolProperty;                                    // 0x1(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		};

	}


}