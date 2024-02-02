#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class Contain.AIControllerBase
// (Actor)

class UClass* UAIControllerBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AIControllerBase");

	return Clss;
}


// AIControllerBase Contain.Default__AIControllerBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UAIControllerBase* UAIControllerBase::GetDefaultObj()
{
	static class UAIControllerBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UAIControllerBase*>(UAIControllerBase::StaticClass()->DefaultObject);

	return Default;
}


// Function Contain.AIControllerBase.DeteriminAISightPerceptionViewPoint
// (Event, Public, HasOutParams, HasDefaults, BlueprintEvent, Const)
// Parameters:
// struct FVector                     OutLocation                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                    OutRotation                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

void UAIControllerBase::DeteriminAISightPerceptionViewPoint(struct FVector* OutLocation, struct FRotator* OutRotation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIControllerBase", "DeteriminAISightPerceptionViewPoint");

	Params::UAIControllerBase_DeteriminAISightPerceptionViewPoint_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (OutLocation != nullptr)
		*OutLocation = std::move(Parms.OutLocation);

	if (OutRotation != nullptr)
		*OutRotation = std::move(Parms.OutRotation);

}


// Function Contain.AIControllerBase.AiPerceptionKonum
// (Event, Public, HasOutParams, HasDefaults, BlueprintEvent, Const)
// Parameters:
// struct FVector                     Lokasyon                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                    Rotasyon                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

void UAIControllerBase::AiPerceptionKonum(struct FVector* Lokasyon, struct FRotator* Rotasyon)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIControllerBase", "AiPerceptionKonum");

	Params::UAIControllerBase_AiPerceptionKonum_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Lokasyon != nullptr)
		*Lokasyon = std::move(Parms.Lokasyon);

	if (Rotasyon != nullptr)
		*Rotasyon = std::move(Parms.Rotasyon);

}


// Function Contain.AIControllerBase.AiGetMeshLocation
// (Event, Public, HasOutParams, HasDefaults, BlueprintEvent, Const)
// Parameters:
// struct FVector                     Lokasyon                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector UAIControllerBase::AiGetMeshLocation(struct FVector* Lokasyon)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIControllerBase", "AiGetMeshLocation");

	Params::UAIControllerBase_AiGetMeshLocation_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Lokasyon != nullptr)
		*Lokasyon = std::move(Parms.Lokasyon);

	return Parms.ReturnValue;

}


// Class Contain.BasePlayerController
// (Actor, PlayerController)

class UClass* UBasePlayerController::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BasePlayerController");

	return Clss;
}


// BasePlayerController Contain.Default__BasePlayerController
// (Public, ClassDefaultObject, ArchetypeObject)

class UBasePlayerController* UBasePlayerController::GetDefaultObj()
{
	static class UBasePlayerController* Default = nullptr;

	if (!Default)
		Default = static_cast<UBasePlayerController*>(UBasePlayerController::StaticClass()->DefaultObject);

	return Default;
}


// Class Contain.ContainAIController
// (Actor)

class UClass* UContainAIController::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ContainAIController");

	return Clss;
}


// ContainAIController Contain.Default__ContainAIController
// (Public, ClassDefaultObject, ArchetypeObject)

class UContainAIController* UContainAIController::GetDefaultObj()
{
	static class UContainAIController* Default = nullptr;

	if (!Default)
		Default = static_cast<UContainAIController*>(UContainAIController::StaticClass()->DefaultObject);

	return Default;
}


// Function Contain.ContainAIController.DeteriminAISightPerceptionViewPoint
// (Event, Public, HasOutParams, HasDefaults, BlueprintEvent, Const)
// Parameters:
// struct FVector                     OutLocation                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                    OutRotation                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

void UContainAIController::DeteriminAISightPerceptionViewPoint(struct FVector* OutLocation, struct FRotator* OutRotation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ContainAIController", "DeteriminAISightPerceptionViewPoint");

	Params::UContainAIController_DeteriminAISightPerceptionViewPoint_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (OutLocation != nullptr)
		*OutLocation = std::move(Parms.OutLocation);

	if (OutRotation != nullptr)
		*OutRotation = std::move(Parms.OutRotation);

}


// Class Contain.ContainGameModeBase
// (Actor)

class UClass* UContainGameModeBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ContainGameModeBase");

	return Clss;
}


// ContainGameModeBase Contain.Default__ContainGameModeBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UContainGameModeBase* UContainGameModeBase::GetDefaultObj()
{
	static class UContainGameModeBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UContainGameModeBase*>(UContainGameModeBase::StaticClass()->DefaultObject);

	return Default;
}


// Class Contain.ContainPlayerController
// (Actor, PlayerController)

class UClass* UContainPlayerController::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ContainPlayerController");

	return Clss;
}


// ContainPlayerController Contain.Default__ContainPlayerController
// (Public, ClassDefaultObject, ArchetypeObject)

class UContainPlayerController* UContainPlayerController::GetDefaultObj()
{
	static class UContainPlayerController* Default = nullptr;

	if (!Default)
		Default = static_cast<UContainPlayerController*>(UContainPlayerController::StaticClass()->DefaultObject);

	return Default;
}


// Class Contain.CplusNetworkLibrary
// (None)

class UClass* UCplusNetworkLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CplusNetworkLibrary");

	return Clss;
}


