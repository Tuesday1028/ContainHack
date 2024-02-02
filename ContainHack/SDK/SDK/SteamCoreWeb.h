
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: CoreUObject
/// dependency: DeveloperSettings
/// dependency: Engine

/// Enum /Script/SteamCoreWeb.ESubsystemWeb
/// Size: 0x27
enum class ESubsystemWeb : uint8_t
{
	ESubsystemWeb__SteamCoreWeb                                                      = 0,
	ESubsystemWeb__Apps                                                              = 1,
	ESubsystemWeb__Broadcast                                                         = 2,
	ESubsystemWeb__CheatReporting                                                    = 3,
	ESubsystemWeb__Community                                                         = 4,
	ESubsystemWeb__Econ                                                              = 5,
	ESubsystemWeb__EconMarket                                                        = 6,
	ESubsystemWeb__Economy                                                           = 7,
	ESubsystemWeb__GameInventory                                                     = 8,
	ESubsystemWeb__GameNotifications                                                 = 9,
	ESubsystemWeb__GameServers                                                       = 10,
	ESubsystemWeb__GameServerStats                                                   = 11,
	ESubsystemWeb__Inventory                                                         = 12,
	ESubsystemWeb__LobbyMatchmaking                                                  = 13,
	ESubsystemWeb__Leaderboards                                                      = 14,
	ESubsystemWeb__MicroTxn                                                          = 15,
	ESubsystemWeb__News                                                              = 16,
	ESubsystemWeb__PlayerService                                                     = 17,
	ESubsystemWeb__PublishedFile                                                     = 18,
	ESubsystemWeb__PublishedItemSearch                                               = 19,
	ESubsystemWeb__PublishedItemVoting                                               = 20,
	ESubsystemWeb__RemoteStorage                                                     = 21,
	ESubsystemWeb__User                                                              = 22,
	ESubsystemWeb__UserAuth                                                          = 23,
	ESubsystemWeb__UserStats                                                         = 24,
	ESubsystemWeb__Workshop                                                          = 25,
	ESubsystemWeb__ESubsystemWeb_MAX                                                 = 26
};

/// Enum /Script/SteamCoreWeb.ESteamValueType
/// Size: 0x04
enum class ESteamValueType : uint8_t
{
	ESteamValueType__STRING                                                          = 0,
	ESteamValueType__NUMBER                                                          = 1,
	ESteamValueType__BOOL                                                            = 2,
	ESteamValueType__ESteamValueType_MAX                                             = 3
};

/// Enum /Script/SteamCoreWeb.ESteamJsonResult
/// Size: 0x03
enum class ESteamJsonResult : uint8_t
{
	ESteamJsonResult__Found                                                          = 0,
	ESteamJsonResult__NotFound                                                       = 1,
	ESteamJsonResult__ESteamJsonResult_MAX                                           = 2
};

/// Enum /Script/SteamCoreWeb.ESteamCoreWebLobbyType
/// Size: 0x05
enum class ESteamCoreWebLobbyType : uint8_t
{
	ESteamCoreWebLobbyType__Private                                                  = 0,
	ESteamCoreWebLobbyType__FriendsOnly                                              = 1,
	ESteamCoreWebLobbyType__TypePublic                                               = 2,
	ESteamCoreWebLobbyType__TypeInvisible                                            = 3,
	ESteamCoreWebLobbyType__ESteamCoreWebLobbyType_MAX                               = 4
};

/// Enum /Script/SteamCoreWeb.EVanityUrlType
/// Size: 0x04
enum class EVanityUrlType : uint8_t
{
	EVanityUrlType__Individual                                                       = 0,
	EVanityUrlType__Group                                                            = 1,
	EVanityUrlType__OfficialGameGroup                                                = 2,
	EVanityUrlType__EVanityUrlType_MAX                                               = 3
};

/// Class /Script/SteamCoreWeb.SteamCoreWeb
/// Size: 0x0000 (0x000028 - 0x000028)
class USteamCoreWeb : public UObject
{ 
public:
};

/// Class /Script/SteamCoreWeb.SteamCoreWebSubsystem
/// Size: 0x0018 (0x000030 - 0x000048)
class USteamCoreWebSubsystem : public UGameInstanceSubsystem
{ 
public:
	unsigned char                                      UnknownData00_1[0x18];                                      // 0x0030   (0x0018)  MISSED
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncAction
/// Size: 0x0028 (0x000030 - 0x000058)
class USteamCoreWebAsyncAction : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,2765) /* FMulticastInlineDelegate */ __um(OnCallback);                                        // 0x0030   (0x0010)  
	unsigned char                                      UnknownData00_6[0x18];                                      // 0x0040   (0x0018)  MISSED


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncAction.HandleCallback
	// void HandleCallback(FString Data, bool bWasSuccessful);                                                               // [0x1625e90] Native|Public        
};

/// Class /Script/SteamCoreWeb.SteamCoreWebSettings
/// Size: 0x0040 (0x000038 - 0x000078)
class USteamCoreWebSettings : public UDeveloperSettings
{ 
public:
	float                                              AsyncTaskTimeout;                                           // 0x0038   (0x0004)  
	int32_t                                            DisabledSubsystems;                                         // 0x003C   (0x0004)  
	bool                                               bDebugging;                                                 // 0x0040   (0x0001)  
	bool                                               bDevMode;                                                   // 0x0041   (0x0001)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x0042   (0x0006)  MISSED
	SDK_UNDEFINED(16,2766) /* FString */               __um(Key);                                                  // 0x0048   (0x0010)  
	int32_t                                            AppID;                                                      // 0x0058   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x005C   (0x0004)  MISSED
	SDK_UNDEFINED(16,2767) /* FString */               __um(DevSteamID);                                           // 0x0060   (0x0010)  
	bool                                               bSandboxMode;                                               // 0x0070   (0x0001)  
	unsigned char                                      UnknownData02_6[0x7];                                       // 0x0071   (0x0007)  MISSED
};

/// Class /Script/SteamCoreWeb.SteamWebUtilities
/// Size: 0x0000 (0x000028 - 0x000028)
class USteamWebUtilities : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamWebUtilities.ParseJson
	// bool ParseJson(FString JsonString, TArray<FSteamCoreJson>& Data);                                                     // [0x1625f80] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.SteamWebUtilities.GetProjectKey
	// FString GetProjectKey();                                                                                              // [0x1625770] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/SteamCoreWeb.SteamWebUtilities.GetProjectAppID
	// int32_t GetProjectAppID();                                                                                            // [0x1625740] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/SteamCoreWeb.SteamWebUtilities.GetDevSteamID
	// FString GetDevSteamID();                                                                                              // [0x16253c0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/SteamCoreWeb.SteamWebUtilities.FindJsonStrings
	// void FindJsonStrings(FString JsonString, FString Key, TArray<FString>& Values, ESteamJsonResult& Result);             // [0x1623c20] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.SteamWebUtilities.FindJsonString
	// void FindJsonString(FString JsonString, FString Key, FString& Value, ESteamJsonResult& Result);                       // [0x1623a30] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.SteamWebUtilities.FindJsonNumbers
	// void FindJsonNumbers(FString JsonString, FString Key, TArray<int32_t>& Values, ESteamJsonResult& Result);             // [0x1623840] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.SteamWebUtilities.FindJsonNumber
	// void FindJsonNumber(FString JsonString, FString Key, int32_t& Value, ESteamJsonResult& Result);                       // [0x1623670] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.SteamWebUtilities.FindJsonBools
	// void FindJsonBools(FString JsonString, FString Key, TArray<bool>& bValues, ESteamJsonResult& Result);                 // [0x1623480] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.SteamWebUtilities.FindJsonBool
	// void FindJsonBool(FString JsonString, FString Key, bool& bValue, ESteamJsonResult& Result);                           // [0x16232b0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.WebApps
/// Size: 0x0000 (0x000048 - 0x000048)
class UWebApps : public USteamCoreWebSubsystem
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.WebApps.UpToDateCheck
	// void UpToDateCheck(FDelegateProperty& Callback, int32_t AppID, int32_t Version);                                      // [0x1628470] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebApps.SetAppBuildLive
	// void SetAppBuildLive(FDelegateProperty& Callback, FString Key, int32_t AppID, int32_t BuildID, FString BetaKey, FString Description); // [0x1627ca0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebApps.GetServersAtAddress
	// void GetServersAtAddress(FDelegateProperty& Callback, FString Addr);                                                  // [0x1625c00] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebApps.GetServerList
	// void GetServerList(FDelegateProperty& Callback, FString Key, FString Filter, int32_t Limit);                          // [0x16257f0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebApps.GetPlayersBanned
	// void GetPlayersBanned(FDelegateProperty& Callback, FString Key, int32_t AppID);                                       // [0x1625440] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebApps.GetCheatingReports
	// void GetCheatingReports(FDelegateProperty& Callback, FString Key, int32_t AppID, int32_t TimeBegin, int32_t TimeEnd, bool bIncludeReports, bool bIncludeBans, int32_t ReportidMin); // [0x1624a30] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebApps.GetAppList
	// void GetAppList(FDelegateProperty& Callback, FString Key);                                                            // [0x16247a0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebApps.GetAppDepotVersions
	// void GetAppDepotVersions(FDelegateProperty& Callback, FString Key, int32_t AppID);                                    // [0x16244a0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebApps.GetAppBuilds
	// void GetAppBuilds(FDelegateProperty& Callback, FString Key, int32_t AppID, int32_t Count);                            // [0x1624130] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebApps.GetAppBetas
	// void GetAppBetas(FDelegateProperty& Callback, FString Key, int32_t AppID);                                            // [0x1623e30] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.SteamCoreAppsAsyncActionGetAppBetas
/// Size: 0x0000 (0x000058 - 0x000058)
class USteamCoreAppsAsyncActionGetAppBetas : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreAppsAsyncActionGetAppBetas.GetAppBetasAsync
	// class USteamCoreAppsAsyncActionGetAppBetas* GetAppBetasAsync(class UObject* WorldContextObject, FString Key, int32_t AppID); // [0x1623fc0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.SteamCoreAppsAsyncActionGetAppBuilds
/// Size: 0x0000 (0x000058 - 0x000058)
class USteamCoreAppsAsyncActionGetAppBuilds : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreAppsAsyncActionGetAppBuilds.GetAppBuildsAsync
	// class USteamCoreAppsAsyncActionGetAppBuilds* GetAppBuildsAsync(class UObject* WorldContextObject, FString Key, int32_t AppID, int32_t Count); // [0x1624300] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.SteamCoreAppsAsyncActionGetAppDepotVersions
/// Size: 0x0000 (0x000058 - 0x000058)
class USteamCoreAppsAsyncActionGetAppDepotVersions : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreAppsAsyncActionGetAppDepotVersions.GetAppDepotVersionsAsync
	// class USteamCoreAppsAsyncActionGetAppDepotVersions* GetAppDepotVersionsAsync(class UObject* WorldContextObject, FString Key, int32_t AppID); // [0x1624630] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.SteamCoreAppsAsyncActionGetAppList
/// Size: 0x0000 (0x000058 - 0x000058)
class USteamCoreAppsAsyncActionGetAppList : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreAppsAsyncActionGetAppList.GetAppListAsync
	// class USteamCoreAppsAsyncActionGetAppList* GetAppListAsync(class UObject* WorldContextObject, FString Key);           // [0x1624900] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.SteamCoreAppsAsyncActionGetCheatingReports
/// Size: 0x0000 (0x000058 - 0x000058)
class USteamCoreAppsAsyncActionGetCheatingReports : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreAppsAsyncActionGetCheatingReports.GetCheatingReportsAsync
	// class USteamCoreAppsAsyncActionGetCheatingReports* GetCheatingReportsAsync(class UObject* WorldContextObject, FString Key, int32_t AppID, int32_t TimeBegin, int32_t TimeEnd, bool bIncludeReports, bool bIncludeBans, int32_t ReportidMin); // [0x16250f0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.SteamCoreAppsAsyncActionGetPlayersBanned
/// Size: 0x0000 (0x000058 - 0x000058)
class USteamCoreAppsAsyncActionGetPlayersBanned : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreAppsAsyncActionGetPlayersBanned.GetPlayersBannedAsync
	// class USteamCoreAppsAsyncActionGetPlayersBanned* GetPlayersBannedAsync(class UObject* WorldContextObject, FString Key, int32_t AppID); // [0x16255d0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.SteamCoreAppsAsyncActionGetServerList
