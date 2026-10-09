// /Script/Icarus.GameModeRecord
// size 0x50, declared in Icarus/Source/Icarus/Systems/GameStateRecorder/GameModeStateRecorderComponent.h

USTRUCT()
struct FGameModeRecord
{
public:
    UPROPERTY(SaveGame) int32 GameStateSeed;  // 0x0000, size 0x4
    UPROPERTY(SaveGame) float TimeOfDay;  // 0x0004, size 0x4
    UPROPERTY(SaveGame) float ProspectGameTime;  // 0x0008, size 0x4
    UPROPERTY(SaveGame) int32 SecondsPerGameDay;  // 0x000C, size 0x4
    UPROPERTY(SaveGame) TArray<FString> ApprovedPlayerIDs;  // 0x0010, size 0x10
    UPROPERTY(SaveGame) TArray<FName> SessionFlagRecords;  // 0x0020, size 0x10
    UPROPERTY(SaveGame) int32 LevelTimeElapsedSec;  // 0x0030, size 0x4
    UPROPERTY(SaveGame) int32 TotalExoticsExported;  // 0x0034, size 0x4
    UPROPERTY(SaveGame) int32 TotalRedExoticsExported;  // 0x0038, size 0x4
    UPROPERTY(SaveGame) TArray<FExportedCurrency> ExportedCurrencies;  // 0x0040, size 0x10
};
