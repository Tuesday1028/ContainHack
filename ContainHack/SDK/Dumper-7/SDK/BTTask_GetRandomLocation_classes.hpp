#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x50 (0xF8 - 0xA8)
// BlueprintGeneratedClass BTTask_GetRandomLocation.BTTask_GetRandomLocation_C
class UBTTask_GetRandomLocation_C : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	double                                       Radius;                                            // 0xB0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FBlackboardKeySelector                MoveToLocation;                                    // 0xB8(0x28)(Edit, BlueprintVisible, ExposeOnSpawn)
	struct FVector                               Location;                                          // 0xE0(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBTTask_GetRandomLocation_C* GetDefaultObj();

	void ReceiveTickAI(class UAIController* OwnerController, class UPawn* ControlledPawn, float DeltaSeconds);
	void ExecuteUbergraph_BTTask_GetRandomLocation(int32 EntryPoint, class FName CallFunc_MakeLiteralName_ReturnValue, class UAIController* K2Node_Event_OwnerController, class UPawn* K2Node_Event_ControlledPawn, float K2Node_Event_DeltaSeconds, class UAI_WeepingAngel_C* K2Node_DynamicCast_AsAI_Weeping_Angel, bool K2Node_DynamicCast_bSuccess, class UAI_Blackhole_C* K2Node_DynamicCast_AsAI_Blackhole, bool K2Node_DynamicCast_bSuccess_1, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, class UAI_Steve_C* K2Node_DynamicCast_AsAI_Steve, bool K2Node_DynamicCast_bSuccess_2, class UAI_AnimMan_C* K2Node_DynamicCast_AsAI_Anim_Man, bool K2Node_DynamicCast_bSuccess_3, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_2, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_3, const struct FVector& CallFunc_K2_GetRandomReachablePointInRadius_RandomLocation, bool CallFunc_K2_GetRandomReachablePointInRadius_ReturnValue, const struct FVector& CallFunc_K2_GetRandomReachablePointInRadius_RandomLocation_1, bool CallFunc_K2_GetRandomReachablePointInRadius_ReturnValue_1, const struct FVector& CallFunc_K2_GetRandomReachablePointInRadius_RandomLocation_2, bool CallFunc_K2_GetRandomReachablePointInRadius_ReturnValue_2, const struct FVector& CallFunc_K2_GetRandomReachablePointInRadius_RandomLocation_3, bool CallFunc_K2_GetRandomReachablePointInRadius_ReturnValue_3, float CallFunc_K2_GetRandomReachablePointInRadius_Radius_ImplicitCast, float CallFunc_K2_GetRandomReachablePointInRadius_Radius_ImplicitCast_1, float CallFunc_K2_GetRandomReachablePointInRadius_Radius_ImplicitCast_2, float CallFunc_K2_GetRandomReachablePointInRadius_Radius_ImplicitCast_3);
};

}


