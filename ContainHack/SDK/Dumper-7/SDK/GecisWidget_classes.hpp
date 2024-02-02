#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x290 - 0x278)
// WidgetBlueprintGeneratedClass GecisWidget.GecisWidget_C
class UGecisWidget_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x278(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      TamAnimation;                                      // 0x280(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                Image_0;                                           // 0x288(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UGecisWidget_C* GetDefaultObj();

	void Construct();
	void Destruct();
	void ExecuteUbergraph_GecisWidget(int32 EntryPoint, class UCharacter* CallFunc_GetPlayerCharacter_ReturnValue, class UB_DemoCharacter_C* K2Node_DynamicCast_AsB_Demo_Character, bool K2Node_DynamicCast_bSuccess, int32 Temp_int_Variable, class UPlayerController* CallFunc_GetLocalViewingPlayerController_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, TArray<class UGecisWidget_C*>& CallFunc_GetAllWidgetsOfClass_FoundWidgets, class UGecisWidget_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UCharacter* CallFunc_GetPlayerCharacter_ReturnValue_1, class UB_DemoCharacter_C* K2Node_DynamicCast_AsB_Demo_Character_1, bool K2Node_DynamicCast_bSuccess_1, class UCharacter* CallFunc_GetPlayerCharacter_ReturnValue_2, class UPlayerController* CallFunc_GetLocalViewingPlayerController_ReturnValue_1, class UB_DemoCharacter_C* K2Node_DynamicCast_AsB_Demo_Character_2, bool K2Node_DynamicCast_bSuccess_2, class UPlayerController* CallFunc_GetLocalViewingPlayerController_ReturnValue_2);
};

}


