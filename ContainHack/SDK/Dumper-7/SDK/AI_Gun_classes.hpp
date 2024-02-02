#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x2C0 - 0x290)
// BlueprintGeneratedClass AI_Gun.AI_Gun_C
class UAI_Gun_C : public UActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x290(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                  SM_Gun;                                            // 0x298(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x2A0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                         Melee;                                             // 0x2A8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsFire;                                            // 0x2A9(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_41F7[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAnimMontage*                          FireAnimation;                                     // 0x2B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          ReloadAnimation;                                   // 0x2B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UAI_Gun_C* GetDefaultObj();

	void ReloadAnim(class UAI_AnimMan_C* Ref, class UAnimMontage** FireAnimation, bool K2Node_SwitchEnum_CmpSuccess);
	void FiringAnim(class UAI_AnimMan_C* Ref, class UAnimMontage** FireAnimation, bool K2Node_SwitchEnum_CmpSuccess);
	void OnNotifyEnd_716F16C34D41E5ECF6A3E291270458FD(class FName NotifyName);
	void OnNotifyBegin_716F16C34D41E5ECF6A3E291270458FD(class FName NotifyName);
	void OnInterrupted_716F16C34D41E5ECF6A3E291270458FD(class FName NotifyName);
	void OnBlendOut_716F16C34D41E5ECF6A3E291270458FD(class FName NotifyName);
	void OnCompleted_716F16C34D41E5ECF6A3E291270458FD(class FName NotifyName);
	void ReloadEvent(class USkeletalMeshComponent* Mesh, class UAnimInstance* Anim, class UAI_AnimMan_C* Ref);
	void ReloadServ(class USkeletalMeshComponent* Mesh, class UAnimInstance* Anim, class UAI_AnimMan_C* Ref);
	void ExecuteUbergraph_AI_Gun(int32 EntryPoint, class USkeletalMeshComponent* K2Node_CustomEvent_Mesh, class UAnimInstance* K2Node_CustomEvent_Anim, class UAI_AnimMan_C* K2Node_CustomEvent_Ref, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FName K2Node_CustomEvent_NotifyName_4, class FName K2Node_CustomEvent_NotifyName_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class FName K2Node_CustomEvent_NotifyName_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class FName K2Node_CustomEvent_NotifyName_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class FName K2Node_CustomEvent_NotifyName, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, class FName Temp_name_Variable, class USkeletalMeshComponent* K2Node_CustomEvent_Mesh_1, class UAnimInstance* K2Node_CustomEvent_Anim_1, class UAI_AnimMan_C* K2Node_CustomEvent_Ref_1, bool CallFunc_IsValid_ReturnValue, class UAnimMontage* CallFunc_ReloadAnim_FireAnimation, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
};

}