/// Size: 0x0000 (0x000058 - 0x000058)
class USteamCoreAppsAsyncActionGetServerList : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreAppsAsyncActionGetServerList.GetServerListAsync
	// class USteamCoreAppsAsyncActionGetServerList* GetServerListAsync(class UObject* WorldContextObject, FString Key, FString Filter, int32_t Limit); // [0x1625a10] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.SteamCoreAppsAsyncActionGetServersAtAddress
/// Size: 0x0000 (0x000058 - 0x000058)
class USteamCoreAppsAsyncActionGetServersAtAddress : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreAppsAsyncActionGetServersAtAddress.GetServersAtAddressAsync
	// class USteamCoreAppsAsyncActionGetServersAtAddress* GetServersAtAddressAsync(class UObject* WorldContextObject, FString Addr); // [0x1625d60] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.SteamCoreAppsAsyncActionSetAppBuildLive
/// Size: 0x0000 (0x000058 - 0x000058)
class USteamCoreAppsAsyncActionSetAppBuildLive : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreAppsAsyncActionSetAppBuildLive.SetAppBuildLiveAsync
	// class USteamCoreAppsAsyncActionSetAppBuildLive* SetAppBuildLiveAsync(class UObject* WorldContextObject, FString Key, int32_t AppID, int32_t BuildID, FString BetaKey, FString Description); // [0x1627f90] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.SteamCoreAppsAsyncActionUpToDateCheck
/// Size: 0x0000 (0x000058 - 0x000058)
class USteamCoreAppsAsyncActionUpToDateCheck : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreAppsAsyncActionUpToDateCheck.UpToDateCheckAsync
	// class USteamCoreAppsAsyncActionUpToDateCheck* UpToDateCheckAsync(class UObject* WorldContextObject, int32_t AppID, int32_t Version); // [0x16285a0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.WebBroadcastService
/// Size: 0x0000 (0x000048 - 0x000048)
class UWebBroadcastService : public USteamCoreWebSubsystem
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.WebBroadcastService.PostGameDataFrame
	// void PostGameDataFrame(FDelegateProperty& Callback, FString Key, int32_t AppID, FString SteamID, FString BroadcastId, FString FrameData); // [0x16260c0] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionPostGameDataFrame
/// Size: 0x0000 (0x000058 - 0x000058)
class USteamCoreWebAsyncActionPostGameDataFrame : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionPostGameDataFrame.PostGameDataFrameAsync
	// class USteamCoreWebAsyncActionPostGameDataFrame* PostGameDataFrameAsync(class UObject* WorldContextObject, FString Key, int32_t AppID, FString SteamID, FString BroadcastId, FString FrameData); // [0x1626400] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.WebCheatReporting
/// Size: 0x0000 (0x000048 - 0x000048)
class UWebCheatReporting : public USteamCoreWebSubsystem
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.WebCheatReporting.StartSecureMultiplayerSession
	// void StartSecureMultiplayerSession(FDelegateProperty& Callback, FString Key, FString SteamID, int32_t AppID);         // [0x1628250] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebCheatReporting.RequestVacStatusForUser
	// void RequestVacStatusForUser(FDelegateProperty& Callback, FString Key, FString SteamID, int32_t AppID, FString SessionID); // [0x16279f0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebCheatReporting.RequestPlayerGameBan
	// void RequestPlayerGameBan(FDelegateProperty& Callback, FString Key, FString SteamID, int32_t AppID, FString ReportID, FString CheatDescription, int32_t Duration, bool bDelayBan); // [0x1627620] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebCheatReporting.ReportPlayerCheating
	// void ReportPlayerCheating(FDelegateProperty& Callback, FString Key, int32_t AppID, FString SteamID, FString SteamIdReporter, FString AppData, bool bHeuristic, bool bDetection, bool bPlayerReport, bool bNoReportID, int32_t GameMode, int32_t SuspicionStartTime, int32_t Severity); // [0x16270d0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebCheatReporting.ReportCheatData
	// void ReportCheatData(FDelegateProperty& Callback, FString Key, FString SteamID, int32_t AppID, FString PathAndFileName, FString WebCheatURL, FString TimeNow, FString TimeStarted, FString TimeStopped, FString CheatName, int32_t GameProcessId, int32_t CheatProcessId, FString CheatParam1, FString CheatParam2); // [0x1626930] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebCheatReporting.RemovePlayerGameBan
	// void RemovePlayerGameBan(FDelegateProperty& Callback, FString Key, FString SteamID, int32_t AppID);                   // [0x1626710] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebCheatReporting.GetCheatingReports
	// void GetCheatingReports(FDelegateProperty& Callback, FString Key, int32_t AppID, int32_t TimeEnd, int32_t TimeBegin, FString ReportidMin, bool bIncludeReports, bool bIncludeBans, FString SteamID); // [0x1624d20] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebCheatReporting.EndSecureMultiplayerSession
	// void EndSecureMultiplayerSession(FDelegateProperty& Callback, FString Key, FString SteamID, int32_t AppID, FString SessionID); // [0x1623000] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionReportPlayerCheating
/// Size: 0x0000 (0x000058 - 0x000058)
class USteamCoreWebAsyncActionReportPlayerCheating : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionReportPlayerCheating.ReportPlayerCheatingAsync
	// class USteamCoreWebAsyncActionReportPlayerCheating* ReportPlayerCheatingAsync(class UObject* WorldContextObject, FString Key, int32_t AppID, FString SteamID, FString SteamIdReporter, FString AppData, bool bHeuristic, bool bDetection, bool bPlayerReport, bool bNoReportID, int32_t GameMode, int32_t SuspicionStartTime, int32_t Severity); // [0x162f250] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionRequestPlayerGameBan
/// Size: 0x0000 (0x000058 - 0x000058)
class USteamCoreWebAsyncActionRequestPlayerGameBan : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionRequestPlayerGameBan.RequestPlayerGameBanAsync
	// class USteamCoreWebAsyncActionRequestPlayerGameBan* RequestPlayerGameBanAsync(class UObject* WorldContextObject, FString Key, FString SteamID, int32_t AppID, FString ReportID, FString CheatDescription, int32_t Duration, bool bDelayBan); // [0x162f770] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionRemovePlayerGameBan
/// Size: 0x0000 (0x000058 - 0x000058)
class USteamCoreWebAsyncActionRemovePlayerGameBan : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionRemovePlayerGameBan.RemovePlayerGameBanAsync
	// class USteamCoreWebAsyncActionRemovePlayerGameBan* RemovePlayerGameBanAsync(class UObject* WorldContextObject, FString Key, FString SteamID, int32_t AppID); // [0x162e8f0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetCheatingReports
/// Size: 0x0000 (0x000058 - 0x000058)
class USteamCoreWebAsyncActionGetCheatingReports : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetCheatingReports.GetCheatingReportsAsync
	// class USteamCoreWebAsyncActionGetCheatingReports* GetCheatingReportsAsync(class UObject* WorldContextObject, FString Key, int32_t AppID, int32_t TimeEnd, int32_t TimeBegin, FString ReportidMin, bool bIncludeReports, bool bIncludeBans, FString SteamID); // [0x162c560] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionReportCheatData
/// Size: 0x0000 (0x000058 - 0x000058)
class USteamCoreWebAsyncActionReportCheatData : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionReportCheatData.ReportCheatDataAsync
	// class USteamCoreWebAsyncActionReportCheatData* ReportCheatDataAsync(class UObject* WorldContextObject, FString Key, FString SteamID, int32_t AppID, FString PathAndFileName, FString WebCheatURL, FString TimeNow, FString TimeStarted, FString TimeStopped, FString CheatName, int32_t GameProcessId, int32_t CheatProcessId, FString CheatParam1, FString CheatParam2); // [0x162eae0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionRequestVacStatusForUser
/// Size: 0x0000 (0x000058 - 0x000058)
class USteamCoreWebAsyncActionRequestVacStatusForUser : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionRequestVacStatusForUser.RequestVacStatusForUserAsync
	// class USteamCoreWebAsyncActionRequestVacStatusForUser* RequestVacStatusForUserAsync(class UObject* WorldContextObject, FString Key, FString SteamID, int32_t AppID, FString SessionID); // [0x162fb20] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionStartSecureMultiplayerSession
/// Size: 0x0000 (0x000058 - 0x000058)
class USteamCoreWebAsyncActionStartSecureMultiplayerSession : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionStartSecureMultiplayerSession.StartSecureMultiplayerSessionAsync
	// class USteamCoreWebAsyncActionStartSecureMultiplayerSession* StartSecureMultiplayerSessionAsync(class UObject* WorldContextObject, FString Key, FString SteamID, int32_t AppID); // [0x162fda0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionEndSecureMultiplayerSession
/// Size: 0x0000 (0x000058 - 0x000058)
class USteamCoreWebAsyncActionEndSecureMultiplayerSession : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionEndSecureMultiplayerSession.EndSecureMultiplayerSessionAsync
	// class USteamCoreWebAsyncActionEndSecureMultiplayerSession* EndSecureMultiplayerSessionAsync(class UObject* WorldContextObject, FString Key, FString SteamID, int32_t AppID, FString SessionID); // [0x162b3a0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.WebEconMarketService
/// Size: 0x0000 (0x000048 - 0x000048)
class UWebEconMarketService : public USteamCoreWebSubsystem
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.WebEconMarketService.GetPopular
	// void GetPopular(FDelegateProperty& Callback, FString Key, FString Language, int32_t Rows, int32_t Start, int32_t FilterAppId, int32_t ECurrency); // [0x162cc90] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebEconMarketService.GetMarketEligibility
	// void GetMarketEligibility(FDelegateProperty& Callback, FString Key, FString SteamID);                                 // [0x162c900] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebEconMarketService.GetAssetID
	// void GetAssetID(FDelegateProperty& Callback, FString Key, int32_t AppID, FString ListingId);                          // [0x162c150] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebEconMarketService.CancelAppListingsForUser
	// void CancelAppListingsForUser(FDelegateProperty& Callback, FString Key, int32_t AppID, FString SteamID, bool bSynchronous); // [0x162a7f0] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetMarketEligibility
/// Size: 0x0000 (0x000058 - 0x000058)
class USteamCoreWebAsyncActionGetMarketEligibility : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetMarketEligibility.GetMarketEligibilityAsync
	// class USteamCoreWebAsyncActionGetMarketEligibility* GetMarketEligibilityAsync(class UObject* WorldContextObject, FString Key, FString SteamID); // [0x162cae0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionCancelAppListingsForUser
/// Size: 0x0000 (0x000058 - 0x000058)
class USteamCoreWebAsyncActionCancelAppListingsForUser : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionCancelAppListingsForUser.CancelAppListingsForUserAsync
	// class USteamCoreWebAsyncActionCancelAppListingsForUser* CancelAppListingsForUserAsync(class UObject* WorldContextObject, FString Key, int32_t AppID, FString SteamID, bool bSynchronous); // [0x162aa50] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetAssetID
/// Size: 0x0000 (0x000058 - 0x000058)
class USteamCoreWebAsyncActionGetAssetID : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetAssetID.GetAssetIDAsync
	// class USteamCoreWebAsyncActionGetAssetID* GetAssetIDAsync(class UObject* WorldContextObject, FString Key, int32_t AppID, FString ListingId); // [0x162c370] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetPopular
/// Size: 0x0000 (0x000058 - 0x000058)
class USteamCoreWebAsyncActionGetPopular : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetPopular.GetPopularAsync
	// class USteamCoreWebAsyncActionGetPopular* GetPopularAsync(class UObject* WorldContextObject, FString Key, FString Language, int32_t Rows, int32_t Start, int32_t FilterAppId, int32_t ECurrency); // [0x162cf80] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.WebEconService
