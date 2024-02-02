#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class ArchVisCharacter.ArchVisCharacter
// (Actor, Pawn)

class UClass* UArchVisCharacter::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ArchVisCharacter");

	return Clss;
}


// ArchVisCharacter ArchVisCharacter.Default__ArchVisCharacter
// (Public, ClassDefaultObject, ArchetypeObject)

class UArchVisCharacter* UArchVisCharacter::GetDefaultObj()
{
	static class UArchVisCharacter* Default = nullptr;

	if (!Default)
		Default = static_cast<UArchVisCharacter*>(UArchVisCharacter::StaticClass()->DefaultObject);

	return Default;
}


// Class ArchVisCharacter.ArchVisCharMovementComponent
// (None)

class UClass* UArchVisCharMovementComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ArchVisCharMovementComponent");

	return Clss;
}


// ArchVisCharMovementComponent ArchVisCharacter.Default__ArchVisCharMovementComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UArchVisCharMovementComponent* UArchVisCharMovementComponent::GetDefaultObj()
{
	static class UArchVisCharMovementComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UArchVisCharMovementComponent*>(UArchVisCharMovementComponent::StaticClass()->DefaultObject);

	return Default;
}

}


