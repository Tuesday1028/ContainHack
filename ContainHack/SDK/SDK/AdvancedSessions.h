
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: CoreUObject
/// dependency: Engine

/// Enum /Script/AdvancedSessions.EBPOnlinePresenceState
/// Size: 0x07
enum class EBPOnlinePresenceState : uint8_t
{
	EBPOnlinePresenceState__Online                                                   = 0,
	EBPOnlinePresenceState__Offline                                                  = 1,
	EBPOnlinePresenceState__Away                                                     = 2,
	EBPOnlinePresenceState__ExtendedAway                                             = 3,
	EBPOnlinePresenceState__DoNotDisturb                                             = 4,
	EBPOnlinePresenceState__Chat                                                     = 5,
	EBPOnlinePresenceState__EBPOnlinePresenceState_MAX                               = 6
};

/// Enum /Script/AdvancedSessions.EBPUserPrivileges
/// Size: 0x05
enum class EBPUserPrivileges : uint8_t
{
	EBPUserPrivileges__CanPlay                                                       = 0,
	EBPUserPrivileges__CanPlayOnline                                                 = 1,
	EBPUserPrivileges__CanCommunicateOnline                                          = 2,
	EBPUserPrivileges__CanUseUserGeneratedContent                                    = 3,
	EBPUserPrivileges__EBPUserPrivileges_MAX                                         = 4
};

/// Enum /Script/AdvancedSessions.EBPLoginStatus
/// Size: 0x04
enum class EBPLoginStatus : uint8_t
{
	EBPLoginStatus__NotLoggedIn                                                      = 0,
	EBPLoginStatus__UsingLocalProfile                                                = 1,
	EBPLoginStatus__LoggedIn                                                         = 2,
	EBPLoginStatus__EBPLoginStatus_MAX                                               = 3
};

/// Enum /Script/AdvancedSessions.ESessionSettingSearchResult
/// Size: 0x04
enum class ESessionSettingSearchResult : uint8_t
{
	ESessionSettingSearchResult__Found                                               = 0,
	ESessionSettingSearchResult__NotFound                                            = 1,
	ESessionSettingSearchResult__WrongType                                           = 2,
	ESessionSettingSearchResult__ESessionSettingSearchResult_MAX                     = 3
};

/// Enum /Script/AdvancedSessions.EBlueprintResultSwitch
/// Size: 0x03
enum class EBlueprintResultSwitch : uint8_t
{
	EBlueprintResultSwitch__OnSuccess                                                = 0,
	EBlueprintResultSwitch__OnFailure                                                = 1,
	EBlueprintResultSwitch__EBlueprintResultSwitch_MAX                               = 2
};

/// Enum /Script/AdvancedSessions.EBlueprintAsyncResultSwitch
/// Size: 0x04
enum class EBlueprintAsyncResultSwitch : uint8_t
{
	EBlueprintAsyncResultSwitch__OnSuccess                                           = 0,
	EBlueprintAsyncResultSwitch__AsyncLoading                                        = 1,
	EBlueprintAsyncResultSwitch__OnFailure                                           = 2,
	EBlueprintAsyncResultSwitch__EBlueprintAsyncResultSwitch_MAX                     = 3
};

/// Enum /Script/AdvancedSessions.EBPServerPresenceSearchType
/// Size: 0x04
enum class EBPServerPresenceSearchType : uint8_t
{
	EBPServerPresenceSearchType__AllServers                                          = 0,
	EBPServerPresenceSearchType__ClientServersOnly                                   = 1,
	EBPServerPresenceSearchType__DedicatedServersOnly                                = 2,
	EBPServerPresenceSearchType__EBPServerPresenceSearchType_MAX                     = 3
};

/// Enum /Script/AdvancedSessions.EBPOnlineSessionState
/// Size: 0x09
enum class EBPOnlineSessionState : uint8_t
{
	EBPOnlineSessionState__NoSession                                                 = 0,
	EBPOnlineSessionState__Creating                                                  = 1,
	EBPOnlineSessionState__Pending                                                   = 2,
	EBPOnlineSessionState__Starting                                                  = 3,
	EBPOnlineSessionState__InProgress                                                = 4,
	EBPOnlineSessionState__Ending                                                    = 5,
	EBPOnlineSessionState__Ended                                                     = 6,
	EBPOnlineSessionState__Destroying                                                = 7,
	EBPOnlineSessionState__EBPOnlineSessionState_MAX                                 = 8
};

/// Enum /Script/AdvancedSessions.EOnlineComparisonOpRedux
/// Size: 0x07
enum class EOnlineComparisonOpRedux : uint8_t
{
	EOnlineComparisonOpRedux__Equals                                                 = 0,
	EOnlineComparisonOpRedux__NotEquals                                              = 1,
	EOnlineComparisonOpRedux__GreaterThan                                            = 2,
	EOnlineComparisonOpRedux__GreaterThanEquals                                      = 3,
	EOnlineComparisonOpRedux__LessThan                                               = 4,
	EOnlineComparisonOpRedux__LessThanEquals                                         = 5,
	EOnlineComparisonOpRedux__EOnlineComparisonOpRedux_MAX                           = 6
};

