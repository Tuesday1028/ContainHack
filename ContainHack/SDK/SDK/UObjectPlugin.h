
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: CoreUObject

/// Struct /Script/UObjectPlugin.MyPluginStruct
/// Size: 0x0010 (0x000000 - 0x000010)
struct FMyPluginStruct
{ 
	SDK_UNDEFINED(16,2812) /* FString */               __um(TestString);                                           // 0x0000   (0x0010)  
};

/// Class /Script/UObjectPlugin.MyPluginObject
/// Size: 0x0010 (0x000028 - 0x000038)
class UMyPluginObject : public UObject
{ 
public:
	FMyPluginStruct                                    MyStruct;                                                   // 0x0028   (0x0010)  
};

