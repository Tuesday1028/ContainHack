#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_VendingMachine.BP_VendingMachine_C
// (Actor)

class UClass* UBP_VendingMachine_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_VendingMachine_C");

	return Clss;
}


// BP_VendingMachine_C BP_VendingMachine.Default__BP_VendingMachine_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_VendingMachine_C* UBP_VendingMachine_C::GetDefaultObj()
{
	static class UBP_VendingMachine_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_VendingMachine_C*>(UBP_VendingMachine_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_VendingMachine.BP_VendingMachine_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          CallFunc_GetMaterial_ReturnValue                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          CallFunc_GetMaterial_ReturnValue_1                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue_1             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_VendingMachine_C::UserConstructionScript(bool Temp_bool_Variable, const struct FLinearColor& Temp_struct_Variable, class UMaterialInterface* CallFunc_GetMaterial_ReturnValue, const struct FLinearColor& K2Node_Select_Default, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, class UMaterialInterface* CallFunc_GetMaterial_ReturnValue_1, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_VendingMachine_C", "UserConstructionScript");

	Params::UBP_VendingMachine_C_UserConstructionScript_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_GetMaterial_ReturnValue = CallFunc_GetMaterial_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;
	Parms.CallFunc_GetMaterial_ReturnValue_1 = CallFunc_GetMaterial_ReturnValue_1;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue_1 = CallFunc_CreateDynamicMaterialInstance_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_VendingMachine.BP_VendingMachine_C.DoorOpening__FinishedFunc
// (BlueprintEvent)
// Parameters:

void UBP_VendingMachine_C::DoorOpening__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_VendingMachine_C", "DoorOpening__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_VendingMachine.BP_VendingMachine_C.DoorOpening__UpdateFunc
// (BlueprintEvent)
// Parameters:

void UBP_VendingMachine_C::DoorOpening__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_VendingMachine_C", "DoorOpening__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_VendingMachine.BP_VendingMachine_C.Activate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_VendingMachine_C::Activate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_VendingMachine_C", "Activate");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_VendingMachine.BP_VendingMachine_C.Deactivate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_VendingMachine_C::Deactivate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_VendingMachine_C", "Deactivate");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_VendingMachine.BP_VendingMachine_C.ExecuteUbergraph_BP_VendingMachine
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_K2_SetRelativeRotation_SweepHitResult                   (IsPlainOldData, NoDestructor, ContainsInstancedReference)

void UBP_VendingMachine_C::ExecuteUbergraph_BP_VendingMachine(int32 EntryPoint, const struct FRotator& CallFunc_MakeRotator_ReturnValue, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_VendingMachine_C", "ExecuteUbergraph_BP_VendingMachine");

	Params::UBP_VendingMachine_C_ExecuteUbergraph_BP_VendingMachine_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_MakeRotator_ReturnValue = CallFunc_MakeRotator_ReturnValue;
	Parms.CallFunc_K2_SetRelativeRotation_SweepHitResult = CallFunc_K2_SetRelativeRotation_SweepHitResult;

	UObject::ProcessEvent(Func, &Parms);

}

}


