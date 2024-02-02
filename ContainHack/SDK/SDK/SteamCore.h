
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: DeveloperSettings
/// dependency: Engine
/// dependency: OnlineSubsystemUtils

/// Enum /Script/SteamCore.ESteamResult
/// Size: 0x115
enum class ESteamResult : uint8_t
{
	ESteamResult__None                                                               = 0,
	ESteamResult__OK                                                                 = 1,
	ESteamResult__Fail                                                               = 2,
	ESteamResult__NoConnection                                                       = 3,
	ESteamResult__sultNoConnectionRetry                                              = 4,
	ESteamResult__InvalidPassword                                                    = 5,
	ESteamResult__LoggedInElsewhere                                                  = 6,
	ESteamResult__InvalidProtocolVer                                                 = 7,
	ESteamResult__InvalidParam                                                       = 8,
	ESteamResult__FileNotFound                                                       = 9,
	ESteamResult__Busy                                                               = 10,
	ESteamResult__InvalidState                                                       = 11,
	ESteamResult__InvalidName                                                        = 12,
	ESteamResult__InvalidEmail                                                       = 13,
	ESteamResult__DuplicateName                                                      = 14,
	ESteamResult__AccessDenied                                                       = 15,
	ESteamResult__Timeout                                                            = 16,
	ESteamResult__Banned                                                             = 17,
	ESteamResult__AccountNotFound                                                    = 18,
	ESteamResult__InvalidSteamID                                                     = 19,
	ESteamResult__ServiceUnavailable                                                 = 20,
	ESteamResult__NotLoggedOn                                                        = 21,
	ESteamResult__Pending                                                            = 22,
	ESteamResult__EncryptionFailure                                                  = 23,
	ESteamResult__InsufficientPrivilege                                              = 24,
	ESteamResult__LimitExceeded                                                      = 25,
	ESteamResult__Revoked                                                            = 26,
	ESteamResult__Expired                                                            = 27,
	ESteamResult__AlreadyRedeemed                                                    = 28,
	ESteamResult__DuplicateRequest                                                   = 29,
	ESteamResult__AlreadyOwned                                                       = 30,
	ESteamResult__IPNotFound                                                         = 31,
	ESteamResult__PersistFailed                                                      = 32,
	ESteamResult__LockingFailed                                                      = 33,
	ESteamResult__LogonSessionReplaced                                               = 34,
	ESteamResult__ConnectFailed                                                      = 35,
	ESteamResult__HandshakeFailed                                                    = 36,
	ESteamResult__IOFailure                                                          = 37,
	ESteamResult__RemoteDisconnect                                                   = 38,
	ESteamResult__ShoppingCartNotFound                                               = 39,
	ESteamResult__Blocked                                                            = 40,
	ESteamResult__Ignored                                                            = 41,
	ESteamResult__NoMatch                                                            = 42,
	ESteamResult__AccountDisabled                                                    = 43,
	ESteamResult__ServiceReadOnly                                                    = 44,
	ESteamResult__AccountNotFeatured                                                 = 45,
	ESteamResult__AdministratorOK                                                    = 46,
	ESteamResult__ContentVersion                                                     = 47,
	ESteamResult__TryAnotherCM                                                       = 48,
	ESteamResult__PasswordRequiredToKickSession                                      = 49,
	ESteamResult__AlreadyLoggedInElsewhere                                           = 50,
	ESteamResult__Suspended                                                          = 51,
	ESteamResult__Cancelled                                                          = 52,
	ESteamResult__DataCorruption                                                     = 53,
	ESteamResult__DiskFull                                                           = 54,
	ESteamResult__RemoteCallFailed                                                   = 55,
	ESteamResult__PasswordUnset                                                      = 56,
	ESteamResult__ExternalAccountUnlinked                                            = 57,
	ESteamResult__PSNTicketInvalid                                                   = 58,
	ESteamResult__ExternalAccountAlreadyLinked                                       = 59,
	ESteamResult__RemoteFileConflict                                                 = 60,
	ESteamResult__IllegalPassword                                                    = 61,
	ESteamResult__SameAsPreviousValue                                                = 62,
	ESteamResult__AccountLogonDenied                                                 = 63,
	ESteamResult__CannotUseOldPassword                                               = 64,
	ESteamResult__InvalidLoginAuthCode                                               = 65,
	ESteamResult__AccountLogonDeniedNoMail                                           = 66,
	ESteamResult__HardwareNotCapableOfIPT                                            = 67,
	ESteamResult__IPTInitError                                                       = 68,
	ESteamResult__ParentalControlRestricted                                          = 69,
	ESteamResult__FacebookQueryError                                                 = 70,
	ESteamResult__ExpiredLoginAuthCode                                               = 71,
	ESteamResult__IPLoginRestrictionFailed                                           = 72,
	ESteamResult__AccountLockedDown                                                  = 73,
	ESteamResult__AccountLogonDeniedVerifiedEmailRequired                            = 74,
	ESteamResult__NoMatchingURL                                                      = 75,
	ESteamResult__BadResponse                                                        = 76,
	ESteamResult__RequirePasswordReEntry                                             = 77,
	ESteamResult__ValueOutOfRange                                                    = 78,
	ESteamResult__UnexpectedError                                                    = 79,
	ESteamResult__Disabled                                                           = 80,
	ESteamResult__InvalidCEGSubmission                                               = 81,
	ESteamResult__RestrictedDevice                                                   = 82,
	ESteamResult__RegionLocked                                                       = 83,
	ESteamResult__RateLimitExceeded                                                  = 84,
	ESteamResult__AccountLoginDeniedNeedTwoFactor                                    = 85,
	ESteamResult__ItemDeleted                                                        = 86,
	ESteamResult__AccountLoginDeniedThrottle                                         = 87,
	ESteamResult__TwoFactorCodeMismatch                                              = 88,
	ESteamResult__TwoFactorActivationCodeMismatch                                    = 89,
	ESteamResult__AccountAssociatedToMultiplePartners                                = 90,
	ESteamResult__NotModified                                                        = 91,
	ESteamResult__NoMobileDevice                                                     = 92,
	ESteamResult__TimeNotSynced                                                      = 93,
	ESteamResult__SmsCodeFailed                                                      = 94,
	ESteamResult__AccountLimitExceeded                                               = 95,
	ESteamResult__AccountActivityLimitExceeded                                       = 96,
	ESteamResult__PhoneActivityLimitExceeded                                         = 97,
	ESteamResult__RefundToWallet                                                     = 98,
	ESteamResult__EmailSendFailure                                                   = 99,
	ESteamResult__NotSettled                                                         = 100,
	ESteamResult__NeedCaptcha                                                        = 101,
	ESteamResult__GSLTDenied                                                         = 102,
	ESteamResult__GSOwnerDenied                                                      = 103,
	ESteamResult__InvalidItemType                                                    = 104,
	ESteamResult__IPBanned                                                           = 105,
	ESteamResult__GSLTExpired                                                        = 106,
	ESteamResult__InsufficientFunds                                                  = 107,
	ESteamResult__TooManyPending                                                     = 108,
	ESteamResult__NoSiteLicensesFound                                                = 109,
	ESteamResult__WGNetworkSendExceeded                                              = 110,
	ESteamResult__AccountNotFriends                                                  = 111,
	ESteamResult__LimitedUserAccount                                                 = 112,
	ESteamResult__CantRemoveItem                                                     = 113,
	ESteamResult__ESteamResult_MAX                                                   = 114
};

/// Enum /Script/SteamCore.ESteamCheckFileSignature
/// Size: 0x06
enum class ESteamCheckFileSignature : uint8_t
{
	ESteamCheckFileSignature__InvalidSignature                                       = 0,
	ESteamCheckFileSignature__ValidSignature                                         = 1,
	ESteamCheckFileSignature__FileNotFound                                           = 2,
	ESteamCheckFileSignature__NoSignaturesFoundForThisApp                            = 3,
	ESteamCheckFileSignature__NoSignaturesFoundForThisFile                           = 4,
	ESteamCheckFileSignature__ESteamCheckFileSignature_MAX                           = 5
};

/// Enum /Script/SteamCore.ESteamDenyReason
/// Size: 0x17
enum class ESteamDenyReason : uint8_t
{
	ESteamDenyReason__Invalid                                                        = 0,
	ESteamDenyReason__InvalidVersion                                                 = 1,
	ESteamDenyReason__Generic                                                        = 2,
	ESteamDenyReason__NotLoggedOn                                                    = 3,
	ESteamDenyReason__NoLicense                                                      = 4,
	ESteamDenyReason__Cheater                                                        = 5,
	ESteamDenyReason__LoggedInElseWhere                                              = 6,
	ESteamDenyReason__UnknownText                                                    = 7,
	ESteamDenyReason__IncompatibleAnticheat                                          = 8,
	ESteamDenyReason__MemoryCorruption                                               = 9,
	ESteamDenyReason__IncompatibleSoftware                                           = 10,
	ESteamDenyReason__SteamConnectionLost                                            = 11,
	ESteamDenyReason__SteamConnectionError                                           = 12,
	ESteamDenyReason__SteamResponseTimedOut                                          = 13,
	ESteamDenyReason__SteamValidationStalled                                         = 14,
	ESteamDenyReason__SteamOwnerLeftGuestUser                                        = 15,
	ESteamDenyReason__ESteamDenyReason_MAX                                           = 16
};

/// Enum /Script/SteamCore.ESteamFavoriteFlags
/// Size: 0x04
enum class ESteamFavoriteFlags : uint8_t
{
	ESteamFavoriteFlags__None                                                        = 0,
	ESteamFavoriteFlags__Favorite                                                    = 1,
	ESteamFavoriteFlags__History                                                     = 2,
	ESteamFavoriteFlags__ESteamFavoriteFlags_MAX                                     = 3
};

/// Enum /Script/SteamCore.ESteamAuthSessionResponse
/// Size: 0x11
enum class ESteamAuthSessionResponse : uint8_t
{
	ESteamAuthSessionResponse__OK                                                    = 0,
	ESteamAuthSessionResponse__UserNotConnectedToSteam                               = 1,
	ESteamAuthSessionResponse__NoLicenseOrExpired                                    = 2,
	ESteamAuthSessionResponse__VACBanned                                             = 3,
	ESteamAuthSessionResponse__LoggedInElseWhere                                     = 4,
	ESteamAuthSessionResponse__VACCheckTimedOut                                      = 5,
	ESteamAuthSessionResponse__AuthTicketCanceled                                    = 6,
	ESteamAuthSessionResponse__AuthTicketInvalidAlreadyUsed                          = 7,
	ESteamAuthSessionResponse__AuthTicketInvalid                                     = 8,
	ESteamAuthSessionResponse__PublisherIssuedBan                                    = 9,
	ESteamAuthSessionResponse__ESteamAuthSessionResponse_MAX                         = 10
};

/// Enum /Script/SteamCore.ESteamFailureType
/// Size: 0x03
enum class ESteamFailureType : uint8_t
{
	ESteamFailureType__FlushedCallbackQueue                                          = 0,
	ESteamFailureType__PipeFail                                                      = 1,
	ESteamFailureType__ESteamFailureType_MAX                                         = 2
};

/// Enum /Script/SteamCore.ESteamChatRoomEnterResponse
/// Size: 0x14
enum class ESteamChatRoomEnterResponse : uint8_t
{
	ESteamChatRoomEnterResponse__None                                                = 0,
	ESteamChatRoomEnterResponse__Success                                             = 1,
	ESteamChatRoomEnterResponse__DoesntExist                                         = 2,
	ESteamChatRoomEnterResponse__NotAllowed                                          = 3,
	ESteamChatRoomEnterResponse__Full                                                = 4,
	ESteamChatRoomEnterResponse__Error                                               = 5,
	ESteamChatRoomEnterResponse__Banned                                              = 6,
	ESteamChatRoomEnterResponse__Limited                                             = 7,
	ESteamChatRoomEnterResponse__ClanDisabled                                        = 8,
	ESteamChatRoomEnterResponse__CommunityBan                                        = 9,
	ESteamChatRoomEnterResponse__MemberBlockedYou                                    = 10,
	ESteamChatRoomEnterResponse__YouBlockedMember                                    = 11,
	ESteamChatRoomEnterResponse__RatelimitExceeded                                   = 15,
	ESteamChatRoomEnterResponse__ESteamChatRoomEnterResponse_MAX                     = 16
};

/// Enum /Script/SteamCore.ESteamChatEntryType
/// Size: 0x13
enum class ESteamChatEntryType : uint8_t
{
	ESteamChatEntryType__Invalid                                                     = 0,
	ESteamChatEntryType__ChatMsg                                                     = 1,
	ESteamChatEntryType__Typing                                                      = 2,
	ESteamChatEntryType__InviteGame                                                  = 3,
	ESteamChatEntryType__Emote                                                       = 4,
	ESteamChatEntryType__LeftConversation                                            = 6,
	ESteamChatEntryType__Entered                                                     = 7,
	ESteamChatEntryType__WasKicked                                                   = 8,
	ESteamChatEntryType__WasBanned                                                   = 9,
	ESteamChatEntryType__Disconnected                                                = 10,
	ESteamChatEntryType__HistoricalChat                                              = 11,
	ESteamChatEntryType__LinkBlocked                                                 = 14,
	ESteamChatEntryType__ESteamChatEntryType_MAX                                     = 15
};

/// Enum /Script/SteamCore.ESteamChatMemberStateChange
/// Size: 0x07
enum class ESteamChatMemberStateChange : uint8_t
{
	ESteamChatMemberStateChange__None                                                = 0,
	ESteamChatMemberStateChange__Entered                                             = 1,
	ESteamChatMemberStateChange__Left                                                = 2,
	ESteamChatMemberStateChange__Disconnected                                        = 4,
	ESteamChatMemberStateChange__Kicked                                              = 8,
	ESteamChatMemberStateChange__Banned                                              = 16,
	ESteamChatMemberStateChange__ESteamChatMemberStateChange_MAX                     = 17
};

/// Enum /Script/SteamCore.ESteamP2PSessionError
/// Size: 0x06
enum class ESteamP2PSessionError : uint8_t
{
	ESteamP2PSessionError__None                                                      = 0,
	ESteamP2PSessionError__NotRunningApp                                             = 1,
	ESteamP2PSessionError__NoRightsToApp                                             = 2,
	ESteamP2PSessionError__DestinationNotLoggedIn                                    = 3,
	ESteamP2PSessionError__Timeout                                                   = 4,
	ESteamP2PSessionError__Max                                                       = 5
};

/// Enum /Script/SteamCore.ESteamPersonaChange
/// Size: 0x15
enum class ESteamPersonaChange : uint8_t
{
	ESteamPersonaChange__Name                                                        = 0,
	ESteamPersonaChange__Status                                                      = 1,
	ESteamPersonaChange__ComeOnline                                                  = 2,
	ESteamPersonaChange__GoneOffline                                                 = 3,
	ESteamPersonaChange__GamePlayed                                                  = 4,
	ESteamPersonaChange__GameServer                                                  = 5,
	ESteamPersonaChange__Avatar                                                      = 6,
	ESteamPersonaChange__JoinedSource                                                = 7,
	ESteamPersonaChange__LeftSource                                                  = 8,
	ESteamPersonaChange__RelationshipChanged                                         = 9,
	ESteamPersonaChange__NameFirstSet                                                = 10,
	ESteamPersonaChange__FacebookInfo                                                = 11,
	ESteamPersonaChange__Nickname                                                    = 12,
	ESteamPersonaChange__SteamLevel                                                  = 13,
	ESteamPersonaChange__ESteamPersonaChange_MAX                                     = 14
};

/// Enum /Script/SteamCore.ESteamMessageType
/// Size: 0x04
enum class ESteamMessageType : uint8_t
{
	ESteamMessageType__ENotification                                                 = 0,
	ESteamMessageType__EMessage                                                      = 1,
	ESteamMessageType__EWarning                                                      = 2,
	ESteamMessageType__ESteamMessageType_MAX                                         = 3
};

/// Enum /Script/SteamCore.ESteamPlayerAcceptState
/// Size: 0x04
enum class ESteamPlayerAcceptState : uint8_t
{
	ESteamPlayerAcceptState__Unknown                                                 = 0,
	ESteamPlayerAcceptState__PlayerAccepted                                          = 1,
	ESteamPlayerAcceptState__PlayerDeclined                                          = 2,
	ESteamPlayerAcceptState__ESteamPlayerAcceptState_MAX                             = 3
};

/// Enum /Script/SteamCore.ESteamSubsystem
/// Size: 0x25
enum class ESteamSubsystem : uint8_t
{
	ESteamSubsystem__SteamCore                                                       = 0,
	ESteamSubsystem__AppList                                                         = 1,
	ESteamSubsystem__Apps                                                            = 2,
	ESteamSubsystem__Friends                                                         = 3,
	ESteamSubsystem__GameServer                                                      = 4,
	ESteamSubsystem__GameServerStats                                                 = 5,
	ESteamSubsystem__Inventory                                                       = 6,
	ESteamSubsystem__Input                                                           = 7,
	ESteamSubsystem__Matchmaking                                                     = 8,
	ESteamSubsystem__MatchmakingServers                                              = 9,
	ESteamSubsystem__Music                                                           = 10,
	ESteamSubsystem__Networking                                                      = 11,
	ESteamSubsystem__NetworkingUtils                                                 = 12,
	ESteamSubsystem__ParentalSettings                                                = 13,
	ESteamSubsystem__RemoteStorage                                                   = 14,
	ESteamSubsystem__RemotePlay                                                      = 15,
	ESteamSubsystem__Screenshots                                                     = 16,
	ESteamSubsystem__UGC                                                             = 17,
	ESteamSubsystem__User                                                            = 18,
	ESteamSubsystem__UserStats                                                       = 19,
	ESteamSubsystem__Utils                                                           = 20,
	ESteamSubsystem__Video                                                           = 21,
	ESteamSubsystem__SteamParties                                                    = 22,
	ESteamSubsystem__GameSearch                                                      = 23,
	ESteamSubsystem__ESteamSubsystem_MAX                                             = 24
};

/// Enum /Script/SteamCore.ESteamActivateGameOverlayToWebPageMode
/// Size: 0x03
enum class ESteamActivateGameOverlayToWebPageMode : uint8_t
{
	ESteamActivateGameOverlayToWebPageMode__Default                                  = 0,
	ESteamActivateGameOverlayToWebPageMode__Modal                                    = 1,
	ESteamActivateGameOverlayToWebPageMode__ESteamActivateGameOverlayToWebPageMode_MAX = 2
};

/// Enum /Script/SteamCore.ESteamFriendRelationship
/// Size: 0x09
enum class ESteamFriendRelationship : uint8_t
{
	ESteamFriendRelationship__None                                                   = 0,
	ESteamFriendRelationship__Blocked                                                = 1,
	ESteamFriendRelationship__RequestRecipient                                       = 2,
	ESteamFriendRelationship__Friend                                                 = 3,
	ESteamFriendRelationship__RequestInitiator                                       = 4,
	ESteamFriendRelationship__Ignored                                                = 5,
	ESteamFriendRelationship__IgnoredFriend                                          = 6,
	ESteamFriendRelationship__Suggested_DEPRECATED                                   = 7,
	ESteamFriendRelationship__Max                                                    = 8
};

/// Enum /Script/SteamCore.ESteamPersonaState
/// Size: 0x08
enum class ESteamPersonaState : uint8_t
{
	ESteamPersonaState__Offline                                                      = 0,
	ESteamPersonaState__Online                                                       = 1,
	ESteamPersonaState__Busy                                                         = 2,
	ESteamPersonaState__Away                                                         = 3,
	ESteamPersonaState__Snooze                                                       = 4,
	ESteamPersonaState__LookingToTrade                                               = 5,
	ESteamPersonaState__LookingToPlay                                                = 6,
	ESteamPersonaState__Max                                                          = 7
};

/// Enum /Script/SteamCore.ESteamFriendFlags
/// Size: 0x13
enum class ESteamFriendFlags : uint8_t
{
	ESteamFriendFlags__None                                                          = 0,
	ESteamFriendFlags__Blocked                                                       = 1,
	ESteamFriendFlags__FriendshipRequested                                           = 2,
	ESteamFriendFlags__Immediate                                                     = 3,
	ESteamFriendFlags__ClanMember                                                    = 4,
	ESteamFriendFlags__OnGameServer                                                  = 5,
	ESteamFriendFlags__RequestingFriendship                                          = 6,
	ESteamFriendFlags__RequestingInfo                                                = 7,
	ESteamFriendFlags__Ignored                                                       = 8,
	ESteamFriendFlags__IgnoredFriend                                                 = 9,
	ESteamFriendFlags__ChatMember                                                    = 10,
	ESteamFriendFlags__All                                                           = 11,
	ESteamFriendFlags__ESteamFriendFlags_MAX                                         = 12
};

/// Enum /Script/SteamCore.ESteamUserRestriction
/// Size: 0x09
enum class ESteamUserRestriction : uint8_t
{
	ESteamUserRestriction__None                                                      = 0,
	ESteamUserRestriction__Unknown                                                   = 1,
	ESteamUserRestriction__AnyChat                                                   = 2,
	ESteamUserRestriction__VoiceChat                                                 = 4,
	ESteamUserRestriction__GroupChat                                                 = 8,
	ESteamUserRestriction__Rating                                                    = 16,
	ESteamUserRestriction__GameInvites                                               = 32,
	ESteamUserRestriction__Trading                                                   = 64,
	ESteamUserRestriction__ESteamUserRestriction_MAX                                 = 65
};

/// Enum /Script/SteamCore.ESteamOverlayToStoreFlag
/// Size: 0x04
enum class ESteamOverlayToStoreFlag : uint8_t
{
	ESteamOverlayToStoreFlag__None                                                   = 0,
	ESteamOverlayToStoreFlag__AddToCart                                              = 1,
	ESteamOverlayToStoreFlag__AddToCartAndShow                                       = 2,
	ESteamOverlayToStoreFlag__ESteamOverlayToStoreFlag_MAX                           = 3
};

/// Enum /Script/SteamCore.ESteamGameSearchErrorCode
/// Size: 0x11
enum class ESteamGameSearchErrorCode : uint8_t
{
	ESteamGameSearchErrorCode__Invalid                                               = 0,
	ESteamGameSearchErrorCode__OK                                                    = 1,
	ESteamGameSearchErrorCode__Failed_Search_Already_In_Progress                     = 2,
	ESteamGameSearchErrorCode__Failed_No_Search_In_Progress                          = 3,
	ESteamGameSearchErrorCode__Failed_Not_Lobby_Leader                               = 4,
	ESteamGameSearchErrorCode__Failed_No_Host_Available                              = 5,
	ESteamGameSearchErrorCode__Failed_Search_Params_Invalid                          = 6,
	ESteamGameSearchErrorCode__Failed_Offline                                        = 7,
	ESteamGameSearchErrorCode__Failed_NotAuthorized                                  = 8,
	ESteamGameSearchErrorCode__Failed_Unknown_Error                                  = 9,
	ESteamGameSearchErrorCode__ESteamGameSearchErrorCode_MAX                         = 10
};

/// Enum /Script/SteamCore.ESteamPlayerResult
/// Size: 0x07
enum class ESteamPlayerResult : uint8_t
{
	ESteamPlayerResult__Invalid                                                      = 0,
	ESteamPlayerResult__FailedToConnect                                              = 1,
	ESteamPlayerResult__Abandoned                                                    = 2,
	ESteamPlayerResult__Kicked                                                       = 3,
	ESteamPlayerResult__Incomplete                                                   = 4,
	ESteamPlayerResult__Completed                                                    = 5,
	ESteamPlayerResult__ESteamPlayerResult_MAX                                       = 6
};

/// Enum /Script/SteamCore.ESteamCoreInputSource
/// Size: 0x19
enum class ESteamCoreInputSource : uint8_t
{
	ESteamCoreInputSource__None                                                      = 0,
	ESteamCoreInputSource__LeftTrackpad                                              = 1,
	ESteamCoreInputSource__RightTrackpad                                             = 2,
	ESteamCoreInputSource__Joystick                                                  = 3,
	ESteamCoreInputSource__ABXY                                                      = 4,
	ESteamCoreInputSource__Switch                                                    = 5,
	ESteamCoreInputSource__LeftTrigger                                               = 6,
	ESteamCoreInputSource__RightTrigger                                              = 7,
	ESteamCoreInputSource__LeftBumper                                                = 8,
	ESteamCoreInputSource__RightBumper                                               = 9,
	ESteamCoreInputSource__Gyro                                                      = 10,
	ESteamCoreInputSource__CenterTrackpad                                            = 11,
	ESteamCoreInputSource__RightJoystick                                             = 12,
	ESteamCoreInputSource__DPad                                                      = 13,
	ESteamCoreInputSource__Key                                                       = 14,
	ESteamCoreInputSource__Mouse                                                     = 15,
	ESteamCoreInputSource__LeftGyro                                                  = 16,
	ESteamCoreInputSource__Count                                                     = 17,
	ESteamCoreInputSource__ESteamCoreInputSource_MAX                                 = 18
};

/// Enum /Script/SteamCore.ESteamCoreInputSourceMode
/// Size: 0x18
enum class ESteamCoreInputSourceMode : uint8_t
{
	ESteamCoreInputSourceMode__None                                                  = 0,
	ESteamCoreInputSourceMode__Dpad                                                  = 1,
	ESteamCoreInputSourceMode__Buttons                                               = 2,
	ESteamCoreInputSourceMode__FourButtons                                           = 3,
	ESteamCoreInputSourceMode__AbsoluteMouse                                         = 4,
	ESteamCoreInputSourceMode__RelativeMouse                                         = 5,
	ESteamCoreInputSourceMode__JoystickMove                                          = 6,
	ESteamCoreInputSourceMode__JoystickMouse                                         = 7,
	ESteamCoreInputSourceMode__JoystickCamera                                        = 8,
	ESteamCoreInputSourceMode__ScrollWheel                                           = 9,
	ESteamCoreInputSourceMode__Trigger                                               = 10,
	ESteamCoreInputSourceMode__TouchMenu                                             = 11,
	ESteamCoreInputSourceMode__MouseJoystick                                         = 12,
	ESteamCoreInputSourceMode__MouseRegion                                           = 13,
	ESteamCoreInputSourceMode__RadialMenu                                            = 14,
	ESteamCoreInputSourceMode__SingleButton                                          = 15,
	ESteamCoreInputSourceMode__Switches                                              = 16,
	ESteamCoreInputSourceMode__ESteamCoreInputSourceMode_MAX                         = 17
};

/// Enum /Script/SteamCore.ESteamCoreInputActionOrigin
/// Size: 0x257
enum class ESteamCoreInputActionOrigin : uint8_t
{
	ESteamCoreInputActionOrigin__None                                                = 0,
	ESteamCoreInputActionOrigin__SteamController_A                                   = 1,
	ESteamCoreInputActionOrigin__SteamController_B                                   = 2,
	ESteamCoreInputActionOrigin__SteamController_X                                   = 3,
	ESteamCoreInputActionOrigin__SteamController_Y                                   = 4,
	ESteamCoreInputActionOrigin__SteamController_LeftBumper                          = 5,
	ESteamCoreInputActionOrigin__SteamController_RightBumper                         = 6,
	ESteamCoreInputActionOrigin__SteamController_LeftGrip                            = 7,
	ESteamCoreInputActionOrigin__SteamController_RightGrip                           = 8,
	ESteamCoreInputActionOrigin__SteamController_Start                               = 9,
	ESteamCoreInputActionOrigin__SteamController_Back                                = 10,
	ESteamCoreInputActionOrigin__SteamController_LeftPad_Touch                       = 11,
	ESteamCoreInputActionOrigin__SteamController_LeftPad_Swipe                       = 12,
	ESteamCoreInputActionOrigin__SteamController_LeftPad_Click                       = 13,
	ESteamCoreInputActionOrigin__SteamController_LeftPad_DPadNorth                   = 14,
	ESteamCoreInputActionOrigin__SteamController_LeftPad_DPadSouth                   = 15,
	ESteamCoreInputActionOrigin__SteamController_LeftPad_DPadWest                    = 16,
	ESteamCoreInputActionOrigin__SteamController_LeftPad_DPadEast                    = 17,
	ESteamCoreInputActionOrigin__SteamController_RightPad_Touch                      = 18,
	ESteamCoreInputActionOrigin__SteamController_RightPad_Swipe                      = 19,
	ESteamCoreInputActionOrigin__SteamController_RightPad_Click                      = 20,
	ESteamCoreInputActionOrigin__SteamController_RightPad_DPadNorth                  = 21,
	ESteamCoreInputActionOrigin__SteamController_RightPad_DPadSouth                  = 22,
	ESteamCoreInputActionOrigin__SteamController_RightPad_DPadWest                   = 23,
	ESteamCoreInputActionOrigin__SteamController_RightPad_DPadEast                   = 24,
	ESteamCoreInputActionOrigin__SteamController_LeftTrigger_Pull                    = 25,
	ESteamCoreInputActionOrigin__SteamController_LeftTrigger_Click                   = 26,
	ESteamCoreInputActionOrigin__SteamController_RightTrigger_Pull                   = 27,
	ESteamCoreInputActionOrigin__SteamController_RightTrigger_Click                  = 28,
	ESteamCoreInputActionOrigin__SteamController_LeftStick_Move                      = 29,
	ESteamCoreInputActionOrigin__SteamController_LeftStick_Click                     = 30,
	ESteamCoreInputActionOrigin__SteamController_LeftStick_DPadNorth                 = 31,
	ESteamCoreInputActionOrigin__SteamController_LeftStick_DPadSouth                 = 32,
	ESteamCoreInputActionOrigin__SteamController_LeftStick_DPadWest                  = 33,
	ESteamCoreInputActionOrigin__SteamController_LeftStick_DPadEast                  = 34,
	ESteamCoreInputActionOrigin__SteamController_Gyro_Move                           = 35,
	ESteamCoreInputActionOrigin__SteamController_Gyro_Pitch                          = 36,
	ESteamCoreInputActionOrigin__SteamController_Gyro_Yaw                            = 37,
	ESteamCoreInputActionOrigin__SteamController_Gyro_Roll                           = 38,
	ESteamCoreInputActionOrigin__SteamController_Reserved0                           = 39,
	ESteamCoreInputActionOrigin__SteamController_Reserved1                           = 40,
	ESteamCoreInputActionOrigin__SteamController_Reserved2                           = 41,
	ESteamCoreInputActionOrigin__SteamController_Reserved3                           = 42,
	ESteamCoreInputActionOrigin__SteamController_Reserved4                           = 43,
	ESteamCoreInputActionOrigin__SteamController_Reserved5                           = 44,
	ESteamCoreInputActionOrigin__SteamController_Reserved6                           = 45,
	ESteamCoreInputActionOrigin__SteamController_Reserved7                           = 46,
	ESteamCoreInputActionOrigin__SteamController_Reserved8                           = 47,
	ESteamCoreInputActionOrigin__SteamController_Reserved9                           = 48,
	ESteamCoreInputActionOrigin__SteamController_Reserved10                          = 49,
	ESteamCoreInputActionOrigin__PS4_X                                               = 50,
	ESteamCoreInputActionOrigin__PS4_Circle                                          = 51,
	ESteamCoreInputActionOrigin__PS4_Triangle                                        = 52,
	ESteamCoreInputActionOrigin__PS4_Square                                          = 53,
	ESteamCoreInputActionOrigin__PS4_LeftBumper                                      = 54,
	ESteamCoreInputActionOrigin__PS4_RightBumper                                     = 55,
	ESteamCoreInputActionOrigin__PS4_Options                                         = 56,
	ESteamCoreInputActionOrigin__PS4_Share                                           = 57,
	ESteamCoreInputActionOrigin__PS4_LeftPad_Touch                                   = 58,
	ESteamCoreInputActionOrigin__PS4_LeftPad_Swipe                                   = 59,
	ESteamCoreInputActionOrigin__PS4_LeftPad_Click                                   = 60,
	ESteamCoreInputActionOrigin__PS4_LeftPad_DPadNorth                               = 61,
	ESteamCoreInputActionOrigin__PS4_LeftPad_DPadSouth                               = 62,
	ESteamCoreInputActionOrigin__PS4_LeftPad_DPadWest                                = 63,
	ESteamCoreInputActionOrigin__PS4_LeftPad_DPadEast                                = 64,
	ESteamCoreInputActionOrigin__PS4_RightPad_Touch                                  = 65,
	ESteamCoreInputActionOrigin__PS4_RightPad_Swipe                                  = 66,
	ESteamCoreInputActionOrigin__PS4_RightPad_Click                                  = 67,
	ESteamCoreInputActionOrigin__PS4_RightPad_DPadNorth                              = 68,
	ESteamCoreInputActionOrigin__PS4_RightPad_DPadSouth                              = 69,
	ESteamCoreInputActionOrigin__PS4_RightPad_DPadWest                               = 70,
	ESteamCoreInputActionOrigin__PS4_RightPad_DPadEast                               = 71,
	ESteamCoreInputActionOrigin__PS4_CenterPad_Touch                                 = 72,
	ESteamCoreInputActionOrigin__PS4_CenterPad_Swipe                                 = 73,
	ESteamCoreInputActionOrigin__PS4_CenterPad_Click                                 = 74,
	ESteamCoreInputActionOrigin__PS4_CenterPad_DPadNorth                             = 75,
	ESteamCoreInputActionOrigin__PS4_CenterPad_DPadSouth                             = 76,
	ESteamCoreInputActionOrigin__PS4_CenterPad_DPadWest                              = 77,
	ESteamCoreInputActionOrigin__PS4_CenterPad_DPadEast                              = 78,
	ESteamCoreInputActionOrigin__PS4_LeftTrigger_Pull                                = 79,
	ESteamCoreInputActionOrigin__PS4_LeftTrigger_Click                               = 80,
	ESteamCoreInputActionOrigin__PS4_RightTrigger_Pull                               = 81,
	ESteamCoreInputActionOrigin__PS4_RightTrigger_Click                              = 82,
	ESteamCoreInputActionOrigin__PS4_LeftStick_Move                                  = 83,
	ESteamCoreInputActionOrigin__PS4_LeftStick_Click                                 = 84,
	ESteamCoreInputActionOrigin__PS4_LeftStick_DPadNorth                             = 85,
	ESteamCoreInputActionOrigin__PS4_LeftStick_DPadSouth                             = 86,
	ESteamCoreInputActionOrigin__PS4_LeftStick_DPadWest                              = 87,
	ESteamCoreInputActionOrigin__PS4_LeftStick_DPadEast                              = 88,
	ESteamCoreInputActionOrigin__PS4_RightStick_Move                                 = 89,
	ESteamCoreInputActionOrigin__PS4_RightStick_Click                                = 90,
	ESteamCoreInputActionOrigin__PS4_RightStick_DPadNorth                            = 91,
	ESteamCoreInputActionOrigin__PS4_RightStick_DPadSouth                            = 92,
	ESteamCoreInputActionOrigin__PS4_RightStick_DPadWest                             = 93,
	ESteamCoreInputActionOrigin__PS4_RightStick_DPadEast                             = 94,
	ESteamCoreInputActionOrigin__PS4_DPad_North                                      = 95,
	ESteamCoreInputActionOrigin__PS4_DPad_South                                      = 96,
	ESteamCoreInputActionOrigin__PS4_DPad_West                                       = 97,
	ESteamCoreInputActionOrigin__PS4_DPad_East                                       = 98,
	ESteamCoreInputActionOrigin__PS4_Gyro_Move                                       = 99,
	ESteamCoreInputActionOrigin__PS4_Gyro_Pitch                                      = 100,
	ESteamCoreInputActionOrigin__PS4_Gyro_Yaw                                        = 101,
	ESteamCoreInputActionOrigin__PS4_Gyro_Roll                                       = 102,
	ESteamCoreInputActionOrigin__PS4_DPad_Move                                       = 103,
	ESteamCoreInputActionOrigin__PS4_Reserved1                                       = 104,
	ESteamCoreInputActionOrigin__PS4_Reserved2                                       = 105,
	ESteamCoreInputActionOrigin__PS4_Reserved3                                       = 106,
	ESteamCoreInputActionOrigin__PS4_Reserved4                                       = 107,
	ESteamCoreInputActionOrigin__PS4_Reserved5                                       = 108,
	ESteamCoreInputActionOrigin__PS4_Reserved6                                       = 109,
	ESteamCoreInputActionOrigin__PS4_Reserved7                                       = 110,
	ESteamCoreInputActionOrigin__PS4_Reserved8                                       = 111,
	ESteamCoreInputActionOrigin__PS4_Reserved9                                       = 112,
	ESteamCoreInputActionOrigin__PS4_Reserved10                                      = 113,
	ESteamCoreInputActionOrigin__XBoxOne_A                                           = 114,
	ESteamCoreInputActionOrigin__XBoxOne_B                                           = 115,
	ESteamCoreInputActionOrigin__XBoxOne_X                                           = 116,
	ESteamCoreInputActionOrigin__XBoxOne_Y                                           = 117,
	ESteamCoreInputActionOrigin__XBoxOne_LeftBumper                                  = 118,
	ESteamCoreInputActionOrigin__XBoxOne_RightBumper                                 = 119,
	ESteamCoreInputActionOrigin__XBoxOne_Menu                                        = 120,
	ESteamCoreInputActionOrigin__XBoxOne_View                                        = 121,
	ESteamCoreInputActionOrigin__XBoxOne_LeftTrigger_Pull                            = 122,
	ESteamCoreInputActionOrigin__XBoxOne_LeftTrigger_Click                           = 123,
	ESteamCoreInputActionOrigin__XBoxOne_RightTrigger_Pull                           = 124,
	ESteamCoreInputActionOrigin__XBoxOne_RightTrigger_Click                          = 125,
	ESteamCoreInputActionOrigin__XBoxOne_LeftStick_Move                              = 126,
	ESteamCoreInputActionOrigin__XBoxOne_LeftStick_Click                             = 127,
	ESteamCoreInputActionOrigin__XBoxOne_LeftStick_DPadNorth                         = 128,
	ESteamCoreInputActionOrigin__XBoxOne_LeftStick_DPadSouth                         = 129,
	ESteamCoreInputActionOrigin__XBoxOne_LeftStick_DPadWest                          = 130,
	ESteamCoreInputActionOrigin__XBoxOne_LeftStick_DPadEast                          = 131,
	ESteamCoreInputActionOrigin__XBoxOne_RightStick_Move                             = 132,
	ESteamCoreInputActionOrigin__XBoxOne_RightStick_Click                            = 133,
	ESteamCoreInputActionOrigin__XBoxOne_RightStick_DPadNorth                        = 134,
	ESteamCoreInputActionOrigin__XBoxOne_RightStick_DPadSouth                        = 135,
	ESteamCoreInputActionOrigin__XBoxOne_RightStick_DPadWest                         = 136,
	ESteamCoreInputActionOrigin__XBoxOne_RightStick_DPadEast                         = 137,
	ESteamCoreInputActionOrigin__XBoxOne_DPad_North                                  = 138,
	ESteamCoreInputActionOrigin__XBoxOne_DPad_South                                  = 139,
	ESteamCoreInputActionOrigin__XBoxOne_DPad_West                                   = 140,
	ESteamCoreInputActionOrigin__XBoxOne_DPad_East                                   = 141,
	ESteamCoreInputActionOrigin__XBoxOne_DPad_Move                                   = 142,
	ESteamCoreInputActionOrigin__XBoxOne_Reserved1                                   = 143,
	ESteamCoreInputActionOrigin__XBoxOne_Reserved2                                   = 144,
	ESteamCoreInputActionOrigin__XBoxOne_Reserved3                                   = 145,
	ESteamCoreInputActionOrigin__XBoxOne_Reserved4                                   = 146,
	ESteamCoreInputActionOrigin__XBoxOne_Reserved5                                   = 147,
	ESteamCoreInputActionOrigin__XBoxOne_Reserved6                                   = 148,
	ESteamCoreInputActionOrigin__XBoxOne_Reserved7                                   = 149,
	ESteamCoreInputActionOrigin__XBoxOne_Reserved8                                   = 150,
	ESteamCoreInputActionOrigin__XBoxOne_Reserved9                                   = 151,
	ESteamCoreInputActionOrigin__XBoxOne_Reserved10                                  = 152,
	ESteamCoreInputActionOrigin__XBox360_A                                           = 153,
	ESteamCoreInputActionOrigin__XBox360_B                                           = 154,
	ESteamCoreInputActionOrigin__XBox360_X                                           = 155,
	ESteamCoreInputActionOrigin__XBox360_Y                                           = 156,
	ESteamCoreInputActionOrigin__XBox360_LeftBumper                                  = 157,
	ESteamCoreInputActionOrigin__XBox360_RightBumper                                 = 158,
	ESteamCoreInputActionOrigin__XBox360_Start                                       = 159,
	ESteamCoreInputActionOrigin__XBox360_Back                                        = 160,
	ESteamCoreInputActionOrigin__XBox360_LeftTrigger_Pull                            = 161,
	ESteamCoreInputActionOrigin__XBox360_LeftTrigger_Click                           = 162,
	ESteamCoreInputActionOrigin__XBox360_RightTrigger_Pull                           = 163,
	ESteamCoreInputActionOrigin__XBox360_RightTrigger_Click                          = 164,
	ESteamCoreInputActionOrigin__XBox360_LeftStick_Move                              = 165,
	ESteamCoreInputActionOrigin__XBox360_LeftStick_Click                             = 166,
	ESteamCoreInputActionOrigin__XBox360_LeftStick_DPadNorth                         = 167,
	ESteamCoreInputActionOrigin__XBox360_LeftStick_DPadSouth                         = 168,
	ESteamCoreInputActionOrigin__XBox360_LeftStick_DPadWest                          = 169,
	ESteamCoreInputActionOrigin__XBox360_LeftStick_DPadEast                          = 170,
	ESteamCoreInputActionOrigin__XBox360_RightStick_Move                             = 171,
	ESteamCoreInputActionOrigin__XBox360_RightStick_Click                            = 172,
	ESteamCoreInputActionOrigin__XBox360_RightStick_DPadNorth                        = 173,
	ESteamCoreInputActionOrigin__XBox360_RightStick_DPadSouth                        = 174,
	ESteamCoreInputActionOrigin__XBox360_RightStick_DPadWest                         = 175,
	ESteamCoreInputActionOrigin__XBox360_RightStick_DPadEast                         = 176,
	ESteamCoreInputActionOrigin__XBox360_DPad_North                                  = 177,
	ESteamCoreInputActionOrigin__XBox360_DPad_South                                  = 178,
	ESteamCoreInputActionOrigin__XBox360_DPad_West                                   = 179,
	ESteamCoreInputActionOrigin__XBox360_DPad_East                                   = 180,
	ESteamCoreInputActionOrigin__XBox360_DPad_Move                                   = 181,
	ESteamCoreInputActionOrigin__XBox360_Reserved1                                   = 182,
	ESteamCoreInputActionOrigin__XBox360_Reserved2                                   = 183,
	ESteamCoreInputActionOrigin__XBox360_Reserved3                                   = 184,
	ESteamCoreInputActionOrigin__XBox360_Reserved4                                   = 185,
	ESteamCoreInputActionOrigin__XBox360_Reserved5                                   = 186,
	ESteamCoreInputActionOrigin__XBox360_Reserved6                                   = 187,
	ESteamCoreInputActionOrigin__XBox360_Reserved7                                   = 188,
	ESteamCoreInputActionOrigin__XBox360_Reserved8                                   = 189,
	ESteamCoreInputActionOrigin__XBox360_Reserved9                                   = 190,
	ESteamCoreInputActionOrigin__XBox360_Reserved10                                  = 191,
	ESteamCoreInputActionOrigin__Switch_A                                            = 192,
	ESteamCoreInputActionOrigin__Switch_B                                            = 193,
	ESteamCoreInputActionOrigin__Switch_X                                            = 194,
	ESteamCoreInputActionOrigin__Switch_Y                                            = 195,
	ESteamCoreInputActionOrigin__Switch_LeftBumper                                   = 196,
	ESteamCoreInputActionOrigin__Switch_RightBumper                                  = 197,
	ESteamCoreInputActionOrigin__Switch_Plus                                         = 198,
	ESteamCoreInputActionOrigin__Switch_Minus                                        = 199,
	ESteamCoreInputActionOrigin__Switch_Capture                                      = 200,
	ESteamCoreInputActionOrigin__Switch_LeftTrigger_Pull                             = 201,
	ESteamCoreInputActionOrigin__Switch_LeftTrigger_Click                            = 202,
	ESteamCoreInputActionOrigin__Switch_RightTrigger_Pull                            = 203,
	ESteamCoreInputActionOrigin__Switch_RightTrigger_Click                           = 204,
	ESteamCoreInputActionOrigin__Switch_LeftStick_Move                               = 205,
	ESteamCoreInputActionOrigin__Switch_LeftStick_Click                              = 206,
	ESteamCoreInputActionOrigin__Switch_LeftStick_DPadNorth                          = 207,
	ESteamCoreInputActionOrigin__Switch_LeftStick_DPadSouth                          = 208,
	ESteamCoreInputActionOrigin__Switch_LeftStick_DPadWest                           = 209,
	ESteamCoreInputActionOrigin__Switch_LeftStick_DPadEast                           = 210,
	ESteamCoreInputActionOrigin__Switch_RightStick_Move                              = 211,
	ESteamCoreInputActionOrigin__Switch_RightStick_Click                             = 212,
	ESteamCoreInputActionOrigin__Switch_RightStick_DPadNorth                         = 213,
	ESteamCoreInputActionOrigin__Switch_RightStick_DPadSouth                         = 214,
	ESteamCoreInputActionOrigin__Switch_RightStick_DPadWest                          = 215,
	ESteamCoreInputActionOrigin__Switch_RightStick_DPadEast                          = 216,
	ESteamCoreInputActionOrigin__Switch_DPad_North                                   = 217,
	ESteamCoreInputActionOrigin__Switch_DPad_South                                   = 218,
	ESteamCoreInputActionOrigin__Switch_DPad_West                                    = 219,
	ESteamCoreInputActionOrigin__Switch_DPad_East                                    = 220,
	ESteamCoreInputActionOrigin__Switch_ProGyro_Move                                 = 221,
	ESteamCoreInputActionOrigin__Switch_ProGyro_Pitch                                = 222,
	ESteamCoreInputActionOrigin__Switch_ProGyro_Yaw                                  = 223,
	ESteamCoreInputActionOrigin__Switch_ProGyro_Roll                                 = 224,
	ESteamCoreInputActionOrigin__Switch_DPad_Move                                    = 225,
	ESteamCoreInputActionOrigin__Switch_Reserved1                                    = 226,
	ESteamCoreInputActionOrigin__Switch_Reserved2                                    = 227,
	ESteamCoreInputActionOrigin__Switch_Reserved3                                    = 228,
	ESteamCoreInputActionOrigin__Switch_Reserved4                                    = 229,
	ESteamCoreInputActionOrigin__Switch_Reserved5                                    = 230,
	ESteamCoreInputActionOrigin__Switch_Reserved6                                    = 231,
	ESteamCoreInputActionOrigin__Switch_Reserved7                                    = 232,
	ESteamCoreInputActionOrigin__Switch_Reserved8                                    = 233,
	ESteamCoreInputActionOrigin__Switch_Reserved9                                    = 234,
	ESteamCoreInputActionOrigin__Switch_Reserved10                                   = 235,
	ESteamCoreInputActionOrigin__Switch_RightGyro_Move                               = 236,
	ESteamCoreInputActionOrigin__Switch_RightGyro_Pitch                              = 237,
	ESteamCoreInputActionOrigin__Switch_RightGyro_Yaw                                = 238,
	ESteamCoreInputActionOrigin__Switch_RightGyro_Roll                               = 239,
	ESteamCoreInputActionOrigin__Switch_LeftGyro_Move                                = 240,
	ESteamCoreInputActionOrigin__Switch_LeftGyro_Pitch                               = 241,
	ESteamCoreInputActionOrigin__Switch_LeftGyro_Yaw                                 = 242,
	ESteamCoreInputActionOrigin__Switch_LeftGyro_Roll                                = 243,
	ESteamCoreInputActionOrigin__Switch_LeftGrip_Lower                               = 244,
	ESteamCoreInputActionOrigin__Switch_LeftGrip_Upper                               = 245,
	ESteamCoreInputActionOrigin__Switch_RightGrip_Lower                              = 246,
	ESteamCoreInputActionOrigin__Switch_RightGrip_Upper                              = 247,
	ESteamCoreInputActionOrigin__Switch_Reserved11                                   = 248,
	ESteamCoreInputActionOrigin__Switch_Reserved12                                   = 249,
	ESteamCoreInputActionOrigin__Switch_Reserved13                                   = 250,
	ESteamCoreInputActionOrigin__Switch_Reserved14                                   = 251,
	ESteamCoreInputActionOrigin__Switch_Reserved15                                   = 252,
	ESteamCoreInputActionOrigin__Switch_Reserved16                                   = 253,
	ESteamCoreInputActionOrigin__Switch_Reserved17                                   = 254,
	ESteamCoreInputActionOrigin__Switch_Reserved18                                   = 255,
	ESteamCoreInputActionOrigin__ESteamCoreInputActionOrigin_MAX                     = 256
};

/// Enum /Script/SteamCore.ESteamCoreXboxOrigin
/// Size: 0x30
enum class ESteamCoreXboxOrigin : uint8_t
{
	ESteamCoreXboxOrigin__A                                                          = 0,
	ESteamCoreXboxOrigin__B                                                          = 1,
	ESteamCoreXboxOrigin__X                                                          = 2,
	ESteamCoreXboxOrigin__Y                                                          = 3,
	ESteamCoreXboxOrigin__LeftBumper                                                 = 4,
	ESteamCoreXboxOrigin__RightBumper                                                = 5,
	ESteamCoreXboxOrigin__Menu                                                       = 6,
	ESteamCoreXboxOrigin__View                                                       = 7,
	ESteamCoreXboxOrigin__LeftTrigger_Pull                                           = 8,
	ESteamCoreXboxOrigin__LeftTrigger_Click                                          = 9,
	ESteamCoreXboxOrigin__RightTrigger_Pull                                          = 10,
	ESteamCoreXboxOrigin__RightTrigger_Click                                         = 11,
	ESteamCoreXboxOrigin__LeftStick_Move                                             = 12,
	ESteamCoreXboxOrigin__LeftStick_Click                                            = 13,
	ESteamCoreXboxOrigin__LeftStick_DPadNorth                                        = 14,
	ESteamCoreXboxOrigin__LeftStick_DPadSouth                                        = 15,
	ESteamCoreXboxOrigin__LeftStick_DPadWest                                         = 16,
	ESteamCoreXboxOrigin__LeftStick_DPadEast                                         = 17,
	ESteamCoreXboxOrigin__RightStick_Move                                            = 18,
	ESteamCoreXboxOrigin__RightStick_Click                                           = 19,
	ESteamCoreXboxOrigin__RightStick_DPadNorth                                       = 20,
	ESteamCoreXboxOrigin__RightStick_DPadSouth                                       = 21,
	ESteamCoreXboxOrigin__RightStick_DPadWest                                        = 22,
	ESteamCoreXboxOrigin__RightStick_DPadEast                                        = 23,
	ESteamCoreXboxOrigin__DPad_North                                                 = 24,
	ESteamCoreXboxOrigin__DPad_South                                                 = 25,
	ESteamCoreXboxOrigin__DPad_West                                                  = 26,
	ESteamCoreXboxOrigin__DPad_East                                                  = 27,
	ESteamCoreXboxOrigin__Count                                                      = 28,
	ESteamCoreXboxOrigin__ESteamCoreXboxOrigin_MAX                                   = 29
};

/// Enum /Script/SteamCore.ESteamCoreControllerPad
/// Size: 0x03
enum class ESteamCoreControllerPad : uint8_t
{
	ESteamCoreControllerPad__Left                                                    = 0,
	ESteamCoreControllerPad__Right                                                   = 1,
	ESteamCoreControllerPad__ESteamCoreControllerPad_MAX                             = 2
};

/// Enum /Script/SteamCore.ESteamCoreInputType
/// Size: 0x16
enum class ESteamCoreInputType : uint8_t
{
	ESteamCoreInputType__Unknown                                                     = 0,
	ESteamCoreInputType__SteamController                                             = 1,
	ESteamCoreInputType__XBox360Controller                                           = 2,
	ESteamCoreInputType__XBoxOneController                                           = 3,
	ESteamCoreInputType__GenericGamepad                                              = 4,
	ESteamCoreInputType__PS4Controller                                               = 5,
	ESteamCoreInputType__AppleMFiController                                          = 6,
	ESteamCoreInputType__AndroidController                                           = 7,
	ESteamCoreInputType__SwitchJoyConPair                                            = 8,
	ESteamCoreInputType__SwitchJoyConSingle                                          = 9,
	ESteamCoreInputType__SwitchProController                                         = 10,
	ESteamCoreInputType__MobileTouch                                                 = 11,
	ESteamCoreInputType__PS3Controller                                               = 12,
	ESteamCoreInputType__Count                                                       = 13,
	ESteamCoreInputType__MaximumPossibleValue                                        = 255,
	ESteamCoreInputType__ESteamCoreInputType_MAX                                     = 256
};

/// Enum /Script/SteamCore.ESteamCoreInputLEDFlag
/// Size: 0x03
enum class ESteamCoreInputLEDFlag : uint8_t
{
	ESteamCoreInputLEDFlag__SetColor                                                 = 0,
	ESteamCoreInputLEDFlag__RestoreUserDefault                                       = 1,
	ESteamCoreInputLEDFlag__ESteamCoreInputLEDFlag_MAX                               = 2
};

/// Enum /Script/SteamCore.ESteamCoreItemFlags
/// Size: 0x04
enum class ESteamCoreItemFlags : uint8_t
{
	ENoTrade                                                                         = 0,
	ERemoved                                                                         = 8,
	EConsumed                                                                        = 9,
	ESteamCoreItemFlags_MAX                                                          = 10
};

/// Enum /Script/SteamCore.ESteamSessionFindType
/// Size: 0x03
enum class ESteamSessionFindType : uint8_t
{
	ESteamSessionFindType__Listen                                                    = 0,
	ESteamSessionFindType__Dedicated                                                 = 1,
	ESteamSessionFindType__ESteamSessionFindType_MAX                                 = 2
};

/// Enum /Script/SteamCore.ESteamLobbyType
/// Size: 0x05
enum class ESteamLobbyType : uint8_t
{
	ESteamLobbyType__Private                                                         = 0,
	ESteamLobbyType__FriendsOnly                                                     = 1,
	ESteamLobbyType__Public                                                          = 2,
	ESteamLobbyType__Invisible                                                       = 3,
	ESteamLobbyType__ESteamLobbyType_MAX                                             = 4
};

/// Enum /Script/SteamCore.ESteamLobbyComparison
/// Size: 0x07
enum class ESteamLobbyComparison : uint8_t
{
	ESteamLobbyComparison__EqualToOrLessThan                                         = 0,
	ESteamLobbyComparison__LessThan                                                  = 1,
	ESteamLobbyComparison__Equal                                                     = 2,
	ESteamLobbyComparison__GreaterThan                                               = 3,
	ESteamLobbyComparison__EqualToOrGreaterThan                                      = 4,
	ESteamLobbyComparison__NotEqual                                                  = 5,
	ESteamLobbyComparison__ESteamLobbyComparison_MAX                                 = 6
};

/// Enum /Script/SteamCore.ESteamLobbyDistanceFilter
/// Size: 0x05
enum class ESteamLobbyDistanceFilter : uint8_t
{
	ESteamLobbyDistanceFilter__Close                                                 = 0,
	ESteamLobbyDistanceFilter__Default                                               = 1,
	ESteamLobbyDistanceFilter__Far                                                   = 2,
	ESteamLobbyDistanceFilter__Worldwide                                             = 3,
	ESteamLobbyDistanceFilter__ESteamLobbyDistanceFilter_MAX                         = 4
};

/// Enum /Script/SteamCore.ESteamAudioPlaybackStatus
/// Size: 0x05
enum class ESteamAudioPlaybackStatus : uint8_t
{
	ESteamAudioPlaybackStatus__Undefined                                             = 0,
	ESteamAudioPlaybackStatus__Playing                                               = 1,
	ESteamAudioPlaybackStatus__Paused                                                = 2,
	ESteamAudioPlaybackStatus__Idle                                                  = 3,
	ESteamAudioPlaybackStatus__ESteamAudioPlaybackStatus_MAX                         = 4
};

/// Enum /Script/SteamCore.ESteamP2PSend
/// Size: 0x05
enum class ESteamP2PSend : uint8_t
{
	ESteamP2PSend__Unreliable                                                        = 0,
	ESteamP2PSend__UnreliableNoDelay                                                 = 1,
	ESteamP2PSend__Reliable                                                          = 2,
	ESteamP2PSend__ReliableWithBuffering                                             = 3,
	ESteamP2PSend__ESteamP2PSend_MAX                                                 = 4
};

/// Enum /Script/SteamCore.ESteamParentalFeature
/// Size: 0x14
enum class ESteamParentalFeature : uint8_t
{
	ESteamParentalFeature__Invalid                                                   = 0,
	ESteamParentalFeature__Store                                                     = 1,
	ESteamParentalFeature__Community                                                 = 2,
	ESteamParentalFeature__Profile                                                   = 3,
	ESteamParentalFeature__Friends                                                   = 4,
	ESteamParentalFeature__News                                                      = 5,
	ESteamParentalFeature__Trading                                                   = 6,
	ESteamParentalFeature__Settings                                                  = 7,
	ESteamParentalFeature__Console                                                   = 8,
	ESteamParentalFeature__Browser                                                   = 9,
	ESteamParentalFeature__ParentalSetup                                             = 10,
	ESteamParentalFeature__Library                                                   = 11,
	ESteamParentalFeature__Test                                                      = 12,
	ESteamParentalFeature__Max                                                       = 13
};

/// Enum /Script/SteamCore.ESteamPartiesBeaconLocationType
/// Size: 0x03
enum class ESteamPartiesBeaconLocationType : uint8_t
{
	ESteamPartiesBeaconLocationType__Invalid                                         = 0,
	ESteamPartiesBeaconLocationType__ChatGroup                                       = 1,
	ESteamPartiesBeaconLocationType__Max                                             = 2
};

/// Enum /Script/SteamCore.ESteamPartiesBeaconLocationData
/// Size: 0x06
enum class ESteamPartiesBeaconLocationData : uint8_t
{
	ESteamPartiesBeaconLocationData__Invalid                                         = 0,
	ESteamPartiesBeaconLocationData__Name                                            = 1,
	ESteamPartiesBeaconLocationData__IconURLSmall                                    = 2,
	ESteamPartiesBeaconLocationData__IconURLMedium                                   = 3,
	ESteamPartiesBeaconLocationData__IconURLLarge                                    = 4,
	ESteamPartiesBeaconLocationData__ESteamPartiesBeaconLocationData_MAX             = 5
};

/// Enum /Script/SteamCore.ESteamCoreDeviceFormFactor
/// Size: 0x06
enum class ESteamCoreDeviceFormFactor : uint8_t
{
	ESteamCoreDeviceFormFactor__Unknown                                              = 0,
	ESteamCoreDeviceFormFactor__Phone                                                = 1,
	ESteamCoreDeviceFormFactor__Tablet                                               = 2,
	ESteamCoreDeviceFormFactor__Computer                                             = 3,
	ESteamCoreDeviceFormFactor__TV                                                   = 4,
	ESteamCoreDeviceFormFactor__ESteamCoreDeviceFormFactor_MAX                       = 5
};

/// Enum /Script/SteamCore.ESteamRemoteStoragePlatform
/// Size: 0x08
enum class ESteamRemoteStoragePlatform : uint8_t
{
	ESteamRemoteStoragePlatform__None                                                = 0,
	ESteamRemoteStoragePlatform__Windows                                             = 1,
	ESteamRemoteStoragePlatform__OSX                                                 = 2,
	ESteamRemoteStoragePlatform__PS3                                                 = 4,
	ESteamRemoteStoragePlatform__Linux                                               = 8,
	ESteamRemoteStoragePlatform__Reserved2                                           = 16,
	ESteamRemoteStoragePlatform__All                                                 = 254,
	ESteamRemoteStoragePlatform__ESteamRemoteStoragePlatform_MAX                     = 255
};

/// Enum /Script/SteamCore.ESteamUGCReadAction
/// Size: 0x04
enum class ESteamUGCReadAction : uint8_t
{
	ESteamUGCReadAction__k_EUGCRead_ContinueReadingUntilFinished                     = 0,
	ESteamUGCReadAction__k_EUGCRead_ContinueReading                                  = 1,
	ESteamUGCReadAction__k_EUGCRead_Close                                            = 2,
	ESteamUGCReadAction__k_EUGCRead_MAX                                              = 3
};

/// Enum /Script/SteamCore.ESteamVRScreenshotType
/// Size: 0x07
enum class ESteamVRScreenshotType : uint8_t
{
	ESteamVRScreenshotType__None                                                     = 0,
	ESteamVRScreenshotType__Mono                                                     = 1,
	ESteamVRScreenshotType__Stereo                                                   = 2,
	ESteamVRScreenshotType__MonoCubemap                                              = 3,
	ESteamVRScreenshotType__MonoPanorama                                             = 4,
	ESteamVRScreenshotType__StereoPanorama                                           = 5,
	ESteamVRScreenshotType__ESteamVRScreenshotType_MAX                               = 6
};

/// Enum /Script/SteamCore.ESteamAttributeType
/// Size: 0x05
enum class ESteamAttributeType : uint8_t
{
	ESteamAttributeType__NOT_SET                                                     = 0,
	ESteamAttributeType__INTEGER                                                     = 1,
	ESteamAttributeType__BOOL                                                        = 2,
	ESteamAttributeType__STRING                                                      = 3,
	ESteamAttributeType__ESteamAttributeType_MAX                                     = 4
};

/// Enum /Script/SteamCore.ESteamComparisonOp
/// Size: 0x10
enum class ESteamComparisonOp : uint8_t
{
	ESteamComparisonOp__Equals                                                       = 0,
	ESteamComparisonOp__NotEquals                                                    = 1,
	ESteamComparisonOp__GreaterThan                                                  = 2,
	ESteamComparisonOp__GreaterThanEquals                                            = 3,
	ESteamComparisonOp__LessThan                                                     = 4,
	ESteamComparisonOp__LessThanEquals                                               = 5,
	ESteamComparisonOp__Near                                                         = 6,
	ESteamComparisonOp__In                                                           = 7,
	ESteamComparisonOp__NotIn                                                        = 8,
	ESteamComparisonOp__ESteamComparisonOp_MAX                                       = 9
};

/// Enum /Script/SteamCore.EOnlineComparison
/// Size: 0x07
enum class EOnlineComparison : uint8_t
{
	EOnlineComparison__Equals                                                        = 0,
	EOnlineComparison__NotEquals                                                     = 1,
	EOnlineComparison__GreaterThan                                                   = 2,
	EOnlineComparison__GreaterThanEquals                                             = 3,
	EOnlineComparison__LessThan                                                      = 4,
	EOnlineComparison__LessThanEquals                                                = 5,
	EOnlineComparison__EOnlineComparison_MAX                                         = 6
};

/// Enum /Script/SteamCore.ESteamUserHasLicenseForAppResult
/// Size: 0x04
enum class ESteamUserHasLicenseForAppResult : uint8_t
{
	ESteamUserHasLicenseForAppResult__HasLicense                                     = 0,
	ESteamUserHasLicenseForAppResult__DoesNotHaveLicense                             = 1,
	ESteamUserHasLicenseForAppResult__NoAuth                                         = 2,
	ESteamUserHasLicenseForAppResult__ESteamUserHasLicenseForAppResult_MAX           = 3
};

/// Enum /Script/SteamCore.ESteamBeginAuthSessionResult
/// Size: 0x07
enum class ESteamBeginAuthSessionResult : uint8_t
{
	ESteamBeginAuthSessionResult__OK                                                 = 0,
	ESteamBeginAuthSessionResult__InvalidTicket                                      = 1,
	ESteamBeginAuthSessionResult__DuplicateRequest                                   = 2,
	ESteamBeginAuthSessionResult__InvalidVersion                                     = 3,
	ESteamBeginAuthSessionResult__GameMismatch                                       = 4,
	ESteamBeginAuthSessionResult__ExpiredTicket                                      = 5,
	ESteamBeginAuthSessionResult__ESteamBeginAuthSessionResult_MAX                   = 6
};

/// Enum /Script/SteamCore.ESteamAccountType
/// Size: 0x12
enum class ESteamAccountType : uint8_t
{
	ESteamAccountType__Invalid                                                       = 0,
	ESteamAccountType__Individual                                                    = 1,
	ESteamAccountType__Multiseat                                                     = 2,
	ESteamAccountType__GameServer                                                    = 3,
	ESteamAccountType__AnonGameServer                                                = 4,
	ESteamAccountType__Pending                                                       = 5,
	ESteamAccountType__ContentServer                                                 = 6,
	ESteamAccountType__Clan                                                          = 7,
	ESteamAccountType__Chat                                                          = 8,
	ESteamAccountType__ConsoleUser                                                   = 9,
	ESteamAccountType__AnonUser                                                      = 10,
	ESteamAccountType__Max                                                           = 11
};

/// Enum /Script/SteamCore.ESteamUGCMatchingUGCType
/// Size: 0x15
enum class ESteamUGCMatchingUGCType : uint8_t
{
	ESteamUGCMatchingUGCType__Items                                                  = 0,
	ESteamUGCMatchingUGCType__Items_Mtx                                              = 1,
	ESteamUGCMatchingUGCType__Items_ReadyToUse                                       = 2,
	ESteamUGCMatchingUGCType__Collections                                            = 3,
	ESteamUGCMatchingUGCType__Artwork                                                = 4,
	ESteamUGCMatchingUGCType__Videos                                                 = 5,
	ESteamUGCMatchingUGCType__Screenshots                                            = 6,
	ESteamUGCMatchingUGCType__AllGuides                                              = 7,
	ESteamUGCMatchingUGCType__WebGuides                                              = 8,
	ESteamUGCMatchingUGCType__IntegratedGuides                                       = 9,
	ESteamUGCMatchingUGCType__UsableInGame                                           = 10,
	ESteamUGCMatchingUGCType__ControllerBindings                                     = 11,
	ESteamUGCMatchingUGCType__GameManagedItems                                       = 12,
	ESteamUGCMatchingUGCType__All                                                    = 13,
	ESteamUGCMatchingUGCType__ESteamUGCMatchingUGCType_MAX                           = 14
};

/// Enum /Script/SteamCore.ESteamUserUGCList
/// Size: 0x10
enum class ESteamUserUGCList : uint8_t
{
	ESteamUserUGCList__Published                                                     = 0,
	ESteamUserUGCList__VotedOn                                                       = 1,
	ESteamUserUGCList__VotedUp                                                       = 2,
	ESteamUserUGCList__VotedDown                                                     = 3,
	ESteamUserUGCList__WillVoteLater                                                 = 4,
	ESteamUserUGCList__Favorited                                                     = 5,
	ESteamUserUGCList__Subscribed                                                    = 6,
	ESteamUserUGCList__UsedOrPlayed                                                  = 7,
	ESteamUserUGCList__Followed                                                      = 8,
	ESteamUserUGCList__ESteamUserUGCList_MAX                                         = 9
};

/// Enum /Script/SteamCore.ESteamUserUGCListSortOrder
/// Size: 0x08
enum class ESteamUserUGCListSortOrder : uint8_t
{
	ESteamUserUGCListSortOrder__CreationOrderDesc                                    = 0,
	ESteamUserUGCListSortOrder__CreationOrderAsc                                     = 1,
	ESteamUserUGCListSortOrder__TitleAsc                                             = 2,
	ESteamUserUGCListSortOrder__LastUpdatedDesc                                      = 3,
	ESteamUserUGCListSortOrder__SubscriptionDateDesc                                 = 4,
	ESteamUserUGCListSortOrder__VoteScoreDesc                                        = 5,
	ESteamUserUGCListSortOrder__ForModeration                                        = 6,
	ESteamUserUGCListSortOrder__ESteamUserUGCListSortOrder_MAX                       = 7
};

/// Enum /Script/SteamCore.ESteamUGCQuery
/// Size: 0x20
enum class ESteamUGCQuery : uint8_t
{
	ESteamUGCQuery__RankedByVote                                                     = 0,
	ESteamUGCQuery__RankedByPublicationDate                                          = 1,
	ESteamUGCQuery__AcceptedForGameRankedByAcceptanceDate                            = 2,
	ESteamUGCQuery__RankedByTrend                                                    = 3,
	ESteamUGCQuery__FavoritedByFriendsRankedByPublicationDate                        = 4,
	ESteamUGCQuery__CreatedByFriendsRankedByPublicationDate                          = 5,
	ESteamUGCQuery__RankedByNumTimesReported                                         = 6,
	ESteamUGCQuery__CreatedByFollowedUsersRankedByPublicationDate                    = 7,
	ESteamUGCQuery__NotYetRated                                                      = 8,
	ESteamUGCQuery__RankedByTotalVotesAsc                                            = 9,
	ESteamUGCQuery__RankedByVotesUp                                                  = 10,
	ESteamUGCQuery__RankedByTextSearch                                               = 11,
	ESteamUGCQuery__RankedByTotalUniqueSubscriptions                                 = 12,
	ESteamUGCQuery__RankedByPlaytimeTrend                                            = 13,
	ESteamUGCQuery__RankedByTotalPlaytime                                            = 14,
	ESteamUGCQuery__RankedByAveragePlaytimeTrend                                     = 15,
	ESteamUGCQuery__RankedByLifetimeAveragePlaytime                                  = 16,
	ESteamUGCQuery__RankedByPlaytimeSessionsTrend                                    = 17,
	ESteamUGCQuery__RankedByLifetimePlaytimeSessions                                 = 18,
	ESteamUGCQuery__ESteamUGCQuery_MAX                                               = 19
};

/// Enum /Script/SteamCore.ESteamItemUpdateStatus
/// Size: 0x07
enum class ESteamItemUpdateStatus : uint8_t
{
	ESteamItemUpdateStatus__Invalid                                                  = 0,
	ESteamItemUpdateStatus__PreparingConfig                                          = 1,
	ESteamItemUpdateStatus__PreparingContent                                         = 2,
	ESteamItemUpdateStatus__UploadingContent                                         = 3,
	ESteamItemUpdateStatus__UploadingPreviewFile                                     = 4,
	ESteamItemUpdateStatus__CommittingChanges                                        = 5,
	ESteamItemUpdateStatus__ESteamItemUpdateStatus_MAX                               = 6
};

/// Enum /Script/SteamCore.ESteamItemState
/// Size: 0x08
enum class ESteamItemState : uint8_t
{
	ESteamItemState__None                                                            = 0,
	ESteamItemState__Subscribed                                                      = 1,
	ESteamItemState__LegacyItem                                                      = 2,
	ESteamItemState__Installed                                                       = 4,
	ESteamItemState__NeedsUpdate                                                     = 8,
	ESteamItemState__Downloading                                                     = 16,
	ESteamItemState__DownloadPending                                                 = 32,
	ESteamItemState__ESteamItemState_MAX                                             = 33
};

/// Enum /Script/SteamCore.ESteamItemStatistic
/// Size: 0x14
enum class ESteamItemStatistic : uint8_t
{
	ESteamItemStatistic__NumSubscriptions                                            = 0,
	ESteamItemStatistic__NumFavorites                                                = 1,
	ESteamItemStatistic__NumFollowers                                                = 2,
	ESteamItemStatistic__NumUniqueSubscriptions                                      = 3,
	ESteamItemStatistic__NumUniqueFavorites                                          = 4,
	ESteamItemStatistic__NumUniqueFollowers                                          = 5,
	ESteamItemStatistic__NumUniqueWebsiteViews                                       = 6,
	ESteamItemStatistic__ReportScore                                                 = 7,
	ESteamItemStatistic__NumSecondsPlayed                                            = 8,
	ESteamItemStatistic__NumPlaytimeSessions                                         = 9,
	ESteamItemStatistic__NumComments                                                 = 10,
	ESteamItemStatistic__NumSecondsPlayedDuringTimePeriod                            = 11,
	ESteamItemStatistic__NumPlaytimeSessionsDuringTimePeriod                         = 12,
	ESteamItemStatistic__ESteamItemStatistic_MAX                                     = 13
};

/// Enum /Script/SteamCore.ESteamItemPreviewType
/// Size: 0x07
enum class ESteamItemPreviewType : uint8_t
{
	ESteamItemPreviewType__Image                                                     = 0,
	ESteamItemPreviewType__YouTubeVideo                                              = 1,
	ESteamItemPreviewType__Sketchfab                                                 = 2,
	ESteamItemPreviewType__EnvironmentMap_HorizontalCross                            = 3,
	ESteamItemPreviewType__EnvironmentMap_LatLong                                    = 4,
	ESteamItemPreviewType__ReservedMax                                               = 254,
	ESteamItemPreviewType__ESteamItemPreviewType_MAX                                 = 255
};

/// Enum /Script/SteamCore.ESteamWorkshopFileType
/// Size: 0x18
enum class ESteamWorkshopFileType : uint8_t
{
	ESteamWorkshopFileType__First                                                    = 0,
	ESteamWorkshopFileType__Community                                                = 0,
	ESteamWorkshopFileType__Microtransaction                                         = 1,
	ESteamWorkshopFileType__Collection                                               = 2,
	ESteamWorkshopFileType__Art                                                      = 3,
	ESteamWorkshopFileType__Video                                                    = 4,
	ESteamWorkshopFileType__Screenshot                                               = 5,
	ESteamWorkshopFileType__Game                                                     = 6,
	ESteamWorkshopFileType__Software                                                 = 7,
	ESteamWorkshopFileType__Concept                                                  = 8,
	ESteamWorkshopFileType__WebGuide                                                 = 9,
	ESteamWorkshopFileType__IntegratedGuide                                          = 10,
	ESteamWorkshopFileType__Merch                                                    = 11,
	ESteamWorkshopFileType__ControllerBinding                                        = 12,
	ESteamWorkshopFileType__SteamworksAccessInvite                                   = 13,
	ESteamWorkshopFileType__SteamVideo                                               = 14,
	ESteamWorkshopFileType__GameManagedItem                                          = 15,
	ESteamWorkshopFileType__Max                                                      = 16
};

/// Enum /Script/SteamCore.ESteamRemoteStoragePublishedFileVisibility
/// Size: 0x04
enum class ESteamRemoteStoragePublishedFileVisibility : uint8_t
{
	ESteamRemoteStoragePublishedFileVisibility__Public                               = 0,
	ESteamRemoteStoragePublishedFileVisibility__FriendsOnly                          = 1,
	ESteamRemoteStoragePublishedFileVisibility__Private                              = 2,
	ESteamRemoteStoragePublishedFileVisibility__ESteamRemoteStoragePublishedFileVisibility_MAX = 3
};

/// Enum /Script/SteamCore.ESteamLeaderboardDataRequest
/// Size: 0x05
enum class ESteamLeaderboardDataRequest : uint8_t
{
	ESteamLeaderboardDataRequest__Global                                             = 0,
	ESteamLeaderboardDataRequest__GlobalAroundUser                                   = 1,
	ESteamLeaderboardDataRequest__Friends                                            = 2,
	ESteamLeaderboardDataRequest__Users                                              = 3,
	ESteamLeaderboardDataRequest__ESteamLeaderboardDataRequest_MAX                   = 4
};

/// Enum /Script/SteamCore.ESteamLeaderboardSortMethod
/// Size: 0x04
enum class ESteamLeaderboardSortMethod : uint8_t
{
	ESteamLeaderboardSortMethod__None                                                = 0,
	ESteamLeaderboardSortMethod__Ascending                                           = 1,
	ESteamLeaderboardSortMethod__Descending                                          = 2,
	ESteamLeaderboardSortMethod__ESteamLeaderboardSortMethod_MAX                     = 3
};

/// Enum /Script/SteamCore.ESteamLeaderboardDisplayType
/// Size: 0x05
enum class ESteamLeaderboardDisplayType : uint8_t
{
	ESteamLeaderboardDisplayType__None                                               = 0,
	ESteamLeaderboardDisplayType__Numeric                                            = 1,
	ESteamLeaderboardDisplayType__TimeSeconds                                        = 2,
	ESteamLeaderboardDisplayType__TimeMilliSeconds                                   = 3,
	ESteamLeaderboardDisplayType__ESteamLeaderboardDisplayType_MAX                   = 4
};

/// Enum /Script/SteamCore.ESteamLeaderboardUploadScoreMethod
/// Size: 0x04
enum class ESteamLeaderboardUploadScoreMethod : uint8_t
{
	ESteamLeaderboardUploadScoreMethod__None                                         = 0,
	ESteamLeaderboardUploadScoreMethod__KeepBest                                     = 1,
	ESteamLeaderboardUploadScoreMethod__ForceUpdate                                  = 2,
	ESteamLeaderboardUploadScoreMethod__ESteamLeaderboardUploadScoreMethod_MAX       = 3
};

/// Enum /Script/SteamCore.ESteamVoiceResult
/// Size: 0x11
enum class ESteamVoiceResult : uint8_t
{
	ESteamVoiceResult__OK                                                            = 0,
	ESteamVoiceResult__NotInitialized                                                = 1,
	ESteamVoiceResult__NotRecording                                                  = 2,
	ESteamVoiceResult__NoData                                                        = 3,
	ESteamVoiceResult__BufferTooSmall                                                = 4,
	ESteamVoiceResult__DataCorrupted                                                 = 5,
	ESteamVoiceResult__Restricted                                                    = 6,
	ESteamVoiceResult__UnsupportedCodec                                              = 7,
	ESteamVoiceResult__ReceiverOutOfDate                                             = 8,
	ESteamVoiceResult__ReceiverDidNotAnswer                                          = 9,
	ESteamVoiceResult__ESteamVoiceResult_MAX                                         = 10
};

/// Enum /Script/SteamCore.ESteamCoreValid
/// Size: 0x03
enum class ESteamCoreValid : uint8_t
{
	ESteamCoreValid__Valid                                                           = 0,
	ESteamCoreValid__NotValid                                                        = 1,
	ESteamCoreValid__ESteamCoreValid_MAX                                             = 2
};

/// Enum /Script/SteamCore.ESteamCoreIdentical
/// Size: 0x03
enum class ESteamCoreIdentical : uint8_t
{
	ESteamCoreIdentical__Identical                                                   = 0,
	ESteamCoreIdentical__NotIdentical                                                = 1,
	ESteamCoreIdentical__ESteamCoreIdentical_MAX                                     = 2
};

/// Enum /Script/SteamCore.ESteamTextFilteringContext
/// Size: 0x05
enum class ESteamTextFilteringContext : uint8_t
{
	ESteamTextFilteringContext__k_ETextFilteringContextUnknown                       = 0,
	ESteamTextFilteringContext__k_ETextFilteringContextGameContent                   = 1,
	ESteamTextFilteringContext__k_ETextFilteringContextChat                          = 2,
	ESteamTextFilteringContext__k_ETextFilteringContextName                          = 3,
	ESteamTextFilteringContext__k_MAX                                                = 4
};

/// Enum /Script/SteamCore.ESteamGamepadTextInputLineMode
/// Size: 0x03
enum class ESteamGamepadTextInputLineMode : uint8_t
{
	ESteamGamepadTextInputLineMode__SingleLine                                       = 0,
	ESteamGamepadTextInputLineMode__MultipleLines                                    = 1,
	ESteamGamepadTextInputLineMode__ESteamGamepadTextInputLineMode_MAX               = 2
};

/// Enum /Script/SteamCore.ESteamGamepadTextInputMode
/// Size: 0x03
enum class ESteamGamepadTextInputMode : uint8_t
{
	ESteamGamepadTextInputMode__Normal                                               = 0,
	ESteamGamepadTextInputMode__Password                                             = 1,
	ESteamGamepadTextInputMode__ESteamGamepadTextInputMode_MAX                       = 2
};

/// Enum /Script/SteamCore.ESteamNotificationPosition
/// Size: 0x05
enum class ESteamNotificationPosition : uint8_t
{
	ESteamNotificationPosition__TopLeft                                              = 0,
	ESteamNotificationPosition__TopRight                                             = 1,
	ESteamNotificationPosition__BottomLeft                                           = 2,
	ESteamNotificationPosition__BottomRight                                          = 3,
	ESteamNotificationPosition__ESteamNotificationPosition_MAX                       = 4
};

/// Enum /Script/SteamCore.ESteamUniverse
/// Size: 0x06
enum class ESteamUniverse : uint8_t
{
	ESteamUniverse__Invalid                                                          = 0,
	ESteamUniverse__Public                                                           = 1,
	ESteamUniverse__Beta                                                             = 2,
	ESteamUniverse__Internal                                                         = 3,
	ESteamUniverse__Dev                                                              = 4,
	ESteamUniverse__Max                                                              = 5
};

/// Enum /Script/SteamCore.ESteamBroadcastUploadResult
/// Size: 0x15
enum class ESteamBroadcastUploadResult : uint8_t
{
	ESteamBroadcastUploadResult__None                                                = 0,
	ESteamBroadcastUploadResult__OK                                                  = 1,
	ESteamBroadcastUploadResult__InitFailed                                          = 2,
	ESteamBroadcastUploadResult__FrameFailed                                         = 3,
	ESteamBroadcastUploadResult__Timeout                                             = 4,
	ESteamBroadcastUploadResult__BandwidthExceeded                                   = 5,
	ESteamBroadcastUploadResult__LowFPS                                              = 6,
	ESteamBroadcastUploadResult__MissingKeyFrames                                    = 7,
	ESteamBroadcastUploadResult__NoConnection                                        = 8,
	ESteamBroadcastUploadResult__RelayFailed                                         = 9,
	ESteamBroadcastUploadResult__SettingsChanged                                     = 10,
	ESteamBroadcastUploadResult__MissingAudio                                        = 11,
	ESteamBroadcastUploadResult__TooFarBehind                                        = 12,
	ESteamBroadcastUploadResult__TranscodeBehind                                     = 13,
	ESteamBroadcastUploadResult__ESteamBroadcastUploadResult_MAX                     = 14
};

/// Class /Script/SteamCore.SteamCoreSubsystem
/// Size: 0x0038 (0x000030 - 0x000068)
class USteamCoreSubsystem : public UGameInstanceSubsystem
{ 
public:
	unsigned char                                      UnknownData00_1[0x38];                                      // 0x0030   (0x0038)  MISSED
};

/// Class /Script/SteamCore.AppList
/// Size: 0x0060 (0x000068 - 0x0000C8)
class UAppList : public USteamCoreSubsystem
{ 
public:
	SDK_UNDEFINED(16,2565) /* FMulticastInlineDelegate */ __um(SteamAppInstalled);                                 // 0x0068   (0x0010)  
	SDK_UNDEFINED(16,2566) /* FMulticastInlineDelegate */ __um(SteamAppUninstalled);                               // 0x0078   (0x0010)  
	unsigned char                                      UnknownData00_6[0x40];                                      // 0x0088   (0x0040)  MISSED


	/// Functions
	// Function /Script/SteamCore.AppList.GetNumInstalledApps
	// int32_t GetNumInstalledApps();                                                                                        // [0x1597eb0] Final|Native|Public|BlueprintCallable 
	// Function /Script/SteamCore.AppList.GetInstalledApps
	// int32_t GetInstalledApps(TArray<int32_t>& AppIDs, int32_t MaxAppIDs);                                                 // [0x1597980] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.AppList.GetAppName
	// int32_t GetAppName(int32_t AppID, FString& Name);                                                                     // [0x15954a0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.AppList.GetAppInstallDir
	// int32_t GetAppInstallDir(int32_t AppID, FString& Directory);                                                          // [0x15952b0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.AppList.GetAppBuildId
	// int32_t GetAppBuildId(int32_t AppID);                                                                                 // [0x15951e0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/SteamCore.Apps
/// Size: 0x0060 (0x000068 - 0x0000C8)
class UApps : public USteamCoreSubsystem
{ 
public:
	SDK_UNDEFINED(16,2567) /* FMulticastInlineDelegate */ __um(DLCInstalled);                                      // 0x0068   (0x0010)  
	SDK_UNDEFINED(16,2568) /* FMulticastInlineDelegate */ __um(FileDetailsResultDelegate);                         // 0x0078   (0x0010)  
	unsigned char                                      UnknownData00_6[0x40];                                      // 0x0088   (0x0040)  MISSED


	/// Functions
	// Function /Script/SteamCore.Apps.UninstallDLC
	// void UninstallDLC(int32_t AppID);                                                                                     // [0x1599820] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Apps.MarkContentCorrupt
	// bool MarkContentCorrupt(bool bMissingFilesOnly);                                                                      // [0x1598cc0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Apps.InstallDLC
	// void InstallDLC(int32_t AppID);                                                                                       // [0x1598530] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Apps.GetLaunchQueryParam
	// FString GetLaunchQueryParam(FString Key);                                                                             // [0x1597cf0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Apps.GetLaunchCommandLine
	// int32_t GetLaunchCommandLine(FString& CommandLine);                                                                   // [0x1597c40] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.Apps.GetInstalledDepots
	// int32_t GetInstalledDepots(int32_t AppID, int32_t MaxDepots, TArray<int32_t>& Depots);                                // [0x1597a80] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.Apps.GetFileDetails
	// void GetFileDetails(FDelegateProperty& Callback, FString Filename);                                                   // [0x1596370] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.Apps.GetEarliestPurchaseUnixTime
	// int32_t GetEarliestPurchaseUnixTime(int32_t AppID);                                                                   // [0x15962e0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Apps.GetDlcDownloadProgress
	// bool GetDlcDownloadProgress(int32_t AppID, int32_t& BytesDownloaded, int32_t& BytesTotal);                            // [0x15961b0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.Apps.GetDLCCount
	// int32_t GetDLCCount();                                                                                                // [0x1596180] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Apps.GetCurrentGameLanguage
	// FString GetCurrentGameLanguage();                                                                                     // [0x1596100] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Apps.GetCurrentBetaName
	// bool GetCurrentBetaName(FString& Name);                                                                               // [0x1596050] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.Apps.GetAvailableGameLanguages
	// FString GetAvailableGameLanguages();                                                                                  // [0x15955e0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Apps.GetAppOwner
	// FSteamID GetAppOwner();                                                                                               // [0x15955a0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Apps.GetAppInstallDir
	// int32_t GetAppInstallDir(int32_t AppID, FString& Folder);                                                             // [0x15953b0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.Apps.GetAppBuildId
	// int32_t GetAppBuildId();                                                                                              // [0x1595280] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Apps.BIsVACBanned
	// bool BIsVACBanned();                                                                                                  // [0x1594ea0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Apps.BIsTimedTrial
	// bool BIsTimedTrial(int32_t& SecondsAllowed, int32_t& SecondsPlayed);                                                  // [0x1594db0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.Apps.BIsSubscribedFromFreeWeekend
	// bool BIsSubscribedFromFreeWeekend();                                                                                  // [0x1594d80] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Apps.BIsSubscribedFromFamilySharing
	// bool BIsSubscribedFromFamilySharing();                                                                                // [0x1594d50] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Apps.BIsSubscribedApp
	// bool BIsSubscribedApp(int32_t AppID);                                                                                 // [0x1594cc0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Apps.BIsSubscribed
	// bool BIsSubscribed();                                                                                                 // [0x1594c90] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Apps.BIsLowViolence
	// bool BIsLowViolence();                                                                                                // [0x1594c60] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Apps.BIsDlcInstalled
	// bool BIsDlcInstalled(int32_t AppID);                                                                                  // [0x1594bd0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Apps.BIsCybercafe
	// bool BIsCybercafe();                                                                                                  // [0x1594ba0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Apps.BIsAppInstalled
	// bool BIsAppInstalled(int32_t AppID);                                                                                  // [0x1594b10] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Apps.BGetDLCDataByIndex
	// bool BGetDLCDataByIndex(int32_t DLC, int32_t& AppID, bool& bAvailable, FString& Name);                                // [0x1594980] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/SteamCore.SteamCoreAsyncAction
/// Size: 0x0008 (0x000030 - 0x000038)
class USteamCoreAsyncAction : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(8,2569) /* TWeakObjectPtr<UObject*> */ __um(m_WorldContextObject);                               // 0x0030   (0x0008)  
};

/// Class /Script/SteamCore.SteamCoreAppsAsyncActionGetFileDetails
/// Size: 0x0010 (0x000038 - 0x000048)
class USteamCoreAppsAsyncActionGetFileDetails : public USteamCoreAsyncAction
{ 
public:
	SDK_UNDEFINED(16,2570) /* FMulticastInlineDelegate */ __um(OnCallback);                                        // 0x0038   (0x0010)  


	/// Functions
	// Function /Script/SteamCore.SteamCoreAppsAsyncActionGetFileDetails.HandleCallback
	// void HandleCallback(FFileDetailsResult& Data, bool bWasSuccessful);                                                   // [0x15982e0] Final|Native|Public|HasOutParms 
	// Function /Script/SteamCore.SteamCoreAppsAsyncActionGetFileDetails.GetFileDetailsAsync
	// class USteamCoreAppsAsyncActionGetFileDetails* GetFileDetailsAsync(class UObject* WorldContextObject, FString Filename, float Timeout); // [0x15964d0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCore.SteamCoreGameMode
/// Size: 0x0000 (0x000378 - 0x000378)
class ASteamCoreGameMode : public AGameMode
{ 
public:
};

/// Class /Script/SteamCore.SteamCore
/// Size: 0x0000 (0x000028 - 0x000028)
class USteamCore : public UObject
{ 
public:
};

/// Class /Script/SteamCore.SteamCoreSettings
/// Size: 0x0028 (0x000038 - 0x000060)
class USteamCoreSettings : public UDeveloperSettings
{ 
public:
	bool                                               bEnabled;                                                   // 0x0038   (0x0001)  
	bool                                               bRelaunchInSteam;                                           // 0x0039   (0x0001)  
	bool                                               bVACEnabled;                                                // 0x003A   (0x0001)  
	bool                                               bAllowP2PPacketRelay;                                       // 0x003B   (0x0001)  
	int32_t                                            P2PConnectionTimeout;                                       // 0x003C   (0x0004)  
	int32_t                                            SteamAppId;                                                 // 0x0040   (0x0004)  
	int32_t                                            SteamDevAppId;                                              // 0x0044   (0x0004)  
	int32_t                                            Port;                                                       // 0x0048   (0x0004)  
	int32_t                                            GameServerQueryPort;                                        // 0x004C   (0x0004)  
	SDK_UNDEFINED(16,2571) /* FString */               __um(GameVersion);                                          // 0x0050   (0x0010)  
};

/// Class /Script/SteamCore.Friends
/// Size: 0x02D0 (0x000068 - 0x000338)
class UFriends : public USteamCoreSubsystem
{ 
public:
	SDK_UNDEFINED(16,2572) /* FMulticastInlineDelegate */ __um(AvatarImageLoaded);                                 // 0x0068   (0x0010)  
	SDK_UNDEFINED(16,2573) /* FMulticastInlineDelegate */ __um(FriendRichPresenceUpdate);                          // 0x0078   (0x0010)  
	SDK_UNDEFINED(16,2574) /* FMulticastInlineDelegate */ __um(GameConnectedChatJoin);                             // 0x0088   (0x0010)  
	SDK_UNDEFINED(16,2575) /* FMulticastInlineDelegate */ __um(GameConnectedChatLeave);                            // 0x0098   (0x0010)  
	SDK_UNDEFINED(16,2576) /* FMulticastInlineDelegate */ __um(GameConnectedClanChatMsg);                          // 0x00A8   (0x0010)  
	SDK_UNDEFINED(16,2577) /* FMulticastInlineDelegate */ __um(GameConnectedFriendChatMsg);                        // 0x00B8   (0x0010)  
	SDK_UNDEFINED(16,2578) /* FMulticastInlineDelegate */ __um(GameLobbyJoinRequested);                            // 0x00C8   (0x0010)  
	SDK_UNDEFINED(16,2579) /* FMulticastInlineDelegate */ __um(GameOverlayActivated);                              // 0x00D8   (0x0010)  
	SDK_UNDEFINED(16,2580) /* FMulticastInlineDelegate */ __um(GameRichPresenceJoinRequested);                     // 0x00E8   (0x0010)  
	SDK_UNDEFINED(16,2581) /* FMulticastInlineDelegate */ __um(GameServerChangeRequested);                         // 0x00F8   (0x0010)  
	SDK_UNDEFINED(16,2582) /* FMulticastInlineDelegate */ __um(PersonaStateChange);                                // 0x0108   (0x0010)  
	SDK_UNDEFINED(16,2583) /* FMulticastInlineDelegate */ __um(SetPersonaNameResponse);                            // 0x0118   (0x0010)  
	SDK_UNDEFINED(16,2584) /* FMulticastInlineDelegate */ __um(JoinClanChatRoomCompletionResult);                  // 0x0128   (0x0010)  
	SDK_UNDEFINED(16,2585) /* FMulticastInlineDelegate */ __um(ClanOfficerListResponse);                           // 0x0138   (0x0010)  
	SDK_UNDEFINED(16,2586) /* FMulticastInlineDelegate */ __um(DownloadClanActivityCountsResult);                  // 0x0148   (0x0010)  
	unsigned char                                      UnknownData00_6[0x1E0];                                     // 0x0158   (0x01E0)  MISSED


	/// Functions
	// Function /Script/SteamCore.Friends.SetRichPresence
	// bool SetRichPresence(FString Key, FString Value);                                                                     // [0x15996b0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Friends.SetPlayedWith
	// void SetPlayedWith(FSteamID SteamIDUserPlayedWith);                                                                   // [0x1599630] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Friends.SetPersonaName
	// void SetPersonaName(FDelegateProperty& Callback, FString Name);                                                       // [0x15994d0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.Friends.SetListenForFriendsMessages
	// bool SetListenForFriendsMessages(bool bInterceptEnabled);                                                             // [0x1599440] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Friends.SetInGameVoiceSpeaking
	// void SetInGameVoiceSpeaking(FSteamID SteamIDUser, bool bSpeaking);                                                    // [0x1599380] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Friends.SendClanChatMessage
	// bool SendClanChatMessage(FSteamID SteamIDClanChat, FString Text);                                                     // [0x1599250] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Friends.RequestUserInformation
	// bool RequestUserInformation(FSteamID SteamIDUser, bool bRequireNameOnly);                                             // [0x1599180] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Friends.RequestFriendRichPresence
	// void RequestFriendRichPresence(FSteamID SteamIDFriend);                                                               // [0x1599100] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Friends.RequestClanOfficerList
	// void RequestClanOfficerList(FDelegateProperty& Callback, FSteamID SteamIDClan);                                       // [0x1599000] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.Friends.ReplyToFriendMessage
	// bool ReplyToFriendMessage(FSteamID SteamIDFriend, FString MsgToSend);                                                 // [0x1598ed0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Friends.RegisterProtocolInOverlayBrowser
	// bool RegisterProtocolInOverlayBrowser(FString Protocol);                                                              // [0x1598de0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Friends.OpenClanChatWindowInSteam
	// bool OpenClanChatWindowInSteam(FSteamID SteamIDClanChat);                                                             // [0x1598d50] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Friends.LeaveClanChatRoom
	// bool LeaveClanChatRoom(FSteamID SteamIDClan);                                                                         // [0x1598c30] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Friends.JoinClanChatRoom
	// void JoinClanChatRoom(FDelegateProperty& Callback, FSteamID SteamIDClan);                                             // [0x1598b30] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.Friends.IsUserInSource
	// bool IsUserInSource(FSteamID SteamIDUser, FSteamID SteamIDSource);                                                    // [0x1598a60] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Friends.IsFollowing
	// void IsFollowing(FDelegateProperty& Callback, FSteamID SteamID);                                                      // [0x1598960] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.Friends.IsClanPublic
	// bool IsClanPublic(FSteamID SteamIDClan);                                                                              // [0x15988d0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Friends.IsClanOfficialGameGroup
	// bool IsClanOfficialGameGroup(FSteamID SteamIDClan);                                                                   // [0x1598840] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Friends.IsClanChatWindowOpenInSteam
	// bool IsClanChatWindowOpenInSteam(FSteamID SteamIDClanChat);                                                           // [0x15987b0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Friends.IsClanChatAdmin
	// bool IsClanChatAdmin(FSteamID SteamIDClanChat, FSteamID SteamIDUser);                                                 // [0x15986e0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Friends.InviteUserToGame
	// bool InviteUserToGame(FSteamID SteamIDFriend, FString ConnectString);                                                 // [0x15985b0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Friends.HasFriend
	// bool HasFriend(FSteamID SteamIDFriend, TArray<ESteamFriendFlags> Flags);                                              // [0x1598400] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Friends.GetUserRestrictions
	// TArray<ESteamUserRestriction> GetUserRestrictions();                                                                  // [0x1598260] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Friends.GetSmallFriendAvatar
	// class UTexture2D* GetSmallFriendAvatar(FSteamID SteamIDFriend);                                                       // [0x15981d0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Friends.GetPlayerNickname_Pure
	// FString GetPlayerNickname_Pure(FSteamID SteamIDPlayer);                                                               // [0x15980f0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/SteamCore.Friends.GetPlayerNickname
	// FString GetPlayerNickname(FSteamID SteamIDPlayer);                                                                    // [0x1598020] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Friends.GetPersonaState_Pure
	// ESteamPersonaState GetPersonaState_Pure();                                                                            // [0x1597ff0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/SteamCore.Friends.GetPersonaState
	// ESteamPersonaState GetPersonaState();                                                                                 // [0x1597ff0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Friends.GetPersonaName_Pure
	// FString GetPersonaName_Pure();                                                                                        // [0x1597f60] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/SteamCore.Friends.GetPersonaName
	// FString GetPersonaName();                                                                                             // [0x1597ee0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Friends.GetMediumFriendAvatar
	// class UTexture2D* GetMediumFriendAvatar(FSteamID SteamIDFriend);                                                      // [0x1597e20] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Friends.GetLargeFriendAvatar
	// class UTexture2D* GetLargeFriendAvatar(FSteamID SteamIDFriend);                                                       // [0x1597bb0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Friends.GetFriendSteamLevel
	// int32_t GetFriendSteamLevel(FSteamID SteamIDFriend);                                                                  // [0x15975a0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Friends.GetFriendsGroupName
	// FString GetFriendsGroupName(FSteamFriendsGroupID FriendsGroupID);                                                     // [0x15978b0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Friends.GetFriendsGroupMembersList
	// void GetFriendsGroupMembersList(FSteamFriendsGroupID FriendsGroupID, TArray<FSteamID>& SteamIDMembers, int32_t MembersCount); // [0x1597780] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.Friends.GetFriendsGroupMembersCount
	// int32_t GetFriendsGroupMembersCount(FSteamFriendsGroupID FriendsGroupID);                                             // [0x15976f0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Friends.GetFriendsGroupIDByIndex
	// FSteamFriendsGroupID GetFriendsGroupIDByIndex(int32_t FriendGroup);                                                   // [0x1597660] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Friends.GetFriendsGroupCount
	// int32_t GetFriendsGroupCount();                                                                                       // [0x1597630] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Friends.GetFriendRichPresenceKeyCount
	// int32_t GetFriendRichPresenceKeyCount(FSteamID SteamIDFriend);                                                        // [0x1597510] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Friends.GetFriendRichPresenceKeyByIndex
	// FString GetFriendRichPresenceKeyByIndex(FSteamID SteamIDFriend, int32_t Key);                                         // [0x1597400] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Friends.GetFriendRichPresence
	// FString GetFriendRichPresence(FSteamID SteamIDFriend, FString Key);                                                   // [0x1597290] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Friends.GetFriendRelationship
	// ESteamFriendRelationship GetFriendRelationship(FSteamID SteamIDFriend);                                               // [0x1597200] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Friends.GetFriendPersonaState
	// ESteamPersonaState GetFriendPersonaState(FSteamID SteamIDFriend);                                                     // [0x1597170] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Friends.GetFriendPersonaNameHistory
	// FString GetFriendPersonaNameHistory(FSteamID SteamIDFriend, int32_t PersonaName);                                     // [0x1597060] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Friends.GetFriendPersonaName
	// FString GetFriendPersonaName(FSteamID SteamIDFriend);                                                                 // [0x1596f90] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Friends.GetFriendMessage
	// int32_t GetFriendMessage(FSteamID SteamIDFriend, int32_t MessageID, FString& Text, ESteamChatEntryType& ChatEntryType); // [0x1596e10] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.Friends.GetFriendGamePlayed
	// bool GetFriendGamePlayed(FSteamID SteamIDFriend, FSteamGameID& GameID, FString& GameIP, int32_t& ConnectionPort, int32_t& QueryPort, FSteamID& SteamIDLobby); // [0x1596bd0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.Friends.GetFriendFromSourceByIndex
	// FSteamID GetFriendFromSourceByIndex(FSteamID SteamIDSource, int32_t Ifriend);                                         // [0x1596b00] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Friends.GetFriendCountFromSource
	// int32_t GetFriendCountFromSource(FSteamID SteamIDSource);                                                             // [0x1596a70] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Friends.GetFriendCount
	// int32_t GetFriendCount(TArray<ESteamFriendFlags> Flags);                                                              // [0x1596990] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Friends.GetFriendCoplayTime
	// int32_t GetFriendCoplayTime(FSteamID SteamIDFriend);                                                                  // [0x1596900] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Friends.GetFriendCoplayGame
	// int32_t GetFriendCoplayGame(FSteamID SteamIDFriend);                                                                  // [0x1596870] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Friends.GetFriendByIndex
	// FSteamID GetFriendByIndex(int32_t Ifriend, TArray<ESteamFriendFlags> Flags);                                          // [0x1596750] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Friends.GetFollowerCount
	// void GetFollowerCount(FDelegateProperty& Callback, FSteamID SteamID);                                                 // [0x1596650] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.Friends.GetCoplayFriendCount
	// int32_t GetCoplayFriendCount();                                                                                       // [0x1596020] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Friends.GetCoplayFriend
	// FSteamID GetCoplayFriend(int32_t CoplayFriend);                                                                       // [0x1595f90] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Friends.GetClanTag
	// FString GetClanTag(FSteamID SteamIDClan);                                                                             // [0x1595ec0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Friends.GetClanOwner
	// FSteamID GetClanOwner(FSteamID SteamIDClan);                                                                          // [0x1595e30] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Friends.GetClanOfficerCount
	// int32_t GetClanOfficerCount(FSteamID SteamIDClan);                                                                    // [0x1595da0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Friends.GetClanOfficerByIndex
	// FSteamID GetClanOfficerByIndex(FSteamID SteamIDClan, int32_t Officer);                                                // [0x1595cd0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Friends.GetClanName
	// FString GetClanName(FSteamID SteamIDClan);                                                                            // [0x1595c00] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Friends.GetClanCount
	// int32_t GetClanCount();                                                                                               // [0x1595bd0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Friends.GetClanChatMessage
	// int32_t GetClanChatMessage(FSteamID SteamIDClanChat, int32_t MessageID, FString& Text, ESteamChatEntryType& ChatEntryType, FSteamID& SteamIDChatter); // [0x15959d0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.Friends.GetClanChatMemberCount
	// int32_t GetClanChatMemberCount(FSteamID SteamIDClan);                                                                 // [0x1595940] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Friends.GetClanByIndex
	// FSteamID GetClanByIndex(int32_t Clan);                                                                                // [0x15958b0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Friends.GetClanActivityCounts
	// bool GetClanActivityCounts(FSteamID SteamIDClan, int32_t& Online, int32_t& InGame, int32_t& Chatting);                // [0x1595730] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.Friends.GetChatMemberByIndex
	// FSteamID GetChatMemberByIndex(FSteamID SteamIDClan, int32_t User);                                                    // [0x1595660] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Friends.EnumerateFollowingList
	// void EnumerateFollowingList(FDelegateProperty& Callback, int32_t StartIndex);                                         // [0x15950e0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.Friends.DownloadClanActivityCounts
	// void DownloadClanActivityCounts(FDelegateProperty& Callback, TArray<FSteamID> SteamIDClans);                          // [0x1594f80] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.Friends.CloseClanChatWindowInSteam
	// bool CloseClanChatWindowInSteam(FSteamID SteamIDClanChat);                                                            // [0x1594ef0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Friends.ClearRichPresence
	// void ClearRichPresence();                                                                                             // [0x1594ed0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Friends.ActivateGameOverlayToWebPage
	// void ActivateGameOverlayToWebPage(FString URL, ESteamActivateGameOverlayToWebPageMode Mode);                          // [0x1594850] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Friends.ActivateGameOverlayToUser
	// void ActivateGameOverlayToUser(FString Dialog, FSteamID SteamID);                                                     // [0x1594720] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Friends.ActivateGameOverlayToStore
	// void ActivateGameOverlayToStore(int32_t AppID, ESteamOverlayToStoreFlag Flag);                                        // [0x1594660] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Friends.ActivateGameOverlayInviteDialogConnectString
	// void ActivateGameOverlayInviteDialogConnectString(FString ConnectString);                                             // [0x1594500] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Friends.ActivateGameOverlayInvitedialog
	// void ActivateGameOverlayInvitedialog(FSteamID SteamIDLobby);                                                          // [0x15945e0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Friends.ActivateGameOverlay
	// void ActivateGameOverlay(FString Dialog);                                                                             // [0x1594420] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCore.SteamCoreFriendsAsyncActionSetPersonaName
/// Size: 0x0010 (0x000038 - 0x000048)
class USteamCoreFriendsAsyncActionSetPersonaName : public USteamCoreAsyncAction
{ 
public:
	SDK_UNDEFINED(16,2587) /* FMulticastInlineDelegate */ __um(OnCallback);                                        // 0x0038   (0x0010)  


	/// Functions
	// Function /Script/SteamCore.SteamCoreFriendsAsyncActionSetPersonaName.SetPersonaNameAsync
	// class USteamCoreFriendsAsyncActionSetPersonaName* SetPersonaNameAsync(class UObject* WorldContextObject, FString Name, float Timeout); // [0x159cfa0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.SteamCoreFriendsAsyncActionSetPersonaName.HandleCallback
	// void HandleCallback(FSetPersonaNameResponse& Data, bool bWasSuccessful);                                              // [0x159ca60] Final|Native|Public|HasOutParms 
};

/// Class /Script/SteamCore.SteamCoreFriendsAsyncActionDownloadClanActivityCounts
/// Size: 0x0010 (0x000038 - 0x000048)
class USteamCoreFriendsAsyncActionDownloadClanActivityCounts : public USteamCoreAsyncAction
{ 
public:
	SDK_UNDEFINED(16,2588) /* FMulticastInlineDelegate */ __um(OnCallback);                                        // 0x0038   (0x0010)  


	/// Functions
	// Function /Script/SteamCore.SteamCoreFriendsAsyncActionDownloadClanActivityCounts.HandleCallback
	// void HandleCallback(FDownloadClanActivityCountsResult& Data, bool bWasSuccessful);                                    // [0x159c4a0] Final|Native|Public|HasOutParms 
	// Function /Script/SteamCore.SteamCoreFriendsAsyncActionDownloadClanActivityCounts.DownloadClanActivityCountsAsync
	// class USteamCoreFriendsAsyncActionDownloadClanActivityCounts* DownloadClanActivityCountsAsync(class UObject* WorldContextObject, TArray<FSteamID> SteamIDClans, float Timeout); // [0x159c120] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCore.SteamCoreFriendsAsyncActionRequestClanOfficerList
/// Size: 0x0010 (0x000038 - 0x000048)
class USteamCoreFriendsAsyncActionRequestClanOfficerList : public USteamCoreAsyncAction
{ 
public:
	SDK_UNDEFINED(16,2589) /* FMulticastInlineDelegate */ __um(OnCallback);                                        // 0x0038   (0x0010)  


	/// Functions
	// Function /Script/SteamCore.SteamCoreFriendsAsyncActionRequestClanOfficerList.RequestClanOfficerListAsync
	// class USteamCoreFriendsAsyncActionRequestClanOfficerList* RequestClanOfficerListAsync(class UObject* WorldContextObject, FSteamID SteamIDClan, float Timeout); // [0x159cd40] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.SteamCoreFriendsAsyncActionRequestClanOfficerList.HandleCallback
	// void HandleCallback(FClanOfficerListResponse& Data, bool bWasSuccessful);                                             // [0x159c950] Final|Native|Public|HasOutParms 
};

/// Class /Script/SteamCore.SteamCoreFriendsAsyncActionJoinClanChatRoom
/// Size: 0x0010 (0x000038 - 0x000048)
class USteamCoreFriendsAsyncActionJoinClanChatRoom : public USteamCoreAsyncAction
{ 
public:
	SDK_UNDEFINED(16,2590) /* FMulticastInlineDelegate */ __um(OnCallback);                                        // 0x0038   (0x0010)  


	/// Functions
	// Function /Script/SteamCore.SteamCoreFriendsAsyncActionJoinClanChatRoom.JoinClanChatRoomAsync
	// class USteamCoreFriendsAsyncActionJoinClanChatRoom* JoinClanChatRoomAsync(class UObject* WorldContextObject, FSteamID SteamIDClan, float Timeout); // [0x159cc40] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.SteamCoreFriendsAsyncActionJoinClanChatRoom.HandleCallback
	// void HandleCallback(FJoinClanChatRoomCompletionResult& Data, bool bWasSuccessful);                                    // [0x159c860] Final|Native|Public|HasOutParms 
};

/// Class /Script/SteamCore.SteamCoreFriendsAsyncActionEnumerateFollowingList
/// Size: 0x0010 (0x000038 - 0x000048)
class USteamCoreFriendsAsyncActionEnumerateFollowingList : public USteamCoreAsyncAction
{ 
public:
	SDK_UNDEFINED(16,2591) /* FMulticastInlineDelegate */ __um(OnCallback);                                        // 0x0038   (0x0010)  


	/// Functions
	// Function /Script/SteamCore.SteamCoreFriendsAsyncActionEnumerateFollowingList.HandleCallback
	// void HandleCallback(FFriendsEnumerateFollowingList& Data, bool bWasSuccessful);                                       // [0x159c580] Final|Native|Public|HasOutParms 
	// Function /Script/SteamCore.SteamCoreFriendsAsyncActionEnumerateFollowingList.EnumerateFollowingListAsync
	// class USteamCoreFriendsAsyncActionEnumerateFollowingList* EnumerateFollowingListAsync(class UObject* WorldContextObject, int32_t StartIndex, float Timeout); // [0x159c2a0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCore.SteamCoreFriendsAsyncActionIsFollowing
/// Size: 0x0010 (0x000038 - 0x000048)
class USteamCoreFriendsAsyncActionIsFollowing : public USteamCoreAsyncAction
{ 
public:
	SDK_UNDEFINED(16,2592) /* FMulticastInlineDelegate */ __um(OnCallback);                                        // 0x0038   (0x0010)  


	/// Functions
	// Function /Script/SteamCore.SteamCoreFriendsAsyncActionIsFollowing.IsFollowingAsync
	// class USteamCoreFriendsAsyncActionIsFollowing* IsFollowingAsync(class UObject* WorldContextObject, FSteamID SteamID, float Timeout); // [0x159cb40] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.SteamCoreFriendsAsyncActionIsFollowing.HandleCallback
	// void HandleCallback(FFriendsIsFollowing& Data, bool bWasSuccessful);                                                  // [0x159c770] Final|Native|Public|HasOutParms 
};

/// Class /Script/SteamCore.SteamCoreFriendsAsyncActionGetFollowerCount
/// Size: 0x0010 (0x000038 - 0x000048)
class USteamCoreFriendsAsyncActionGetFollowerCount : public USteamCoreAsyncAction
{ 
public:
	SDK_UNDEFINED(16,2593) /* FMulticastInlineDelegate */ __um(OnCallback);                                        // 0x0038   (0x0010)  


	/// Functions
	// Function /Script/SteamCore.SteamCoreFriendsAsyncActionGetFollowerCount.HandleCallback
	// void HandleCallback(FFriendsGetFollowerCount& Data, bool bWasSuccessful);                                             // [0x159c680] Final|Native|Public|HasOutParms 
	// Function /Script/SteamCore.SteamCoreFriendsAsyncActionGetFollowerCount.GetFollowerCountAsync
	// class USteamCoreFriendsAsyncActionGetFollowerCount* GetFollowerCountAsync(class UObject* WorldContextObject, FSteamID SteamID, float Timeout); // [0x159c3a0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCore.SteamCoreFriendsAsyncActionRequestUserInformation
/// Size: 0x0040 (0x000038 - 0x000078)
class USteamCoreFriendsAsyncActionRequestUserInformation : public USteamCoreAsyncAction
{ 
public:
	SDK_UNDEFINED(16,2594) /* FMulticastInlineDelegate */ __um(OnCallback);                                        // 0x0038   (0x0010)  
	unsigned char                                      UnknownData00_6[0x30];                                      // 0x0048   (0x0030)  MISSED


	/// Functions
	// Function /Script/SteamCore.SteamCoreFriendsAsyncActionRequestUserInformation.RequestUserInformationAsync
	// class USteamCoreFriendsAsyncActionRequestUserInformation* RequestUserInformationAsync(class UObject* WorldContextObject, FSteamID SteamIDUser, bool bRequireNameOnly, float Timeout); // [0x159ce40] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.SteamCoreFriendsAsyncActionRequestUserInformation.HandleCallback
	// void HandleCallback();                                                                                                // [0x159ca40] Final|Native|Public  
};

/// Class /Script/SteamCore.SteamGameSearch
/// Size: 0x0150 (0x000068 - 0x0001B8)
class USteamGameSearch : public USteamCoreSubsystem
{ 
public:
	SDK_UNDEFINED(16,2595) /* FMulticastInlineDelegate */ __um(SearchForGameProgressDelegate);                     // 0x0068   (0x0010)  
	SDK_UNDEFINED(16,2596) /* FMulticastInlineDelegate */ __um(SearchForGameResultDelegate);                       // 0x0078   (0x0010)  
	SDK_UNDEFINED(16,2597) /* FMulticastInlineDelegate */ __um(RequestPlayersForGameProgressDelegate);             // 0x0088   (0x0010)  
	SDK_UNDEFINED(16,2598) /* FMulticastInlineDelegate */ __um(RequestPlayersForGameResultDelegate);               // 0x0098   (0x0010)  
	SDK_UNDEFINED(16,2599) /* FMulticastInlineDelegate */ __um(RequestPlayersForGameFinalResultDelegate);          // 0x00A8   (0x0010)  
	SDK_UNDEFINED(16,2600) /* FMulticastInlineDelegate */ __um(SubmitPlayerResultResultDelegate);                  // 0x00B8   (0x0010)  
	SDK_UNDEFINED(16,2601) /* FMulticastInlineDelegate */ __um(EndGameResultDelegate);                             // 0x00C8   (0x0010)  
	unsigned char                                      UnknownData00_6[0xE0];                                      // 0x00D8   (0x00E0)  MISSED


	/// Functions
	// Function /Script/SteamCore.SteamGameSearch.SubmitPlayerResult
	// ESteamGameSearchErrorCode SubmitPlayerResult(FString UniqueGameID, FSteamID SteamIDPlayer, ESteamPlayerResult PlayerResult); // [0x15a24f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/SteamCore.SteamGameSearch.SetGameHostParams
	// ESteamGameSearchErrorCode SetGameHostParams(FString Key, TArray<FString> Values);                                     // [0x15a14e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/SteamCore.SteamGameSearch.SetConnectionDetails
	// ESteamGameSearchErrorCode SetConnectionDetails(FString ConnectionDetails);                                            // [0x15a1170] Final|Native|Public|BlueprintCallable 
	// Function /Script/SteamCore.SteamGameSearch.SearchForGameWithLobby
	// ESteamGameSearchErrorCode SearchForGameWithLobby(FSteamID SteamIDLobby, int32_t PlayerMin, int32_t PlayerMax);        // [0x15a0dd0] Final|Native|Public|BlueprintCallable 
	// Function /Script/SteamCore.SteamGameSearch.SearchForGameSolo
	// ESteamGameSearchErrorCode SearchForGameSolo(int32_t PlayerMin, int32_t PlayerMax);                                    // [0x15a0d00] Final|Native|Public|BlueprintCallable 
	// Function /Script/SteamCore.SteamGameSearch.RetrieveConnectionDetails
	// ESteamGameSearchErrorCode RetrieveConnectionDetails(FSteamID SteamIDHost, FString& ConnectionDetails, int32_t NumConnectionDetails); // [0x15a0bc0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.SteamGameSearch.RequestPlayersForGame
	// ESteamGameSearchErrorCode RequestPlayersForGame(int32_t PlayerMin, int32_t PlayerMax, int32_t MaxTeamSize);           // [0x15a09e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/SteamCore.SteamGameSearch.HostConfirmGameStart
	// ESteamGameSearchErrorCode HostConfirmGameStart(FString UniqueGameID);                                                 // [0x15a07b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/SteamCore.SteamGameSearch.EndGameSearch
	// ESteamGameSearchErrorCode EndGameSearch();                                                                            // [0x15a0060] Final|Native|Public|BlueprintCallable 
	// Function /Script/SteamCore.SteamGameSearch.EndGame
	// ESteamGameSearchErrorCode EndGame(FString UniqueGameID);                                                              // [0x159ff60] Final|Native|Public|BlueprintCallable 
	// Function /Script/SteamCore.SteamGameSearch.DeclineGame
	// ESteamGameSearchErrorCode DeclineGame();                                                                              // [0x159fe10] Final|Native|Public|BlueprintCallable 
	// Function /Script/SteamCore.SteamGameSearch.CancelRequestPlayersForGame
	// ESteamGameSearchErrorCode CancelRequestPlayersForGame();                                                              // [0x159fb50] Final|Native|Public|BlueprintCallable 
	// Function /Script/SteamCore.SteamGameSearch.AddGameSearchParams
	// ESteamGameSearchErrorCode AddGameSearchParams(FString KeyToFind, TArray<FString> ValuesToFind);                       // [0x159f520] Final|Native|Public|BlueprintCallable 
	// Function /Script/SteamCore.SteamGameSearch.AcceptGame
	// ESteamGameSearchErrorCode AcceptGame();                                                                               // [0x159f4f0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/SteamCore.SteamGameServer
/// Size: 0x00F0 (0x000068 - 0x000158)
class USteamGameServer : public USteamCoreSubsystem
{ 
public:
	SDK_UNDEFINED(16,2602) /* FMulticastInlineDelegate */ __um(GSPolicyResponse);                                  // 0x0068   (0x0010)  
	SDK_UNDEFINED(16,2603) /* FMulticastInlineDelegate */ __um(GSClientGroupStatus);                               // 0x0078   (0x0010)  
	SDK_UNDEFINED(16,2604) /* FMulticastInlineDelegate */ __um(GSValidateAuthTicketResponse);                      // 0x0088   (0x0010)  
	SDK_UNDEFINED(16,2605) /* FMulticastInlineDelegate */ __um(GSClientApprove);                                   // 0x0098   (0x0010)  
	SDK_UNDEFINED(16,2606) /* FMulticastInlineDelegate */ __um(GSClientDeny);                                      // 0x00A8   (0x0010)  
	unsigned char                                      UnknownData00_6[0xA0];                                      // 0x00B8   (0x00A0)  MISSED


	/// Functions
	// Function /Script/SteamCore.SteamGameServer.WasRestartRequested
	// bool WasRestartRequested();                                                                                           // [0x15a2910] Final|Native|Public|BlueprintCallable 
	// Function /Script/SteamCore.SteamGameServer.UserHasLicenseForApp
	// ESteamUserHasLicenseForAppResult UserHasLicenseForApp(FSteamID SteamID, int32_t AppID);                               // [0x15a2840] Final|Native|Public|BlueprintCallable 
	// Function /Script/SteamCore.SteamGameServer.SetSpectatorServerName
	// void SetSpectatorServerName(FString SpectatorServerName);                                                             // [0x15a1fc0] Final|Native|Public|BlueprintCallable 
	// Function /Script/SteamCore.SteamGameServer.SetSpectatorPort
	// void SetSpectatorPort(int32_t SpectatorPort);                                                                         // [0x15a1f30] Final|Native|Public|BlueprintCallable 
	// Function /Script/SteamCore.SteamGameServer.SetServerName
	// void SetServerName(FString ServerName);                                                                               // [0x15a1e40] Final|Native|Public|BlueprintCallable 
	// Function /Script/SteamCore.SteamGameServer.SetRegion
	// void SetRegion(FString Region);                                                                                       // [0x15a1d50] Final|Native|Public|BlueprintCallable 
	// Function /Script/SteamCore.SteamGameServer.SetProduct
	// void SetProduct(FString Product);                                                                                     // [0x15a1c60] Final|Native|Public|BlueprintCallable 
	// Function /Script/SteamCore.SteamGameServer.SetPasswordProtected
	// void SetPasswordProtected(bool bPasswordProtected);                                                                   // [0x15a1bd0] Final|Native|Public|BlueprintCallable 
	// Function /Script/SteamCore.SteamGameServer.SetModDir
	// void SetModDir(FString ModDir);                                                                                       // [0x15a1ae0] Final|Native|Public|BlueprintCallable 
	// Function /Script/SteamCore.SteamGameServer.SetMaxPlayerCount
	// void SetMaxPlayerCount(int32_t PlayersMax);                                                                           // [0x15a1a50] Final|Native|Public|BlueprintCallable 
	// Function /Script/SteamCore.SteamGameServer.SetMapName
	// void SetMapName(FString MapName);                                                                                     // [0x15a1960] Final|Native|Public|BlueprintCallable 
	// Function /Script/SteamCore.SteamGameServer.SetKeyValue
	// void SetKeyValue(FString Key, FString Value);                                                                         // [0x15a17e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/SteamCore.SteamGameServer.SetHeartbeatInterval
	// void SetHeartbeatInterval(int32_t HeartbeatInterval);                                                                 // [0x15a1750] Final|Native|Public|BlueprintCallable 
	// Function /Script/SteamCore.SteamGameServer.SetGameTags
	// void SetGameTags(FString GameTags);                                                                                   // [0x15a1660] Final|Native|Public|BlueprintCallable 
	// Function /Script/SteamCore.SteamGameServer.SetGameDescription
	// void SetGameDescription(FString GameDescription);                                                                     // [0x15a13f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/SteamCore.SteamGameServer.SetGameData
	// void SetGameData(FString GameData);                                                                                   // [0x15a1300] Final|Native|Public|BlueprintCallable 
	// Function /Script/SteamCore.SteamGameServer.SetDedicatedServer
	// void SetDedicatedServer(bool bDedicated);                                                                             // [0x15a1270] Final|Native|Public|BlueprintCallable 
	// Function /Script/SteamCore.SteamGameServer.SetBotPlayerCount
	// void SetBotPlayerCount(int32_t BotPlayers);                                                                           // [0x15a10e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/SteamCore.SteamGameServer.SetAdvertiseServerActive
	// void SetAdvertiseServerActive(bool bActive);                                                                          // [0x159fe40] Final|Native|Public|BlueprintCallable 
	// Function /Script/SteamCore.SteamGameServer.RequestUserGroupStatus
	// bool RequestUserGroupStatus(FSteamID SteamIDUser, FSteamID SteamIDGroup);                                             // [0x15a0af0] Final|Native|Public|BlueprintCallable 
	// Function /Script/SteamCore.SteamGameServer.LogOnAnonymous
	// void LogOnAnonymous();                                                                                                // [0x15a09c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/SteamCore.SteamGameServer.LogOn
	// void LogOn(FString Token);                                                                                            // [0x15a08d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/SteamCore.SteamGameServer.LogOff
	// void LogOff();                                                                                                        // [0x15a08b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/SteamCore.SteamGameServer.GetServerSteamID_PureCompact
	// FSteamID GetServerSteamID_PureCompact();                                                                              // [0x15a02c0] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/SteamCore.SteamGameServer.GetServerSteamID_Pure
	// FSteamID GetServerSteamID_Pure();                                                                                     // [0x15a02c0] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/SteamCore.SteamGameServer.GetServerSteamID
	// FSteamID GetServerSteamID();                                                                                          // [0x15a0280] Final|Native|Public|BlueprintCallable 
	// Function /Script/SteamCore.SteamGameServer.GetServerPublicIP_PureCompact
	// FString GetServerPublicIP_PureCompact();                                                                              // [0x15a01f0] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/SteamCore.SteamGameServer.GetServerPublicIP_Pure
	// FString GetServerPublicIP_Pure();                                                                                     // [0x15a01f0] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/SteamCore.SteamGameServer.GetServerPublicIP
	// FString GetServerPublicIP();                                                                                          // [0x15a0170] Final|Native|Public|BlueprintCallable 
	// Function /Script/SteamCore.SteamGameServer.GetAuthSessionTicket
	// FSteamTicketHandle GetAuthSessionTicket(TArray<char>& Ticket);                                                        // [0x15a00b0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.SteamGameServer.ForceHeartbeat
	// void ForceHeartbeat();                                                                                                // [0x15a0090] Final|Native|Public|BlueprintCallable 
	// Function /Script/SteamCore.SteamGameServer.EndAuthSession
	// void EndAuthSession(FSteamID SteamID);                                                                                // [0x159fed0] Final|Native|Public|BlueprintCallable 
	// Function /Script/SteamCore.SteamGameServer.EnableHeartbeats
	// void EnableHeartbeats(bool bActive);                                                                                  // [0x159fe40] Final|Native|Public|BlueprintCallable 
	// Function /Script/SteamCore.SteamGameServer.CreateUnauthenticatedUserConnection
	// FSteamID CreateUnauthenticatedUserConnection();                                                                       // [0x159fdd0] Final|Native|Public|BlueprintCallable 
	// Function /Script/SteamCore.SteamGameServer.ComputeNewPlayerCompatibility
	// void ComputeNewPlayerCompatibility(FDelegateProperty& Callback, FSteamID SteamIDNewPlayer);                           // [0x159fcd0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.SteamGameServer.ClearAllKeyValues
	// void ClearAllKeyValues();                                                                                             // [0x159fb80] Final|Native|Public|BlueprintCallable 
	// Function /Script/SteamCore.SteamGameServer.CancelAuthTicket
	// void CancelAuthTicket(FSteamTicketHandle TicketHandle);                                                               // [0x159fac0] Final|Native|Public|BlueprintCallable 
	// Function /Script/SteamCore.SteamGameServer.BUpdateUserData
	// bool BUpdateUserData(FSteamID SteamIDUser, FString PlayerName, int32_t Score);                                        // [0x159f800] Final|Native|Public|BlueprintCallable 
	// Function /Script/SteamCore.SteamGameServer.BSecure
	// bool BSecure();                                                                                                       // [0x159f7d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/SteamCore.SteamGameServer.BLoggedOn
	// bool BLoggedOn();                                                                                                     // [0x159f7a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/SteamCore.SteamGameServer.BeginAuthSession
	// ESteamBeginAuthSessionResult BeginAuthSession(TArray<char> Ticket, FSteamID SteamID);                                 // [0x159f980] Final|Native|Public|BlueprintCallable 
	// Function /Script/SteamCore.SteamGameServer.AssociateWithClan
	// void AssociateWithClan(FDelegateProperty& Callback, FSteamID SteamIDClan);                                            // [0x159f6a0] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/SteamCore.GameServerStats
/// Size: 0x0030 (0x000068 - 0x000098)
class UGameServerStats : public USteamCoreSubsystem
{ 
public:
	SDK_UNDEFINED(16,2607) /* FMulticastInlineDelegate */ __um(GSStatsUnloaded);                                   // 0x0068   (0x0010)  
	unsigned char                                      UnknownData00_6[0x20];                                      // 0x0078   (0x0020)  MISSED


	/// Functions
	// Function /Script/SteamCore.GameServerStats.UpdateUserAvgRateStat
	// bool UpdateUserAvgRateStat(FSteamID SteamIDUser, FString Name, float CountThisSession, float SessionLength);          // [0x15a2680] Final|Native|Public|BlueprintCallable 
	// Function /Script/SteamCore.GameServerStats.SetUserStatInt
	// bool SetUserStatInt(FSteamID SteamIDUser, FString Name, int32_t Data);                                                // [0x15a2370] Final|Native|Public|BlueprintCallable 
	// Function /Script/SteamCore.GameServerStats.SetUserStatFloat
	// bool SetUserStatFloat(FSteamID SteamIDUser, FString Name, float Data);                                                // [0x15a21e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/SteamCore.GameServerStats.SetUserAchievement
	// bool SetUserAchievement(FSteamID SteamIDUser, FString Name);                                                          // [0x15a20b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/SteamCore.GameServerStats.ServerStoreUserStats
	// void ServerStoreUserStats(FDelegateProperty& Callback, FSteamID SteamIDUser);                                         // [0x15a0fe0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.GameServerStats.ServerRequestUserStats
	// void ServerRequestUserStats(FDelegateProperty& Callback, FSteamID SteamIDUser);                                       // [0x15a0ee0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.GameServerStats.GetUserStatInt
	// bool GetUserStatInt(FSteamID SteamIDUser, FString Name, int32_t& Data);                                               // [0x15a0620] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.GameServerStats.GetUserStatFloat
	// bool GetUserStatFloat(FSteamID SteamIDUser, FString Name, float& Data);                                               // [0x15a0490] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.GameServerStats.GetUserAchievement
	// bool GetUserAchievement(FSteamID SteamIDUser, FString Name, bool& bAchieved);                                         // [0x15a0300] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.GameServerStats.ClearUserAchievement
	// bool ClearUserAchievement(FSteamID SteamIDUser, FString Name);                                                        // [0x159fba0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/SteamCore.Input
/// Size: 0x0000 (0x000068 - 0x000068)
class UInput : public USteamCoreSubsystem
{ 
public:


	/// Functions
	// Function /Script/SteamCore.Input.TriggerVibration
	// void TriggerVibration(FInputHandle Handle, char LeftSpeed, char RightSpeed);                                          // [0x15a5da0] Final|Native|Public|BlueprintCallable 
	// Function /Script/SteamCore.Input.TriggerRepeatedHapticPulse
	// void TriggerRepeatedHapticPulse(FInputHandle Handle, ESteamCoreControllerPad TargetPad, char DurationMicroSec, char OffMicroSec, char Repeat, char Flags); // [0x15a5bd0] Final|Native|Public|BlueprintCallable 
	// Function /Script/SteamCore.Input.TriggerHapticPulse
	// void TriggerHapticPulse(FInputHandle Handle, ESteamCoreControllerPad TargetPad, char DurationMicroSec);               // [0x15a5ac0] Final|Native|Public|BlueprintCallable 
	// Function /Script/SteamCore.Input.TranslateActionOrigin
	// ESteamCoreInputActionOrigin TranslateActionOrigin(ESteamCoreInputType DestinationInputType, ESteamCoreInputActionOrigin SourceOrigin); // [0x15a59f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/SteamCore.Input.StopAnalogActionMomentum
	// void StopAnalogActionMomentum(FInputHandle Handle, FInputAnalogActionHandle EAction);                                 // [0x15a5920] Final|Native|Public|BlueprintCallable 
	// Function /Script/SteamCore.Input.Shutdown
	// bool Shutdown();                                                                                                      // [0x15a58f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/SteamCore.Input.ShowBindingPanel
	// bool ShowBindingPanel(FInputHandle Handle);                                                                           // [0x15a5850] Final|Native|Public|BlueprintCallable 
	// Function /Script/SteamCore.Input.SetLEDColor
	// void SetLEDColor(FInputHandle Handle, char ColorR, char ColorG, char ColorB, ESteamCoreInputLEDFlag Flags);           // [0x15a56b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/SteamCore.Input.Init
	// bool Init();                                                                                                          // [0x15a5680] Final|Native|Public|BlueprintCallable 
	// Function /Script/SteamCore.Input.GetStringForXboxOrigin
	// FString GetStringForXboxOrigin(ESteamCoreXboxOrigin Origin);                                                          // [0x15a55a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/SteamCore.Input.GetStringForActionOrigin
	// FString GetStringForActionOrigin(ESteamCoreInputActionOrigin Origin);                                                 // [0x15a54c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/SteamCore.Input.GetRemotePlaySessionID
	// int32_t GetRemotePlaySessionID(FInputHandle Handle);                                                                  // [0x15a5420] Final|Native|Public|BlueprintCallable 
	// Function /Script/SteamCore.Input.GetMotionData
	// FInputMotionData GetMotionData(FInputHandle Handle);                                                                  // [0x15a5370] Final|Native|Public|BlueprintCallable 
	// Function /Script/SteamCore.Input.GetInputTypeForHandle
	// ESteamCoreInputType GetInputTypeForHandle(FInputHandle Handle);                                                       // [0x15a52d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/SteamCore.Input.GetGlyphForXboxOrigin
	// FString GetGlyphForXboxOrigin(ESteamCoreXboxOrigin Origin);                                                           // [0x15a51f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/SteamCore.Input.GetGlyphForActionOrigin
	// FString GetGlyphForActionOrigin(ESteamCoreInputActionOrigin Origin);                                                  // [0x15a5110] Final|Native|Public|BlueprintCallable 
	// Function /Script/SteamCore.Input.GetGamepadIndexForController
	// int32_t GetGamepadIndexForController(FInputHandle Handle);                                                            // [0x15a5070] Final|Native|Public|BlueprintCallable 
	// Function /Script/SteamCore.Input.GetDigitalActionOrigins
	// int32_t GetDigitalActionOrigins(FInputHandle Handle, FInputActionSetHandle ActionSetHandle, FInputDigitalActionHandle DigitalActionHandle, TArray<ESteamCoreInputActionOrigin>& OriginsOut); // [0x15a4ef0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.Input.GetDigitalActionHandle
	// FInputDigitalActionHandle GetDigitalActionHandle(FString PszActionName);                                              // [0x15a4e00] Final|Native|Public|BlueprintCallable 
	// Function /Script/SteamCore.Input.GetDigitalActionData
	// FInputDigitalActionData GetDigitalActionData(FInputHandle Handle, FInputDigitalActionHandle DigitalActionHandle);     // [0x15a4d20] Final|Native|Public|BlueprintCallable 
	// Function /Script/SteamCore.Input.GetDeviceBindingRevision
	// bool GetDeviceBindingRevision(FInputHandle Handle, int32_t& Major, int32_t& Minor);                                   // [0x15a4bf0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.Input.GetCurrentActionSet
	// FInputActionSetHandle GetCurrentActionSet(FInputHandle Handle);                                                       // [0x15a4b60] Final|Native|Public|BlueprintCallable 
	// Function /Script/SteamCore.Input.GetControllerForGamepadIndex
	// FInputHandle GetControllerForGamepadIndex(int32_t Index);                                                             // [0x15a4ad0] Final|Native|Public|BlueprintCallable 
	// Function /Script/SteamCore.Input.GetConnectedControllers
	// int32_t GetConnectedControllers(TArray<FInputHandle>& OutHandles);                                                    // [0x15a4a10] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.Input.GetAnalogActionOrigins
	// int32_t GetAnalogActionOrigins(FInputHandle Handle, FInputActionSetHandle ActionSetHandle, FInputAnalogActionHandle AnalogActionHandle, TArray<ESteamCoreInputActionOrigin>& OriginsOut); // [0x15a4890] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.Input.GetAnalogActionHandle
	// FInputAnalogActionHandle GetAnalogActionHandle(FString PszActionName);                                                // [0x15a47a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/SteamCore.Input.GetAnalogActionData
	// FInputAnalogActionData GetAnalogActionData(FInputHandle Handle, FInputAnalogActionHandle AnalogActionHandle);         // [0x15a46c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/SteamCore.Input.GetActiveActionSetLayers
	// int32_t GetActiveActionSetLayers(FInputHandle Handle, TArray<FInputActionSetHandle>& Data);                           // [0x15a45c0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.Input.GetActionSetHandle
	// FInputActionSetHandle GetActionSetHandle(FString ActionSetName);                                                      // [0x15a44d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/SteamCore.Input.GetActionOriginFromXboxOrigin
	// ESteamCoreInputActionOrigin GetActionOriginFromXboxOrigin(FInputHandle Handle, ESteamCoreXboxOrigin Origin);          // [0x15a4400] Final|Native|Public|BlueprintCallable 
	// Function /Script/SteamCore.Input.DeactivateAllActionSetLayers
	// void DeactivateAllActionSetLayers(FInputHandle Handle);                                                               // [0x15a4370] Final|Native|Public|BlueprintCallable 
	// Function /Script/SteamCore.Input.DeactivateActionSetLayer
	// void DeactivateActionSetLayer(FInputHandle Handle, FInputActionSetHandle ActionSetLayerHandle);                       // [0x15a42a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/SteamCore.Input.ActivateActionSetLayer
	// void ActivateActionSetLayer(FInputHandle Handle, FInputActionSetHandle ActionSetLayerHandle);                         // [0x15a41d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/SteamCore.Input.ActivateActionSet
	// void ActivateActionSet(FInputHandle Handle, FInputActionSetHandle ActionSetHandle);                                   // [0x15a4100] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/SteamCore.Inventory
/// Size: 0x0120 (0x000068 - 0x000188)
class UInventory : public USteamCoreSubsystem
{ 
public:
	SDK_UNDEFINED(16,2608) /* FMulticastInlineDelegate */ __um(SteamInventoryResultReady);                         // 0x0068   (0x0010)  
	SDK_UNDEFINED(16,2609) /* FMulticastInlineDelegate */ __um(SteamInventoryDefinitionUpdate);                    // 0x0078   (0x0010)  
	SDK_UNDEFINED(16,2610) /* FMulticastInlineDelegate */ __um(SteamInventoryFullUpdate);                          // 0x0088   (0x0010)  
	SDK_UNDEFINED(16,2611) /* FMulticastInlineDelegate */ __um(SteamInventoryStartPurchaseResult);                 // 0x0098   (0x0010)  
	SDK_UNDEFINED(16,2612) /* FMulticastInlineDelegate */ __um(SteamInventoryRequestPricesResultDelegate);         // 0x00A8   (0x0010)  
	SDK_UNDEFINED(16,2613) /* FMulticastInlineDelegate */ __um(SteamInventoryEligiblePromoItemDefIDs);             // 0x00B8   (0x0010)  
	unsigned char                                      UnknownData00_6[0xC0];                                      // 0x00C8   (0x00C0)  MISSED


	/// Functions
	// Function /Script/SteamCore.Inventory.TriggerItemDrop
	// bool TriggerItemDrop(FSteamInventoryResult& Result, FSteamItemDef ListDefinition);                                    // [0x15aa5b0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.Inventory.TransferItemQuantity
	// bool TransferItemQuantity(FSteamInventoryResult& Result, FSteamItemInstanceID ItemIDSource, int32_t Quantity, FSteamItemInstanceID ItemIDDest); // [0x15aa440] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.Inventory.SubmitUpdateProperties
	// bool SubmitUpdateProperties(FSteamInventoryUpdateHandle Handle, FSteamInventoryResult& ResultHandle);                 // [0x15aa360] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.Inventory.StartUpdateProperties
	// FSteamInventoryUpdateHandle StartUpdateProperties();                                                                  // [0x15aa320] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Inventory.StartPurchase
	// void StartPurchase(FDelegateProperty& Callback, TArray<FSteamItemDef> ItemDefs, TArray<int32_t> Quantity);            // [0x15a9f40] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.Inventory.SetPropertyString
	// bool SetPropertyString(FSteamInventoryUpdateHandle Handle, FSteamItemInstanceID ItemId, FString PropertyName, FString Value); // [0x15a9d50] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Inventory.SetPropertyInt
	// bool SetPropertyInt(FSteamInventoryUpdateHandle Handle, FSteamItemInstanceID ItemId, FString PropertyName, int32_t Value); // [0x15a9bb0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Inventory.SetPropertyFloat
	// bool SetPropertyFloat(FSteamInventoryUpdateHandle Handle, FSteamItemInstanceID ItemId, FString PropertyName, float Value); // [0x15a9a10] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Inventory.SetPropertyBool
	// bool SetPropertyBool(FSteamInventoryUpdateHandle Handle, FSteamItemInstanceID ItemId, FString PropertyName, bool bValue); // [0x15a9860] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Inventory.SerializeResult
	// bool SerializeResult(FSteamInventoryResult Handle, TArray<char>& Buffer);                                             // [0x15a9770] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.Inventory.RequestPrices
	// void RequestPrices(FDelegateProperty& Callback);                                                                      // [0x15a95f0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.Inventory.RequestEligiblePromoItemDefinitionsIDs
	// void RequestEligiblePromoItemDefinitionsIDs(FDelegateProperty& Callback, FSteamID SteamID);                           // [0x15a93f0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.Inventory.RemoveProperty
	// bool RemoveProperty(FSteamInventoryUpdateHandle Handle, FSteamItemInstanceID ItemId, FString PropertyName);           // [0x15a9280] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Inventory.LoadItemDefinitions
	// bool LoadItemDefinitions();                                                                                           // [0x15a9250] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Inventory.GrantPromoItems
	// bool GrantPromoItems(FSteamInventoryResult& Result);                                                                  // [0x15a8ea0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.Inventory.GetResultTimestamp
	// int32_t GetResultTimestamp(FSteamInventoryResult Handle);                                                             // [0x15a8e10] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Inventory.GetResultStatus
	// ESteamResult GetResultStatus(FSteamInventoryResult Handle);                                                           // [0x15a8d80] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Inventory.GetResultItems
	// bool GetResultItems(FSteamInventoryResult Handle, TArray<FSteamItemDetails>& Items);                                  // [0x15a8c60] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.Inventory.GetResultItemProperty
	// bool GetResultItemProperty(FSteamInventoryResult Handle, int32_t ItemIndex, FString PropertyName, FString& Value);    // [0x15a8aa0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.Inventory.GetNumItemsWithPrices
	// int32_t GetNumItemsWithPrices();                                                                                      // [0x15a8a70] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Inventory.GetItemsWithPrices
	// bool GetItemsWithPrices(TArray<FSteamItemDef>& ItemDefs, TArray<int32_t>& Prices, TArray<int32_t>& BasePrices);       // [0x15a88e0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.Inventory.GetItemsByID
	// bool GetItemsByID(FSteamInventoryResult& InventoryResult, TArray<FSteamItemInstanceID> InstanceIDs);                  // [0x15a87a0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.Inventory.GetItemPrice
	// bool GetItemPrice(FSteamItemDef ItemDef, int32_t& Price, int32_t& BasePrice);                                         // [0x15a8670] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.Inventory.GetItemDefinitionProperty
	// bool GetItemDefinitionProperty(FSteamItemDef ItemDef, FString PropertyName, FString& Value);                          // [0x15a84e0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.Inventory.GetItemDefinitionIDs
	// bool GetItemDefinitionIDs(TArray<FSteamItemDef>& ItemDefs);                                                           // [0x15a8430] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.Inventory.GetEligiblePromoItemDefinitionIDs
	// bool GetEligiblePromoItemDefinitionIDs(FSteamID SteamID, TArray<FSteamItemDef>& ItemDefs);                            // [0x15a8340] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.Inventory.GetAllItems
	// bool GetAllItems(FSteamInventoryResult& Handle);                                                                      // [0x15a82a0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.Inventory.GenerateItems
	// bool GenerateItems(FSteamInventoryResult& Result, TArray<FSteamItemDef> ItemDefs, TArray<int32_t> Quantity);          // [0x15a80d0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.Inventory.ExchangeItems
	// bool ExchangeItems(FSteamInventoryResult& Result, TArray<FSteamItemDef> ArrayGenerate, TArray<int32_t> ArrayGenerateQuantity, TArray<FSteamItemInstanceID> ArrayDestroy, TArray<int32_t> ArrayDestroyQuantity); // [0x15a7de0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.Inventory.DestroyResult
	// void DestroyResult(FSteamInventoryResult Handle);                                                                     // [0x15a7d60] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Inventory.DeserializeResult
	// bool DeserializeResult(FSteamInventoryResult& Result, TArray<char> Buffer, bool bReservedMustBeFalse);                // [0x15a7bd0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.Inventory.ConsumeItem
	// bool ConsumeItem(FSteamInventoryResult& Result, FSteamItemInstanceID ItemConsume, int32_t Quantity);                  // [0x15a7ab0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.Inventory.CheckResultSteamID
	// bool CheckResultSteamID(FSteamInventoryResult Handle, FSteamID SteamIDExpected);                                      // [0x15a79e0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Inventory.AddPromoItems
	// bool AddPromoItems(FSteamInventoryResult& OutResult, TArray<FSteamItemDef> ItemDefs);                                 // [0x15a78a0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.Inventory.AddPromoItem
	// bool AddPromoItem(FSteamInventoryResult& Result, FSteamItemDef ItemDef);                                              // [0x15a77c0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/SteamCore.SteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs
/// Size: 0x0010 (0x000038 - 0x000048)
class USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs : public USteamCoreAsyncAction
{ 
public:
	SDK_UNDEFINED(16,2614) /* FMulticastInlineDelegate */ __um(OnCallback);                                        // 0x0038   (0x0010)  


	/// Functions
	// Function /Script/SteamCore.SteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs.RequestEligiblePromoItemDefinitionsIDsAsync
	// class USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs* RequestEligiblePromoItemDefinitionsIDsAsync(class UObject* WorldContextObject, FSteamID SteamID, float Timeout); // [0x15a94f0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.SteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs.HandleCallback
	// void HandleCallback(FSteamInventoryEligiblePromoItemDefIDs& Data, bool bWasSuccessful);                               // [0x15a8f40] Final|Native|Public|HasOutParms 
};

/// Class /Script/SteamCore.SteamCoreInventoryAsyncActionRequestPricesResult
/// Size: 0x0010 (0x000038 - 0x000048)
class USteamCoreInventoryAsyncActionRequestPricesResult : public USteamCoreAsyncAction
{ 
public:
	SDK_UNDEFINED(16,2615) /* FMulticastInlineDelegate */ __um(OnCallback);                                        // 0x0038   (0x0010)  


	/// Functions
	// Function /Script/SteamCore.SteamCoreInventoryAsyncActionRequestPricesResult.RequestPricesAsync
	// class USteamCoreInventoryAsyncActionRequestPricesResult* RequestPricesAsync(class UObject* WorldContextObject, float Timeout); // [0x15a96a0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.SteamCoreInventoryAsyncActionRequestPricesResult.HandleCallback
	// void HandleCallback(FSteamInventoryRequestPricesResult& Data, bool bWasSuccessful);                                   // [0x15a9030] Final|Native|Public|HasOutParms 
};

/// Class /Script/SteamCore.SteamCoreInventoryAsyncActionStartPurchaseResult
/// Size: 0x0010 (0x000038 - 0x000048)
class USteamCoreInventoryAsyncActionStartPurchaseResult : public USteamCoreAsyncAction
{ 
public:
	SDK_UNDEFINED(16,2616) /* FMulticastInlineDelegate */ __um(OnCallback);                                        // 0x0038   (0x0010)  


	/// Functions
	// Function /Script/SteamCore.SteamCoreInventoryAsyncActionStartPurchaseResult.StartPurchaseAsync
	// class USteamCoreInventoryAsyncActionStartPurchaseResult* StartPurchaseAsync(class UObject* WorldContextObject, TArray<FSteamItemDef> ItemDefs, TArray<int32_t> Quantity, float Timeout); // [0x15aa120] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.SteamCoreInventoryAsyncActionStartPurchaseResult.HandleCallback
	// void HandleCallback(FSteamInventoryStartPurchaseResult& Data, bool bWasSuccessful);                                   // [0x15a9130] Final|Native|Public|HasOutParms 
};

/// Class /Script/SteamCore.Matchmaking
/// Size: 0x01B0 (0x000068 - 0x000218)
class UMatchmaking : public USteamCoreSubsystem
{ 
public:
	SDK_UNDEFINED(16,2617) /* FMulticastInlineDelegate */ __um(FavoritesListAccountsUpdated);                      // 0x0068   (0x0010)  
	SDK_UNDEFINED(16,2618) /* FMulticastInlineDelegate */ __um(FavoritesListChanged);                              // 0x0078   (0x0010)  
	SDK_UNDEFINED(16,2619) /* FMulticastInlineDelegate */ __um(LobbyChatMsg);                                      // 0x0088   (0x0010)  
	SDK_UNDEFINED(16,2620) /* FMulticastInlineDelegate */ __um(LobbyChatUpdate);                                   // 0x0098   (0x0010)  
	SDK_UNDEFINED(16,2621) /* FMulticastInlineDelegate */ __um(LobbyDataUpdate);                                   // 0x00A8   (0x0010)  
	SDK_UNDEFINED(16,2622) /* FMulticastInlineDelegate */ __um(LobbyEnter);                                        // 0x00B8   (0x0010)  
	SDK_UNDEFINED(16,2623) /* FMulticastInlineDelegate */ __um(LobbyGameCreated);                                  // 0x00C8   (0x0010)  
	SDK_UNDEFINED(16,2624) /* FMulticastInlineDelegate */ __um(LobbyInvite);                                       // 0x00D8   (0x0010)  
	SDK_UNDEFINED(16,2625) /* FMulticastInlineDelegate */ __um(LobbyKicked);                                       // 0x00E8   (0x0010)  
	unsigned char                                      UnknownData00_6[0x120];                                     // 0x00F8   (0x0120)  MISSED


	/// Functions
	// Function /Script/SteamCore.Matchmaking.SetLobbyType
	// bool SetLobbyType(FSteamID SteamIDLobby, ESteamLobbyType LobbyType);                                                  // [0x15b05b0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Matchmaking.SetLobbyOwner
	// bool SetLobbyOwner(FSteamID SteamIDLobby, FSteamID SteamIDNewOwner);                                                  // [0x15b04e0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Matchmaking.SetLobbyMemberLimit
	// bool SetLobbyMemberLimit(FSteamID SteamIDLobby, int32_t MaxMembers);                                                  // [0x15b0410] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Matchmaking.SetLobbyMemberData
	// void SetLobbyMemberData(FSteamID SteamIDLobby, FString Key, FString Value);                                           // [0x15b0270] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Matchmaking.SetLobbyJoinable
	// bool SetLobbyJoinable(FSteamID SteamIDLobby, bool bLobbyJoinable);                                                    // [0x15b01a0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Matchmaking.SetLobbyGameServer
	// void SetLobbyGameServer(FSteamID SteamIDLobby, FString GameServerIP, int32_t GameServerPort, FSteamID SteamIDGameServer); // [0x15b0000] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Matchmaking.SetLobbyData
	// bool SetLobbyData(FSteamID SteamIDLobby, FString Key, FString Value);                                                 // [0x15afe50] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Matchmaking.SetLinkedLobby
	// bool SetLinkedLobby(FSteamID SteamIDLobby, FSteamID SteamIDLobbyDependent);                                           // [0x15afd80] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Matchmaking.SendLobbyChatMsg
	// bool SendLobbyChatMsg(FSteamID SteamIDLobby, FString Message);                                                        // [0x15afc50] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Matchmaking.RequestLobbyList
	// void RequestLobbyList(FDelegateProperty& Callback);                                                                   // [0x15afad0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.Matchmaking.RequestLobbyData
	// bool RequestLobbyData(FSteamID SteamIDLobby);                                                                         // [0x15afa40] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Matchmaking.RemoveFavoriteGame
	// bool RemoveFavoriteGame(int32_t AppID, FString IP, int32_t ConnectionPort, int32_t QueryPort, TArray<ESteamFavoriteFlags> Flags); // [0x15af810] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Matchmaking.LeaveLobby
	// void LeaveLobby(FSteamID SteamIDLobby);                                                                               // [0x15af560] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Matchmaking.JoinLobby
	// void JoinLobby(FDelegateProperty& Callback, FSteamID SteamIDLobby);                                                   // [0x15af360] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.Matchmaking.InviteUserToLobby
	// bool InviteUserToLobby(FSteamID SteamIDLobby, FSteamID SteamIDInvitee);                                               // [0x15af290] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Matchmaking.GetNumLobbyMembers
	// int32_t GetNumLobbyMembers(FSteamID SteamIDLobby);                                                                    // [0x15aef40] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Matchmaking.GetLobbyOwner
	// FSteamID GetLobbyOwner(FSteamID SteamIDLobby);                                                                        // [0x15aeeb0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Matchmaking.GetLobbyMemberLimit
	// int32_t GetLobbyMemberLimit(FSteamID SteamIDLobby);                                                                   // [0x15aee20] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Matchmaking.GetLobbyMemberData
	// FString GetLobbyMemberData(FSteamID SteamIDLobby, FSteamID SteamIDUser, FString Key);                                 // [0x15aec80] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Matchmaking.GetLobbyMemberByIndex
	// FSteamID GetLobbyMemberByIndex(FSteamID SteamIDLobby, int32_t Member);                                                // [0x15aebb0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Matchmaking.GetLobbyGameServer
	// bool GetLobbyGameServer(FSteamID SteamIDLobby, FString& GameServerIP, int32_t& GameServerPort, FSteamID& SteamIDGameServer); // [0x15aea20] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.Matchmaking.GetLobbyDataCount
	// int32_t GetLobbyDataCount(FSteamID SteamIDLobby);                                                                     // [0x15ae990] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Matchmaking.GetLobbyDataByIndex
	// bool GetLobbyDataByIndex(FSteamID SteamIDLobby, int32_t LobbyData, FString& Key, FString& Value);                     // [0x15ae7f0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.Matchmaking.GetLobbyData
	// FString GetLobbyData(FSteamID SteamIDLobby, FString Key);                                                             // [0x15ae680] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Matchmaking.GetLobbyChatEntry
	// int32_t GetLobbyChatEntry(FSteamID SteamIDLobby, int32_t MessageID, FSteamID& SteamIDUser, FString& Message, ESteamChatEntryType& ChatEntryType); // [0x15ae480] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.Matchmaking.GetLobbyByIndex
	// FSteamID GetLobbyByIndex(int32_t Lobby);                                                                              // [0x15ae3f0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Matchmaking.GetFavoriteGameCount
	// int32_t GetFavoriteGameCount();                                                                                       // [0x15ae3c0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Matchmaking.GetFavoriteGame
	// bool GetFavoriteGame(int32_t Game, int32_t& AppID, FString& IP, int32_t& ConnectionPort, int32_t& QueryPort, TArray<ESteamFavoriteFlags>& Flags, int32_t& TimeLastPlayedOnServer); // [0x15ae120] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.Matchmaking.DeleteLobbyData
	// bool DeleteLobbyData(FSteamID SteamIDLobby, FString Key);                                                             // [0x15adbc0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Matchmaking.CreateLobby
	// void CreateLobby(FDelegateProperty& Callback, ESteamLobbyType LobbyType, int32_t MaxMembers);                         // [0x15ad3e0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.Matchmaking.AddRequestLobbyListStringFilter
	// void AddRequestLobbyListStringFilter(FString KeyToMatch, FString ValueToMatch, ESteamLobbyComparison ComparisonType); // [0x15ad230] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Matchmaking.AddRequestLobbyListResultCountFilter
	// void AddRequestLobbyListResultCountFilter(int32_t MaxResults);                                                        // [0x15ad1b0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Matchmaking.AddRequestLobbyListNumericalFilter
	// void AddRequestLobbyListNumericalFilter(FString KeyToMatch, int32_t ValueToMatch, ESteamLobbyComparison ComparisonType); // [0x15ad040] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Matchmaking.AddRequestLobbyListNearValueFilter
	// void AddRequestLobbyListNearValueFilter(FString KeyToMatch, int32_t ValueToBeCloseTo);                                // [0x15acf10] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Matchmaking.AddRequestLobbyListFilterSlotsAvailable
	// void AddRequestLobbyListFilterSlotsAvailable(int32_t SlotsAvailable);                                                 // [0x15ace90] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Matchmaking.AddRequestLobbyListDistanceFilter
	// void AddRequestLobbyListDistanceFilter(ESteamLobbyDistanceFilter LobbyDistanceFilter);                                // [0x15ace20] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Matchmaking.AddRequestLobbyListCompatibleMembersFilter
	// void AddRequestLobbyListCompatibleMembersFilter(FSteamID SteamIDLobby);                                               // [0x15acda0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Matchmaking.AddFavoriteGame
	// int32_t AddFavoriteGame(int32_t AppID, FString IP, int32_t ConnectionPort, int32_t QueryPort, TArray<ESteamFavoriteFlags> Flags, int32_t TimeLastPlayedOnServer); // [0x15acb20] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCore.SteamCoreMatchmakingAsyncActionCreateLobby
/// Size: 0x0010 (0x000038 - 0x000048)
class USteamCoreMatchmakingAsyncActionCreateLobby : public USteamCoreAsyncAction
{ 
public:
	SDK_UNDEFINED(16,2626) /* FMulticastInlineDelegate */ __um(OnCallback);                                        // 0x0038   (0x0010)  


	/// Functions
	// Function /Script/SteamCore.SteamCoreMatchmakingAsyncActionCreateLobby.HandleCallback
	// void HandleCallback(FCreateLobbyData& Data, bool bWasSuccessful);                                                     // [0x15aefd0] Final|Native|Public|HasOutParms 
	// Function /Script/SteamCore.SteamCoreMatchmakingAsyncActionCreateLobby.CreateLobbyAsync
	// class USteamCoreMatchmakingAsyncActionCreateLobby* CreateLobbyAsync(class UObject* WorldContextObject, ESteamLobbyType LobbyType, int32_t MaxMembers, float Timeout); // [0x15ad510] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCore.SteamCoreMatchmakingAsyncActionRequestLobbyList
/// Size: 0x0010 (0x000038 - 0x000048)
class USteamCoreMatchmakingAsyncActionRequestLobbyList : public USteamCoreAsyncAction
{ 
public:
	SDK_UNDEFINED(16,2627) /* FMulticastInlineDelegate */ __um(OnCallback);                                        // 0x0038   (0x0010)  


	/// Functions
	// Function /Script/SteamCore.SteamCoreMatchmakingAsyncActionRequestLobbyList.RequestLobbyListAsync
	// class USteamCoreMatchmakingAsyncActionRequestLobbyList* RequestLobbyListAsync(class UObject* WorldContextObject, float Timeout); // [0x15afb80] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.SteamCoreMatchmakingAsyncActionRequestLobbyList.HandleCallback
	// void HandleCallback(FLobbyMatchList& Data, bool bWasSuccessful);                                                      // [0x15af1b0] Final|Native|Public|HasOutParms 
};

/// Class /Script/SteamCore.SteamCoreMatchmakingAsyncActionJoinLobby
/// Size: 0x0010 (0x000038 - 0x000048)
class USteamCoreMatchmakingAsyncActionJoinLobby : public USteamCoreAsyncAction
{ 
public:
	SDK_UNDEFINED(16,2628) /* FMulticastInlineDelegate */ __um(OnCallback);                                        // 0x0038   (0x0010)  


	/// Functions
	// Function /Script/SteamCore.SteamCoreMatchmakingAsyncActionJoinLobby.JoinLobbyAsync
	// class USteamCoreMatchmakingAsyncActionJoinLobby* JoinLobbyAsync(class UObject* WorldContextObject, FSteamID SteamIDLobby, float Timeout); // [0x15af460] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.SteamCoreMatchmakingAsyncActionJoinLobby.HandleCallback
	// void HandleCallback(FJoinLobbyData& Data, bool bWasSuccessful);                                                       // [0x15af0c0] Final|Native|Public|HasOutParms 
};

/// Class /Script/SteamCore.SteamCoreCreateSession
/// Size: 0x0120 (0x000038 - 0x000158)
class USteamCoreCreateSession : public USteamCoreAsyncAction
{ 
public:
	SDK_UNDEFINED(16,2629) /* FMulticastInlineDelegate */ __um(OnSuccess);                                         // 0x0038   (0x0010)  
	SDK_UNDEFINED(16,2630) /* FMulticastInlineDelegate */ __um(OnFailure);                                         // 0x0048   (0x0010)  
	unsigned char                                      UnknownData00_6[0x100];                                     // 0x0058   (0x0100)  MISSED


	/// Functions
	// Function /Script/SteamCore.SteamCoreCreateSession.CreateSteamCoreSession
	// class USteamCoreCreateSession* CreateSteamCoreSession(class UObject* WorldContextObject, TMap<FString, FSteamSessionSetting> SessionSettings, FString SessionName, int32_t MaxPlayers, bool bUseLAN, bool bAllowInvites, bool bUsesPresence, bool bAllowJoinViaPresence, bool bAllowJoinViaPresenceFriendsOnly, bool bAntiCheatProtected, bool bUsesStats, bool bShouldAdvertise, bool bUseLobbiesVoiceChatIfAvailable, float Timeout); // [0x15ad660] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCore.SteamCoreFindSession
/// Size: 0x00A0 (0x000038 - 0x0000D8)
class USteamCoreFindSession : public USteamCoreAsyncAction
{ 
public:
	SDK_UNDEFINED(16,2631) /* FMulticastInlineDelegate */ __um(OnCallback);                                        // 0x0038   (0x0010)  
	unsigned char                                      UnknownData00_6[0x90];                                      // 0x0048   (0x0090)  MISSED


	/// Functions
	// Function /Script/SteamCore.SteamCoreFindSession.OnCompleted
	// void OnCompleted(bool bSuccessful);                                                                                   // [0x15af6b0] Final|Native|Public  
	// Function /Script/SteamCore.SteamCoreFindSession.FindSteamCoreSessions
	// class USteamCoreFindSession* FindSteamCoreSessions(class UObject* WorldContextObject, TMap<FString, FSteamSessionSearchSetting> SearchSettings, int32_t MaxResults, bool bUseLAN, ESteamSessionFindType ServerType, bool bEmptyServersOnly, bool bSecureServersOnly, float Timeout); // [0x15addc0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCore.SteamCoreDestroySession
/// Size: 0x0040 (0x000038 - 0x000078)
class USteamCoreDestroySession : public USteamCoreAsyncAction
{ 
public:
	SDK_UNDEFINED(16,2632) /* FMulticastInlineDelegate */ __um(OnSuccess);                                         // 0x0038   (0x0010)  
	SDK_UNDEFINED(16,2633) /* FMulticastInlineDelegate */ __um(OnFailure);                                         // 0x0048   (0x0010)  
	unsigned char                                      UnknownData00_6[0x20];                                      // 0x0058   (0x0020)  MISSED


	/// Functions
	// Function /Script/SteamCore.SteamCoreDestroySession.OnCompleted
	// void OnCompleted(FName SessionName, bool bWasSuccessful);                                                             // [0x15af5e0] Final|Native|Public  
	// Function /Script/SteamCore.SteamCoreDestroySession.DestroySteamCoreSession
	// class USteamCoreDestroySession* DestroySteamCoreSession(class UObject* WorldContextObject, float Timeout);            // [0x15adcf0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCore.SteamCoreUpdateSession
/// Size: 0x0030 (0x000038 - 0x000068)
class USteamCoreUpdateSession : public USteamCoreAsyncAction
{ 
public:
	SDK_UNDEFINED(16,2634) /* FMulticastInlineDelegate */ __um(OnCallback);                                        // 0x0038   (0x0010)  
	unsigned char                                      UnknownData00_6[0x20];                                      // 0x0048   (0x0020)  MISSED


	/// Functions
	// Function /Script/SteamCore.SteamCoreUpdateSession.UpdateSteamCoreSession
	// class USteamCoreUpdateSession* UpdateSteamCoreSession(class UObject* WorldContextObject, TMap<FString, FSteamSessionSearchSetting> Settings, FString SessionName, int32_t MaxPlayers); // [0x15b0680] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.SteamCoreUpdateSession.OnCompleted
	// void OnCompleted(FName SessionName, bool bWasSuccessful);                                                             // [0x15af740] Final|Native|Public  
};

/// Class /Script/SteamCore.MatchmakingServers
/// Size: 0x0000 (0x000068 - 0x000068)
class UMatchmakingServers : public USteamCoreSubsystem
{ 
public:


	/// Functions
	// Function /Script/SteamCore.MatchmakingServers.ServerRules
	// void ServerRules(FDelegateProperty& Callback, FString IP, int32_t QueryPort);                                         // [0x15b5ea0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.MatchmakingServers.RequestSpectatorServerList
	// void RequestSpectatorServerList(FDelegateProperty& ServerCallback, int32_t AppID, float Timeout, int32_t MaxResults, bool bIgnoreNonResponsive, class UServerFilter* ServerFilter); // [0x15b5ad0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.MatchmakingServers.RequestLANServerList
	// void RequestLANServerList(FDelegateProperty& ServerCallback, int32_t AppID, float Timeout, int32_t MaxResults, bool bIgnoreNonResponsive, class UServerFilter* ServerFilter); // [0x15b5700] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.MatchmakingServers.RequestInternetServerList
	// void RequestInternetServerList(FDelegateProperty& ServerCallback, int32_t AppID, float Timeout, int32_t MaxResults, bool bIgnoreNonResponsive, class UServerFilter* ServerFilter); // [0x15b5330] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.MatchmakingServers.RequestHistoryServerList
	// void RequestHistoryServerList(FDelegateProperty& ServerCallback, int32_t AppID, float Timeout, int32_t MaxResults, bool bIgnoreNonResponsive, class UServerFilter* ServerFilter); // [0x15b4f60] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.MatchmakingServers.RequestFriendsServerList
	// void RequestFriendsServerList(FDelegateProperty& ServerCallback, int32_t AppID, float Timeout, int32_t MaxResults, bool bIgnoreNonResponsive, class UServerFilter* ServerFilter); // [0x15b4b90] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.MatchmakingServers.RequestFavoritesServerList
	// void RequestFavoritesServerList(FDelegateProperty& ServerCallback, int32_t AppID, float Timeout, int32_t MaxResults, bool bIgnoreNonResponsive, class UServerFilter* ServerFilter); // [0x15b47c0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.MatchmakingServers.PingServer
	// void PingServer(FDelegateProperty& Callback, FString IP, int32_t QueryPort);                                          // [0x15b4480] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/SteamCore.SteamCoreMatchmakingServersAsyncActionPingServer
/// Size: 0x0010 (0x000038 - 0x000048)
class USteamCoreMatchmakingServersAsyncActionPingServer : public USteamCoreAsyncAction
{ 
public:
	SDK_UNDEFINED(16,2635) /* FMulticastInlineDelegate */ __um(OnCallback);                                        // 0x0038   (0x0010)  


	/// Functions
	// Function /Script/SteamCore.SteamCoreMatchmakingServersAsyncActionPingServer.PingServerAsync
	// class USteamCoreMatchmakingServersAsyncActionPingServer* PingServerAsync(class UObject* WorldContextObject, FString IP, int32_t Port, float Timeout); // [0x15b4610] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.SteamCoreMatchmakingServersAsyncActionPingServer.HandleCallback
	// void HandleCallback(FGameServerItem& Data, bool bWasSuccessful);                                                      // [0x15b4010] Final|Native|Public|HasOutParms 
	// Function /Script/SteamCore.SteamCoreMatchmakingServersAsyncActionPingServer.CancelPingQueries
	// void CancelPingQueries(class UObject* WorldContextObject);                                                            // [0x15b3da0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCore.SteamCoreMatchmakingServersAsyncActionRequestServerList
/// Size: 0x0020 (0x000038 - 0x000058)
class USteamCoreMatchmakingServersAsyncActionRequestServerList : public USteamCoreAsyncAction
{ 
public:
	SDK_UNDEFINED(16,2636) /* FMulticastInlineDelegate */ __um(OnCallback);                                        // 0x0038   (0x0010)  
	SDK_UNDEFINED(16,2637) /* FMulticastInlineDelegate */ __um(OnRefreshCompleted);                                // 0x0048   (0x0010)  


	/// Functions
	// Function /Script/SteamCore.SteamCoreMatchmakingServersAsyncActionRequestServerList.RequestSpectatorServerListAsync
	// class USteamCoreMatchmakingServersAsyncActionRequestServerList* RequestSpectatorServerListAsync(class UObject* WorldContextObject, int32_t AppID, float Timeout, int32_t MaxResults, bool bIgnoreNonResponsive, class UServerFilter* ServerFilter); // [0x15b5cd0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.SteamCoreMatchmakingServersAsyncActionRequestServerList.RequestLANServerListAsync
	// class USteamCoreMatchmakingServersAsyncActionRequestServerList* RequestLANServerListAsync(class UObject* WorldContextObject, int32_t AppID, float Timeout, int32_t MaxResults, bool bIgnoreNonResponsive, class UServerFilter* ServerFilter); // [0x15b5900] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.SteamCoreMatchmakingServersAsyncActionRequestServerList.RequestInternetServerListAsync
	// class USteamCoreMatchmakingServersAsyncActionRequestServerList* RequestInternetServerListAsync(class UObject* WorldContextObject, int32_t AppID, float Timeout, int32_t MaxResults, bool bIgnoreNonResponsive, class UServerFilter* ServerFilter); // [0x15b5530] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.SteamCoreMatchmakingServersAsyncActionRequestServerList.RequestHistoryServerListAsync
	// class USteamCoreMatchmakingServersAsyncActionRequestServerList* RequestHistoryServerListAsync(class UObject* WorldContextObject, int32_t AppID, float Timeout, int32_t MaxResults, bool bIgnoreNonResponsive, class UServerFilter* ServerFilter); // [0x15b5160] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.SteamCoreMatchmakingServersAsyncActionRequestServerList.RequestFriendsServerListAsync
	// class USteamCoreMatchmakingServersAsyncActionRequestServerList* RequestFriendsServerListAsync(class UObject* WorldContextObject, int32_t AppID, float Timeout, int32_t MaxResults, bool bIgnoreNonResponsive, class UServerFilter* ServerFilter); // [0x15b4d90] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.SteamCoreMatchmakingServersAsyncActionRequestServerList.RequestFavoritesServerListAsync
	// class USteamCoreMatchmakingServersAsyncActionRequestServerList* RequestFavoritesServerListAsync(class UObject* WorldContextObject, int32_t AppID, float Timeout, int32_t MaxResults, bool bIgnoreNonResponsive, class UServerFilter* ServerFilter); // [0x15b49c0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.SteamCoreMatchmakingServersAsyncActionRequestServerList.HandleServerListFinished
	// void HandleServerListFinished();                                                                                      // [0x15b4460] Final|Native|Private 
	// Function /Script/SteamCore.SteamCoreMatchmakingServersAsyncActionRequestServerList.HandleCallback
	// void HandleCallback(FGameServerItem& Data);                                                                           // [0x15b41c0] Final|Native|Private|HasOutParms 
	// Function /Script/SteamCore.SteamCoreMatchmakingServersAsyncActionRequestServerList.CancelServerListQueries
	// void CancelServerListQueries(class UObject* WorldContextObject);                                                      // [0x15b3e20] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCore.SteamCoreMatchmakingServersAsyncActionServerRules
/// Size: 0x0010 (0x000038 - 0x000048)
class USteamCoreMatchmakingServersAsyncActionServerRules : public USteamCoreAsyncAction
{ 
public:
	SDK_UNDEFINED(16,2638) /* FMulticastInlineDelegate */ __um(OnCallback);                                        // 0x0038   (0x0010)  


	/// Functions
	// Function /Script/SteamCore.SteamCoreMatchmakingServersAsyncActionServerRules.ServerRulesAsync
	// class USteamCoreMatchmakingServersAsyncActionServerRules* ServerRulesAsync(class UObject* WorldContextObject, FString IP, int32_t QueryPort, float Timeout); // [0x15b6030] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.SteamCoreMatchmakingServersAsyncActionServerRules.HandleCallback
	// void HandleCallback(TArray<FGameServerRule>& Data, bool bWasSuccessful);                                              // [0x15b4330] Final|Native|Public|HasOutParms 
	// Function /Script/SteamCore.SteamCoreMatchmakingServersAsyncActionServerRules.CancelServerRulesQueries
	// void CancelServerRulesQueries(class UObject* WorldContextObject);                                                     // [0x15b3ea0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCore.ServerFilter
/// Size: 0x0010 (0x000028 - 0x000038)
class UServerFilter : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0028   (0x0010)  MISSED


	/// Functions
	// Function /Script/SteamCore.ServerFilter.GetFilters
	// TMap<FString, FString> GetFilters();                                                                                  // [0x15b3f20] Final|Native|Public|BlueprintCallable 
	// Function /Script/SteamCore.ServerFilter.AddFilterWhitelisted
	// void AddFilterWhitelisted();                                                                                          // [0x15b3d80] Final|Native|Public|BlueprintCallable 
	// Function /Script/SteamCore.ServerFilter.AddFilterVersion
	// void AddFilterVersion(FString Value);                                                                                 // [0x15b3c90] Final|Native|Public|BlueprintCallable 
	// Function /Script/SteamCore.ServerFilter.AddFilterSecure
	// void AddFilterSecure();                                                                                               // [0x15b3c70] Final|Native|Public|BlueprintCallable 
	// Function /Script/SteamCore.ServerFilter.AddFilterProxy
	// void AddFilterProxy();                                                                                                // [0x15b3c50] Final|Native|Public|BlueprintCallable 
	// Function /Script/SteamCore.ServerFilter.AddFilterPassword
	// void AddFilterPassword();                                                                                             // [0x15b3c30] Final|Native|Public|BlueprintCallable 
	// Function /Script/SteamCore.ServerFilter.AddFilterOr
	// void AddFilterOr(FString Value);                                                                                      // [0x15b3b40] Final|Native|Public|BlueprintCallable 
	// Function /Script/SteamCore.ServerFilter.AddFilterNotFull
	// void AddFilterNotFull();                                                                                              // [0x15b3b20] Final|Native|Public|BlueprintCallable 
	// Function /Script/SteamCore.ServerFilter.AddFilterNotAppId
	// void AddFilterNotAppId(FString Value);                                                                                // [0x15b3a30] Final|Native|Public|BlueprintCallable 
	// Function /Script/SteamCore.ServerFilter.AddFilterNor
	// void AddFilterNor(FString Value);                                                                                     // [0x15b3940] Final|Native|Public|BlueprintCallable 
	// Function /Script/SteamCore.ServerFilter.AddFilterNoPlayers
	// void AddFilterNoPlayers();                                                                                            // [0x15b3920] Final|Native|Public|BlueprintCallable 
	// Function /Script/SteamCore.ServerFilter.AddFilterNand
	// void AddFilterNand(FString Value);                                                                                    // [0x15b3830] Final|Native|Public|BlueprintCallable 
	// Function /Script/SteamCore.ServerFilter.AddFilterName
	// void AddFilterName(FString Value);                                                                                    // [0x15b3740] Final|Native|Public|BlueprintCallable 
	// Function /Script/SteamCore.ServerFilter.AddFilterMap
	// void AddFilterMap(FString Value);                                                                                     // [0x15b3650] Final|Native|Public|BlueprintCallable 
	// Function /Script/SteamCore.ServerFilter.AddFilterLinux
	// void AddFilterLinux();                                                                                                // [0x15b3630] Final|Native|Public|BlueprintCallable 
	// Function /Script/SteamCore.ServerFilter.AddFilterHasPlayers
	// void AddFilterHasPlayers();                                                                                           // [0x15b3610] Final|Native|Public|BlueprintCallable 
	// Function /Script/SteamCore.ServerFilter.AddFilterGameTagsNor
	// void AddFilterGameTagsNor(FString Value);                                                                             // [0x15b3520] Final|Native|Public|BlueprintCallable 
	// Function /Script/SteamCore.ServerFilter.AddFilterGameTagsAnd
	// void AddFilterGameTagsAnd(FString Value);                                                                             // [0x15b3430] Final|Native|Public|BlueprintCallable 
	// Function /Script/SteamCore.ServerFilter.AddFilterGameDataOr
	// void AddFilterGameDataOr(FString Value);                                                                              // [0x15b3340] Final|Native|Public|BlueprintCallable 
	// Function /Script/SteamCore.ServerFilter.AddFilterGameDataNor
	// void AddFilterGameDataNor(FString Value);                                                                             // [0x15b3250] Final|Native|Public|BlueprintCallable 
	// Function /Script/SteamCore.ServerFilter.AddFilterGameDataAnd
	// void AddFilterGameDataAnd(FString Value);                                                                             // [0x15b3160] Final|Native|Public|BlueprintCallable 
	// Function /Script/SteamCore.ServerFilter.AddFilterGameAddr
	// void AddFilterGameAddr(FString Value);                                                                                // [0x15b3070] Final|Native|Public|BlueprintCallable 
	// Function /Script/SteamCore.ServerFilter.AddFilterDedicated
	// void AddFilterDedicated();                                                                                            // [0x15b3050] Final|Native|Public|BlueprintCallable 
	// Function /Script/SteamCore.ServerFilter.AddFilterAnd
	// void AddFilterAnd(FString Value);                                                                                     // [0x15b2f60] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/SteamCore.Music
/// Size: 0x0060 (0x000068 - 0x0000C8)
class UMusic : public USteamCoreSubsystem
{ 
public:
	SDK_UNDEFINED(16,2639) /* FMulticastInlineDelegate */ __um(PlaybackStatusHasChanged);                          // 0x0068   (0x0010)  
	SDK_UNDEFINED(16,2640) /* FMulticastInlineDelegate */ __um(VolumeHasChanged);                                  // 0x0078   (0x0010)  
	unsigned char                                      UnknownData00_6[0x40];                                      // 0x0088   (0x0040)  MISSED


	/// Functions
	// Function /Script/SteamCore.Music.SetVolume
	// void SetVolume(float flVolume);                                                                                       // [0x15ba820] Final|Native|Public|BlueprintCallable 
	// Function /Script/SteamCore.Music.PlayPrevious
	// void PlayPrevious();                                                                                                  // [0x15ba4a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/SteamCore.Music.PlayNext
	// void PlayNext();                                                                                                      // [0x15ba480] Final|Native|Public|BlueprintCallable 
	// Function /Script/SteamCore.Music.Play
	// void Play();                                                                                                          // [0x15ba460] Final|Native|Public|BlueprintCallable 
	// Function /Script/SteamCore.Music.Pause
	// void Pause();                                                                                                         // [0x15ba440] Final|Native|Public|BlueprintCallable 
	// Function /Script/SteamCore.Music.GetVolume
	// float GetVolume();                                                                                                    // [0x15b9dd0] Final|Native|Public|BlueprintCallable 
	// Function /Script/SteamCore.Music.GetPlaybackStatus
	// ESteamAudioPlaybackStatus GetPlaybackStatus();                                                                        // [0x15b9da0] Final|Native|Public|BlueprintCallable 
	// Function /Script/SteamCore.Music.BIsPlaying
	// bool BIsPlaying();                                                                                                    // [0x15b8750] Final|Native|Public|BlueprintCallable 
	// Function /Script/SteamCore.Music.bIsEnabled
	// bool bIsEnabled();                                                                                                    // [0x15b85a0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/SteamCore.Networking
/// Size: 0x0060 (0x000068 - 0x0000C8)
class UNetworking : public USteamCoreSubsystem
{ 
public:
	SDK_UNDEFINED(16,2641) /* FMulticastInlineDelegate */ __um(OnP2PSessionRequestDelegate);                       // 0x0068   (0x0010)  
	SDK_UNDEFINED(16,2642) /* FMulticastInlineDelegate */ __um(OnP2PSessionConnectFailDelegate);                   // 0x0078   (0x0010)  
	unsigned char                                      UnknownData00_6[0x40];                                      // 0x0088   (0x0040)  MISSED


	/// Functions
	// Function /Script/SteamCore.Networking.SendP2PPacket
	// bool SendP2PPacket(FSteamID SteamIDRemote, TArray<char> Data, ESteamP2PSend P2PSendType, int32_t Channel);            // [0x15ba670] Final|Native|Public|BlueprintCallable 
	// Function /Script/SteamCore.Networking.ReadP2PPacket
	// bool ReadP2PPacket(TArray<char>& Data, FSteamID& OutSteamIdRemote, int32_t MessageSize, int32_t Channel);             // [0x15ba4c0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.Networking.IsP2PPacketAvailable
	// bool IsP2PPacketAvailable(int32_t& MessageSize, int32_t Channel);                                                     // [0x15b9f30] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.Networking.GetP2PSessionState
	// bool GetP2PSessionState(FSteamID SteamIDRemote, FSteamP2PSessionState& ConnectionState);                              // [0x15b9c90] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.Networking.CloseP2PSessionWithUser
	// bool CloseP2PSessionWithUser(FSteamID SteamIDRemote);                                                                 // [0x15b8c20] Final|Native|Public|BlueprintCallable 
	// Function /Script/SteamCore.Networking.CloseP2PChannelWithUser
	// bool CloseP2PChannelWithUser(FSteamID SteamIDRemote, int32_t Channel);                                                // [0x15b8b50] Final|Native|Public|BlueprintCallable 
	// Function /Script/SteamCore.Networking.AllowP2PPacketRelay
	// bool AllowP2PPacketRelay(bool bAllow);                                                                                // [0x15b83c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/SteamCore.Networking.AcceptP2PSessionWithUser
	// bool AcceptP2PSessionWithUser(FSteamID SteamIDRemote);                                                                // [0x15b8320] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/SteamCore.NetworkingUtils
/// Size: 0x0000 (0x000068 - 0x000068)
class UNetworkingUtils : public USteamCoreSubsystem
{ 
public:


	/// Functions
	// Function /Script/SteamCore.NetworkingUtils.ParsePingLocationString
	// bool ParsePingLocationString(FString String, FSteamNetworkPingLocation& Result);                                      // [0x15ba2e0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.NetworkingUtils.InitRelayNetworkAccess
	// void InitRelayNetworkAccess();                                                                                        // [0x15b9f10] Final|Native|Public|BlueprintCallable 
	// Function /Script/SteamCore.NetworkingUtils.GetLocalPingLocation
	// float GetLocalPingLocation(FSteamNetworkPingLocation& Result);                                                        // [0x15b9b00] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.NetworkingUtils.EstimatePingTimeFromLocalHost
	// int32_t EstimatePingTimeFromLocalHost(FSteamNetworkPingLocation& RemoteLocation);                                     // [0x15b9520] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.NetworkingUtils.EstimatePingTimeBetweenTwoLocations
	// int32_t EstimatePingTimeBetweenTwoLocations(FSteamNetworkPingLocation& Location1, FSteamNetworkPingLocation& Location2); // [0x15b93f0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.NetworkingUtils.ConvertPingLocationToString
	// void ConvertPingLocationToString(FSteamNetworkPingLocation& Location, FString& String);                               // [0x15b8cc0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.NetworkingUtils.CheckPingDataUpToDate
	// bool CheckPingDataUpToDate(float MaxAgeSeconds);                                                                      // [0x15b8ac0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/SteamCore.ParentalSettings
/// Size: 0x0000 (0x000068 - 0x000068)
class UParentalSettings : public USteamCoreSubsystem
{ 
public:


	/// Functions
	// Function /Script/SteamCore.ParentalSettings.BIsParentalLockLocked
	// bool BIsParentalLockLocked();                                                                                         // [0x15b8720] Final|Native|Public|BlueprintCallable 
	// Function /Script/SteamCore.ParentalSettings.BIsParentalLockEnabled
	// bool BIsParentalLockEnabled();                                                                                        // [0x15b86f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/SteamCore.ParentalSettings.BIsFeatureInBlockList
	// bool BIsFeatureInBlockList(ESteamParentalFeature Feature);                                                            // [0x15b8660] Final|Native|Public|BlueprintCallable 
	// Function /Script/SteamCore.ParentalSettings.BIsFeatureBlocked
	// bool BIsFeatureBlocked(ESteamParentalFeature Feature);                                                                // [0x15b85d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/SteamCore.ParentalSettings.BIsAppInBlockList
	// bool BIsAppInBlockList(int32_t AppID);                                                                                // [0x15b8500] Final|Native|Public|BlueprintCallable 
	// Function /Script/SteamCore.ParentalSettings.BIsAppBlocked
	// bool BIsAppBlocked(int32_t AppID);                                                                                    // [0x15b8460] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/SteamCore.SteamParties
/// Size: 0x0120 (0x000068 - 0x000188)
class USteamParties : public USteamCoreSubsystem
{ 
public:
	SDK_UNDEFINED(16,2643) /* FMulticastInlineDelegate */ __um(JoinPartyDelegate);                                 // 0x0068   (0x0010)  
	SDK_UNDEFINED(16,2644) /* FMulticastInlineDelegate */ __um(CreateBeaconDelegate);                              // 0x0078   (0x0010)  
	SDK_UNDEFINED(16,2645) /* FMulticastInlineDelegate */ __um(ReservationNotificationDelegate);                   // 0x0088   (0x0010)  
	SDK_UNDEFINED(16,2646) /* FMulticastInlineDelegate */ __um(ChangeNumOpenSlotsDelegate);                        // 0x0098   (0x0010)  
	SDK_UNDEFINED(16,2647) /* FMulticastInlineDelegate */ __um(AvailableBeaconLocationsDelegate);                  // 0x00A8   (0x0010)  
	SDK_UNDEFINED(16,2648) /* FMulticastInlineDelegate */ __um(ActiveBeaconsDelegate);                             // 0x00B8   (0x0010)  
	unsigned char                                      UnknownData00_6[0xC0];                                      // 0x00C8   (0x00C0)  MISSED


	/// Functions
	// Function /Script/SteamCore.SteamParties.OnReservationCompleted
	// void OnReservationCompleted(FPartyBeaconID BeaconID, FSteamID SteamIDUser);                                           // [0x15ba220] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.SteamParties.JoinParty
	// void JoinParty(FDelegateProperty& Callback, FPartyBeaconID BeaconID);                                                 // [0x15ba020] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.SteamParties.GetNumAvailableBeaconLocations
	// bool GetNumAvailableBeaconLocations(int32_t& NumLocations);                                                           // [0x15b9bf0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.SteamParties.GetNumActiveBeacons
	// int32_t GetNumActiveBeacons();                                                                                        // [0x15b9bc0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.SteamParties.GetBeaconLocationData
	// bool GetBeaconLocationData(FSteamPartyBeaconLocation BeaconLocation, ESteamPartiesBeaconLocationData EData, FString& PCHDataStringOut); // [0x15b9960] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.SteamParties.GetBeaconDetails
	// bool GetBeaconDetails(FPartyBeaconID BeaconID, FSteamID& SteamIDBeaconOwner, FSteamPartyBeaconLocation& Location, FString& OutMetadata); // [0x15b9790] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.SteamParties.GetBeaconByIndex
	// FPartyBeaconID GetBeaconByIndex(int32_t Index);                                                                       // [0x15b9700] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.SteamParties.GetAvailableBeaconLocations
	// bool GetAvailableBeaconLocations(TArray<FSteamPartyBeaconLocation>& LocationList, int32_t MaxNumLocations);           // [0x15b95e0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.SteamParties.DestroyBeacon
	// bool DestroyBeacon(FPartyBeaconID BeaconID);                                                                          // [0x15b9360] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.SteamParties.CreateBeacon
	// void CreateBeacon(FDelegateProperty& Callback, int32_t OpenSlots, FSteamPartyBeaconLocation BeaconLocation, FString ConnectString, FString MetaData); // [0x15b8dd0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.SteamParties.ChangeNumOpenSlots
	// void ChangeNumOpenSlots(FDelegateProperty& Callback, FPartyBeaconID BeaconID, int32_t OpenSlots);                     // [0x15b8840] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.SteamParties.CancelReservation
	// void CancelReservation(FPartyBeaconID BeaconID, FSteamID SteamIDUser);                                                // [0x15b8780] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCore.SteamCoreSteamPartiesAsyncActionJoinParty
/// Size: 0x0010 (0x000038 - 0x000048)
class USteamCoreSteamPartiesAsyncActionJoinParty : public USteamCoreAsyncAction
{ 
public:
	SDK_UNDEFINED(16,2649) /* FMulticastInlineDelegate */ __um(OnCallback);                                        // 0x0038   (0x0010)  


	/// Functions
	// Function /Script/SteamCore.SteamCoreSteamPartiesAsyncActionJoinParty.JoinPartyAsync
	// class USteamCoreSteamPartiesAsyncActionJoinParty* JoinPartyAsync(class UObject* WorldContextObject, FPartyBeaconID BeaconID, float Timeout); // [0x15ba120] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.SteamCoreSteamPartiesAsyncActionJoinParty.HandleCallback
	// void HandleCallback(FJoinPartyData& Data, bool bWasSuccessful);                                                       // [0x15b9e00] Final|Native|Public|HasOutParms 
};

/// Class /Script/SteamCore.SteamCoreSteamPartiesAsyncActionCreateBeacon
/// Size: 0x0010 (0x000038 - 0x000048)
class USteamCoreSteamPartiesAsyncActionCreateBeacon : public USteamCoreAsyncAction
{ 
public:
	SDK_UNDEFINED(16,2650) /* FMulticastInlineDelegate */ __um(OnCallback);                                        // 0x0038   (0x0010)  


	/// Functions
	// Function /Script/SteamCore.SteamCoreSteamPartiesAsyncActionCreateBeacon.HandleCallback
	// void HandleCallback(FCreateBeaconData& Data, bool bWasSuccessful);                                                    // [0x15aefd0] Final|Native|Public|HasOutParms 
	// Function /Script/SteamCore.SteamCoreSteamPartiesAsyncActionCreateBeacon.CreateBeaconAsync
	// class USteamCoreSteamPartiesAsyncActionCreateBeacon* CreateBeaconAsync(class UObject* WorldContextObject, int32_t OpenSlots, FSteamPartyBeaconLocation BeaconLocation, FString ConnectString, FString MetaData, float Timeout); // [0x15b9090] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCore.SteamCoreSteamPartiesAsyncActionChangeNumOpenSlots
/// Size: 0x0010 (0x000038 - 0x000048)
class USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots : public USteamCoreAsyncAction
{ 
public:
	SDK_UNDEFINED(16,2651) /* FMulticastInlineDelegate */ __um(OnCallback);                                        // 0x0038   (0x0010)  


	/// Functions
	// Function /Script/SteamCore.SteamCoreSteamPartiesAsyncActionChangeNumOpenSlots.HandleCallback
	// void HandleCallback(FChangeNumOpenSlotsData& Data, bool bWasSuccessful);                                              // [0x159c4a0] Final|Native|Public|HasOutParms 
	// Function /Script/SteamCore.SteamCoreSteamPartiesAsyncActionChangeNumOpenSlots.ChangeNumOpenSlotsAsync
	// class USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots* ChangeNumOpenSlotsAsync(class UObject* WorldContextObject, FPartyBeaconID BeaconID, int32_t OpenSlots, float Timeout); // [0x15b8970] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCore.RemotePlay
/// Size: 0x0060 (0x000068 - 0x0000C8)
class URemotePlay : public USteamCoreSubsystem
{ 
public:
	SDK_UNDEFINED(16,2652) /* FMulticastInlineDelegate */ __um(SteamRemotePlaySessionConnected);                   // 0x0068   (0x0010)  
	SDK_UNDEFINED(16,2653) /* FMulticastInlineDelegate */ __um(SteamRemotePlaySessionDisconnected);                // 0x0078   (0x0010)  
	unsigned char                                      UnknownData00_6[0x40];                                      // 0x0088   (0x0040)  MISSED


	/// Functions
	// Function /Script/SteamCore.RemotePlay.GetSessionSteamID
	// FSteamID GetSessionSteamID(int32_t SessionID);                                                                        // [0x15bddf0] Final|Native|Public|BlueprintCallable 
	// Function /Script/SteamCore.RemotePlay.GetSessionID
	// int32_t GetSessionID(int32_t SessionIndex);                                                                           // [0x15bdd50] Final|Native|Public|BlueprintCallable 
	// Function /Script/SteamCore.RemotePlay.GetSessionCount
	// int32_t GetSessionCount();                                                                                            // [0x15bdd20] Final|Native|Public|BlueprintCallable 
	// Function /Script/SteamCore.RemotePlay.GetSessionClientName
	// FString GetSessionClientName(int32_t SessionID);                                                                      // [0x15bdc40] Final|Native|Public|BlueprintCallable 
	// Function /Script/SteamCore.RemotePlay.GetSessionClientFormFactor
	// ESteamCoreDeviceFormFactor GetSessionClientFormFactor(int32_t SessionID);                                             // [0x15bdba0] Final|Native|Public|BlueprintCallable 
	// Function /Script/SteamCore.RemotePlay.BSendRemotePlayTogetherInvite
	// bool BSendRemotePlayTogetherInvite(FSteamID SteamIDFriend);                                                           // [0x15bc5b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/SteamCore.RemotePlay.BGetSessionClientResolution
	// bool BGetSessionClientResolution(int32_t SessionID, int32_t& ResolutionX, int32_t& ResolutionY);                      // [0x15bc480] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/SteamCore.RemoteStorage
/// Size: 0x00C0 (0x000068 - 0x000128)
class URemoteStorage : public USteamCoreSubsystem
{ 
public:
	SDK_UNDEFINED(16,2654) /* FMulticastInlineDelegate */ __um(RemoteStorageUnsubscribePublishedFileResult);       // 0x0068   (0x0010)  
	SDK_UNDEFINED(16,2655) /* FMulticastInlineDelegate */ __um(RemoteStorageSubscribePublishedFileResult);         // 0x0078   (0x0010)  
	SDK_UNDEFINED(16,2656) /* FMulticastInlineDelegate */ __um(RemoteStoragePublishedFileUnsubscribed);            // 0x0088   (0x0010)  
	SDK_UNDEFINED(16,2657) /* FMulticastInlineDelegate */ __um(RemoteStoragePublishedFileSubscribed);              // 0x0098   (0x0010)  
	unsigned char                                      UnknownData00_6[0x80];                                      // 0x00A8   (0x0080)  MISSED


	/// Functions
	// Function /Script/SteamCore.RemoteStorage.UGCRead
	// int32_t UGCRead(FSteamUGCHandle Content, TArray<char>& OutData, int32_t DataToRead, int32_t Offset, ESteamUGCReadAction Action); // [0x15be7d0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.RemoteStorage.UGCDownloadToLocation
	// void UGCDownloadToLocation(FDelegateProperty& Callback, FSteamUGCHandle Content, FString Location, int32_t Priority); // [0x15be600] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.RemoteStorage.UGCDownload
	// void UGCDownload(FDelegateProperty& Callback, FSteamUGCHandle Content, int32_t Priority);                             // [0x15be4d0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.RemoteStorage.SetSyncPlatforms
	// bool SetSyncPlatforms(FString File, ESteamRemoteStoragePlatform RemoteStoragePlatform);                               // [0x15be3a0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.RemoteStorage.SetCloudEnabledForApp
	// void SetCloudEnabledForApp(bool bEnabled);                                                                            // [0x15be320] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.RemoteStorage.IsCloudEnabledForApp
	// bool IsCloudEnabledForApp();                                                                                          // [0x15be2f0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.RemoteStorage.IsCloudEnabledForAccount
	// bool IsCloudEnabledForAccount();                                                                                      // [0x15be2c0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.RemoteStorage.GetUGCDownloadProgress
	// bool GetUGCDownloadProgress(FSteamUGCHandle Handle, int32_t& BytesDownloaded, int32_t& BytesExpected);                // [0x15be190] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.RemoteStorage.GetUGCDetails
	// bool GetUGCDetails(FSteamUGCHandle Handle, int32_t& AppID, FString& Name, int32_t& FileSizeInBytes, FSteamID& SteamIDOwner); // [0x15bdf70] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.RemoteStorage.GetSyncPlatforms
	// ESteamRemoteStoragePlatform GetSyncPlatforms(FString File);                                                           // [0x15bde80] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.RemoteStorage.GetQuota
	// bool GetQuota(int32_t& TotalBytes, int32_t& AvailableBytes);                                                          // [0x15bdab0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.RemoteStorage.GetFileTimestamp
	// int32_t GetFileTimestamp(FString File);                                                                               // [0x15bd9c0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.RemoteStorage.GetFileSize
	// int32_t GetFileSize(FString File);                                                                                    // [0x15bd8d0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.RemoteStorage.GetFileNameAndSize
	// FString GetFileNameAndSize(int32_t File, int32_t& FileSizeInBytes);                                                   // [0x15bd7b0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.RemoteStorage.GetFileCount
	// int32_t GetFileCount();                                                                                               // [0x15bd780] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.RemoteStorage.GetCachedUGCHandle
	// FSteamUGCHandle GetCachedUGCHandle(int32_t ICachedContent);                                                           // [0x15bd6f0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.RemoteStorage.GetCachedUGCCount
	// int32_t GetCachedUGCCount();                                                                                          // [0x15bd6c0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.RemoteStorage.FileWriteStreamWriteChunk
	// bool FileWriteStreamWriteChunk(FUGCFileWriteStreamHandle Handle, TArray<char> Data);                                  // [0x15bd590] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.RemoteStorage.FileWriteStreamOpen
	// FUGCFileWriteStreamHandle FileWriteStreamOpen(FString File);                                                          // [0x15bd4a0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.RemoteStorage.FileWriteStreamClose
	// bool FileWriteStreamClose(FUGCFileWriteStreamHandle Handle);                                                          // [0x15bd410] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.RemoteStorage.FileWriteStreamCancel
	// bool FileWriteStreamCancel(FUGCFileWriteStreamHandle Handle);                                                         // [0x15bd380] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.RemoteStorage.FileWriteAsync
	// void FileWriteAsync(FDelegateProperty& Callback, FString File, TArray<char> Data);                                    // [0x15bd1b0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.RemoteStorage.FileWrite
	// bool FileWrite(FString File, TArray<char> Data);                                                                      // [0x15bd040] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.RemoteStorage.FileShare
	// void FileShare(FDelegateProperty& Callback, FString File);                                                            // [0x15bcee0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.RemoteStorage.FileReadAsyncComplete
	// bool FileReadAsyncComplete(FRemoteStorageFileReadAsyncComplete ReadCall, TArray<char>& Buffer, int32_t BytesToRead);  // [0x15bcd70] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.RemoteStorage.FileReadAsync
	// void FileReadAsync(FDelegateProperty& Callback, FString File, int32_t Offset, int32_t BytesToRead);                   // [0x15bcba0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.RemoteStorage.FileRead
	// int32_t FileRead(FString File, TArray<char>& Buffer, int32_t DataToRead);                                             // [0x15bca10] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.RemoteStorage.FilePersisted
	// bool FilePersisted(FString File);                                                                                     // [0x15bc920] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.RemoteStorage.FileForget
	// bool FileForget(FString File);                                                                                        // [0x15bc830] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.RemoteStorage.FileExists
	// bool FileExists(FString File);                                                                                        // [0x15bc740] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.RemoteStorage.FileDelete
	// bool FileDelete(FString File);                                                                                        // [0x15bc650] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCore.Screenshots
/// Size: 0x0060 (0x000068 - 0x0000C8)
class UScreenshots : public USteamCoreSubsystem
{ 
public:
	SDK_UNDEFINED(16,2658) /* FMulticastInlineDelegate */ __um(ScreenshotReady);                                   // 0x0068   (0x0010)  
	SDK_UNDEFINED(16,2659) /* FMulticastInlineDelegate */ __um(ScreenshotRequested);                               // 0x0078   (0x0010)  
	unsigned char                                      UnknownData00_6[0x40];                                      // 0x0088   (0x0040)  MISSED


	/// Functions
	// Function /Script/SteamCore.Screenshots.WriteScreenshot
	// FScreenshotHandle WriteScreenshot(TArray<char> PubRGB, int32_t Width, int32_t Height);                                // [0x15c7280] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Screenshots.TriggerScreenshot
	// void TriggerScreenshot();                                                                                             // [0x15c6ea0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Screenshots.TagUser
	// bool TagUser(FScreenshotHandle Handle, FSteamID SteamID);                                                             // [0x15c6dd0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Screenshots.TagPublishedFile
	// bool TagPublishedFile(FScreenshotHandle Handle, FPublishedFileID PublishedFileID);                                    // [0x15c6d00] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Screenshots.SetLocation
	// bool SetLocation(FScreenshotHandle Handle, FString Location);                                                         // [0x15c5a10] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Screenshots.IsScreenshotsHooked
	// bool IsScreenshotsHooked();                                                                                           // [0x15c45b0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Screenshots.HookScreenshots
	// void HookScreenshots(bool bHook);                                                                                     // [0x15c4530] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Screenshots.AddVRScreenshotToLibrary
	// FScreenshotHandle AddVRScreenshotToLibrary(ESteamVRScreenshotType EType, FString Filename, FString VRFileName);       // [0x15c2370] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Screenshots.AddScreenshotToLibrary
	// FScreenshotHandle AddScreenshotToLibrary(FString Filename, FString ThumbnailFilename, int32_t Width, int32_t Height); // [0x15c2180] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCore.UGC
/// Size: 0x0060 (0x000068 - 0x0000C8)
class UUGC : public USteamCoreSubsystem
{ 
public:
	SDK_UNDEFINED(16,2660) /* FMulticastInlineDelegate */ __um(ItemInstalled);                                     // 0x0068   (0x0010)  
	SDK_UNDEFINED(16,2661) /* FMulticastInlineDelegate */ __um(DownloadItemResult);                                // 0x0078   (0x0010)  
	unsigned char                                      UnknownData00_6[0x40];                                      // 0x0088   (0x0040)  MISSED


	/// Functions
	// Function /Script/SteamCore.UGC.UpdateItemPreviewVideo
	// bool UpdateItemPreviewVideo(FUGCUpdateHandle Handle, int32_t Index, FString PreviewVideo);                            // [0x15c7120] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.UGC.UpdateItemPreviewFile
	// bool UpdateItemPreviewFile(FUGCUpdateHandle Handle, int32_t Index, FString PreviewFile);                              // [0x15c6fc0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.UGC.UnsubscribeItem
	// void UnsubscribeItem(FDelegateProperty& Callback, FPublishedFileID PublishedFileID);                                  // [0x15c6ec0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.UGC.SuspendDownloads
	// void SuspendDownloads(bool bSuspend);                                                                                 // [0x15c6c80] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.UGC.SubscribeItem
	// void SubscribeItem(FDelegateProperty& Callback, FPublishedFileID PublishedFileID);                                    // [0x15c6b80] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.UGC.SubmitItemUpdate
	// void SubmitItemUpdate(FDelegateProperty& Callback, FUGCUpdateHandle Handle, FString ChangeNote);                      // [0x15c69f0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.UGC.StopPlaytimeTrackingForAllItems
	// void StopPlaytimeTrackingForAllItems(FDelegateProperty& Callback);                                                    // [0x15c6940] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.UGC.StopPlaytimeTracking
	// void StopPlaytimeTracking(FDelegateProperty& Callback, TArray<FPublishedFileID> PublishedFileIDs);                    // [0x15c67e0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.UGC.StartPlaytimeTracking
	// void StartPlaytimeTracking(FDelegateProperty& Callback, TArray<FPublishedFileID> PublishedFileID);                    // [0x15c6680] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.UGC.StartItemUpdate
	// FUGCUpdateHandle StartItemUpdate(int32_t ConsumerAppID, FPublishedFileID PublishedFileID);                            // [0x15c65c0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.UGC.SetUserItemVote
	// void SetUserItemVote(FDelegateProperty& Callback, FPublishedFileID PublishedFileID, bool bVoteUp);                    // [0x15c6490] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.UGC.SetSearchText
	// bool SetSearchText(FUGCQueryHandle Handle, FString SearchText);                                                       // [0x15c6360] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.UGC.SetReturnTotalOnly
	// bool SetReturnTotalOnly(FUGCQueryHandle Handle, bool bReturnTotalOnly);                                               // [0x15c6290] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.UGC.SetReturnPlaytimeStats
	// bool SetReturnPlaytimeStats(FUGCQueryHandle Handle, int32_t Days);                                                    // [0x15c61c0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.UGC.SetReturnOnlyIDs
	// bool SetReturnOnlyIDs(FUGCQueryHandle Handle, bool bReturnOnlyIDs);                                                   // [0x15c60f0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.UGC.SetReturnMetadata
	// bool SetReturnMetadata(FUGCQueryHandle Handle, bool bReturnMetadata);                                                 // [0x15c6020] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.UGC.SetReturnLongDescription
	// bool SetReturnLongDescription(FUGCQueryHandle Handle, bool bReturnLongDescription);                                   // [0x15c5f50] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.UGC.SetReturnKeyValueTags
	// bool SetReturnKeyValueTags(FUGCQueryHandle Handle, bool bReturnKeyValueTags);                                         // [0x15c5e80] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.UGC.SetReturnChildren
	// bool SetReturnChildren(FUGCQueryHandle Handle, bool bReturnChildren);                                                 // [0x15c5db0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.UGC.SetReturnAdditionalPreviews
	// bool SetReturnAdditionalPreviews(FUGCQueryHandle Handle, bool bReturnAdditionalPreviews);                             // [0x15c5ce0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.UGC.SetRankedByTrendDays
	// bool SetRankedByTrendDays(FUGCQueryHandle Handle, int32_t Days);                                                      // [0x15c5c10] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.UGC.SetMatchAnyTag
	// bool SetMatchAnyTag(FUGCQueryHandle Handle, bool bMatchAnyTag);                                                       // [0x15c5b40] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.UGC.SetLanguage
	// bool SetLanguage(FUGCQueryHandle Handle, FString Language);                                                           // [0x15c58e0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.UGC.SetItemVisibility
	// bool SetItemVisibility(FUGCUpdateHandle Handle, ESteamRemoteStoragePublishedFileVisibility Visibility);               // [0x15c5810] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.UGC.SetItemUpdateLanguage
	// bool SetItemUpdateLanguage(FUGCUpdateHandle Handle, FString Language);                                                // [0x15c56e0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.UGC.SetItemTitle
	// bool SetItemTitle(FUGCUpdateHandle Handle, FString Title);                                                            // [0x15c55b0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.UGC.SetItemTags
	// bool SetItemTags(FUGCUpdateHandle Handle, TArray<FString> Tags);                                                      // [0x15c5490] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.UGC.SetItemPreview
	// bool SetItemPreview(FUGCUpdateHandle Handle, FString PreviewFile);                                                    // [0x15c5360] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.UGC.SetItemMetadata
	// bool SetItemMetadata(FUGCUpdateHandle Handle, FString MetaData);                                                      // [0x15c5230] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.UGC.SetItemDescription
	// bool SetItemDescription(FUGCUpdateHandle Handle, FString Description);                                                // [0x15c5100] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.UGC.SetItemContent
	// bool SetItemContent(FUGCUpdateHandle Handle, FString ContentFolder);                                                  // [0x15c4fd0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.UGC.SetCloudFileNameFilter
	// bool SetCloudFileNameFilter(FUGCQueryHandle Handle, FString MatchCloudFileName);                                      // [0x15c4ea0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.UGC.SetAllowLegacyUpload
	// bool SetAllowLegacyUpload(FUGCUpdateHandle Handle, bool bAllowLegacyUpload);                                          // [0x15c4dd0] Final|Native|Public|BlueprintCallable 
	// Function /Script/SteamCore.UGC.SetAllowCachedResponse
	// bool SetAllowCachedResponse(FUGCQueryHandle Handle, int32_t MaxAgeSeconds);                                           // [0x15c4d00] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.UGC.SendQueryUGCRequest
	// void SendQueryUGCRequest(FDelegateProperty& Callback, FUGCQueryHandle Handle);                                        // [0x15c4c00] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.UGC.RemoveItemPreview
	// bool RemoveItemPreview(FUGCUpdateHandle Handle, int32_t Index);                                                       // [0x15c4b30] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.UGC.RemoveItemKeyValueTags
	// bool RemoveItemKeyValueTags(FUGCUpdateHandle Handle, FString Key);                                                    // [0x15c4a00] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.UGC.RemoveItemFromFavorites
	// void RemoveItemFromFavorites(FDelegateProperty& Callback, int32_t AppID, FPublishedFileID PublishedFileID);           // [0x15c48d0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.UGC.RemoveDependency
	// void RemoveDependency(FDelegateProperty& Callback, FPublishedFileID ParentPublishedFileID, FPublishedFileID ChildPublishedFileId); // [0x15c47a0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.UGC.RemoveAppDependency
	// void RemoveAppDependency(FDelegateProperty& Callback, FPublishedFileID PublishedFileID, int32_t AppID);               // [0x15c4670] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.UGC.ReleaseQueryUGCRequest
	// bool ReleaseQueryUGCRequest(FUGCQueryHandle Handle);                                                                  // [0x15c45e0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.UGC.GetUserItemVote
	// void GetUserItemVote(FDelegateProperty& Callback, FPublishedFileID PublishedFileID);                                  // [0x15c4430] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.UGC.GetSubscribedItems
	// int32_t GetSubscribedItems(TArray<FPublishedFileID>& PublishedFileIDs, int32_t MaxEntries);                           // [0x15c4330] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.UGC.GetQueryUGCTagDisplayName
	// bool GetQueryUGCTagDisplayName(FUGCQueryHandle Handle, int32_t Index, int32_t IndexTag, FString& Value);              // [0x15c41d0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.UGC.GetQueryUGCTag
	// bool GetQueryUGCTag(FUGCQueryHandle Handle, int32_t Index, int32_t IndexTag, FString& Value);                         // [0x15c41d0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.UGC.GetQueryUGCStatistic
	// bool GetQueryUGCStatistic(FUGCQueryHandle Handle, int32_t Index, ESteamItemStatistic StatType, FString& StatValue);   // [0x15c4060] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.UGC.GetQueryUGCResult
	// bool GetQueryUGCResult(FUGCQueryHandle Handle, int32_t Index, FSteamUGCDetails& Details);                             // [0x15c3e80] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.UGC.GetQueryUGCPreviewURL
	// bool GetQueryUGCPreviewURL(FUGCQueryHandle Handle, int32_t Index, FString& URL);                                      // [0x15c3d50] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.UGC.GetQueryUGCNumTags
	// int32_t GetQueryUGCNumTags(FUGCQueryHandle Handle, int32_t Index);                                                    // [0x15c3c80] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.UGC.GetQueryUGCNumKeyValueTags
	// int32_t GetQueryUGCNumKeyValueTags(FUGCQueryHandle Handle, int32_t Index);                                            // [0x15c3bb0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.UGC.GetQueryUGCNumAdditionalPreviews
	// int32_t GetQueryUGCNumAdditionalPreviews(FUGCQueryHandle Handle, int32_t Index);                                      // [0x15c3ae0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.UGC.GetQueryUGCMetadata
	// bool GetQueryUGCMetadata(FUGCQueryHandle Handle, int32_t Index, FString& MetaData, int32_t MetadataSize);             // [0x15c3970] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.UGC.GetQueryUGCKeyValueTag
	// bool GetQueryUGCKeyValueTag(FUGCQueryHandle Handle, int32_t Index, int32_t KeyValueTagIndex, FString& Key, FString& Value); // [0x15c37b0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.UGC.GetQueryUGCChildren
	// bool GetQueryUGCChildren(FUGCQueryHandle Handle, int32_t Index, TArray<FPublishedFileID>& PublishedFileIDs, int32_t MaxEntries); // [0x15c3640] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.UGC.GetQueryUGCAdditionalPreview
	// bool GetQueryUGCAdditionalPreview(FUGCQueryHandle Handle, int32_t Index, int32_t PreviewIndex, FString& URLOrVideoID, FString& OriginalFileName, ESteamItemPreviewType& PreviewType); // [0x15c3410] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.UGC.GetNumSubscribedItems
	// int32_t GetNumSubscribedItems();                                                                                      // [0x15c33e0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.UGC.GetItemUpdateProgress
	// ESteamItemUpdateStatus GetItemUpdateProgress(FUGCUpdateHandle Handle, int32_t& BytesProcessed, int32_t& BytesTotal);  // [0x15c32b0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.UGC.GetItemState
	// int32_t GetItemState(FPublishedFileID PublishedFileID, TArray<ESteamItemState>& States);                              // [0x15c31c0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.UGC.GetItemInstallInfo
	// bool GetItemInstallInfo(FPublishedFileID PublishedFileID, int32_t& SizeOnDisk, FString& Folder, int32_t& Timestamp);  // [0x15c3030] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.UGC.GetItemDownloadInfo
	// bool GetItemDownloadInfo(FPublishedFileID PublishedFileID, int32_t& BytesDownloaded, int32_t& BytesTotal);            // [0x15c2f00] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.UGC.GetAppDependencies
	// void GetAppDependencies(FDelegateProperty& Callback, FPublishedFileID PublishedFileID);                               // [0x15c2e00] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.UGC.DownloadItem
	// bool DownloadItem(FPublishedFileID PublishedFileID, bool bHighPriority);                                              // [0x15c2d30] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.UGC.DeleteItem
	// void DeleteItem(FDelegateProperty& Callback, FPublishedFileID PublishedFileID);                                       // [0x15c2c30] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.UGC.CreateQueryUserUGCRequest
	// FUGCQueryHandle CreateQueryUserUGCRequest(FSteamID SteamID, ESteamUserUGCList ListType, ESteamUGCMatchingUGCType MatchingUGCType, ESteamUserUGCListSortOrder SortOrder, int32_t CreatorAppID, int32_t ConsumerAppID, int32_t Page); // [0x15c2a10] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.UGC.CreateQueryUGCDetailsRequest
	// FUGCQueryHandle CreateQueryUGCDetailsRequest(TArray<FPublishedFileID> PublishedFileIDs);                              // [0x15c2920] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.UGC.CreateQueryAllUGCRequest
	// FUGCQueryHandle CreateQueryAllUGCRequest(ESteamUGCQuery QueryType, ESteamUGCMatchingUGCType FileType, int32_t CreatorAppID, int32_t ConsumerAppID, int32_t Page); // [0x15c2780] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.UGC.CreateItem
	// void CreateItem(FDelegateProperty& Callback, int32_t ConsumerAppID, ESteamWorkshopFileType FileType);                 // [0x15c2650] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.UGC.BInitWorkshopForGameServer
	// bool BInitWorkshopForGameServer(int32_t WorkshopDepotID, FString Folder);                                             // [0x15c2520] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.UGC.AddRequiredTagGroup
	// bool AddRequiredTagGroup(FUGCQueryHandle Handle, TArray<FString> TagGroups);                                          // [0x15c2060] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.UGC.AddRequiredTag
	// bool AddRequiredTag(FUGCQueryHandle Handle, FString TagName);                                                         // [0x15c1f30] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.UGC.AddRequiredKeyValueTag
	// bool AddRequiredKeyValueTag(FUGCQueryHandle Handle, FString Key, FString Value);                                      // [0x15c1d80] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.UGC.AddItemToFavorites
	// void AddItemToFavorites(FDelegateProperty& Callback, int32_t AppID, FPublishedFileID PublishedFileID);                // [0x15c1c50] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.UGC.AddItemPreviewVideo
	// bool AddItemPreviewVideo(FUGCUpdateHandle Handle, FString VideoID);                                                   // [0x15c1b20] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.UGC.AddItemPreviewFile
	// bool AddItemPreviewFile(FUGCUpdateHandle Handle, FString PreviewFile, ESteamItemPreviewType Type);                    // [0x15c19b0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.UGC.AddItemKeyValueTag
	// bool AddItemKeyValueTag(FUGCUpdateHandle Handle, FString Key, FString Value);                                         // [0x15c1800] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.UGC.AddExcludedTag
	// bool AddExcludedTag(FUGCQueryHandle Handle, FString TagName);                                                         // [0x15c16d0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.UGC.AddDependency
	// void AddDependency(FDelegateProperty& Callback, FPublishedFileID PublishedFileID, FPublishedFileID ChildPublishedFileId); // [0x15c15a0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.UGC.AddAppDependency
	// void AddAppDependency(FDelegateProperty& Callback, FPublishedFileID PublishedFileID, int32_t AppID);                  // [0x15c1470] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/SteamCore.SteamCoreUGCAsyncActionStopPlaytimeTrackingForAllItems
/// Size: 0x0010 (0x000038 - 0x000048)
class USteamCoreUGCAsyncActionStopPlaytimeTrackingForAllItems : public USteamCoreAsyncAction
{ 
public:
	SDK_UNDEFINED(16,2662) /* FMulticastInlineDelegate */ __um(OnCallback);                                        // 0x0038   (0x0010)  


	/// Functions
	// Function /Script/SteamCore.SteamCoreUGCAsyncActionStopPlaytimeTrackingForAllItems.StopPlaytimeTrackingForAllItemsAsync
	// class USteamCoreUGCAsyncActionStopPlaytimeTrackingForAllItems* StopPlaytimeTrackingForAllItemsAsync(class UObject* WorldContextObject, float Timeout); // [0x15cada0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.SteamCoreUGCAsyncActionStopPlaytimeTrackingForAllItems.HandleCallback
	// void HandleCallback(FStopPlaytimeTrackingResult& Data, bool bWasSuccessful);                                          // [0x159c4a0] Final|Native|Public|HasOutParms 
};

/// Class /Script/SteamCore.SteamCoreUGCAsyncActionStopPlaytimeTracking
/// Size: 0x0010 (0x000038 - 0x000048)
class USteamCoreUGCAsyncActionStopPlaytimeTracking : public USteamCoreAsyncAction
{ 
public:
	SDK_UNDEFINED(16,2663) /* FMulticastInlineDelegate */ __um(OnCallback);                                        // 0x0038   (0x0010)  


	/// Functions
	// Function /Script/SteamCore.SteamCoreUGCAsyncActionStopPlaytimeTracking.StopPlaytimeTrackingAsync
	// class USteamCoreUGCAsyncActionStopPlaytimeTracking* StopPlaytimeTrackingAsync(class UObject* WorldContextObject, TArray<FPublishedFileID> PublishedFileIDs, float Timeout); // [0x15cac20] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.SteamCoreUGCAsyncActionStopPlaytimeTracking.HandleCallback
	// void HandleCallback(FStopPlaytimeTrackingResult& Data, bool bWasSuccessful);                                          // [0x159c4a0] Final|Native|Public|HasOutParms 
};

/// Class /Script/SteamCore.SteamCoreUGCAsyncActionStartPlaytimeTracking
/// Size: 0x0010 (0x000038 - 0x000048)
class USteamCoreUGCAsyncActionStartPlaytimeTracking : public USteamCoreAsyncAction
{ 
public:
	SDK_UNDEFINED(16,2664) /* FMulticastInlineDelegate */ __um(OnCallback);                                        // 0x0038   (0x0010)  


	/// Functions
	// Function /Script/SteamCore.SteamCoreUGCAsyncActionStartPlaytimeTracking.StartPlaytimeTrackingAsync
	// class USteamCoreUGCAsyncActionStartPlaytimeTracking* StartPlaytimeTrackingAsync(class UObject* WorldContextObject, TArray<FPublishedFileID> PublishedFileIDs, float Timeout); // [0x15caaa0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.SteamCoreUGCAsyncActionStartPlaytimeTracking.HandleCallback
	// void HandleCallback(FStartPlaytimeTrackingResult& Data, bool bWasSuccessful);                                         // [0x159c4a0] Final|Native|Public|HasOutParms 
};

/// Class /Script/SteamCore.SteamCoreUGCAsyncActionUnsubscribeItem
/// Size: 0x0010 (0x000038 - 0x000048)
class USteamCoreUGCAsyncActionUnsubscribeItem : public USteamCoreAsyncAction
{ 
public:
	SDK_UNDEFINED(16,2665) /* FMulticastInlineDelegate */ __um(OnCallback);                                        // 0x0038   (0x0010)  


	/// Functions
	// Function /Script/SteamCore.SteamCoreUGCAsyncActionUnsubscribeItem.UnsubscribeItemAsync
	// class USteamCoreUGCAsyncActionUnsubscribeItem* UnsubscribeItemAsync(class UObject* WorldContextObject, FPublishedFileID PublishedFileIDs, float Timeout); // [0x15cb110] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.SteamCoreUGCAsyncActionUnsubscribeItem.HandleCallback
	// void HandleCallback(FRemoteStorageSubscribePublishedFileResult& Data, bool bWasSuccessful);                           // [0x15aefd0] Final|Native|Public|HasOutParms 
};

/// Class /Script/SteamCore.SteamCoreUGCAsyncActionSubscribeItem
/// Size: 0x0010 (0x000038 - 0x000048)
class USteamCoreUGCAsyncActionSubscribeItem : public USteamCoreAsyncAction
{ 
public:
	SDK_UNDEFINED(16,2666) /* FMulticastInlineDelegate */ __um(OnCallback);                                        // 0x0038   (0x0010)  


	/// Functions
	// Function /Script/SteamCore.SteamCoreUGCAsyncActionSubscribeItem.SubscribeItemAsync
	// class USteamCoreUGCAsyncActionSubscribeItem* SubscribeItemAsync(class UObject* WorldContextObject, FPublishedFileID PublishedFileIDs, float Timeout); // [0x15cb010] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.SteamCoreUGCAsyncActionSubscribeItem.HandleCallback
	// void HandleCallback(FRemoteStorageSubscribePublishedFileResult& Data, bool bWasSuccessful);                           // [0x15aefd0] Final|Native|Public|HasOutParms 
};

/// Class /Script/SteamCore.SteamCoreUGCAsyncActionRemoveItemFromFavorites
/// Size: 0x0010 (0x000038 - 0x000048)
class USteamCoreUGCAsyncActionRemoveItemFromFavorites : public USteamCoreAsyncAction
{ 
public:
	SDK_UNDEFINED(16,2667) /* FMulticastInlineDelegate */ __um(OnCallback);                                        // 0x0038   (0x0010)  


	/// Functions
	// Function /Script/SteamCore.SteamCoreUGCAsyncActionRemoveItemFromFavorites.RemoveItemFromFavoritesAsync
	// class USteamCoreUGCAsyncActionRemoveItemFromFavorites* RemoveItemFromFavoritesAsync(class UObject* WorldContextObject, int32_t AppID, FPublishedFileID PublishedFileID, float Timeout); // [0x15ca700] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.SteamCoreUGCAsyncActionRemoveItemFromFavorites.HandleCallback
	// void HandleCallback(FUserFavoriteItemsListChanged& Data, bool bWasSuccessful);                                        // [0x15c9da0] Final|Native|Public|HasOutParms 
};

/// Class /Script/SteamCore.SteamCoreUGCAsyncActionAddItemToFavorites
/// Size: 0x0010 (0x000038 - 0x000048)
class USteamCoreUGCAsyncActionAddItemToFavorites : public USteamCoreAsyncAction
{ 
public:
	SDK_UNDEFINED(16,2668) /* FMulticastInlineDelegate */ __um(OnCallback);                                        // 0x0038   (0x0010)  


	/// Functions
	// Function /Script/SteamCore.SteamCoreUGCAsyncActionAddItemToFavorites.HandleCallback
	// void HandleCallback(FUserFavoriteItemsListChanged& Data, bool bWasSuccessful);                                        // [0x15c9da0] Final|Native|Public|HasOutParms 
	// Function /Script/SteamCore.SteamCoreUGCAsyncActionAddItemToFavorites.AddItemToFavoritesAsync
	// class USteamCoreUGCAsyncActionAddItemToFavorites* AddItemToFavoritesAsync(class UObject* WorldContextObject, int32_t AppID, FPublishedFileID PublishedFileID, float Timeout); // [0x15c96b0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCore.SteamCoreUGCAsyncActionGetUserItemVote
/// Size: 0x0010 (0x000038 - 0x000048)
class USteamCoreUGCAsyncActionGetUserItemVote : public USteamCoreAsyncAction
{ 
public:
	SDK_UNDEFINED(16,2669) /* FMulticastInlineDelegate */ __um(OnCallback);                                        // 0x0038   (0x0010)  


	/// Functions
	// Function /Script/SteamCore.SteamCoreUGCAsyncActionGetUserItemVote.HandleCallback
	// void HandleCallback(FGetUserItemVoteResult& Data, bool bWasSuccessful);                                               // [0x15ca180] Final|Native|Public|HasOutParms 
	// Function /Script/SteamCore.SteamCoreUGCAsyncActionGetUserItemVote.GetUserItemVoteAsync
	// class USteamCoreUGCAsyncActionGetUserItemVote* GetUserItemVoteAsync(class UObject* WorldContextObject, FPublishedFileID PublishedFileID, float Timeout); // [0x15c9ca0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCore.SteamCoreUGCAsyncActionSetUserItemVote
/// Size: 0x0010 (0x000038 - 0x000048)
class USteamCoreUGCAsyncActionSetUserItemVote : public USteamCoreAsyncAction
{ 
public:
	SDK_UNDEFINED(16,2670) /* FMulticastInlineDelegate */ __um(OnCallback);                                        // 0x0038   (0x0010)  


	/// Functions
	// Function /Script/SteamCore.SteamCoreUGCAsyncActionSetUserItemVote.SetUserItemVoteAsync
	// class USteamCoreUGCAsyncActionSetUserItemVote* SetUserItemVoteAsync(class UObject* WorldContextObject, FPublishedFileID PublishedFileID, bool bVoteUp, float Timeout); // [0x15ca940] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.SteamCoreUGCAsyncActionSetUserItemVote.HandleCallback
	// void HandleCallback(FSetUserItemVoteResult& Data, bool bWasSuccessful);                                               // [0x15c9da0] Final|Native|Public|HasOutParms 
};

/// Class /Script/SteamCore.SteamCoreUGCAsyncActionSubmitItemUpdate
/// Size: 0x0010 (0x000038 - 0x000048)
class USteamCoreUGCAsyncActionSubmitItemUpdate : public USteamCoreAsyncAction
{ 
public:
	SDK_UNDEFINED(16,2671) /* FMulticastInlineDelegate */ __um(OnCallback);                                        // 0x0038   (0x0010)  


	/// Functions
	// Function /Script/SteamCore.SteamCoreUGCAsyncActionSubmitItemUpdate.SubmitItemUpdateAsync
	// class USteamCoreUGCAsyncActionSubmitItemUpdate* SubmitItemUpdateAsync(class UObject* WorldContextObject, FUGCUpdateHandle Handle, FString ChangeNote, float Timeout); // [0x15cae70] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.SteamCoreUGCAsyncActionSubmitItemUpdate.HandleCallback
	// void HandleCallback(FSubmitItemUpdateResult& Data, bool bWasSuccessful);                                              // [0x15ca370] Final|Native|Public|HasOutParms 
};

/// Class /Script/SteamCore.SteamCoreUGCAsyncActionCreateItem
/// Size: 0x0010 (0x000038 - 0x000048)
class USteamCoreUGCAsyncActionCreateItem : public USteamCoreAsyncAction
{ 
public:
	SDK_UNDEFINED(16,2672) /* FMulticastInlineDelegate */ __um(OnCallback);                                        // 0x0038   (0x0010)  


	/// Functions
	// Function /Script/SteamCore.SteamCoreUGCAsyncActionCreateItem.HandleCallback
	// void HandleCallback(FCreateItemResult& Data, bool bWasSuccessful);                                                    // [0x159c770] Final|Native|Public|HasOutParms 
	// Function /Script/SteamCore.SteamCoreUGCAsyncActionCreateItem.CreateItemAsync
	// class USteamCoreUGCAsyncActionCreateItem* CreateItemAsync(class UObject* WorldContextObject, int32_t ConsumerAppID, ESteamWorkshopFileType FileType, float Timeout); // [0x15c97f0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCore.SteamCoreUGCAsyncActionSendQueryUGCRequest
/// Size: 0x0010 (0x000038 - 0x000048)
class USteamCoreUGCAsyncActionSendQueryUGCRequest : public USteamCoreAsyncAction
{ 
public:
	SDK_UNDEFINED(16,2673) /* FMulticastInlineDelegate */ __um(OnCallback);                                        // 0x0038   (0x0010)  


	/// Functions
	// Function /Script/SteamCore.SteamCoreUGCAsyncActionSendQueryUGCRequest.SendQueryUGCRequestAsync
	// class USteamCoreUGCAsyncActionSendQueryUGCRequest* SendQueryUGCRequestAsync(class UObject* WorldContextObject, FUGCQueryHandle Handle, float Timeout); // [0x15ca840] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.SteamCoreUGCAsyncActionSendQueryUGCRequest.HandleCallback
	// void HandleCallback(FSteamUGCQueryCompleted& Data, bool bWasSuccessful);                                              // [0x15ca270] Final|Native|Public|HasOutParms 
};

/// Class /Script/SteamCore.SteamCoreUGCAsyncActionAddAppDependency
/// Size: 0x0010 (0x000038 - 0x000048)
class USteamCoreUGCAsyncActionAddAppDependency : public USteamCoreAsyncAction
{ 
public:
	SDK_UNDEFINED(16,2674) /* FMulticastInlineDelegate */ __um(OnCallback);                                        // 0x0038   (0x0010)  


	/// Functions
	// Function /Script/SteamCore.SteamCoreUGCAsyncActionAddAppDependency.HandleCallback
	// void HandleCallback(FAddAppDependencyResult& Data, bool bWasSuccessful);                                              // [0x159c680] Final|Native|Public|HasOutParms 
	// Function /Script/SteamCore.SteamCoreUGCAsyncActionAddAppDependency.AddAppDependencyAsync
	// class USteamCoreUGCAsyncActionAddAppDependency* AddAppDependencyAsync(class UObject* WorldContextObject, FPublishedFileID PublishedFileID, int32_t AppID, float Timeout); // [0x15c9410] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCore.SteamCoreUGCAsyncActionRemoveAppDependency
/// Size: 0x0010 (0x000038 - 0x000048)
class USteamCoreUGCAsyncActionRemoveAppDependency : public USteamCoreAsyncAction
{ 
public:
	SDK_UNDEFINED(16,2675) /* FMulticastInlineDelegate */ __um(OnCallback);                                        // 0x0038   (0x0010)  


	/// Functions
	// Function /Script/SteamCore.SteamCoreUGCAsyncActionRemoveAppDependency.RemoveAppDependencyAsync
	// class USteamCoreUGCAsyncActionRemoveAppDependency* RemoveAppDependencyAsync(class UObject* WorldContextObject, FPublishedFileID PublishedFileID, int32_t AppID, float Timeout); // [0x15ca460] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.SteamCoreUGCAsyncActionRemoveAppDependency.HandleCallback
	// void HandleCallback(FRemoveAppDependencyResult& Data, bool bWasSuccessful);                                           // [0x159c680] Final|Native|Public|HasOutParms 
};

/// Class /Script/SteamCore.SteamCoreUGCAsyncActionAddUGCDependency
/// Size: 0x0010 (0x000038 - 0x000048)
class USteamCoreUGCAsyncActionAddUGCDependency : public USteamCoreAsyncAction
{ 
public:
	SDK_UNDEFINED(16,2676) /* FMulticastInlineDelegate */ __um(OnCallback);                                        // 0x0038   (0x0010)  


	/// Functions
	// Function /Script/SteamCore.SteamCoreUGCAsyncActionAddUGCDependency.HandleCallback
	// void HandleCallback(FAddUGCDependencyResult& Data, bool bWasSuccessful);                                              // [0x15c9e90] Final|Native|Public|HasOutParms 
	// Function /Script/SteamCore.SteamCoreUGCAsyncActionAddUGCDependency.AddDependencyAsync
	// class USteamCoreUGCAsyncActionAddUGCDependency* AddDependencyAsync(class UObject* WorldContextObject, FPublishedFileID PublishedFileID, FPublishedFileID ChildPublishedFileId, float Timeout); // [0x15c9560] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCore.SteamCoreUGCAsyncActionRemoveUGCDependency
/// Size: 0x0010 (0x000038 - 0x000048)
class USteamCoreUGCAsyncActionRemoveUGCDependency : public USteamCoreAsyncAction
{ 
public:
	SDK_UNDEFINED(16,2677) /* FMulticastInlineDelegate */ __um(OnCallback);                                        // 0x0038   (0x0010)  


	/// Functions
	// Function /Script/SteamCore.SteamCoreUGCAsyncActionRemoveUGCDependency.RemoveDependencyAsync
	// class USteamCoreUGCAsyncActionRemoveUGCDependency* RemoveDependencyAsync(class UObject* WorldContextObject, FPublishedFileID PublishedFileID, FPublishedFileID ChildPublishedFileId, float Timeout); // [0x15ca5b0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.SteamCoreUGCAsyncActionRemoveUGCDependency.HandleCallback
	// void HandleCallback(FRemoveUGCDependencyResult& Data, bool bWasSuccessful);                                           // [0x15c9e90] Final|Native|Public|HasOutParms 
};

/// Class /Script/SteamCore.SteamCoreUGCAsyncActionDeleteItem
/// Size: 0x0010 (0x000038 - 0x000048)
class USteamCoreUGCAsyncActionDeleteItem : public USteamCoreAsyncAction
{ 
public:
	SDK_UNDEFINED(16,2678) /* FMulticastInlineDelegate */ __um(OnCallback);                                        // 0x0038   (0x0010)  


	/// Functions
	// Function /Script/SteamCore.SteamCoreUGCAsyncActionDeleteItem.HandleCallback
	// void HandleCallback(FUGCDeleteItemResult& Data, bool bWasSuccessful);                                                 // [0x15aefd0] Final|Native|Public|HasOutParms 
	// Function /Script/SteamCore.SteamCoreUGCAsyncActionDeleteItem.DeleteItemAsync
	// class USteamCoreUGCAsyncActionDeleteItem* DeleteItemAsync(class UObject* WorldContextObject, FPublishedFileID PublishedFileID, float Timeout); // [0x15c9940] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCore.SteamCoreUGCAsyncActionGetAppDependencies
/// Size: 0x0010 (0x000038 - 0x000048)
class USteamCoreUGCAsyncActionGetAppDependencies : public USteamCoreAsyncAction
{ 
public:
	SDK_UNDEFINED(16,2679) /* FMulticastInlineDelegate */ __um(OnCallback);                                        // 0x0038   (0x0010)  


	/// Functions
	// Function /Script/SteamCore.SteamCoreUGCAsyncActionGetAppDependencies.HandleCallback
	// void HandleCallback(FGetAppDependenciesResult& Data, bool bWasSuccessful);                                            // [0x15ca070] Final|Native|Public|HasOutParms 
	// Function /Script/SteamCore.SteamCoreUGCAsyncActionGetAppDependencies.GetAppDependenciesAsync
	// class USteamCoreUGCAsyncActionGetAppDependencies* GetAppDependenciesAsync(class UObject* WorldContextObject, FPublishedFileID PublishedFileID, float Timeout); // [0x15c9ba0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCore.SteamCoreUGCAsyncActionDownloadItem
/// Size: 0x0010 (0x000038 - 0x000048)
class USteamCoreUGCAsyncActionDownloadItem : public USteamCoreAsyncAction
{ 
public:
	SDK_UNDEFINED(16,2680) /* FMulticastInlineDelegate */ __um(OnCallback);                                        // 0x0038   (0x0010)  


	/// Functions
	// Function /Script/SteamCore.SteamCoreUGCAsyncActionDownloadItem.HandleCallback
	// void HandleCallback(FDownloadItemResult& Data, bool bWasSuccessful);                                                  // [0x15c9f80] Final|Native|Public|HasOutParms 
	// Function /Script/SteamCore.SteamCoreUGCAsyncActionDownloadItem.DownloadItemAsync
	// class USteamCoreUGCAsyncActionDownloadItem* DownloadItemAsync(class UObject* WorldContextObject, FPublishedFileID PublishedFileID, bool bHighPriority, float Timeout); // [0x15c9a40] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCore.User
/// Size: 0x0210 (0x000068 - 0x000278)
class UUser : public USteamCoreSubsystem
{ 
public:
	SDK_UNDEFINED(16,2681) /* FMulticastInlineDelegate */ __um(ClientGameServerDeny);                              // 0x0068   (0x0010)  
	SDK_UNDEFINED(16,2682) /* FMulticastInlineDelegate */ __um(GameWebCallback);                                   // 0x0078   (0x0010)  
	SDK_UNDEFINED(16,2683) /* FMulticastInlineDelegate */ __um(GetAuthSessionTicketResponse);                      // 0x0088   (0x0010)  
	SDK_UNDEFINED(16,2684) /* FMulticastInlineDelegate */ __um(IPCFailure);                                        // 0x0098   (0x0010)  
	SDK_UNDEFINED(16,2685) /* FMulticastInlineDelegate */ __um(LicensesUpdated);                                   // 0x00A8   (0x0010)  
	SDK_UNDEFINED(16,2686) /* FMulticastInlineDelegate */ __um(MicroTxnAuthorizationResponse);                     // 0x00B8   (0x0010)  
	SDK_UNDEFINED(16,2687) /* FMulticastInlineDelegate */ __um(SteamServerConnectFailure);                         // 0x00C8   (0x0010)  
	SDK_UNDEFINED(16,2688) /* FMulticastInlineDelegate */ __um(SteamServersConnected);                             // 0x00D8   (0x0010)  
	SDK_UNDEFINED(16,2689) /* FMulticastInlineDelegate */ __um(SteamServersDisconnected);                          // 0x00E8   (0x0010)  
	SDK_UNDEFINED(16,2690) /* FMulticastInlineDelegate */ __um(ValidateAuthTicketResponse);                        // 0x00F8   (0x0010)  
	SDK_UNDEFINED(16,2691) /* FMulticastInlineDelegate */ __um(EncryptedAppTicketResponse);                        // 0x0108   (0x0010)  
	unsigned char                                      UnknownData00_6[0x160];                                     // 0x0118   (0x0160)  MISSED


	/// Functions
	// Function /Script/SteamCore.User.UserHasLicenseForApp
	// ESteamUserHasLicenseForAppResult UserHasLicenseForApp(FSteamID SteamID, int32_t AppID);                               // [0x15ce330] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.User.StopVoiceRecording
	// void StopVoiceRecording();                                                                                            // [0x15ce310] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.User.StartVoiceRecording
	// void StartVoiceRecording();                                                                                           // [0x15ce2f0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.User.RequestStoreAuthURL
	// void RequestStoreAuthURL(FDelegateProperty& Callback, FString RedirectURL);                                           // [0x15ce190] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.User.RequestEncryptedAppTicket
	// void RequestEncryptedAppTicket(FDelegateProperty& Callback, TArray<char> DataToInclude);                              // [0x15ce040] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.User.GetVoiceOptimalSampleRate
	// int32_t GetVoiceOptimalSampleRate();                                                                                  // [0x15ce010] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.User.GetVoice
	// ESteamVoiceResult GetVoice(TArray<char>& DestBuffer, int32_t& BytesWritten);                                          // [0x15cdf00] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.User.GetSteamID_Pure
	// FSteamID GetSteamID_Pure();                                                                                           // [0x15cdec0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/SteamCore.User.GetSteamID
	// FSteamID GetSteamID();                                                                                                // [0x15cde80] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.User.GetPlayerSteamLevel
	// int32_t GetPlayerSteamLevel();                                                                                        // [0x15cde50] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.User.GetGameBadgeLevel
	// int32_t GetGameBadgeLevel(int32_t Series, bool bFoil);                                                                // [0x15cdd80] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.User.GetEncryptedAppTicket
	// bool GetEncryptedAppTicket(TArray<char>& Ticket);                                                                     // [0x15cdcd0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.User.GetAvailableVoice
	// ESteamVoiceResult GetAvailableVoice(int32_t& CompressedBytes, int32_t& UncompressedBytes, int32_t UncompressedVoiceDesiredSampleRate); // [0x15cdba0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.User.GetAuthSessionTicket
	// FSteamTicketHandle GetAuthSessionTicket(TArray<char>& Ticket);                                                        // [0x15cdaf0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.User.EndAuthSession
	// void EndAuthSession(FSteamID SteamID);                                                                                // [0x15cda70] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.User.DecompressVoice
	// ESteamVoiceResult DecompressVoice(TArray<char>& CompressedBuffer, int32_t DesiredSampleRate, TArray<char>& DestBuffer); // [0x15cd910] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.User.CancelAuthTicket
	// void CancelAuthTicket(FSteamTicketHandle TicketHandle);                                                               // [0x15cd890] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.User.BLoggedOn
	// bool BLoggedOn();                                                                                                     // [0x15cd730] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.User.BIsTwoFactorEnabled
	// bool BIsTwoFactorEnabled();                                                                                           // [0x15cd700] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.User.BIsPhoneVerified
	// bool BIsPhoneVerified();                                                                                              // [0x15cd6d0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.User.BIsPhoneRequiringVerification
	// bool BIsPhoneRequiringVerification();                                                                                 // [0x15cd6a0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.User.BIsPhoneIdentifying
	// bool BIsPhoneIdentifying();                                                                                           // [0x15cd670] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.User.BIsBehindNAT
	// bool BIsBehindNAT();                                                                                                  // [0x15cd640] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.User.BeginAuthSession
	// ESteamBeginAuthSessionResult BeginAuthSession(TArray<char> Ticket, FSteamID SteamID);                                 // [0x15cd760] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.User.AdvertiseGame
	// void AdvertiseGame(FSteamID SteamIDGameServer, FString ServerIP, int32_t ServerPort);                                 // [0x15cd4e0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCore.SteamCoreUserAsyncActionRequestEncryptedAppTicket
/// Size: 0x0010 (0x000038 - 0x000048)
class USteamCoreUserAsyncActionRequestEncryptedAppTicket : public USteamCoreAsyncAction
{ 
public:
	SDK_UNDEFINED(16,2692) /* FMulticastInlineDelegate */ __um(OnCallback);                                        // 0x0038   (0x0010)  


	/// Functions
	// Function /Script/SteamCore.SteamCoreUserAsyncActionRequestEncryptedAppTicket.RequestEncryptedAppTicketAsync
	// class USteamCoreUserAsyncActionRequestEncryptedAppTicket* RequestEncryptedAppTicketAsync(class UObject* WorldContextObject, TArray<char> DataToInclude, float Timeout); // [0x15d3dc0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.SteamCoreUserAsyncActionRequestEncryptedAppTicket.HandleCallback
	// void HandleCallback(FEncryptedAppTicketResponse& Data, bool bWasSuccessful);                                          // [0x159c4a0] Final|Native|Public|HasOutParms 
};

/// Class /Script/SteamCore.SteamCoreUserAsyncActionRequestStoreAuthURL
/// Size: 0x0010 (0x000038 - 0x000048)
class USteamCoreUserAsyncActionRequestStoreAuthURL : public USteamCoreAsyncAction
{ 
public:
	SDK_UNDEFINED(16,2693) /* FMulticastInlineDelegate */ __um(OnCallback);                                        // 0x0038   (0x0010)  


	/// Functions
	// Function /Script/SteamCore.SteamCoreUserAsyncActionRequestStoreAuthURL.RequestStoreAuthURLAsync
	// class USteamCoreUserAsyncActionRequestStoreAuthURL* RequestStoreAuthURLAsync(class UObject* WorldContextObject, FString RedirectURL, float Timeout); // [0x15d42c0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.SteamCoreUserAsyncActionRequestStoreAuthURL.HandleCallback
	// void HandleCallback(FStoreAuthURLResponse& Data, bool bWasSuccessful);                                                // [0x15d3750] Final|Native|Public|HasOutParms 
};

/// Class /Script/SteamCore.UserStats
/// Size: 0x00F0 (0x000068 - 0x000158)
class UUserStats : public USteamCoreSubsystem
{ 
public:
	SDK_UNDEFINED(16,2694) /* FMulticastInlineDelegate */ __um(UserAchievementIconFetched);                        // 0x0068   (0x0010)  
	SDK_UNDEFINED(16,2695) /* FMulticastInlineDelegate */ __um(UserAchievementStored);                             // 0x0078   (0x0010)  
	SDK_UNDEFINED(16,2696) /* FMulticastInlineDelegate */ __um(UserStatsReceived);                                 // 0x0088   (0x0010)  
	SDK_UNDEFINED(16,2697) /* FMulticastInlineDelegate */ __um(UserStatsStored);                                   // 0x0098   (0x0010)  
	SDK_UNDEFINED(16,2698) /* FMulticastInlineDelegate */ __um(UserStatsUnloaded);                                 // 0x00A8   (0x0010)  
	unsigned char                                      UnknownData00_6[0xA0];                                      // 0x00B8   (0x00A0)  MISSED


	/// Functions
	// Function /Script/SteamCore.UserStats.UploadLeaderboardScore
	// void UploadLeaderboardScore(FDelegateProperty& Callback, FSteamLeaderboard SteamLeaderboard, ESteamLeaderboardUploadScoreMethod UploadScoreMethod, int32_t Score, TArray<int32_t> ScoreDetails); // [0x15d4bf0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.UserStats.UpdateAvgRateStat
	// bool UpdateAvgRateStat(FString Name, float CountThisSession, float SessionLength);                                    // [0x15d4a60] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.UserStats.StoreStats
	// bool StoreStats();                                                                                                    // [0x15d4a30] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.UserStats.SetStatInt
	// bool SetStatInt(FString Name, int32_t Data);                                                                          // [0x15d4900] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.UserStats.SetStatFloat
	// bool SetStatFloat(FString Name, float Data);                                                                          // [0x15d47c0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.UserStats.SetAchievement
	// bool SetAchievement(FString Name);                                                                                    // [0x15d46d0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.UserStats.ResetAllStats
	// bool ResetAllStats(bool bAchievementsToo);                                                                            // [0x15d4640] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.UserStats.RequestUserStats
	// void RequestUserStats(FDelegateProperty& Callback, FSteamID SteamID);                                                 // [0x15d4440] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.UserStats.RequestGlobalStats
	// void RequestGlobalStats(FDelegateProperty& Callback, int32_t HistoryDays);                                            // [0x15d40c0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.UserStats.RequestGlobalAchievementPercentages
	// void RequestGlobalAchievementPercentages(FDelegateProperty& Callback);                                                // [0x15d3f40] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.UserStats.RequestCurrentStats
	// bool RequestCurrentStats();                                                                                           // [0x15d3d90] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.UserStats.IndicateAchievementProgress
	// bool IndicateAchievementProgress(FString Name, int32_t CurrentProgress, int32_t MaxProgress);                         // [0x15d3c10] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.UserStats.GetUserStatInteger
	// bool GetUserStatInteger(FSteamID SteamIDUser, FString Name, int32_t& Data);                                           // [0x15d35d0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.UserStats.GetUserStatFloat
	// bool GetUserStatFloat(FSteamID SteamIDUser, FString Name, float& Data);                                               // [0x15d3450] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.UserStats.GetUserAchievementAndUnlockTime
	// bool GetUserAchievementAndUnlockTime(FSteamID SteamIDUser, FString Name, bool& bAchieved, int32_t& UnlockTime);       // [0x15d3290] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.UserStats.GetUserAchievement
	// bool GetUserAchievement(FSteamID SteamIDUser, FString Name, bool& bAchieved);                                         // [0x15d3110] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.UserStats.GetStatInt
	// bool GetStatInt(FString Name, int32_t& Data);                                                                         // [0x15d2fd0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.UserStats.GetStatFloat
	// bool GetStatFloat(FString Name, float& Data);                                                                         // [0x15d2e90] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.UserStats.GetNumberOfCurrentPlayers
	// void GetNumberOfCurrentPlayers(FDelegateProperty& Callback);                                                          // [0x15d2d10] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.UserStats.GetNumAchievements
	// int32_t GetNumAchievements();                                                                                         // [0x15d2ce0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.UserStats.GetNextMostAchievedAchievementInfo
	// int32_t GetNextMostAchievedAchievementInfo(int32_t IteratorPrevious, FString& Name, float& Percent, bool& bAchieved); // [0x15d2b50] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.UserStats.GetMostAchievedAchievementInfo
	// int32_t GetMostAchievedAchievementInfo(FString& Name, float& Percent, bool& bAchieved);                               // [0x15d29f0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.UserStats.GetLeaderboardSortMethod
	// ESteamLeaderboardSortMethod GetLeaderboardSortMethod(FSteamLeaderboard SteamLeaderboard);                             // [0x15d2960] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.UserStats.GetLeaderboardName
	// FString GetLeaderboardName(FSteamLeaderboard SteamLeaderboard);                                                       // [0x15d2890] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.UserStats.GetLeaderboardEntryCount
	// int32_t GetLeaderboardEntryCount(FSteamLeaderboard SteamLeaderboard);                                                 // [0x15d2800] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.UserStats.GetLeaderboardDisplayType
	// ESteamLeaderboardDisplayType GetLeaderboardDisplayType(FSteamLeaderboard SteamLeaderboard);                           // [0x15d2770] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.UserStats.GetGlobalStatInt
	// bool GetGlobalStatInt(FString StatName, int32_t& Data);                                                               // [0x15d2630] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.UserStats.GetGlobalStatHistoryInt
	// int32_t GetGlobalStatHistoryInt(FString StatName, int32_t HistoryDays, TArray<int32_t>& Data);                        // [0x15d24a0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.UserStats.GetGlobalStatHistoryFloat
	// int32_t GetGlobalStatHistoryFloat(FString StatName, int32_t HistoryDays, TArray<float>& Data);                        // [0x15d2310] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.UserStats.GetGlobalStatFloat
	// bool GetGlobalStatFloat(FString StatName, float& Data);                                                               // [0x15d21d0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.UserStats.GetDownloadedLeaderboardEntry
	// bool GetDownloadedLeaderboardEntry(FSteamLeaderboardEntries LeaderboardEntries, int32_t Index, FSteamLeaderboardEntry& LeaderboardEntry, TArray<int32_t> Details, TArray<int32_t>& outDetails); // [0x15d1fa0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.UserStats.GetAchievementProgressLimitsFloat
	// bool GetAchievementProgressLimitsFloat(FString Name, float& MinProgress, float& MaxProgress);                         // [0x15d1e00] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.UserStats.GetAchievementProgressLimits
	// bool GetAchievementProgressLimits(FString Name, int32_t& MinProgress, int32_t& MaxProgress);                          // [0x15d1e00] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.UserStats.GetAchievementName
	// FString GetAchievementName(int32_t Achievement);                                                                      // [0x15d1d30] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.UserStats.GetAchievementIcon
	// class UTexture2D* GetAchievementIcon(FString Name);                                                                   // [0x15d1c40] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.UserStats.GetAchievementDisplayAttribute
	// FString GetAchievementDisplayAttribute(FString Name, FString Key);                                                    // [0x15d1a90] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.UserStats.GetAchievementAndUnlockTime
	// bool GetAchievementAndUnlockTime(FString Name, bool& bAchieved, int32_t& UnlockTime);                                 // [0x15d18f0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.UserStats.GetAchievementAchievedPercent
	// bool GetAchievementAchievedPercent(FString Name, float& Percent);                                                     // [0x15d17b0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.UserStats.GetAchievement
	// bool GetAchievement(FString Name, bool& bAchieved);                                                                   // [0x15d1670] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.UserStats.FindOrCreateLeaderboard
	// void FindOrCreateLeaderboard(FDelegateProperty& Callback, FString LeaderboardName, ESteamLeaderboardSortMethod SortMethod, ESteamLeaderboardDisplayType DisplayType); // [0x15d12b0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.UserStats.FindLeaderboard
	// void FindLeaderboard(FDelegateProperty& Callback, FString LeaderboardName);                                           // [0x15d0fd0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.UserStats.DownloadLeaderboardEntriesForUsers
	// void DownloadLeaderboardEntriesForUsers(FDelegateProperty& Callback, FSteamLeaderboard SteamLeaderboard, TArray<FSteamID> Users); // [0x15d0ca0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.UserStats.DownloadLeaderboardEntries
	// void DownloadLeaderboardEntries(FDelegateProperty& Callback, FSteamLeaderboard SteamLeaderboard, ESteamLeaderboardDataRequest DataRequest, int32_t RangeStart, int32_t RangeEnd); // [0x15d0920] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.UserStats.ClearAchievement
	// bool ClearAchievement(FString Name);                                                                                  // [0x15d0830] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.UserStats.AttachLeaderboardUGC
	// void AttachLeaderboardUGC(FDelegateProperty& Callback, FSteamLeaderboard SteamLeaderboard, FSteamUGCHandle Handle);   // [0x15d05b0] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/SteamCore.SteamCoreUserStatsAsyncActionFindLeaderboard
/// Size: 0x0010 (0x000038 - 0x000048)
class USteamCoreUserStatsAsyncActionFindLeaderboard : public USteamCoreAsyncAction
{ 
public:
	SDK_UNDEFINED(16,2699) /* FMulticastInlineDelegate */ __um(OnCallback);                                        // 0x0038   (0x0010)  


	/// Functions
	// Function /Script/SteamCore.SteamCoreUserStatsAsyncActionFindLeaderboard.HandleCallback
	// void HandleCallback(FLeaderboardFindResult& Data, bool bWasSuccessful);                                               // [0x159c860] Final|Native|Public|HasOutParms 
	// Function /Script/SteamCore.SteamCoreUserStatsAsyncActionFindLeaderboard.FindLeaderboardAsync
	// class USteamCoreUserStatsAsyncActionFindLeaderboard* FindLeaderboardAsync(class UObject* WorldContextObject, FString LeaderboardName, float Timeout); // [0x15d1130] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCore.SteamCoreUserStatsAsyncActionDownloadLeaderboardEntries
/// Size: 0x0010 (0x000038 - 0x000048)
class USteamCoreUserStatsAsyncActionDownloadLeaderboardEntries : public USteamCoreAsyncAction
{ 
public:
	SDK_UNDEFINED(16,2700) /* FMulticastInlineDelegate */ __um(OnCallback);                                        // 0x0038   (0x0010)  


	/// Functions
	// Function /Script/SteamCore.SteamCoreUserStatsAsyncActionDownloadLeaderboardEntries.HandleCallback
	// void HandleCallback(FLeaderboardScoresDownloaded& Data, bool bWasSuccessful);                                         // [0x15d3850] Final|Native|Public|HasOutParms 
	// Function /Script/SteamCore.SteamCoreUserStatsAsyncActionDownloadLeaderboardEntries.DownloadLeaderboardEntriesAsync
	// class USteamCoreUserStatsAsyncActionDownloadLeaderboardEntries* DownloadLeaderboardEntriesAsync(class UObject* WorldContextObject, FSteamLeaderboard SteamLeaderboard, ESteamLeaderboardDataRequest Request, int32_t RangeStart, int32_t RangeEnd, float Timeout); // [0x15d0ad0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCore.SteamCoreUserStatsAsyncActionDownloadRequestGlobalStats
/// Size: 0x0010 (0x000038 - 0x000048)
class USteamCoreUserStatsAsyncActionDownloadRequestGlobalStats : public USteamCoreAsyncAction
{ 
public:
	SDK_UNDEFINED(16,2701) /* FMulticastInlineDelegate */ __um(OnCallback);                                        // 0x0038   (0x0010)  


	/// Functions
	// Function /Script/SteamCore.SteamCoreUserStatsAsyncActionDownloadRequestGlobalStats.RequestGlobalStatsAsync
	// class USteamCoreUserStatsAsyncActionDownloadRequestGlobalStats* RequestGlobalStatsAsync(class UObject* WorldContextObject, int32_t HistoryDays, float Timeout); // [0x15d41c0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.SteamCoreUserStatsAsyncActionDownloadRequestGlobalStats.HandleCallback
	// void HandleCallback(FGlobalStatsReceived& Data, bool bWasSuccessful);                                                 // [0x159c860] Final|Native|Public|HasOutParms 
};

/// Class /Script/SteamCore.SteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages
/// Size: 0x0010 (0x000038 - 0x000048)
class USteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages : public USteamCoreAsyncAction
{ 
public:
	SDK_UNDEFINED(16,2702) /* FMulticastInlineDelegate */ __um(OnCallback);                                        // 0x0038   (0x0010)  


	/// Functions
	// Function /Script/SteamCore.SteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages.RequestGlobalAchievementPercentagesAsync
	// class USteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages* RequestGlobalAchievementPercentagesAsync(class UObject* WorldContextObject, float Timeout); // [0x15d3ff0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.SteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages.HandleCallback
	// void HandleCallback(FGlobalAchievementPercentagesReady& Data, bool bWasSuccessful);                                   // [0x159c860] Final|Native|Public|HasOutParms 
};

/// Class /Script/SteamCore.SteamCoreUserStatsAsyncActionGetNumberOfCurrentPlayers
/// Size: 0x0010 (0x000038 - 0x000048)
class USteamCoreUserStatsAsyncActionGetNumberOfCurrentPlayers : public USteamCoreAsyncAction
{ 
public:
	SDK_UNDEFINED(16,2703) /* FMulticastInlineDelegate */ __um(OnCallback);                                        // 0x0038   (0x0010)  


	/// Functions
	// Function /Script/SteamCore.SteamCoreUserStatsAsyncActionGetNumberOfCurrentPlayers.HandleCallback
	// void HandleCallback(FNumberOfCurrentPlayers& Data, bool bWasSuccessful);                                              // [0x15d3940] Final|Native|Public|HasOutParms 
	// Function /Script/SteamCore.SteamCoreUserStatsAsyncActionGetNumberOfCurrentPlayers.GetNumberOfCurrentPlayersAsync
	// class USteamCoreUserStatsAsyncActionGetNumberOfCurrentPlayers* GetNumberOfCurrentPlayersAsync(class UObject* WorldContextObject, float Timeout); // [0x15d2dc0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCore.SteamCoreUserStatsAsyncActionUploadLeaderboardScore
/// Size: 0x0010 (0x000038 - 0x000048)
class USteamCoreUserStatsAsyncActionUploadLeaderboardScore : public USteamCoreAsyncAction
{ 
public:
	SDK_UNDEFINED(16,2704) /* FMulticastInlineDelegate */ __um(OnCallback);                                        // 0x0038   (0x0010)  


	/// Functions
	// Function /Script/SteamCore.SteamCoreUserStatsAsyncActionUploadLeaderboardScore.UploadLeaderboardScoreAsync
	// class USteamCoreUserStatsAsyncActionUploadLeaderboardScore* UploadLeaderboardScoreAsync(class UObject* WorldContextObject, FSteamLeaderboard SteamLeaderboard, ESteamLeaderboardUploadScoreMethod UploadScoreMethod, int32_t Score, TArray<int32_t> ScoreDetails, float Timeout); // [0x15d4e00] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.SteamCoreUserStatsAsyncActionUploadLeaderboardScore.HandleCallback
	// void HandleCallback(FLeaderboardScoreUploaded& Data, bool bWasSuccessful);                                            // [0x15d3b10] Final|Native|Public|HasOutParms 
};

/// Class /Script/SteamCore.SteamCoreUserStatsAsyncActionFindOrCreateLeaderboard
/// Size: 0x0010 (0x000038 - 0x000048)
class USteamCoreUserStatsAsyncActionFindOrCreateLeaderboard : public USteamCoreAsyncAction
{ 
public:
	SDK_UNDEFINED(16,2705) /* FMulticastInlineDelegate */ __um(OnCallback);                                        // 0x0038   (0x0010)  


	/// Functions
	// Function /Script/SteamCore.SteamCoreUserStatsAsyncActionFindOrCreateLeaderboard.HandleCallback
	// void HandleCallback(FFindOrCreateLeaderboardData& Data, bool bWasSuccessful);                                         // [0x159c860] Final|Native|Public|HasOutParms 
	// Function /Script/SteamCore.SteamCoreUserStatsAsyncActionFindOrCreateLeaderboard.FindOrCreateLeaderboardAsync
	// class USteamCoreUserStatsAsyncActionFindOrCreateLeaderboard* FindOrCreateLeaderboardAsync(class UObject* WorldContextObject, FString LeaderboardName, ESteamLeaderboardSortMethod SortMethod, ESteamLeaderboardDisplayType DisplayType, float Timeout); // [0x15d1480] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCore.SteamCoreUserStatsAsyncActionRequestUserStats
/// Size: 0x0010 (0x000038 - 0x000048)
class USteamCoreUserStatsAsyncActionRequestUserStats : public USteamCoreAsyncAction
{ 
public:
	SDK_UNDEFINED(16,2706) /* FMulticastInlineDelegate */ __um(OnCallback);                                        // 0x0038   (0x0010)  


	/// Functions
	// Function /Script/SteamCore.SteamCoreUserStatsAsyncActionRequestUserStats.RequestUserStatsAsync
	// class USteamCoreUserStatsAsyncActionRequestUserStats* RequestUserStatsAsync(class UObject* WorldContextObject, FSteamID SteamID, float Timeout); // [0x15d4540] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.SteamCoreUserStatsAsyncActionRequestUserStats.HandleCallback
	// void HandleCallback(FRequestUserStatsData& Data, bool bWasSuccessful);                                                // [0x15d3a20] Final|Native|Public|HasOutParms 
};

/// Class /Script/SteamCore.SteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers
/// Size: 0x0010 (0x000038 - 0x000048)
class USteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers : public USteamCoreAsyncAction
{ 
public:
	SDK_UNDEFINED(16,2707) /* FMulticastInlineDelegate */ __um(OnCallback);                                        // 0x0038   (0x0010)  


	/// Functions
	// Function /Script/SteamCore.SteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers.HandleCallback
	// void HandleCallback(FLeaderboardScoresDownloadedForUsers& Data, bool bWasSuccessful);                                 // [0x15d3850] Final|Native|Public|HasOutParms 
	// Function /Script/SteamCore.SteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers.DownloadLeaderboardEntriesForUsersAsync
	// class USteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers* DownloadLeaderboardEntriesForUsersAsync(class UObject* WorldContextObject, FSteamLeaderboard SteamLeaderboard, TArray<FSteamID> Users, float Timeout); // [0x15d0e30] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCore.SteamCoreUserStatsAsyncActionAttachLeaderboardUGC
/// Size: 0x0010 (0x000038 - 0x000048)
class USteamCoreUserStatsAsyncActionAttachLeaderboardUGC : public USteamCoreAsyncAction
{ 
public:
	SDK_UNDEFINED(16,2708) /* FMulticastInlineDelegate */ __um(OnCallback);                                        // 0x0038   (0x0010)  


	/// Functions
	// Function /Script/SteamCore.SteamCoreUserStatsAsyncActionAttachLeaderboardUGC.HandleCallback
	// void HandleCallback(FAttachLeaderboardUGCData& Data, bool bWasSuccessful);                                            // [0x159c860] Final|Native|Public|HasOutParms 
	// Function /Script/SteamCore.SteamCoreUserStatsAsyncActionAttachLeaderboardUGC.AttachLeaderboardUGCAsync
	// class USteamCoreUserStatsAsyncActionAttachLeaderboardUGC* AttachLeaderboardUGCAsync(class UObject* WorldContextObject, FSteamLeaderboard SteamLeaderboard, FSteamUGCHandle Handle, float Timeout); // [0x15d06e0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCore.SteamCoreVoice
/// Size: 0x0000 (0x0004A0 - 0x0004A0)
class USteamCoreVoice : public USoundWaveProcedural
{ 
public:


	/// Functions
	// Function /Script/SteamCore.SteamCoreVoice.DestroySteamCoreVoice
	// void DestroySteamCoreVoice(class USteamCoreVoice* Obj);                                                               // [0x15d8550] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.SteamCoreVoice.ConstructSteamCoreVoice
	// class USteamCoreVoice* ConstructSteamCoreVoice(int32_t AudioSampleRate);                                              // [0x15d84c0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.SteamCoreVoice.AddAudioBuffer
	// void AddAudioBuffer(TArray<char>& Buffer);                                                                            // [0x15d7ec0] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/SteamCore.SteamCoreAsyncActionListenForControllerChange
/// Size: 0x0010 (0x000038 - 0x000048)
class USteamCoreAsyncActionListenForControllerChange : public USteamCoreAsyncAction
{ 
public:
	SDK_UNDEFINED(16,2709) /* FMulticastInlineDelegate */ __um(OnControllerChanged);                               // 0x0038   (0x0010)  


	/// Functions
	// Function /Script/SteamCore.SteamCoreAsyncActionListenForControllerChange.ListenForControllerChange
	// class USteamCoreAsyncActionListenForControllerChange* ListenForControllerChange(class UObject* WorldContextObject);   // [0x15da500] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.SteamCoreAsyncActionListenForControllerChange.HandleCallback
	// void HandleCallback(bool bIsConnected, int32_t PlatformUserId, int32_t UserId);                                       // [0x15d96c0] Final|Native|Public  
};

/// Class /Script/SteamCore.SteamUtilities
/// Size: 0x0000 (0x000028 - 0x000028)
class USteamUtilities : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/SteamCore.SteamUtilities.WriteBytesToFile
	// bool WriteBytesToFile(bool bOverwriteIfExists, FString AbsoluteFilePath, TArray<char>& DataBuffer);                   // [0x15db380] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.SteamUtilities.SteamItemInstanceID_Equals_Exec
	// void SteamItemInstanceID_Equals_Exec(FSteamItemInstanceID A, FSteamItemInstanceID B, ESteamCoreIdentical& Result);    // [0x15db260] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.SteamUtilities.SteamItemInstanceID_Equals
	// bool SteamItemInstanceID_Equals(FSteamItemInstanceID A, FSteamItemInstanceID B);                                      // [0x15db190] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/SteamCore.SteamUtilities.ReadFileToBytes
	// TArray<char> ReadFileToBytes(FString AbsoluteFilePath);                                                               // [0x15db0b0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.SteamUtilities.PublishedFileID_NotEquals
	// bool PublishedFileID_NotEquals(FPublishedFileID A, FPublishedFileID B);                                               // [0x15dafe0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/SteamCore.SteamUtilities.PublishedFileID_Equals_Exec
	// void PublishedFileID_Equals_Exec(FPublishedFileID A, FPublishedFileID B, ESteamCoreIdentical& Result);                // [0x15d87d0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.SteamUtilities.PublishedFileID_Equals
	// bool PublishedFileID_Equals(FPublishedFileID A, FPublishedFileID B);                                                  // [0x15d8700] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/SteamCore.SteamUtilities.NotEqual
	// bool NotEqual(FSteamID A, FSteamID B);                                                                                // [0x15dafe0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/SteamCore.SteamUtilities.MakeUGCHandle
	// FSteamUGCHandle MakeUGCHandle(FString Value);                                                                         // [0x15da8b0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/SteamCore.SteamUtilities.MakeTicketHandle
	// FSteamTicketHandle MakeTicketHandle(FString Value);                                                                   // [0x15daef0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/SteamCore.SteamUtilities.MakeString
	// FSteamSessionSetting MakeString(FString Value);                                                                       // [0x15dad30] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/SteamCore.SteamUtilities.MakeSteamID
	// FSteamID MakeSteamID(FString Value);                                                                                  // [0x15da8b0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/SteamCore.SteamUtilities.MakeSteamGameID
	// FSteamGameID MakeSteamGameID(FString Value);                                                                          // [0x15da8b0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/SteamCore.SteamUtilities.MakeSearchString
	// FSteamSessionSearchSetting MakeSearchString(FString Value);                                                           // [0x15dabb0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/SteamCore.SteamUtilities.MakeSearchInteger
	// FSteamSessionSearchSetting MakeSearchInteger(ESteamComparisonOp ComparisonOperator, int32_t Value);                   // [0x15daa90] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/SteamCore.SteamUtilities.MakeSearchBool
	// FSteamSessionSearchSetting MakeSearchBool(bool bValue);                                                               // [0x15da9a0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/SteamCore.SteamUtilities.MakePublishedFileID
	// FPublishedFileID MakePublishedFileID(FString Value);                                                                  // [0x15da8b0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/SteamCore.SteamUtilities.MakeInventoryUpdateHandle
	// FSteamInventoryUpdateHandle MakeInventoryUpdateHandle(FString Value);                                                 // [0x15da8b0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/SteamCore.SteamUtilities.MakeInteger
	// FSteamSessionSetting MakeInteger(int32_t Value);                                                                      // [0x15da770] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/SteamCore.SteamUtilities.MakeBool
	// FSteamSessionSetting MakeBool(bool bValue);                                                                           // [0x15da630] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/SteamCore.SteamUtilities.ListenForSteamMessages
	// void ListenForSteamMessages(FDelegateProperty& Callback);                                                             // [0x15da590] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.SteamUtilities.K2_HexToString
	// FString K2_HexToString(TArray<char> Array);                                                                           // [0x15da3e0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/SteamCore.SteamUtilities.K2_HexToBytes
	// TArray<char> K2_HexToBytes(FString String);                                                                           // [0x15da2b0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/SteamCore.SteamUtilities.IsValid
	// bool IsValid(FSteamID SteamID);                                                                                       // [0x15da220] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/SteamCore.SteamUtilities.IsUsingP2PRelays
	// bool IsUsingP2PRelays();                                                                                              // [0x15da1f0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.SteamUtilities.IsUGCHandleValid_Exec
	// void IsUGCHandleValid_Exec(FSteamUGCHandle Handle, ESteamCoreValid& Result);                                          // [0x15da120] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.SteamUtilities.IsUGCHandleValid
	// bool IsUGCHandleValid(FSteamUGCHandle Handle);                                                                        // [0x15da090] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/SteamCore.SteamUtilities.IsSteamTicketHandleValid_Exec
	// void IsSteamTicketHandleValid_Exec(FSteamTicketHandle Handle, ESteamCoreValid& Result);                               // [0x15d9fc0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.SteamUtilities.IsSteamTicketHandleValid
	// bool IsSteamTicketHandleValid(FSteamTicketHandle Handle);                                                             // [0x15d9f30] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/SteamCore.SteamUtilities.IsSteamServerInitialized
	// bool IsSteamServerInitialized();                                                                                      // [0x15d9f00] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.SteamUtilities.IsSteamInventoryUpdateHandleValid_Exec
	// void IsSteamInventoryUpdateHandleValid_Exec(FSteamInventoryUpdateHandle Handle, ESteamCoreValid& Result);             // [0x15d9e30] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.SteamUtilities.IsSteamInventoryUpdateHandleValid
	// bool IsSteamInventoryUpdateHandleValid(FSteamInventoryUpdateHandle Handle);                                           // [0x15d9db0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/SteamCore.SteamUtilities.IsSteamIDValid_Exec
	// void IsSteamIDValid_Exec(FSteamID SteamID, ESteamCoreValid& Result);                                                  // [0x15d9c40] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.SteamUtilities.IsSteamAvailable
	// bool IsSteamAvailable();                                                                                              // [0x15d9c10] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/SteamCore.SteamUtilities.IsRecalculatingPing
	// bool IsRecalculatingPing();                                                                                           // [0x15d9be0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/SteamCore.SteamUtilities.IsPublishedFileIDValid_Exec
	// void IsPublishedFileIDValid_Exec(FPublishedFileID Handle, ESteamCoreValid& Result);                                   // [0x15d9b10] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.SteamUtilities.IsPublishedFileIDValid
	// bool IsPublishedFileIDValid(FPublishedFileID PublishedFileID);                                                        // [0x15d9a80] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/SteamCore.SteamUtilities.IsLobby
	// bool IsLobby(FSteamID SteamID);                                                                                       // [0x15d99f0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/SteamCore.SteamUtilities.IsGameIDValid_Exec
	// void IsGameIDValid_Exec(FSteamGameID GameID, ESteamCoreValid& Result);                                                // [0x15d98d0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.SteamUtilities.IsGameIDValid
	// bool IsGameIDValid(FSteamGameID GameID);                                                                              // [0x15d97d0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/SteamCore.SteamUtilities.GetType
	// ESteamAttributeType GetType(FSteamSessionSetting Settings);                                                           // [0x15d9520] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/SteamCore.SteamUtilities.GetString
	// bool GetString(FSteamSessionSetting Settings, FString& Key, FString& OutValue);                                       // [0x15d9260] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/SteamCore.SteamUtilities.GetSteamIdFromPlayerState
	// FSteamID GetSteamIdFromPlayerState(class APlayerState* PlayerState);                                                  // [0x15d91d0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.SteamUtilities.GetPublicIp
	// void GetPublicIp(FDelegateProperty& Callback);                                                                        // [0x15d9130] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.SteamUtilities.GetPingFromHostData
	// int32_t GetPingFromHostData(FHostPingData& Data);                                                                     // [0x15d9080] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.SteamUtilities.GetInteger
	// bool GetInteger(FSteamSessionSetting Settings, FString& Key, int32_t& OutValue);                                      // [0x15d8df0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/SteamCore.SteamUtilities.GetHostPingData
	// FHostPingData GetHostPingData();                                                                                      // [0x15d8d70] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.SteamUtilities.GetGameEngineInitialized
	// bool GetGameEngineInitialized();                                                                                      // [0x15d8d40] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/SteamCore.SteamUtilities.GetBool
	// bool GetBool(FSteamSessionSetting Settings, FString& Key, bool& OutValue);                                            // [0x15d8ab0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/SteamCore.SteamUtilities.GetAccountType
	// ESteamAccountType GetAccountType(FSteamID SteamID);                                                                   // [0x15d8a20] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/SteamCore.SteamUtilities.FromUnixTimestamp
	// FDateTime FromUnixTimestamp(FString Timestamp);                                                                       // [0x15d88e0] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/SteamCore.SteamUtilities.Equal_Exec
	// void Equal_Exec(FSteamID A, FSteamID B, ESteamCoreIdentical& Result);                                                 // [0x15d87d0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.SteamUtilities.Equal
	// bool Equal(FSteamID A, FSteamID B);                                                                                   // [0x15d8700] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/SteamCore.SteamUtilities.EncryptString
	// FString EncryptString(FString String);                                                                                // [0x15d85d0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.SteamUtilities.ConstructServerFilter
	// class UServerFilter* ConstructServerFilter(class UObject* WorldContextObject);                                        // [0x15d8430] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.SteamUtilities.BreakUGCHandle
	// FString BreakUGCHandle(FSteamUGCHandle Handle);                                                                       // [0x15d8290] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/SteamCore.SteamUtilities.BreakTicketHandle
	// FString BreakTicketHandle(FSteamTicketHandle Handle);                                                                 // [0x15d8360] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/SteamCore.SteamUtilities.BreakSteamID
	// FString BreakSteamID(FSteamID SteamID);                                                                               // [0x15d8290] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/SteamCore.SteamUtilities.BreakSteamGameID
	// FString BreakSteamGameID(FSteamGameID SteamID);                                                                       // [0x15d8290] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/SteamCore.SteamUtilities.BreakPublishedFileID
	// FString BreakPublishedFileID(FPublishedFileID FileID);                                                                // [0x15d8290] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/SteamCore.SteamUtilities.BreakInventoryUpdateHandle
	// FString BreakInventoryUpdateHandle(FSteamInventoryUpdateHandle Handle);                                               // [0x15d81c0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/SteamCore.SteamUtilities.BP_StringToBytes
	// TArray<char> BP_StringToBytes(FString String);                                                                        // [0x15d8090] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/SteamCore.SteamUtilities.BP_BytesToString
	// FString BP_BytesToString(TArray<char> Array);                                                                         // [0x15d7f70] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/SteamCore.Utils
/// Size: 0x00F0 (0x000068 - 0x000158)
class UUtils : public USteamCoreSubsystem
{ 
public:
	SDK_UNDEFINED(16,2710) /* FMulticastInlineDelegate */ __um(CheckFileSignature);                                // 0x0068   (0x0010)  
	SDK_UNDEFINED(16,2711) /* FMulticastInlineDelegate */ __um(GamepadTextInputDismissed);                         // 0x0078   (0x0010)  
	SDK_UNDEFINED(16,2712) /* FMulticastInlineDelegate */ __um(IPCountry);                                         // 0x0088   (0x0010)  
	SDK_UNDEFINED(16,2713) /* FMulticastInlineDelegate */ __um(LowBatteryPower);                                   // 0x0098   (0x0010)  
	SDK_UNDEFINED(16,2714) /* FMulticastInlineDelegate */ __um(SteamShutdown);                                     // 0x00A8   (0x0010)  
	unsigned char                                      UnknownData00_6[0xA0];                                      // 0x00B8   (0x00A0)  MISSED


	/// Functions
	// Function /Script/SteamCore.Utils.StartVRDashboard
	// void StartVRDashboard();                                                                                              // [0x15f4d50] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Utils.ShowGamepadTextInput
	// bool ShowGamepadTextInput(ESteamGamepadTextInputMode InputMode, ESteamGamepadTextInputLineMode LineInputMode, FString Description, int32_t CharMax, FString ExistingText); // [0x15f4b20] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Utils.SetVRHeadsetStreamingEnabled
	// void SetVRHeadsetStreamingEnabled(bool bEnabled);                                                                     // [0x15f4aa0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Utils.SetOverlayNotificationPosition
	// void SetOverlayNotificationPosition(ESteamNotificationPosition NotificationPosition);                                 // [0x15f4a30] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Utils.SetOverlayNotificationInset
	// void SetOverlayNotificationInset(int32_t HorizontalInset, int32_t VerticalInset);                                     // [0x15f4970] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Utils.IsVRHeadsetStreamingEnabled
	// bool IsVRHeadsetStreamingEnabled();                                                                                   // [0x15f4940] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Utils.IsSteamRunningInVR
	// bool IsSteamRunningInVR();                                                                                            // [0x15f4910] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Utils.IsSteamInBigPictureMode
	// bool IsSteamInBigPictureMode();                                                                                       // [0x15f48e0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Utils.IsSteamChinaLauncher
	// bool IsSteamChinaLauncher();                                                                                          // [0x15f48b0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Utils.IsOverlayEnabled
	// bool IsOverlayEnabled();                                                                                              // [0x15f4880] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Utils.InitFilterText
	// bool InitFilterText();                                                                                                // [0x15f47b0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Utils.GetSteamUILanguage
	// FString GetSteamUILanguage();                                                                                         // [0x15f46b0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Utils.GetServerRealTime
	// int32_t GetServerRealTime();                                                                                          // [0x15f4680] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Utils.GetSecondsSinceComputerActive
	// int32_t GetSecondsSinceComputerActive();                                                                              // [0x15f4650] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Utils.GetSecondsSinceAppActive
	// int32_t GetSecondsSinceAppActive();                                                                                   // [0x15f4620] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Utils.GetIPCountry
	// FString GetIPCountry();                                                                                               // [0x15f4210] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Utils.GetIPCCallCount
	// int32_t GetIPCCallCount();                                                                                            // [0x15f41e0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Utils.GetImageSize
	// bool GetImageSize(int32_t iImage, int32_t& Width, int32_t& Height);                                                   // [0x15f4380] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.Utils.GetImageRGBA
	// bool GetImageRGBA(int32_t iImage, TArray<char>& OutBuffer);                                                           // [0x15f4290] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.Utils.GetEnteredGamepadTextLength
	// int32_t GetEnteredGamepadTextLength();                                                                                // [0x15f41b0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Utils.GetEnteredGamepadTextInput
	// bool GetEnteredGamepadTextInput(FString& Text);                                                                       // [0x15f4100] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.Utils.GetCurrentBatteryPower
	// int32_t GetCurrentBatteryPower();                                                                                     // [0x15f40d0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Utils.GetConnectedUniverse
	// ESteamUniverse GetConnectedUniverse();                                                                                // [0x15f40a0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Utils.GetAppID_Pure
	// int32_t GetAppID_Pure();                                                                                              // [0x15f4070] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/SteamCore.Utils.GetAppID
	// int32_t GetAppID();                                                                                                   // [0x15f4070] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Utils.BOverlayNeedsPresent
	// bool BOverlayNeedsPresent();                                                                                          // [0x15f4040] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCore.Video
/// Size: 0x0060 (0x000068 - 0x0000C8)
class UVideo : public USteamCoreSubsystem
{ 
public:
	SDK_UNDEFINED(16,2715) /* FMulticastInlineDelegate */ __um(GetOPFSettingsResult);                              // 0x0068   (0x0010)  
	SDK_UNDEFINED(16,2716) /* FMulticastInlineDelegate */ __um(GetVideoURLResult);                                 // 0x0078   (0x0010)  
	unsigned char                                      UnknownData00_6[0x40];                                      // 0x0088   (0x0040)  MISSED


	/// Functions
	// Function /Script/SteamCore.Video.IsBroadcasting
	// bool IsBroadcasting(int32_t& NumViewers);                                                                             // [0x15f47e0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.Video.GetVideoURL
	// void GetVideoURL(int32_t VideoAppID);                                                                                 // [0x15f4730] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCore.Video.GetOPFStringForApp
	// bool GetOPFStringForApp(int32_t VideoAppID, FString& OutBuffer);                                                      // [0x15f4530] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCore.Video.GetOPFSettings
	// void GetOPFSettings(int32_t VideoAppID);                                                                              // [0x15f44b0] Final|Native|Static|Public|BlueprintCallable 
};

/// Struct /Script/SteamCore.EndGameResultCallback
/// Size: 0x0018 (0x000000 - 0x000018)
struct FEndGameResultCallback
{ 
	ESteamResult                                       Result;                                                     // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0001   (0x0007)  MISSED
	SDK_UNDEFINED(16,2717) /* FString */               __um(UniqueGameID);                                         // 0x0008   (0x0010)  
};

/// Struct /Script/SteamCore.SteamSessionSetting
/// Size: 0x0028 (0x000000 - 0x000028)
struct FSteamSessionSetting
{ 
	unsigned char                                      UnknownData00_1[0x28];                                      // 0x0000   (0x0028)  MISSED
};

/// Struct /Script/SteamCore.SteamSessionResult
/// Size: 0x0130 (0x000000 - 0x000130)
struct FSteamSessionResult
{ 
	FBlueprintSessionResult                            Result;                                                     // 0x0000   (0x0120)  
	TArray<FSteamSessionSetting>                       SessionSettings;                                            // 0x0120   (0x0010)  
};

/// Struct /Script/SteamCore.PublishedFileID
/// Size: 0x0008 (0x000000 - 0x000008)
struct FPublishedFileID
{ 
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0000   (0x0008)  MISSED
};

/// Struct /Script/SteamCore.AddAppDependencyResult
/// Size: 0x0018 (0x000000 - 0x000018)
struct FAddAppDependencyResult
{ 
	ESteamResult                                       Result;                                                     // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0001   (0x0007)  MISSED
	FPublishedFileID                                   PublishedFileID;                                            // 0x0008   (0x0008)  
	int32_t                                            AppID;                                                      // 0x0010   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0014   (0x0004)  MISSED
};

/// Struct /Script/SteamCore.UserFavoriteItemsListChanged
/// Size: 0x0010 (0x000000 - 0x000010)
struct FUserFavoriteItemsListChanged
{ 
	FPublishedFileID                                   PublishedFileID;                                            // 0x0000   (0x0008)  
	ESteamResult                                       Result;                                                     // 0x0008   (0x0001)  
	bool                                               bWasAddRequest;                                             // 0x0009   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x000A   (0x0006)  MISSED
};

/// Struct /Script/SteamCore.AddUGCDependencyResult
/// Size: 0x0018 (0x000000 - 0x000018)
struct FAddUGCDependencyResult
{ 
	ESteamResult                                       Result;                                                     // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0001   (0x0007)  MISSED
	FPublishedFileID                                   PublishedFileID;                                            // 0x0008   (0x0008)  
	FPublishedFileID                                   ChildPublishedFileId;                                       // 0x0010   (0x0008)  
};

/// Struct /Script/SteamCore.AssociateWithClanResult
/// Size: 0x0001 (0x000000 - 0x000001)
struct FAssociateWithClanResult
{ 
	ESteamResult                                       Result;                                                     // 0x0000   (0x0001)  
};

/// Struct /Script/SteamCore.SteamLeaderboard
/// Size: 0x0008 (0x000000 - 0x000008)
struct FSteamLeaderboard
{ 
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0000   (0x0008)  MISSED
};

/// Struct /Script/SteamCore.AttachLeaderboardUGCData
/// Size: 0x0010 (0x000000 - 0x000010)
struct FAttachLeaderboardUGCData
{ 
	FSteamLeaderboard                                  SteamLeaderboard;                                           // 0x0000   (0x0008)  
	ESteamResult                                       Result;                                                     // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0009   (0x0007)  MISSED
};

/// Struct /Script/SteamCore.SteamID
/// Size: 0x0008 (0x000000 - 0x000008)
struct FSteamID
{ 
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0000   (0x0008)  MISSED
};

/// Struct /Script/SteamCore.AvatarImageLoaded
/// Size: 0x0020 (0x000000 - 0x000020)
struct FAvatarImageLoaded
{ 
	FSteamID                                           SteamID;                                                    // 0x0000   (0x0008)  
	class UTexture2D*                                  Image;                                                      // 0x0008   (0x0008)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x0010   (0x0010)  MISSED
};

/// Struct /Script/SteamCore.ChangeNumOpenSlotsData
/// Size: 0x0001 (0x000000 - 0x000001)
struct FChangeNumOpenSlotsData
{ 
	ESteamResult                                       Result;                                                     // 0x0000   (0x0001)  
};

/// Struct /Script/SteamCore.CheckFileSignature
/// Size: 0x0001 (0x000000 - 0x000001)
struct FCheckFileSignature
{ 
	ESteamCheckFileSignature                           CheckFileSignature;                                         // 0x0000   (0x0001)  
};

/// Struct /Script/SteamCore.ClanOfficerListResponse
/// Size: 0x0010 (0x000000 - 0x000010)
struct FClanOfficerListResponse
{ 
	FSteamID                                           SteamIDClan;                                                // 0x0000   (0x0008)  
	int32_t                                            Officers;                                                   // 0x0008   (0x0004)  
	bool                                               bSuccess;                                                   // 0x000C   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x000D   (0x0003)  MISSED
};

/// Struct /Script/SteamCore.ClientGameServerDeny
/// Size: 0x0020 (0x000000 - 0x000020)
struct FClientGameServerDeny
{ 
	int32_t                                            AppID;                                                      // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	SDK_UNDEFINED(16,2718) /* FString */               __um(GameServerIP);                                         // 0x0008   (0x0010)  
	int32_t                                            GameServerPort;                                             // 0x0018   (0x0004)  
	bool                                               BSecure;                                                    // 0x001C   (0x0001)  
	ESteamDenyReason                                   Reason;                                                     // 0x001D   (0x0001)  
	unsigned char                                      UnknownData01_6[0x2];                                       // 0x001E   (0x0002)  MISSED
};

/// Struct /Script/SteamCore.ComputeNewPlayerCompatibilityResult
/// Size: 0x0018 (0x000000 - 0x000018)
struct FComputeNewPlayerCompatibilityResult
{ 
	ESteamResult                                       Result;                                                     // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	int32_t                                            PlayersThatDontLikeCandidate;                               // 0x0004   (0x0004)  
	int32_t                                            PlayersThatCandidateDoesntLike;                             // 0x0008   (0x0004)  
	int32_t                                            ClanPlayersThatDontLikeCandidate;                           // 0x000C   (0x0004)  
	FSteamID                                           SteamIDCandidate;                                           // 0x0010   (0x0008)  
};

/// Struct /Script/SteamCore.PartyBeaconID
/// Size: 0x0008 (0x000000 - 0x000008)
struct FPartyBeaconID
{ 
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0000   (0x0008)  MISSED
};

/// Struct /Script/SteamCore.CreateBeaconData
/// Size: 0x0010 (0x000000 - 0x000010)
struct FCreateBeaconData
{ 
	ESteamResult                                       Result;                                                     // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0001   (0x0007)  MISSED
	FPartyBeaconID                                     BeaconID;                                                   // 0x0008   (0x0008)  
};

/// Struct /Script/SteamCore.CreateItemResult
/// Size: 0x0018 (0x000000 - 0x000018)
struct FCreateItemResult
{ 
	ESteamResult                                       Result;                                                     // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0001   (0x0007)  MISSED
	FPublishedFileID                                   PublishedFileID;                                            // 0x0008   (0x0008)  
	bool                                               bUserNeedsToAcceptWorkshopLegalAgreement;                   // 0x0010   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0011   (0x0007)  MISSED
};

/// Struct /Script/SteamCore.CreateLobbyData
/// Size: 0x0010 (0x000000 - 0x000010)
struct FCreateLobbyData
{ 
	ESteamResult                                       Result;                                                     // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0001   (0x0007)  MISSED
	FSteamID                                           SteamIDLobby;                                               // 0x0008   (0x0008)  
};

/// Struct /Script/SteamCore.UGCDeleteItemResult
/// Size: 0x0010 (0x000000 - 0x000010)
struct FUGCDeleteItemResult
{ 
	ESteamResult                                       Result;                                                     // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0001   (0x0007)  MISSED
	FPublishedFileID                                   PublishedFileID;                                            // 0x0008   (0x0008)  
};

/// Struct /Script/SteamCore.DLCInstalled
/// Size: 0x0004 (0x000000 - 0x000004)
struct FDLCInstalled
{ 
	int32_t                                            AppID;                                                      // 0x0000   (0x0004)  
};

/// Struct /Script/SteamCore.DownloadClanActivityCountsResult
/// Size: 0x0001 (0x000000 - 0x000001)
struct FDownloadClanActivityCountsResult
{ 
	bool                                               bSuccess;                                                   // 0x0000   (0x0001)  
};

/// Struct /Script/SteamCore.DownloadItemResult
/// Size: 0x0018 (0x000000 - 0x000018)
struct FDownloadItemResult
{ 
	int32_t                                            AppID;                                                      // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	FPublishedFileID                                   PublishedFileID;                                            // 0x0008   (0x0008)  
	ESteamResult                                       Result;                                                     // 0x0010   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0011   (0x0007)  MISSED
};

/// Struct /Script/SteamCore.SteamLeaderboardEntries
/// Size: 0x0008 (0x000000 - 0x000008)
struct FSteamLeaderboardEntries
{ 
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0000   (0x0008)  MISSED
};

/// Struct /Script/SteamCore.LeaderboardScoresDownloaded
/// Size: 0x0018 (0x000000 - 0x000018)
struct FLeaderboardScoresDownloaded
{ 
	FSteamLeaderboard                                  SteamLeaderboard;                                           // 0x0000   (0x0008)  
	FSteamLeaderboardEntries                           SteamLeaderboardEntries;                                    // 0x0008   (0x0008)  
	int32_t                                            EntryCount;                                                 // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0014   (0x0004)  MISSED
};

/// Struct /Script/SteamCore.LeaderboardScoresDownloadedForUsers
/// Size: 0x0018 (0x000000 - 0x000018)
struct FLeaderboardScoresDownloadedForUsers
{ 
	FSteamLeaderboard                                  SteamLeaderboard;                                           // 0x0000   (0x0008)  
	FSteamLeaderboardEntries                           SteamLeaderboardEntries;                                    // 0x0008   (0x0008)  
	int32_t                                            EntryCount;                                                 // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0014   (0x0004)  MISSED
};

/// Struct /Script/SteamCore.FriendsEnumerateFollowingList
/// Size: 0x0020 (0x000000 - 0x000020)
struct FFriendsEnumerateFollowingList
{ 
	ESteamResult                                       Result;                                                     // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0001   (0x0007)  MISSED
	TArray<FSteamID>                                   SteamIDs;                                                   // 0x0008   (0x0010)  
	int32_t                                            Results;                                                    // 0x0018   (0x0004)  
	int32_t                                            TotalResult;                                                // 0x001C   (0x0004)  
};

/// Struct /Script/SteamCore.FavoritesListAccountsUpdated
/// Size: 0x0001 (0x000000 - 0x000001)
struct FFavoritesListAccountsUpdated
{ 
	ESteamResult                                       Result;                                                     // 0x0000   (0x0001)  
};

/// Struct /Script/SteamCore.FavoritesListChanged
/// Size: 0x0040 (0x000000 - 0x000040)
struct FFavoritesListChanged
{ 
	SDK_UNDEFINED(16,2719) /* FString */               __um(IP);                                                   // 0x0000   (0x0010)  
	int32_t                                            QueryPort;                                                  // 0x0010   (0x0004)  
	int32_t                                            ConnectionPort;                                             // 0x0014   (0x0004)  
	int32_t                                            AppID;                                                      // 0x0018   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x001C   (0x0004)  MISSED
	TArray<ESteamFavoriteFlags>                        Flags;                                                      // 0x0020   (0x0010)  
	bool                                               bAdd;                                                       // 0x0030   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0031   (0x0007)  MISSED
	FSteamID                                           SteamID;                                                    // 0x0038   (0x0008)  
};

/// Struct /Script/SteamCore.FileDetailsResult
/// Size: 0x0028 (0x000000 - 0x000028)
struct FFileDetailsResult
{ 
	ESteamResult                                       Result;                                                     // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	int32_t                                            FileSize;                                                   // 0x0004   (0x0004)  
	SDK_UNDEFINED(16,2720) /* FString */               __um(SHA);                                                  // 0x0008   (0x0010)  
	TArray<int32_t>                                    Flags;                                                      // 0x0018   (0x0010)  
};

/// Struct /Script/SteamCore.RemoteStorageFileReadAsyncComplete
/// Size: 0x0018 (0x000000 - 0x000018)
struct FRemoteStorageFileReadAsyncComplete
{ 
	ESteamResult                                       Result;                                                     // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	int32_t                                            Offset;                                                     // 0x0004   (0x0004)  
	int32_t                                            Read;                                                       // 0x0008   (0x0004)  
	unsigned char                                      UnknownData01_6[0xC];                                       // 0x000C   (0x000C)  MISSED
};

/// Struct /Script/SteamCore.SteamUGCHandle
/// Size: 0x0008 (0x000000 - 0x000008)
struct FSteamUGCHandle
{ 
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0000   (0x0008)  MISSED
};

/// Struct /Script/SteamCore.RemoteStorageFileShareResult
/// Size: 0x0020 (0x000000 - 0x000020)
struct FRemoteStorageFileShareResult
{ 
	ESteamResult                                       Result;                                                     // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0001   (0x0007)  MISSED
	FSteamUGCHandle                                    File;                                                       // 0x0008   (0x0008)  
	SDK_UNDEFINED(16,2721) /* FString */               __um(Filename);                                             // 0x0010   (0x0010)  
};

/// Struct /Script/SteamCore.RemoteStorageFileWriteAsyncComplete
/// Size: 0x0001 (0x000000 - 0x000001)
struct FRemoteStorageFileWriteAsyncComplete
{ 
	ESteamResult                                       Result;                                                     // 0x0000   (0x0001)  
};

/// Struct /Script/SteamCore.LeaderboardFindResult
/// Size: 0x0010 (0x000000 - 0x000010)
struct FLeaderboardFindResult
{ 
	FSteamLeaderboard                                  SteamLeaderboard;                                           // 0x0000   (0x0008)  
	bool                                               bLeaderboardFound;                                          // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0009   (0x0007)  MISSED
};

/// Struct /Script/SteamCore.FindOrCreateLeaderboardData
/// Size: 0x0010 (0x000000 - 0x000010)
struct FFindOrCreateLeaderboardData
{ 
	FSteamLeaderboard                                  SteamLeaderboard;                                           // 0x0000   (0x0008)  
	bool                                               bLeaderboardFound;                                          // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0009   (0x0007)  MISSED
};

/// Struct /Script/SteamCore.FriendRichPresenceUpdate
/// Size: 0x0010 (0x000000 - 0x000010)
struct FFriendRichPresenceUpdate
{ 
	FSteamID                                           SteamIDFriend;                                              // 0x0000   (0x0008)  
	int32_t                                            AppID;                                                      // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
};

/// Struct /Script/SteamCore.GameConnectedChatJoin
/// Size: 0x0010 (0x000000 - 0x000010)
struct FGameConnectedChatJoin
{ 
	FSteamID                                           SteamIDClanChat;                                            // 0x0000   (0x0008)  
	FSteamID                                           SteamIDUser;                                                // 0x0008   (0x0008)  
};

/// Struct /Script/SteamCore.GameConnectedChatLeave
/// Size: 0x0018 (0x000000 - 0x000018)
struct FGameConnectedChatLeave
{ 
	FSteamID                                           SteamIDClanChat;                                            // 0x0000   (0x0008)  
	FSteamID                                           SteamIDUser;                                                // 0x0008   (0x0008)  
	bool                                               bKicked;                                                    // 0x0010   (0x0001)  
	bool                                               bDropped;                                                   // 0x0011   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x0012   (0x0006)  MISSED
};

/// Struct /Script/SteamCore.GameConnectedClanChatMsg
/// Size: 0x0018 (0x000000 - 0x000018)
struct FGameConnectedClanChatMsg
{ 
	FSteamID                                           SteamIDUser;                                                // 0x0000   (0x0008)  
	FSteamID                                           SteamIDClanChat;                                            // 0x0008   (0x0008)  
	int32_t                                            MessageID;                                                  // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0014   (0x0004)  MISSED
};

/// Struct /Script/SteamCore.GameConnectedFriendChatMsg
/// Size: 0x0010 (0x000000 - 0x000010)
struct FGameConnectedFriendChatMsg
{ 
	FSteamID                                           SteamIDUser;                                                // 0x0000   (0x0008)  
	int32_t                                            MessageID;                                                  // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
};

/// Struct /Script/SteamCore.GameLobbyJoinRequested
/// Size: 0x0010 (0x000000 - 0x000010)
struct FGameLobbyJoinRequested
{ 
	FSteamID                                           SteamIDLobby;                                               // 0x0000   (0x0008)  
	FSteamID                                           SteamIDFriend;                                              // 0x0008   (0x0008)  
};

/// Struct /Script/SteamCore.GameOverlayActivated
/// Size: 0x0001 (0x000000 - 0x000001)
struct FGameOverlayActivated
{ 
	bool                                               bActive;                                                    // 0x0000   (0x0001)  
};

/// Struct /Script/SteamCore.GamepadTextInputDismissed
/// Size: 0x0008 (0x000000 - 0x000008)
struct FGamepadTextInputDismissed
{ 
	bool                                               bSubmitted;                                                 // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	int32_t                                            SubmittedText;                                              // 0x0004   (0x0004)  
};

/// Struct /Script/SteamCore.GameRichPresenceJoinRequested
/// Size: 0x0018 (0x000000 - 0x000018)
struct FGameRichPresenceJoinRequested
{ 
	FSteamID                                           SteamIDFriend;                                              // 0x0000   (0x0008)  
	SDK_UNDEFINED(16,2722) /* FString */               __um(Connect);                                              // 0x0008   (0x0010)  
};

/// Struct /Script/SteamCore.GameServerChangeRequested
/// Size: 0x0020 (0x000000 - 0x000020)
struct FGameServerChangeRequested
{ 
	SDK_UNDEFINED(16,2723) /* FString */               __um(Server);                                               // 0x0000   (0x0010)  
	SDK_UNDEFINED(16,2724) /* FString */               __um(Password);                                             // 0x0010   (0x0010)  
};

/// Struct /Script/SteamCore.GameWebCallback
/// Size: 0x0010 (0x000000 - 0x000010)
struct FGameWebCallback
{ 
	SDK_UNDEFINED(16,2725) /* FString */               __um(URL);                                                  // 0x0000   (0x0010)  
};

/// Struct /Script/SteamCore.GetAppDependenciesResult
/// Size: 0x0028 (0x000000 - 0x000028)
struct FGetAppDependenciesResult
{ 
	ESteamResult                                       Result;                                                     // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0001   (0x0007)  MISSED
	FPublishedFileID                                   PublishedFileID;                                            // 0x0008   (0x0008)  
	TArray<int32_t>                                    AppIDs;                                                     // 0x0010   (0x0010)  
	int32_t                                            NumAppDependencies;                                         // 0x0020   (0x0004)  
	int32_t                                            TotalNumAppDependencies;                                    // 0x0024   (0x0004)  
};

/// Struct /Script/SteamCore.SteamTicketHandle
/// Size: 0x0004 (0x000000 - 0x000004)
struct FSteamTicketHandle
{ 
	unsigned char                                      UnknownData00_1[0x4];                                       // 0x0000   (0x0004)  MISSED
};

/// Struct /Script/SteamCore.GetAuthSessionTicketResponse
/// Size: 0x0008 (0x000000 - 0x000008)
struct FGetAuthSessionTicketResponse
{ 
	FSteamTicketHandle                                 AuthTicket;                                                 // 0x0000   (0x0004)  
	ESteamResult                                       Result;                                                     // 0x0004   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0005   (0x0003)  MISSED
};

/// Struct /Script/SteamCore.FriendsGetFollowerCount
/// Size: 0x0018 (0x000000 - 0x000018)
struct FFriendsGetFollowerCount
{ 
	ESteamResult                                       Result;                                                     // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0001   (0x0007)  MISSED
	FSteamID                                           SteamID;                                                    // 0x0008   (0x0008)  
	int32_t                                            Count;                                                      // 0x0010   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0014   (0x0004)  MISSED
};

/// Struct /Script/SteamCore.NumberOfCurrentPlayers
/// Size: 0x0008 (0x000000 - 0x000008)
struct FNumberOfCurrentPlayers
{ 
	bool                                               bSuccess;                                                   // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	int32_t                                            Players;                                                    // 0x0004   (0x0004)  
};

/// Struct /Script/SteamCore.GetOPFSettingsResult
/// Size: 0x0008 (0x000000 - 0x000008)
struct FGetOPFSettingsResult
{ 
	ESteamResult                                       Result;                                                     // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	int32_t                                            AppID;                                                      // 0x0004   (0x0004)  
};

/// Struct /Script/SteamCore.GetUserItemVoteResult
/// Size: 0x0010 (0x000000 - 0x000010)
struct FGetUserItemVoteResult
{ 
	FPublishedFileID                                   PublishedFileID;                                            // 0x0000   (0x0008)  
	ESteamResult                                       Result;                                                     // 0x0008   (0x0001)  
	bool                                               bVotedUp;                                                   // 0x0009   (0x0001)  
	bool                                               bVotedDown;                                                 // 0x000A   (0x0001)  
	bool                                               bVoteSkipped;                                               // 0x000B   (0x0001)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
};

/// Struct /Script/SteamCore.GetVideoURLResult
/// Size: 0x0018 (0x000000 - 0x000018)
struct FGetVideoURLResult
{ 
	ESteamResult                                       Result;                                                     // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	int32_t                                            AppID;                                                      // 0x0004   (0x0004)  
	SDK_UNDEFINED(16,2726) /* FString */               __um(URL);                                                  // 0x0008   (0x0010)  
};

/// Struct /Script/SteamCore.GSClientApprove
/// Size: 0x0010 (0x000000 - 0x000010)
struct FGSClientApprove
{ 
	FSteamID                                           SteamID;                                                    // 0x0000   (0x0008)  
	FSteamID                                           OwnerSteamID;                                               // 0x0008   (0x0008)  
};

/// Struct /Script/SteamCore.GSClientDeny
/// Size: 0x0020 (0x000000 - 0x000020)
struct FGSClientDeny
{ 
	FSteamID                                           SteamID;                                                    // 0x0000   (0x0008)  
	ESteamDenyReason                                   DenyReason;                                                 // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0009   (0x0007)  MISSED
	SDK_UNDEFINED(16,2727) /* FString */               __um(OptionalText);                                         // 0x0010   (0x0010)  
};

/// Struct /Script/SteamCore.GSClientGroupStatus
/// Size: 0x0018 (0x000000 - 0x000018)
struct FGSClientGroupStatus
{ 
	FSteamID                                           SteamIDUser;                                                // 0x0000   (0x0008)  
	FSteamID                                           SteamIDGroup;                                               // 0x0008   (0x0008)  
	bool                                               bMember;                                                    // 0x0010   (0x0001)  
	bool                                               bOfficer;                                                   // 0x0011   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x0012   (0x0006)  MISSED
};

/// Struct /Script/SteamCore.GSPolicyResponse
/// Size: 0x0001 (0x000000 - 0x000001)
struct FGSPolicyResponse
{ 
	bool                                               BSecure;                                                    // 0x0000   (0x0001)  
};

/// Struct /Script/SteamCore.GSStatsUnloaded
/// Size: 0x0008 (0x000000 - 0x000008)
struct FGSStatsUnloaded
{ 
	FSteamID                                           SteamIDUser;                                                // 0x0000   (0x0008)  
};

/// Struct /Script/SteamCore.ValidateAuthTicketResponse
/// Size: 0x0018 (0x000000 - 0x000018)
struct FValidateAuthTicketResponse
{ 
	FSteamID                                           SteamID;                                                    // 0x0000   (0x0008)  
	ESteamAuthSessionResponse                          AuthSessionResponse;                                        // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0009   (0x0007)  MISSED
	FSteamID                                           OwnerSteamID;                                               // 0x0010   (0x0008)  
};

/// Struct /Script/SteamCore.IPCFailure
/// Size: 0x0001 (0x000000 - 0x000001)
struct FIPCFailure
{ 
	ESteamFailureType                                  FailureType;                                                // 0x0000   (0x0001)  
};

/// Struct /Script/SteamCore.IPCountry
/// Size: 0x0001 (0x000000 - 0x000001)
struct FIPCountry
{ 
	unsigned char                                      UnknownData00_1[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/SteamCore.FriendsIsFollowing
/// Size: 0x0018 (0x000000 - 0x000018)
struct FFriendsIsFollowing
{ 
	ESteamResult                                       Result;                                                     // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0001   (0x0007)  MISSED
	FSteamID                                           SteamID;                                                    // 0x0008   (0x0008)  
	bool                                               bIsFollowing;                                               // 0x0010   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0011   (0x0007)  MISSED
};

/// Struct /Script/SteamCore.ItemInstalled
/// Size: 0x0010 (0x000000 - 0x000010)
struct FItemInstalled
{ 
	int32_t                                            AppID;                                                      // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	FPublishedFileID                                   PublishedFileID;                                            // 0x0008   (0x0008)  
};

/// Struct /Script/SteamCore.JoinClanChatRoomCompletionResult
/// Size: 0x0010 (0x000000 - 0x000010)
struct FJoinClanChatRoomCompletionResult
{ 
	FSteamID                                           SteamIDClanChat;                                            // 0x0000   (0x0008)  
	ESteamChatRoomEnterResponse                        ChatRoomEnterResponse;                                      // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0009   (0x0007)  MISSED
};

/// Struct /Script/SteamCore.JoinLobbyData
/// Size: 0x0010 (0x000000 - 0x000010)
struct FJoinLobbyData
{ 
	FSteamID                                           SteamIDLobby;                                               // 0x0000   (0x0008)  
	bool                                               bLocked;                                                    // 0x0008   (0x0001)  
	ESteamChatRoomEnterResponse                        ChatRoomEnterResponse;                                      // 0x0009   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x000A   (0x0006)  MISSED
};

/// Struct /Script/SteamCore.JoinPartyData
/// Size: 0x0028 (0x000000 - 0x000028)
struct FJoinPartyData
{ 
	ESteamResult                                       Result;                                                     // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0001   (0x0007)  MISSED
	FPartyBeaconID                                     BeaconID;                                                   // 0x0008   (0x0008)  
	FSteamID                                           SteamIDBeaconOwner;                                         // 0x0010   (0x0008)  
	SDK_UNDEFINED(16,2728) /* FString */               __um(ConnectString);                                        // 0x0018   (0x0010)  
};

/// Struct /Script/SteamCore.LicensesUpdated
/// Size: 0x0001 (0x000000 - 0x000001)
struct FLicensesUpdated
{ 
	unsigned char                                      UnknownData00_1[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/SteamCore.LobbyChatMsg
/// Size: 0x0018 (0x000000 - 0x000018)
struct FLobbyChatMsg
{ 
	FSteamID                                           SteamIDLobby;                                               // 0x0000   (0x0008)  
	FSteamID                                           SteamIDUser;                                                // 0x0008   (0x0008)  
	ESteamChatEntryType                                ChatEntryType;                                              // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0011   (0x0003)  MISSED
	int32_t                                            ChatID;                                                     // 0x0014   (0x0004)  
};

/// Struct /Script/SteamCore.LobbyChatUpdate
/// Size: 0x0028 (0x000000 - 0x000028)
struct FLobbyChatUpdate
{ 
	FSteamID                                           SteamIDLobby;                                               // 0x0000   (0x0008)  
	FSteamID                                           SteamIDUserChanged;                                         // 0x0008   (0x0008)  
	FSteamID                                           SteamIDMakingChange;                                        // 0x0010   (0x0008)  
	TArray<ESteamChatMemberStateChange>                ChatMemberStateChange;                                      // 0x0018   (0x0010)  
};

/// Struct /Script/SteamCore.LobbyDataUpdate
/// Size: 0x0018 (0x000000 - 0x000018)
struct FLobbyDataUpdate
{ 
	FSteamID                                           SteamIDLobby;                                               // 0x0000   (0x0008)  
	FSteamID                                           SteamIDMember;                                              // 0x0008   (0x0008)  
	bool                                               bSuccess;                                                   // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0011   (0x0007)  MISSED
};

/// Struct /Script/SteamCore.LobbyEnterData
/// Size: 0x0010 (0x000000 - 0x000010)
struct FLobbyEnterData
{ 
	FSteamID                                           SteamIDLobby;                                               // 0x0000   (0x0008)  
	bool                                               bLocked;                                                    // 0x0008   (0x0001)  
	ESteamChatRoomEnterResponse                        ChatRoomEnterResponse;                                      // 0x0009   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x000A   (0x0006)  MISSED
};

/// Struct /Script/SteamCore.LobbyGameCreated
/// Size: 0x0028 (0x000000 - 0x000028)
struct FLobbyGameCreated
{ 
	FSteamID                                           SteamIDLobby;                                               // 0x0000   (0x0008)  
	FSteamID                                           SteamIDGameServer;                                          // 0x0008   (0x0008)  
	SDK_UNDEFINED(16,2729) /* FString */               __um(IP);                                                   // 0x0010   (0x0010)  
	int32_t                                            Port;                                                       // 0x0020   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0024   (0x0004)  MISSED
};

/// Struct /Script/SteamCore.SteamGameID
/// Size: 0x0008 (0x000000 - 0x000008)
struct FSteamGameID
{ 
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0000   (0x0008)  MISSED
};

/// Struct /Script/SteamCore.LobbyInviteData
/// Size: 0x0018 (0x000000 - 0x000018)
struct FLobbyInviteData
{ 
	FSteamID                                           SteamIDUser;                                                // 0x0000   (0x0008)  
	FSteamID                                           SteamIDLobby;                                               // 0x0008   (0x0008)  
	FSteamGameID                                       GameID;                                                     // 0x0010   (0x0008)  
};

/// Struct /Script/SteamCore.LobbyKickedData
/// Size: 0x0018 (0x000000 - 0x000018)
struct FLobbyKickedData
{ 
	FSteamID                                           SteamIDLobby;                                               // 0x0000   (0x0008)  
	FSteamID                                           SteamIDAdmin;                                               // 0x0008   (0x0008)  
	bool                                               bKickedDueToDisconnect;                                     // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0011   (0x0007)  MISSED
};

/// Struct /Script/SteamCore.LowBatteryPower
/// Size: 0x0004 (0x000000 - 0x000004)
struct FLowBatteryPower
{ 
	int32_t                                            MinutesBatteryLeft;                                         // 0x0000   (0x0004)  
};

/// Struct /Script/SteamCore.MicroTxnAuthorizationResponse
/// Size: 0x0020 (0x000000 - 0x000020)
struct FMicroTxnAuthorizationResponse
{ 
	int32_t                                            AppID;                                                      // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	SDK_UNDEFINED(16,2730) /* FString */               __um(OrderID);                                              // 0x0008   (0x0010)  
	bool                                               bAuthorized;                                                // 0x0018   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0019   (0x0007)  MISSED
};

/// Struct /Script/SteamCore.P2PSessionConnectFail
/// Size: 0x0010 (0x000000 - 0x000010)
struct FP2PSessionConnectFail
{ 
	FSteamID                                           SteamIDRemote;                                              // 0x0000   (0x0008)  
	ESteamP2PSessionError                              P2PSessionError;                                            // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0009   (0x0007)  MISSED
};

/// Struct /Script/SteamCore.P2PSessionRequest
/// Size: 0x0008 (0x000000 - 0x000008)
struct FP2PSessionRequest
{ 
	FSteamID                                           SteamIDRemote;                                              // 0x0000   (0x0008)  
};

/// Struct /Script/SteamCore.PersonaStateChange
/// Size: 0x0018 (0x000000 - 0x000018)
struct FPersonaStateChange
{ 
	FSteamID                                           SteamID;                                                    // 0x0000   (0x0008)  
	TArray<ESteamPersonaChange>                        Flags;                                                      // 0x0008   (0x0010)  
};

/// Struct /Script/SteamCore.SteamServerAddr
/// Size: 0x0038 (0x000000 - 0x000038)
struct FSteamServerAddr
{ 
	SDK_UNDEFINED(16,2731) /* FString */               __um(IP);                                                   // 0x0000   (0x0010)  
	int32_t                                            Port;                                                       // 0x0010   (0x0004)  
	int32_t                                            QueryPort;                                                  // 0x0014   (0x0004)  
	SDK_UNDEFINED(16,2732) /* FString */               __um(ConnectionAddressString);                              // 0x0018   (0x0010)  
	SDK_UNDEFINED(16,2733) /* FString */               __um(SteamP2PAddr);                                         // 0x0028   (0x0010)  
};

/// Struct /Script/SteamCore.GameServerItem
/// Size: 0x00B0 (0x000000 - 0x0000B0)
struct FGameServerItem
{ 
	SDK_UNDEFINED(16,2734) /* FString */               __um(ServerName);                                           // 0x0000   (0x0010)  
	SDK_UNDEFINED(16,2735) /* FString */               __um(MapName);                                              // 0x0010   (0x0010)  
	SDK_UNDEFINED(16,2736) /* FString */               __um(GameDescription);                                      // 0x0020   (0x0010)  
	SDK_UNDEFINED(16,2737) /* FString */               __um(GameTags);                                             // 0x0030   (0x0010)  
	FSteamServerAddr                                   SteamServerAddr;                                            // 0x0040   (0x0038)  
	int32_t                                            Ping;                                                       // 0x0078   (0x0004)  
	int32_t                                            Players;                                                    // 0x007C   (0x0004)  
	int32_t                                            MaxPlayers;                                                 // 0x0080   (0x0004)  
	int32_t                                            BotPlayers;                                                 // 0x0084   (0x0004)  
	int32_t                                            ServerVersion;                                              // 0x0088   (0x0004)  
	bool                                               bPassword;                                                  // 0x008C   (0x0001)  
	bool                                               BSecure;                                                    // 0x008D   (0x0001)  
	unsigned char                                      UnknownData00_6[0x22];                                      // 0x008E   (0x0022)  MISSED
};

/// Struct /Script/SteamCore.PlaybackStatusHasChanged
/// Size: 0x0001 (0x000000 - 0x000001)
struct FPlaybackStatusHasChanged
{ 
	unsigned char                                      UnknownData00_1[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/SteamCore.RemoteStoragePublishedFileSubscribed
/// Size: 0x0010 (0x000000 - 0x000010)
struct FRemoteStoragePublishedFileSubscribed
{ 
	FPublishedFileID                                   PublishedFileID;                                            // 0x0000   (0x0008)  
	int32_t                                            AppID;                                                      // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
};

/// Struct /Script/SteamCore.RemoteStoragePublishedFileUnsubscribed
/// Size: 0x0010 (0x000000 - 0x000010)
struct FRemoteStoragePublishedFileUnsubscribed
{ 
	FPublishedFileID                                   PublishedFileID;                                            // 0x0000   (0x0008)  
	int32_t                                            AppID;                                                      // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
};

/// Struct /Script/SteamCore.RemoteStorageSubscribePublishedFileResult
/// Size: 0x0010 (0x000000 - 0x000010)
struct FRemoteStorageSubscribePublishedFileResult
{ 
	ESteamResult                                       Result;                                                     // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0001   (0x0007)  MISSED
	FPublishedFileID                                   PublishedFileID;                                            // 0x0008   (0x0008)  
};

/// Struct /Script/SteamCore.RemoteStorageUnsubscribePublishedFileResult
/// Size: 0x0010 (0x000000 - 0x000010)
struct FRemoteStorageUnsubscribePublishedFileResult
{ 
	ESteamResult                                       Result;                                                     // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0001   (0x0007)  MISSED
	FPublishedFileID                                   PublishedFileID;                                            // 0x0008   (0x0008)  
};

/// Struct /Script/SteamCore.RemoveAppDependencyResult
/// Size: 0x0018 (0x000000 - 0x000018)
struct FRemoveAppDependencyResult
{ 
	ESteamResult                                       Result;                                                     // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0001   (0x0007)  MISSED
	FPublishedFileID                                   PublishedFileID;                                            // 0x0008   (0x0008)  
	int32_t                                            AppID;                                                      // 0x0010   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0014   (0x0004)  MISSED
};

/// Struct /Script/SteamCore.RemoveUGCDependencyResult
/// Size: 0x0018 (0x000000 - 0x000018)
struct FRemoveUGCDependencyResult
{ 
	ESteamResult                                       Result;                                                     // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0001   (0x0007)  MISSED
	FPublishedFileID                                   PublishedFileID;                                            // 0x0008   (0x0008)  
	FPublishedFileID                                   ChildPublishedFileId;                                       // 0x0010   (0x0008)  
};

/// Struct /Script/SteamCore.SteamInventoryEligiblePromoItemDefIDs
/// Size: 0x0018 (0x000000 - 0x000018)
struct FSteamInventoryEligiblePromoItemDefIDs
{ 
	ESteamResult                                       Result;                                                     // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0001   (0x0007)  MISSED
	FSteamID                                           SteamID;                                                    // 0x0008   (0x0008)  
	int32_t                                            NumEligiblePromoItemDefs;                                   // 0x0010   (0x0004)  
	bool                                               bCachedData;                                                // 0x0014   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0015   (0x0003)  MISSED
};

/// Struct /Script/SteamCore.EncryptedAppTicketResponse
/// Size: 0x0001 (0x000000 - 0x000001)
struct FEncryptedAppTicketResponse
{ 
	ESteamResult                                       Result;                                                     // 0x0000   (0x0001)  
};

/// Struct /Script/SteamCore.GlobalAchievementPercentagesReady
/// Size: 0x0010 (0x000000 - 0x000010)
struct FGlobalAchievementPercentagesReady
{ 
	FSteamGameID                                       GameID;                                                     // 0x0000   (0x0008)  
	ESteamResult                                       Result;                                                     // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0009   (0x0007)  MISSED
};

/// Struct /Script/SteamCore.GlobalStatsReceived
/// Size: 0x0010 (0x000000 - 0x000010)
struct FGlobalStatsReceived
{ 
	FSteamGameID                                       GameID;                                                     // 0x0000   (0x0008)  
	ESteamResult                                       Result;                                                     // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0009   (0x0007)  MISSED
};

/// Struct /Script/SteamCore.LobbyMatchList
/// Size: 0x0004 (0x000000 - 0x000004)
struct FLobbyMatchList
{ 
	int32_t                                            LobbiesMatching;                                            // 0x0000   (0x0004)  
};

/// Struct /Script/SteamCore.RequestUserStatsData
/// Size: 0x0018 (0x000000 - 0x000018)
struct FRequestUserStatsData
{ 
	FSteamGameID                                       GameID;                                                     // 0x0000   (0x0008)  
	ESteamResult                                       Result;                                                     // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0009   (0x0007)  MISSED
	FSteamID                                           SteamIDUser;                                                // 0x0010   (0x0008)  
};

/// Struct /Script/SteamCore.ReservationNotificationData
/// Size: 0x0010 (0x000000 - 0x000010)
struct FReservationNotificationData
{ 
	FPartyBeaconID                                     BeaconID;                                                   // 0x0000   (0x0008)  
	FSteamID                                           SteamIDJoiner;                                              // 0x0008   (0x0008)  
};

/// Struct /Script/SteamCore.ScreenshotHandle
/// Size: 0x0004 (0x000000 - 0x000004)
struct FScreenshotHandle
{ 
	unsigned char                                      UnknownData00_1[0x4];                                       // 0x0000   (0x0004)  MISSED
};

/// Struct /Script/SteamCore.ScreenshotReady
/// Size: 0x0008 (0x000000 - 0x000008)
struct FScreenshotReady
{ 
	FScreenshotHandle                                  Handle;                                                     // 0x0000   (0x0004)  
	ESteamResult                                       Result;                                                     // 0x0004   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0005   (0x0003)  MISSED
};

/// Struct /Script/SteamCore.ScreenshotRequested
/// Size: 0x0001 (0x000000 - 0x000001)
struct FScreenshotRequested
{ 
	unsigned char                                      UnknownData00_1[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/SteamCore.UGCQueryHandle
/// Size: 0x0008 (0x000000 - 0x000008)
struct FUGCQueryHandle
{ 
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0000   (0x0008)  MISSED
};

/// Struct /Script/SteamCore.SteamUGCQueryCompleted
/// Size: 0x0018 (0x000000 - 0x000018)
struct FSteamUGCQueryCompleted
{ 
	FUGCQueryHandle                                    Handle;                                                     // 0x0000   (0x0008)  
	ESteamResult                                       Result;                                                     // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0009   (0x0003)  MISSED
	int32_t                                            NumResultsReturned;                                         // 0x000C   (0x0004)  
	int32_t                                            TotalMatchingResults;                                       // 0x0010   (0x0004)  
	bool                                               bCachedData;                                                // 0x0014   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0015   (0x0003)  MISSED
};

/// Struct /Script/SteamCore.GSStatsReceived
/// Size: 0x0010 (0x000000 - 0x000010)
struct FGSStatsReceived
{ 
	ESteamResult                                       Result;                                                     // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0001   (0x0007)  MISSED
	FSteamID                                           SteamIDUser;                                                // 0x0008   (0x0008)  
};

/// Struct /Script/SteamCore.GameServerRule
/// Size: 0x0020 (0x000000 - 0x000020)
struct FGameServerRule
{ 
	SDK_UNDEFINED(16,2738) /* FString */               __um(Name);                                                 // 0x0000   (0x0010)  
	SDK_UNDEFINED(16,2739) /* FString */               __um(Value);                                                // 0x0010   (0x0010)  
};

/// Struct /Script/SteamCore.GSStatsStored
/// Size: 0x0010 (0x000000 - 0x000010)
struct FGSStatsStored
{ 
	ESteamResult                                       Result;                                                     // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0001   (0x0007)  MISSED
	FSteamID                                           SteamIDUser;                                                // 0x0008   (0x0008)  
};

/// Struct /Script/SteamCore.SetPersonaNameResponse
/// Size: 0x0003 (0x000000 - 0x000003)
struct FSetPersonaNameResponse
{ 
	ESteamResult                                       Result;                                                     // 0x0000   (0x0001)  
	bool                                               bSuccess;                                                   // 0x0001   (0x0001)  
	bool                                               bLocalSuccess;                                              // 0x0002   (0x0001)  
};

/// Struct /Script/SteamCore.SetUserItemVoteResult
/// Size: 0x0010 (0x000000 - 0x000010)
struct FSetUserItemVoteResult
{ 
	FPublishedFileID                                   PublishedFileID;                                            // 0x0000   (0x0008)  
	ESteamResult                                       Result;                                                     // 0x0008   (0x0001)  
	bool                                               bVoteUp;                                                    // 0x0009   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x000A   (0x0006)  MISSED
};

/// Struct /Script/SteamCore.StartPlaytimeTrackingResult
/// Size: 0x0001 (0x000000 - 0x000001)
struct FStartPlaytimeTrackingResult
{ 
	ESteamResult                                       Result;                                                     // 0x0000   (0x0001)  
};

/// Struct /Script/SteamCore.SteamAppInstalled
/// Size: 0x0004 (0x000000 - 0x000004)
struct FSteamAppInstalled
{ 
	int32_t                                            AppID;                                                      // 0x0000   (0x0004)  
};

/// Struct /Script/SteamCore.SteamAppUninstalled
/// Size: 0x0004 (0x000000 - 0x000004)
struct FSteamAppUninstalled
{ 
	int32_t                                            AppID;                                                      // 0x0000   (0x0004)  
};

/// Struct /Script/SteamCore.SteamInventoryResult
/// Size: 0x0004 (0x000000 - 0x000004)
struct FSteamInventoryResult
{ 
	int32_t                                            Value;                                                      // 0x0000   (0x0004)  
};

/// Struct /Script/SteamCore.SteamInventoryFullUpdate
/// Size: 0x0004 (0x000000 - 0x000004)
struct FSteamInventoryFullUpdate
{ 
	FSteamInventoryResult                              Handle;                                                     // 0x0000   (0x0004)  
};

/// Struct /Script/SteamCore.SteamInventoryRequestPricesResult
/// Size: 0x0018 (0x000000 - 0x000018)
struct FSteamInventoryRequestPricesResult
{ 
	ESteamResult                                       Result;                                                     // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0001   (0x0007)  MISSED
	SDK_UNDEFINED(16,2740) /* FString */               __um(Currency);                                             // 0x0008   (0x0010)  
};

/// Struct /Script/SteamCore.SteamInventoryResultReady
/// Size: 0x0008 (0x000000 - 0x000008)
struct FSteamInventoryResultReady
{ 
	FSteamInventoryResult                              Handle;                                                     // 0x0000   (0x0004)  
	ESteamResult                                       Result;                                                     // 0x0004   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0005   (0x0003)  MISSED
};

/// Struct /Script/SteamCore.SteamInventoryStartPurchaseResult
/// Size: 0x0028 (0x000000 - 0x000028)
struct FSteamInventoryStartPurchaseResult
{ 
	ESteamResult                                       Result;                                                     // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0001   (0x0007)  MISSED
	SDK_UNDEFINED(16,2741) /* FString */               __um(OrderID);                                              // 0x0008   (0x0010)  
	SDK_UNDEFINED(16,2742) /* FString */               __um(TransactionId);                                        // 0x0018   (0x0010)  
};

/// Struct /Script/SteamCore.SteamRemotePlaySessionConnected
/// Size: 0x0004 (0x000000 - 0x000004)
struct FSteamRemotePlaySessionConnected
{ 
	int32_t                                            SessionID;                                                  // 0x0000   (0x0004)  
};

/// Struct /Script/SteamCore.SteamRemotePlaySessionDisconnected
/// Size: 0x0004 (0x000000 - 0x000004)
struct FSteamRemotePlaySessionDisconnected
{ 
	int32_t                                            SessionID;                                                  // 0x0000   (0x0004)  
};

/// Struct /Script/SteamCore.SteamServerConnectFailure
/// Size: 0x0002 (0x000000 - 0x000002)
struct FSteamServerConnectFailure
{ 
	ESteamResult                                       Result;                                                     // 0x0000   (0x0001)  
	bool                                               bStillRetrying;                                             // 0x0001   (0x0001)  
};

/// Struct /Script/SteamCore.SteamServersConnected
/// Size: 0x0001 (0x000000 - 0x000001)
struct FSteamServersConnected
{ 
	unsigned char                                      UnknownData00_1[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/SteamCore.SteamServersDisconnected
/// Size: 0x0001 (0x000000 - 0x000001)
struct FSteamServersDisconnected
{ 
	ESteamResult                                       Result;                                                     // 0x0000   (0x0001)  
};

/// Struct /Script/SteamCore.SteamShutdown
/// Size: 0x0001 (0x000000 - 0x000001)
struct FSteamShutdown
{ 
	unsigned char                                      UnknownData00_1[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/SteamCore.StopPlaytimeTrackingResult
/// Size: 0x0001 (0x000000 - 0x000001)
struct FStopPlaytimeTrackingResult
{ 
	ESteamResult                                       Result;                                                     // 0x0000   (0x0001)  
};

/// Struct /Script/SteamCore.StoreAuthURLResponse
/// Size: 0x0010 (0x000000 - 0x000010)
struct FStoreAuthURLResponse
{ 
	SDK_UNDEFINED(16,2743) /* FString */               __um(URL);                                                  // 0x0000   (0x0010)  
};

/// Struct /Script/SteamCore.SubmitItemUpdateResult
/// Size: 0x0010 (0x000000 - 0x000010)
struct FSubmitItemUpdateResult
{ 
	ESteamResult                                       Result;                                                     // 0x0000   (0x0001)  
	bool                                               bUserNeedsToAcceptWorkshopLegalAgreement;                   // 0x0001   (0x0001)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x0002   (0x0006)  MISSED
	FPublishedFileID                                   PublishedFileID;                                            // 0x0008   (0x0008)  
};

/// Struct /Script/SteamCore.RemoteStorageDownloadUGCResult
/// Size: 0x0030 (0x000000 - 0x000030)
struct FRemoteStorageDownloadUGCResult
{ 
	ESteamResult                                       Result;                                                     // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0001   (0x0007)  MISSED
	FSteamUGCHandle                                    FileHandle;                                                 // 0x0008   (0x0008)  
	int32_t                                            AppID;                                                      // 0x0010   (0x0004)  
	int32_t                                            SizeInBytes;                                                // 0x0014   (0x0004)  
	SDK_UNDEFINED(16,2744) /* FString */               __um(Filename);                                             // 0x0018   (0x0010)  
	FSteamID                                           SteamIDOwner;                                               // 0x0028   (0x0008)  
};

/// Struct /Script/SteamCore.LeaderboardScoreUploaded
/// Size: 0x0020 (0x000000 - 0x000020)
struct FLeaderboardScoreUploaded
{ 
	bool                                               bSuccess;                                                   // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0001   (0x0007)  MISSED
	FSteamLeaderboard                                  SteamLeaderboard;                                           // 0x0008   (0x0008)  
	int32_t                                            Score;                                                      // 0x0010   (0x0004)  
	bool                                               bScoreChanged;                                              // 0x0014   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0015   (0x0003)  MISSED
	int32_t                                            GlobalRankNew;                                              // 0x0018   (0x0004)  
	int32_t                                            GlobalRankPrevious;                                         // 0x001C   (0x0004)  
};

/// Struct /Script/SteamCore.UserAchievementIconFetched
/// Size: 0x0030 (0x000000 - 0x000030)
struct FUserAchievementIconFetched
{ 
	FSteamGameID                                       GameID;                                                     // 0x0000   (0x0008)  
	SDK_UNDEFINED(16,2745) /* FString */               __um(AchievementName);                                      // 0x0008   (0x0010)  
	bool                                               bAchieved;                                                  // 0x0018   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0019   (0x0007)  MISSED
	class UTexture2D*                                  Icon;                                                       // 0x0020   (0x0008)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0028   (0x0008)  MISSED
};

/// Struct /Script/SteamCore.UserAchievementStored
/// Size: 0x0028 (0x000000 - 0x000028)
struct FUserAchievementStored
{ 
	FSteamGameID                                       GameID;                                                     // 0x0000   (0x0008)  
	bool                                               bGroupAchievement;                                          // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0009   (0x0007)  MISSED
	SDK_UNDEFINED(16,2746) /* FString */               __um(AchievementName);                                      // 0x0010   (0x0010)  
	int32_t                                            CurrentProgress;                                            // 0x0020   (0x0004)  
	int32_t                                            MaxProgress;                                                // 0x0024   (0x0004)  
};

/// Struct /Script/SteamCore.UserStatsReceived
/// Size: 0x0018 (0x000000 - 0x000018)
struct FUserStatsReceived
{ 
	FSteamID                                           GameID;                                                     // 0x0000   (0x0008)  
	ESteamResult                                       Result;                                                     // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0009   (0x0007)  MISSED
	FSteamID                                           SteamID;                                                    // 0x0010   (0x0008)  
};

/// Struct /Script/SteamCore.UserStatsStored
/// Size: 0x0010 (0x000000 - 0x000010)
struct FUserStatsStored
{ 
	FSteamGameID                                       GameID;                                                     // 0x0000   (0x0008)  
	ESteamResult                                       Result;                                                     // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0009   (0x0007)  MISSED
};

/// Struct /Script/SteamCore.UserStatsUnloaded
/// Size: 0x0008 (0x000000 - 0x000008)
struct FUserStatsUnloaded
{ 
	FSteamID                                           SteamIDUser;                                                // 0x0000   (0x0008)  
};

/// Struct /Script/SteamCore.VolumeHasChanged
/// Size: 0x0004 (0x000000 - 0x000004)
struct FVolumeHasChanged
{ 
	float                                              Volume;                                                     // 0x0000   (0x0004)  
};

/// Struct /Script/SteamCore.RequestPlayersForGameFinalResultCallback
/// Size: 0x0028 (0x000000 - 0x000028)
struct FRequestPlayersForGameFinalResultCallback
{ 
	ESteamResult                                       Result;                                                     // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0001   (0x0007)  MISSED
	SDK_UNDEFINED(16,2747) /* FString */               __um(SearchID);                                             // 0x0008   (0x0010)  
	SDK_UNDEFINED(16,2748) /* FString */               __um(UniqueGameID);                                         // 0x0018   (0x0010)  
};

/// Struct /Script/SteamCore.RequestPlayersForGameProgressCallback
/// Size: 0x0018 (0x000000 - 0x000018)
struct FRequestPlayersForGameProgressCallback
{ 
	ESteamResult                                       Result;                                                     // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0001   (0x0007)  MISSED
	SDK_UNDEFINED(16,2749) /* FString */               __um(SearchID);                                             // 0x0008   (0x0010)  
};

/// Struct /Script/SteamCore.RequestPlayersForGameResultCallback
/// Size: 0x0050 (0x000000 - 0x000050)
struct FRequestPlayersForGameResultCallback
{ 
	ESteamResult                                       Result;                                                     // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0001   (0x0007)  MISSED
	SDK_UNDEFINED(16,2750) /* FString */               __um(SearchID);                                             // 0x0008   (0x0010)  
	FSteamID                                           SteamIDPlayerFound;                                         // 0x0018   (0x0008)  
	FSteamID                                           SteamIDLobby;                                               // 0x0020   (0x0008)  
	ESteamPlayerAcceptState                            PlayerAcceptState;                                          // 0x0028   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0029   (0x0003)  MISSED
	int32_t                                            PlayerIndex;                                                // 0x002C   (0x0004)  
	int32_t                                            TotalPlayersFound;                                          // 0x0030   (0x0004)  
	int32_t                                            TotalPlayersAcceptedGame;                                   // 0x0034   (0x0004)  
	int32_t                                            SuggestedTeamIndex;                                         // 0x0038   (0x0004)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x003C   (0x0004)  MISSED
	SDK_UNDEFINED(16,2751) /* FString */               __um(UniqueGameID);                                         // 0x0040   (0x0010)  
};

/// Struct /Script/SteamCore.SearchForGameProgressCallback
/// Size: 0x0030 (0x000000 - 0x000030)
struct FSearchForGameProgressCallback
{ 
	SDK_UNDEFINED(16,2752) /* FString */               __um(SearchID);                                             // 0x0000   (0x0010)  
	ESteamResult                                       Result;                                                     // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0011   (0x0007)  MISSED
	FSteamID                                           LobbyID;                                                    // 0x0018   (0x0008)  
	FSteamID                                           SteamIDEndedSearch;                                         // 0x0020   (0x0008)  
	int32_t                                            SecondsRemainingEstimate;                                   // 0x0028   (0x0004)  
	int32_t                                            PlayersSearching;                                           // 0x002C   (0x0004)  
};

/// Struct /Script/SteamCore.SearchForGameResultCallback
/// Size: 0x0030 (0x000000 - 0x000030)
struct FSearchForGameResultCallback
{ 
	SDK_UNDEFINED(16,2753) /* FString */               __um(SearchID);                                             // 0x0000   (0x0010)  
	ESteamResult                                       Result;                                                     // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0011   (0x0003)  MISSED
	int32_t                                            CountPlayersInGame;                                         // 0x0014   (0x0004)  
	int32_t                                            CountAcceptedGame;                                          // 0x0018   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x001C   (0x0004)  MISSED
	FSteamID                                           SteamIDHost;                                                // 0x0020   (0x0008)  
	bool                                               bFinalCallback;                                             // 0x0028   (0x0001)  
	unsigned char                                      UnknownData02_6[0x7];                                       // 0x0029   (0x0007)  MISSED
};

/// Struct /Script/SteamCore.SubmitPlayerResultResultCallback
/// Size: 0x0020 (0x000000 - 0x000020)
struct FSubmitPlayerResultResultCallback
{ 
	ESteamResult                                       Result;                                                     // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0001   (0x0007)  MISSED
	SDK_UNDEFINED(16,2754) /* FString */               __um(UniqueGameID);                                         // 0x0008   (0x0010)  
	FSteamID                                           SteamIDPlayer;                                              // 0x0018   (0x0008)  
};

/// Struct /Script/SteamCore.SteamFriendsGroupID
/// Size: 0x0002 (0x000000 - 0x000002)
struct FSteamFriendsGroupID
{ 
	unsigned char                                      UnknownData00_1[0x2];                                       // 0x0000   (0x0002)  MISSED
};

/// Struct /Script/SteamCore.InputAnalogActionData
/// Size: 0x0010 (0x000000 - 0x000010)
struct FInputAnalogActionData
{ 
	ESteamCoreInputSourceMode                          Mode;                                                       // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              X;                                                          // 0x0004   (0x0004)  
	float                                              Y;                                                          // 0x0008   (0x0004)  
	bool                                               bActive;                                                    // 0x000C   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x000D   (0x0003)  MISSED
};

/// Struct /Script/SteamCore.InputDigitalActionData
/// Size: 0x0002 (0x000000 - 0x000002)
struct FInputDigitalActionData
{ 
	bool                                               bState;                                                     // 0x0000   (0x0001)  
	bool                                               bActive;                                                    // 0x0001   (0x0001)  
};

/// Struct /Script/SteamCore.InputMotionData
/// Size: 0x0028 (0x000000 - 0x000028)
struct FInputMotionData
{ 
	float                                              RotQuatX;                                                   // 0x0000   (0x0004)  
	float                                              RotQuatY;                                                   // 0x0004   (0x0004)  
	float                                              RotQuatZ;                                                   // 0x0008   (0x0004)  
	float                                              RotQuatW;                                                   // 0x000C   (0x0004)  
	float                                              PosAccelX;                                                  // 0x0010   (0x0004)  
	float                                              PosAccelY;                                                  // 0x0014   (0x0004)  
	float                                              PosAccelZ;                                                  // 0x0018   (0x0004)  
	float                                              RotVelX;                                                    // 0x001C   (0x0004)  
	float                                              RotVelY;                                                    // 0x0020   (0x0004)  
	float                                              RotVelZ;                                                    // 0x0024   (0x0004)  
};

/// Struct /Script/SteamCore.InputHandle
/// Size: 0x0008 (0x000000 - 0x000008)
struct FInputHandle
{ 
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0000   (0x0008)  MISSED
};

/// Struct /Script/SteamCore.InputActionSetHandle
/// Size: 0x0008 (0x000000 - 0x000008)
struct FInputActionSetHandle
{ 
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0000   (0x0008)  MISSED
};

/// Struct /Script/SteamCore.InputDigitalActionHandle
/// Size: 0x0008 (0x000000 - 0x000008)
struct FInputDigitalActionHandle
{ 
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0000   (0x0008)  MISSED
};

/// Struct /Script/SteamCore.InputAnalogActionHandle
/// Size: 0x0008 (0x000000 - 0x000008)
struct FInputAnalogActionHandle
{ 
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0000   (0x0008)  MISSED
};

/// Struct /Script/SteamCore.SteamItemInstanceID
/// Size: 0x0008 (0x000000 - 0x000008)
struct FSteamItemInstanceID
{ 
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0000   (0x0008)  MISSED
};

/// Struct /Script/SteamCore.SteamItemDef
/// Size: 0x0004 (0x000000 - 0x000004)
struct FSteamItemDef
{ 
	int32_t                                            Value;                                                      // 0x0000   (0x0004)  
};

/// Struct /Script/SteamCore.SteamItemDetails
/// Size: 0x0020 (0x000000 - 0x000020)
struct FSteamItemDetails
{ 
	FSteamItemInstanceID                               InstanceId;                                                 // 0x0000   (0x0008)  
	FSteamItemDef                                      Definition;                                                 // 0x0008   (0x0004)  
	int32_t                                            Quantity;                                                   // 0x000C   (0x0004)  
	SDK_UNDEFINED(16,2755) /* TArray<TEnumAsByte<ESteamCoreItemFlags>> */ __um(Flags);                             // 0x0010   (0x0010)  
};

/// Struct /Script/SteamCore.SteamP2PSessionState
/// Size: 0x0028 (0x000000 - 0x000028)
struct FSteamP2PSessionState
{ 
	bool                                               bConnectionActive;                                          // 0x0000   (0x0001)  
	bool                                               bConnecting;                                                // 0x0001   (0x0001)  
	ESteamP2PSessionError                              P2PSessionError;                                            // 0x0002   (0x0001)  
	bool                                               bUsingRelay;                                                // 0x0003   (0x0001)  
	int32_t                                            BytesQueuedForSend;                                         // 0x0004   (0x0004)  
	int32_t                                            PacketsQueuedForSend;                                       // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x000C   (0x0004)  MISSED
	SDK_UNDEFINED(16,2756) /* FString */               __um(RemoteIP);                                             // 0x0010   (0x0010)  
	int32_t                                            RemotePort;                                                 // 0x0020   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0024   (0x0004)  MISSED
};

/// Struct /Script/SteamCore.SteamNetworkPingLocation
/// Size: 0x0010 (0x000000 - 0x000010)
struct FSteamNetworkPingLocation
{ 
	SDK_UNDEFINED(16,2757) /* FString */               __um(Location);                                             // 0x0000   (0x0010)  
};

/// Struct /Script/SteamCore.SteamParentalSettingsChanged
/// Size: 0x0001 (0x000000 - 0x000001)
struct FSteamParentalSettingsChanged
{ 
	unsigned char                                      UnknownData00_1[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/SteamCore.SteamPartyBeaconLocation
/// Size: 0x0018 (0x000000 - 0x000018)
struct FSteamPartyBeaconLocation
{ 
	ESteamPartiesBeaconLocationType                    Type;                                                       // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0001   (0x0007)  MISSED
	SDK_UNDEFINED(16,2758) /* FString */               __um(LocationId);                                           // 0x0008   (0x0010)  
};

/// Struct /Script/SteamCore.UGCFileWriteStreamHandle
/// Size: 0x0008 (0x000000 - 0x000008)
struct FUGCFileWriteStreamHandle
{ 
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0000   (0x0008)  MISSED
};

/// Struct /Script/SteamCore.SteamInventoryUpdateHandle
/// Size: 0x0008 (0x000000 - 0x000008)
struct FSteamInventoryUpdateHandle
{ 
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0000   (0x0008)  MISSED
};

/// Struct /Script/SteamCore.HostPingData
/// Size: 0x0010 (0x000000 - 0x000010)
struct FHostPingData
{ 
	SDK_UNDEFINED(16,2759) /* FString */               __um(HostString);                                           // 0x0000   (0x0010)  
};

/// Struct /Script/SteamCore.SteamSessionSearchSetting
/// Size: 0x0020 (0x000000 - 0x000020)
struct FSteamSessionSearchSetting
{ 
	unsigned char                                      UnknownData00_1[0x20];                                      // 0x0000   (0x0020)  MISSED
};

/// Struct /Script/SteamCore.SteamUGCDetails
/// Size: 0x00A8 (0x000000 - 0x0000A8)
struct FSteamUGCDetails
{ 
	FPublishedFileID                                   PublishedFileID;                                            // 0x0000   (0x0008)  
	ESteamResult                                       Result;                                                     // 0x0008   (0x0001)  
	ESteamWorkshopFileType                             FileType;                                                   // 0x0009   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x000A   (0x0002)  MISSED
	int32_t                                            CreatorAppID;                                               // 0x000C   (0x0004)  
	int32_t                                            ConsumerAppID;                                              // 0x0010   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x0014   (0x0004)  MISSED
	SDK_UNDEFINED(16,2760) /* FString */               __um(Title);                                                // 0x0018   (0x0010)  
	SDK_UNDEFINED(16,2761) /* FString */               __um(Description);                                          // 0x0028   (0x0010)  
	FSteamID                                           SteamIDOwner;                                               // 0x0038   (0x0008)  
	int32_t                                            TimeCreated;                                                // 0x0040   (0x0004)  
	int32_t                                            TimeUpdated;                                                // 0x0044   (0x0004)  
	int32_t                                            TimeAddedToUserList;                                        // 0x0048   (0x0004)  
	ESteamRemoteStoragePublishedFileVisibility         Visibility;                                                 // 0x004C   (0x0001)  
	bool                                               bBanned;                                                    // 0x004D   (0x0001)  
	bool                                               bAcceptedForUse;                                            // 0x004E   (0x0001)  
	bool                                               bTagsTruncated;                                             // 0x004F   (0x0001)  
	SDK_UNDEFINED(16,2762) /* TArray<FString> */       __um(Tags);                                                 // 0x0050   (0x0010)  
	FSteamUGCHandle                                    File;                                                       // 0x0060   (0x0008)  
	FSteamUGCHandle                                    PreviewFile;                                                // 0x0068   (0x0008)  
	SDK_UNDEFINED(16,2763) /* FString */               __um(Filename);                                             // 0x0070   (0x0010)  
	int32_t                                            FileSize;                                                   // 0x0080   (0x0004)  
	int32_t                                            PreviewFileSize;                                            // 0x0084   (0x0004)  
	SDK_UNDEFINED(16,2764) /* FString */               __um(URL);                                                  // 0x0088   (0x0010)  
	int32_t                                            VotesUp;                                                    // 0x0098   (0x0004)  
	int32_t                                            VotesDown;                                                  // 0x009C   (0x0004)  
	float                                              Score;                                                      // 0x00A0   (0x0004)  
	int32_t                                            NumChildren;                                                // 0x00A4   (0x0004)  
};

/// Struct /Script/SteamCore.UGCUpdateHandle
/// Size: 0x0008 (0x000000 - 0x000008)
struct FUGCUpdateHandle
{ 
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0000   (0x0008)  MISSED
};

/// Struct /Script/SteamCore.SteamLeaderboardEntry
/// Size: 0x0020 (0x000000 - 0x000020)
struct FSteamLeaderboardEntry
{ 
	FSteamID                                           SteamID;                                                    // 0x0000   (0x0008)  
	int32_t                                            GlobalRank;                                                 // 0x0008   (0x0004)  
	int32_t                                            Score;                                                      // 0x000C   (0x0004)  
	int32_t                                            Details;                                                    // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0014   (0x0004)  MISSED
	FSteamUGCHandle                                    UGCHandle;                                                  // 0x0018   (0x0008)  
};

