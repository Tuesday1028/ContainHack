#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass FL_SteamCloud.FL_SteamCloud_C
class UFL_SteamCloud_C : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UFL_SteamCloud_C* GetDefaultObj();

	void SteamCloudDownload(const class FString& SaveName, class UObject* __WorldContext, const class FString& CallFunc_GetProjectSavedDirectory_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, int32 CallFunc_GetFileSize_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, TArray<uint8>& CallFunc_FileRead_Buffer, int32 CallFunc_FileRead_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, bool CallFunc_WriteBytesToFile_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, const class FString& CallFunc_Concat_StrStr_ReturnValue_5);
	void SteamCloudUpload(const class FString& SaveName, class UObject* __WorldContext, const class FString& CallFunc_GetProjectSavedDirectory_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, const class FString& CallFunc_Concat_StrStr_ReturnValue_5, TArray<uint8>& CallFunc_ReadFileToBytes_ReturnValue, bool CallFunc_FileWrite_ReturnValue);
};

}


