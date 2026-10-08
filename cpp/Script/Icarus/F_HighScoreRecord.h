// /Script/Icarus.HighScoreRecord
// size 0x28, declared in Icarus/Source/Icarus/Systems/TargetRange/TargetRangeControllerRecorderComponent.h

USTRUCT()
struct FHighScoreRecord
{
    UPROPERTY(SaveGame, BlueprintReadOnly) FString PlayerID;  // 0x0000, size 0x10
    UPROPERTY(SaveGame, BlueprintReadOnly) int32 Score;  // 0x0010, size 0x4
    UPROPERTY(SaveGame, BlueprintReadOnly) FString PlayerName;  // 0x0018, size 0x10
};
