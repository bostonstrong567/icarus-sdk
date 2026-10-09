// /Script/Icarus.PlayerRewardScheduleRecord
// size 0x38, declared in Icarus/Source/Icarus/Systems/GameStateRecorder/GameModeStateRecorderComponent.h

USTRUCT()
struct FPlayerRewardScheduleRecord
{
public:
    UPROPERTY(SaveGame) FString PlayerId;  // 0x0000, size 0x10
    UPROPERTY(SaveGame) int32 LastExoticsExported;  // 0x0010, size 0x4
    UPROPERTY(SaveGame) int32 TotalExoticsExported;  // 0x0014, size 0x4
    UPROPERTY(SaveGame) int32 LastRedExoticsExported;  // 0x0018, size 0x4
    UPROPERTY(SaveGame) int32 TotalRedExoticsExported;  // 0x001C, size 0x4
    UPROPERTY(SaveGame) TArray<FPlayerRewardEntry> PlayerRewards;  // 0x0020, size 0x10
    UPROPERTY(SaveGame) bool bMissionCompleted;  // 0x0030, size 0x1
    UPROPERTY(SaveGame) int32 CurrentMissionIndex;  // 0x0034, size 0x4
};
