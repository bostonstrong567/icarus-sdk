// /Script/AdvancedSessions.BPFriendPresenceInfo
// size 0x18, declared in Icarus/Plugins/AdvancedSessions/Source/AdvancedSessions/Classes/BlueprintDataDefinitions.h

USTRUCT()
struct FBPFriendPresenceInfo
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bIsOnline;  // 0x0000, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bIsPlaying;  // 0x0001, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bIsPlayingThisGame;  // 0x0002, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bIsJoinable;  // 0x0003, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bHasVoiceSupport;  // 0x0004, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) EBPOnlinePresenceState PresenceState;  // 0x0005, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FString StatusString;  // 0x0008, size 0x10
};