/// Size: 0x0000 (0x000048 - 0x000048)
class UWebEconService : public USteamCoreWebSubsystem
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.WebEconService.GetTradeOffersSummary
	// void GetTradeOffersSummary(FDelegateProperty& Callback, FString Key, int32_t TimeLastVisit);                          // [0x162e5f0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebEconService.GetTradeOffers
	// void GetTradeOffers(FDelegateProperty& Callback, FString Key, bool bGetSentOffers, bool bGetReceivedOffers, bool bGetDescriptions, FString Language, bool bActiveOnly, bool bHistoricalOnly, int32_t TimeHistoricalCutoff); // [0x162def0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebEconService.GetTradeOffer
	// void GetTradeOffer(FDelegateProperty& Callback, FString Key, FString TradeOfferId, FString Language);                 // [0x162da40] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebEconService.GetTradeHistory
	// void GetTradeHistory(FDelegateProperty& Callback, FString Key, int32_t MaxTrades, int32_t StartAfterTime, FString StartAfterTradeId, bool bNavigatingBack, bool bGetDescriptions, FString Language, bool bIncludeFailed, bool bIncludeTotal); // [0x162d240] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebEconService.FlushInventoryCache
	// void FlushInventoryCache(FDelegateProperty& Callback, FString Key, FString SteamID, int32_t AppID, FString ContextID); // [0x162bc20] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebEconService.FlushContextCache
	// void FlushContextCache(FDelegateProperty& Callback, FString Key, int32_t AppID);                                      // [0x162b920] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebEconService.FlushAssetAppearanceCache
	// void FlushAssetAppearanceCache(FDelegateProperty& Callback, FString Key, int32_t AppID);                              // [0x162b620] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebEconService.DeclineTradeOffer
	// void DeclineTradeOffer(FDelegateProperty& Callback, FString Key, FString TradeOfferId);                               // [0x162b010] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebEconService.CancelTradeOffer
	// void CancelTradeOffer(FDelegateProperty& Callback, FString Key, FString TradeOfferId);                                // [0x162ac80] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetTradeHistory
/// Size: 0x0000 (0x000058 - 0x000058)
class USteamCoreWebAsyncActionGetTradeHistory : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetTradeHistory.GetTradeHistoryAsync
	// class USteamCoreWebAsyncActionGetTradeHistory* GetTradeHistoryAsync(class UObject* WorldContextObject, FString Key, int32_t MaxTrades, int32_t StartAfterTime, FString StartAfterTradeId, bool bNavigatingBack, bool bGetDescriptions, FString Language, bool bIncludeFailed, bool bIncludeTotal); // [0x162d650] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionFlushInventoryCache
/// Size: 0x0000 (0x000058 - 0x000058)
class USteamCoreWebAsyncActionFlushInventoryCache : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionFlushInventoryCache.FlushInventoryCacheAsync
	// class USteamCoreWebAsyncActionFlushInventoryCache* FlushInventoryCacheAsync(class UObject* WorldContextObject, FString Key, FString SteamID, int32_t AppID, FString ContextID); // [0x162bed0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionFlushAssetAppearanceCache
/// Size: 0x0000 (0x000058 - 0x000058)
class USteamCoreWebAsyncActionFlushAssetAppearanceCache : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionFlushAssetAppearanceCache.FlushAssetAppearanceCacheAsync
	// class USteamCoreWebAsyncActionFlushAssetAppearanceCache* FlushAssetAppearanceCacheAsync(class UObject* WorldContextObject, FString Key, int32_t AppID); // [0x162b7b0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionFlushContextCache
/// Size: 0x0000 (0x000058 - 0x000058)
class USteamCoreWebAsyncActionFlushContextCache : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionFlushContextCache.FlushContextCacheAsync
	// class USteamCoreWebAsyncActionFlushContextCache* FlushContextCacheAsync(class UObject* WorldContextObject, FString Key, int32_t AppID); // [0x162bab0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetTradeOffers
/// Size: 0x0000 (0x000058 - 0x000058)
class USteamCoreWebAsyncActionGetTradeOffers : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetTradeOffers.GetTradeOffersAsync
	// class USteamCoreWebAsyncActionGetTradeOffers* GetTradeOffersAsync(class UObject* WorldContextObject, FString Key, bool bGetSentOffers, bool bGetReceivedOffers, bool bGetDescriptions, FString Language, bool bActiveOnly, bool bHistoricalOnly, int32_t TimeHistoricalCutoff); // [0x162e280] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetTradeOffer
/// Size: 0x0000 (0x000058 - 0x000058)
class USteamCoreWebAsyncActionGetTradeOffer : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetTradeOffer.GetTradeOfferAsync
	// class USteamCoreWebAsyncActionGetTradeOffer* GetTradeOfferAsync(class UObject* WorldContextObject, FString Key, FString TradeOfferId, FString Language); // [0x162dcb0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetTradeOffersSummary
/// Size: 0x0000 (0x000058 - 0x000058)
class USteamCoreWebAsyncActionGetTradeOffersSummary : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetTradeOffersSummary.GetTradeOffersSummaryAsync
	// class USteamCoreWebAsyncActionGetTradeOffersSummary* GetTradeOffersSummaryAsync(class UObject* WorldContextObject, FString Key, int32_t TimeLastVisit); // [0x162e780] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionDeclineTradeOffer
/// Size: 0x0000 (0x000058 - 0x000058)
class USteamCoreWebAsyncActionDeclineTradeOffer : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionDeclineTradeOffer.DeclineTradeOfferAsync
	// class USteamCoreWebAsyncActionDeclineTradeOffer* DeclineTradeOfferAsync(class UObject* WorldContextObject, FString Key, FString TradeOfferId); // [0x162b1f0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionCancelTradeOffer
/// Size: 0x0000 (0x000058 - 0x000058)
class USteamCoreWebAsyncActionCancelTradeOffer : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionCancelTradeOffer.CancelTradeOfferAsync
	// class USteamCoreWebAsyncActionCancelTradeOffer* CancelTradeOfferAsync(class UObject* WorldContextObject, FString Key, FString TradeOfferId); // [0x162ae60] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.WebGameInventory
/// Size: 0x0000 (0x000048 - 0x000048)
class UWebGameInventory : public USteamCoreWebSubsystem
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.WebGameInventory.UpdateItemDefs
	// void UpdateItemDefs();                                                                                                // [0x15a0090] Final|Native|Public|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebGameInventory.SupportGetAssetHistory
	// void SupportGetAssetHistory(FDelegateProperty& Callback, FString Key, int32_t AppID, FString AssetId, FString ContextID); // [0x16377b0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebGameInventory.HistoryExecuteCommands
	// void HistoryExecuteCommands(FDelegateProperty& Callback, FString Key, int32_t AppID, FString SteamID, FString ContextID, int32_t ActorId); // [0x1636860] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebGameInventory.GetUserHistory
	// void GetUserHistory(FDelegateProperty& Callback, FString Key, int32_t AppID, FString SteamID, FString ContextID, int32_t StartTime, int32_t EndTime); // [0x1635f60] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebGameInventory.GetHistoryCommandDetails
	// void GetHistoryCommandDetails(FDelegateProperty& Callback, FString Key, int32_t AppID, FString SteamID, FString Command, FString ContextID, FString Arguments); // [0x1634880] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetHistoryCommandDetails
/// Size: 0x0000 (0x000058 - 0x000058)
class USteamCoreWebAsyncActionGetHistoryCommandDetails : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetHistoryCommandDetails.GetHistoryCommandDetailsAsync
	// class USteamCoreWebAsyncActionGetHistoryCommandDetails* GetHistoryCommandDetailsAsync(class UObject* WorldContextObject, FString Key, int32_t AppID, FString SteamID, FString Command, FString ContextID, FString Arguments); // [0x1634c60] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetUserHistory
/// Size: 0x0000 (0x000058 - 0x000058)
class USteamCoreWebAsyncActionGetUserHistory : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetUserHistory.GetUserHistoryAsync
	// class USteamCoreWebAsyncActionGetUserHistory* GetUserHistoryAsync(class UObject* WorldContextObject, FString Key, int32_t AppID, FString SteamID, FString ContextID, int32_t StartTime, int32_t EndTime); // [0x1636290] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionHistoryExecuteCommand
/// Size: 0x0000 (0x000058 - 0x000058)
class USteamCoreWebAsyncActionHistoryExecuteCommand : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionHistoryExecuteCommand.HistoryExecuteCommandAsync
	// class USteamCoreWebAsyncActionHistoryExecuteCommand* HistoryExecuteCommandAsync(class UObject* WorldContextObject, FString Key, int32_t AppID, FString SteamID, FString ContextID, int32_t ActorId); // [0x16365a0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionSupportGetAssetHistory
/// Size: 0x0000 (0x000058 - 0x000058)
class USteamCoreWebAsyncActionSupportGetAssetHistory : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionSupportGetAssetHistory.SupportGetAssetHistoryAsync
	// class USteamCoreWebAsyncActionSupportGetAssetHistory* SupportGetAssetHistoryAsync(class UObject* WorldContextObject, FString Key, int32_t AppID, FString AssetId, FString ContextID); // [0x1637a60] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.WebGameNotificationsService
/// Size: 0x0000 (0x000048 - 0x000048)
class UWebGameNotificationsService : public USteamCoreWebSubsystem
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.WebGameNotificationsService.UpdateSession
	// void UpdateSession(FDelegateProperty& Callback, FString Key, FString SessionID, int32_t AppID, FString Title, FString Users, FString SteamID); // [0x1637ce0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebGameNotificationsService.RequestNotifications
	// void RequestNotifications(FDelegateProperty& Callback, FString Key, FString SteamID, int32_t AppID);                  // [0x1636ed0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebGameNotificationsService.GetSessionDetailsForApp
	// void GetSessionDetailsForApp(FDelegateProperty& Callback, FString Key, FString Sessions, int32_t AppID, FString Language); // [0x1635a30] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebGameNotificationsService.EnumerateSessionsForApp
	// void EnumerateSessionsForApp(FDelegateProperty& Callback, FString Key, int32_t AppID, FString SteamID, bool bIncludeAllUserMessages, bool bIncludeAuthUserMessage, FString Language); // [0x1633ce0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebGameNotificationsService.DeleteSessionBatch
	// void DeleteSessionBatch(FDelegateProperty& Callback, FString Key, FString SessionID, int32_t AppID);                  // [0x16338d0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebGameNotificationsService.DeleteSession
	// void DeleteSession(FDelegateProperty& Callback, FString Key, FString SessionID, int32_t AppID, FString SteamID);      // [0x16333a0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebGameNotificationsService.CreateSession
	// void CreateSession(FDelegateProperty& Callback, FString Key, int32_t AppID, FString Context, FString Title, FString Users, FString SteamID); // [0x1632a40] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionCreateSession
/// Size: 0x0000 (0x000058 - 0x000058)
class USteamCoreWebAsyncActionCreateSession : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionCreateSession.CreateSessionAsync
	// class USteamCoreWebAsyncActionCreateSession* CreateSessionAsync(class UObject* WorldContextObject, FString Key, int32_t AppID, FString Context, FString Title, FString Users, FString SteamID); // [0x1632e20] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionUpdateSession
/// Size: 0x0000 (0x000058 - 0x000058)
class USteamCoreWebAsyncActionUpdateSession : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionUpdateSession.UpdateSessionAsync
	// class USteamCoreWebAsyncActionUpdateSession* UpdateSessionAsync(class UObject* WorldContextObject, FString Key, FString SessionID, int32_t AppID, FString Title, FString Users, FString SteamID); // [0x16380b0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionEnumerateSessionsForApp
/// Size: 0x0000 (0x000058 - 0x000058)
class USteamCoreWebAsyncActionEnumerateSessionsForApp : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionEnumerateSessionsForApp.EnumerateSessionsForAppAsync
	// class USteamCoreWebAsyncActionEnumerateSessionsForApp* EnumerateSessionsForAppAsync(class UObject* WorldContextObject, FString Key, int32_t AppID, FString SteamID, bool bIncludeAllUserMessages, bool bIncludeAuthUserMessage, FString Language); // [0x1634020] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetSessionDetailsForApp
/// Size: 0x0000 (0x000058 - 0x000058)
class USteamCoreWebAsyncActionGetSessionDetailsForApp : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetSessionDetailsForApp.GetSessionDetailsForAppAsync
	// class USteamCoreWebAsyncActionGetSessionDetailsForApp* GetSessionDetailsForAppAsync(class UObject* WorldContextObject, FString Key, FString Sessions, int32_t AppID, FString Language); // [0x1635ce0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionRequestNotifications
