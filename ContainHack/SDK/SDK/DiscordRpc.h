
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: CoreUObject

/// Enum /Script/DiscordRpc.EDiscordJoinResponseCodes
/// Size: 0x04
enum class EDiscordJoinResponseCodes : uint8_t
{
	EDiscordJoinResponseCodes__DISCORD_REPLY_NO                                      = 0,
	EDiscordJoinResponseCodes__DISCORD_REPLY_YES                                     = 1,
	EDiscordJoinResponseCodes__DISCORD_REPLY_IGNORE                                  = 2,
	EDiscordJoinResponseCodes__DISCORD_REPLY_MAX                                     = 3
};

/// Struct /Script/DiscordRpc.DiscordRichPresence
/// Size: 0x00B8 (0x000000 - 0x0000B8)
struct FDiscordRichPresence
{ 
	SDK_UNDEFINED(16,1205) /* FString */               __um(State);                                                // 0x0000   (0x0010)  
	SDK_UNDEFINED(16,1206) /* FString */               __um(Details);                                              // 0x0010   (0x0010)  
	int32_t                                            startTimestamp;                                             // 0x0020   (0x0004)  
	int32_t                                            endTimestamp;                                               // 0x0024   (0x0004)  
	SDK_UNDEFINED(16,1207) /* FString */               __um(largeImageKey);                                        // 0x0028   (0x0010)  
	SDK_UNDEFINED(16,1208) /* FString */               __um(largeImageText);                                       // 0x0038   (0x0010)  
	SDK_UNDEFINED(16,1209) /* FString */               __um(smallImageKey);                                        // 0x0048   (0x0010)  
	SDK_UNDEFINED(16,1210) /* FString */               __um(smallImageText);                                       // 0x0058   (0x0010)  
	SDK_UNDEFINED(16,1211) /* FString */               __um(partyId);                                              // 0x0068   (0x0010)  
	int32_t                                            partySize;                                                  // 0x0078   (0x0004)  
	int32_t                                            partyMax;                                                   // 0x007C   (0x0004)  
	SDK_UNDEFINED(16,1212) /* FString */               __um(matchSecret);                                          // 0x0080   (0x0010)  
	SDK_UNDEFINED(16,1213) /* FString */               __um(joinSecret);                                           // 0x0090   (0x0010)  
	SDK_UNDEFINED(16,1214) /* FString */               __um(spectateSecret);                                       // 0x00A0   (0x0010)  
	bool                                               Instance;                                                   // 0x00B0   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x00B1   (0x0007)  MISSED
};

/// Class /Script/DiscordRpc.DiscordRpc
/// Size: 0x0120 (0x000028 - 0x000148)
class UDiscordRpc : public UObject
{ 
public:
	bool                                               IsConnected;                                                // 0x0028   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0029   (0x0007)  MISSED
	SDK_UNDEFINED(16,1215) /* FMulticastInlineDelegate */ __um(OnConnected);                                       // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,1216) /* FMulticastInlineDelegate */ __um(OnDisconnected);                                    // 0x0040   (0x0010)  
	SDK_UNDEFINED(16,1217) /* FMulticastInlineDelegate */ __um(OnErrored);                                         // 0x0050   (0x0010)  
	SDK_UNDEFINED(16,1218) /* FMulticastInlineDelegate */ __um(OnJoin);                                            // 0x0060   (0x0010)  
	SDK_UNDEFINED(16,1219) /* FMulticastInlineDelegate */ __um(OnSpectate);                                        // 0x0070   (0x0010)  
	SDK_UNDEFINED(16,1220) /* FMulticastInlineDelegate */ __um(OnJoinRequest);                                     // 0x0080   (0x0010)  
	FDiscordRichPresence                               RichPresence;                                               // 0x0090   (0x00B8)  


	/// Functions
	// Function /Script/DiscordRpc.DiscordRpc.UpdatePresence
	// void UpdatePresence();                                                                                                // [0x1751670] Final|Native|Public|BlueprintCallable 
	// Function /Script/DiscordRpc.DiscordRpc.Shutdown
	// void Shutdown();                                                                                                      // [0x1751640] Final|Native|Public|BlueprintCallable 
	// Function /Script/DiscordRpc.DiscordRpc.RunCallbacks
	// void RunCallbacks();                                                                                                  // [0x1751620] Final|Native|Public|BlueprintCallable 
	// Function /Script/DiscordRpc.DiscordRpc.Respond
	// void Respond(FString UserId, int32_t Reply);                                                                          // [0x1751460] Final|Native|Public|BlueprintCallable 
	// Function /Script/DiscordRpc.DiscordRpc.Initialize
	// void Initialize(FString applicationId, bool autoRegister, FString optionalSteamId);                                   // [0x1751220] Final|Native|Public|BlueprintCallable 
	// Function /Script/DiscordRpc.DiscordRpc.ClearPresence
	// void ClearPresence();                                                                                                 // [0x1751200] Final|Native|Public|BlueprintCallable 
};

/// Struct /Script/DiscordRpc.DiscordUserData
/// Size: 0x0040 (0x000000 - 0x000040)
struct FDiscordUserData
{ 
	SDK_UNDEFINED(16,1221) /* FString */               __um(UserId);                                               // 0x0000   (0x0010)  
	SDK_UNDEFINED(16,1222) /* FString */               __um(username);                                             // 0x0010   (0x0010)  
	SDK_UNDEFINED(16,1223) /* FString */               __um(discriminator);                                        // 0x0020   (0x0010)  
	SDK_UNDEFINED(16,1224) /* FString */               __um(avatar);                                               // 0x0030   (0x0010)  
};

