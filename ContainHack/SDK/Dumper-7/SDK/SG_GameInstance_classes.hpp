#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass SG_GameInstance.SG_GameInstance_C
class USG_GameInstance_C : public UInterface
{
public:

	static class UClass* StaticClass();
	static class USG_GameInstance_C* GetDefaultObj();

	void IsNewGame(bool* bIsNewStarted);
	void RichPresence(const class FString& State, const class FString& Details, bool* Return);
	void LanguageSettings();
};

}