/// Class /Script/AdvancedSessions.AdvancedExternalUILibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UAdvancedExternalUILibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/AdvancedSessions.AdvancedExternalUILibrary.ShowWebURLUI
	// void ShowWebURLUI(FString URLToShow, EBlueprintResultSwitch& Result, TArray<FString>& AllowedDomains, bool bEmbedded, bool bShowBackground, bool bShowCloseButton, int32_t OffsetX, int32_t OffsetY, int32_t SizeX, int32_t SizeY); // [0x18b7b30] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AdvancedSessions.AdvancedExternalUILibrary.ShowProfileUI
	// void ShowProfileUI(FBPUniqueNetId PlayerViewingProfile, FBPUniqueNetId PlayerToViewProfileOf, EBlueprintResultSwitch& Result); // [0x18b7940] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AdvancedSessions.AdvancedExternalUILibrary.ShowLeaderBoardUI
	// void ShowLeaderBoardUI(FString LeaderboardName, EBlueprintResultSwitch& Result);                                      // [0x18b7800] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AdvancedSessions.AdvancedExternalUILibrary.ShowInviteUI
	// void ShowInviteUI(class APlayerController* PlayerController, EBlueprintResultSwitch& Result);                         // [0x18b7730] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AdvancedSessions.AdvancedExternalUILibrary.ShowFriendsUI
	// void ShowFriendsUI(class APlayerController* PlayerController, EBlueprintResultSwitch& Result);                        // [0x18b7660] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AdvancedSessions.AdvancedExternalUILibrary.ShowAccountUpgradeUI
	// void ShowAccountUpgradeUI(FBPUniqueNetId PlayerRequestingAccountUpgradeUI, EBlueprintResultSwitch& Result);           // [0x18b7520] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AdvancedSessions.AdvancedExternalUILibrary.CloseWebURLUI
	// void CloseWebURLUI();                                                                                                 // [0x18b2580] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/AdvancedSessions.AdvancedFriendsGameInstance
/// Size: 0x0080 (0x0001C0 - 0x000240)
class UAdvancedFriendsGameInstance : public UGameInstance
{ 
public:
	bool                                               bCallFriendInterfaceEventsOnPlayerControllers;              // 0x01C0   (0x0001)  
	bool                                               bCallIdentityInterfaceEventsOnPlayerControllers;            // 0x01C1   (0x0001)  
	bool                                               bCallVoiceInterfaceEventsOnPlayerControllers;               // 0x01C2   (0x0001)  
	bool                                               bEnableTalkingStatusDelegate;                               // 0x01C3   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7C];                                      // 0x01C4   (0x007C)  MISSED


	/// Functions
	// Function /Script/AdvancedSessions.AdvancedFriendsGameInstance.OnSessionInviteReceived
	// void OnSessionInviteReceived(int32_t LocalPlayerNum, FBPUniqueNetId PersonInviting, FString AppID, FBlueprintSessionResult& SessionToJoin); // [0x2119480] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/AdvancedSessions.AdvancedFriendsGameInstance.OnSessionInviteAccepted
	// void OnSessionInviteAccepted(int32_t LocalPlayerNum, FBPUniqueNetId PersonInvited, FBlueprintSessionResult& SessionToJoin); // [0x2119480] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/AdvancedSessions.AdvancedFriendsGameInstance.OnPlayerTalkingStateChanged
	// void OnPlayerTalkingStateChanged(FBPUniqueNetId PlayerId, bool bIsTalking);                                           // [0x2119480] Event|Public|BlueprintEvent 
	// Function /Script/AdvancedSessions.AdvancedFriendsGameInstance.OnPlayerLoginStatusChanged
	// void OnPlayerLoginStatusChanged(int32_t PlayerNum, EBPLoginStatus PreviousStatus, EBPLoginStatus NewStatus, FBPUniqueNetId NewPlayerUniqueNetID); // [0x2119480] Event|Public|BlueprintEvent 
	// Function /Script/AdvancedSessions.AdvancedFriendsGameInstance.OnPlayerLoginChanged
	// void OnPlayerLoginChanged(int32_t PlayerNum);                                                                         // [0x2119480] Event|Public|BlueprintEvent 
};

/// Class /Script/AdvancedSessions.AdvancedFriendsInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UAdvancedFriendsInterface : public UInterface
{ 
public:


	/// Functions
	// Function /Script/AdvancedSessions.AdvancedFriendsInterface.OnSessionInviteReceived
	// void OnSessionInviteReceived(FBPUniqueNetId PersonInviting, FBlueprintSessionResult& SearchResult);                   // [0x2119480] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/AdvancedSessions.AdvancedFriendsInterface.OnSessionInviteAccepted
	// void OnSessionInviteAccepted(FBPUniqueNetId PersonInvited, FBlueprintSessionResult& SearchResult);                    // [0x2119480] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/AdvancedSessions.AdvancedFriendsInterface.OnPlayerVoiceStateChanged
	// void OnPlayerVoiceStateChanged(FBPUniqueNetId PlayerId, bool bIsTalking);                                             // [0x2119480] Event|Public|BlueprintEvent 
	// Function /Script/AdvancedSessions.AdvancedFriendsInterface.OnPlayerLoginStatusChanged
	// void OnPlayerLoginStatusChanged(EBPLoginStatus PreviousStatus, EBPLoginStatus NewStatus, FBPUniqueNetId PlayerUniqueNetID); // [0x2119480] Event|Public|BlueprintEvent 
	// Function /Script/AdvancedSessions.AdvancedFriendsInterface.OnPlayerLoginChanged
	// void OnPlayerLoginChanged(int32_t PlayerNum);                                                                         // [0x2119480] Event|Public|BlueprintEvent 
};

