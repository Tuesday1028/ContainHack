#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x14 (0x359 - 0x345)
// BlueprintGeneratedClass BP_Table_Light1.BP_Table_Light1_C
class UBP_Table_Light1_C : public UBP_P_Furniture_C
{
public:
	uint8                                        Pad_FC8[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x348(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USpotLightComponent*                   SpotLight;                                         // 0x350(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                         Random;                                            // 0x358(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_Table_Light1_C* GetDefaultObj();

	void UserConstructionScript(bool Temp_bool_Variable, bool CallFunc_RandomBoolWithWeightFromStream_ReturnValue, bool K2Node_Select_Default);
	void Activate();
	void ExecuteUbergraph_BP_Table_Light1(int32 EntryPoint);
};

}


