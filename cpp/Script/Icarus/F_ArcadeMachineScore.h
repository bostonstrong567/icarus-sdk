// /Script/Icarus.ArcadeMachineScore
// size 0x30, declared in Icarus/Source/Icarus/Systems/GameStateRecorder/ArcadeMachineRecorderComponent.h

USTRUCT()
struct FArcadeMachineScore
{
    UPROPERTY(SaveGame, BlueprintReadWrite) FPlayerCharacterID PlayerCharacterID;  // 0x0000, size 0x18
    UPROPERTY(SaveGame, BlueprintReadWrite) FString PlayerName;  // 0x0018, size 0x10
    UPROPERTY(SaveGame, BlueprintReadWrite) float Score;  // 0x0028, size 0x4
};
