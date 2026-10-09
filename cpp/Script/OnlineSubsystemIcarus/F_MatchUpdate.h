// /Script/OnlineSubsystemIcarus.MatchUpdate
// size 0x80, declared in Icarus/Plugins/OnlineSubsystemIcarus/Source/OnlineSubsystemIcarus/Public/OnlineSubsystemIcarusTypes.h

USTRUCT()
struct FMatchUpdate
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FString MatchId;  // 0x0000, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FMatchMakingRequest MatchReq;  // 0x0010, size 0x20
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bMatchFound;  // 0x0030, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ELobbyStatus LobbyStatus;  // 0x0031, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FPlayerID> PlayerIds;  // 0x0038, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FConnectionString ConnectionString;  // 0x0048, size 0x38
};
