#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass HUB01_custom_screen.HUB01_custom_screen_C
// (Actor)

class UClass* UHUB01_custom_screen_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HUB01_custom_screen_C");

	return Clss;
}


// HUB01_custom_screen_C HUB01_custom_screen.Default__HUB01_custom_screen_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UHUB01_custom_screen_C* UHUB01_custom_screen_C::GetDefaultObj()
{
	static class UHUB01_custom_screen_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UHUB01_custom_screen_C*>(UHUB01_custom_screen_C::StaticClass()->DefaultObject);

	return Default;
}


// Function HUB01_custom_screen.HUB01_custom_screen_C.BndEvt__HUB01_custom_screen_TriggerBox_1_K2Node_ActorBoundEvent_0_ActorBeginOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UActor*                      OverlappedActor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UActor*                      OtherActor                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UHUB01_custom_screen_C::BndEvt__HUB01_custom_screen_TriggerBox_1_K2Node_ActorBoundEvent_0_ActorBeginOverlapSignature__DelegateSignature(class UActor* OverlappedActor, class UActor* OtherActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUB01_custom_screen_C", "BndEvt__HUB01_custom_screen_TriggerBox_1_K2Node_ActorBoundEvent_0_ActorBeginOverlapSignature__DelegateSignature");

	Params::UHUB01_custom_screen_C_BndEvt__HUB01_custom_screen_TriggerBox_1_K2Node_ActorBoundEvent_0_ActorBeginOverlapSignature__DelegateSignature_Params Parms{};

	Parms.OverlappedActor = OverlappedActor;
	Parms.OtherActor = OtherActor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HUB01_custom_screen.HUB01_custom_screen_C.BndEvt__HUB01_custom_screen_TriggerBox_3_K2Node_ActorBoundEvent_1_ActorBeginOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UActor*                      OverlappedActor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UActor*                      OtherActor                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UHUB01_custom_screen_C::BndEvt__HUB01_custom_screen_TriggerBox_3_K2Node_ActorBoundEvent_1_ActorBeginOverlapSignature__DelegateSignature(class UActor* OverlappedActor, class UActor* OtherActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUB01_custom_screen_C", "BndEvt__HUB01_custom_screen_TriggerBox_3_K2Node_ActorBoundEvent_1_ActorBeginOverlapSignature__DelegateSignature");

	Params::UHUB01_custom_screen_C_BndEvt__HUB01_custom_screen_TriggerBox_3_K2Node_ActorBoundEvent_1_ActorBeginOverlapSignature__DelegateSignature_Params Parms{};

	Parms.OverlappedActor = OverlappedActor;
	Parms.OtherActor = OtherActor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HUB01_custom_screen.HUB01_custom_screen_C.ExecuteUbergraph_HUB01_custom_screen
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UActor*                      K2Node_ActorBoundEvent_OverlappedActor                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UActor*                      K2Node_ActorBoundEvent_OtherActor                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UB_DemoCharacter_C*          K2Node_DynamicCast_AsB_Demo_Character                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UActor*                      K2Node_ActorBoundEvent_OverlappedActor_1                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UActor*                      K2Node_ActorBoundEvent_OtherActor_1                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UB_DemoCharacter_C*          K2Node_DynamicCast_AsB_Demo_Character_1                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHUB01_custom_screen_C::ExecuteUbergraph_HUB01_custom_screen(int32 EntryPoint, class UActor* K2Node_ActorBoundEvent_OverlappedActor, class UActor* K2Node_ActorBoundEvent_OtherActor, class UB_DemoCharacter_C* K2Node_DynamicCast_AsB_Demo_Character, bool K2Node_DynamicCast_bSuccess, class UActor* K2Node_ActorBoundEvent_OverlappedActor_1, class UActor* K2Node_ActorBoundEvent_OtherActor_1, class UB_DemoCharacter_C* K2Node_DynamicCast_AsB_Demo_Character_1, bool K2Node_DynamicCast_bSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUB01_custom_screen_C", "ExecuteUbergraph_HUB01_custom_screen");

	Params::UHUB01_custom_screen_C_ExecuteUbergraph_HUB01_custom_screen_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_ActorBoundEvent_OverlappedActor = K2Node_ActorBoundEvent_OverlappedActor;
	Parms.K2Node_ActorBoundEvent_OtherActor = K2Node_ActorBoundEvent_OtherActor;
	Parms.K2Node_DynamicCast_AsB_Demo_Character = K2Node_DynamicCast_AsB_Demo_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_ActorBoundEvent_OverlappedActor_1 = K2Node_ActorBoundEvent_OverlappedActor_1;
	Parms.K2Node_ActorBoundEvent_OtherActor_1 = K2Node_ActorBoundEvent_OtherActor_1;
	Parms.K2Node_DynamicCast_AsB_Demo_Character_1 = K2Node_DynamicCast_AsB_Demo_Character_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


