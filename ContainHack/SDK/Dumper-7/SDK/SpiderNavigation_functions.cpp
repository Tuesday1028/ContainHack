#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class SpiderNavigation.SpiderNavGridBuilder
// (Actor)

class UClass* USpiderNavGridBuilder::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SpiderNavGridBuilder");

	return Clss;
}


// SpiderNavGridBuilder SpiderNavigation.Default__SpiderNavGridBuilder
// (Public, ClassDefaultObject, ArchetypeObject)

class USpiderNavGridBuilder* USpiderNavGridBuilder::GetDefaultObj()
{
	static class USpiderNavGridBuilder* Default = nullptr;

	if (!Default)
		Default = static_cast<USpiderNavGridBuilder*>(USpiderNavGridBuilder::StaticClass()->DefaultObject);

	return Default;
}


// Function SpiderNavigation.SpiderNavGridBuilder.SaveGrid
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void USpiderNavGridBuilder::SaveGrid()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpiderNavGridBuilder", "SaveGrid");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function SpiderNavigation.SpiderNavGridBuilder.DrawDebugRelations
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void USpiderNavGridBuilder::DrawDebugRelations()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpiderNavGridBuilder", "DrawDebugRelations");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function SpiderNavigation.SpiderNavGridBuilder.BuildGrid
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 USpiderNavGridBuilder::BuildGrid()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpiderNavGridBuilder", "BuildGrid");

	Params::USpiderNavGridBuilder_BuildGrid_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class SpiderNavigation.SpiderNavGridSaveGame
// (None)

class UClass* USpiderNavGridSaveGame::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SpiderNavGridSaveGame");

	return Clss;
}


// SpiderNavGridSaveGame SpiderNavigation.Default__SpiderNavGridSaveGame
// (Public, ClassDefaultObject, ArchetypeObject)

class USpiderNavGridSaveGame* USpiderNavGridSaveGame::GetDefaultObj()
{
	static class USpiderNavGridSaveGame* Default = nullptr;

	if (!Default)
		Default = static_cast<USpiderNavGridSaveGame*>(USpiderNavGridSaveGame::StaticClass()->DefaultObject);

	return Default;
}


// Class SpiderNavigation.SpiderNavGridTracer
// (Actor)

class UClass* USpiderNavGridTracer::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SpiderNavGridTracer");

	return Clss;
}


// SpiderNavGridTracer SpiderNavigation.Default__SpiderNavGridTracer
// (Public, ClassDefaultObject, ArchetypeObject)

class USpiderNavGridTracer* USpiderNavGridTracer::GetDefaultObj()
{
	static class USpiderNavGridTracer* Default = nullptr;

	if (!Default)
		Default = static_cast<USpiderNavGridTracer*>(USpiderNavGridTracer::StaticClass()->DefaultObject);

	return Default;
}


// Class SpiderNavigation.SpiderNavigation
// (Actor)

class UClass* USpiderNavigation::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SpiderNavigation");

	return Clss;
}


// SpiderNavigation SpiderNavigation.Default__SpiderNavigation
// (Public, ClassDefaultObject, ArchetypeObject)

class USpiderNavigation* USpiderNavigation::GetDefaultObj()
{
	static class USpiderNavigation* Default = nullptr;

	if (!Default)
		Default = static_cast<USpiderNavigation*>(USpiderNavigation::StaticClass()->DefaultObject);

	return Default;
}


// Function SpiderNavigation.SpiderNavigation.LoadGrid
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USpiderNavigation::LoadGrid()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpiderNavigation", "LoadGrid");

	Params::USpiderNavigation_LoadGrid_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SpiderNavigation.SpiderNavigation.GetNavNodesCount
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 USpiderNavigation::GetNavNodesCount()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpiderNavigation", "GetNavNodesCount");

	Params::USpiderNavigation_GetNavNodesCount_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SpiderNavigation.SpiderNavigation.FindPath
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                     Start                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     End                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bFoundCompletePath                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FVector>             ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<struct FVector> USpiderNavigation::FindPath(const struct FVector& Start, const struct FVector& End, bool* bFoundCompletePath)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpiderNavigation", "FindPath");

	Params::USpiderNavigation_FindPath_Params Parms{};

	Parms.Start = Start;
	Parms.End = End;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bFoundCompletePath != nullptr)
		*bFoundCompletePath = Parms.bFoundCompletePath;

	return Parms.ReturnValue;

}


// Function SpiderNavigation.SpiderNavigation.FindNextLocationAndNormal
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                     CurrentLocation                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     TargetLocation                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     NextLocation                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Normal                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USpiderNavigation::FindNextLocationAndNormal(const struct FVector& CurrentLocation, const struct FVector& TargetLocation, struct FVector* NextLocation, struct FVector* Normal)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpiderNavigation", "FindNextLocationAndNormal");

	Params::USpiderNavigation_FindNextLocationAndNormal_Params Parms{};

	Parms.CurrentLocation = CurrentLocation;
	Parms.TargetLocation = TargetLocation;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (NextLocation != nullptr)
		*NextLocation = std::move(Parms.NextLocation);

	if (Normal != nullptr)
		*Normal = std::move(Parms.Normal);

	return Parms.ReturnValue;

}


// Function SpiderNavigation.SpiderNavigation.FindClosestNodeNormal
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                     Location                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector USpiderNavigation::FindClosestNodeNormal(const struct FVector& Location)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpiderNavigation", "FindClosestNodeNormal");

	Params::USpiderNavigation_FindClosestNodeNormal_Params Parms{};

	Parms.Location = Location;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SpiderNavigation.SpiderNavigation.FindClosestNodeLocation
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                     Location                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector USpiderNavigation::FindClosestNodeLocation(const struct FVector& Location)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpiderNavigation", "FindClosestNodeLocation");

	Params::USpiderNavigation_FindClosestNodeLocation_Params Parms{};

	Parms.Location = Location;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SpiderNavigation.SpiderNavigation.DrawDebugRelations
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void USpiderNavigation::DrawDebugRelations()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpiderNavigation", "DrawDebugRelations");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class SpiderNavigation.SpiderNavPoint
// (Actor)

class UClass* USpiderNavPoint::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SpiderNavPoint");

	return Clss;
}


// SpiderNavPoint SpiderNavigation.Default__SpiderNavPoint
// (Public, ClassDefaultObject, ArchetypeObject)

class USpiderNavPoint* USpiderNavPoint::GetDefaultObj()
{
	static class USpiderNavPoint* Default = nullptr;

	if (!Default)
		Default = static_cast<USpiderNavPoint*>(USpiderNavPoint::StaticClass()->DefaultObject);

	return Default;
}


// Class SpiderNavigation.SpiderNavPointEdge
// (Actor)

class UClass* USpiderNavPointEdge::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SpiderNavPointEdge");

	return Clss;
}


// SpiderNavPointEdge SpiderNavigation.Default__SpiderNavPointEdge
// (Public, ClassDefaultObject, ArchetypeObject)

class USpiderNavPointEdge* USpiderNavPointEdge::GetDefaultObj()
{
	static class USpiderNavPointEdge* Default = nullptr;

	if (!Default)
		Default = static_cast<USpiderNavPointEdge*>(USpiderNavPointEdge::StaticClass()->DefaultObject);

	return Default;
}

}


