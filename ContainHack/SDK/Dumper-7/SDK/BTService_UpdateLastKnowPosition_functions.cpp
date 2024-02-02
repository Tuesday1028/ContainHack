#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BTService_UpdateLastKnowPosition.BTService_UpdateLastKnowPosition_C
// (None)

class UClass* UBTService_UpdateLastKnowPosition_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BTService_UpdateLastKnowPosition_C");

	return Clss;
}


// BTService_UpdateLastKnowPosition_C BTService_UpdateLastKnowPosition.Default__BTService_UpdateLastKnowPosition_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBTService_UpdateLastKnowPosition_C* UBTService_UpdateLastKnowPosition_C::GetDefaultObj()
{
	static class UBTService_UpdateLastKnowPosition_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBTService_UpdateLastKnowPosition_C*>(UBTService_UpdateLastKnowPosition_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BTService_UpdateLastKnowPosition.BTService_UpdateLastKnowPosition_C.ReceiveTickAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UAIController*               OwnerController                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPawn*                       ControlledPawn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBTService_UpdateLastKnowPosition_C::ReceiveTickAI(class UAIController* OwnerController, class UPawn* ControlledPawn, float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTService_UpdateLastKnowPosition_C", "ReceiveTickAI");

	Params::UBTService_UpdateLastKnowPosition_C_ReceiveTickAI_Params Parms{};

	Parms.OwnerController = OwnerController;
	Parms.ControlledPawn = ControlledPawn;
	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BTService_UpdateLastKnowPosition.BTService_UpdateLastKnowPosition_C.ExecuteUbergraph_BTService_UpdateLastKnowPosition
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_GetBlackboardValueAsObject_ReturnValue                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAIController*               K2Node_Event_OwnerController                                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPawn*                       K2Node_Event_ControlledPawn                                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class UCLM_BPI_NPC_C>K2Node_DynamicCast_AsCLM_BPI_NPC                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetLocation_characterLoc                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBTService_UpdateLastKnowPosition_C::ExecuteUbergraph_BTService_UpdateLastKnowPosition(int32 EntryPoint, class UObject* CallFunc_GetBlackboardValueAsObject_ReturnValue, class UAIController* K2Node_Event_OwnerController, class UPawn* K2Node_Event_ControlledPawn, float K2Node_Event_DeltaSeconds, TScriptInterface<class UCLM_BPI_NPC_C> K2Node_DynamicCast_AsCLM_BPI_NPC, bool K2Node_DynamicCast_bSuccess, const struct FVector& CallFunc_GetLocation_characterLoc)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTService_UpdateLastKnowPosition_C", "ExecuteUbergraph_BTService_UpdateLastKnowPosition");

	Params::UBTService_UpdateLastKnowPosition_C_ExecuteUbergraph_BTService_UpdateLastKnowPosition_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetBlackboardValueAsObject_ReturnValue = CallFunc_GetBlackboardValueAsObject_ReturnValue;
	Parms.K2Node_Event_OwnerController = K2Node_Event_OwnerController;
	Parms.K2Node_Event_ControlledPawn = K2Node_Event_ControlledPawn;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.K2Node_DynamicCast_AsCLM_BPI_NPC = K2Node_DynamicCast_AsCLM_BPI_NPC;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetLocation_characterLoc = CallFunc_GetLocation_characterLoc;

	UObject::ProcessEvent(Func, &Parms);

}

}


