#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x38 (0x2C8 - 0x290)
// BlueprintGeneratedClass BP_45GaBigBox.BP_45GaBigBox_C
class UBP_45GaBigBox_C : public UActor
{
public:
	class UBillboardComponent*                   Billboard;                                         // 0x290(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  StaticMeshComponent01;                             // 0x298(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  StaticMeshComponent0;                              // 0x2A0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       SharedRoot;                                        // 0x2A8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                         Visible_Cap;                                       // 0x2B0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_38E4[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       Rotation_Cap;                                      // 0x2B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Box_Draw_Distance__0_Minus_Infinity_;              // 0x2C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_45GaBigBox_C* GetDefaultObj();

	void UserConstructionScript(enum class ECollisionEnabled Temp_byte_Variable, enum class ECollisionEnabled Temp_byte_Variable_1, bool Temp_bool_Variable, const struct FRotator& CallFunc_MakeRotator_ReturnValue, enum class ECollisionEnabled K2Node_Select_Default, const struct FHitResult& CallFunc_K2_AddRelativeRotation_SweepHitResult, float CallFunc_SetCullDistance_NewCullDistance_ImplicitCast, float CallFunc_MakeRotator_Pitch_ImplicitCast);
};

}


