#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x14 (0x359 - 0x345)
// BlueprintGeneratedClass BP_Industry_Light1.BP_Industry_Light1_C
class UBP_Industry_Light1_C : public UBP_P_Furniture_C
{
public:
	uint8                                        Pad_2A4[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UPointLightComponent*                  PointLight1;                                       // 0x348(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              LightMatInst;                                      // 0x350(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         Random;                                            // 0x358(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_Industry_Light1_C* GetDefaultObj();

	void UserConstructionScript(bool LocalRandom, bool Temp_bool_Variable, bool Temp_bool_Variable_1, const struct FLinearColor& Temp_struct_Variable, bool CallFunc_RandomBoolWithWeightFromStream_ReturnValue, bool K2Node_Select_Default, class UMaterialInterface* CallFunc_GetMaterial_ReturnValue, const struct FLinearColor& K2Node_Select_Default_1, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue);
};

}


