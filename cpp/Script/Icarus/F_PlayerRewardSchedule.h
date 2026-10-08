// /Script/Icarus.PlayerRewardSchedule
// size 0x18, declared in Icarus/Source/Icarus/IcarusGameModeSurvival.h

USTRUCT()
struct FPlayerRewardSchedule
{
    UPROPERTY(EditAnywhere) TArray<FPlayerRewardEntry> RewardCounts;  // 0x0000, size 0x10
    UPROPERTY(EditAnywhere) bool bMissionCompleteRewardCollected;  // 0x0010, size 0x1
    UPROPERTY(EditAnywhere) int32 CurrentMissionIndex;  // 0x0014, size 0x4
};