/// Class /Script/AdvancedSessions.AdvancedFriendsLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UAdvancedFriendsLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/AdvancedSessions.AdvancedFriendsLibrary.SendSessionInviteToFriends
	// void SendSessionInviteToFriends(class APlayerController* PlayerController, TArray<FBPUniqueNetId>& Friends, EBlueprintResultSwitch& Result); // [0x18b6f20] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AdvancedSessions.AdvancedFriendsLibrary.SendSessionInviteToFriend
	// void SendSessionInviteToFriend(class APlayerController* PlayerController, FBPUniqueNetId& FriendUniqueNetId, EBlueprintResultSwitch& Result); // [0x18b6db0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AdvancedSessions.AdvancedFriendsLibrary.IsAFriend
	// void IsAFriend(class APlayerController* PlayerController, FBPUniqueNetId UniqueNetId, bool& IsFriend);                // [0x18b5fa0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/AdvancedSessions.AdvancedFriendsLibrary.GetStoredRecentPlayersList
	// void GetStoredRecentPlayersList(FBPUniqueNetId UniqueNetId, TArray<FBPOnlineRecentPlayer>& PlayersList);              // [0x18b4c70] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AdvancedSessions.AdvancedFriendsLibrary.GetStoredFriendsList
	// void GetStoredFriendsList(class APlayerController* PlayerController, TArray<FBPFriendInfo>& FriendsList);             // [0x18b4b00] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AdvancedSessions.AdvancedFriendsLibrary.GetFriend
	// void GetFriend(class APlayerController* PlayerController, FBPUniqueNetId FriendUniqueNetId, FBPFriendInfo& Friend);   // [0x18b3150] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/AdvancedSessions.AdvancedGameSession
/// Size: 0x0050 (0x0002A8 - 0x0002F8)
class AAdvancedGameSession : public AGameSession
{ 
public:
	SDK_UNDEFINED(80,973) /* TMap<FUniqueNetIdRepl, FText> */ __um(BanList);                                       // 0x02A8   (0x0050)  
};

