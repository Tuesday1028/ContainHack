
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once

/// Enum /Script/LocalFileNetworkReplayStreaming.ELocalFileReplayResult
/// Size: 0x09
enum class ELocalFileReplayResult : uint8_t
{
	ELocalFileReplayResult__Success                                                  = 0,
	ELocalFileReplayResult__InvalidReplayInfo                                        = 1,
	ELocalFileReplayResult__StreamChunkIndexMismatch                                 = 2,
	ELocalFileReplayResult__DecompressBuffer                                         = 3,
	ELocalFileReplayResult__CompressionNotSupported                                  = 4,
	ELocalFileReplayResult__DecryptBuffer                                            = 5,
	ELocalFileReplayResult__EncryptionNotSupported                                   = 6,
	ELocalFileReplayResult__Unknown                                                  = 7,
	ELocalFileReplayResult__ELocalFileReplayResult_MAX                               = 8
};

