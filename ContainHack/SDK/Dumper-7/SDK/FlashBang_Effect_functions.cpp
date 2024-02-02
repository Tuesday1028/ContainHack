#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass FlashBang_Effect.FlashBang_Effect_C
// (Actor)

class UClass* UFlashBang_Effect_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FlashBang_Effect_C");

	return Clss;
}


// FlashBang_Effect_C FlashBang_Effect.Default__FlashBang_Effect_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFlashBang_Effect_C* UFlashBang_Effect_C::GetDefaultObj()
{
	static class UFlashBang_Effect_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFlashBang_Effect_C*>(UFlashBang_Effect_C::StaticClass()->DefaultObject);

	return Default;
}


// Function FlashBang_Effect.FlashBang_Effect_C.Timeline_0__FinishedFunc
// (BlueprintEvent)
// Parameters:

void UFlashBang_Effect_C::Timeline_0__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FlashBang_Effect_C", "Timeline_0__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FlashBang_Effect.FlashBang_Effect_C.Timeline_0__UpdateFunc
// (BlueprintEvent)
// Parameters:

void UFlashBang_Effect_C::Timeline_0__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FlashBang_Effect_C", "Timeline_0__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FlashBang_Effect.FlashBang_Effect_C.Timeline_1__FinishedFunc
// (BlueprintEvent)
// Parameters:

void UFlashBang_Effect_C::Timeline_1__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FlashBang_Effect_C", "Timeline_1__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FlashBang_Effect.FlashBang_Effect_C.Timeline_1__UpdateFunc
// (BlueprintEvent)
// Parameters:

void UFlashBang_Effect_C::Timeline_1__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FlashBang_Effect_C", "Timeline_1__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FlashBang_Effect.FlashBang_Effect_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFlashBang_Effect_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FlashBang_Effect_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FlashBang_Effect.FlashBang_Effect_C.ExecuteUbergraph_FlashBang_Effect
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FAdvancedEffectFeatures     K2Node_MakeStruct_AdvancedEffectFeatures                         (NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSet_Alcohol_Offset_ImplicitCast                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSet_Blur_Amount_ImplicitCast                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFlashBang_Effect_C::ExecuteUbergraph_FlashBang_Effect(int32 EntryPoint, const struct FAdvancedEffectFeatures& K2Node_MakeStruct_AdvancedEffectFeatures, double K2Node_VariableSet_Alcohol_Offset_ImplicitCast, double K2Node_VariableSet_Blur_Amount_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FlashBang_Effect_C", "ExecuteUbergraph_FlashBang_Effect");

	Params::UFlashBang_Effect_C_ExecuteUbergraph_FlashBang_Effect_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_MakeStruct_AdvancedEffectFeatures = K2Node_MakeStruct_AdvancedEffectFeatures;
	Parms.K2Node_VariableSet_Alcohol_Offset_ImplicitCast = K2Node_VariableSet_Alcohol_Offset_ImplicitCast;
	Parms.K2Node_VariableSet_Blur_Amount_ImplicitCast = K2Node_VariableSet_Blur_Amount_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}

}