/// Class /Script/AdvancedSessions.AdvancedIdentityLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UAdvancedIdentityLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/AdvancedSessions.AdvancedIdentityLibrary.SetUserAccountAttribute
	// void SetUserAccountAttribute(FBPUserOnlineAccount& AccountInfo, FString AttributeName, FString NewAttributeValue, EBlueprintResultSwitch& Result); // [0x18b7350] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AdvancedSessions.AdvancedIdentityLibrary.GetUserID
	// void GetUserID(FBPUserOnlineAccount& AccountInfo, FBPUniqueNetId& UniqueNetId);                                       // [0x18b5da0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/AdvancedSessions.AdvancedIdentityLibrary.GetUserAccountRealName
	// void GetUserAccountRealName(FBPUserOnlineAccount& AccountInfo, FString& username);                                    // [0x18b5c60] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/AdvancedSessions.AdvancedIdentityLibrary.GetUserAccountDisplayName
	// void GetUserAccountDisplayName(FBPUserOnlineAccount& AccountInfo, FString& DisplayName);                              // [0x18b5b20] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/AdvancedSessions.AdvancedIdentityLibrary.GetUserAccountAuthAttribute
	// void GetUserAccountAuthAttribute(FBPUserOnlineAccount& AccountInfo, FString AttributeName, FString& AuthAttribute, EBlueprintResultSwitch& Result); // [0x18b5930] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AdvancedSessions.AdvancedIdentityLibrary.GetUserAccountAttribute
	// void GetUserAccountAttribute(FBPUserOnlineAccount& AccountInfo, FString AttributeName, FString& AttributeValue, EBlueprintResultSwitch& Result); // [0x18b5740] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AdvancedSessions.AdvancedIdentityLibrary.GetUserAccountAccessToken
	// void GetUserAccountAccessToken(FBPUserOnlineAccount& AccountInfo, FString& AccessToken);                              // [0x18b5600] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/AdvancedSessions.AdvancedIdentityLibrary.GetUserAccount
	// void GetUserAccount(FBPUniqueNetId& UniqueNetId, FBPUserOnlineAccount& AccountInfo, EBlueprintResultSwitch& Result);  // [0x18b5440] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AdvancedSessions.AdvancedIdentityLibrary.GetPlayerNickname
	// void GetPlayerNickname(FBPUniqueNetId& UniqueNetId, FString& PlayerNickname);                                         // [0x18b38b0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/AdvancedSessions.AdvancedIdentityLibrary.GetPlayerAuthToken
	// void GetPlayerAuthToken(class APlayerController* PlayerController, FString& AuthToken, EBlueprintResultSwitch& Result); // [0x18b3690] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AdvancedSessions.AdvancedIdentityLibrary.GetLoginStatus
	// void GetLoginStatus(FBPUniqueNetId& UniqueNetId, EBPLoginStatus& LoginStatus, EBlueprintResultSwitch& Result);        // [0x18b3370] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AdvancedSessions.AdvancedIdentityLibrary.GetAllUserAccounts
	// void GetAllUserAccounts(TArray<FBPUserOnlineAccount>& AccountInfos, EBlueprintResultSwitch& Result);                  // [0x18b2a90] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/AdvancedSessions.AdvancedSessionsLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UAdvancedSessionsLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/AdvancedSessions.AdvancedSessionsLibrary.UniqueNetIdToString
	// void UniqueNetIdToString(FBPUniqueNetId& UniqueNetId, FString& String);                                               // [0x18b7ee0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/AdvancedSessions.AdvancedSessionsLibrary.SetPlayerName
	// void SetPlayerName(class APlayerController* PlayerController, FString PlayerName);                                    // [0x18b7230] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AdvancedSessions.AdvancedSessionsLibrary.ServerTravel
	// bool ServerTravel(class UObject* WorldContextObject, FString InURL, bool bAbsolute, bool bShouldSkipGameNotify);      // [0x18b70c0] Final|BlueprintAuthorityOnly|Native|Static|Public|BlueprintCallable 
	// Function /Script/AdvancedSessions.AdvancedSessionsLibrary.MakeLiteralSessionSearchProperty
	// FSessionsSearchSetting MakeLiteralSessionSearchProperty(FSessionPropertyKeyPair SessionSearchProperty, EOnlineComparisonOpRedux ComparisonOp); // [0x18b6c70] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/AdvancedSessions.AdvancedSessionsLibrary.MakeLiteralSessionPropertyString
	// FSessionPropertyKeyPair MakeLiteralSessionPropertyString(FName Key, FString Value);                                   // [0x18b6b20] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/AdvancedSessions.AdvancedSessionsLibrary.MakeLiteralSessionPropertyInt
	// FSessionPropertyKeyPair MakeLiteralSessionPropertyInt(FName Key, int32_t Value);                                      // [0x18b6a30] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/AdvancedSessions.AdvancedSessionsLibrary.MakeLiteralSessionPropertyFloat
	// FSessionPropertyKeyPair MakeLiteralSessionPropertyFloat(FName Key, float Value);                                      // [0x18b6940] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/AdvancedSessions.AdvancedSessionsLibrary.MakeLiteralSessionPropertyByte
	// FSessionPropertyKeyPair MakeLiteralSessionPropertyByte(FName Key, char Value);                                        // [0x18b6850] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/AdvancedSessions.AdvancedSessionsLibrary.MakeLiteralSessionPropertyBool
	// FSessionPropertyKeyPair MakeLiteralSessionPropertyBool(FName Key, bool Value);                                        // [0x18b6760] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/AdvancedSessions.AdvancedSessionsLibrary.KickPlayer
	// bool KickPlayer(class UObject* WorldContextObject, class APlayerController* PlayerToKick, FText KickReason);          // [0x18b65f0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AdvancedSessions.AdvancedSessionsLibrary.IsValidUniqueNetID
	// bool IsValidUniqueNetID(FBPUniqueNetId& UniqueNetId);                                                                 // [0x18b6510] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/AdvancedSessions.AdvancedSessionsLibrary.IsValidSession
	// bool IsValidSession(FBlueprintSessionResult& SessionResult);                                                          // [0x18b62a0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/AdvancedSessions.AdvancedSessionsLibrary.IsPlayerInSession
	// void IsPlayerInSession(class UObject* WorldContextObject, FBPUniqueNetId& PlayerToCheck, bool& bIsInSession);         // [0x18b6130] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AdvancedSessions.AdvancedSessionsLibrary.HasOnlineSubsystem
	// bool HasOnlineSubsystem(FName SubSystemName);                                                                         // [0x18b5f10] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/AdvancedSessions.AdvancedSessionsLibrary.GetUniqueNetIDFromPlayerState
	// void GetUniqueNetIDFromPlayerState(class APlayerState* PlayerState, FBPUniqueNetId& UniqueNetId);                     // [0x18b5330] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/AdvancedSessions.AdvancedSessionsLibrary.GetUniqueNetID
	// void GetUniqueNetID(class APlayerController* PlayerController, FBPUniqueNetId& UniqueNetId);                          // [0x18b5220] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/AdvancedSessions.AdvancedSessionsLibrary.GetUniqueBuildID
	// void GetUniqueBuildID(FBlueprintSessionResult SessionResult, int32_t& UniqueBuildId);                                 // [0x18b4e50] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/AdvancedSessions.AdvancedSessionsLibrary.GetSessionState
	// void GetSessionState(class UObject* WorldContextObject, EBPOnlineSessionState& SessionState);                         // [0x18b4a30] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AdvancedSessions.AdvancedSessionsLibrary.GetSessionSettings
	// void GetSessionSettings(class UObject* WorldContextObject, int32_t& NumConnections, int32_t& NumPrivateConnections, bool& bIsLAN, bool& bIsDedicated, bool& bAllowInvites, bool& bAllowJoinInProgress, bool& bIsAnticheatEnabled, int32_t& BuildUniqueID, TArray<FSessionPropertyKeyPair>& ExtraSettings, EBlueprintResultSwitch& Result); // [0x18b4610] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AdvancedSessions.AdvancedSessionsLibrary.GetSessionPropertyString
	// void GetSessionPropertyString(TArray<FSessionPropertyKeyPair>& ExtraSettings, FName SettingName, ESessionSettingSearchResult& SearchResult, FString& SettingValue); // [0x18b4450] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AdvancedSessions.AdvancedSessionsLibrary.GetSessionPropertyKey
	// FName GetSessionPropertyKey(FSessionPropertyKeyPair& SessionProperty);                                                // [0x18b4390] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AdvancedSessions.AdvancedSessionsLibrary.GetSessionPropertyInt
	// void GetSessionPropertyInt(TArray<FSessionPropertyKeyPair>& ExtraSettings, FName SettingName, ESessionSettingSearchResult& SearchResult, int32_t& SettingValue); // [0x18b41e0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AdvancedSessions.AdvancedSessionsLibrary.GetSessionPropertyFloat
	// void GetSessionPropertyFloat(TArray<FSessionPropertyKeyPair>& ExtraSettings, FName SettingName, ESessionSettingSearchResult& SearchResult, float& SettingValue); // [0x18b4030] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AdvancedSessions.AdvancedSessionsLibrary.GetSessionPropertyByte
	// void GetSessionPropertyByte(TArray<FSessionPropertyKeyPair>& ExtraSettings, FName SettingName, ESessionSettingSearchResult& SearchResult, char& SettingValue); // [0x18b3e80] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AdvancedSessions.AdvancedSessionsLibrary.GetSessionPropertyBool
	// void GetSessionPropertyBool(TArray<FSessionPropertyKeyPair>& ExtraSettings, FName SettingName, ESessionSettingSearchResult& SearchResult, bool& SettingValue); // [0x18b3cd0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AdvancedSessions.AdvancedSessionsLibrary.GetSessionID_AsString
	// void GetSessionID_AsString(FBlueprintSessionResult& SessionResult, FString& SessionID);                               // [0x18b39f0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/AdvancedSessions.AdvancedSessionsLibrary.GetPlayerName
	// void GetPlayerName(class APlayerController* PlayerController, FString& PlayerName);                                   // [0x18b37d0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/AdvancedSessions.AdvancedSessionsLibrary.GetNumberOfNetworkPlayers
	// void GetNumberOfNetworkPlayers(class UObject* WorldContextObject, int32_t& NumNetPlayers);                            // [0x18b35c0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/AdvancedSessions.AdvancedSessionsLibrary.GetNetPlayerIndex
	// void GetNetPlayerIndex(class APlayerController* PlayerController, int32_t& NetPlayerIndex);                           // [0x18b34f0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/AdvancedSessions.AdvancedSessionsLibrary.GetExtraSettings
	// void GetExtraSettings(FBlueprintSessionResult SessionResult, TArray<FSessionPropertyKeyPair>& ExtraSettings);         // [0x18b2d50] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AdvancedSessions.AdvancedSessionsLibrary.GetCurrentUniqueBuildID
	// void GetCurrentUniqueBuildID(int32_t& UniqueBuildId);                                                                 // [0x18b2cc0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/AdvancedSessions.AdvancedSessionsLibrary.GetCurrentSessionID_AsString
	// void GetCurrentSessionID_AsString(class UObject* WorldContextObject, FString& SessionID);                             // [0x18b2be0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/AdvancedSessions.AdvancedSessionsLibrary.FindSessionPropertyIndexByName
	// void FindSessionPropertyIndexByName(TArray<FSessionPropertyKeyPair>& ExtraSettings, FName SettingName, EBlueprintResultSwitch& Result, int32_t& OutIndex); // [0x18b28e0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AdvancedSessions.AdvancedSessionsLibrary.FindSessionPropertyByName
	// void FindSessionPropertyByName(TArray<FSessionPropertyKeyPair>& ExtraSettings, FName SettingsName, EBlueprintResultSwitch& Result, FSessionPropertyKeyPair& OutProperty); // [0x18b2720] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AdvancedSessions.AdvancedSessionsLibrary.EqualEqual_UNetIDUnetID
	// bool EqualEqual_UNetIDUnetID(FBPUniqueNetId& A, FBPUniqueNetId& B);                                                   // [0x18b25a0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/AdvancedSessions.AdvancedSessionsLibrary.BanPlayer
	// bool BanPlayer(class UObject* WorldContextObject, class APlayerController* PlayerToBan, FText BanReason);             // [0x18b2410] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AdvancedSessions.AdvancedSessionsLibrary.AddOrModifyExtraSettings
	// void AddOrModifyExtraSettings(TArray<FSessionPropertyKeyPair>& SettingsArray, TArray<FSessionPropertyKeyPair>& NewOrChangedSettings, TArray<FSessionPropertyKeyPair>& ModifiedSettingsArray); // [0x18b2230] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/AdvancedSessions.AdvancedVoiceLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UAdvancedVoiceLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/AdvancedSessions.AdvancedVoiceLibrary.UnRegisterRemoteTalker
	// bool UnRegisterRemoteTalker(FBPUniqueNetId& UniqueNetId);                                                             // [0x18bd610] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AdvancedSessions.AdvancedVoiceLibrary.UnRegisterLocalTalker
	// void UnRegisterLocalTalker(char LocalPlayerNum);                                                                      // [0x18bd5a0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AdvancedSessions.AdvancedVoiceLibrary.UnRegisterAllLocalTalkers
	// void UnRegisterAllLocalTalkers();                                                                                     // [0x18bd580] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AdvancedSessions.AdvancedVoiceLibrary.UnMuteRemoteTalker
	// bool UnMuteRemoteTalker(char LocalUserNum, FBPUniqueNetId& UniqueNetId, bool bIsSystemWide);                          // [0x18bd410] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AdvancedSessions.AdvancedVoiceLibrary.StopNetworkedVoice
	// void StopNetworkedVoice(char LocalPlayerNum);                                                                         // [0x18bd3a0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AdvancedSessions.AdvancedVoiceLibrary.StartNetworkedVoice
	// void StartNetworkedVoice(char LocalPlayerNum);                                                                        // [0x18bd330] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AdvancedSessions.AdvancedVoiceLibrary.RemoveAllRemoteTalkers
	// void RemoveAllRemoteTalkers();                                                                                        // [0x18bd1a0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AdvancedSessions.AdvancedVoiceLibrary.RegisterRemoteTalker
	// bool RegisterRemoteTalker(FBPUniqueNetId& UniqueNetId);                                                               // [0x18bd0c0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AdvancedSessions.AdvancedVoiceLibrary.RegisterLocalTalker
	// bool RegisterLocalTalker(char LocalPlayerNum);                                                                        // [0x18bd040] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AdvancedSessions.AdvancedVoiceLibrary.RegisterAllLocalTalkers
	// void RegisterAllLocalTalkers();                                                                                       // [0x18bd020] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AdvancedSessions.AdvancedVoiceLibrary.MuteRemoteTalker
	// bool MuteRemoteTalker(char LocalUserNum, FBPUniqueNetId& UniqueNetId, bool bIsSystemWide);                            // [0x18bceb0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AdvancedSessions.AdvancedVoiceLibrary.IsRemotePlayerTalking
	// bool IsRemotePlayerTalking(FBPUniqueNetId& UniqueNetId);                                                              // [0x18bca80] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/AdvancedSessions.AdvancedVoiceLibrary.IsPlayerMuted
	// bool IsPlayerMuted(char LocalUserNumChecking, FBPUniqueNetId& UniqueNetId);                                           // [0x18bc960] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/AdvancedSessions.AdvancedVoiceLibrary.IsLocalPlayerTalking
	// bool IsLocalPlayerTalking(char LocalPlayerNum);                                                                       // [0x18bc8e0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/AdvancedSessions.AdvancedVoiceLibrary.IsHeadsetPresent
	// void IsHeadsetPresent(bool& bHasHeadset, char LocalPlayerNum);                                                        // [0x18bc800] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/AdvancedSessions.AdvancedVoiceLibrary.GetNumLocalTalkers
	// void GetNumLocalTalkers(int32_t& NumLocalTalkers);                                                                    // [0x18bc600] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
};

