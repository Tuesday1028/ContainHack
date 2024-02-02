#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x2A8 - 0x278)
// WidgetBlueprintGeneratedClass WG_PlayerList.WG_PlayerList_C
class UWG_PlayerList_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x278(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBorder*                               ListBorder;                                        // 0x280(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          PlayersListCanvas;                                 // 0x288(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         IsServer;                                          // 0x290(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Fail;                                              // 0x291(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3E3A[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UWG_PlayerSlot_C*>              PlayerSlot;                                        // 0x298(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)

	static class UClass* StaticClass();
	static class UWG_PlayerList_C* GetDefaultObj();

	void ClearList();
	void AddPlayerToList(bool Fail, class FText Player, class UTexture2D* Avatar, int32 PlayerIndex);
	void Construct();
	void Testclient(enum class ESlateVisibility InVisibility, class UWG_PlayerSlot_C* Target);
	void ExecuteUbergraph_WG_PlayerList(int32 EntryPoint, class UPlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UWG_PlayerSlot_C* CallFunc_Create_ReturnValue, bool K2Node_CustomEvent_fail, class FText K2Node_CustomEvent_Player, class UTexture2D* K2Node_CustomEvent_Avatar, int32 K2Node_CustomEvent_PlayerIndex, int32 CallFunc_Array_Add_ReturnValue, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, enum class ESlateVisibility K2Node_CustomEvent_InVisibility, class UWG_PlayerSlot_C* K2Node_CustomEvent_Target);
};

}


