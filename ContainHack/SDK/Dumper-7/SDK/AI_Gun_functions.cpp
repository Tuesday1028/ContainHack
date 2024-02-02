#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AI_Gun.AI_Gun_C
// (Actor)

class UClass* UAI_Gun_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AI_Gun_C");

	return Clss;
}


// AI_Gun_C AI_Gun.Default__AI_Gun_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAI_Gun_C* UAI_Gun_C::GetDefaultObj()
{
	static class UAI_Gun_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAI_Gun_C*>(UAI_Gun_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AI_Gun.AI_Gun_C.ReloadAnim
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UAI_AnimMan_C*               Ref                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                FireAnimation                                                    (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAI_Gun_C::ReloadAnim(class UAI_AnimMan_C* Ref, class UAnimMontage** FireAnimation, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AI_Gun_C", "ReloadAnim");

	Params::UAI_Gun_C_ReloadAnim_Params Parms{};

	Parms.Ref = Ref;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (FireAnimation != nullptr)
		*FireAnimation = Parms.FireAnimation;

}


// Function AI_Gun.AI_Gun_C.FiringAnim
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UAI_AnimMan_C*               Ref                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                FireAnimation                                                    (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAI_Gun_C::FiringAnim(class UAI_AnimMan_C* Ref, class UAnimMontage** FireAnimation, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AI_Gun_C", "FiringAnim");

	Params::UAI_Gun_C_FiringAnim_Params Parms{};

	Parms.Ref = Ref;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (FireAnimation != nullptr)
		*FireAnimation = Parms.FireAnimation;

}


// Function AI_Gun.AI_Gun_C.OnNotifyEnd_716F16C34D41E5ECF6A3E291270458FD
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAI_Gun_C::OnNotifyEnd_716F16C34D41E5ECF6A3E291270458FD(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AI_Gun_C", "OnNotifyEnd_716F16C34D41E5ECF6A3E291270458FD");

	Params::UAI_Gun_C_OnNotifyEnd_716F16C34D41E5ECF6A3E291270458FD_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AI_Gun.AI_Gun_C.OnNotifyBegin_716F16C34D41E5ECF6A3E291270458FD
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAI_Gun_C::OnNotifyBegin_716F16C34D41E5ECF6A3E291270458FD(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AI_Gun_C", "OnNotifyBegin_716F16C34D41E5ECF6A3E291270458FD");

	Params::UAI_Gun_C_OnNotifyBegin_716F16C34D41E5ECF6A3E291270458FD_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AI_Gun.AI_Gun_C.OnInterrupted_716F16C34D41E5ECF6A3E291270458FD
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAI_Gun_C::OnInterrupted_716F16C34D41E5ECF6A3E291270458FD(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AI_Gun_C", "OnInterrupted_716F16C34D41E5ECF6A3E291270458FD");

	Params::UAI_Gun_C_OnInterrupted_716F16C34D41E5ECF6A3E291270458FD_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AI_Gun.AI_Gun_C.OnBlendOut_716F16C34D41E5ECF6A3E291270458FD
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAI_Gun_C::OnBlendOut_716F16C34D41E5ECF6A3E291270458FD(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AI_Gun_C", "OnBlendOut_716F16C34D41E5ECF6A3E291270458FD");

	Params::UAI_Gun_C_OnBlendOut_716F16C34D41E5ECF6A3E291270458FD_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AI_Gun.AI_Gun_C.OnCompleted_716F16C34D41E5ECF6A3E291270458FD
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAI_Gun_C::OnCompleted_716F16C34D41E5ECF6A3E291270458FD(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AI_Gun_C", "OnCompleted_716F16C34D41E5ECF6A3E291270458FD");

	Params::UAI_Gun_C_OnCompleted_716F16C34D41E5ECF6A3E291270458FD_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AI_Gun.AI_Gun_C.ReloadEvent
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMeshComponent*      Mesh                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UAnimInstance*               Anim                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAI_AnimMan_C*               Ref                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UAI_Gun_C::ReloadEvent(class USkeletalMeshComponent* Mesh, class UAnimInstance* Anim, class UAI_AnimMan_C* Ref)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AI_Gun_C", "ReloadEvent");

	Params::UAI_Gun_C_ReloadEvent_Params Parms{};

	Parms.Mesh = Mesh;
	Parms.Anim = Anim;
	Parms.Ref = Ref;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AI_Gun.AI_Gun_C.ReloadServ
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMeshComponent*      Mesh                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UAnimInstance*               Anim                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAI_AnimMan_C*               Ref                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UAI_Gun_C::ReloadServ(class USkeletalMeshComponent* Mesh, class UAnimInstance* Anim, class UAI_AnimMan_C* Ref)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AI_Gun_C", "ReloadServ");

	Params::UAI_Gun_C_ReloadServ_Params Parms{};

	Parms.Mesh = Mesh;
	Parms.Anim = Anim;
	Parms.Ref = Ref;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AI_Gun.AI_Gun_C.ExecuteUbergraph_AI_Gun
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      K2Node_CustomEvent_Mesh                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UAnimInstance*               K2Node_CustomEvent_Anim                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAI_AnimMan_C*               K2Node_CustomEvent_Ref                                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_NotifyName_4                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_NotifyName_3                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_NotifyName_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_NotifyName_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_NotifyName                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      K2Node_CustomEvent_Mesh_1                                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UAnimInstance*               K2Node_CustomEvent_Anim_1                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAI_AnimMan_C*               K2Node_CustomEvent_Ref_1                                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                CallFunc_ReloadAnim_FireAnimation                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPlayMontageCallbackProxy*   CallFunc_CreateProxyObjectForPlayMontage_ReturnValue             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAI_Gun_C::ExecuteUbergraph_AI_Gun(int32 EntryPoint, class USkeletalMeshComponent* K2Node_CustomEvent_Mesh, class UAnimInstance* K2Node_CustomEvent_Anim, class UAI_AnimMan_C* K2Node_CustomEvent_Ref, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FName K2Node_CustomEvent_NotifyName_4, class FName K2Node_CustomEvent_NotifyName_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class FName K2Node_CustomEvent_NotifyName_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class FName K2Node_CustomEvent_NotifyName_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class FName K2Node_CustomEvent_NotifyName, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, class FName Temp_name_Variable, class USkeletalMeshComponent* K2Node_CustomEvent_Mesh_1, class UAnimInstance* K2Node_CustomEvent_Anim_1, class UAI_AnimMan_C* K2Node_CustomEvent_Ref_1, bool CallFunc_IsValid_ReturnValue, class UAnimMontage* CallFunc_ReloadAnim_FireAnimation, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AI_Gun_C", "ExecuteUbergraph_AI_Gun");

	Params::UAI_Gun_C_ExecuteUbergraph_AI_Gun_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_Mesh = K2Node_CustomEvent_Mesh;
	Parms.K2Node_CustomEvent_Anim = K2Node_CustomEvent_Anim;
	Parms.K2Node_CustomEvent_Ref = K2Node_CustomEvent_Ref;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CustomEvent_NotifyName_4 = K2Node_CustomEvent_NotifyName_4;
	Parms.K2Node_CustomEvent_NotifyName_3 = K2Node_CustomEvent_NotifyName_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CustomEvent_NotifyName_2 = K2Node_CustomEvent_NotifyName_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CustomEvent_NotifyName_1 = K2Node_CustomEvent_NotifyName_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.K2Node_CustomEvent_NotifyName = K2Node_CustomEvent_NotifyName;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.Temp_name_Variable = Temp_name_Variable;
	Parms.K2Node_CustomEvent_Mesh_1 = K2Node_CustomEvent_Mesh_1;
	Parms.K2Node_CustomEvent_Anim_1 = K2Node_CustomEvent_Anim_1;
	Parms.K2Node_CustomEvent_Ref_1 = K2Node_CustomEvent_Ref_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_ReloadAnim_FireAnimation = CallFunc_ReloadAnim_FireAnimation;
	Parms.CallFunc_CreateProxyObjectForPlayMontage_ReturnValue = CallFunc_CreateProxyObjectForPlayMontage_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