/// Class /Script/AdvancedSessions.AutoLoginUserCallbackProxy
/// Size: 0x0048 (0x000030 - 0x000078)
class UAutoLoginUserCallbackProxy : public UOnlineBlueprintCallProxyBase
{ 
public:
	SDK_UNDEFINED(16,974) /* FMulticastInlineDelegate */ __um(OnSuccess);                                          // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,975) /* FMulticastInlineDelegate */ __um(OnFailure);                                          // 0x0040   (0x0010)  
	unsigned char                                      UnknownData00_6[0x28];                                      // 0x0050   (0x0028)  MISSED


	/// Functions
	// Function /Script/AdvancedSessions.AutoLoginUserCallbackProxy.AutoLoginUser
	// class UAutoLoginUserCallbackProxy* AutoLoginUser(class UObject* WorldContextObject, int32_t LocalUserNum);            // [0x18bb570] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/AdvancedSessions.CancelFindSessionsCallbackProxy
/// Size: 0x0048 (0x000030 - 0x000078)
class UCancelFindSessionsCallbackProxy : public UOnlineBlueprintCallProxyBase
{ 
public:
	SDK_UNDEFINED(16,976) /* FMulticastInlineDelegate */ __um(OnSuccess);                                          // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,977) /* FMulticastInlineDelegate */ __um(OnFailure);                                          // 0x0040   (0x0010)  
	unsigned char                                      UnknownData00_6[0x28];                                      // 0x0050   (0x0028)  MISSED


