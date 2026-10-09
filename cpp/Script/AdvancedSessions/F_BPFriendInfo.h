// /Script/AdvancedSessions.BPFriendInfo
// size 0x68, declared in Icarus/Plugins/AdvancedSessions/Source/AdvancedSessions/Classes/BlueprintDataDefinitions.h

USTRUCT()
struct FBPFriendInfo
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FString DisplayName;  // 0x0000, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FString RealName;  // 0x0010, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) EBPOnlinePresenceState OnlineState;  // 0x0020, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FBPUniqueNetId UniqueNetId;  // 0x0028, size 0x20
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bIsPlayingSameGame;  // 0x0048, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FBPFriendPresenceInfo PresenceInfo;  // 0x0050, size 0x18
};
