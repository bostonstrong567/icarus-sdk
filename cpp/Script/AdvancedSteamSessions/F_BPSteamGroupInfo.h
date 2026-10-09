// /Script/AdvancedSteamSessions.BPSteamGroupInfo
// size 0x50, declared in Icarus/Plugins/AdvancedSteamSessions/Source/AdvancedSteamSessions/Classes/AdvancedSteamFriendsLibrary.h

USTRUCT()
struct FBPSteamGroupInfo
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FBPUniqueNetId GroupID;  // 0x0000, size 0x20
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FString GroupName;  // 0x0020, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FString GroupTag;  // 0x0030, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadOnly) int32 numOnline;  // 0x0040, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) int32 numInGame;  // 0x0044, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) int32 numChatting;  // 0x0048, size 0x4
};