/// Size: 0x0000 (0x000058 - 0x000058)
class USteamCoreWebAsyncActionRequestNotifications : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionRequestNotifications.RequestNotificationsAsync
	// class USteamCoreWebAsyncActionRequestNotifications* RequestNotificationsAsync(class UObject* WorldContextObject, FString Key, FString SteamID, int32_t AppID); // [0x16370f0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionDeleteSession
/// Size: 0x0000 (0x000058 - 0x000058)
class USteamCoreWebAsyncActionDeleteSession : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionDeleteSession.DeleteSessionAsync
	// class USteamCoreWebAsyncActionDeleteSession* DeleteSessionAsync(class UObject* WorldContextObject, FString Key, FString SessionID, int32_t AppID, FString SteamID); // [0x1633650] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionDeleteSessionBatch
/// Size: 0x0000 (0x000058 - 0x000058)
class USteamCoreWebAsyncActionDeleteSessionBatch : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionDeleteSessionBatch.DeleteSessionBatchAsync
	// class USteamCoreWebAsyncActionDeleteSessionBatch* DeleteSessionBatchAsync(class UObject* WorldContextObject, FString Key, FString SessionID, int32_t AppID); // [0x1633af0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.WebGameServersService
/// Size: 0x0000 (0x000048 - 0x000048)
class UWebGameServersService : public USteamCoreWebSubsystem
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.WebGameServersService.SetMemo
	// void SetMemo(FDelegateProperty& Callback, FString Key, FString SteamID, FString Memo);                                // [0x1637540] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebGameServersService.SetBanStatus
	// void SetBanStatus(FDelegateProperty& Callback, FString Key, FString SteamID, bool bBanned, int32_t banSeconds);       // [0x16372e0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebGameServersService.ResetLoginToken
	// void ResetLoginToken(FDelegateProperty& Callback, FString Key, FString SteamID);                                      // [0x16331c0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebGameServersService.QueryLoginToken
	// void QueryLoginToken(FDelegateProperty& Callback, FString Key, FString LoginToken);                                   // [0x16331c0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebGameServersService.GetServerSteamIDsByIP
	// void GetServerSteamIDsByIP(FDelegateProperty& Callback, FString Key, FString ServerIP);                               // [0x16331c0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebGameServersService.GetServerIPsBySteamID
	// void GetServerIPsBySteamID(FDelegateProperty& Callback, FString Key, FString ServerSteamId);                          // [0x16331c0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebGameServersService.GetAccountPublicInfo
	// void GetAccountPublicInfo(FDelegateProperty& Callback, FString Key, FString SteamID);                                 // [0x16331c0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebGameServersService.GetAccountList
	// void GetAccountList(FDelegateProperty& Callback, FString Key);                                                        // [0x1634720] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebGameServersService.DeleteAccount
	// void DeleteAccount(FDelegateProperty& Callback, FString Key, FString SteamID);                                        // [0x16331c0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebGameServersService.CreateAccount
	// void CreateAccount(FDelegateProperty& Callback, FString Key, int32_t AppID, FString Memo);                            // [0x1632820] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.WebInventoryService
/// Size: 0x0000 (0x000048 - 0x000048)
class UWebInventoryService : public USteamCoreWebSubsystem
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.WebInventoryService.ModifyItems
	// void ModifyItems(FDelegateProperty& Callback, FString Key, int32_t AppID, FString InputJson, FString SteamID, int32_t Timestamp, FString Updates); // [0x1636b50] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebInventoryService.GetQuantity
	// void GetQuantity(FDelegateProperty& Callback, FString Key, int32_t AppID, FString SteamID, TArray<int32_t> ItemdefIDs, bool bForce); // [0x1635730] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebInventoryService.GetPriceSheet
	// void GetPriceSheet(FDelegateProperty& Callback, FString Key, int32_t Currency);                                       // [0x16355a0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebInventoryService.GetItemDefs
	// void GetItemDefs(FDelegateProperty& Callback, FString Key, int32_t AppID, FString ModifiedSince, TArray<int32_t> ItemdefIDs, TArray<int32_t> WorkshopIDs, int32_t CacheMaxAgeSeconds); // [0x1635220] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebInventoryService.GetInventory
	// void GetInventory(FDelegateProperty& Callback, FString Key, int32_t AppID, FString SteamID);                          // [0x1635000] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebInventoryService.ExchangeItem
	// void ExchangeItem(FDelegateProperty& Callback, FString Key, int32_t AppID, FString SteamID, TArray<int32_t> MaterialsItemID, TArray<int32_t> MaterialsQuantity, FString OutputItemdefId); // [0x1634340] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebInventoryService.ConsumeItem
	// void ConsumeItem(FDelegateProperty& Callback, FString Key, int32_t AppID, FString ItemId, FString Quantity, FString SteamID, FString RequestID); // [0x1632440] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebInventoryService.Consolidate
	// void Consolidate(FDelegateProperty& Callback, FString Key, int32_t AppID, FString SteamID, TArray<int32_t> ItemdefIDs, bool bForce); // [0x1632140] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebInventoryService.AddPromoItem
	// void AddPromoItem(FDelegateProperty& Callback, FString Key, int32_t AppID, int32_t ItemdefId, FString ItemPropsJson, FString SteamID, bool bNotify, FString RequestID); // [0x1631d70] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebInventoryService.AddItem
	// void AddItem(FDelegateProperty& Callback, FString Key, int32_t AppID, TArray<int32_t> ItemdefId, FString ItemPropsJson, FString SteamID, bool bNotify, FString RequestID, bool bTradeRestriction); // [0x1631900] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionAddItem
/// Size: 0x0000 (0x000058 - 0x000058)
class USteamCoreWebAsyncActionAddItem : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionAddItem.AddItemAsync
	// class USteamCoreWebAsyncActionAddItem* AddItemAsync(class UObject* WorldContextObject, FString Key, int32_t AppID, TArray<int32_t> ItemdefId, FString ItemPropsJson, FString SteamID, bool bNotify, FString RequestID, bool bTradeRestriction); // [0x163a120] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionAddPromoItem
/// Size: 0x0000 (0x000058 - 0x000058)
class USteamCoreWebAsyncActionAddPromoItem : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionAddPromoItem.AddPromoItemAsync
	// class USteamCoreWebAsyncActionAddPromoItem* AddPromoItemAsync(class UObject* WorldContextObject, FString Key, int32_t AppID, int32_t ItemdefId, FString ItemPropsJson, FString SteamID, bool bNotify, FString RequestID); // [0x163a570] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionConsumeItem
/// Size: 0x0000 (0x000058 - 0x000058)
class USteamCoreWebAsyncActionConsumeItem : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionConsumeItem.ConsumeItemAsync
	// class USteamCoreWebAsyncActionConsumeItem* ConsumeItemAsync(class UObject* WorldContextObject, FString Key, int32_t AppID, FString ItemId, FString Quantity, FString SteamID, FString RequestID); // [0x163b1d0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionExchangeItem
/// Size: 0x0000 (0x000058 - 0x000058)
class USteamCoreWebAsyncActionExchangeItem : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionExchangeItem.ExchangeItemAsync
	// class USteamCoreWebAsyncActionExchangeItem* ExchangeItemAsync(class UObject* WorldContextObject, FString Key, int32_t AppID, FString SteamID, TArray<int32_t> MaterialsItemID, TArray<int32_t> MaterialsQuantity, FString OutputItemdefId); // [0x163bdf0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetInventory
/// Size: 0x0000 (0x000058 - 0x000058)
class USteamCoreWebAsyncActionGetInventory : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetInventory.GetInventoryAsync
	// class USteamCoreWebAsyncActionGetInventory* GetInventoryAsync(class UObject* WorldContextObject, FString Key, int32_t AppID, FString SteamID); // [0x163cbc0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetItemDefs
/// Size: 0x0000 (0x000058 - 0x000058)
class USteamCoreWebAsyncActionGetItemDefs : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetItemDefs.GetItemDefsAsync
	// class USteamCoreWebAsyncActionGetItemDefs* GetItemDefsAsync(class UObject* WorldContextObject, FString Key, int32_t AppID, FString ModifiedSince, TArray<int32_t> ItemdefIDs, TArray<int32_t> WorkshopIDs, int32_t CacheMaxAgeSeconds); // [0x163cdb0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetPriceSheet
/// Size: 0x0000 (0x000058 - 0x000058)
class USteamCoreWebAsyncActionGetPriceSheet : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetPriceSheet.GetPriceSheetAsync
	// class USteamCoreWebAsyncActionGetPriceSheet* GetPriceSheetAsync(class UObject* WorldContextObject, FString Key, int32_t Currency); // [0x163da40] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionConsolidate
/// Size: 0x0000 (0x000058 - 0x000058)
class USteamCoreWebAsyncActionConsolidate : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionConsolidate.ConsolidateAsync
	// class USteamCoreWebAsyncActionConsolidate* ConsolidateAsync(class UObject* WorldContextObject, FString Key, int32_t AppID, FString SteamID, TArray<int32_t> ItemdefIDs, bool bForce); // [0x163af10] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetQuantity
/// Size: 0x0000 (0x000058 - 0x000058)
class USteamCoreWebAsyncActionGetQuantity : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetQuantity.GetQuantityAsync
	// class USteamCoreWebAsyncActionGetQuantity* GetQuantityAsync(class UObject* WorldContextObject, FString Key, int32_t AppID, FString SteamID, TArray<int32_t> ItemdefIDs, bool bForce); // [0x163dbb0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionModifyItems
/// Size: 0x0000 (0x000058 - 0x000058)
class USteamCoreWebAsyncActionModifyItems : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionModifyItems.ModifyItemsAsync
	// class USteamCoreWebAsyncActionModifyItems* ModifyItemsAsync(class UObject* WorldContextObject, FString Key, int32_t AppID, FString InputJson, FString SteamID, int32_t Timestamp, FString Updates); // [0x163f760] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.WebLeaderboards
/// Size: 0x0000 (0x000048 - 0x000048)
class UWebLeaderboards : public USteamCoreWebSubsystem
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.WebLeaderboards.SetLeaderboardScore
	// void SetLeaderboardScore(FDelegateProperty& Callback, FString Key, int32_t AppID, int32_t LeaderbordId, FString SteamID, int32_t Score, TArray<char> Details, FString ScoreMethod); // [0x1640a50] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebLeaderboards.ResetLeaderboard
	// void ResetLeaderboard(FDelegateProperty& Callback, FString Key, int32_t AppID, int32_t LeaderboardId);                // [0x16406e0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebLeaderboards.GetLeaderboardsForGame
	// void GetLeaderboardsForGame(FDelegateProperty& Callback, FString Key, int32_t AppID);                                 // [0x163d740] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebLeaderboards.GetLeaderboardEntries
	// void GetLeaderboardEntries(FDelegateProperty& Callback, FString Key, int32_t AppID, int32_t RangeStart, int32_t RangeEnd, int32_t LeaderboardId, int32_t DataRequest, FString SteamID); // [0x163d100] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebLeaderboards.FindOrCreateLeaderboard
	// void FindOrCreateLeaderboard(FDelegateProperty& Callback, FString Key, int32_t AppID, FString Name, FString SortMethod, FString DisplayType, bool bCreateIfNotFound, bool bOnlyTrustedWrites, bool bOnlyFriendsReads); // [0x163c3b0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebLeaderboards.DeleteLeaderboard
	// void DeleteLeaderboard(FDelegateProperty& Callback, FString Key, int32_t AppID, FString Name);                        // [0x163b9e0] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionDeleteLeaderboard
/// Size: 0x0000 (0x000058 - 0x000058)
class USteamCoreWebAsyncActionDeleteLeaderboard : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionDeleteLeaderboard.DeleteLeaderboardAsync
	// class USteamCoreWebAsyncActionDeleteLeaderboard* DeleteLeaderboardAsync(class UObject* WorldContextObject, FString Key, int32_t AppID, FString Name); // [0x163bc00] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionFindOrCreateLeaderboard
