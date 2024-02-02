#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass CharacterPreSet.CharacterPreSet_C
// (None)

class UClass* UCharacterPreSet_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CharacterPreSet_C");

	return Clss;
}


// CharacterPreSet_C CharacterPreSet.Default__CharacterPreSet_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCharacterPreSet_C* UCharacterPreSet_C::GetDefaultObj()
{
	static class UCharacterPreSet_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCharacterPreSet_C*>(UCharacterPreSet_C::StaticClass()->DefaultObject);

	return Default;
}


// Function CharacterPreSet.CharacterPreSet_C.Completed_DE44384A4A58FB97577D1A9E52ABAFCF
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class USaveGame*                   SaveGame                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               bSuccess                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCharacterPreSet_C::Completed_DE44384A4A58FB97577D1A9E52ABAFCF(class USaveGame* SaveGame, bool bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CharacterPreSet_C", "Completed_DE44384A4A58FB97577D1A9E52ABAFCF");

	Params::UCharacterPreSet_C_Completed_DE44384A4A58FB97577D1A9E52ABAFCF_Params Parms{};

	Parms.SaveGame = SaveGame;
	Parms.bSuccess = bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CharacterPreSet.CharacterPreSet_C.Completed_4BDC3CC14FA7431E7074B0859BE05FB4
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class USaveGame*                   SaveGame                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               bSuccess                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCharacterPreSet_C::Completed_4BDC3CC14FA7431E7074B0859BE05FB4(class USaveGame* SaveGame, bool bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CharacterPreSet_C", "Completed_4BDC3CC14FA7431E7074B0859BE05FB4");

	Params::UCharacterPreSet_C_Completed_4BDC3CC14FA7431E7074B0859BE05FB4_Params Parms{};

	Parms.SaveGame = SaveGame;
	Parms.bSuccess = bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CharacterPreSet.CharacterPreSet_C.Completed_6174A9504D698F4B47AFF9BE995FE67F
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class USaveGame*                   SaveGame                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               bSuccess                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCharacterPreSet_C::Completed_6174A9504D698F4B47AFF9BE995FE67F(class USaveGame* SaveGame, bool bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CharacterPreSet_C", "Completed_6174A9504D698F4B47AFF9BE995FE67F");

	Params::UCharacterPreSet_C_Completed_6174A9504D698F4B47AFF9BE995FE67F_Params Parms{};

	Parms.SaveGame = SaveGame;
	Parms.bSuccess = bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CharacterPreSet.CharacterPreSet_C.Completed_B543D7384B0D90F1756282A7E68E53A2
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class USaveGame*                   SaveGame                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               bSuccess                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCharacterPreSet_C::Completed_B543D7384B0D90F1756282A7E68E53A2(class USaveGame* SaveGame, bool bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CharacterPreSet_C", "Completed_B543D7384B0D90F1756282A7E68E53A2");

	Params::UCharacterPreSet_C_Completed_B543D7384B0D90F1756282A7E68E53A2_Params Parms{};

	Parms.SaveGame = SaveGame;
	Parms.bSuccess = bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CharacterPreSet.CharacterPreSet_C.Completed_DBB2518A4FF4D4650FB5DEA7161C02F3
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class USaveGame*                   SaveGame                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               bSuccess                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCharacterPreSet_C::Completed_DBB2518A4FF4D4650FB5DEA7161C02F3(class USaveGame* SaveGame, bool bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CharacterPreSet_C", "Completed_DBB2518A4FF4D4650FB5DEA7161C02F3");

	Params::UCharacterPreSet_C_Completed_DBB2518A4FF4D4650FB5DEA7161C02F3_Params Parms{};

	Parms.SaveGame = SaveGame;
	Parms.bSuccess = bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CharacterPreSet.CharacterPreSet_C.Completed_5D64E962475D9F8635896492C0363730
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class USaveGame*                   SaveGame                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               bSuccess                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCharacterPreSet_C::Completed_5D64E962475D9F8635896492C0363730(class USaveGame* SaveGame, bool bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CharacterPreSet_C", "Completed_5D64E962475D9F8635896492C0363730");

	Params::UCharacterPreSet_C_Completed_5D64E962475D9F8635896492C0363730_Params Parms{};

	Parms.SaveGame = SaveGame;
	Parms.bSuccess = bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CharacterPreSet.CharacterPreSet_C.Completed_825AC52D408E2C95B0C76EAA27DFCBFF
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class USaveGame*                   SaveGame                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               bSuccess                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCharacterPreSet_C::Completed_825AC52D408E2C95B0C76EAA27DFCBFF(class USaveGame* SaveGame, bool bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CharacterPreSet_C", "Completed_825AC52D408E2C95B0C76EAA27DFCBFF");

	Params::UCharacterPreSet_C_Completed_825AC52D408E2C95B0C76EAA27DFCBFF_Params Parms{};

	Parms.SaveGame = SaveGame;
	Parms.bSuccess = bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CharacterPreSet.CharacterPreSet_C.Completed_87452A0E442A89C09D8C419A12D3CF44
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class USaveGame*                   SaveGame                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               bSuccess                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCharacterPreSet_C::Completed_87452A0E442A89C09D8C419A12D3CF44(class USaveGame* SaveGame, bool bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CharacterPreSet_C", "Completed_87452A0E442A89C09D8C419A12D3CF44");

	Params::UCharacterPreSet_C_Completed_87452A0E442A89C09D8C419A12D3CF44_Params Parms{};

	Parms.SaveGame = SaveGame;
	Parms.bSuccess = bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CharacterPreSet.CharacterPreSet_C.Completed_C25DDCA54FD1B3A4A18AEC89AD16449B
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class USaveGame*                   SaveGame                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               bSuccess                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCharacterPreSet_C::Completed_C25DDCA54FD1B3A4A18AEC89AD16449B(class USaveGame* SaveGame, bool bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CharacterPreSet_C", "Completed_C25DDCA54FD1B3A4A18AEC89AD16449B");

	Params::UCharacterPreSet_C_Completed_C25DDCA54FD1B3A4A18AEC89AD16449B_Params Parms{};

	Parms.SaveGame = SaveGame;
	Parms.bSuccess = bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CharacterPreSet.CharacterPreSet_C.Completed_0139258D455ED0DE9DE334A422E8D544
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class USaveGame*                   SaveGame                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               bSuccess                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCharacterPreSet_C::Completed_0139258D455ED0DE9DE334A422E8D544(class USaveGame* SaveGame, bool bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CharacterPreSet_C", "Completed_0139258D455ED0DE9DE334A422E8D544");

	Params::UCharacterPreSet_C_Completed_0139258D455ED0DE9DE334A422E8D544_Params Parms{};

	Parms.SaveGame = SaveGame;
	Parms.bSuccess = bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CharacterPreSet.CharacterPreSet_C.Completed_F8E6C67B484B04B6C8DBAE92B474571A
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class USaveGame*                   SaveGame                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               bSuccess                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCharacterPreSet_C::Completed_F8E6C67B484B04B6C8DBAE92B474571A(class USaveGame* SaveGame, bool bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CharacterPreSet_C", "Completed_F8E6C67B484B04B6C8DBAE92B474571A");

	Params::UCharacterPreSet_C_Completed_F8E6C67B484B04B6C8DBAE92B474571A_Params Parms{};

	Parms.SaveGame = SaveGame;
	Parms.bSuccess = bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CharacterPreSet.CharacterPreSet_C.Completed_893361E54FF37D2966B0D7869E502884
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class USaveGame*                   SaveGame                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               bSuccess                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCharacterPreSet_C::Completed_893361E54FF37D2966B0D7869E502884(class USaveGame* SaveGame, bool bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CharacterPreSet_C", "Completed_893361E54FF37D2966B0D7869E502884");

	Params::UCharacterPreSet_C_Completed_893361E54FF37D2966B0D7869E502884_Params Parms{};

	Parms.SaveGame = SaveGame;
	Parms.bSuccess = bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CharacterPreSet.CharacterPreSet_C.Completed_C02CDF854D0A54E80B5C7AA8EAAC6DA1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class USaveGame*                   SaveGame                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               bSuccess                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCharacterPreSet_C::Completed_C02CDF854D0A54E80B5C7AA8EAAC6DA1(class USaveGame* SaveGame, bool bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CharacterPreSet_C", "Completed_C02CDF854D0A54E80B5C7AA8EAAC6DA1");

	Params::UCharacterPreSet_C_Completed_C02CDF854D0A54E80B5C7AA8EAAC6DA1_Params Parms{};

	Parms.SaveGame = SaveGame;
	Parms.bSuccess = bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CharacterPreSet.CharacterPreSet_C.Completed_A22B4AA54E1FF3E948C352803918C321
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class USaveGame*                   SaveGame                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               bSuccess                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCharacterPreSet_C::Completed_A22B4AA54E1FF3E948C352803918C321(class USaveGame* SaveGame, bool bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CharacterPreSet_C", "Completed_A22B4AA54E1FF3E948C352803918C321");

	Params::UCharacterPreSet_C_Completed_A22B4AA54E1FF3E948C352803918C321_Params Parms{};

	Parms.SaveGame = SaveGame;
	Parms.bSuccess = bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CharacterPreSet.CharacterPreSet_C.Completed_EB15226B4BE4636A7A3D8C8241D9550C
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class USaveGame*                   SaveGame                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               bSuccess                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCharacterPreSet_C::Completed_EB15226B4BE4636A7A3D8C8241D9550C(class USaveGame* SaveGame, bool bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CharacterPreSet_C", "Completed_EB15226B4BE4636A7A3D8C8241D9550C");

	Params::UCharacterPreSet_C_Completed_EB15226B4BE4636A7A3D8C8241D9550C_Params Parms{};

	Parms.SaveGame = SaveGame;
	Parms.bSuccess = bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CharacterPreSet.CharacterPreSet_C.Completed_02E7E37541C407251C4ED8AEA2407E6C
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class USaveGame*                   SaveGame                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               bSuccess                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCharacterPreSet_C::Completed_02E7E37541C407251C4ED8AEA2407E6C(class USaveGame* SaveGame, bool bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CharacterPreSet_C", "Completed_02E7E37541C407251C4ED8AEA2407E6C");

	Params::UCharacterPreSet_C_Completed_02E7E37541C407251C4ED8AEA2407E6C_Params Parms{};

	Parms.SaveGame = SaveGame;
	Parms.bSuccess = bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CharacterPreSet.CharacterPreSet_C.Completed_1334D2664D341038444D82AA57E3FC0D
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class USaveGame*                   SaveGame                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               bSuccess                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCharacterPreSet_C::Completed_1334D2664D341038444D82AA57E3FC0D(class USaveGame* SaveGame, bool bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CharacterPreSet_C", "Completed_1334D2664D341038444D82AA57E3FC0D");

	Params::UCharacterPreSet_C_Completed_1334D2664D341038444D82AA57E3FC0D_Params Parms{};

	Parms.SaveGame = SaveGame;
	Parms.bSuccess = bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CharacterPreSet.CharacterPreSet_C.Completed_48FE5209463D57B0F79E8C8778454EBB
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class USaveGame*                   SaveGame                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               bSuccess                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCharacterPreSet_C::Completed_48FE5209463D57B0F79E8C8778454EBB(class USaveGame* SaveGame, bool bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CharacterPreSet_C", "Completed_48FE5209463D57B0F79E8C8778454EBB");

	Params::UCharacterPreSet_C_Completed_48FE5209463D57B0F79E8C8778454EBB_Params Parms{};

	Parms.SaveGame = SaveGame;
	Parms.bSuccess = bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CharacterPreSet.CharacterPreSet_C.Completed_C9C9092A493373482B716FB9378EF38A
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class USaveGame*                   SaveGame                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               bSuccess                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCharacterPreSet_C::Completed_C9C9092A493373482B716FB9378EF38A(class USaveGame* SaveGame, bool bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CharacterPreSet_C", "Completed_C9C9092A493373482B716FB9378EF38A");

	Params::UCharacterPreSet_C_Completed_C9C9092A493373482B716FB9378EF38A_Params Parms{};

	Parms.SaveGame = SaveGame;
	Parms.bSuccess = bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CharacterPreSet.CharacterPreSet_C.Completed_FB99E8EC44A55B2013B25C8B58A7910B
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class USaveGame*                   SaveGame                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               bSuccess                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCharacterPreSet_C::Completed_FB99E8EC44A55B2013B25C8B58A7910B(class USaveGame* SaveGame, bool bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CharacterPreSet_C", "Completed_FB99E8EC44A55B2013B25C8B58A7910B");

	Params::UCharacterPreSet_C_Completed_FB99E8EC44A55B2013B25C8B58A7910B_Params Parms{};

	Parms.SaveGame = SaveGame;
	Parms.bSuccess = bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CharacterPreSet.CharacterPreSet_C.BndEvt__SilahPreSet_Button_4_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UCharacterPreSet_C::BndEvt__SilahPreSet_Button_4_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CharacterPreSet_C", "BndEvt__SilahPreSet_Button_4_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CharacterPreSet.CharacterPreSet_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCharacterPreSet_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CharacterPreSet_C", "Tick");

	Params::UCharacterPreSet_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CharacterPreSet.CharacterPreSet_C.BndEvt__SilahPreSet_Button_118_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UCharacterPreSet_C::BndEvt__SilahPreSet_Button_118_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CharacterPreSet_C", "BndEvt__SilahPreSet_Button_118_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CharacterPreSet.CharacterPreSet_C.BndEvt__SilahPreSet_Button_5_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UCharacterPreSet_C::BndEvt__SilahPreSet_Button_5_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CharacterPreSet_C", "BndEvt__SilahPreSet_Button_5_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CharacterPreSet.CharacterPreSet_C.BndEvt__SilahPreSet_Button_6_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UCharacterPreSet_C::BndEvt__SilahPreSet_Button_6_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CharacterPreSet_C", "BndEvt__SilahPreSet_Button_6_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CharacterPreSet.CharacterPreSet_C.BndEvt__SilahPreSet_Button_7_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UCharacterPreSet_C::BndEvt__SilahPreSet_Button_7_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CharacterPreSet_C", "BndEvt__SilahPreSet_Button_7_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CharacterPreSet.CharacterPreSet_C.BndEvt__SilahPreSet_Button_8_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UCharacterPreSet_C::BndEvt__SilahPreSet_Button_8_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CharacterPreSet_C", "BndEvt__SilahPreSet_Button_8_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CharacterPreSet.CharacterPreSet_C.BndEvt__SilahPreSet_Button_9_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UCharacterPreSet_C::BndEvt__SilahPreSet_Button_9_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CharacterPreSet_C", "BndEvt__SilahPreSet_Button_9_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CharacterPreSet.CharacterPreSet_C.BndEvt__SilahPreSet_Button_10_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UCharacterPreSet_C::BndEvt__SilahPreSet_Button_10_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CharacterPreSet_C", "BndEvt__SilahPreSet_Button_10_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CharacterPreSet.CharacterPreSet_C.BndEvt__SilahPreSet_Button_11_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UCharacterPreSet_C::BndEvt__SilahPreSet_Button_11_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CharacterPreSet_C", "BndEvt__SilahPreSet_Button_11_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CharacterPreSet.CharacterPreSet_C.BndEvt__SilahPreSet_Button_12_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UCharacterPreSet_C::BndEvt__SilahPreSet_Button_12_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CharacterPreSet_C", "BndEvt__SilahPreSet_Button_12_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CharacterPreSet.CharacterPreSet_C.BndEvt__SilahPreSet_Button_13_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UCharacterPreSet_C::BndEvt__SilahPreSet_Button_13_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CharacterPreSet_C", "BndEvt__SilahPreSet_Button_13_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CharacterPreSet.CharacterPreSet_C.BndEvt__SilahPreSet_Button_14_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UCharacterPreSet_C::BndEvt__SilahPreSet_Button_14_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CharacterPreSet_C", "BndEvt__SilahPreSet_Button_14_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CharacterPreSet.CharacterPreSet_C.BndEvt__SilahPreSet_Button_15_K2Node_ComponentBoundEvent_13_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UCharacterPreSet_C::BndEvt__SilahPreSet_Button_15_K2Node_ComponentBoundEvent_13_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CharacterPreSet_C", "BndEvt__SilahPreSet_Button_15_K2Node_ComponentBoundEvent_13_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CharacterPreSet.CharacterPreSet_C.BndEvt__SilahPreSet_Button_16_K2Node_ComponentBoundEvent_14_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UCharacterPreSet_C::BndEvt__SilahPreSet_Button_16_K2Node_ComponentBoundEvent_14_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CharacterPreSet_C", "BndEvt__SilahPreSet_Button_16_K2Node_ComponentBoundEvent_14_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CharacterPreSet.CharacterPreSet_C.BndEvt__SilahPreSet_Button_17_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UCharacterPreSet_C::BndEvt__SilahPreSet_Button_17_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CharacterPreSet_C", "BndEvt__SilahPreSet_Button_17_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CharacterPreSet.CharacterPreSet_C.ExecuteUbergraph_CharacterPreSet
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USaveGame*                   K2Node_CustomEvent_SaveGame_14                                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bSuccess_14                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USaveGame*                   Temp_object_Variable                                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UCharacter_Charlie_C*        K2Node_DynamicCast_AsCharacter_Charlie                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class USaveGame*                   K2Node_CustomEvent_SaveGame_13                                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bSuccess_13                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USaveGame*                   Temp_object_Variable_1                                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UCharacter_Delta_C*          K2Node_DynamicCast_AsCharacter_Delta                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class USaveGame*                   K2Node_CustomEvent_SaveGame_12                                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bSuccess_12                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USaveGame*                   Temp_object_Variable_2                                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UCharacter_Echo_C*           K2Node_DynamicCast_AsCharacter_Echo                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class USaveGame*                   K2Node_CustomEvent_SaveGame_11                                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bSuccess_11                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USaveGame*                   Temp_object_Variable_3                                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UCharacter_Beta_C*           K2Node_DynamicCast_AsCharacter_Beta                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USaveGame*                   K2Node_CustomEvent_SaveGame_10                                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bSuccess_10                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USaveGame*                   Temp_object_Variable_4                                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class USaveGame*                   K2Node_CustomEvent_SaveGame_9                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bSuccess_9                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_5                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USaveGame*                   Temp_object_Variable_5                                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class USaveGame*                   K2Node_CustomEvent_SaveGame_8                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bSuccess_8                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_6                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_6                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USaveGame*                   Temp_object_Variable_6                                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UCharacter_Charlie_C*        K2Node_DynamicCast_AsCharacter_Charlie_1                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USaveGame*                   K2Node_CustomEvent_SaveGame_7                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bSuccess_7                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_7                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_7                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USaveGame*                   Temp_object_Variable_7                                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class USaveGame*                   K2Node_CustomEvent_SaveGame_6                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bSuccess_6                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_8                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_8                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USaveGame*                   Temp_object_Variable_8                                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class USaveGame*                   K2Node_CustomEvent_SaveGame_5                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bSuccess_5                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_9                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_9                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USaveGame*                   Temp_object_Variable_9                                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UCharacter_Delta_C*          K2Node_DynamicCast_AsCharacter_Delta_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_5                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USaveGame*                   K2Node_CustomEvent_SaveGame_4                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_10                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_10                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USaveGame*                   Temp_object_Variable_10                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class USaveGame*                   K2Node_CustomEvent_SaveGame_3                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_11                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_11                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USaveGame*                   Temp_object_Variable_11                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class USaveGame*                   K2Node_CustomEvent_SaveGame_2                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_12                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_12                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USaveGame*                   Temp_object_Variable_12                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UCharacter_Echo_C*           K2Node_DynamicCast_AsCharacter_Echo_1                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_6                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USaveGame*                   K2Node_CustomEvent_SaveGame_1                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_13                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_13                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USaveGame*                   Temp_object_Variable_13                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class USaveGame*                   K2Node_CustomEvent_SaveGame                                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_14                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_14                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USaveGame*                   Temp_object_Variable_14                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class USaveGame*                   Temp_object_Variable_15                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_15                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_15                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCharacter*                  CallFunc_GetPlayerCharacter_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UB_DemoCharacter_C*          K2Node_DynamicCast_AsB_Demo_Character                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_7                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USaveGame*                   K2Node_CustomEvent_SaveGame_17                                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bSuccess_17                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCharacter_Alpha_C*          CallFunc_CreateSaveGameObject_ReturnValue                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAsyncActionHandleSaveGame*  CallFunc_AsyncLoadGameFromSlot_ReturnValue                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InDeltaTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_16                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UCharacter_Alpha_C*          CallFunc_CreateSaveGameObject_ReturnValue_1                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAsyncActionHandleSaveGame*  CallFunc_AsyncLoadGameFromSlot_ReturnValue_1                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCharacter_Alpha_C*          CallFunc_CreateSaveGameObject_ReturnValue_2                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAsyncActionHandleSaveGame*  CallFunc_AsyncSaveGameToSlot_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_5                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USaveGame*                   Temp_object_Variable_16                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_16                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCharacter_Beta_C*           K2Node_DynamicCast_AsCharacter_Beta_1                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_8                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCharacter_Alpha_C*          CallFunc_CreateSaveGameObject_ReturnValue_3                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAsyncActionHandleSaveGame*  CallFunc_AsyncSaveGameToSlot_ReturnValue_1                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_6                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_7                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCharacter*                  CallFunc_GetPlayerCharacter_ReturnValue_1                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UB_DemoCharacter_C*          K2Node_DynamicCast_AsB_Demo_Character_1                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_9                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_RandomFloatInRange_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_RandomFloatInRange_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_RandomFloatInRange_ReturnValue_2                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_RandomFloatInRange_ReturnValue_3                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_RandomFloatInRange_ReturnValue_4                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USaveGame*                   Temp_object_Variable_17                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UCharacter_Alpha_C*          K2Node_DynamicCast_AsCharacter_Alpha                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_10                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCharacter_Beta_C*           CallFunc_CreateSaveGameObject_ReturnValue_4                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAsyncActionHandleSaveGame*  CallFunc_AsyncLoadGameFromSlot_ReturnValue_2                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_8                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_9                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_17                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCharacter_Charlie_C*        CallFunc_CreateSaveGameObject_ReturnValue_5                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAsyncActionHandleSaveGame*  CallFunc_AsyncLoadGameFromSlot_ReturnValue_3                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_10                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_11                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USaveGame*                   K2Node_CustomEvent_SaveGame_18                                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bSuccess_18                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCharacter_Delta_C*          CallFunc_CreateSaveGameObject_ReturnValue_6                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAsyncActionHandleSaveGame*  CallFunc_AsyncLoadGameFromSlot_ReturnValue_4                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_12                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_13                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCharacter_Echo_C*           CallFunc_CreateSaveGameObject_ReturnValue_7                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAsyncActionHandleSaveGame*  CallFunc_AsyncLoadGameFromSlot_ReturnValue_5                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_14                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_15                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCharacter*                  CallFunc_GetPlayerCharacter_ReturnValue_2                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UB_DemoCharacter_C*          K2Node_DynamicCast_AsB_Demo_Character_2                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_11                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_17                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UCharacter_Beta_C*           CallFunc_CreateSaveGameObject_ReturnValue_8                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAsyncActionHandleSaveGame*  CallFunc_AsyncLoadGameFromSlot_ReturnValue_6                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_16                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_17                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_RandomFloatInRange_ReturnValue_5                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCharacter_Beta_C*           CallFunc_CreateSaveGameObject_ReturnValue_9                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAsyncActionHandleSaveGame*  CallFunc_AsyncSaveGameToSlot_ReturnValue_2                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_18                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_19                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USaveGame*                   K2Node_CustomEvent_SaveGame_15                                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bSuccess_15                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCharacter*                  CallFunc_GetPlayerCharacter_ReturnValue_3                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UB_DemoCharacter_C*          K2Node_DynamicCast_AsB_Demo_Character_3                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_12                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_RandomFloatInRange_ReturnValue_6                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_RandomFloatInRange_ReturnValue_7                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCharacter_Beta_C*           CallFunc_CreateSaveGameObject_ReturnValue_10                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAsyncActionHandleSaveGame*  CallFunc_AsyncSaveGameToSlot_ReturnValue_3                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_20                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_21                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_RandomFloatInRange_ReturnValue_8                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_RandomFloatInRange_ReturnValue_9                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_18                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UCharacter*                  CallFunc_GetPlayerCharacter_ReturnValue_4                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UB_DemoCharacter_C*          K2Node_DynamicCast_AsB_Demo_Character_4                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_13                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCharacter_Charlie_C*        CallFunc_CreateSaveGameObject_ReturnValue_11                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAsyncActionHandleSaveGame*  CallFunc_AsyncLoadGameFromSlot_ReturnValue_7                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_22                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_23                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_RandomFloatInRange_ReturnValue_10                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCharacter_Charlie_C*        CallFunc_CreateSaveGameObject_ReturnValue_12                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAsyncActionHandleSaveGame*  CallFunc_AsyncSaveGameToSlot_ReturnValue_4                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_24                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_25                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCharacter*                  CallFunc_GetPlayerCharacter_ReturnValue_5                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UB_DemoCharacter_C*          K2Node_DynamicCast_AsB_Demo_Character_5                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_14                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_RandomFloatInRange_ReturnValue_11                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_RandomFloatInRange_ReturnValue_12                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCharacter_Charlie_C*        CallFunc_CreateSaveGameObject_ReturnValue_13                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAsyncActionHandleSaveGame*  CallFunc_AsyncSaveGameToSlot_ReturnValue_5                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_26                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_27                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USaveGame*                   Temp_object_Variable_18                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UCharacter_Alpha_C*          K2Node_DynamicCast_AsCharacter_Alpha_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_15                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_RandomFloatInRange_ReturnValue_13                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_RandomFloatInRange_ReturnValue_14                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCharacter*                  CallFunc_GetPlayerCharacter_ReturnValue_6                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UB_DemoCharacter_C*          K2Node_DynamicCast_AsB_Demo_Character_6                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_16                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_18                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCharacter_Delta_C*          CallFunc_CreateSaveGameObject_ReturnValue_14                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAsyncActionHandleSaveGame*  CallFunc_AsyncLoadGameFromSlot_ReturnValue_8                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_28                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_29                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_RandomFloatInRange_ReturnValue_15                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCharacter_Delta_C*          CallFunc_CreateSaveGameObject_ReturnValue_15                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAsyncActionHandleSaveGame*  CallFunc_AsyncSaveGameToSlot_ReturnValue_6                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_30                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_31                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USaveGame*                   Temp_object_Variable_19                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_19                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCharacter*                  CallFunc_GetPlayerCharacter_ReturnValue_7                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UB_DemoCharacter_C*          K2Node_DynamicCast_AsB_Demo_Character_7                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_17                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_RandomFloatInRange_ReturnValue_16                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_RandomFloatInRange_ReturnValue_17                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCharacter_Delta_C*          CallFunc_CreateSaveGameObject_ReturnValue_16                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class USaveGame*                   K2Node_CustomEvent_SaveGame_19                                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bSuccess_19                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAsyncActionHandleSaveGame*  CallFunc_AsyncSaveGameToSlot_ReturnValue_7                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_32                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_33                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_19                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_RandomFloatInRange_ReturnValue_18                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_RandomFloatInRange_ReturnValue_19                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCharacter*                  CallFunc_GetPlayerCharacter_ReturnValue_8                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UB_DemoCharacter_C*          K2Node_DynamicCast_AsB_Demo_Character_8                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_18                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCharacter_Echo_C*           CallFunc_CreateSaveGameObject_ReturnValue_17                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAsyncActionHandleSaveGame*  CallFunc_AsyncLoadGameFromSlot_ReturnValue_9                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_34                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_35                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_RandomFloatInRange_ReturnValue_20                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCharacter_Echo_C*           CallFunc_CreateSaveGameObject_ReturnValue_18                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAsyncActionHandleSaveGame*  CallFunc_AsyncSaveGameToSlot_ReturnValue_8                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_36                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_37                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USaveGame*                   K2Node_CustomEvent_SaveGame_16                                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bSuccess_16                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCharacter*                  CallFunc_GetPlayerCharacter_ReturnValue_9                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UB_DemoCharacter_C*          K2Node_DynamicCast_AsB_Demo_Character_9                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_19                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_RandomFloatInRange_ReturnValue_21                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_RandomFloatInRange_ReturnValue_22                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCharacter_Echo_C*           CallFunc_CreateSaveGameObject_ReturnValue_19                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAsyncActionHandleSaveGame*  CallFunc_AsyncSaveGameToSlot_ReturnValue_9                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_38                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_39                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_RandomFloatInRange_ReturnValue_23                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_RandomFloatInRange_ReturnValue_24                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Delay_Duration_ImplicitCast                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Delay_Duration_ImplicitCast_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Delay_Duration_ImplicitCast_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Delay_Duration_ImplicitCast_3                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Delay_Duration_ImplicitCast_4                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Delay_Duration_ImplicitCast_5                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Delay_Duration_ImplicitCast_6                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Delay_Duration_ImplicitCast_7                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Delay_Duration_ImplicitCast_8                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Delay_Duration_ImplicitCast_9                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Delay_Duration_ImplicitCast_10                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Delay_Duration_ImplicitCast_11                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Delay_Duration_ImplicitCast_12                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Delay_Duration_ImplicitCast_13                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Delay_Duration_ImplicitCast_14                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Delay_Duration_ImplicitCast_15                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Delay_Duration_ImplicitCast_16                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Delay_Duration_ImplicitCast_17                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Delay_Duration_ImplicitCast_18                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Delay_Duration_ImplicitCast_19                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Delay_Duration_ImplicitCast_20                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Delay_Duration_ImplicitCast_21                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Delay_Duration_ImplicitCast_22                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Delay_Duration_ImplicitCast_23                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Delay_Duration_ImplicitCast_24                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCharacterPreSet_C::ExecuteUbergraph_CharacterPreSet(int32 EntryPoint, class USaveGame* K2Node_CustomEvent_SaveGame_14, bool K2Node_CustomEvent_bSuccess_14, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool Temp_bool_Variable, class USaveGame* Temp_object_Variable, class UCharacter_Charlie_C* K2Node_DynamicCast_AsCharacter_Charlie, bool K2Node_DynamicCast_bSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class USaveGame* K2Node_CustomEvent_SaveGame_13, bool K2Node_CustomEvent_bSuccess_13, bool Temp_bool_Variable_1, class USaveGame* Temp_object_Variable_1, class UCharacter_Delta_C* K2Node_DynamicCast_AsCharacter_Delta, bool K2Node_DynamicCast_bSuccess_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class USaveGame* K2Node_CustomEvent_SaveGame_12, bool K2Node_CustomEvent_bSuccess_12, bool Temp_bool_Variable_2, class USaveGame* Temp_object_Variable_2, class UCharacter_Echo_C* K2Node_DynamicCast_AsCharacter_Echo, bool K2Node_DynamicCast_bSuccess_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class USaveGame* K2Node_CustomEvent_SaveGame_11, bool K2Node_CustomEvent_bSuccess_11, bool Temp_bool_Variable_3, class USaveGame* Temp_object_Variable_3, class UCharacter_Beta_C* K2Node_DynamicCast_AsCharacter_Beta, bool K2Node_DynamicCast_bSuccess_3, class USaveGame* K2Node_CustomEvent_SaveGame_10, bool K2Node_CustomEvent_bSuccess_10, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, bool Temp_bool_Variable_4, class USaveGame* Temp_object_Variable_4, class USaveGame* K2Node_CustomEvent_SaveGame_9, bool K2Node_CustomEvent_bSuccess_9, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, bool Temp_bool_Variable_5, class USaveGame* Temp_object_Variable_5, class USaveGame* K2Node_CustomEvent_SaveGame_8, bool K2Node_CustomEvent_bSuccess_8, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, bool Temp_bool_Variable_6, class USaveGame* Temp_object_Variable_6, class UCharacter_Charlie_C* K2Node_DynamicCast_AsCharacter_Charlie_1, bool K2Node_DynamicCast_bSuccess_4, class USaveGame* K2Node_CustomEvent_SaveGame_7, bool K2Node_CustomEvent_bSuccess_7, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, bool Temp_bool_Variable_7, class USaveGame* Temp_object_Variable_7, class USaveGame* K2Node_CustomEvent_SaveGame_6, bool K2Node_CustomEvent_bSuccess_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, bool Temp_bool_Variable_8, class USaveGame* Temp_object_Variable_8, class USaveGame* K2Node_CustomEvent_SaveGame_5, bool K2Node_CustomEvent_bSuccess_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_9, bool Temp_bool_Variable_9, class USaveGame* Temp_object_Variable_9, class UCharacter_Delta_C* K2Node_DynamicCast_AsCharacter_Delta_1, bool K2Node_DynamicCast_bSuccess_5, class USaveGame* K2Node_CustomEvent_SaveGame_4, bool K2Node_CustomEvent_bSuccess_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_10, bool Temp_bool_Variable_10, class USaveGame* Temp_object_Variable_10, class USaveGame* K2Node_CustomEvent_SaveGame_3, bool K2Node_CustomEvent_bSuccess_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_11, bool Temp_bool_Variable_11, class USaveGame* Temp_object_Variable_11, class USaveGame* K2Node_CustomEvent_SaveGame_2, bool K2Node_CustomEvent_bSuccess_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_12, bool Temp_bool_Variable_12, class USaveGame* Temp_object_Variable_12, class UCharacter_Echo_C* K2Node_DynamicCast_AsCharacter_Echo_1, bool K2Node_DynamicCast_bSuccess_6, class USaveGame* K2Node_CustomEvent_SaveGame_1, bool K2Node_CustomEvent_bSuccess_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_13, bool Temp_bool_Variable_13, class USaveGame* Temp_object_Variable_13, class USaveGame* K2Node_CustomEvent_SaveGame, bool K2Node_CustomEvent_bSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_14, bool Temp_bool_Variable_14, class USaveGame* Temp_object_Variable_14, class USaveGame* Temp_object_Variable_15, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_15, bool Temp_bool_Variable_15, class UCharacter* CallFunc_GetPlayerCharacter_ReturnValue, class UB_DemoCharacter_C* K2Node_DynamicCast_AsB_Demo_Character, bool K2Node_DynamicCast_bSuccess_7, class USaveGame* K2Node_CustomEvent_SaveGame_17, bool K2Node_CustomEvent_bSuccess_17, class UCharacter_Alpha_C* CallFunc_CreateSaveGameObject_ReturnValue, class UAsyncActionHandleSaveGame* CallFunc_AsyncLoadGameFromSlot_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_16, class UCharacter_Alpha_C* CallFunc_CreateSaveGameObject_ReturnValue_1, class UAsyncActionHandleSaveGame* CallFunc_AsyncLoadGameFromSlot_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, class UCharacter_Alpha_C* CallFunc_CreateSaveGameObject_ReturnValue_2, class UAsyncActionHandleSaveGame* CallFunc_AsyncSaveGameToSlot_ReturnValue, bool CallFunc_IsValid_ReturnValue_4, bool CallFunc_IsValid_ReturnValue_5, class USaveGame* Temp_object_Variable_16, bool Temp_bool_Variable_16, class UCharacter_Beta_C* K2Node_DynamicCast_AsCharacter_Beta_1, bool K2Node_DynamicCast_bSuccess_8, class UCharacter_Alpha_C* CallFunc_CreateSaveGameObject_ReturnValue_3, class UAsyncActionHandleSaveGame* CallFunc_AsyncSaveGameToSlot_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_6, bool CallFunc_IsValid_ReturnValue_7, class UCharacter* CallFunc_GetPlayerCharacter_ReturnValue_1, class UB_DemoCharacter_C* K2Node_DynamicCast_AsB_Demo_Character_1, bool K2Node_DynamicCast_bSuccess_9, double CallFunc_RandomFloatInRange_ReturnValue, double CallFunc_RandomFloatInRange_ReturnValue_1, double CallFunc_RandomFloatInRange_ReturnValue_2, double CallFunc_RandomFloatInRange_ReturnValue_3, double CallFunc_RandomFloatInRange_ReturnValue_4, class USaveGame* Temp_object_Variable_17, class UCharacter_Alpha_C* K2Node_DynamicCast_AsCharacter_Alpha, bool K2Node_DynamicCast_bSuccess_10, class UCharacter_Beta_C* CallFunc_CreateSaveGameObject_ReturnValue_4, class UAsyncActionHandleSaveGame* CallFunc_AsyncLoadGameFromSlot_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_8, bool CallFunc_IsValid_ReturnValue_9, bool Temp_bool_Variable_17, class UCharacter_Charlie_C* CallFunc_CreateSaveGameObject_ReturnValue_5, class UAsyncActionHandleSaveGame* CallFunc_AsyncLoadGameFromSlot_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_10, bool CallFunc_IsValid_ReturnValue_11, class USaveGame* K2Node_CustomEvent_SaveGame_18, bool K2Node_CustomEvent_bSuccess_18, class UCharacter_Delta_C* CallFunc_CreateSaveGameObject_ReturnValue_6, class UAsyncActionHandleSaveGame* CallFunc_AsyncLoadGameFromSlot_ReturnValue_4, bool CallFunc_IsValid_ReturnValue_12, bool CallFunc_IsValid_ReturnValue_13, class UCharacter_Echo_C* CallFunc_CreateSaveGameObject_ReturnValue_7, class UAsyncActionHandleSaveGame* CallFunc_AsyncLoadGameFromSlot_ReturnValue_5, bool CallFunc_IsValid_ReturnValue_14, bool CallFunc_IsValid_ReturnValue_15, class UCharacter* CallFunc_GetPlayerCharacter_ReturnValue_2, class UB_DemoCharacter_C* K2Node_DynamicCast_AsB_Demo_Character_2, bool K2Node_DynamicCast_bSuccess_11, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_17, class UCharacter_Beta_C* CallFunc_CreateSaveGameObject_ReturnValue_8, class UAsyncActionHandleSaveGame* CallFunc_AsyncLoadGameFromSlot_ReturnValue_6, bool CallFunc_IsValid_ReturnValue_16, bool CallFunc_IsValid_ReturnValue_17, double CallFunc_RandomFloatInRange_ReturnValue_5, class UCharacter_Beta_C* CallFunc_CreateSaveGameObject_ReturnValue_9, class UAsyncActionHandleSaveGame* CallFunc_AsyncSaveGameToSlot_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_18, bool CallFunc_IsValid_ReturnValue_19, class USaveGame* K2Node_CustomEvent_SaveGame_15, bool K2Node_CustomEvent_bSuccess_15, class UCharacter* CallFunc_GetPlayerCharacter_ReturnValue_3, class UB_DemoCharacter_C* K2Node_DynamicCast_AsB_Demo_Character_3, bool K2Node_DynamicCast_bSuccess_12, double CallFunc_RandomFloatInRange_ReturnValue_6, double CallFunc_RandomFloatInRange_ReturnValue_7, class UCharacter_Beta_C* CallFunc_CreateSaveGameObject_ReturnValue_10, class UAsyncActionHandleSaveGame* CallFunc_AsyncSaveGameToSlot_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_20, bool CallFunc_IsValid_ReturnValue_21, double CallFunc_RandomFloatInRange_ReturnValue_8, double CallFunc_RandomFloatInRange_ReturnValue_9, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_18, class UCharacter* CallFunc_GetPlayerCharacter_ReturnValue_4, class UB_DemoCharacter_C* K2Node_DynamicCast_AsB_Demo_Character_4, bool K2Node_DynamicCast_bSuccess_13, class UCharacter_Charlie_C* CallFunc_CreateSaveGameObject_ReturnValue_11, class UAsyncActionHandleSaveGame* CallFunc_AsyncLoadGameFromSlot_ReturnValue_7, bool CallFunc_IsValid_ReturnValue_22, bool CallFunc_IsValid_ReturnValue_23, double CallFunc_RandomFloatInRange_ReturnValue_10, class UCharacter_Charlie_C* CallFunc_CreateSaveGameObject_ReturnValue_12, bool Temp_bool_Has_Been_Initd_Variable, class UAsyncActionHandleSaveGame* CallFunc_AsyncSaveGameToSlot_ReturnValue_4, bool CallFunc_IsValid_ReturnValue_24, bool CallFunc_IsValid_ReturnValue_25, class UCharacter* CallFunc_GetPlayerCharacter_ReturnValue_5, class UB_DemoCharacter_C* K2Node_DynamicCast_AsB_Demo_Character_5, bool K2Node_DynamicCast_bSuccess_14, double CallFunc_RandomFloatInRange_ReturnValue_11, double CallFunc_RandomFloatInRange_ReturnValue_12, class UCharacter_Charlie_C* CallFunc_CreateSaveGameObject_ReturnValue_13, class UAsyncActionHandleSaveGame* CallFunc_AsyncSaveGameToSlot_ReturnValue_5, bool CallFunc_IsValid_ReturnValue_26, bool CallFunc_IsValid_ReturnValue_27, class USaveGame* Temp_object_Variable_18, class UCharacter_Alpha_C* K2Node_DynamicCast_AsCharacter_Alpha_1, bool K2Node_DynamicCast_bSuccess_15, double CallFunc_RandomFloatInRange_ReturnValue_13, double CallFunc_RandomFloatInRange_ReturnValue_14, class UCharacter* CallFunc_GetPlayerCharacter_ReturnValue_6, class UB_DemoCharacter_C* K2Node_DynamicCast_AsB_Demo_Character_6, bool K2Node_DynamicCast_bSuccess_16, bool Temp_bool_Variable_18, class UCharacter_Delta_C* CallFunc_CreateSaveGameObject_ReturnValue_14, class UAsyncActionHandleSaveGame* CallFunc_AsyncLoadGameFromSlot_ReturnValue_8, bool CallFunc_IsValid_ReturnValue_28, bool CallFunc_IsValid_ReturnValue_29, double CallFunc_RandomFloatInRange_ReturnValue_15, class UCharacter_Delta_C* CallFunc_CreateSaveGameObject_ReturnValue_15, bool Temp_bool_IsClosed_Variable, class UAsyncActionHandleSaveGame* CallFunc_AsyncSaveGameToSlot_ReturnValue_6, bool CallFunc_IsValid_ReturnValue_30, bool CallFunc_IsValid_ReturnValue_31, class USaveGame* Temp_object_Variable_19, bool Temp_bool_Variable_19, class UCharacter* CallFunc_GetPlayerCharacter_ReturnValue_7, class UB_DemoCharacter_C* K2Node_DynamicCast_AsB_Demo_Character_7, bool K2Node_DynamicCast_bSuccess_17, double CallFunc_RandomFloatInRange_ReturnValue_16, double CallFunc_RandomFloatInRange_ReturnValue_17, class UCharacter_Delta_C* CallFunc_CreateSaveGameObject_ReturnValue_16, class USaveGame* K2Node_CustomEvent_SaveGame_19, bool K2Node_CustomEvent_bSuccess_19, class UAsyncActionHandleSaveGame* CallFunc_AsyncSaveGameToSlot_ReturnValue_7, bool CallFunc_IsValid_ReturnValue_32, bool CallFunc_IsValid_ReturnValue_33, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_19, double CallFunc_RandomFloatInRange_ReturnValue_18, double CallFunc_RandomFloatInRange_ReturnValue_19, class UCharacter* CallFunc_GetPlayerCharacter_ReturnValue_8, class UB_DemoCharacter_C* K2Node_DynamicCast_AsB_Demo_Character_8, bool K2Node_DynamicCast_bSuccess_18, class UCharacter_Echo_C* CallFunc_CreateSaveGameObject_ReturnValue_17, class UAsyncActionHandleSaveGame* CallFunc_AsyncLoadGameFromSlot_ReturnValue_9, bool CallFunc_IsValid_ReturnValue_34, bool CallFunc_IsValid_ReturnValue_35, double CallFunc_RandomFloatInRange_ReturnValue_20, class UCharacter_Echo_C* CallFunc_CreateSaveGameObject_ReturnValue_18, class UAsyncActionHandleSaveGame* CallFunc_AsyncSaveGameToSlot_ReturnValue_8, bool CallFunc_IsValid_ReturnValue_36, bool CallFunc_IsValid_ReturnValue_37, class USaveGame* K2Node_CustomEvent_SaveGame_16, bool K2Node_CustomEvent_bSuccess_16, class UCharacter* CallFunc_GetPlayerCharacter_ReturnValue_9, class UB_DemoCharacter_C* K2Node_DynamicCast_AsB_Demo_Character_9, bool K2Node_DynamicCast_bSuccess_19, double CallFunc_RandomFloatInRange_ReturnValue_21, double CallFunc_RandomFloatInRange_ReturnValue_22, class UCharacter_Echo_C* CallFunc_CreateSaveGameObject_ReturnValue_19, class UAsyncActionHandleSaveGame* CallFunc_AsyncSaveGameToSlot_ReturnValue_9, bool CallFunc_IsValid_ReturnValue_38, bool CallFunc_IsValid_ReturnValue_39, double CallFunc_RandomFloatInRange_ReturnValue_23, double CallFunc_RandomFloatInRange_ReturnValue_24, float CallFunc_Delay_Duration_ImplicitCast, float CallFunc_Delay_Duration_ImplicitCast_1, float CallFunc_Delay_Duration_ImplicitCast_2, float CallFunc_Delay_Duration_ImplicitCast_3, float CallFunc_Delay_Duration_ImplicitCast_4, float CallFunc_Delay_Duration_ImplicitCast_5, float CallFunc_Delay_Duration_ImplicitCast_6, float CallFunc_Delay_Duration_ImplicitCast_7, float CallFunc_Delay_Duration_ImplicitCast_8, float CallFunc_Delay_Duration_ImplicitCast_9, float CallFunc_Delay_Duration_ImplicitCast_10, float CallFunc_Delay_Duration_ImplicitCast_11, float CallFunc_Delay_Duration_ImplicitCast_12, float CallFunc_Delay_Duration_ImplicitCast_13, float CallFunc_Delay_Duration_ImplicitCast_14, float CallFunc_Delay_Duration_ImplicitCast_15, float CallFunc_Delay_Duration_ImplicitCast_16, float CallFunc_Delay_Duration_ImplicitCast_17, float CallFunc_Delay_Duration_ImplicitCast_18, float CallFunc_Delay_Duration_ImplicitCast_19, float CallFunc_Delay_Duration_ImplicitCast_20, float CallFunc_Delay_Duration_ImplicitCast_21, float CallFunc_Delay_Duration_ImplicitCast_22, float CallFunc_Delay_Duration_ImplicitCast_23, float CallFunc_Delay_Duration_ImplicitCast_24)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CharacterPreSet_C", "ExecuteUbergraph_CharacterPreSet");

	Params::UCharacterPreSet_C_ExecuteUbergraph_CharacterPreSet_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_SaveGame_14 = K2Node_CustomEvent_SaveGame_14;
	Parms.K2Node_CustomEvent_bSuccess_14 = K2Node_CustomEvent_bSuccess_14;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.K2Node_DynamicCast_AsCharacter_Charlie = K2Node_DynamicCast_AsCharacter_Charlie;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CustomEvent_SaveGame_13 = K2Node_CustomEvent_SaveGame_13;
	Parms.K2Node_CustomEvent_bSuccess_13 = K2Node_CustomEvent_bSuccess_13;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.K2Node_DynamicCast_AsCharacter_Delta = K2Node_DynamicCast_AsCharacter_Delta;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CustomEvent_SaveGame_12 = K2Node_CustomEvent_SaveGame_12;
	Parms.K2Node_CustomEvent_bSuccess_12 = K2Node_CustomEvent_bSuccess_12;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.Temp_object_Variable_2 = Temp_object_Variable_2;
	Parms.K2Node_DynamicCast_AsCharacter_Echo = K2Node_DynamicCast_AsCharacter_Echo;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.K2Node_CustomEvent_SaveGame_11 = K2Node_CustomEvent_SaveGame_11;
	Parms.K2Node_CustomEvent_bSuccess_11 = K2Node_CustomEvent_bSuccess_11;
	Parms.Temp_bool_Variable_3 = Temp_bool_Variable_3;
	Parms.Temp_object_Variable_3 = Temp_object_Variable_3;
	Parms.K2Node_DynamicCast_AsCharacter_Beta = K2Node_DynamicCast_AsCharacter_Beta;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.K2Node_CustomEvent_SaveGame_10 = K2Node_CustomEvent_SaveGame_10;
	Parms.K2Node_CustomEvent_bSuccess_10 = K2Node_CustomEvent_bSuccess_10;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.Temp_bool_Variable_4 = Temp_bool_Variable_4;
	Parms.Temp_object_Variable_4 = Temp_object_Variable_4;
	Parms.K2Node_CustomEvent_SaveGame_9 = K2Node_CustomEvent_SaveGame_9;
	Parms.K2Node_CustomEvent_bSuccess_9 = K2Node_CustomEvent_bSuccess_9;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.Temp_bool_Variable_5 = Temp_bool_Variable_5;
	Parms.Temp_object_Variable_5 = Temp_object_Variable_5;
	Parms.K2Node_CustomEvent_SaveGame_8 = K2Node_CustomEvent_SaveGame_8;
	Parms.K2Node_CustomEvent_bSuccess_8 = K2Node_CustomEvent_bSuccess_8;
	Parms.K2Node_CreateDelegate_OutputDelegate_6 = K2Node_CreateDelegate_OutputDelegate_6;
	Parms.Temp_bool_Variable_6 = Temp_bool_Variable_6;
	Parms.Temp_object_Variable_6 = Temp_object_Variable_6;
	Parms.K2Node_DynamicCast_AsCharacter_Charlie_1 = K2Node_DynamicCast_AsCharacter_Charlie_1;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;
	Parms.K2Node_CustomEvent_SaveGame_7 = K2Node_CustomEvent_SaveGame_7;
	Parms.K2Node_CustomEvent_bSuccess_7 = K2Node_CustomEvent_bSuccess_7;
	Parms.K2Node_CreateDelegate_OutputDelegate_7 = K2Node_CreateDelegate_OutputDelegate_7;
	Parms.Temp_bool_Variable_7 = Temp_bool_Variable_7;
	Parms.Temp_object_Variable_7 = Temp_object_Variable_7;
	Parms.K2Node_CustomEvent_SaveGame_6 = K2Node_CustomEvent_SaveGame_6;
	Parms.K2Node_CustomEvent_bSuccess_6 = K2Node_CustomEvent_bSuccess_6;
	Parms.K2Node_CreateDelegate_OutputDelegate_8 = K2Node_CreateDelegate_OutputDelegate_8;
	Parms.Temp_bool_Variable_8 = Temp_bool_Variable_8;
	Parms.Temp_object_Variable_8 = Temp_object_Variable_8;
	Parms.K2Node_CustomEvent_SaveGame_5 = K2Node_CustomEvent_SaveGame_5;
	Parms.K2Node_CustomEvent_bSuccess_5 = K2Node_CustomEvent_bSuccess_5;
	Parms.K2Node_CreateDelegate_OutputDelegate_9 = K2Node_CreateDelegate_OutputDelegate_9;
	Parms.Temp_bool_Variable_9 = Temp_bool_Variable_9;
	Parms.Temp_object_Variable_9 = Temp_object_Variable_9;
	Parms.K2Node_DynamicCast_AsCharacter_Delta_1 = K2Node_DynamicCast_AsCharacter_Delta_1;
	Parms.K2Node_DynamicCast_bSuccess_5 = K2Node_DynamicCast_bSuccess_5;
	Parms.K2Node_CustomEvent_SaveGame_4 = K2Node_CustomEvent_SaveGame_4;
	Parms.K2Node_CustomEvent_bSuccess_4 = K2Node_CustomEvent_bSuccess_4;
	Parms.K2Node_CreateDelegate_OutputDelegate_10 = K2Node_CreateDelegate_OutputDelegate_10;
	Parms.Temp_bool_Variable_10 = Temp_bool_Variable_10;
	Parms.Temp_object_Variable_10 = Temp_object_Variable_10;
	Parms.K2Node_CustomEvent_SaveGame_3 = K2Node_CustomEvent_SaveGame_3;
	Parms.K2Node_CustomEvent_bSuccess_3 = K2Node_CustomEvent_bSuccess_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_11 = K2Node_CreateDelegate_OutputDelegate_11;
	Parms.Temp_bool_Variable_11 = Temp_bool_Variable_11;
	Parms.Temp_object_Variable_11 = Temp_object_Variable_11;
	Parms.K2Node_CustomEvent_SaveGame_2 = K2Node_CustomEvent_SaveGame_2;
	Parms.K2Node_CustomEvent_bSuccess_2 = K2Node_CustomEvent_bSuccess_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_12 = K2Node_CreateDelegate_OutputDelegate_12;
	Parms.Temp_bool_Variable_12 = Temp_bool_Variable_12;
	Parms.Temp_object_Variable_12 = Temp_object_Variable_12;
	Parms.K2Node_DynamicCast_AsCharacter_Echo_1 = K2Node_DynamicCast_AsCharacter_Echo_1;
	Parms.K2Node_DynamicCast_bSuccess_6 = K2Node_DynamicCast_bSuccess_6;
	Parms.K2Node_CustomEvent_SaveGame_1 = K2Node_CustomEvent_SaveGame_1;
	Parms.K2Node_CustomEvent_bSuccess_1 = K2Node_CustomEvent_bSuccess_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_13 = K2Node_CreateDelegate_OutputDelegate_13;
	Parms.Temp_bool_Variable_13 = Temp_bool_Variable_13;
	Parms.Temp_object_Variable_13 = Temp_object_Variable_13;
	Parms.K2Node_CustomEvent_SaveGame = K2Node_CustomEvent_SaveGame;
	Parms.K2Node_CustomEvent_bSuccess = K2Node_CustomEvent_bSuccess;
	Parms.K2Node_CreateDelegate_OutputDelegate_14 = K2Node_CreateDelegate_OutputDelegate_14;
	Parms.Temp_bool_Variable_14 = Temp_bool_Variable_14;
	Parms.Temp_object_Variable_14 = Temp_object_Variable_14;
	Parms.Temp_object_Variable_15 = Temp_object_Variable_15;
	Parms.K2Node_CreateDelegate_OutputDelegate_15 = K2Node_CreateDelegate_OutputDelegate_15;
	Parms.Temp_bool_Variable_15 = Temp_bool_Variable_15;
	Parms.CallFunc_GetPlayerCharacter_ReturnValue = CallFunc_GetPlayerCharacter_ReturnValue;
	Parms.K2Node_DynamicCast_AsB_Demo_Character = K2Node_DynamicCast_AsB_Demo_Character;
	Parms.K2Node_DynamicCast_bSuccess_7 = K2Node_DynamicCast_bSuccess_7;
	Parms.K2Node_CustomEvent_SaveGame_17 = K2Node_CustomEvent_SaveGame_17;
	Parms.K2Node_CustomEvent_bSuccess_17 = K2Node_CustomEvent_bSuccess_17;
	Parms.CallFunc_CreateSaveGameObject_ReturnValue = CallFunc_CreateSaveGameObject_ReturnValue;
	Parms.CallFunc_AsyncLoadGameFromSlot_ReturnValue = CallFunc_AsyncLoadGameFromSlot_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;
	Parms.K2Node_CreateDelegate_OutputDelegate_16 = K2Node_CreateDelegate_OutputDelegate_16;
	Parms.CallFunc_CreateSaveGameObject_ReturnValue_1 = CallFunc_CreateSaveGameObject_ReturnValue_1;
	Parms.CallFunc_AsyncLoadGameFromSlot_ReturnValue_1 = CallFunc_AsyncLoadGameFromSlot_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_CreateSaveGameObject_ReturnValue_2 = CallFunc_CreateSaveGameObject_ReturnValue_2;
	Parms.CallFunc_AsyncSaveGameToSlot_ReturnValue = CallFunc_AsyncSaveGameToSlot_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;
	Parms.CallFunc_IsValid_ReturnValue_5 = CallFunc_IsValid_ReturnValue_5;
	Parms.Temp_object_Variable_16 = Temp_object_Variable_16;
	Parms.Temp_bool_Variable_16 = Temp_bool_Variable_16;
	Parms.K2Node_DynamicCast_AsCharacter_Beta_1 = K2Node_DynamicCast_AsCharacter_Beta_1;
	Parms.K2Node_DynamicCast_bSuccess_8 = K2Node_DynamicCast_bSuccess_8;
	Parms.CallFunc_CreateSaveGameObject_ReturnValue_3 = CallFunc_CreateSaveGameObject_ReturnValue_3;
	Parms.CallFunc_AsyncSaveGameToSlot_ReturnValue_1 = CallFunc_AsyncSaveGameToSlot_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_6 = CallFunc_IsValid_ReturnValue_6;
	Parms.CallFunc_IsValid_ReturnValue_7 = CallFunc_IsValid_ReturnValue_7;
	Parms.CallFunc_GetPlayerCharacter_ReturnValue_1 = CallFunc_GetPlayerCharacter_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsB_Demo_Character_1 = K2Node_DynamicCast_AsB_Demo_Character_1;
	Parms.K2Node_DynamicCast_bSuccess_9 = K2Node_DynamicCast_bSuccess_9;
	Parms.CallFunc_RandomFloatInRange_ReturnValue = CallFunc_RandomFloatInRange_ReturnValue;
	Parms.CallFunc_RandomFloatInRange_ReturnValue_1 = CallFunc_RandomFloatInRange_ReturnValue_1;
	Parms.CallFunc_RandomFloatInRange_ReturnValue_2 = CallFunc_RandomFloatInRange_ReturnValue_2;
	Parms.CallFunc_RandomFloatInRange_ReturnValue_3 = CallFunc_RandomFloatInRange_ReturnValue_3;
	Parms.CallFunc_RandomFloatInRange_ReturnValue_4 = CallFunc_RandomFloatInRange_ReturnValue_4;
	Parms.Temp_object_Variable_17 = Temp_object_Variable_17;
	Parms.K2Node_DynamicCast_AsCharacter_Alpha = K2Node_DynamicCast_AsCharacter_Alpha;
	Parms.K2Node_DynamicCast_bSuccess_10 = K2Node_DynamicCast_bSuccess_10;
	Parms.CallFunc_CreateSaveGameObject_ReturnValue_4 = CallFunc_CreateSaveGameObject_ReturnValue_4;
	Parms.CallFunc_AsyncLoadGameFromSlot_ReturnValue_2 = CallFunc_AsyncLoadGameFromSlot_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_8 = CallFunc_IsValid_ReturnValue_8;
	Parms.CallFunc_IsValid_ReturnValue_9 = CallFunc_IsValid_ReturnValue_9;
	Parms.Temp_bool_Variable_17 = Temp_bool_Variable_17;
	Parms.CallFunc_CreateSaveGameObject_ReturnValue_5 = CallFunc_CreateSaveGameObject_ReturnValue_5;
	Parms.CallFunc_AsyncLoadGameFromSlot_ReturnValue_3 = CallFunc_AsyncLoadGameFromSlot_ReturnValue_3;
	Parms.CallFunc_IsValid_ReturnValue_10 = CallFunc_IsValid_ReturnValue_10;
	Parms.CallFunc_IsValid_ReturnValue_11 = CallFunc_IsValid_ReturnValue_11;
	Parms.K2Node_CustomEvent_SaveGame_18 = K2Node_CustomEvent_SaveGame_18;
	Parms.K2Node_CustomEvent_bSuccess_18 = K2Node_CustomEvent_bSuccess_18;
	Parms.CallFunc_CreateSaveGameObject_ReturnValue_6 = CallFunc_CreateSaveGameObject_ReturnValue_6;
	Parms.CallFunc_AsyncLoadGameFromSlot_ReturnValue_4 = CallFunc_AsyncLoadGameFromSlot_ReturnValue_4;
	Parms.CallFunc_IsValid_ReturnValue_12 = CallFunc_IsValid_ReturnValue_12;
	Parms.CallFunc_IsValid_ReturnValue_13 = CallFunc_IsValid_ReturnValue_13;
	Parms.CallFunc_CreateSaveGameObject_ReturnValue_7 = CallFunc_CreateSaveGameObject_ReturnValue_7;
	Parms.CallFunc_AsyncLoadGameFromSlot_ReturnValue_5 = CallFunc_AsyncLoadGameFromSlot_ReturnValue_5;
	Parms.CallFunc_IsValid_ReturnValue_14 = CallFunc_IsValid_ReturnValue_14;
	Parms.CallFunc_IsValid_ReturnValue_15 = CallFunc_IsValid_ReturnValue_15;
	Parms.CallFunc_GetPlayerCharacter_ReturnValue_2 = CallFunc_GetPlayerCharacter_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsB_Demo_Character_2 = K2Node_DynamicCast_AsB_Demo_Character_2;
	Parms.K2Node_DynamicCast_bSuccess_11 = K2Node_DynamicCast_bSuccess_11;
	Parms.K2Node_CreateDelegate_OutputDelegate_17 = K2Node_CreateDelegate_OutputDelegate_17;
	Parms.CallFunc_CreateSaveGameObject_ReturnValue_8 = CallFunc_CreateSaveGameObject_ReturnValue_8;
	Parms.CallFunc_AsyncLoadGameFromSlot_ReturnValue_6 = CallFunc_AsyncLoadGameFromSlot_ReturnValue_6;
	Parms.CallFunc_IsValid_ReturnValue_16 = CallFunc_IsValid_ReturnValue_16;
	Parms.CallFunc_IsValid_ReturnValue_17 = CallFunc_IsValid_ReturnValue_17;
	Parms.CallFunc_RandomFloatInRange_ReturnValue_5 = CallFunc_RandomFloatInRange_ReturnValue_5;
	Parms.CallFunc_CreateSaveGameObject_ReturnValue_9 = CallFunc_CreateSaveGameObject_ReturnValue_9;
	Parms.CallFunc_AsyncSaveGameToSlot_ReturnValue_2 = CallFunc_AsyncSaveGameToSlot_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_18 = CallFunc_IsValid_ReturnValue_18;
	Parms.CallFunc_IsValid_ReturnValue_19 = CallFunc_IsValid_ReturnValue_19;
	Parms.K2Node_CustomEvent_SaveGame_15 = K2Node_CustomEvent_SaveGame_15;
	Parms.K2Node_CustomEvent_bSuccess_15 = K2Node_CustomEvent_bSuccess_15;
	Parms.CallFunc_GetPlayerCharacter_ReturnValue_3 = CallFunc_GetPlayerCharacter_ReturnValue_3;
	Parms.K2Node_DynamicCast_AsB_Demo_Character_3 = K2Node_DynamicCast_AsB_Demo_Character_3;
	Parms.K2Node_DynamicCast_bSuccess_12 = K2Node_DynamicCast_bSuccess_12;
	Parms.CallFunc_RandomFloatInRange_ReturnValue_6 = CallFunc_RandomFloatInRange_ReturnValue_6;
	Parms.CallFunc_RandomFloatInRange_ReturnValue_7 = CallFunc_RandomFloatInRange_ReturnValue_7;
	Parms.CallFunc_CreateSaveGameObject_ReturnValue_10 = CallFunc_CreateSaveGameObject_ReturnValue_10;
	Parms.CallFunc_AsyncSaveGameToSlot_ReturnValue_3 = CallFunc_AsyncSaveGameToSlot_ReturnValue_3;
	Parms.CallFunc_IsValid_ReturnValue_20 = CallFunc_IsValid_ReturnValue_20;
	Parms.CallFunc_IsValid_ReturnValue_21 = CallFunc_IsValid_ReturnValue_21;
	Parms.CallFunc_RandomFloatInRange_ReturnValue_8 = CallFunc_RandomFloatInRange_ReturnValue_8;
	Parms.CallFunc_RandomFloatInRange_ReturnValue_9 = CallFunc_RandomFloatInRange_ReturnValue_9;
	Parms.K2Node_CreateDelegate_OutputDelegate_18 = K2Node_CreateDelegate_OutputDelegate_18;
	Parms.CallFunc_GetPlayerCharacter_ReturnValue_4 = CallFunc_GetPlayerCharacter_ReturnValue_4;
	Parms.K2Node_DynamicCast_AsB_Demo_Character_4 = K2Node_DynamicCast_AsB_Demo_Character_4;
	Parms.K2Node_DynamicCast_bSuccess_13 = K2Node_DynamicCast_bSuccess_13;
	Parms.CallFunc_CreateSaveGameObject_ReturnValue_11 = CallFunc_CreateSaveGameObject_ReturnValue_11;
	Parms.CallFunc_AsyncLoadGameFromSlot_ReturnValue_7 = CallFunc_AsyncLoadGameFromSlot_ReturnValue_7;
	Parms.CallFunc_IsValid_ReturnValue_22 = CallFunc_IsValid_ReturnValue_22;
	Parms.CallFunc_IsValid_ReturnValue_23 = CallFunc_IsValid_ReturnValue_23;
	Parms.CallFunc_RandomFloatInRange_ReturnValue_10 = CallFunc_RandomFloatInRange_ReturnValue_10;
	Parms.CallFunc_CreateSaveGameObject_ReturnValue_12 = CallFunc_CreateSaveGameObject_ReturnValue_12;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.CallFunc_AsyncSaveGameToSlot_ReturnValue_4 = CallFunc_AsyncSaveGameToSlot_ReturnValue_4;
	Parms.CallFunc_IsValid_ReturnValue_24 = CallFunc_IsValid_ReturnValue_24;
	Parms.CallFunc_IsValid_ReturnValue_25 = CallFunc_IsValid_ReturnValue_25;
	Parms.CallFunc_GetPlayerCharacter_ReturnValue_5 = CallFunc_GetPlayerCharacter_ReturnValue_5;
	Parms.K2Node_DynamicCast_AsB_Demo_Character_5 = K2Node_DynamicCast_AsB_Demo_Character_5;
	Parms.K2Node_DynamicCast_bSuccess_14 = K2Node_DynamicCast_bSuccess_14;
	Parms.CallFunc_RandomFloatInRange_ReturnValue_11 = CallFunc_RandomFloatInRange_ReturnValue_11;
	Parms.CallFunc_RandomFloatInRange_ReturnValue_12 = CallFunc_RandomFloatInRange_ReturnValue_12;
	Parms.CallFunc_CreateSaveGameObject_ReturnValue_13 = CallFunc_CreateSaveGameObject_ReturnValue_13;
	Parms.CallFunc_AsyncSaveGameToSlot_ReturnValue_5 = CallFunc_AsyncSaveGameToSlot_ReturnValue_5;
	Parms.CallFunc_IsValid_ReturnValue_26 = CallFunc_IsValid_ReturnValue_26;
	Parms.CallFunc_IsValid_ReturnValue_27 = CallFunc_IsValid_ReturnValue_27;
	Parms.Temp_object_Variable_18 = Temp_object_Variable_18;
	Parms.K2Node_DynamicCast_AsCharacter_Alpha_1 = K2Node_DynamicCast_AsCharacter_Alpha_1;
	Parms.K2Node_DynamicCast_bSuccess_15 = K2Node_DynamicCast_bSuccess_15;
	Parms.CallFunc_RandomFloatInRange_ReturnValue_13 = CallFunc_RandomFloatInRange_ReturnValue_13;
	Parms.CallFunc_RandomFloatInRange_ReturnValue_14 = CallFunc_RandomFloatInRange_ReturnValue_14;
	Parms.CallFunc_GetPlayerCharacter_ReturnValue_6 = CallFunc_GetPlayerCharacter_ReturnValue_6;
	Parms.K2Node_DynamicCast_AsB_Demo_Character_6 = K2Node_DynamicCast_AsB_Demo_Character_6;
	Parms.K2Node_DynamicCast_bSuccess_16 = K2Node_DynamicCast_bSuccess_16;
	Parms.Temp_bool_Variable_18 = Temp_bool_Variable_18;
	Parms.CallFunc_CreateSaveGameObject_ReturnValue_14 = CallFunc_CreateSaveGameObject_ReturnValue_14;
	Parms.CallFunc_AsyncLoadGameFromSlot_ReturnValue_8 = CallFunc_AsyncLoadGameFromSlot_ReturnValue_8;
	Parms.CallFunc_IsValid_ReturnValue_28 = CallFunc_IsValid_ReturnValue_28;
	Parms.CallFunc_IsValid_ReturnValue_29 = CallFunc_IsValid_ReturnValue_29;
	Parms.CallFunc_RandomFloatInRange_ReturnValue_15 = CallFunc_RandomFloatInRange_ReturnValue_15;
	Parms.CallFunc_CreateSaveGameObject_ReturnValue_15 = CallFunc_CreateSaveGameObject_ReturnValue_15;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.CallFunc_AsyncSaveGameToSlot_ReturnValue_6 = CallFunc_AsyncSaveGameToSlot_ReturnValue_6;
	Parms.CallFunc_IsValid_ReturnValue_30 = CallFunc_IsValid_ReturnValue_30;
	Parms.CallFunc_IsValid_ReturnValue_31 = CallFunc_IsValid_ReturnValue_31;
	Parms.Temp_object_Variable_19 = Temp_object_Variable_19;
	Parms.Temp_bool_Variable_19 = Temp_bool_Variable_19;
	Parms.CallFunc_GetPlayerCharacter_ReturnValue_7 = CallFunc_GetPlayerCharacter_ReturnValue_7;
	Parms.K2Node_DynamicCast_AsB_Demo_Character_7 = K2Node_DynamicCast_AsB_Demo_Character_7;
	Parms.K2Node_DynamicCast_bSuccess_17 = K2Node_DynamicCast_bSuccess_17;
	Parms.CallFunc_RandomFloatInRange_ReturnValue_16 = CallFunc_RandomFloatInRange_ReturnValue_16;
	Parms.CallFunc_RandomFloatInRange_ReturnValue_17 = CallFunc_RandomFloatInRange_ReturnValue_17;
	Parms.CallFunc_CreateSaveGameObject_ReturnValue_16 = CallFunc_CreateSaveGameObject_ReturnValue_16;
	Parms.K2Node_CustomEvent_SaveGame_19 = K2Node_CustomEvent_SaveGame_19;
	Parms.K2Node_CustomEvent_bSuccess_19 = K2Node_CustomEvent_bSuccess_19;
	Parms.CallFunc_AsyncSaveGameToSlot_ReturnValue_7 = CallFunc_AsyncSaveGameToSlot_ReturnValue_7;
	Parms.CallFunc_IsValid_ReturnValue_32 = CallFunc_IsValid_ReturnValue_32;
	Parms.CallFunc_IsValid_ReturnValue_33 = CallFunc_IsValid_ReturnValue_33;
	Parms.K2Node_CreateDelegate_OutputDelegate_19 = K2Node_CreateDelegate_OutputDelegate_19;
	Parms.CallFunc_RandomFloatInRange_ReturnValue_18 = CallFunc_RandomFloatInRange_ReturnValue_18;
	Parms.CallFunc_RandomFloatInRange_ReturnValue_19 = CallFunc_RandomFloatInRange_ReturnValue_19;
	Parms.CallFunc_GetPlayerCharacter_ReturnValue_8 = CallFunc_GetPlayerCharacter_ReturnValue_8;
	Parms.K2Node_DynamicCast_AsB_Demo_Character_8 = K2Node_DynamicCast_AsB_Demo_Character_8;
	Parms.K2Node_DynamicCast_bSuccess_18 = K2Node_DynamicCast_bSuccess_18;
	Parms.CallFunc_CreateSaveGameObject_ReturnValue_17 = CallFunc_CreateSaveGameObject_ReturnValue_17;
	Parms.CallFunc_AsyncLoadGameFromSlot_ReturnValue_9 = CallFunc_AsyncLoadGameFromSlot_ReturnValue_9;
	Parms.CallFunc_IsValid_ReturnValue_34 = CallFunc_IsValid_ReturnValue_34;
	Parms.CallFunc_IsValid_ReturnValue_35 = CallFunc_IsValid_ReturnValue_35;
	Parms.CallFunc_RandomFloatInRange_ReturnValue_20 = CallFunc_RandomFloatInRange_ReturnValue_20;
	Parms.CallFunc_CreateSaveGameObject_ReturnValue_18 = CallFunc_CreateSaveGameObject_ReturnValue_18;
	Parms.CallFunc_AsyncSaveGameToSlot_ReturnValue_8 = CallFunc_AsyncSaveGameToSlot_ReturnValue_8;
	Parms.CallFunc_IsValid_ReturnValue_36 = CallFunc_IsValid_ReturnValue_36;
	Parms.CallFunc_IsValid_ReturnValue_37 = CallFunc_IsValid_ReturnValue_37;
	Parms.K2Node_CustomEvent_SaveGame_16 = K2Node_CustomEvent_SaveGame_16;
	Parms.K2Node_CustomEvent_bSuccess_16 = K2Node_CustomEvent_bSuccess_16;
	Parms.CallFunc_GetPlayerCharacter_ReturnValue_9 = CallFunc_GetPlayerCharacter_ReturnValue_9;
	Parms.K2Node_DynamicCast_AsB_Demo_Character_9 = K2Node_DynamicCast_AsB_Demo_Character_9;
	Parms.K2Node_DynamicCast_bSuccess_19 = K2Node_DynamicCast_bSuccess_19;
	Parms.CallFunc_RandomFloatInRange_ReturnValue_21 = CallFunc_RandomFloatInRange_ReturnValue_21;
	Parms.CallFunc_RandomFloatInRange_ReturnValue_22 = CallFunc_RandomFloatInRange_ReturnValue_22;
	Parms.CallFunc_CreateSaveGameObject_ReturnValue_19 = CallFunc_CreateSaveGameObject_ReturnValue_19;
	Parms.CallFunc_AsyncSaveGameToSlot_ReturnValue_9 = CallFunc_AsyncSaveGameToSlot_ReturnValue_9;
	Parms.CallFunc_IsValid_ReturnValue_38 = CallFunc_IsValid_ReturnValue_38;
	Parms.CallFunc_IsValid_ReturnValue_39 = CallFunc_IsValid_ReturnValue_39;
	Parms.CallFunc_RandomFloatInRange_ReturnValue_23 = CallFunc_RandomFloatInRange_ReturnValue_23;
	Parms.CallFunc_RandomFloatInRange_ReturnValue_24 = CallFunc_RandomFloatInRange_ReturnValue_24;
	Parms.CallFunc_Delay_Duration_ImplicitCast = CallFunc_Delay_Duration_ImplicitCast;
	Parms.CallFunc_Delay_Duration_ImplicitCast_1 = CallFunc_Delay_Duration_ImplicitCast_1;
	Parms.CallFunc_Delay_Duration_ImplicitCast_2 = CallFunc_Delay_Duration_ImplicitCast_2;
	Parms.CallFunc_Delay_Duration_ImplicitCast_3 = CallFunc_Delay_Duration_ImplicitCast_3;
	Parms.CallFunc_Delay_Duration_ImplicitCast_4 = CallFunc_Delay_Duration_ImplicitCast_4;
	Parms.CallFunc_Delay_Duration_ImplicitCast_5 = CallFunc_Delay_Duration_ImplicitCast_5;
	Parms.CallFunc_Delay_Duration_ImplicitCast_6 = CallFunc_Delay_Duration_ImplicitCast_6;
	Parms.CallFunc_Delay_Duration_ImplicitCast_7 = CallFunc_Delay_Duration_ImplicitCast_7;
	Parms.CallFunc_Delay_Duration_ImplicitCast_8 = CallFunc_Delay_Duration_ImplicitCast_8;
	Parms.CallFunc_Delay_Duration_ImplicitCast_9 = CallFunc_Delay_Duration_ImplicitCast_9;
	Parms.CallFunc_Delay_Duration_ImplicitCast_10 = CallFunc_Delay_Duration_ImplicitCast_10;
	Parms.CallFunc_Delay_Duration_ImplicitCast_11 = CallFunc_Delay_Duration_ImplicitCast_11;
	Parms.CallFunc_Delay_Duration_ImplicitCast_12 = CallFunc_Delay_Duration_ImplicitCast_12;
	Parms.CallFunc_Delay_Duration_ImplicitCast_13 = CallFunc_Delay_Duration_ImplicitCast_13;
	Parms.CallFunc_Delay_Duration_ImplicitCast_14 = CallFunc_Delay_Duration_ImplicitCast_14;
	Parms.CallFunc_Delay_Duration_ImplicitCast_15 = CallFunc_Delay_Duration_ImplicitCast_15;
	Parms.CallFunc_Delay_Duration_ImplicitCast_16 = CallFunc_Delay_Duration_ImplicitCast_16;
	Parms.CallFunc_Delay_Duration_ImplicitCast_17 = CallFunc_Delay_Duration_ImplicitCast_17;
	Parms.CallFunc_Delay_Duration_ImplicitCast_18 = CallFunc_Delay_Duration_ImplicitCast_18;
	Parms.CallFunc_Delay_Duration_ImplicitCast_19 = CallFunc_Delay_Duration_ImplicitCast_19;
	Parms.CallFunc_Delay_Duration_ImplicitCast_20 = CallFunc_Delay_Duration_ImplicitCast_20;
	Parms.CallFunc_Delay_Duration_ImplicitCast_21 = CallFunc_Delay_Duration_ImplicitCast_21;
	Parms.CallFunc_Delay_Duration_ImplicitCast_22 = CallFunc_Delay_Duration_ImplicitCast_22;
	Parms.CallFunc_Delay_Duration_ImplicitCast_23 = CallFunc_Delay_Duration_ImplicitCast_23;
	Parms.CallFunc_Delay_Duration_ImplicitCast_24 = CallFunc_Delay_Duration_ImplicitCast_24;

	UObject::ProcessEvent(Func, &Parms);

}

}


