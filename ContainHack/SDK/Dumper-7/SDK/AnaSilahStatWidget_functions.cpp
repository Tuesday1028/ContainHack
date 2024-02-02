#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass AnaSilahStatWidget.AnaSilahStatWidget_C
// (None)

class UClass* UAnaSilahStatWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AnaSilahStatWidget_C");

	return Clss;
}


// AnaSilahStatWidget_C AnaSilahStatWidget.Default__AnaSilahStatWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAnaSilahStatWidget_C* UAnaSilahStatWidget_C::GetDefaultObj()
{
	static class UAnaSilahStatWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAnaSilahStatWidget_C*>(UAnaSilahStatWidget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AnaSilahStatWidget.AnaSilahStatWidget_C.TumPanelleriGizle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Horizontal                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Vertical                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Acuracy                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Gravity                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               SwitchOpticSpeed                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ADSSpeed                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               EquipSpeed                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReloadSpeed                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               MagSize                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Damage                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               FireRate                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               MoveSpeed                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Velocity                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Penetre                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Sound                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             HorizontalStat                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             VerticalStat                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             AcuracyStat                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             GravityStat                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             SwitchOpticStat                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             ADSSpeedStat                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             EquipSpeedStat                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             ReloadSpeedStat                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             MagSizeStat                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             DamageStat                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             FireRateStat                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             MoveSpeedStat                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             VelocityStat                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             PenetreStat                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             SoundStat                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Text                                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_2                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_3                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_4                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_5                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_6                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_7                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_8                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_9                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_10                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_11                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_12                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_13                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_14                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetPercent_InPercent_ImplicitCast                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetPercent_InPercent_ImplicitCast_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetPercent_InPercent_ImplicitCast_2                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetPercent_InPercent_ImplicitCast_3                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetPercent_InPercent_ImplicitCast_4                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetPercent_InPercent_ImplicitCast_5                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetPercent_InPercent_ImplicitCast_6                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetPercent_InPercent_ImplicitCast_7                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetPercent_InPercent_ImplicitCast_8                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetPercent_InPercent_ImplicitCast_9                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetPercent_InPercent_ImplicitCast_10                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetPercent_InPercent_ImplicitCast_11                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetPercent_InPercent_ImplicitCast_12                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetPercent_InPercent_ImplicitCast_13                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetPercent_InPercent_ImplicitCast_14                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAnaSilahStatWidget_C::TumPanelleriGizle(bool Horizontal, bool Vertical, bool Acuracy, bool Gravity, bool SwitchOpticSpeed, bool ADSSpeed, bool EquipSpeed, bool ReloadSpeed, bool MagSize, bool Damage, bool FireRate, bool MoveSpeed, bool Velocity, bool Penetre, bool Sound, double HorizontalStat, double VerticalStat, double AcuracyStat, double GravityStat, double SwitchOpticStat, double ADSSpeedStat, double EquipSpeedStat, double ReloadSpeedStat, double MagSizeStat, double DamageStat, double FireRateStat, double MoveSpeedStat, double VelocityStat, double PenetreStat, double SoundStat, class FText Text, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_ReturnValue_2, double CallFunc_Multiply_DoubleDouble_ReturnValue_3, double CallFunc_Multiply_DoubleDouble_ReturnValue_4, double CallFunc_Multiply_DoubleDouble_ReturnValue_5, double CallFunc_Subtract_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_6, double CallFunc_Multiply_DoubleDouble_ReturnValue_7, double CallFunc_Multiply_DoubleDouble_ReturnValue_8, double CallFunc_Multiply_DoubleDouble_ReturnValue_9, double CallFunc_Multiply_DoubleDouble_ReturnValue_10, double CallFunc_Multiply_DoubleDouble_ReturnValue_11, double CallFunc_Multiply_DoubleDouble_ReturnValue_12, double CallFunc_Multiply_DoubleDouble_ReturnValue_13, double CallFunc_Multiply_DoubleDouble_ReturnValue_14, float CallFunc_SetPercent_InPercent_ImplicitCast, float CallFunc_SetPercent_InPercent_ImplicitCast_1, float CallFunc_SetPercent_InPercent_ImplicitCast_2, float CallFunc_SetPercent_InPercent_ImplicitCast_3, float CallFunc_SetPercent_InPercent_ImplicitCast_4, float CallFunc_SetPercent_InPercent_ImplicitCast_5, float CallFunc_SetPercent_InPercent_ImplicitCast_6, float CallFunc_SetPercent_InPercent_ImplicitCast_7, float CallFunc_SetPercent_InPercent_ImplicitCast_8, float CallFunc_SetPercent_InPercent_ImplicitCast_9, float CallFunc_SetPercent_InPercent_ImplicitCast_10, float CallFunc_SetPercent_InPercent_ImplicitCast_11, float CallFunc_SetPercent_InPercent_ImplicitCast_12, float CallFunc_SetPercent_InPercent_ImplicitCast_13, float CallFunc_SetPercent_InPercent_ImplicitCast_14)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnaSilahStatWidget_C", "TumPanelleriGizle");

	Params::UAnaSilahStatWidget_C_TumPanelleriGizle_Params Parms{};

	Parms.Horizontal = Horizontal;
	Parms.Vertical = Vertical;
	Parms.Acuracy = Acuracy;
	Parms.Gravity = Gravity;
	Parms.SwitchOpticSpeed = SwitchOpticSpeed;
	Parms.ADSSpeed = ADSSpeed;
	Parms.EquipSpeed = EquipSpeed;
	Parms.ReloadSpeed = ReloadSpeed;
	Parms.MagSize = MagSize;
	Parms.Damage = Damage;
	Parms.FireRate = FireRate;
	Parms.MoveSpeed = MoveSpeed;
	Parms.Velocity = Velocity;
	Parms.Penetre = Penetre;
	Parms.Sound = Sound;
	Parms.HorizontalStat = HorizontalStat;
	Parms.VerticalStat = VerticalStat;
	Parms.AcuracyStat = AcuracyStat;
	Parms.GravityStat = GravityStat;
	Parms.SwitchOpticStat = SwitchOpticStat;
	Parms.ADSSpeedStat = ADSSpeedStat;
	Parms.EquipSpeedStat = EquipSpeedStat;
	Parms.ReloadSpeedStat = ReloadSpeedStat;
	Parms.MagSizeStat = MagSizeStat;
	Parms.DamageStat = DamageStat;
	Parms.FireRateStat = FireRateStat;
	Parms.MoveSpeedStat = MoveSpeedStat;
	Parms.VelocityStat = VelocityStat;
	Parms.PenetreStat = PenetreStat;
	Parms.SoundStat = SoundStat;
	Parms.Text = Text;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_1 = CallFunc_Multiply_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_2 = CallFunc_Multiply_DoubleDouble_ReturnValue_2;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_3 = CallFunc_Multiply_DoubleDouble_ReturnValue_3;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_4 = CallFunc_Multiply_DoubleDouble_ReturnValue_4;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_5 = CallFunc_Multiply_DoubleDouble_ReturnValue_5;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue = CallFunc_Subtract_DoubleDouble_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_6 = CallFunc_Multiply_DoubleDouble_ReturnValue_6;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_7 = CallFunc_Multiply_DoubleDouble_ReturnValue_7;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_8 = CallFunc_Multiply_DoubleDouble_ReturnValue_8;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_9 = CallFunc_Multiply_DoubleDouble_ReturnValue_9;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_10 = CallFunc_Multiply_DoubleDouble_ReturnValue_10;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_11 = CallFunc_Multiply_DoubleDouble_ReturnValue_11;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_12 = CallFunc_Multiply_DoubleDouble_ReturnValue_12;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_13 = CallFunc_Multiply_DoubleDouble_ReturnValue_13;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_14 = CallFunc_Multiply_DoubleDouble_ReturnValue_14;
	Parms.CallFunc_SetPercent_InPercent_ImplicitCast = CallFunc_SetPercent_InPercent_ImplicitCast;
	Parms.CallFunc_SetPercent_InPercent_ImplicitCast_1 = CallFunc_SetPercent_InPercent_ImplicitCast_1;
	Parms.CallFunc_SetPercent_InPercent_ImplicitCast_2 = CallFunc_SetPercent_InPercent_ImplicitCast_2;
	Parms.CallFunc_SetPercent_InPercent_ImplicitCast_3 = CallFunc_SetPercent_InPercent_ImplicitCast_3;
	Parms.CallFunc_SetPercent_InPercent_ImplicitCast_4 = CallFunc_SetPercent_InPercent_ImplicitCast_4;
	Parms.CallFunc_SetPercent_InPercent_ImplicitCast_5 = CallFunc_SetPercent_InPercent_ImplicitCast_5;
	Parms.CallFunc_SetPercent_InPercent_ImplicitCast_6 = CallFunc_SetPercent_InPercent_ImplicitCast_6;
	Parms.CallFunc_SetPercent_InPercent_ImplicitCast_7 = CallFunc_SetPercent_InPercent_ImplicitCast_7;
	Parms.CallFunc_SetPercent_InPercent_ImplicitCast_8 = CallFunc_SetPercent_InPercent_ImplicitCast_8;
	Parms.CallFunc_SetPercent_InPercent_ImplicitCast_9 = CallFunc_SetPercent_InPercent_ImplicitCast_9;
	Parms.CallFunc_SetPercent_InPercent_ImplicitCast_10 = CallFunc_SetPercent_InPercent_ImplicitCast_10;
	Parms.CallFunc_SetPercent_InPercent_ImplicitCast_11 = CallFunc_SetPercent_InPercent_ImplicitCast_11;
	Parms.CallFunc_SetPercent_InPercent_ImplicitCast_12 = CallFunc_SetPercent_InPercent_ImplicitCast_12;
	Parms.CallFunc_SetPercent_InPercent_ImplicitCast_13 = CallFunc_SetPercent_InPercent_ImplicitCast_13;
	Parms.CallFunc_SetPercent_InPercent_ImplicitCast_14 = CallFunc_SetPercent_InPercent_ImplicitCast_14;

	UObject::ProcessEvent(Func, &Parms);

}

}