	/// Functions
	// Function /Script/AdvancedSessions.CancelFindSessionsCallbackProxy.CancelFindSessions
	// class UCancelFindSessionsCallbackProxy* CancelFindSessions(class UObject* WorldContextObject, class APlayerController* PlayerController); // [0x18bb640] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/AdvancedSessions.CreateSessionCallbackProxyAdvanced
/// Size: 0x0088 (0x000030 - 0x0000B8)
class UCreateSessionCallbackProxyAdvanced : public UOnlineBlueprintCallProxyBase
{ 
public:
	SDK_UNDEFINED(16,978) /* FMulticastInlineDelegate */ __um(OnSuccess);                                          // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,979) /* FMulticastInlineDelegate */ __um(OnFailure);                                          // 0x0040   (0x0010)  
	unsigned char                                      UnknownData00_6[0x68];                                      // 0x0050   (0x0068)  MISSED


	/// Functions
	// Function /Script/AdvancedSessions.CreateSessionCallbackProxyAdvanced.CreateAdvancedSession
	// class UCreateSessionCallbackProxyAdvanced* CreateAdvancedSession(class UObject* WorldContextObject, TArray<FSessionPropertyKeyPair>& ExtraSettings, class APlayerController* PlayerController, int32_t PublicConnections, int32_t PrivateConnections, bool bUseLAN, bool bAllowInvites, bool bIsDedicatedServer, bool bUsePresence, bool bUseLobbiesIfAvailable, bool bAllowJoinViaPresence, bool bAllowJoinViaPresenceFriendsOnly, bool bAntiCheatProtected, bool bUsesStats, bool bShouldAdvertise, bool bUseLobbiesVoiceChatIfAvailable, bool bStartAfterCreate); // [0x18bb710] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/AdvancedSessions.EndSessionCallbackProxy
/// Size: 0x0048 (0x000030 - 0x000078)
class UEndSessionCallbackProxy : public UOnlineBlueprintCallProxyBase
{ 
public:
	SDK_UNDEFINED(16,980) /* FMulticastInlineDelegate */ __um(OnSuccess);                                          // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,981) /* FMulticastInlineDelegate */ __um(OnFailure);                                          // 0x0040   (0x0010)  
	unsigned char                                      UnknownData00_6[0x28];                                      // 0x0050   (0x0028)  MISSED


	/// Functions
	// Function /Script/AdvancedSessions.EndSessionCallbackProxy.EndSession
	// class UEndSessionCallbackProxy* EndSession(class UObject* WorldContextObject, class APlayerController* PlayerController); // [0x18bbc60] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/AdvancedSessions.FindFriendSessionCallbackProxy
/// Size: 0x0068 (0x000030 - 0x000098)
class UFindFriendSessionCallbackProxy : public UOnlineBlueprintCallProxyBase
{ 
public:
	SDK_UNDEFINED(16,982) /* FMulticastInlineDelegate */ __um(OnSuccess);                                          // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,983) /* FMulticastInlineDelegate */ __um(OnFailure);                                          // 0x0040   (0x0010)  
	unsigned char                                      UnknownData00_6[0x48];                                      // 0x0050   (0x0048)  MISSED


	/// Functions
	// Function /Script/AdvancedSessions.FindFriendSessionCallbackProxy.FindFriendSession
	// class UFindFriendSessionCallbackProxy* FindFriendSession(class UObject* WorldContextObject, class APlayerController* PlayerController, FBPUniqueNetId& FriendUniqueNetId); // [0x18bbf10] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/AdvancedSessions.FindSessionsCallbackProxyAdvanced
/// Size: 0x00A0 (0x000030 - 0x0000D0)
class UFindSessionsCallbackProxyAdvanced : public UOnlineBlueprintCallProxyBase
{ 
public:
	SDK_UNDEFINED(16,984) /* FMulticastInlineDelegate */ __um(OnSuccess);                                          // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,985) /* FMulticastInlineDelegate */ __um(OnFailure);                                          // 0x0040   (0x0010)  
	unsigned char                                      UnknownData00_6[0x80];                                      // 0x0050   (0x0080)  MISSED