// CplusNetworkLibrary Contain.Default__CplusNetworkLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UCplusNetworkLibrary* UCplusNetworkLibrary::GetDefaultObj()
{
	static class UCplusNetworkLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UCplusNetworkLibrary*>(UCplusNetworkLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function Contain.CplusNetworkLibrary.SetSightVisionAngle
// (Final, Native, Static, Private, BlueprintCallable)
// Parameters:
// class UAIController*               Controller                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              NewVisionAngle                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UCplusNetworkLibrary::SetSightVisionAngle(class UAIController* Controller, float NewVisionAngle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CplusNetworkLibrary", "SetSightVisionAngle");

	Params::UCplusNetworkLibrary_SetSightVisionAngle_Params Parms{};

	Parms.Controller = Controller;
	Parms.NewVisionAngle = NewVisionAngle;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Contain.CplusNetworkLibrary.SetSightRange
// (Final, Native, Static, Private, BlueprintCallable)
// Parameters:
// class UAIController*               Controller                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              NewSightRange                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UCplusNetworkLibrary::SetSightRange(class UAIController* Controller, float NewSightRange)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CplusNetworkLibrary", "SetSightRange");

	Params::UCplusNetworkLibrary_SetSightRange_Params Parms{};

	Parms.Controller = Controller;
	Parms.NewSightRange = NewSightRange;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Contain.CplusNetworkLibrary.SetHearingRange
// (Final, Native, Static, Private, BlueprintCallable)
// Parameters:
// class UAIController*               Controller                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              NewHearingRange                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UCplusNetworkLibrary::SetHearingRange(class UAIController* Controller, float NewHearingRange)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CplusNetworkLibrary", "SetHearingRange");

	Params::UCplusNetworkLibrary_SetHearingRange_Params Parms{};

	Parms.Controller = Controller;
	Parms.NewHearingRange = NewHearingRange;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Contain.CplusNetworkLibrary.GetNetworkURL
// (Final, Native, Static, Private, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UCplusNetworkLibrary::GetNetworkURL(class UObject* WorldContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CplusNetworkLibrary", "GetNetworkURL");

	Params::UCplusNetworkLibrary_GetNetworkURL_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class Contain.CPP_AICharacter
// (Actor, Pawn)

class UClass* UCPP_AICharacter::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CPP_AICharacter");

	return Clss;
}


// CPP_AICharacter Contain.Default__CPP_AICharacter
// (Public, ClassDefaultObject, ArchetypeObject)

class UCPP_AICharacter* UCPP_AICharacter::GetDefaultObj()
{
	static class UCPP_AICharacter* Default = nullptr;

	if (!Default)
		Default = static_cast<UCPP_AICharacter*>(UCPP_AICharacter::StaticClass()->DefaultObject);

	return Default;
}


// Class Contain.CPP_ContainCharacter
// (Actor, Pawn)

class UClass* UCPP_ContainCharacter::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CPP_ContainCharacter");

	return Clss;
}


// CPP_ContainCharacter Contain.Default__CPP_ContainCharacter
// (Public, ClassDefaultObject, ArchetypeObject)

class UCPP_ContainCharacter* UCPP_ContainCharacter::GetDefaultObj()
{
	static class UCPP_ContainCharacter* Default = nullptr;

	if (!Default)
		Default = static_cast<UCPP_ContainCharacter*>(UCPP_ContainCharacter::StaticClass()->DefaultObject);

	return Default;
}


// Function Contain.CPP_ContainCharacter.SetAnimState
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               Newbool                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCPP_ContainCharacter::SetAnimState(bool Newbool)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CPP_ContainCharacter", "SetAnimState");

	Params::UCPP_ContainCharacter_SetAnimState_Params Parms{};

	Parms.Newbool = Newbool;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Contain.CPP_ContainCharacter.NextViewTarget
// (Final, Native, Protected, BlueprintCallable)
// Parameters:

void UCPP_ContainCharacter::NextViewTarget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CPP_ContainCharacter", "NextViewTarget");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class Contain.CPP_ContainInstance
// (None)

class UClass* UCPP_ContainInstance::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CPP_ContainInstance");

	return Clss;
}


// CPP_ContainInstance Contain.Default__CPP_ContainInstance
// (Public, ClassDefaultObject, ArchetypeObject)

class UCPP_ContainInstance* UCPP_ContainInstance::GetDefaultObj()
{
	static class UCPP_ContainInstance* Default = nullptr;

	if (!Default)
		Default = static_cast<UCPP_ContainInstance*>(UCPP_ContainInstance::StaticClass()->DefaultObject);

	return Default;
}


// Function Contain.CPP_ContainInstance.ServerTravel
// (Final, BlueprintAuthorityOnly, Native, Protected, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      MapUrl                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               Absolute                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bShouldSkipGameNotify                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UCPP_ContainInstance::ServerTravel(class UObject* WorldContextObject, const class FString& MapUrl, bool Absolute, bool bShouldSkipGameNotify)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CPP_ContainInstance", "ServerTravel");

	Params::UCPP_ContainInstance_ServerTravel_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.MapUrl = MapUrl;
	Parms.Absolute = Absolute;
	Parms.bShouldSkipGameNotify = bShouldSkipGameNotify;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Contain.CPP_ContainInstance.ClientTravel
// (Final, BlueprintAuthorityOnly, Native, Protected, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Server                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPlayerController*           Controller                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCPP_ContainInstance::ClientTravel(class UObject* WorldContextObject, const class FString& Server, class UPlayerController* Controller)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CPP_ContainInstance", "ClientTravel");

	Params::UCPP_ContainInstance_ClientTravel_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.Server = Server;
	Parms.Controller = Controller;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}

}


