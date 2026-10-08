// /Script/Icarus.DrillSaveData
// size 0x2, declared in Icarus/Source/Icarus/Systems/GameStateRecorder/DrillRecorderComponent.h

USTRUCT()
struct FDrillSaveData
{
    UPROPERTY(SaveGame, BlueprintReadWrite) bool bDrillActive;  // 0x0000, size 0x1
    UPROPERTY(SaveGame, BlueprintReadWrite) bool bDrillCanAutoRestart;  // 0x0001, size 0x1
};