/// Size: 0x0000 (0x000058 - 0x000058)
class USteamCoreWebAsyncActionFindOrCreateLeaderboard : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionFindOrCreateLeaderboard.FindOrCreateLeaderboardAsync
	// class USteamCoreWebAsyncActionFindOrCreateLeaderboard* FindOrCreateLeaderboardAsync(class UObject* WorldContextObject, FString Key, int32_t AppID, FString Name, FString SortMethod, FString DisplayType, bool bCreateIfNotFound, bool bOnlyTrustedWrites, bool bOnlyFriendsReads); // [0x163c7d0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetLeaderboardEntries
/// Size: 0x0000 (0x000058 - 0x000058)
class USteamCoreWebAsyncActionGetLeaderboardEntries : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetLeaderboardEntries.GetLeaderboardEntriesAsync
	// class USteamCoreWebAsyncActionGetLeaderboardEntries* GetLeaderboardEntriesAsync(class UObject* WorldContextObject, FString Key, int32_t AppID, int32_t RangeStart, int32_t RangeEnd, int32_t LeaderboardId, int32_t DataRequest, FString SteamID); // [0x163d430] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetLeaderboardsForGame
/// Size: 0x0000 (0x000058 - 0x000058)
class USteamCoreWebAsyncActionGetLeaderboardsForGame : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetLeaderboardsForGame.GetLeaderboardsForGameAsync
	// class USteamCoreWebAsyncActionGetLeaderboardsForGame* GetLeaderboardsForGameAsync(class UObject* WorldContextObject, FString Key, int32_t AppID); // [0x163d8d0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionResetLeaderboard
/// Size: 0x0000 (0x000058 - 0x000058)
class USteamCoreWebAsyncActionResetLeaderboard : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionResetLeaderboard.ResetLeaderboardAsync
	// class USteamCoreWebAsyncActionResetLeaderboard* ResetLeaderboardAsync(class UObject* WorldContextObject, FString Key, int32_t AppID, int32_t LeaderboardId); // [0x16408b0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionSetLeaderboardScore
/// Size: 0x0000 (0x000058 - 0x000058)
class USteamCoreWebAsyncActionSetLeaderboardScore : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionSetLeaderboardScore.SetLeaderboardScoreAsync
	// class USteamCoreWebAsyncActionSetLeaderboardScore* SetLeaderboardScoreAsync(class UObject* WorldContextObject, FString Key, int32_t AppID, int32_t LeaderboardId, FString SteamID, int32_t Score, TArray<char> Details, FString ScoreMethod); // [0x1640e20] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.WebLobbyMatchmakingService
/// Size: 0x0000 (0x000048 - 0x000048)
class UWebLobbyMatchmakingService : public USteamCoreWebSubsystem
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.WebLobbyMatchmakingService.RemoveUserFromLobby
	// void RemoveUserFromLobby(FDelegateProperty& Callback, FString Key, int32_t AppID, FString SteamIdToRemove, FString SteamIDLobby, FString InputJson); // [0x16403a0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebLobbyMatchmakingService.CreateLobby
	// void CreateLobby(FDelegateProperty& Callback, FString Key, int32_t AppID, int32_t MaxMembers, ESteamCoreWebLobbyType LobbyType, FString LobbyName, FString InputJson, TArray<FString> SteamIdInvitedMembers, FString LobbyMetaData); // [0x163b570] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.WebMicroTxn
/// Size: 0x0000 (0x000048 - 0x000048)
class UWebMicroTxn : public USteamCoreWebSubsystem
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.WebMicroTxn.RefundTxn
	// void RefundTxn(FDelegateProperty& Callback, FString Key, FString OrderID, int32_t AppID);                             // [0x1640180] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebMicroTxn.QueryTxn
	// void QueryTxn(FDelegateProperty& Callback, FString Key, int32_t AppID, FString OrderID, FString TransId);             // [0x163fed0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebMicroTxn.ProcessAgreement
	// void ProcessAgreement(FDelegateProperty& Callback, FString Key, FString OrderID, FString SteamID, FString AgreementId, int32_t AppID, int32_t Amount, FString Currency); // [0x163fab0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebMicroTxn.MakeTransactionID
	// FString MakeTransactionID();                                                                                          // [0x163f6e0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebMicroTxn.InitTxn
	// void InitTxn(FDelegateProperty& Callback, FString Key, FString OrderID, FString SteamID, int32_t AppID, FString Language, FString Currency, FString UserSession, FString Ipaddress, TArray<int32_t> ItemId, TArray<int32_t> Quantity, TArray<FString> Amount, TArray<FString> Description, TArray<FString> Category, TArray<int32_t> AssociatedBundle, TArray<FString> BillingType, TArray<FString> StartDate, TArray<FString> EndDate, TArray<FString> Period, TArray<int32_t> Frequency, TArray<FString> RecurringAmt, TArray<int32_t> BundleCount, TArray<int32_t> BundleId, TArray<int32_t> BundleQty, TArray<FString> BundleDesc, TArray<FString> BundleCategory); // [0x163e5f0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebMicroTxn.GetUserInfo
	// void GetUserInfo(FDelegateProperty& Callback, FString Key, FString SteamID, FString Ipaddress);                       // [0x163e380] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebMicroTxn.GetUserAgreementInfo
	// void GetUserAgreementInfo(FDelegateProperty& Callback, FString Key, FString SteamID, int32_t AppID);                  // [0x163e160] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebMicroTxn.GetReport
	// void GetReport(FDelegateProperty& Callback, FString Key, int32_t AppID, FString Time, FString Type, int32_t MaxResults); // [0x163de70] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebMicroTxn.FinalizeTxn
	// void FinalizeTxn(FDelegateProperty& Callback, FString Key, FString OrderID, int32_t AppID);                           // [0x163c190] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebMicroTxn.CancelAgreement
	// void CancelAgreement(FDelegateProperty& Callback, FString Key, FString SteamID, FString AgreementId, int32_t AppID);  // [0x163ac60] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebMicroTxn.AdjustAgreement
	// void AdjustAgreement(FDelegateProperty& Callback, FString Key, FString SteamID, FString AgreementId, int32_t AppID, FString NextProcessDate); // [0x163a920] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionAdjustAgreement
/// Size: 0x0000 (0x000058 - 0x000058)
class USteamCoreWebAsyncActionAdjustAgreement : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionAdjustAgreement.AdjustAgreementAsync
	// class USteamCoreWebAsyncActionAdjustAgreement* AdjustAgreementAsync(class UObject* WorldContextObject, FString Key, FString SteamID, FString AgreementId, int32_t AppID, FString NextProcessDate); // [0x1642e10] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionCancelAgreement
/// Size: 0x0000 (0x000058 - 0x000058)
class USteamCoreWebAsyncActionCancelAgreement : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionCancelAgreement.CancelAgreementAsync
	// class USteamCoreWebAsyncActionCancelAgreement* CancelAgreementAsync(class UObject* WorldContextObject, FString Key, FString SteamID, FString AgreementId, int32_t AppID); // [0x1643120] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionFinalizeTxn
/// Size: 0x0000 (0x000058 - 0x000058)
class USteamCoreWebAsyncActionFinalizeTxn : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionFinalizeTxn.FinalizeTxnAsync
	// class USteamCoreWebAsyncActionFinalizeTxn* FinalizeTxnAsync(class UObject* WorldContextObject, FString Key, FString OrderID, int32_t AppID); // [0x16433a0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetReport
/// Size: 0x0000 (0x000058 - 0x000058)
class USteamCoreWebAsyncActionGetReport : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetReport.GetReportAsync
	// class USteamCoreWebAsyncActionGetReport* GetReportAsync(class UObject* WorldContextObject, FString Key, int32_t AppID, FString Time, FString Type, int32_t MaxResults); // [0x1644710] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetUserAgreementInfo
/// Size: 0x0000 (0x000058 - 0x000058)
class USteamCoreWebAsyncActionGetUserAgreementInfo : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetUserAgreementInfo.GetUserAgreementInfoAsync
	// class USteamCoreWebAsyncActionGetUserAgreementInfo* GetUserAgreementInfoAsync(class UObject* WorldContextObject, FString Key, FString SteamID, int32_t AppID); // [0x1644d60] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetUserInfo
/// Size: 0x0000 (0x000058 - 0x000058)
class USteamCoreWebAsyncActionGetUserInfo : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetUserInfo.GetUserInfoAsync
	// class USteamCoreWebAsyncActionGetUserInfo* GetUserInfoAsync(class UObject* WorldContextObject, FString Key, FString SteamID, FString Ipaddress); // [0x1644f50] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionInitTxn
/// Size: 0x0000 (0x000058 - 0x000058)
class USteamCoreWebAsyncActionInitTxn : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionInitTxn.InitTxnAsync
	// class USteamCoreWebAsyncActionInitTxn* InitTxnAsync(class UObject* WorldContextObject, FString Key, FString OrderID, FString SteamID, int32_t AppID, FString Language, FString Currency, FString UserSession, FString Ipaddress, TArray<int32_t> ItemId, TArray<int32_t> Quantity, TArray<FString> Amount, TArray<FString> Description, TArray<FString> Category, TArray<int32_t> AssociatedBundle, TArray<FString> BillingType, TArray<FString> StartDate, TArray<FString> EndDate, TArray<FString> Period, TArray<int32_t> Frequency, TArray<FString> RecurringAmt, TArray<int32_t> BundleCount, TArray<int32_t> BundleId, TArray<int32_t> BundleQty, TArray<FString> BundleDesc, TArray<FString> BundleCategory); // [0x1645190] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionProcessAgreement
/// Size: 0x0000 (0x000058 - 0x000058)
class USteamCoreWebAsyncActionProcessAgreement : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionProcessAgreement.ProcessAgreementAsync
	// class USteamCoreWebAsyncActionProcessAgreement* ProcessAgreementAsync(class UObject* WorldContextObject, FString Key, FString OrderID, FString SteamID, FString AgreementId, int32_t AppID, int32_t Amount, FString Currency); // [0x1646660] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionQueryTxn
/// Size: 0x0000 (0x000058 - 0x000058)
class USteamCoreWebAsyncActionQueryTxn : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionQueryTxn.QueryTxnAsync
	// class USteamCoreWebAsyncActionQueryTxn* QueryTxnAsync(class UObject* WorldContextObject, FString Key, int32_t AppID, FString OrderID, FString TransId); // [0x1647740] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionRefundTxn
/// Size: 0x0000 (0x000058 - 0x000058)
class USteamCoreWebAsyncActionRefundTxn : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionRefundTxn.RefundTxnAsync
	// class USteamCoreWebAsyncActionRefundTxn* RefundTxnAsync(class UObject* WorldContextObject, FString Key, FString OrderID, int32_t AppID); // [0x1648780] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.WebPlayerService
/// Size: 0x0000 (0x000048 - 0x000048)
class UWebPlayerService : public USteamCoreWebSubsystem
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.WebPlayerService.IsPlayingSharedGame
	// void IsPlayingSharedGame(FDelegateProperty& Callback, FString Key, FString SteamID, int32_t AppIdPlaying);            // [0x1646250] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebPlayerService.GetSteamLevel
	// void GetSteamLevel(FDelegateProperty& Callback, FString Key, FString SteamID);                                        // [0x16449d0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebPlayerService.GetRecentlyPlayedGames
	// void GetRecentlyPlayedGames(FDelegateProperty& Callback, FString Key, FString SteamID, int32_t Count);                // [0x1644300] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebPlayerService.GetOwnedGames
	// void GetOwnedGames(FDelegateProperty& Callback, FString Key, FString SteamID, bool bIncludeAppInfo, bool bIncludePlayedFreeGames, TArray<int32_t> Filter); // [0x1643d30] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebPlayerService.GetCommunityBadgeProgress
	// void GetCommunityBadgeProgress(FDelegateProperty& Callback, FString Key, FString SteamID, int32_t BadgeId);           // [0x1643920] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebPlayerService.GetBadges
	// void GetBadges(FDelegateProperty& Callback, FString Key, FString SteamID);                                            // [0x1643590] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetRecentlyPlayedGames
/// Size: 0x0000 (0x000058 - 0x000058)
class USteamCoreWebAsyncActionGetRecentlyPlayedGames : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetRecentlyPlayedGames.GetRecentlyPlayedGamesAsync
	// class USteamCoreWebAsyncActionGetRecentlyPlayedGames* GetRecentlyPlayedGamesAsync(class UObject* WorldContextObject, FString Key, FString SteamID, int32_t Count); // [0x1644520] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetOwnedGames
