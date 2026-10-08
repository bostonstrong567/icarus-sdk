// /Script/OnlineSubsystemIcarus.UpdateConnectionString
// size 0x48, declared in Icarus/Plugins/OnlineSubsystemIcarus/Source/OnlineSubsystemIcarus/Public/OnlineSubsystemIcarusTypes.h

USTRUCT()
struct FUpdateConnectionString
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FString MatchId;  // 0x0000, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FConnectionString ConnectionString;  // 0x0010, size 0x38
};
