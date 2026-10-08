// /Script/Icarus.ExportedCurrency
// size 0xC, declared in Icarus/Source/Icarus/Systems/GameStateRecorder/GameModeStateRecorderComponent.h

USTRUCT()
struct FExportedCurrency
{
    UPROPERTY(SaveGame) FName CurrencyRewardRow;  // 0x0000, size 0x8
    UPROPERTY(SaveGame) int32 TotalCurrencyExported;  // 0x0008, size 0x4
};
