#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x58 (0xF0 - 0x98)
// BlueprintGeneratedClass BTService_UpdateLastKnowPosition.BTService_UpdateLastKnowPosition_C
class UBTService_UpdateLastKnowPosition_C : public UBTService_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x98(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FBlackboardKeySelector                LastKnownPositionKey;                              // 0xA0(0x28)(Edit, BlueprintVisible)
	struct FBlackboardKeySelector                TargetActorKey;                                    // 0xC8(0x28)(Edit, BlueprintVisible)

	static class UClass* StaticClass();
	static class UBTService_UpdateLastKnowPosition_C* GetDefaultObj();

	void ReceiveTickAI(class UAIController* OwnerController, class UPawn* ControlledPawn, float DeltaSeconds);
	void ExecuteUbergraph_BTService_UpdateLastKnowPosition(int32 EntryPoint, class UObject* CallFunc_GetBlackboardValueAsObject_ReturnValue, class UAIController* K2Node_Event_OwnerController, class UPawn* K2Node_Event_ControlledPawn, float K2Node_Event_DeltaSeconds, TScriptInterface<class UCLM_BPI_NPC_C> K2Node_DynamicCast_AsCLM_BPI_NPC, bool K2Node_DynamicCast_bSuccess, const struct FVector& CallFunc_GetLocation_characterLoc);
};

}


