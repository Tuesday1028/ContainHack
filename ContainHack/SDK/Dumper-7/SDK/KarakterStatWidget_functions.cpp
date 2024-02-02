#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass KarakterStatWidget.KarakterStatWidget_C
// (None)

class UClass* UKarakterStatWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("KarakterStatWidget_C");

	return Clss;
}


// KarakterStatWidget_C KarakterStatWidget.Default__KarakterStatWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UKarakterStatWidget_C* UKarakterStatWidget_C::GetDefaultObj()
{
	static class UKarakterStatWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UKarakterStatWidget_C*>(UKarakterStatWidget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function KarakterStatWidget.KarakterStatWidget_C.TumPanelleriGizle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               KaskKirilma                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ArmorKirilma                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Health                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               AltSilahAmmo                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               AnaSilahAmmo                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               MoveSpeed                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               StimPackAmmo                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             KaskKirilmaStat                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             ArmorKirilmaStat                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             HealthStat                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             AltSilahAmmoStat                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             AnaSilahAmmoStat                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             MoveSpeedStat                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             StimPackAmmoStat                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Text                                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_2                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_3                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_4                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_5                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_6                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetPercent_InPercent_ImplicitCast                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetPercent_InPercent_ImplicitCast_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetPercent_InPercent_ImplicitCast_2                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetPercent_InPercent_ImplicitCast_3                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetPercent_InPercent_ImplicitCast_4                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetPercent_InPercent_ImplicitCast_5                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetPercent_InPercent_ImplicitCast_6                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UKarakterStatWidget_C::TumPanelleriGizle(bool KaskKirilma, bool ArmorKirilma, bool Health, bool AltSilahAmmo, bool AnaSilahAmmo, bool MoveSpeed, bool StimPackAmmo, double KaskKirilmaStat, double ArmorKirilmaStat, double HealthStat, double AltSilahAmmoStat, double AnaSilahAmmoStat, double MoveSpeedStat, double StimPackAmmoStat, class FText Text, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_ReturnValue_2, double CallFunc_Multiply_DoubleDouble_ReturnValue_3, double CallFunc_Multiply_DoubleDouble_ReturnValue_4, double CallFunc_Multiply_DoubleDouble_ReturnValue_5, double CallFunc_Multiply_DoubleDouble_ReturnValue_6, float CallFunc_SetPercent_InPercent_ImplicitCast, float CallFunc_SetPercent_InPercent_ImplicitCast_1, float CallFunc_SetPercent_InPercent_ImplicitCast_2, float CallFunc_SetPercent_InPercent_ImplicitCast_3, float CallFunc_SetPercent_InPercent_ImplicitCast_4, float CallFunc_SetPercent_InPercent_ImplicitCast_5, float CallFunc_SetPercent_InPercent_ImplicitCast_6)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KarakterStatWidget_C", "TumPanelleriGizle");

	Params::UKarakterStatWidget_C_TumPanelleriGizle_Params Parms{};

	Parms.KaskKirilma = KaskKirilma;
	Parms.ArmorKirilma = ArmorKirilma;
	Parms.Health = Health;
	Parms.AltSilahAmmo = AltSilahAmmo;
	Parms.AnaSilahAmmo = AnaSilahAmmo;
	Parms.MoveSpeed = MoveSpeed;
	Parms.StimPackAmmo = StimPackAmmo;
	Parms.KaskKirilmaStat = KaskKirilmaStat;
	Parms.ArmorKirilmaStat = ArmorKirilmaStat;
	Parms.HealthStat = HealthStat;
	Parms.AltSilahAmmoStat = AltSilahAmmoStat;
	Parms.AnaSilahAmmoStat = AnaSilahAmmoStat;
	Parms.MoveSpeedStat = MoveSpeedStat;
	Parms.StimPackAmmoStat = StimPackAmmoStat;
	Parms.Text = Text;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_1 = CallFunc_Multiply_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_2 = CallFunc_Multiply_DoubleDouble_ReturnValue_2;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_3 = CallFunc_Multiply_DoubleDouble_ReturnValue_3;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_4 = CallFunc_Multiply_DoubleDouble_ReturnValue_4;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_5 = CallFunc_Multiply_DoubleDouble_ReturnValue_5;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_6 = CallFunc_Multiply_DoubleDouble_ReturnValue_6;
	Parms.CallFunc_SetPercent_InPercent_ImplicitCast = CallFunc_SetPercent_InPercent_ImplicitCast;
	Parms.CallFunc_SetPercent_InPercent_ImplicitCast_1 = CallFunc_SetPercent_InPercent_ImplicitCast_1;
	Parms.CallFunc_SetPercent_InPercent_ImplicitCast_2 = CallFunc_SetPercent_InPercent_ImplicitCast_2;
	Parms.CallFunc_SetPercent_InPercent_ImplicitCast_3 = CallFunc_SetPercent_InPercent_ImplicitCast_3;
	Parms.CallFunc_SetPercent_InPercent_ImplicitCast_4 = CallFunc_SetPercent_InPercent_ImplicitCast_4;
	Parms.CallFunc_SetPercent_InPercent_ImplicitCast_5 = CallFunc_SetPercent_InPercent_ImplicitCast_5;
	Parms.CallFunc_SetPercent_InPercent_ImplicitCast_6 = CallFunc_SetPercent_InPercent_ImplicitCast_6;

	UObject::ProcessEvent(Func, &Parms);

}

}


