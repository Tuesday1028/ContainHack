#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x3B8 (0x700 - 0x348)
// AnimBlueprintGeneratedClass HeliSeq.HeliSeq_C
class UHeliSeq_C : public UAnimInstance
{
public:
	uint8                                        Pad_3A8A[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x350(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimSubsystemInstance                AnimBlueprintExtension_PropertyAccess;             // 0x358(0x8)(None)
	struct FAnimSubsystemInstance                AnimBlueprintExtension_Base;                       // 0x360(0x8)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x368(0x20)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_1;                        // 0x388(0x128)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x4B0(0x20)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone;                          // 0x4D0(0x128)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer;                      // 0x5F8(0x48)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0x640(0x20)(None)
	double                                       FrontWheels;                                       // 0x660(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	double                                       RearWheels;                                        // 0x668(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	double                                       RearElevator;                                      // 0x670(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	double                                       MainRotorSpeed;                                    // 0x678(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	double                                       TailRotorSpeed;                                    // 0x680(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              MainRotorRotation;                                 // 0x688(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FRotator                              TailRotorRotation;                                 // 0x6A0(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	double                                       RotorSpeedOffset;                                  // 0x6B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	double                                       RightWindowShield1;                                // 0x6C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	double                                       RightWindowShield2;                                // 0x6C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	double                                       LeftWindowShield1;                                 // 0x6D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	double                                       LeftWindowShield2;                                 // 0x6D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	double                                       RightRearDoorOffset;                               // 0x6E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	double                                       LeftRearDoorOffset;                                // 0x6E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	double                                       LeftFrontDoorAngle;                                // 0x6F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	double                                       RightFrontDoorAngle;                               // 0x6F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UHeliSeq_C* GetDefaultObj();

	void AnimGraph(struct FPoseLink* AnimGraph);
	void SetTailRotorSpeed(double Speed, double CallFunc_MapRangeClamped_ReturnValue);
	void SetMainRotorSpeed(double Speed, double CallFunc_MapRangeClamped_ReturnValue);
	void UpdateRotorSpeed();
	void UpdateFrontWheels(double State);
	void UpdateRearWheels(double State);
	void UpdateRearElevator(double State);
	void UpdateRightShieldWindow(double FirstPart, double SecondPart);
	void UpdateLeftShieldWindow(double FirstPart, double SecondPart);
	void UpdateFrontDoors(double Left, double Right);
	void UpdateRearDoors(double Left, double Right);
	void UpdateSpeedOffset(double Increment);
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void ExecuteUbergraph_HeliSeq(int32 EntryPoint, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_ReturnValue_2, const struct FRotator& CallFunc_MakeRotator_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue_1, double K2Node_CustomEvent_State_2, double K2Node_CustomEvent_State_1, double K2Node_CustomEvent_State, double K2Node_CustomEvent_FirstPart_1, double K2Node_CustomEvent_SecondPart_1, double CallFunc_MapRangeClamped_ReturnValue, double CallFunc_MapRangeClamped_ReturnValue_1, double K2Node_CustomEvent_FirstPart, double K2Node_CustomEvent_SecondPart, double K2Node_CustomEvent_Left_1, double K2Node_CustomEvent_Right_1, double CallFunc_MapRangeClamped_ReturnValue_2, double CallFunc_MapRangeClamped_ReturnValue_3, double CallFunc_MapRangeClamped_ReturnValue_4, double CallFunc_MapRangeClamped_ReturnValue_5, double K2Node_CustomEvent_Left, double K2Node_CustomEvent_Right, double K2Node_CustomEvent_Increment, double CallFunc_MapRangeClamped_ReturnValue_6, double CallFunc_Add_DoubleDouble_ReturnValue, double CallFunc_Percent_FloatFloat_ReturnValue, double CallFunc_MapRangeClamped_ReturnValue_7, float K2Node_Event_DeltaTimeX, float CallFunc_MakeRotator_Yaw_ImplicitCast, float CallFunc_MakeRotator_Roll_ImplicitCast, double CallFunc_UpdateSpeedOffset_Increment_ImplicitCast);
};

}


