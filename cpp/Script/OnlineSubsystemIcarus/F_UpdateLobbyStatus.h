// /Script/OnlineSubsystemIcarus.UpdateLobbyStatus
// size 0x18, declared in Icarus/Plugins/OnlineSubsystemIcarus/Source/OnlineSubsystemIcarus/Public/OnlineSubsystemIcarusTypes.h

USTRUCT()
struct FUpdateLobbyStatus
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FString MatchId;  // 0x0000, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ELobbyStatus LobbyStatus;  // 0x0010, size 0x1
};
