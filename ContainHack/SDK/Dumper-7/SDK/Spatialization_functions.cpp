#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class Spatialization.ITDSpatializationSourceSettings
// (None)

class UClass* UITDSpatializationSourceSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ITDSpatializationSourceSettings");

	return Clss;
}


// ITDSpatializationSourceSettings Spatialization.Default__ITDSpatializationSourceSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UITDSpatializationSourceSettings* UITDSpatializationSourceSettings::GetDefaultObj()
{
	static class UITDSpatializationSourceSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UITDSpatializationSourceSettings*>(UITDSpatializationSourceSettings::StaticClass()->DefaultObject);

	return Default;
}

}


