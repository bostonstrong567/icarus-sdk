// /Script/AdvancedSessions.BPOnlineRecentPlayer
// size 0x50, declared in Icarus/Intermediate/Build/Win64/IcarusServer/Inc/AdvancedSessions/GetRecentPlayersCallbackProxy.generated.h

USTRUCT()
struct FBPOnlineRecentPlayer : public FBPOnlineUser
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FString LastSeen;  // 0x0040, size 0x10
};