	/// Functions
	// Function /Script/AdvancedSessions.FindSessionsCallbackProxyAdvanced.FindSessionsAdvanced
	// class UFindSessionsCallbackProxyAdvanced* FindSessionsAdvanced(class UObject* WorldContextObject, class APlayerController* PlayerController, int32_t MaxResults, bool bUseLAN, EBPServerPresenceSearchType ServerTypeToSearch, TArray<FSessionsSearchSetting>& Filters, bool bEmptyServersOnly, bool bNonEmptyServersOnly, bool bSecureServersOnly, bool bSearchLobbies, int32_t MinSlotsAvailable); // [0x18bc080] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AdvancedSessions.FindSessionsCallbackProxyAdvanced.FilterSessionResults
	// void FilterSessionResults(TArray<FBlueprintSessionResult>& SessionResults, TArray<FSessionsSearchSetting>& Filters, TArray<FBlueprintSessionResult>& FilteredResults); // [0x18bbd30] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/AdvancedSessions.GetFriendsCallbackProxy
/// Size: 0x0040 (0x000030 - 0x000070)
class UGetFriendsCallbackProxy : public UOnlineBlueprintCallProxyBase
{ 
public:
	SDK_UNDEFINED(16,986) /* FMulticastInlineDelegate */ __um(OnSuccess);                                          // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,987) /* FMulticastInlineDelegate */ __um(OnFailure);                                          // 0x0040   (0x0010)  
	unsigned char                                      UnknownData00_6[0x20];                                      // 0x0050   (0x0020)  MISSED


	/// Functions
	// Function /Script/AdvancedSessions.GetFriendsCallbackProxy.GetAndStoreFriendsList
	// class UGetFriendsCallbackProxy* GetAndStoreFriendsList(class UObject* WorldContextObject, class APlayerController* PlayerController); // [0x18bc410] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/AdvancedSessions.GetRecentPlayersCallbackProxy
/// Size: 0x0060 (0x000030 - 0x000090)
class UGetRecentPlayersCallbackProxy : public UOnlineBlueprintCallProxyBase
{ 
public:
	SDK_UNDEFINED(16,988) /* FMulticastInlineDelegate */ __um(OnSuccess);                                          // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,989) /* FMulticastInlineDelegate */ __um(OnFailure);                                          // 0x0040   (0x0010)  
	unsigned char                                      UnknownData00_6[0x40];                                      // 0x0050   (0x0040)  MISSED


	/// Functions
	// Function /Script/AdvancedSessions.GetRecentPlayersCallbackProxy.GetAndStoreRecentPlayersList
	// class UGetRecentPlayersCallbackProxy* GetAndStoreRecentPlayersList(class UObject* WorldContextObject, FBPUniqueNetId& UniqueNetId); // [0x18bc4e0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/AdvancedSessions.GetUserPrivilegeCallbackProxy
/// Size: 0x0050 (0x000030 - 0x000080)
class UGetUserPrivilegeCallbackProxy : public UOnlineBlueprintCallProxyBase
{ 
public:
	SDK_UNDEFINED(16,990) /* FMulticastInlineDelegate */ __um(OnSuccess);                                          // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,991) /* FMulticastInlineDelegate */ __um(OnFailure);                                          // 0x0040   (0x0010)  
	unsigned char                                      UnknownData00_6[0x30];                                      // 0x0050   (0x0030)  MISSED


	/// Functions
	// Function /Script/AdvancedSessions.GetUserPrivilegeCallbackProxy.GetUserPrivilege
	// class UGetUserPrivilegeCallbackProxy* GetUserPrivilege(class UObject* WorldContextObject, EBPUserPrivileges& PrivilegeToCheck, FBPUniqueNetId& PlayerUniqueNetID); // [0x18bc690] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/AdvancedSessions.LoginUserCallbackProxy
/// Size: 0x0078 (0x000030 - 0x0000A8)
class ULoginUserCallbackProxy : public UOnlineBlueprintCallProxyBase
{ 
public:
	SDK_UNDEFINED(16,992) /* FMulticastInlineDelegate */ __um(OnSuccess);                                          // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,993) /* FMulticastInlineDelegate */ __um(OnFailure);                                          // 0x0040   (0x0010)  
	unsigned char                                      UnknownData00_6[0x58];                                      // 0x0050   (0x0058)  MISSED


	/// Functions
	// Function /Script/AdvancedSessions.LoginUserCallbackProxy.LoginUser
	// class ULoginUserCallbackProxy* LoginUser(class UObject* WorldContextObject, class APlayerController* PlayerController, FString UserId, FString UserToken, FString AuthType); // [0x18bcb60] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/AdvancedSessions.LogoutUserCallbackProxy
/// Size: 0x0048 (0x000030 - 0x000078)
class ULogoutUserCallbackProxy : public UOnlineBlueprintCallProxyBase
{ 
public:
	SDK_UNDEFINED(16,994) /* FMulticastInlineDelegate */ __um(OnSuccess);                                          // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,995) /* FMulticastInlineDelegate */ __um(OnFailure);                                          // 0x0040   (0x0010)  
	unsigned char                                      UnknownData00_6[0x28];                                      // 0x0050   (0x0028)  MISSED


	/// Functions
	// Function /Script/AdvancedSessions.LogoutUserCallbackProxy.LogoutUser
	// class ULogoutUserCallbackProxy* LogoutUser(class UObject* WorldContextObject, class APlayerController* PlayerController); // [0x18bcde0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/AdvancedSessions.SendFriendInviteCallbackProxy
/// Size: 0x0060 (0x000030 - 0x000090)
class USendFriendInviteCallbackProxy : public UOnlineBlueprintCallProxyBase
{ 
public:
	SDK_UNDEFINED(16,996) /* FMulticastInlineDelegate */ __um(OnSuccess);                                          // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,997) /* FMulticastInlineDelegate */ __um(OnFailure);                                          // 0x0040   (0x0010)  
	unsigned char                                      UnknownData00_6[0x40];                                      // 0x0050   (0x0040)  MISSED


