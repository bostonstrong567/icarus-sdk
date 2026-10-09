// /Script/OnlineSubsystemEOS.LeaderboardDef
// size 0x38, declared in Icarus/Intermediate/Build/Win64/IcarusServer/Inc/OnlineSubsystemEOS/LeaderboardQueryDefinitionProxy.generated.h

USTRUCT()
struct FLeaderboardDef
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FString LeaderboardId;  // 0x0000, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FString StatName;  // 0x0010, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int64 StartTime;  // 0x0020, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int64 EndTime;  // 0x0028, size 0x8
    ELeaderboardAggregation Aggregation;  // 0x0030, not reflected
};
