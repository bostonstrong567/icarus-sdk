// /Script/OnlineSubsystemIcarus.MatchMakingRequest
// size 0x20, declared in Icarus/Plugins/OnlineSubsystemIcarus/Source/OnlineSubsystemIcarus/Public/OnlineSubsystemIcarusTypes.h

USTRUCT()
struct FMatchMakingRequest
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FString PlayerName;  // 0x0000, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Score;  // 0x0010, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName MatchCode;  // 0x0014, size 0x8
};
