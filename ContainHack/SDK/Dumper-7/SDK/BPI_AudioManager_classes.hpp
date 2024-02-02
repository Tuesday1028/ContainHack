#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BPI_AudioManager.BPI_AudioManager_C
class UBPI_AudioManager_C : public UInterface
{
public:

	static class UClass* StaticClass();
	static class UBPI_AudioManager_C* GetDefaultObj();

	void UpdateCombatStatus(enum class E_Combat CombatStatus);
	void SetInside(bool bInside, double AmbientMultiplier, const struct FReverbSettings& ReverbSettings, class FName ReverbAreaName, double ReverbPriority);
	void UpdateTimeOfDay(double Time, enum class E_TimeOfDay Night_);
};

}


