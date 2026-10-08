// /Script/Icarus.MissionHistoryRecord
// size 0x18, declared in Icarus/Source/Icarus/Systems/GameStateRecorder/GameModeStateRecorderComponent.h

USTRUCT()
struct FMissionHistoryRecord
{
    UPROPERTY(SaveGame) FString Mission;  // 0x0000, size 0x10
    UPROPERTY(SaveGame) int32 Status;  // 0x0010, size 0x4
    UPROPERTY(SaveGame) int32 MissionEndTime;  // 0x0014, size 0x4
};
