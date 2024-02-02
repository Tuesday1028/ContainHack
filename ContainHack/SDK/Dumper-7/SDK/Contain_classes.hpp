#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x3C0 - 0x3B8)
// Class Contain.AIControllerBase
class UAIControllerBase : public UAIController
{
public:
	uint8                                        Pad_153D[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAIControllerBase* GetDefaultObj();

	void DeteriminAISightPerceptionViewPoint(struct FVector* OutLocation, struct FRotator* OutRotation);
	void AiPerceptionKonum(struct FVector* Lokasyon, struct FRotator* Rotasyon);
	struct FVector AiGetMeshLocation(struct FVector* Lokasyon);
};

// 0x0 (0x850 - 0x850)
// Class Contain.BasePlayerController
class UBasePlayerController : public UPlayerController
{
public:

	static class UClass* StaticClass();
	static class UBasePlayerController* GetDefaultObj();

};

// 0x8 (0x3C0 - 0x3B8)
// Class Contain.ContainAIController
class UContainAIController : public UAIController
{
public:
	uint8                                        TeamID;                                            // 0x3B8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1543[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UContainAIController* GetDefaultObj();

	void DeteriminAISightPerceptionViewPoint(struct FVector* OutLocation, struct FRotator* OutRotation);
};

// 0x0 (0x330 - 0x330)
// Class Contain.ContainGameModeBase
class UContainGameModeBase : public UGameModeBase
{
public:

	static class UClass* StaticClass();
	static class UContainGameModeBase* GetDefaultObj();

};

// 0x0 (0x850 - 0x850)
// Class Contain.ContainPlayerController
class UContainPlayerController : public UPlayerController
{
public:

	static class UClass* StaticClass();
	static class UContainPlayerController* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class Contain.CplusNetworkLibrary
class UCplusNetworkLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UCplusNetworkLibrary* GetDefaultObj();

	bool SetSightVisionAngle(class UAIController* Controller, float NewVisionAngle);
	bool SetSightRange(class UAIController* Controller, float NewSightRange);
	bool SetHearingRange(class UAIController* Controller, float NewHearingRange);
	class FString GetNetworkURL(class UObject* WorldContextObject);
};

// 0x8 (0x620 - 0x618)
// Class Contain.CPP_AICharacter
class UCPP_AICharacter : public UCharacter
{
public:
	uint8                                        Pad_1575[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UCPP_AICharacter* GetDefaultObj();

};

// 0x48 (0x660 - 0x618)
// Class Contain.CPP_ContainCharacter
class UCPP_ContainCharacter : public UCharacter
{
public:
	uint8                                        Pad_1584[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         Attack;                                            // 0x628(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1586[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  TargetBone;                                        // 0x62C(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ID;                                                // 0x634(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1588[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          ViewTargets;                                       // 0x640(0x10)(Edit, BlueprintVisible, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_158A[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UCPP_ContainCharacter* GetDefaultObj();

	void SetAnimState(bool Newbool);
	void NextViewTarget();
};

// 0x0 (0x1C0 - 0x1C0)
// Class Contain.CPP_ContainInstance
class UCPP_ContainInstance : public UGameInstance
{
public:

	static class UClass* StaticClass();
	static class UCPP_ContainInstance* GetDefaultObj();

	bool ServerTravel(class UObject* WorldContextObject, const class FString& MapUrl, bool Absolute, bool bShouldSkipGameNotify);
	void ClientTravel(class UObject* WorldContextObject, const class FString& Server, class UPlayerController* Controller);
};

}


