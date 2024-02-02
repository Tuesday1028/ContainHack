#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Spider_MoveTo_Enemy.Spider_MoveTo_Enemy_C
// (None)

class UClass* USpider_MoveTo_Enemy_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Spider_MoveTo_Enemy_C");

	return Clss;
}


// Spider_MoveTo_Enemy_C Spider_MoveTo_Enemy.Default__Spider_MoveTo_Enemy_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USpider_MoveTo_Enemy_C* USpider_MoveTo_Enemy_C::GetDefaultObj()
{
	static class USpider_MoveTo_Enemy_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USpider_MoveTo_Enemy_C*>(USpider_MoveTo_Enemy_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Spider_MoveTo_Enemy.Spider_MoveTo_Enemy_C.OnFail_86DC06424A29698B130060983E121574
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EPathFollowingResult    MovementResult                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USpider_MoveTo_Enemy_C::OnFail_86DC06424A29698B130060983E121574(enum class EPathFollowingResult MovementResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Spider_MoveTo_Enemy_C", "OnFail_86DC06424A29698B130060983E121574");

	Params::USpider_MoveTo_Enemy_C_OnFail_86DC06424A29698B130060983E121574_Params Parms{};

	Parms.MovementResult = MovementResult;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Spider_MoveTo_Enemy.Spider_MoveTo_Enemy_C.OnSuccess_86DC06424A29698B130060983E121574
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EPathFollowingResult    MovementResult                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USpider_MoveTo_Enemy_C::OnSuccess_86DC06424A29698B130060983E121574(enum class EPathFollowingResult MovementResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Spider_MoveTo_Enemy_C", "OnSuccess_86DC06424A29698B130060983E121574");

	Params::USpider_MoveTo_Enemy_C_OnSuccess_86DC06424A29698B130060983E121574_Params Parms{};

	Parms.MovementResult = MovementResult;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Spider_MoveTo_Enemy.Spider_MoveTo_Enemy_C.ReceiveTickAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UAIController*               OwnerController                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPawn*                       ControlledPawn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USpider_MoveTo_Enemy_C::ReceiveTickAI(class UAIController* OwnerController, class UPawn* ControlledPawn, float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Spider_MoveTo_Enemy_C", "ReceiveTickAI");

	Params::USpider_MoveTo_Enemy_C_ReceiveTickAI_Params Parms{};

	Parms.OwnerController = OwnerController;
	Parms.ControlledPawn = ControlledPawn;
	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Spider_MoveTo_Enemy.Spider_MoveTo_Enemy_C.ExecuteUbergraph_Spider_MoveTo_Enemy
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAI_Steve_C*                 K2Node_DynamicCast_AsAI_Steve                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAI_Steve_C*                 K2Node_DynamicCast_AsAI_Steve_1                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAIController*               K2Node_Event_OwnerController                                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPawn*                       K2Node_Event_ControlledPawn                                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UActor*                      CallFunc_GetBlackboardValueAsActor_ReturnValue                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UActor*                      CallFunc_GetBlackboardValueAsActor_ReturnValue_1                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UActor*                      CallFunc_GetBlackboardValueAsActor_ReturnValue_2                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAI_Spider_C*                K2Node_DynamicCast_AsAI_Spider                                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetDistanceTo_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_DoubleDouble_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UActor*                      CallFunc_GetBlackboardValueAsActor_ReturnValue_3                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAIAsyncTaskBlueprintProxy*  CallFunc_CreateMoveToProxyObject_ReturnValue                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAI_Flyer_C*                 K2Node_DynamicCast_AsAI_Flyer                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UActor*                      CallFunc_GetBlackboardValueAsActor_ReturnValue_4                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UActor*                      CallFunc_GetBlackboardValueAsActor_ReturnValue_5                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UActor*                      CallFunc_GetBlackboardValueAsActor_ReturnValue_6                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetDistanceTo_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_DoubleDouble_ReturnValue_1                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAI_Distorted_01_C*          K2Node_DynamicCast_AsAI_Distorted_01                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UActor*                      CallFunc_GetBlackboardValueAsActor_ReturnValue_7                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EPathFollowingResult    Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPathFollowingResult    K2Node_CustomEvent_MovementResult                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UActor*                      CallFunc_GetBlackboardValueAsActor_ReturnValue_8                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetDistanceTo_ReturnValue_2                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_DoubleDouble_ReturnValue_2                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UActor*                      CallFunc_GetBlackboardValueAsActor_ReturnValue_9                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EPathFollowingResult    K2Node_CustomEvent_MovementResult_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UGI_Contain_C*               K2Node_DynamicCast_AsGI_Contain                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_5                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Server_SetMovementSpeed_Max_Walk_Speed_ImplicitCast     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_LessEqual_DoubleDouble_A_ImplicitCast                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_LessEqual_DoubleDouble_A_ImplicitCast_1                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_LessEqual_DoubleDouble_A_ImplicitCast_2                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Server_SetMovementSpeed_Max_Walk_Speed_ImplicitCast_1   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Server_SetMovementSpeed_Max_Walk_Speed_ImplicitCast_2   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USpider_MoveTo_Enemy_C::ExecuteUbergraph_Spider_MoveTo_Enemy(int32 EntryPoint, class UAI_Steve_C* K2Node_DynamicCast_AsAI_Steve, bool K2Node_DynamicCast_bSuccess, class UAI_Steve_C* K2Node_DynamicCast_AsAI_Steve_1, bool K2Node_DynamicCast_bSuccess_1, class UAIController* K2Node_Event_OwnerController, class UPawn* K2Node_Event_ControlledPawn, float K2Node_Event_DeltaSeconds, class UActor* CallFunc_GetBlackboardValueAsActor_ReturnValue, class UActor* CallFunc_GetBlackboardValueAsActor_ReturnValue_1, class UActor* CallFunc_GetBlackboardValueAsActor_ReturnValue_2, bool CallFunc_IsValid_ReturnValue, class UAI_Spider_C* K2Node_DynamicCast_AsAI_Spider, bool K2Node_DynamicCast_bSuccess_2, float CallFunc_GetDistanceTo_ReturnValue, bool CallFunc_LessEqual_DoubleDouble_ReturnValue, class UActor* CallFunc_GetBlackboardValueAsActor_ReturnValue_3, class UAIAsyncTaskBlueprintProxy* CallFunc_CreateMoveToProxyObject_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UAI_Flyer_C* K2Node_DynamicCast_AsAI_Flyer, bool K2Node_DynamicCast_bSuccess_3, class UActor* CallFunc_GetBlackboardValueAsActor_ReturnValue_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue_2, class UActor* CallFunc_GetBlackboardValueAsActor_ReturnValue_5, class UActor* CallFunc_GetBlackboardValueAsActor_ReturnValue_6, float CallFunc_GetDistanceTo_ReturnValue_1, bool CallFunc_LessEqual_DoubleDouble_ReturnValue_1, class UAI_Distorted_01_C* K2Node_DynamicCast_AsAI_Distorted_01, bool K2Node_DynamicCast_bSuccess_4, class UActor* CallFunc_GetBlackboardValueAsActor_ReturnValue_7, enum class EPathFollowingResult Temp_byte_Variable, bool CallFunc_IsValid_ReturnValue_3, enum class EPathFollowingResult K2Node_CustomEvent_MovementResult, class UActor* CallFunc_GetBlackboardValueAsActor_ReturnValue_8, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, float CallFunc_GetDistanceTo_ReturnValue_2, bool CallFunc_LessEqual_DoubleDouble_ReturnValue_2, class UActor* CallFunc_GetBlackboardValueAsActor_ReturnValue_9, enum class EPathFollowingResult K2Node_CustomEvent_MovementResult_1, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UGI_Contain_C* K2Node_DynamicCast_AsGI_Contain, bool K2Node_DynamicCast_bSuccess_5, float CallFunc_Server_SetMovementSpeed_Max_Walk_Speed_ImplicitCast, double CallFunc_LessEqual_DoubleDouble_A_ImplicitCast, double CallFunc_LessEqual_DoubleDouble_A_ImplicitCast_1, double CallFunc_LessEqual_DoubleDouble_A_ImplicitCast_2, float CallFunc_Server_SetMovementSpeed_Max_Walk_Speed_ImplicitCast_1, float CallFunc_Server_SetMovementSpeed_Max_Walk_Speed_ImplicitCast_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Spider_MoveTo_Enemy_C", "ExecuteUbergraph_Spider_MoveTo_Enemy");

	Params::USpider_MoveTo_Enemy_C_ExecuteUbergraph_Spider_MoveTo_Enemy_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_DynamicCast_AsAI_Steve = K2Node_DynamicCast_AsAI_Steve;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsAI_Steve_1 = K2Node_DynamicCast_AsAI_Steve_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_Event_OwnerController = K2Node_Event_OwnerController;
	Parms.K2Node_Event_ControlledPawn = K2Node_Event_ControlledPawn;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.CallFunc_GetBlackboardValueAsActor_ReturnValue = CallFunc_GetBlackboardValueAsActor_ReturnValue;
	Parms.CallFunc_GetBlackboardValueAsActor_ReturnValue_1 = CallFunc_GetBlackboardValueAsActor_ReturnValue_1;
	Parms.CallFunc_GetBlackboardValueAsActor_ReturnValue_2 = CallFunc_GetBlackboardValueAsActor_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsAI_Spider = K2Node_DynamicCast_AsAI_Spider;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_GetDistanceTo_ReturnValue = CallFunc_GetDistanceTo_ReturnValue;
	Parms.CallFunc_LessEqual_DoubleDouble_ReturnValue = CallFunc_LessEqual_DoubleDouble_ReturnValue;
	Parms.CallFunc_GetBlackboardValueAsActor_ReturnValue_3 = CallFunc_GetBlackboardValueAsActor_ReturnValue_3;
	Parms.CallFunc_CreateMoveToProxyObject_ReturnValue = CallFunc_CreateMoveToProxyObject_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsAI_Flyer = K2Node_DynamicCast_AsAI_Flyer;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.CallFunc_GetBlackboardValueAsActor_ReturnValue_4 = CallFunc_GetBlackboardValueAsActor_ReturnValue_4;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_GetBlackboardValueAsActor_ReturnValue_5 = CallFunc_GetBlackboardValueAsActor_ReturnValue_5;
	Parms.CallFunc_GetBlackboardValueAsActor_ReturnValue_6 = CallFunc_GetBlackboardValueAsActor_ReturnValue_6;
	Parms.CallFunc_GetDistanceTo_ReturnValue_1 = CallFunc_GetDistanceTo_ReturnValue_1;
	Parms.CallFunc_LessEqual_DoubleDouble_ReturnValue_1 = CallFunc_LessEqual_DoubleDouble_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsAI_Distorted_01 = K2Node_DynamicCast_AsAI_Distorted_01;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;
	Parms.CallFunc_GetBlackboardValueAsActor_ReturnValue_7 = CallFunc_GetBlackboardValueAsActor_ReturnValue_7;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.K2Node_CustomEvent_MovementResult = K2Node_CustomEvent_MovementResult;
	Parms.CallFunc_GetBlackboardValueAsActor_ReturnValue_8 = CallFunc_GetBlackboardValueAsActor_ReturnValue_8;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_GetDistanceTo_ReturnValue_2 = CallFunc_GetDistanceTo_ReturnValue_2;
	Parms.CallFunc_LessEqual_DoubleDouble_ReturnValue_2 = CallFunc_LessEqual_DoubleDouble_ReturnValue_2;
	Parms.CallFunc_GetBlackboardValueAsActor_ReturnValue_9 = CallFunc_GetBlackboardValueAsActor_ReturnValue_9;
	Parms.K2Node_CustomEvent_MovementResult_1 = K2Node_CustomEvent_MovementResult_1;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsGI_Contain = K2Node_DynamicCast_AsGI_Contain;
	Parms.K2Node_DynamicCast_bSuccess_5 = K2Node_DynamicCast_bSuccess_5;
	Parms.CallFunc_Server_SetMovementSpeed_Max_Walk_Speed_ImplicitCast = CallFunc_Server_SetMovementSpeed_Max_Walk_Speed_ImplicitCast;
	Parms.CallFunc_LessEqual_DoubleDouble_A_ImplicitCast = CallFunc_LessEqual_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_LessEqual_DoubleDouble_A_ImplicitCast_1 = CallFunc_LessEqual_DoubleDouble_A_ImplicitCast_1;
	Parms.CallFunc_LessEqual_DoubleDouble_A_ImplicitCast_2 = CallFunc_LessEqual_DoubleDouble_A_ImplicitCast_2;
	Parms.CallFunc_Server_SetMovementSpeed_Max_Walk_Speed_ImplicitCast_1 = CallFunc_Server_SetMovementSpeed_Max_Walk_Speed_ImplicitCast_1;
	Parms.CallFunc_Server_SetMovementSpeed_Max_Walk_Speed_ImplicitCast_2 = CallFunc_Server_SetMovementSpeed_Max_Walk_Speed_ImplicitCast_2;

	UObject::ProcessEvent(Func, &Parms);

}

}


