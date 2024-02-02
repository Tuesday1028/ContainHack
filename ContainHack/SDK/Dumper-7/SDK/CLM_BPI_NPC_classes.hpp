#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass CLM_BPI_NPC.CLM_BPI_NPC_C
class UCLM_BPI_NPC_C : public UInterface
{
public:

	static class UClass* StaticClass();
	static class UCLM_BPI_NPC_C* GetDefaultObj();

	void CrouchOut(int32 IlkIndex, int32 SonIndex, bool* IsSee);
	void PickDoorEvent(bool Pick, bool* Unlock);
	void GetLocation(struct FVector* CharacterLoc);
	void GetisDutyEnabled(bool* DutyEnabled);
	void GetNextLocation(struct FVector* Location);
};

}


