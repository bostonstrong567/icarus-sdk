// /Script/CoreUObject.JoinabilitySettings
// size 0x14, declared in Engine/Source/Runtime/CoreUObject/Public/UObject/CoreOnline.h

USTRUCT()
struct FJoinabilitySettings
{
    UPROPERTY() FName SessionName;  // 0x0000, size 0x8
    UPROPERTY() bool bPublicSearchable;  // 0x0008, size 0x1
    UPROPERTY() bool bAllowInvites;  // 0x0009, size 0x1
    UPROPERTY() bool bJoinViaPresence;  // 0x000A, size 0x1
    UPROPERTY() bool bJoinViaPresenceFriendsOnly;  // 0x000B, size 0x1
    UPROPERTY() int32 MaxPlayers;  // 0x000C, size 0x4
    UPROPERTY() int32 MaxPartySize;  // 0x0010, size 0x4
};