/// Size: 0x0000 (0x000058 - 0x000058)
class USteamCoreWebAsyncActionGetOwnedGames : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetOwnedGames.GetOwnedGamesAsync
	// class USteamCoreWebAsyncActionGetOwnedGames* GetOwnedGamesAsync(class UObject* WorldContextObject, FString Key, FString SteamID, bool bIncludeAppInfo, bool bIncludePlayedFreeGames, TArray<int32_t> Filter); // [0x1644030] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetSteamLevel
/// Size: 0x0000 (0x000058 - 0x000058)
class USteamCoreWebAsyncActionGetSteamLevel : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetSteamLevel.GetSteamLevelAsync
	// class USteamCoreWebAsyncActionGetSteamLevel* GetSteamLevelAsync(class UObject* WorldContextObject, FString Key, FString SteamID); // [0x1644bb0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetBadges
/// Size: 0x0000 (0x000058 - 0x000058)
class USteamCoreWebAsyncActionGetBadges : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetBadges.GetBadgesAsync
	// class USteamCoreWebAsyncActionGetBadges* GetBadgesAsync(class UObject* WorldContextObject, FString Key, FString SteamID); // [0x1643770] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetCommunityBadgeProgress
/// Size: 0x0000 (0x000058 - 0x000058)
class USteamCoreWebAsyncActionGetCommunityBadgeProgress : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetCommunityBadgeProgress.GetCommunityBadgeProgressAsync
	// class USteamCoreWebAsyncActionGetCommunityBadgeProgress* GetCommunityBadgeProgressAsync(class UObject* WorldContextObject, FString Key, FString SteamID, int32_t BadgeId); // [0x1643b40] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionIsPlayingSharedGame
/// Size: 0x0000 (0x000058 - 0x000058)
class USteamCoreWebAsyncActionIsPlayingSharedGame : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionIsPlayingSharedGame.IsPlayingSharedGameAsync
	// class USteamCoreWebAsyncActionIsPlayingSharedGame* IsPlayingSharedGameAsync(class UObject* WorldContextObject, FString Key, FString SteamID, int32_t AppIdPlaying); // [0x1646470] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.WebPublishedFileService
/// Size: 0x0000 (0x000048 - 0x000048)
class UWebPublishedFileService : public USteamCoreWebSubsystem
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.WebPublishedFileService.UpdateTags
	// void UpdateTags(FDelegateProperty& Callback, FString Key, FString PublishedFileID, int32_t AppID, FString AddTags, FString RemoveTags); // [0x16495a0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebPublishedFileService.UpdateIncompatibleStatus
	// void UpdateIncompatibleStatus(FDelegateProperty& Callback, FString Key, FString PublishedFileID, int32_t AppID, bool bIncompatible); // [0x1649340] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebPublishedFileService.UpdateBanStatus
	// void UpdateBanStatus(FDelegateProperty& Callback, FString Key, FString PublishedFileID, int32_t AppID, bool bBanned, FString Reason); // [0x1649050] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebPublishedFileService.SetDeveloperMetadata
	// void SetDeveloperMetadata(FDelegateProperty& Callback, FString Key, FString PublishedFileID, int32_t AppID, FString MetaData); // [0x1648da0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebPublishedFileService.QueryFiles
	// void QueryFiles(FDelegateProperty& Callback, FString Key, int32_t QueryType, int32_t Page, FString Cursor, int32_t NumPerPage, int32_t CreatorAppID, int32_t AppID, FString RequiredTags, FString ExcludedTags, bool bMatchAllTags, FString RequiredFlags, FString OmittedFlags, FString SearchText, int32_t FileType, FString ChildPublishedFileId, int32_t Days, bool bIncludeRecentVotesOnly, int32_t CacheMaxAgeSeconds, int32_t Language, FString RequiredKvTags, bool bTotalOnly, bool bIDsOnly, bool bReturnVoteData, bool bReturnTags, bool bReturnKvTags, bool bReturnPreviews, bool bReturnChildren, bool bReturnShortDescription, bool bReturnForSaleData, bool bReturnMetadata, int32_t ReturnPlaytimeStats); // [0x1646a40] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.WebSteamPublishedItemSearch
/// Size: 0x0000 (0x000048 - 0x000048)
class UWebSteamPublishedItemSearch : public USteamCoreWebSubsystem
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.WebSteamPublishedItemSearch.ResultSetSummary
	// void ResultSetSummary(FDelegateProperty& Callback, FString Key, FString SteamID, int32_t AppID, int32_t StartId, bool bHasAppAdminAccess, int32_t FileType, TArray<FString> Tag, TArray<FString> UserTag); // [0x1648970] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebSteamPublishedItemSearch.RankedByVote
	// void RankedByVote(FDelegateProperty& Callback, FString Key, FString SteamID, int32_t AppID, int32_t StartId, int32_t Count, bool bHasAppAdminAccess, int32_t FileType, TArray<FString> Tag, TArray<FString> UserTag); // [0x1648300] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebSteamPublishedItemSearch.RankedByTrend
	// void RankedByTrend(FDelegateProperty& Callback, FString Key, FString SteamID, int32_t AppID, int32_t StartId, int32_t Count, bool bHasAppAdminAccess, int32_t FileType, int32_t Days, TArray<FString> Tag, TArray<FString> UserTag); // [0x1647e40] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebSteamPublishedItemSearch.RankedByPublicationOrder
	// void RankedByPublicationOrder(FDelegateProperty& Callback, FString Key, FString SteamID, int32_t AppID, int32_t StartId, int32_t Count, bool bHasAppAdminAccess, int32_t FileType, TArray<FString> Tag, TArray<FString> UserTag); // [0x16479c0] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionRankedByPublicationOrder
/// Size: 0x0000 (0x000058 - 0x000058)
class USteamCoreWebAsyncActionRankedByPublicationOrder : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionRankedByPublicationOrder.RankedByPublicationOrderAsync
	// class USteamCoreWebAsyncActionRankedByPublicationOrder* RankedByPublicationOrderAsync(class UObject* WorldContextObject, FString Key, FString SteamID, int32_t AppID, int32_t StartId, int32_t Count, bool bHasAppAdminAccess, int32_t FileType, TArray<FString> Tag, TArray<FString> UserTag); // [0x164ddb0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionRankedByTrend
/// Size: 0x0000 (0x000058 - 0x000058)
class USteamCoreWebAsyncActionRankedByTrend : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionRankedByTrend.RankedByTrendAsync
	// class USteamCoreWebAsyncActionRankedByTrend* RankedByTrendAsync(class UObject* WorldContextObject, FString Key, FString SteamID, int32_t AppID, int32_t StartId, int32_t Count, bool bHasAppAdminAccess, int32_t FileType, int32_t Days, TArray<FString> Tag, TArray<FString> UserTag); // [0x164e1f0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionRankedByVote
/// Size: 0x0000 (0x000058 - 0x000058)
class USteamCoreWebAsyncActionRankedByVote : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionRankedByVote.RankedByVoteAsync
	// class USteamCoreWebAsyncActionRankedByVote* RankedByVoteAsync(class UObject* WorldContextObject, FString Key, FString SteamID, int32_t AppID, int32_t StartId, int32_t Count, bool bHasAppAdminAccess, int32_t FileType, TArray<FString> Tag, TArray<FString> UserTag); // [0x164e670] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionResultSetSummary
/// Size: 0x0000 (0x000058 - 0x000058)
class USteamCoreWebAsyncActionResultSetSummary : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionResultSetSummary.ResultSetSummaryAsync
	// class USteamCoreWebAsyncActionResultSetSummary* ResultSetSummaryAsync(class UObject* WorldContextObject, FString Key, FString SteamID, int32_t AppID, int32_t StartId, bool bHasAppAdminAccess, int32_t FileType, TArray<FString> Tag, TArray<FString> UserTag); // [0x164f360] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.WebPublishedItemVoting
/// Size: 0x0000 (0x000048 - 0x000048)
class UWebPublishedItemVoting : public USteamCoreWebSubsystem
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.WebPublishedItemVoting.UserVoteSummary
	// void UserVoteSummary(FDelegateProperty& Callback, FString Key, FString SteamID, TArray<FString> PublishedFileIDs);    // [0x1650fb0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebPublishedItemVoting.ItemVoteSummary
	// void ItemVoteSummary(FDelegateProperty& Callback, FString Key, FString SteamID, int32_t AppID, TArray<FString> PublishedFileIDs); // [0x164d880] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionItemVoteSummary
/// Size: 0x0000 (0x000058 - 0x000058)
class USteamCoreWebAsyncActionItemVoteSummary : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionItemVoteSummary.ItemVoteSummaryAsync
	// class USteamCoreWebAsyncActionItemVoteSummary* ItemVoteSummaryAsync(class UObject* WorldContextObject, FString Key, FString SteamID, int32_t AppID, TArray<FString> PublishedFileIDs); // [0x164db30] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionUserVoteSummary
/// Size: 0x0000 (0x000058 - 0x000058)
class USteamCoreWebAsyncActionUserVoteSummary : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionUserVoteSummary.UserVoteSummaryAsync
	// class USteamCoreWebAsyncActionUserVoteSummary* UserVoteSummaryAsync(class UObject* WorldContextObject, FString Key, FString SteamID, TArray<FString> PublishedFileIDs); // [0x1651220] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.WebRemoteStorage
/// Size: 0x0000 (0x000048 - 0x000048)
class UWebRemoteStorage : public USteamCoreWebSubsystem
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.WebRemoteStorage.UnsubscribePublishedFile
	// void UnsubscribePublishedFile(FDelegateProperty& Callback, FString Key, FString SteamID, int32_t AppID, FString PublishedFileIDs); // [0x1650a80] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebRemoteStorage.SubscribePublishedFile
	// void SubscribePublishedFile(FDelegateProperty& Callback, FString Key, FString SteamID, int32_t AppID, FString PublishedFileIDs); // [0x1650550] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebRemoteStorage.SetUGCUsedByGC
	// void SetUGCUsedByGC(FDelegateProperty& Callback, FString Key, FString SteamID, FString UGCID, int32_t AppID, bool bUsed); // [0x164f750] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebRemoteStorage.GetUGCFileDetails
	// void GetUGCFileDetails(FDelegateProperty& Callback, FString Key, FString SteamID, FString UGCID, int32_t AppID);      // [0x164d350] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebRemoteStorage.GetPublishedFileDetails
	// void GetPublishedFileDetails(FDelegateProperty& Callback, FString PublishedFileIDs);                                  // [0x164d0c0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebRemoteStorage.GetCollectionDetails
	// void GetCollectionDetails(FDelegateProperty& Callback, TArray<FString> PublishedFileIDs);                             // [0x164ca00] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebRemoteStorage.EnumerateUserSubscribedFiles
	// void EnumerateUserSubscribedFiles(FDelegateProperty& Callback, FString Key, FString SteamID, int32_t AppID, int32_t ListType); // [0x164bc00] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebRemoteStorage.EnumerateUserPublishedFiles
	// void EnumerateUserPublishedFiles(FDelegateProperty& Callback, FString Key, FString SteamID, int32_t AppID);           // [0x164b7f0] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionEnumerateUserPublishedFiles
/// Size: 0x0000 (0x000058 - 0x000058)
class USteamCoreWebAsyncActionEnumerateUserPublishedFiles : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionEnumerateUserPublishedFiles.EnumerateUserPublishedFilesAsync
	// class USteamCoreWebAsyncActionEnumerateUserPublishedFiles* EnumerateUserPublishedFilesAsync(class UObject* WorldContextObject, FString Key, FString SteamID, int32_t AppID); // [0x164ba10] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionEnumerateUserSubscribedFiles
/// Size: 0x0000 (0x000058 - 0x000058)
class USteamCoreWebAsyncActionEnumerateUserSubscribedFiles : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionEnumerateUserSubscribedFiles.EnumerateUserSubscribedFilesAsync
	// class USteamCoreWebAsyncActionEnumerateUserSubscribedFiles* EnumerateUserSubscribedFilesAsync(class UObject* WorldContextObject, FString Key, FString SteamID, int32_t AppID, int32_t ListType); // [0x164be60] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetCollectionDetails
