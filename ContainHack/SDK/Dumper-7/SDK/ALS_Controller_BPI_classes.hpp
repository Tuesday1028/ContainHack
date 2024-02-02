#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass ALS_Controller_BPI.ALS_Controller_BPI_C
class UALS_Controller_BPI_C : public UInterface
{
public:

	static class UClass* StaticClass();
	static class UALS_Controller_BPI_C* GetDefaultObj();

	void BPI_Get_DebugInfo(class UCharacter** DebugFocusCharacter, bool* DebugView, bool* ShowHUD, bool* ShowTraces, bool* ShowDebugShapes, bool* ShowLayerColors, bool* Slomo, bool* ShowCharacterInfo);
};

}


