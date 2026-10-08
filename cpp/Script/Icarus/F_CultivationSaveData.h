// /Script/Icarus.CultivationSaveData
// size 0x14, declared in Icarus/Intermediate/Build/Win64/IcarusServer/Inc/Icarus/CropPlotRecorderComponent.generated.h

USTRUCT()
struct FCultivationSaveData
{
    UPROPERTY(SaveGame) FName Seed;  // 0x0000, size 0x8
    UPROPERTY(SaveGame) float GrowthTime;  // 0x0008, size 0x4
    UPROPERTY(SaveGame) int32 GrowthState;  // 0x000C, size 0x4
    UPROPERTY(SaveGame) bool bWasKilled;  // 0x0010, size 0x1
};
