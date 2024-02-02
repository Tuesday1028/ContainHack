#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass HUB01_Multiplayer.HUB01_Multiplayer_C
// (Actor)

class UClass* UHUB01_Multiplayer_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HUB01_Multiplayer_C");

	return Clss;
}


// HUB01_Multiplayer_C HUB01_Multiplayer.Default__HUB01_Multiplayer_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UHUB01_Multiplayer_C* UHUB01_Multiplayer_C::GetDefaultObj()
{
	static class UHUB01_Multiplayer_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UHUB01_Multiplayer_C*>(UHUB01_Multiplayer_C::StaticClass()->DefaultObject);

	return Default;
}


// Function HUB01_Multiplayer.HUB01_Multiplayer_C.BndEvt__HUB01_Multiplayer_TriggerSphere_1_K2Node_ActorBoundEvent_0_ActorBeginOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UActor*                      OverlappedActor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UActor*                      OtherActor                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UHUB01_Multiplayer_C::BndEvt__HUB01_Multiplayer_TriggerSphere_1_K2Node_ActorBoundEvent_0_ActorBeginOverlapSignature__DelegateSignature(class UActor* OverlappedActor, class UActor* OtherActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUB01_Multiplayer_C", "BndEvt__HUB01_Multiplayer_TriggerSphere_1_K2Node_ActorBoundEvent_0_ActorBeginOverlapSignature__DelegateSignature");

	Params::UHUB01_Multiplayer_C_BndEvt__HUB01_Multiplayer_TriggerSphere_1_K2Node_ActorBoundEvent_0_ActorBeginOverlapSignature__DelegateSignature_Params Parms{};

	Parms.OverlappedActor = OverlappedActor;
	Parms.OtherActor = OtherActor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HUB01_Multiplayer.HUB01_Multiplayer_C.BndEvt__HUB01_Multiplayer_TriggerSphere_1_K2Node_ActorBoundEvent_1_ActorEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UActor*                      OverlappedActor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UActor*                      OtherActor                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UHUB01_Multiplayer_C::BndEvt__HUB01_Multiplayer_TriggerSphere_1_K2Node_ActorBoundEvent_1_ActorEndOverlapSignature__DelegateSignature(class UActor* OverlappedActor, class UActor* OtherActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUB01_Multiplayer_C", "BndEvt__HUB01_Multiplayer_TriggerSphere_1_K2Node_ActorBoundEvent_1_ActorEndOverlapSignature__DelegateSignature");

	Params::UHUB01_Multiplayer_C_BndEvt__HUB01_Multiplayer_TriggerSphere_1_K2Node_ActorBoundEvent_1_ActorEndOverlapSignature__DelegateSignature_Params Parms{};

	Parms.OverlappedActor = OverlappedActor;
	Parms.OtherActor = OtherActor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HUB01_Multiplayer.HUB01_Multiplayer_C.BndEvt__HUB01_Multiplayer_TriggerSphere_2_K2Node_ActorBoundEvent_2_ActorBeginOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UActor*                      OverlappedActor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UActor*                      OtherActor                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UHUB01_Multiplayer_C::BndEvt__HUB01_Multiplayer_TriggerSphere_2_K2Node_ActorBoundEvent_2_ActorBeginOverlapSignature__DelegateSignature(class UActor* OverlappedActor, class UActor* OtherActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUB01_Multiplayer_C", "BndEvt__HUB01_Multiplayer_TriggerSphere_2_K2Node_ActorBoundEvent_2_ActorBeginOverlapSignature__DelegateSignature");

	Params::UHUB01_Multiplayer_C_BndEvt__HUB01_Multiplayer_TriggerSphere_2_K2Node_ActorBoundEvent_2_ActorBeginOverlapSignature__DelegateSignature_Params Parms{};

	Parms.OverlappedActor = OverlappedActor;
	Parms.OtherActor = OtherActor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HUB01_Multiplayer.HUB01_Multiplayer_C.BndEvt__HUB01_Multiplayer_TriggerSphere_2_K2Node_ActorBoundEvent_3_ActorEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UActor*                      OverlappedActor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UActor*                      OtherActor                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UHUB01_Multiplayer_C::BndEvt__HUB01_Multiplayer_TriggerSphere_2_K2Node_ActorBoundEvent_3_ActorEndOverlapSignature__DelegateSignature(class UActor* OverlappedActor, class UActor* OtherActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUB01_Multiplayer_C", "BndEvt__HUB01_Multiplayer_TriggerSphere_2_K2Node_ActorBoundEvent_3_ActorEndOverlapSignature__DelegateSignature");

	Params::UHUB01_Multiplayer_C_BndEvt__HUB01_Multiplayer_TriggerSphere_2_K2Node_ActorBoundEvent_3_ActorEndOverlapSignature__DelegateSignature_Params Parms{};

	Parms.OverlappedActor = OverlappedActor;
	Parms.OtherActor = OtherActor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HUB01_Multiplayer.HUB01_Multiplayer_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void UHUB01_Multiplayer_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUB01_Multiplayer_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function HUB01_Multiplayer.HUB01_Multiplayer_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHUB01_Multiplayer_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUB01_Multiplayer_C", "ReceiveTick");

	Params::UHUB01_Multiplayer_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HUB01_Multiplayer.HUB01_Multiplayer_C.BndEvt__HUB01_Multiplayer_TriggerBox_1_K2Node_ActorBoundEvent_4_ActorBeginOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UActor*                      OverlappedActor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UActor*                      OtherActor                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UHUB01_Multiplayer_C::BndEvt__HUB01_Multiplayer_TriggerBox_1_K2Node_ActorBoundEvent_4_ActorBeginOverlapSignature__DelegateSignature(class UActor* OverlappedActor, class UActor* OtherActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUB01_Multiplayer_C", "BndEvt__HUB01_Multiplayer_TriggerBox_1_K2Node_ActorBoundEvent_4_ActorBeginOverlapSignature__DelegateSignature");

	Params::UHUB01_Multiplayer_C_BndEvt__HUB01_Multiplayer_TriggerBox_1_K2Node_ActorBoundEvent_4_ActorBeginOverlapSignature__DelegateSignature_Params Parms{};

	Parms.OverlappedActor = OverlappedActor;
	Parms.OtherActor = OtherActor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HUB01_Multiplayer.HUB01_Multiplayer_C.BndEvt__HUB01_Multiplayer_TriggerBox_1_K2Node_ActorBoundEvent_5_ActorEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UActor*                      OverlappedActor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UActor*                      OtherActor                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UHUB01_Multiplayer_C::BndEvt__HUB01_Multiplayer_TriggerBox_1_K2Node_ActorBoundEvent_5_ActorEndOverlapSignature__DelegateSignature(class UActor* OverlappedActor, class UActor* OtherActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUB01_Multiplayer_C", "BndEvt__HUB01_Multiplayer_TriggerBox_1_K2Node_ActorBoundEvent_5_ActorEndOverlapSignature__DelegateSignature");

	Params::UHUB01_Multiplayer_C_BndEvt__HUB01_Multiplayer_TriggerBox_1_K2Node_ActorBoundEvent_5_ActorEndOverlapSignature__DelegateSignature_Params Parms{};

	Parms.OverlappedActor = OverlappedActor;
	Parms.OtherActor = OtherActor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HUB01_Multiplayer.HUB01_Multiplayer_C.ExecuteUbergraph_HUB01_Multiplayer
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UB_DemoCharacter_Child_C*>CallFunc_GetAllActorsOfClass_OutActors                           (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UActor*                      K2Node_ActorBoundEvent_OverlappedActor_5                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UActor*                      K2Node_ActorBoundEvent_OtherActor_5                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UActor*                      K2Node_ActorBoundEvent_OverlappedActor_4                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UActor*                      K2Node_ActorBoundEvent_OtherActor_4                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UB_DemoCharacter_Child_C*    K2Node_DynamicCast_AsB_Demo_Character_Child                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UActor*                      K2Node_ActorBoundEvent_OverlappedActor_3                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UActor*                      K2Node_ActorBoundEvent_OtherActor_3                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UB_DemoCharacter_Child_C*    K2Node_DynamicCast_AsB_Demo_Character_Child_1                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UActor*                      K2Node_ActorBoundEvent_OverlappedActor_2                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UActor*                      K2Node_ActorBoundEvent_OtherActor_2                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UB_DemoCharacter_Child_C*    K2Node_DynamicCast_AsB_Demo_Character_Child_2                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UB_DemoCharacter_Child_C*    CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGI_Contain_C*               K2Node_DynamicCast_AsGI_Contain                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UActor*                      K2Node_ActorBoundEvent_OverlappedActor_1                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UActor*                      K2Node_ActorBoundEvent_OtherActor_1                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UActor*                      K2Node_ActorBoundEvent_OverlappedActor                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UActor*                      K2Node_ActorBoundEvent_OtherActor                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ActorHasTag_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ActorHasTag_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_RemoveItem_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHUB01_Multiplayer_C::ExecuteUbergraph_HUB01_Multiplayer(int32 EntryPoint, TArray<class UB_DemoCharacter_Child_C*>& CallFunc_GetAllActorsOfClass_OutActors, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, class UActor* K2Node_ActorBoundEvent_OverlappedActor_5, class UActor* K2Node_ActorBoundEvent_OtherActor_5, class UActor* K2Node_ActorBoundEvent_OverlappedActor_4, class UActor* K2Node_ActorBoundEvent_OtherActor_4, class UB_DemoCharacter_Child_C* K2Node_DynamicCast_AsB_Demo_Character_Child, bool K2Node_DynamicCast_bSuccess, bool Temp_bool_Variable, class UActor* K2Node_ActorBoundEvent_OverlappedActor_3, class UActor* K2Node_ActorBoundEvent_OtherActor_3, bool Temp_bool_Variable_1, class UB_DemoCharacter_Child_C* K2Node_DynamicCast_AsB_Demo_Character_Child_1, bool K2Node_DynamicCast_bSuccess_1, class UActor* K2Node_ActorBoundEvent_OverlappedActor_2, class UActor* K2Node_ActorBoundEvent_OtherActor_2, int32 Temp_int_Array_Index_Variable, class UB_DemoCharacter_Child_C* K2Node_DynamicCast_AsB_Demo_Character_Child_2, bool K2Node_DynamicCast_bSuccess_2, class UB_DemoCharacter_Child_C* CallFunc_Array_Get_Item, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, int32 Temp_int_Loop_Counter_Variable, class UGI_Contain_C* K2Node_DynamicCast_AsGI_Contain, bool K2Node_DynamicCast_bSuccess_3, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, float K2Node_Event_DeltaSeconds, class UActor* K2Node_ActorBoundEvent_OverlappedActor_1, class UActor* K2Node_ActorBoundEvent_OtherActor_1, class UActor* K2Node_ActorBoundEvent_OverlappedActor, class UActor* K2Node_ActorBoundEvent_OtherActor, bool CallFunc_ActorHasTag_ReturnValue, bool CallFunc_ActorHasTag_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Array_RemoveItem_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUB01_Multiplayer_C", "ExecuteUbergraph_HUB01_Multiplayer");

	Params::UHUB01_Multiplayer_C_ExecuteUbergraph_HUB01_Multiplayer_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetAllActorsOfClass_OutActors = CallFunc_GetAllActorsOfClass_OutActors;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.K2Node_ActorBoundEvent_OverlappedActor_5 = K2Node_ActorBoundEvent_OverlappedActor_5;
	Parms.K2Node_ActorBoundEvent_OtherActor_5 = K2Node_ActorBoundEvent_OtherActor_5;
	Parms.K2Node_ActorBoundEvent_OverlappedActor_4 = K2Node_ActorBoundEvent_OverlappedActor_4;
	Parms.K2Node_ActorBoundEvent_OtherActor_4 = K2Node_ActorBoundEvent_OtherActor_4;
	Parms.K2Node_DynamicCast_AsB_Demo_Character_Child = K2Node_DynamicCast_AsB_Demo_Character_Child;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_ActorBoundEvent_OverlappedActor_3 = K2Node_ActorBoundEvent_OverlappedActor_3;
	Parms.K2Node_ActorBoundEvent_OtherActor_3 = K2Node_ActorBoundEvent_OtherActor_3;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.K2Node_DynamicCast_AsB_Demo_Character_Child_1 = K2Node_DynamicCast_AsB_Demo_Character_Child_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_ActorBoundEvent_OverlappedActor_2 = K2Node_ActorBoundEvent_OverlappedActor_2;
	Parms.K2Node_ActorBoundEvent_OtherActor_2 = K2Node_ActorBoundEvent_OtherActor_2;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.K2Node_DynamicCast_AsB_Demo_Character_Child_2 = K2Node_DynamicCast_AsB_Demo_Character_Child_2;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.K2Node_DynamicCast_AsGI_Contain = K2Node_DynamicCast_AsGI_Contain;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.K2Node_ActorBoundEvent_OverlappedActor_1 = K2Node_ActorBoundEvent_OverlappedActor_1;
	Parms.K2Node_ActorBoundEvent_OtherActor_1 = K2Node_ActorBoundEvent_OtherActor_1;
	Parms.K2Node_ActorBoundEvent_OverlappedActor = K2Node_ActorBoundEvent_OverlappedActor;
	Parms.K2Node_ActorBoundEvent_OtherActor = K2Node_ActorBoundEvent_OtherActor;
	Parms.CallFunc_ActorHasTag_ReturnValue = CallFunc_ActorHasTag_ReturnValue;
	Parms.CallFunc_ActorHasTag_ReturnValue_1 = CallFunc_ActorHasTag_ReturnValue_1;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.CallFunc_Array_RemoveItem_ReturnValue = CallFunc_Array_RemoveItem_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


