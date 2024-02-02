#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x290 - 0x278)
// WidgetBlueprintGeneratedClass EndGameMission.EndGameMission_C
class UEndGameMission_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x278(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UCanvasPanel*                          CanvasPanel_22;                                    // 0x280(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Gorev;                                             // 0x288(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UEndGameMission_C* GetDefaultObj();

	void Render(double Opac, double InterpSpeed);
	void ExecuteUbergraph_EndGameMission(int32 EntryPoint, float CallFunc_GetRenderOpacity_ReturnValue, double CallFunc_GetWorldDeltaSeconds_ReturnValue, double K2Node_CustomEvent_Opac, double K2Node_CustomEvent_InterpSpeed, bool CallFunc_EqualEqual_DoubleDouble_ReturnValue, double CallFunc_FInterpTo_ReturnValue, double CallFunc_EqualEqual_DoubleDouble_B_ImplicitCast, double CallFunc_FInterpTo_Current_ImplicitCast, float CallFunc_SetRenderOpacity_InOpacity_ImplicitCast);
};

}


