#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x30 - 0x30)
// BlueprintGeneratedClass ContextPlayer.ContextPlayer_C
class UContextPlayer_C : public UEnvQueryContext_BlueprintBase
{
public:

	static class UClass* StaticClass();
	static class UContextPlayer_C* GetDefaultObj();

	void ProvideActorsSet(class UObject* QuerierObject, class UActor* QuerierActor, TArray<class UActor*>* ResultingActorsSet, TArray<class UB_DemoCharacter_Child_C*>& CallFunc_GetAllActorsOfClass_OutActors);
};

}


