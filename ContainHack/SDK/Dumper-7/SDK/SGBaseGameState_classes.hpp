#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x50 (0x330 - 0x2E0)
// BlueprintGeneratedClass SGBaseGameState.SGBaseGameState_C
class USGBaseGameState_C : public UGameStateBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2E0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x2E8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	int32                                        TotalPlayers;                                      // 0x2F0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Fail;                                              // 0x2F4(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2C24[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Player;                                            // 0x2F8(0x18)(Edit, BlueprintVisible, Net, DisableEditOnInstance)
	class UTexture2D*                            Avatar;                                            // 0x310(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	int32                                        Player_Index;                                      // 0x318(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2C25[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UHUBController2_C*                     As_HUBController;                                  // 0x320(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UObject*                               HubRef;                                            // 0x328(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class USGBaseGameState_C* GetDefaultObj();

	void OnRep_Player();
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void AddPlayer(bool Fail, class FText Player, class UTexture2D* Avatar, int32 PlayerIndex);
	void ExecuteUbergraph_SGBaseGameState(int32 EntryPoint, float K2Node_Event_DeltaSeconds, bool K2Node_CustomEvent_fail, class FText K2Node_CustomEvent_Player, class UTexture2D* K2Node_CustomEvent_Avatar, int32 K2Node_CustomEvent_PlayerIndex);
};

}


