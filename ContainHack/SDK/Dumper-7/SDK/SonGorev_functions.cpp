#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass SonGorev.SonGorev_C
// (None)

class UClass* USonGorev_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SonGorev_C");

	return Clss;
}


// SonGorev_C SonGorev.Default__SonGorev_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USonGorev_C* USonGorev_C::GetDefaultObj()
{
	static class USonGorev_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USonGorev_C*>(USonGorev_C::StaticClass()->DefaultObject);

	return Default;
}


// Function SonGorev.SonGorev_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USonGorev_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SonGorev_C", "PreConstruct");

	Params::USonGorev_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SonGorev.SonGorev_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void USonGorev_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SonGorev_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SonGorev.SonGorev_C.HubEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void USonGorev_C::HubEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SonGorev_C", "HubEvent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SonGorev.SonGorev_C.RestartEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void USonGorev_C::RestartEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SonGorev_C", "RestartEvent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SonGorev.SonGorev_C.LoadingWidget
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      Class                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class ENM_LoadingWidgets      MissionsLevel                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USonGorev_C::LoadingWidget(class UClass* Class, enum class ENM_LoadingWidgets MissionsLevel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SonGorev_C", "LoadingWidget");

	Params::USonGorev_C_LoadingWidget_Params Parms{};

	Parms.Class = Class;
	Parms.MissionsLevel = MissionsLevel;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SonGorev.SonGorev_C.LoadingWidget_Server
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      Class                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class ENM_LoadingWidgets      MissionsLevel                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USonGorev_C::LoadingWidget_Server(class UClass* Class, enum class ENM_LoadingWidgets MissionsLevel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SonGorev_C", "LoadingWidget_Server");

	Params::USonGorev_C_LoadingWidget_Server_Params Parms{};

	Parms.Class = Class;
	Parms.MissionsLevel = MissionsLevel;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SonGorev.SonGorev_C.Menu_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void USonGorev_C::Menu_Event()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SonGorev_C", "Menu_Event");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SonGorev.SonGorev_C.ExecuteUbergraph_SonGorev
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMission_Loading_C*          CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UGameModeBase*               CallFunc_GetGameMode_ReturnValue                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UB_DemoGameModeBase_C*       K2Node_DynamicCast_AsB_Demo_Game_Mode_Base                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UGI_Contain_C*               K2Node_DynamicCast_AsGI_Contain                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPlayerController*           CallFunc_GetPlayerController_ReturnValue_1                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UB_DemoController_C*         K2Node_DynamicCast_AsB_Demo_Controller                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetCurrentLevelName_ReturnValue                         (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StriStri_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StriStri_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StriStri_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StriStri_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_MakeLiteralText_ReturnValue                             (None)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_1                           (None)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_2                           (None)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      K2Node_CustomEvent_Class_1                                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class ENM_LoadingWidgets      K2Node_CustomEvent_MissionsLevel_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      K2Node_CustomEvent_Class                                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class ENM_LoadingWidgets      K2Node_CustomEvent_MissionsLevel                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USonGorev_C::ExecuteUbergraph_SonGorev(int32 EntryPoint, class UMission_Loading_C* CallFunc_Create_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool K2Node_Event_IsDesignTime, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UPlayerController* CallFunc_GetPlayerController_ReturnValue, class UGameModeBase* CallFunc_GetGameMode_ReturnValue, class UB_DemoGameModeBase_C* K2Node_DynamicCast_AsB_Demo_Game_Mode_Base, bool K2Node_DynamicCast_bSuccess, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UGI_Contain_C* K2Node_DynamicCast_AsGI_Contain, bool K2Node_DynamicCast_bSuccess_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class UPlayerController* CallFunc_GetPlayerController_ReturnValue_1, class UB_DemoController_C* K2Node_DynamicCast_AsB_Demo_Controller, bool K2Node_DynamicCast_bSuccess_2, const class FString& CallFunc_GetCurrentLevelName_ReturnValue, bool CallFunc_EqualEqual_StriStri_ReturnValue, bool CallFunc_EqualEqual_StriStri_ReturnValue_1, bool CallFunc_EqualEqual_StriStri_ReturnValue_2, bool CallFunc_EqualEqual_StriStri_ReturnValue_3, class FText CallFunc_MakeLiteralText_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue_1, class FText CallFunc_MakeLiteralText_ReturnValue_2, bool CallFunc_IsServer_ReturnValue, class UClass* K2Node_CustomEvent_Class_1, enum class ENM_LoadingWidgets K2Node_CustomEvent_MissionsLevel_1, class UClass* K2Node_CustomEvent_Class, enum class ENM_LoadingWidgets K2Node_CustomEvent_MissionsLevel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SonGorev_C", "ExecuteUbergraph_SonGorev");

	Params::USonGorev_C_ExecuteUbergraph_SonGorev_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_GetGameMode_ReturnValue = CallFunc_GetGameMode_ReturnValue;
	Parms.K2Node_DynamicCast_AsB_Demo_Game_Mode_Base = K2Node_DynamicCast_AsB_Demo_Game_Mode_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsGI_Contain = K2Node_DynamicCast_AsGI_Contain;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_GetPlayerController_ReturnValue_1 = CallFunc_GetPlayerController_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsB_Demo_Controller = K2Node_DynamicCast_AsB_Demo_Controller;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_GetCurrentLevelName_ReturnValue = CallFunc_GetCurrentLevelName_ReturnValue;
	Parms.CallFunc_EqualEqual_StriStri_ReturnValue = CallFunc_EqualEqual_StriStri_ReturnValue;
	Parms.CallFunc_EqualEqual_StriStri_ReturnValue_1 = CallFunc_EqualEqual_StriStri_ReturnValue_1;
	Parms.CallFunc_EqualEqual_StriStri_ReturnValue_2 = CallFunc_EqualEqual_StriStri_ReturnValue_2;
	Parms.CallFunc_EqualEqual_StriStri_ReturnValue_3 = CallFunc_EqualEqual_StriStri_ReturnValue_3;
	Parms.CallFunc_MakeLiteralText_ReturnValue = CallFunc_MakeLiteralText_ReturnValue;
	Parms.CallFunc_MakeLiteralText_ReturnValue_1 = CallFunc_MakeLiteralText_ReturnValue_1;
	Parms.CallFunc_MakeLiteralText_ReturnValue_2 = CallFunc_MakeLiteralText_ReturnValue_2;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.K2Node_CustomEvent_Class_1 = K2Node_CustomEvent_Class_1;
	Parms.K2Node_CustomEvent_MissionsLevel_1 = K2Node_CustomEvent_MissionsLevel_1;
	Parms.K2Node_CustomEvent_Class = K2Node_CustomEvent_Class;
	Parms.K2Node_CustomEvent_MissionsLevel = K2Node_CustomEvent_MissionsLevel;

	UObject::ProcessEvent(Func, &Parms);

}

}


