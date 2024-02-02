#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x2BC8 - 0x2BA0)
// BlueprintGeneratedClass FlashBang_Effect.FlashBang_Effect_C
class UFlashBang_Effect_C : public UChameleon_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2BA0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	float                                        Timeline_1_NewTrack_0_AB6F86454940223ECF27DA959388CED9; // 0x2BA8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                Timeline_1__Direction_AB6F86454940223ECF27DA959388CED9; // 0x2BAC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1B63[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    Timeline_1;                                        // 0x2BB0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	float                                        Timeline_0_NewTrack_0_43D6D4B443611D4A553FA9A1837A885B; // 0x2BB8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                Timeline_0__Direction_43D6D4B443611D4A553FA9A1837A885B; // 0x2BBC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1B6A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    Timeline_0;                                        // 0x2BC0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UFlashBang_Effect_C* GetDefaultObj();

	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void Timeline_1__FinishedFunc();
	void Timeline_1__UpdateFunc();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_FlashBang_Effect(int32 EntryPoint, const struct FAdvancedEffectFeatures& K2Node_MakeStruct_AdvancedEffectFeatures, double K2Node_VariableSet_Alcohol_Offset_ImplicitCast, double K2Node_VariableSet_Blur_Amount_ImplicitCast);
};

}


