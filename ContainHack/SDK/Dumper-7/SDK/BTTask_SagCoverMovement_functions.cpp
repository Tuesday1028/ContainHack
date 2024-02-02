#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BTTask_SagCoverMovement.BTTask_SagCoverMovement_C
// (None)

class UClass* UBTTask_SagCoverMovement_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BTTask_SagCoverMovement_C");

	return Clss;
}


// BTTask_SagCoverMovement_C BTTask_SagCoverMovement.Default__BTTask_SagCoverMovement_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBTTask_SagCoverMovement_C* UBTTask_SagCoverMovement_C::GetDefaultObj()
{
	static class UBTTask_SagCoverMovement_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBTTask_SagCoverMovement_C*>(UBTTask_SagCoverMovement_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BTTask_SagCoverMovement.BTTask_SagCoverMovement_C.ReceiveTickAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UAIController*               OwnerController                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPawn*                       ControlledPawn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBTTask_SagCoverMovement_C::ReceiveTickAI(class UAIController* OwnerController, class UPawn* ControlledPawn, float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTTask_SagCoverMovement_C", "ReceiveTickAI");

	Params::UBTTask_SagCoverMovement_C_ReceiveTickAI_Params Parms{};

	Parms.OwnerController = OwnerController;
	Parms.ControlledPawn = ControlledPawn;
	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BTTask_SagCoverMovement.BTTask_SagCoverMovement_C.ExecuteUbergraph_BTTask_SagCoverMovement
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetBlackboardValueAsBool_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetBlackboardValueAsBool_ReturnValue_1                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetBlackboardValueAsBool_ReturnValue_2                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAIController*               K2Node_Event_OwnerController                                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPawn*                       K2Node_Event_ControlledPawn                                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAI_AnimMan_C*               K2Node_DynamicCast_AsAI_Anim_Man                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAI_AnimMan_C*               K2Node_DynamicCast_AsAI_Anim_Man_1                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimInstance*               CallFunc_GetAnimInstance_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UALS_AiAnimBP_C*             K2Node_DynamicCast_AsALS_Ai_Anim_BP                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_RandomFloatInRange_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetBlackboardValueAsBool_ReturnValue_3                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_VariableSet_Duration_ImplicitCast                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBTTask_SagCoverMovement_C::ExecuteUbergraph_BTTask_SagCoverMovement(int32 EntryPoint, bool CallFunc_GetBlackboardValueAsBool_ReturnValue, bool CallFunc_GetBlackboardValueAsBool_ReturnValue_1, bool CallFunc_GetBlackboardValueAsBool_ReturnValue_2, class UAIController* K2Node_Event_OwnerController, class UPawn* K2Node_Event_ControlledPawn, float K2Node_Event_DeltaSeconds, class UAI_AnimMan_C* K2Node_DynamicCast_AsAI_Anim_Man, bool K2Node_DynamicCast_bSuccess, class UAI_AnimMan_C* K2Node_DynamicCast_AsAI_Anim_Man_1, bool K2Node_DynamicCast_bSuccess_1, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, class UALS_AiAnimBP_C* K2Node_DynamicCast_AsALS_Ai_Anim_BP, bool K2Node_DynamicCast_bSuccess_2, double CallFunc_RandomFloatInRange_ReturnValue, bool CallFunc_GetBlackboardValueAsBool_ReturnValue_3, bool Temp_bool_Has_Been_Initd_Variable, bool CallFunc_Not_PreBool_ReturnValue, bool Temp_bool_IsClosed_Variable, float K2Node_VariableSet_Duration_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTTask_SagCoverMovement_C", "ExecuteUbergraph_BTTask_SagCoverMovement");

	Params::UBTTask_SagCoverMovement_C_ExecuteUbergraph_BTTask_SagCoverMovement_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetBlackboardValueAsBool_ReturnValue = CallFunc_GetBlackboardValueAsBool_ReturnValue;
	Parms.CallFunc_GetBlackboardValueAsBool_ReturnValue_1 = CallFunc_GetBlackboardValueAsBool_ReturnValue_1;
	Parms.CallFunc_GetBlackboardValueAsBool_ReturnValue_2 = CallFunc_GetBlackboardValueAsBool_ReturnValue_2;
	Parms.K2Node_Event_OwnerController = K2Node_Event_OwnerController;
	Parms.K2Node_Event_ControlledPawn = K2Node_Event_ControlledPawn;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.K2Node_DynamicCast_AsAI_Anim_Man = K2Node_DynamicCast_AsAI_Anim_Man;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsAI_Anim_Man_1 = K2Node_DynamicCast_AsAI_Anim_Man_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetAnimInstance_ReturnValue = CallFunc_GetAnimInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsALS_Ai_Anim_BP = K2Node_DynamicCast_AsALS_Ai_Anim_BP;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_RandomFloatInRange_ReturnValue = CallFunc_RandomFloatInRange_ReturnValue;
	Parms.CallFunc_GetBlackboardValueAsBool_ReturnValue_3 = CallFunc_GetBlackboardValueAsBool_ReturnValue_3;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.K2Node_VariableSet_Duration_ImplicitCast = K2Node_VariableSet_Duration_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}

}