/// Size: 0x0000 (0x000058 - 0x000058)
class USteamCoreWebAsyncActionGetCollectionDetails : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetCollectionDetails.GetCollectionDetailsAsync
	// class USteamCoreWebAsyncActionGetCollectionDetails* GetCollectionDetailsAsync(class UObject* WorldContextObject, TArray<FString> PublishedFileIDs); // [0x164cb50] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetPublishedFileDetails
/// Size: 0x0000 (0x000058 - 0x000058)
class USteamCoreWebAsyncActionGetPublishedFileDetails : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetPublishedFileDetails.GetPublishedFileDetailsAsync
	// class USteamCoreWebAsyncActionGetPublishedFileDetails* GetPublishedFileDetailsAsync(class UObject* WorldContextObject, FString PublishedFileIDs); // [0x164d220] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetUGCFileDetails
/// Size: 0x0000 (0x000058 - 0x000058)
class USteamCoreWebAsyncActionGetUGCFileDetails : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetUGCFileDetails.GetUGCFileDetailsAsync
	// class USteamCoreWebAsyncActionGetUGCFileDetails* GetUGCFileDetailsAsync(class UObject* WorldContextObject, FString Key, FString SteamID, FString UGCID, int32_t AppID); // [0x164d600] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionSetUGCUsedByGC
/// Size: 0x0000 (0x000058 - 0x000058)
class USteamCoreWebAsyncActionSetUGCUsedByGC : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionSetUGCUsedByGC.SetUGCUsedByGCAsync
	// class USteamCoreWebAsyncActionSetUGCUsedByGC* SetUGCUsedByGCAsync(class UObject* WorldContextObject, FString Key, FString SteamID, FString UGCID, int32_t AppID, bool bUsed); // [0x164fa40] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionSubscribePublishedFile
/// Size: 0x0000 (0x000058 - 0x000058)
class USteamCoreWebAsyncActionSubscribePublishedFile : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionSubscribePublishedFile.SubscribePublishedFileAsync
	// class USteamCoreWebAsyncActionSubscribePublishedFile* SubscribePublishedFileAsync(class UObject* WorldContextObject, FString Key, FString SteamID, int32_t AppID, FString PublishedFileIDs); // [0x1650800] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionUnsubscribePublishedFile
/// Size: 0x0000 (0x000058 - 0x000058)
class USteamCoreWebAsyncActionUnsubscribePublishedFile : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionUnsubscribePublishedFile.UnsubscribePublishedFileAsync
	// class USteamCoreWebAsyncActionUnsubscribePublishedFile* UnsubscribePublishedFileAsync(class UObject* WorldContextObject, FString Key, FString SteamID, int32_t AppID, FString PublishedFileIDs); // [0x1650d30] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.WebSteamCommunity
/// Size: 0x0000 (0x000048 - 0x000048)
class UWebSteamCommunity : public USteamCoreWebSubsystem
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.WebSteamCommunity.ReportAbuse
	// void ReportAbuse(FDelegateProperty& Callback, FString Key, FString SteamIdActor, FString SteamIdTarget, int32_t AppID, int32_t AbuseType, int32_t ContentType, FString Description, FString Gid); // [0x164eab0] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionReportAbuse
/// Size: 0x0000 (0x000058 - 0x000058)
class USteamCoreWebAsyncActionReportAbuse : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionReportAbuse.ReportAbuseAsync
	// class USteamCoreWebAsyncActionReportAbuse* ReportAbuseAsync(class UObject* WorldContextObject, FString Key, FString SteamIdActor, FString SteamIdTarget, int32_t AppID, int32_t AbuseType, int32_t ContentType, FString Description, FString Gid); // [0x164ef20] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.WebSteamEconomy
/// Size: 0x0000 (0x000048 - 0x000048)
class UWebSteamEconomy : public USteamCoreWebSubsystem
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.WebSteamEconomy.StartTrade
	// void StartTrade(FDelegateProperty& Callback, FString Key, int32_t AppID, FString SteamIDd, FString SteamId2);         // [0x16502a0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebSteamEconomy.StartAssetTransaction
	// void StartAssetTransaction(FDelegateProperty& Callback, FString Key, int32_t AppID, FString SteamID, FString AssetId, int32_t AssetQuantity, FString Currency, FString Language, FString Ipaddress, FString Referer, bool bClientAuth); // [0x164fd00] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebSteamEconomy.GetMarketPrices
	// void GetMarketPrices(FDelegateProperty& Callback, FString Key, int32_t AppID);                                        // [0x164cf30] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebSteamEconomy.GetExportedAssetsForUser
	// void GetExportedAssetsForUser(FDelegateProperty& Callback, FString Key, FString SteamID, int32_t AppID, FString ContextID); // [0x164cc80] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebSteamEconomy.GetAssetPrices
	// void GetAssetPrices(FDelegateProperty& Callback, FString Key, int32_t AppID, FString Currency, FString Language);     // [0x164c750] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebSteamEconomy.GetAssetClassInfo
	// void GetAssetClassInfo(FDelegateProperty& Callback, FString Key, int32_t AppID, FString Language, int32_t ClassCount, FString ClassID, FString InstanceId); // [0x164c3d0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebSteamEconomy.FinalizeAssetTransaction
	// void FinalizeAssetTransaction(FDelegateProperty& Callback, FString Key, int32_t AppID, FString SteamID, FString TxnId, FString Language); // [0x164c090] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebSteamEconomy.CanTrade
	// void CanTrade(FDelegateProperty& Callback, FString Key, int32_t AppID, FString SteamID, FString TargetId);            // [0x164b540] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionCanTrade
/// Size: 0x0000 (0x000058 - 0x000058)
class USteamCoreWebAsyncActionCanTrade : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionCanTrade.CanTradeAsync
	// class USteamCoreWebAsyncActionCanTrade* CanTradeAsync(class UObject* WorldContextObject, FString Key, int32_t AppID, FString SteamID, FString TargetId); // [0x1653b40] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionFinalizeAssetTransaction
/// Size: 0x0000 (0x000058 - 0x000058)
class USteamCoreWebAsyncActionFinalizeAssetTransaction : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionFinalizeAssetTransaction.FinalizeAssetTransactionAsync
	// class USteamCoreWebAsyncActionFinalizeAssetTransaction* FinalizeAssetTransactionAsync(class UObject* WorldContextObject, FString Key, int32_t AppID, FString SteamID, FString TxnId, FString Language); // [0x16541d0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetAssetClassInfo
/// Size: 0x0000 (0x000058 - 0x000058)
class USteamCoreWebAsyncActionGetAssetClassInfo : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetAssetClassInfo.GetAssetClassInfoAsync
	// class USteamCoreWebAsyncActionGetAssetClassInfo* GetAssetClassInfoAsync(class UObject* WorldContextObject, FString Key, int32_t AppID, FString Language, int32_t ClassCount, FString ClassID, FString InstanceId); // [0x1654990] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetAssetPrices
/// Size: 0x0000 (0x000058 - 0x000058)
class USteamCoreWebAsyncActionGetAssetPrices : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetAssetPrices.GetAssetPricesAsync
	// class USteamCoreWebAsyncActionGetAssetPrices* GetAssetPricesAsync(class UObject* WorldContextObject, FString Key, int32_t AppID, FString Currency, FString Language); // [0x1654ce0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetExportedAssetsForUser
/// Size: 0x0000 (0x000058 - 0x000058)
class USteamCoreWebAsyncActionGetExportedAssetsForUser : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetExportedAssetsForUser.GetExportedAssetsForUserAsync
	// class USteamCoreWebAsyncActionGetExportedAssetsForUser* GetExportedAssetsForUserAsync(class UObject* WorldContextObject, FString Key, FString SteamID, int32_t AppID, FString ContextID); // [0x1654f60] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetMarketPrices
/// Size: 0x0000 (0x000058 - 0x000058)
class USteamCoreWebAsyncActionGetMarketPrices : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetMarketPrices.GetMarketPricesAsync
	// class USteamCoreWebAsyncActionGetMarketPrices* GetMarketPricesAsync(class UObject* WorldContextObject, FString Key, int32_t AppID); // [0x1655a10] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionStartAssetTransaction
/// Size: 0x0000 (0x000058 - 0x000058)
class USteamCoreWebAsyncActionStartAssetTransaction : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionStartAssetTransaction.StartAssetTransactionAsync
	// class USteamCoreWebAsyncActionStartAssetTransaction* StartAssetTransactionAsync(class UObject* WorldContextObject, FString Key, int32_t AppID, FString SteamID, FString AssetId, int32_t AssetQuantity, FString Currency, FString Language, FString Ipaddress, FString Referer, bool bClientAuth); // [0x1658380] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionStartTrade
/// Size: 0x0000 (0x000058 - 0x000058)
class USteamCoreWebAsyncActionStartTrade : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionStartTrade.StartTradeAsync
	// class USteamCoreWebAsyncActionStartTrade* StartTradeAsync(class UObject* WorldContextObject, FString Key, int32_t AppID, FString SteamId1, FString SteamId2); // [0x1658910] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.WebSteamGameServerStats
/// Size: 0x0000 (0x000048 - 0x000048)
class UWebSteamGameServerStats : public USteamCoreWebSubsystem
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.WebSteamGameServerStats.GetGameServerPlayerStatsForGame
	// void GetGameServerPlayerStatsForGame(FDelegateProperty& Callback, FString Key, FString GameID, int32_t AppID, FString RangeStart, FString RangeEnd, int32_t MaxResults); // [0x1655690] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.WebSteamNews
/// Size: 0x0000 (0x000048 - 0x000048)
class UWebSteamNews : public USteamCoreWebSubsystem
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.WebSteamNews.GetNewsForAppAuthed
	// void GetNewsForAppAuthed(FDelegateProperty& Callback, FString Key, int32_t AppID, int32_t MaxLength, TArray<FString> Feeds, int32_t EndDate, int32_t Count); // [0x1655ff0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebSteamNews.GetNewsForApp
	// void GetNewsForApp(FDelegateProperty& Callback, int32_t AppID, int32_t MaxLength, TArray<FString> Feeds, int32_t EndDate, int32_t Count); // [0x1655b80] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetNewsForApp
/// Size: 0x0000 (0x000058 - 0x000058)
class USteamCoreWebAsyncActionGetNewsForApp : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetNewsForApp.GetNewsForAppAsync
	// class USteamCoreWebAsyncActionGetNewsForApp* GetNewsForAppAsync(class UObject* WorldContextObject, int32_t AppID, int32_t MaxLength, TArray<FString> Feeds, int32_t EndDate, int32_t Count); // [0x1655dd0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetNewsForAppAuthed
/// Size: 0x0000 (0x000058 - 0x000058)
class USteamCoreWebAsyncActionGetNewsForAppAuthed : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetNewsForAppAuthed.GetNewsForAppAuthedAsync
	// class USteamCoreWebAsyncActionGetNewsForAppAuthed* GetNewsForAppAuthedAsync(class UObject* WorldContextObject, FString Key, int32_t AppID, int32_t MaxLength, TArray<FString> Feeds, int32_t EndDate, int32_t Count); // [0x16562e0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.WebSteamUser