	/// Functions
	// Function /Script/AdvancedSessions.SendFriendInviteCallbackProxy.SendFriendInvite
	// class USendFriendInviteCallbackProxy* SendFriendInvite(class UObject* WorldContextObject, class APlayerController* PlayerController, FBPUniqueNetId& UniqueNetIDInvited); // [0x18bd1c0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/AdvancedSessions.StartSessionCallbackProxyAdvanced
/// Size: 0x0040 (0x000030 - 0x000070)
class UStartSessionCallbackProxyAdvanced : public UOnlineBlueprintCallProxyBase
{ 
public:
	SDK_UNDEFINED(16,998) /* FMulticastInlineDelegate */ __um(OnSuccess);                                          // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,999) /* FMulticastInlineDelegate */ __um(OnFailure);                                          // 0x0040   (0x0010)  
	unsigned char                                      UnknownData00_6[0x20];                                      // 0x0050   (0x0020)  MISSED


	/// Functions
	// Function /Script/AdvancedSessions.StartSessionCallbackProxyAdvanced.StartAdvancedSession
	// class UStartSessionCallbackProxyAdvanced* StartAdvancedSession(class UObject* WorldContextObject);                    // [0x18ccce0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/AdvancedSessions.UpdateSessionCallbackProxyAdvanced
/// Size: 0x0068 (0x000030 - 0x000098)
class UUpdateSessionCallbackProxyAdvanced : public UOnlineBlueprintCallProxyBase
{ 
public:
	SDK_UNDEFINED(16,1000) /* FMulticastInlineDelegate */ __um(OnSuccess);                                         // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,1001) /* FMulticastInlineDelegate */ __um(OnFailure);                                         // 0x0040   (0x0010)  
	unsigned char                                      UnknownData00_6[0x48];                                      // 0x0050   (0x0048)  MISSED


	/// Functions
	// Function /Script/AdvancedSessions.UpdateSessionCallbackProxyAdvanced.UpdateSession
	// class UUpdateSessionCallbackProxyAdvanced* UpdateSession(class UObject* WorldContextObject, TArray<FSessionPropertyKeyPair>& ExtraSettings, int32_t PublicConnections, int32_t PrivateConnections, bool bUseLAN, bool bAllowInvites, bool bAllowJoinInProgress, bool bRefreshOnlineData, bool bIsDedicatedServer); // [0x18cce00] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Struct /Script/AdvancedSessions.BPUniqueNetId
/// Size: 0x0020 (0x000000 - 0x000020)
struct FBPUniqueNetId
{ 
	unsigned char                                      UnknownData00_1[0x20];                                      // 0x0000   (0x0020)  MISSED
};

/// Struct /Script/AdvancedSessions.BPFriendPresenceInfo
/// Size: 0x0018 (0x000000 - 0x000018)
struct FBPFriendPresenceInfo
{ 
	bool                                               bIsOnline;                                                  // 0x0000   (0x0001)  
	bool                                               BIsPlaying;                                                 // 0x0001   (0x0001)  
	bool                                               bIsPlayingThisGame;                                         // 0x0002   (0x0001)  
	bool                                               bIsJoinable;                                                // 0x0003   (0x0001)  
	bool                                               bHasVoiceSupport;                                           // 0x0004   (0x0001)  
	EBPOnlinePresenceState                             PresenceState;                                              // 0x0005   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x0006   (0x0002)  MISSED
	SDK_UNDEFINED(16,1002) /* FString */               __um(StatusString);                                         // 0x0008   (0x0010)  
};

/// Struct /Script/AdvancedSessions.BPFriendInfo
/// Size: 0x0068 (0x000000 - 0x000068)
struct FBPFriendInfo
{ 
	SDK_UNDEFINED(16,1003) /* FString */               __um(DisplayName);                                          // 0x0000   (0x0010)  
	SDK_UNDEFINED(16,1004) /* FString */               __um(RealName);                                             // 0x0010   (0x0010)  
	EBPOnlinePresenceState                             OnlineState;                                                // 0x0020   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0021   (0x0007)  MISSED
	FBPUniqueNetId                                     UniqueNetId;                                                // 0x0028   (0x0020)  
	bool                                               bIsPlayingSameGame;                                         // 0x0048   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0049   (0x0007)  MISSED
	FBPFriendPresenceInfo                              PresenceInfo;                                               // 0x0050   (0x0018)  
};

/// Struct /Script/AdvancedSessions.BPOnlineUser
/// Size: 0x0040 (0x000000 - 0x000040)
struct FBPOnlineUser
{ 
	FBPUniqueNetId                                     UniqueNetId;                                                // 0x0000   (0x0020)  
	SDK_UNDEFINED(16,1005) /* FString */               __um(DisplayName);                                          // 0x0020   (0x0010)  
	SDK_UNDEFINED(16,1006) /* FString */               __um(RealName);                                             // 0x0030   (0x0010)  
};

/// Struct /Script/AdvancedSessions.BPOnlineRecentPlayer
/// Size: 0x0010 (0x000040 - 0x000050)
struct FBPOnlineRecentPlayer : FBPOnlineUser
{ 
	SDK_UNDEFINED(16,1007) /* FString */               __um(LastSeen);                                             // 0x0040   (0x0010)  
};

/// Struct /Script/AdvancedSessions.BPUserOnlineAccount
/// Size: 0x0010 (0x000000 - 0x000010)
struct FBPUserOnlineAccount
{ 
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0000   (0x0010)  MISSED
};

/// Struct /Script/AdvancedSessions.SessionPropertyKeyPair
/// Size: 0x0020 (0x000000 - 0x000020)
struct FSessionPropertyKeyPair
{ 
	unsigned char                                      UnknownData00_1[0x20];                                      // 0x0000   (0x0020)  MISSED
};

/// Struct /Script/AdvancedSessions.SessionsSearchSetting
/// Size: 0x0028 (0x000000 - 0x000028)
struct FSessionsSearchSetting
{ 
	unsigned char                                      UnknownData00_1[0x28];                                      // 0x0000   (0x0028)  MISSED
};

