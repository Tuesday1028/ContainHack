#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WB_GunCustomization.WB_GunCustomization_C
// (None)

class UClass* UWB_GunCustomization_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WB_GunCustomization_C");

	return Clss;
}


// WB_GunCustomization_C WB_GunCustomization.Default__WB_GunCustomization_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWB_GunCustomization_C* UWB_GunCustomization_C::GetDefaultObj()
{
	static class UWB_GunCustomization_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWB_GunCustomization_C*>(UWB_GunCustomization_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WB_GunCustomization.WB_GunCustomization_C.GenerateButtonsForParts
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWB_GunCustomization_C::GenerateButtonsForParts()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_GunCustomization_C", "GenerateButtonsForParts");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_GunCustomization.WB_GunCustomization_C.WidgetFinishAddingPart
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWB_GunCustomization_C::WidgetFinishAddingPart()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_GunCustomization_C", "WidgetFinishAddingPart");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_GunCustomization.WB_GunCustomization_C.ExitWidget
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWB_GunCustomization_C::ExitWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_GunCustomization_C", "ExitWidget");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_GunCustomization.WB_GunCustomization_C.WidgetEnterAddPart
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWB_GunCustomization_C::WidgetEnterAddPart()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_GunCustomization_C", "WidgetEnterAddPart");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_GunCustomization.WB_GunCustomization_C.EnterDetach
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWB_GunCustomization_C::EnterDetach()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_GunCustomization_C", "EnterDetach");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_GunCustomization.WB_GunCustomization_C.DisableButtons
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWB_GunCustomization_C::DisableButtons()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_GunCustomization_C", "DisableButtons");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_GunCustomization.WB_GunCustomization_C.AllowCustomization
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UB_AssemblableParent_C*      Part                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWB_GunCustomization_C::AllowCustomization(class UB_AssemblableParent_C* Part)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_GunCustomization_C", "AllowCustomization");

	Params::UWB_GunCustomization_C_AllowCustomization_Params Parms{};

	Parms.Part = Part;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_GunCustomization.WB_GunCustomization_C.CustomizePart
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UActor*                      TouchedActor                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FKey                        ButtonPressed                                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UWB_GunCustomization_C::CustomizePart(class UActor* TouchedActor, const struct FKey& ButtonPressed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_GunCustomization_C", "CustomizePart");

	Params::UWB_GunCustomization_C_CustomizePart_Params Parms{};

	Parms.TouchedActor = TouchedActor;
	Parms.ButtonPressed = ButtonPressed;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_GunCustomization.WB_GunCustomization_C.ExitDetach
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWB_GunCustomization_C::ExitDetach()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_GunCustomization_C", "ExitDetach");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_GunCustomization.WB_GunCustomization_C.Detach
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UActor*                      TouchedActor                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FKey                        ButtonPressed                                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UWB_GunCustomization_C::Detach(class UActor* TouchedActor, const struct FKey& ButtonPressed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_GunCustomization_C", "Detach");

	Params::UWB_GunCustomization_C_Detach_Params Parms{};

	Parms.TouchedActor = TouchedActor;
	Parms.ButtonPressed = ButtonPressed;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_GunCustomization.WB_GunCustomization_C.FixOnMarker
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*         TouchedComponent                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FKey                        ButtonPressed                                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UWB_GunCustomization_C::FixOnMarker(class UPrimitiveComponent* TouchedComponent, const struct FKey& ButtonPressed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_GunCustomization_C", "FixOnMarker");

	Params::UWB_GunCustomization_C_FixOnMarker_Params Parms{};

	Parms.TouchedComponent = TouchedComponent;
	Parms.ButtonPressed = ButtonPressed;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_GunCustomization.WB_GunCustomization_C.MouseUntouchesMarker
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*         TouchedComponent                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWB_GunCustomization_C::MouseUntouchesMarker(class UPrimitiveComponent* TouchedComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_GunCustomization_C", "MouseUntouchesMarker");

	Params::UWB_GunCustomization_C_MouseUntouchesMarker_Params Parms{};

	Parms.TouchedComponent = TouchedComponent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_GunCustomization.WB_GunCustomization_C.MouseTouchesMarker
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*         TouchedComponent                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWB_GunCustomization_C::MouseTouchesMarker(class UPrimitiveComponent* TouchedComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_GunCustomization_C", "MouseTouchesMarker");

	Params::UWB_GunCustomization_C_MouseTouchesMarker_Params Parms{};

	Parms.TouchedComponent = TouchedComponent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_GunCustomization.WB_GunCustomization_C.ToggleAddPart
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*                 Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UB_GunPartParent_C*          Part                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWB_GunCustomization_C::ToggleAddPart(class UUserWidget* Button, class UB_GunPartParent_C* Part)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_GunCustomization_C", "ToggleAddPart");

	Params::UWB_GunCustomization_C_ToggleAddPart_Params Parms{};

	Parms.Button = Button;
	Parms.Part = Part;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_GunCustomization.WB_GunCustomization_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWB_GunCustomization_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_GunCustomization_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_GunCustomization.WB_GunCustomization_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_GunCustomization_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_GunCustomization_C", "Tick");

	Params::UWB_GunCustomization_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_GunCustomization.WB_GunCustomization_C.ExecuteUbergraph_WB_GunCustomization
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetActorForwardVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 K2Node_CustomEvent_Button                                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UB_GunPartParent_C*          K2Node_CustomEvent_Part                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InDeltaTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetInputMouseDelta_DeltaX                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetInputMouseDelta_DeltaY                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsInputKeyDown_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_RotatorFromAxisAndAngle_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// double                             CallFunc_Multiply_IntFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsInputKeyDown_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         K2Node_CustomEvent_TouchedComponent                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         K2Node_CustomEvent_TouchedComponent_1                            (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         K2Node_CustomEvent_TouchedComponent_2                            (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FKey                        K2Node_CustomEvent_ButtonPressed                                 (HasGetValueTypeHash)
// class UActor*                      K2Node_CustomEvent_TouchedActor                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FKey                        K2Node_CustomEvent_ButtonPressed_1                               (HasGetValueTypeHash)
// class UActor*                      K2Node_CustomEvent_TouchedActor_1                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FKey                        K2Node_CustomEvent_ButtonPressed_2                               (HasGetValueTypeHash)
// class UB_AssemblableParent_C*      K2Node_CustomEvent_Part_1                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetUpVector_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetForwardVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_RotatorFromAxisAndAngle_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_ComposeRotators_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_K2_AddActorWorldOffset_SweepHitResult                   (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FHitResult                  CallFunc_K2_AddActorWorldRotation_SweepHitResult                 (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// double                             CallFunc_Multiply_IntFloat_B_ImplicitCast                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_VectorFloat_B_ImplicitCast                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RotatorFromAxisAndAngle_Angle_ImplicitCast              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_GunCustomization_C::ExecuteUbergraph_WB_GunCustomization(int32 EntryPoint, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, class UUserWidget* K2Node_CustomEvent_Button, class UB_GunPartParent_C* K2Node_CustomEvent_Part, class UPlayerController* CallFunc_GetOwningPlayer_ReturnValue, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, float CallFunc_GetInputMouseDelta_DeltaX, float CallFunc_GetInputMouseDelta_DeltaY, bool CallFunc_IsInputKeyDown_ReturnValue, const struct FRotator& CallFunc_RotatorFromAxisAndAngle_ReturnValue, double CallFunc_Multiply_IntFloat_ReturnValue, bool CallFunc_IsInputKeyDown_ReturnValue_1, class UPrimitiveComponent* K2Node_CustomEvent_TouchedComponent, class UPrimitiveComponent* K2Node_CustomEvent_TouchedComponent_1, class UPrimitiveComponent* K2Node_CustomEvent_TouchedComponent_2, const struct FKey& K2Node_CustomEvent_ButtonPressed, class UActor* K2Node_CustomEvent_TouchedActor, const struct FKey& K2Node_CustomEvent_ButtonPressed_1, class UActor* K2Node_CustomEvent_TouchedActor_1, const struct FKey& K2Node_CustomEvent_ButtonPressed_2, class UB_AssemblableParent_C* K2Node_CustomEvent_Part_1, const struct FVector& CallFunc_GetUpVector_ReturnValue, const struct FVector& CallFunc_GetForwardVector_ReturnValue, const struct FRotator& CallFunc_RotatorFromAxisAndAngle_ReturnValue_1, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FRotator& CallFunc_ComposeRotators_ReturnValue, const struct FHitResult& CallFunc_K2_AddActorWorldOffset_SweepHitResult, const struct FHitResult& CallFunc_K2_AddActorWorldRotation_SweepHitResult, double CallFunc_Multiply_IntFloat_B_ImplicitCast, double CallFunc_Multiply_VectorFloat_B_ImplicitCast, float CallFunc_RotatorFromAxisAndAngle_Angle_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_GunCustomization_C", "ExecuteUbergraph_WB_GunCustomization");

	Params::UWB_GunCustomization_C_ExecuteUbergraph_WB_GunCustomization_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetActorForwardVector_ReturnValue = CallFunc_GetActorForwardVector_ReturnValue;
	Parms.K2Node_CustomEvent_Button = K2Node_CustomEvent_Button;
	Parms.K2Node_CustomEvent_Part = K2Node_CustomEvent_Part;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;
	Parms.CallFunc_GetInputMouseDelta_DeltaX = CallFunc_GetInputMouseDelta_DeltaX;
	Parms.CallFunc_GetInputMouseDelta_DeltaY = CallFunc_GetInputMouseDelta_DeltaY;
	Parms.CallFunc_IsInputKeyDown_ReturnValue = CallFunc_IsInputKeyDown_ReturnValue;
	Parms.CallFunc_RotatorFromAxisAndAngle_ReturnValue = CallFunc_RotatorFromAxisAndAngle_ReturnValue;
	Parms.CallFunc_Multiply_IntFloat_ReturnValue = CallFunc_Multiply_IntFloat_ReturnValue;
	Parms.CallFunc_IsInputKeyDown_ReturnValue_1 = CallFunc_IsInputKeyDown_ReturnValue_1;
	Parms.K2Node_CustomEvent_TouchedComponent = K2Node_CustomEvent_TouchedComponent;
	Parms.K2Node_CustomEvent_TouchedComponent_1 = K2Node_CustomEvent_TouchedComponent_1;
	Parms.K2Node_CustomEvent_TouchedComponent_2 = K2Node_CustomEvent_TouchedComponent_2;
	Parms.K2Node_CustomEvent_ButtonPressed = K2Node_CustomEvent_ButtonPressed;
	Parms.K2Node_CustomEvent_TouchedActor = K2Node_CustomEvent_TouchedActor;
	Parms.K2Node_CustomEvent_ButtonPressed_1 = K2Node_CustomEvent_ButtonPressed_1;
	Parms.K2Node_CustomEvent_TouchedActor_1 = K2Node_CustomEvent_TouchedActor_1;
	Parms.K2Node_CustomEvent_ButtonPressed_2 = K2Node_CustomEvent_ButtonPressed_2;
	Parms.K2Node_CustomEvent_Part_1 = K2Node_CustomEvent_Part_1;
	Parms.CallFunc_GetUpVector_ReturnValue = CallFunc_GetUpVector_ReturnValue;
	Parms.CallFunc_GetForwardVector_ReturnValue = CallFunc_GetForwardVector_ReturnValue;
	Parms.CallFunc_RotatorFromAxisAndAngle_ReturnValue_1 = CallFunc_RotatorFromAxisAndAngle_ReturnValue_1;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue = CallFunc_Multiply_VectorFloat_ReturnValue;
	Parms.CallFunc_ComposeRotators_ReturnValue = CallFunc_ComposeRotators_ReturnValue;
	Parms.CallFunc_K2_AddActorWorldOffset_SweepHitResult = CallFunc_K2_AddActorWorldOffset_SweepHitResult;
	Parms.CallFunc_K2_AddActorWorldRotation_SweepHitResult = CallFunc_K2_AddActorWorldRotation_SweepHitResult;
	Parms.CallFunc_Multiply_IntFloat_B_ImplicitCast = CallFunc_Multiply_IntFloat_B_ImplicitCast;
	Parms.CallFunc_Multiply_VectorFloat_B_ImplicitCast = CallFunc_Multiply_VectorFloat_B_ImplicitCast;
	Parms.CallFunc_RotatorFromAxisAndAngle_Angle_ImplicitCast = CallFunc_RotatorFromAxisAndAngle_Angle_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}

}


