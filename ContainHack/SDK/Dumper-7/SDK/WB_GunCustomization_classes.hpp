#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x60 (0x2D8 - 0x278)
// WidgetBlueprintGeneratedClass WB_GunCustomization.WB_GunCustomization_C
class UWB_GunCustomization_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x278(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UB_GunParent_C*                        Gun;                                               // 0x280(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UB_DemoCharacter_C*                    DemoCharacter;                                     // 0x288(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	TArray<class UMeshComponent*>                Markers;                                           // 0x290(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	class UUserWidget*                           CurrentlyPressedPart;                              // 0x2A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UB_AssemblableParent_C*                EachPart;                                          // 0x2A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UB_AssemblableParent_C*                CustomizingPart;                                   // 0x2B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         IsDetaching;                                       // 0x2B8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3DC7[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  KeyCustomizeGun;                                   // 0x2C0(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UWB_GunCustomization_C* GetDefaultObj();

	void GenerateButtonsForParts();
	void WidgetFinishAddingPart();
	void ExitWidget();
	void WidgetEnterAddPart();
	void EnterDetach();
	void DisableButtons();
	void AllowCustomization(class UB_AssemblableParent_C* Part);
	void CustomizePart(class UActor* TouchedActor, const struct FKey& ButtonPressed);
	void ExitDetach();
	void Detach(class UActor* TouchedActor, const struct FKey& ButtonPressed);
	void FixOnMarker(class UPrimitiveComponent* TouchedComponent, const struct FKey& ButtonPressed);
	void MouseUntouchesMarker(class UPrimitiveComponent* TouchedComponent);
	void MouseTouchesMarker(class UPrimitiveComponent* TouchedComponent);
	void ToggleAddPart(class UUserWidget* Button, class UB_GunPartParent_C* Part);
	void Construct();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void ExecuteUbergraph_WB_GunCustomization(int32 EntryPoint, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, class UUserWidget* K2Node_CustomEvent_Button, class UB_GunPartParent_C* K2Node_CustomEvent_Part, class UPlayerController* CallFunc_GetOwningPlayer_ReturnValue, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, float CallFunc_GetInputMouseDelta_DeltaX, float CallFunc_GetInputMouseDelta_DeltaY, bool CallFunc_IsInputKeyDown_ReturnValue, const struct FRotator& CallFunc_RotatorFromAxisAndAngle_ReturnValue, double CallFunc_Multiply_IntFloat_ReturnValue, bool CallFunc_IsInputKeyDown_ReturnValue_1, class UPrimitiveComponent* K2Node_CustomEvent_TouchedComponent, class UPrimitiveComponent* K2Node_CustomEvent_TouchedComponent_1, class UPrimitiveComponent* K2Node_CustomEvent_TouchedComponent_2, const struct FKey& K2Node_CustomEvent_ButtonPressed, class UActor* K2Node_CustomEvent_TouchedActor, const struct FKey& K2Node_CustomEvent_ButtonPressed_1, class UActor* K2Node_CustomEvent_TouchedActor_1, const struct FKey& K2Node_CustomEvent_ButtonPressed_2, class UB_AssemblableParent_C* K2Node_CustomEvent_Part_1, const struct FVector& CallFunc_GetUpVector_ReturnValue, const struct FVector& CallFunc_GetForwardVector_ReturnValue, const struct FRotator& CallFunc_RotatorFromAxisAndAngle_ReturnValue_1, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FRotator& CallFunc_ComposeRotators_ReturnValue, const struct FHitResult& CallFunc_K2_AddActorWorldOffset_SweepHitResult, const struct FHitResult& CallFunc_K2_AddActorWorldRotation_SweepHitResult, double CallFunc_Multiply_IntFloat_B_ImplicitCast, double CallFunc_Multiply_VectorFloat_B_ImplicitCast, float CallFunc_RotatorFromAxisAndAngle_Angle_ImplicitCast);
};

}


