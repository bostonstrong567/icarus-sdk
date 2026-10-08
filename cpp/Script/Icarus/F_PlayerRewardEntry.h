// /Script/Icarus.PlayerRewardEntry
// size 0x10, declared in Icarus/Source/Icarus/Systems/GameStateRecorder/GameModeStateRecorderComponent.h

USTRUCT()
struct FPlayerRewardEntry
{
    UPROPERTY(SaveGame) FName CurrencyRewardRow;  // 0x0000, size 0x8
    UPROPERTY(SaveGame) int32 LastCurrencyExported;  // 0x0008, size 0x4
    UPROPERTY(SaveGame) int32 TotalCurrencyExported;  // 0x000C, size 0x4
};
