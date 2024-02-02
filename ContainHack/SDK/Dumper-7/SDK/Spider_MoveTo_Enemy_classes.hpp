#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xA0 (0x148 - 0xA8)
// BlueprintGeneratedClass Spider_MoveTo_Enemy.Spider_MoveTo_Enemy_C
class USpider_MoveTo_Enemy_C : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FBlackboardKeySelector                TargetSuspect;                                     // 0xB0(0x28)(Edit, BlueprintVisible, ExposeOnSpawn)
	struct FBlackboardKeySelector                TargetLocation;                                    // 0xD8(0x28)(Edit, BlueprintVisible, ExposeOnSpawn)
	struct FBlackboardKeySelector                bIsTakingDamage;                                   // 0x100(0x28)(Edit, BlueprintVisible, ExposeOnSpawn)
	class UPawn*                                 _ControlledPawn;                                   // 0x128(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UAIController*                         _OwnerController;                                  // 0x130(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UGI_Contain_C*                         GIContain;                                         // 0x138(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                       AIData_Struct_SDFMovement_Speed;                   // 0x140(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class USpider_MoveTo_Enemy_C* GetDefaultObj();

	void OnFail_86DC06424A29698B130060983E121574(enum class EPathFollowingResult MovementResult);
	void OnSuccess_86DC06424A29698B130060983E121574(enum class EPathFollowingResult MovementResult);
	void ReceiveTickAI(class UAIController* OwnerController, class UPawn* ControlledPawn, float DeltaSeconds);
	void ExecuteUbergraph_Spider_MoveTo_Enemy(int32 EntryPoint, class UAI_Steve_C* K2Node_DynamicCast_AsAI_Steve, bool K2Node_DynamicCast_bSuccess, class UAI_Steve_C* K2Node_DynamicCast_AsAI_Steve_1, bool K2Node_DynamicCast_bSuccess_1, class UAIController* K2Node_Event_OwnerController, class UPawn* K2Node_Event_ControlledPawn, float K2Node_Event_DeltaSeconds, class UActor* CallFunc_GetBlackboardValueAsActor_ReturnValue, class UActor* CallFunc_GetBlackboardValueAsActor_ReturnValue_1, class UActor* CallFunc_GetBlackboardValueAsActor_ReturnValue_2, bool CallFunc_IsValid_ReturnValue, class UAI_Spider_C* K2Node_DynamicCast_AsAI_Spider, bool K2Node_DynamicCast_bSuccess_2, float CallFunc_GetDistanceTo_ReturnValue, bool CallFunc_LessEqual_DoubleDouble_ReturnValue, class UActor* CallFunc_GetBlackboardValueAsActor_ReturnValue_3, class UAIAsyncTaskBlueprintProxy* CallFunc_CreateMoveToProxyObject_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UAI_Flyer_C* K2Node_DynamicCast_AsAI_Flyer, bool K2Node_DynamicCast_bSuccess_3, class UActor* CallFunc_GetBlackboardValueAsActor_ReturnValue_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue_2, class UActor* CallFunc_GetBlackboardValueAsActor_ReturnValue_5, class UActor* CallFunc_GetBlackboardValueAsActor_ReturnValue_6, float CallFunc_GetDistanceTo_ReturnValue_1, bool CallFunc_LessEqual_DoubleDouble_ReturnValue_1, class UAI_Distorted_01_C* K2Node_DynamicCast_AsAI_Distorted_01, bool K2Node_DynamicCast_bSuccess_4, class UActor* CallFunc_GetBlackboardValueAsActor_ReturnValue_7, enum class EPathFollowingResult Temp_byte_Variable, bool CallFunc_IsValid_ReturnValue_3, enum class EPathFollowingResult K2Node_CustomEvent_MovementResult, class UActor* CallFunc_GetBlackboardValueAsActor_ReturnValue_8, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, float CallFunc_GetDistanceTo_ReturnValue_2, bool CallFunc_LessEqual_DoubleDouble_ReturnValue_2, class UActor* CallFunc_GetBlackboardValueAsActor_ReturnValue_9, enum class EPathFollowingResult K2Node_CustomEvent_MovementResult_1, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UGI_Contain_C* K2Node_DynamicCast_AsGI_Contain, bool K2Node_DynamicCast_bSuccess_5, float CallFunc_Server_SetMovementSpeed_Max_Walk_Speed_ImplicitCast, double CallFunc_LessEqual_DoubleDouble_A_ImplicitCast, double CallFunc_LessEqual_DoubleDouble_A_ImplicitCast_1, double CallFunc_LessEqual_DoubleDouble_A_ImplicitCast_2, float CallFunc_Server_SetMovementSpeed_Max_Walk_Speed_ImplicitCast_1, float CallFunc_Server_SetMovementSpeed_Max_Walk_Speed_ImplicitCast_2);
};

}