/// Size: 0x0000 (0x000048 - 0x000048)
class UWebSteamUser : public USteamCoreWebSubsystem
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.WebSteamUser.ResolveVanityURL
	// void ResolveVanityURL(FDelegateProperty& Callback, FString Key, FString VanityURL, EVanityUrlType URLType);           // [0x1657f70] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebSteamUser.GrantPackage
	// void GrantPackage(FDelegateProperty& Callback, FString Key, FString SteamID, int32_t PackageId, FString Ipaddress, FString ThirdPartyKey, int32_t ThirdPartyAppId); // [0x16578a0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebSteamUser.GetUserGroupList
	// void GetUserGroupList(FDelegateProperty& Callback, FString Key, FString SteamID);                                     // [0x1657510] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebSteamUser.GetPublisherAppOwnershipChanges
	// void GetPublisherAppOwnershipChanges(FDelegateProperty& Callback, FString Key, FString PackageRowVersion, FString CDKeyRowVersion); // [0x1657060] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebSteamUser.GetPublisherAppOwnership
	// void GetPublisherAppOwnership(FDelegateProperty& Callback, FString Key, FString SteamID);                             // [0x1656cd0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebSteamUser.GetPlayerSummaries
	// void GetPlayerSummaries(FDelegateProperty& Callback, FString Key, TArray<FString> SteamIDs);                          // [0x1656940] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebSteamUser.GetPlayerBans
	// void GetPlayerBans(FDelegateProperty& Callback, FString Key, TArray<FString> SteamIDs);                               // [0x16565b0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebSteamUser.GetFriendList
	// void GetFriendList(FDelegateProperty& Callback, FString Key, FString SteamID, FString Relationship);                  // [0x16551e0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebSteamUser.GetAppPriceInfo
	// void GetAppPriceInfo(FDelegateProperty& Callback, FString Key, FString SteamID, TArray<int32_t> AppIDs);              // [0x16544e0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebSteamUser.CheckAppOwnership
	// void CheckAppOwnership(FDelegateProperty& Callback, FString Key, FString SteamID, int32_t AppID);                     // [0x1653dc0] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionCheckAppOwnership
/// Size: 0x0000 (0x000058 - 0x000058)
class USteamCoreWebAsyncActionCheckAppOwnership : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionCheckAppOwnership.CheckAppOwnershipAsync
	// class USteamCoreWebAsyncActionCheckAppOwnership* CheckAppOwnershipAsync(class UObject* WorldContextObject, FString Key, FString SteamID, int32_t AppID); // [0x1653fe0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetAppPriceInfo
/// Size: 0x0000 (0x000058 - 0x000058)
class USteamCoreWebAsyncActionGetAppPriceInfo : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetAppPriceInfo.GetAppPriceInfoAsync
	// class USteamCoreWebAsyncActionGetAppPriceInfo* GetAppPriceInfoAsync(class UObject* WorldContextObject, FString Key, FString SteamID, TArray<int32_t> AppIDs); // [0x1654750] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetFriendList
/// Size: 0x0000 (0x000058 - 0x000058)
class USteamCoreWebAsyncActionGetFriendList : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetFriendList.GetFriendListAsync
	// class USteamCoreWebAsyncActionGetFriendList* GetFriendListAsync(class UObject* WorldContextObject, FString Key, FString SteamID, FString Relationship); // [0x1655450] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetPlayerBans
/// Size: 0x0000 (0x000058 - 0x000058)
class USteamCoreWebAsyncActionGetPlayerBans : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetPlayerBans.GetPlayerBansAsync
	// class USteamCoreWebAsyncActionGetPlayerBans* GetPlayerBansAsync(class UObject* WorldContextObject, FString Key, TArray<FString> SteamIDs); // [0x1656790] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetPlayerSummaries
/// Size: 0x0000 (0x000058 - 0x000058)
class USteamCoreWebAsyncActionGetPlayerSummaries : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetPlayerSummaries.GetPlayerSummariesAsync
	// class USteamCoreWebAsyncActionGetPlayerSummaries* GetPlayerSummariesAsync(class UObject* WorldContextObject, FString Key, TArray<FString> SteamIDs); // [0x1656b20] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetPublisherAppOwnership
/// Size: 0x0000 (0x000058 - 0x000058)
class USteamCoreWebAsyncActionGetPublisherAppOwnership : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetPublisherAppOwnership.GetPublisherAppOwnershipAsync
	// class USteamCoreWebAsyncActionGetPublisherAppOwnership* GetPublisherAppOwnershipAsync(class UObject* WorldContextObject, FString Key, FString SteamID); // [0x1656eb0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetPublisherAppOwnershipChanges
/// Size: 0x0000 (0x000058 - 0x000058)
class USteamCoreWebAsyncActionGetPublisherAppOwnershipChanges : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetPublisherAppOwnershipChanges.GetPublisherAppOwnershipChangesAsync
	// class USteamCoreWebAsyncActionGetPublisherAppOwnershipChanges* GetPublisherAppOwnershipChangesAsync(class UObject* WorldContextObject, FString Key, FString PackageRowVersion, FString CDKeyRowVersion); // [0x16572d0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetUserGroupList
/// Size: 0x0000 (0x000058 - 0x000058)
class USteamCoreWebAsyncActionGetUserGroupList : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetUserGroupList.GetUserGroupListAsync
	// class USteamCoreWebAsyncActionGetUserGroupList* GetUserGroupListAsync(class UObject* WorldContextObject, FString Key, FString SteamID); // [0x16576f0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionGrantPackage
/// Size: 0x0000 (0x000058 - 0x000058)
class USteamCoreWebAsyncActionGrantPackage : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionGrantPackage.GrantPackageAsync
	// class USteamCoreWebAsyncActionGrantPackage* GrantPackageAsync(class UObject* WorldContextObject, FString Key, FString SteamID, int32_t PackageId, FString Ipaddress, FString ThirdPartyKey, int32_t ThirdPartyAppId); // [0x1657c20] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionResolveVanityURL
/// Size: 0x0000 (0x000058 - 0x000058)
class USteamCoreWebAsyncActionResolveVanityURL : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionResolveVanityURL.ResolveVanityURLAsync
	// class USteamCoreWebAsyncActionResolveVanityURL* ResolveVanityURLAsync(class UObject* WorldContextObject, FString Key, FString VanityURL, EVanityUrlType URLType); // [0x1658190] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.WebUserAuth
/// Size: 0x0000 (0x000048 - 0x000048)
class UWebUserAuth : public USteamCoreWebSubsystem
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.WebUserAuth.AuthenticateUserTicket
	// void AuthenticateUserTicket(FDelegateProperty& Callback, FString Key, int32_t AppID, FString Ticket);                 // [0x1653920] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebUserAuth.AuthenticateUser
	// void AuthenticateUser(FDelegateProperty& Callback, FString SteamID, TArray<char> SessionKey, TArray<char> EncryptedLoginKey); // [0x16536c0] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionAuthenticateUser
/// Size: 0x0000 (0x000058 - 0x000058)
class USteamCoreWebAsyncActionAuthenticateUser : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionAuthenticateUser.AuthenticateUserAsync
	// class USteamCoreWebAsyncActionAuthenticateUser* AuthenticateUserAsync(class UObject* WorldContextObject, FString SteamID, TArray<char> SessionKey, TArray<char> EncryptedLoginKey); // [0x16854b0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionAuthenticateUserTicket
/// Size: 0x0000 (0x000058 - 0x000058)
class USteamCoreWebAsyncActionAuthenticateUserTicket : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionAuthenticateUserTicket.AuthenticateUserTicketAsync
	// class USteamCoreWebAsyncActionAuthenticateUserTicket* AuthenticateUserTicketAsync(class UObject* WorldContextObject, FString Key, int32_t AppID, FString Ticket); // [0x16856e0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.WebUserStats
/// Size: 0x0000 (0x000048 - 0x000048)
class UWebUserStats : public USteamCoreWebSubsystem
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.WebUserStats.SetUserStatsForGame
	// void SetUserStatsForGame(FDelegateProperty& Callback, FString Key, FString SteamID, int32_t AppID, TArray<FString> Names, TArray<int32_t> Values); // [0x16874b0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebUserStats.GetUserStatsForGame
	// void GetUserStatsForGame(FDelegateProperty& Callback, FString Key, FString SteamID, int32_t AppID);                   // [0x1687030] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebUserStats.GetSchemaForGame
	// void GetSchemaForGame(FDelegateProperty& Callback, FString Key, FString SteamID, int32_t AppID, FString Language);    // [0x1686a60] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebUserStats.GetPlayerAchievements
	// void GetPlayerAchievements(FDelegateProperty& Callback, FString Key, FString SteamID, int32_t AppID, FString Language); // [0x1686490] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebUserStats.GetNumberOfCurrentPlayers
	// void GetNumberOfCurrentPlayers(FDelegateProperty& Callback, int32_t AppID);                                           // [0x1686160] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebUserStats.GetGlobalStatsForGame
	// void GetGlobalStatsForGame(FDelegateProperty& Callback, int32_t AppID, TArray<FString> Names, int32_t StartDate, int32_t EndDate); // [0x1685cf0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebUserStats.GetGlobalAchievementPercentagesForApp
	// void GetGlobalAchievementPercentagesForApp(FDelegateProperty& Callback, FString GameID);                              // [0x16858d0] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetGlobalAchievementPercentagesForApp
/// Size: 0x0000 (0x000058 - 0x000058)
class USteamCoreWebAsyncActionGetGlobalAchievementPercentagesForApp : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetGlobalAchievementPercentagesForApp.GetGlobalAchievementPercentagesForAppAsync
	// class USteamCoreWebAsyncActionGetGlobalAchievementPercentagesForApp* GetGlobalAchievementPercentagesForAppAsync(class UObject* WorldContextObject, FString GameID); // [0x1685a70] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetGlobalStatsForGame
/// Size: 0x0000 (0x000058 - 0x000058)
class USteamCoreWebAsyncActionGetGlobalStatsForGame : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetGlobalStatsForGame.GetGlobalStatsForGameAsync
	// class USteamCoreWebAsyncActionGetGlobalStatsForGame* GetGlobalStatsForGameAsync(class UObject* WorldContextObject, int32_t AppID, TArray<FString> Names, int32_t StartDate, int32_t EndDate); // [0x1685f80] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetNumberOfCurrentPlayers
/// Size: 0x0000 (0x000058 - 0x000058)
class USteamCoreWebAsyncActionGetNumberOfCurrentPlayers : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetNumberOfCurrentPlayers.GetNumberOfCurrentPlayersAsync
	// class USteamCoreWebAsyncActionGetNumberOfCurrentPlayers* GetNumberOfCurrentPlayersAsync(class UObject* WorldContextObject, int32_t AppID); // [0x1686280] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetPlayerAchievements
/// Size: 0x0000 (0x000058 - 0x000058)
class USteamCoreWebAsyncActionGetPlayerAchievements : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetPlayerAchievements.GetPlayerAchievementsAsync
	// class USteamCoreWebAsyncActionGetPlayerAchievements* GetPlayerAchievementsAsync(class UObject* WorldContextObject, FString Key, FString SteamID, int32_t AppID, FString Language); // [0x16867e0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetSchemaForGame
/// Size: 0x0000 (0x000058 - 0x000058)
class USteamCoreWebAsyncActionGetSchemaForGame : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetSchemaForGame.GetSchemaForGameAsync
	// class USteamCoreWebAsyncActionGetSchemaForGame* GetSchemaForGameAsync(class UObject* WorldContextObject, FString Key, FString SteamID, int32_t AppID, FString Language); // [0x1686db0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetUserStatsForGame
/// Size: 0x0000 (0x000058 - 0x000058)
class USteamCoreWebAsyncActionGetUserStatsForGame : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetUserStatsForGame.GetUserStatsForGameAsync
	// class USteamCoreWebAsyncActionGetUserStatsForGame* GetUserStatsForGameAsync(class UObject* WorldContextObject, FString Key, FString SteamID, int32_t AppID); // [0x16872c0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionSetUserStatsForGame
/// Size: 0x0000 (0x000058 - 0x000058)
class USteamCoreWebAsyncActionSetUserStatsForGame : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionSetUserStatsForGame.SetUserStatsForGameAsync
	// class USteamCoreWebAsyncActionSetUserStatsForGame* SetUserStatsForGameAsync(class UObject* WorldContextObject, FString Key, FString SteamID, int32_t AppID, TArray<FString> Names, TArray<int32_t> Values); // [0x1687930] Final|Native|Static|Public|BlueprintCallable 
};

/// Struct /Script/SteamCoreWeb.SteamCoreJson
/// Size: 0x0028 (0x000000 - 0x000028)
struct FSteamCoreJson
{ 
	SDK_UNDEFINED(16,2768) /* FString */               __um(Key);                                                  // 0x0000   (0x0010)  
	SDK_UNDEFINED(16,2769) /* FString */               __um(String);                                               // 0x0010   (0x0010)  
	int32_t                                            Number;                                                     // 0x0020   (0x0004)  
	bool                                               bool0;                                                      // 0x0024   (0x0001)  
	ESteamValueType                                    Type;                                                       // 0x0025   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x0026   (0x0002)  MISSED
};

