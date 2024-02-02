
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/MobilePatchingUtils.MobileInstalledContent
/// Size: 0x0020 (0x000028 - 0x000048)
class UMobileInstalledContent : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x20];                                      // 0x0028   (0x0020)  MISSED


	/// Functions
	// Function /Script/MobilePatchingUtils.MobileInstalledContent.Mount
	// bool Mount(int32_t PakOrder, FString MountPoint);                                                                     // [0x1df2040] Final|Native|Public|BlueprintCallable 
	// Function /Script/MobilePatchingUtils.MobileInstalledContent.GetInstalledContentSize
	// float GetInstalledContentSize();                                                                                      // [0x1df1e00] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/MobilePatchingUtils.MobileInstalledContent.GetDiskFreeSpace
	// float GetDiskFreeSpace();                                                                                             // [0x1df1bc0] Final|Native|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/MobilePatchingUtils.MobilePendingContent
/// Size: 0x0040 (0x000048 - 0x000088)
class UMobilePendingContent : public UMobileInstalledContent
{ 
public:
	unsigned char                                      UnknownData00_1[0x40];                                      // 0x0048   (0x0040)  MISSED


	/// Functions
	// Function /Script/MobilePatchingUtils.MobilePendingContent.StartInstall
	// void StartInstall(FDelegateProperty OnSucceeded, FDelegateProperty OnFailed);                                         // [0x1df2310] Final|Native|Public|BlueprintCallable 
	// Function /Script/MobilePatchingUtils.MobilePendingContent.GetTotalDownloadedSize
	// float GetTotalDownloadedSize();                                                                                       // [0x1df1fc0] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/MobilePatchingUtils.MobilePendingContent.GetRequiredDiskSpace
	// float GetRequiredDiskSpace();                                                                                         // [0x1df1e60] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/MobilePatchingUtils.MobilePendingContent.GetInstallProgress
	// float GetInstallProgress();                                                                                           // [0x1df1d10] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/MobilePatchingUtils.MobilePendingContent.GetDownloadStatusText
	// FText GetDownloadStatusText();                                                                                        // [0x1df1c80] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/MobilePatchingUtils.MobilePendingContent.GetDownloadSpeed
	// float GetDownloadSpeed();                                                                                             // [0x1df1c20] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/MobilePatchingUtils.MobilePendingContent.GetDownloadSize
	// float GetDownloadSize();                                                                                              // [0x1df1bf0] Final|Native|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/MobilePatchingUtils.MobilePatchingLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UMobilePatchingLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/MobilePatchingUtils.MobilePatchingLibrary.RequestContent
	// void RequestContent(FString RemoteManifestURL, FString CloudURL, FString InstallDirectory, FDelegateProperty OnSucceeded, FDelegateProperty OnFailed); // [0x1df2130] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MobilePatchingUtils.MobilePatchingLibrary.HasActiveWiFiConnection
	// bool HasActiveWiFiConnection();                                                                                       // [0x1df2020] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/MobilePatchingUtils.MobilePatchingLibrary.GetSupportedPlatformNames
	// TArray<FString> GetSupportedPlatformNames();                                                                          // [0x1df1ec0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/MobilePatchingUtils.MobilePatchingLibrary.GetInstalledContent
	// class UMobileInstalledContent* GetInstalledContent(FString InstallDirectory);                                         // [0x1df1d60] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/MobilePatchingUtils.MobilePatchingLibrary.GetActiveDeviceProfileName
	// FString GetActiveDeviceProfileName();                                                                                 // [0x1df1b30] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
};

