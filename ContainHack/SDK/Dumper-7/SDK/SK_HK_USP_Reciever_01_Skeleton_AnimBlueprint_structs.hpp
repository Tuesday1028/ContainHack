#pragma once

// Dumped with Dumper-7!


namespace SDK
{
	namespace SK_HK_USP_Reciever_01_Skeleton_AnimBlueprint
	{
		//---------------------------------------------------------------------------------------------------------------------
		// ENUMS
		//---------------------------------------------------------------------------------------------------------------------


		//---------------------------------------------------------------------------------------------------------------------
		// STRUCTS
		//---------------------------------------------------------------------------------------------------------------------

		// 0x12F (0x130 - 0x1)
		// ScriptStruct SK_HK_USP_Reciever_01_Skeleton_AnimBlueprint.SK_HK_USP_Reciever_01_Skeleton_AnimBlueprint_C.AnimBlueprintGeneratedConstantData
		struct FAnimBlueprintGeneratedConstantData : public FAnimBlueprintConstantData
		{
		public:
			uint8                                        Pad_316C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
			class FName                                  __NameProperty_27;                                 // 0x4(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			bool                                         __BoolProperty_28;                                 // 0xC(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			uint8                                        Pad_316D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
			class UBlendProfile* __BlendProfile_29;                                 // 0x10(0x8)(BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
			class UCurveFloat* __CurveFloat_30;                                   // 0x18(0x8)(BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
			enum class EAlphaBlendOption                 __EnumProperty_31;                                 // 0x20(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			enum class EBlendListTransitionType          __EnumProperty_32;                                 // 0x21(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			uint8                                        Pad_316E[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
			TArray<float>                                __ArrayProperty_33;                                // 0x28(0x10)(BlueprintVisible, EditFixedSize)
			struct FAnimNodeFunctionRef                  __StructProperty_34;                               // 0x38(0x20)(BlueprintVisible, NoDestructor)
			float                                        __FloatProperty_35;                                // 0x58(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			struct FInputScaleBiasClampConstants         __StructProperty_36;                               // 0x5C(0x2C)(BlueprintVisible, NoDestructor)
			float                                        __FloatProperty_37;                                // 0x88(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			bool                                         __BoolProperty_38;                                 // 0x8C(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			enum class EAnimSyncMethod                   __EnumProperty_39;                                 // 0x8D(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			enum class EAnimGroupRole                    __ByteProperty_40;                                 // 0x8E(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			uint8                                        Pad_316F[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
			class FName                                  __NameProperty_41;                                 // 0x90(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			struct FAnimSubsystem_PropertyAccess         AnimBlueprintExtension_PropertyAccess;             // 0x98(0x80)(None)
			struct FAnimSubsystem_Base                   AnimBlueprintExtension_Base;                       // 0x118(0x18)(None)
		};

		// 0x1 (0x2 - 0x1)
		// ScriptStruct SK_HK_USP_Reciever_01_Skeleton_AnimBlueprint.SK_HK_USP_Reciever_01_Skeleton_AnimBlueprint_C.AnimBlueprintGeneratedMutableData
		struct FAnimBlueprintGeneratedMutableData : public FAnimBlueprintMutableData
		{
		public:
			bool                                         __BoolProperty;                                    // 0x1(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		};
	}
}


