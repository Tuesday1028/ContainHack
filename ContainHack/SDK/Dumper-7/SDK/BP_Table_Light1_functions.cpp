#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Table_Light1.BP_Table_Light1_C
// (Actor)

class UClass* UBP_Table_Light1_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Table_Light1_C");

	return Clss;
}


// BP_Table_Light1_C BP_Table_Light1.Default__BP_Table_Light1_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_Table_Light1_C* UBP_Table_Light1_C::GetDefaultObj()
{
	static class UBP_Table_Light1_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_Table_Light1_C*>(UBP_Table_Light1_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Table_Light1.BP_Table_Light1_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_RandomBoolWithWeightFromStream_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Table_Light1_C::UserConstructionScript(bool Temp_bool_Variable, bool CallFunc_RandomBoolWithWeightFromStream_ReturnValue, bool K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Table_Light1_C", "UserConstructionScript");

	Params::UBP_Table_Light1_C_UserConstructionScript_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_RandomBoolWithWeightFromStream_ReturnValue = CallFunc_RandomBoolWithWeightFromStream_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Table_Light1.BP_Table_Light1_C.Activate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_Table_Light1_C::Activate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Table_Light1_C", "Activate");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Table_Light1.BP_Table_Light1_C.ExecuteUbergraph_BP_Table_Light1
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Table_Light1_C::ExecuteUbergraph_BP_Table_Light1(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Table_Light1_C", "ExecuteUbergraph_BP_Table_Light1");

	Params::UBP_Table_Light1_C_ExecuteUbergraph_BP_Table_Light1_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


