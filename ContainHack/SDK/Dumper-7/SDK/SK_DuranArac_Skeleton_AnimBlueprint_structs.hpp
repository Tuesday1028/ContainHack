#pragma once

// Dumped with Dumper-7!


namespace SDK
{
	namespace SK_DuranArac_Skeleton_AnimBlueprint {


		//---------------------------------------------------------------------------------------------------------------------
		// ENUMS
		//---------------------------------------------------------------------------------------------------------------------


		//---------------------------------------------------------------------------------------------------------------------
		// STRUCTS
		//---------------------------------------------------------------------------------------------------------------------

		// 0xF7 (0xF8 - 0x1)
		// ScriptStruct SK_DuranArac_Skeleton_AnimBlueprint.SK_DuranArac_Skeleton_AnimBlueprint_C.AnimBlueprintGeneratedConstantData
		struct FAnimBlueprintGeneratedConstantData : public FAnimBlueprintConstantData
		{
		public:
			uint8                                        Pad_99B[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
			class FName                                  __NameProperty_16;                                 // 0x4(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			class FName                                  __NameProperty_17;                                 // 0xC(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			uint8                                        Pad_99D[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
			class UBlendProfile* __BlendProfile_18;                                 // 0x18(0x8)(BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
			class UCurveFloat* __CurveFloat_19;                                   // 0x20(0x8)(BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
			bool                                         __BoolProperty_20;                                 // 0x28(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			enum class EAlphaBlendOption                 __EnumProperty_21;                                 // 0x29(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			enum class EBlendListTransitionType          __EnumProperty_22;                                 // 0x2A(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			uint8                                        Pad_99E[0x5];                                      // Fixing Size After Last Property  [ Dumper-7 ]
			TArray<float>                                __ArrayProperty_23;                                // 0x30(0x10)(BlueprintVisible, EditFixedSize)
			struct FAnimNodeFunctionRef                  __StructProperty_24;                               // 0x40(0x20)(BlueprintVisible, NoDestructor)
			struct FAnimSubsystem_PropertyAccess         AnimBlueprintExtension_PropertyAccess;             // 0x60(0x80)(None)
			struct FAnimSubsystem_Base                   AnimBlueprintExtension_Base;                       // 0xE0(0x18)(None)
		};

		// 0x1 (0x2 - 0x1)
		// ScriptStruct SK_DuranArac_Skeleton_AnimBlueprint.SK_DuranArac_Skeleton_AnimBlueprint_C.AnimBlueprintGeneratedMutableData
		struct FAnimBlueprintGeneratedMutableData : public FAnimBlueprintMutableData
		{
		public:
			bool                                         __BoolProperty;                                    // 0x1(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		};
	}
}


