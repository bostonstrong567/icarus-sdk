// /Script/OnlineSubsystemEOS.LeaderboardsRecordData
// size 0x20, declared in Icarus/Intermediate/Build/Win64/IcarusServer/Inc/OnlineSubsystemEOS/LeaderboardQueryRecordsCallbackProxy.generated.h

USTRUCT()
struct FLeaderboardsRecordData
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FProductUserId UserId;  // 0x0000, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FString DisplayName;  // 0x0008, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 Rank;  // 0x0018, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 Score;  // 0x001C, size 0x4
};
