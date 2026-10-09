// /Script/Icarus.MapManagerRecord
// size 0x60, declared in Icarus/Source/Icarus/Systems/GameStateRecorder/MapManagerRecorderComponent.h

USTRUCT()
struct FMapManagerRecord
{
public:
    UPROPERTY(SaveGame) TMap<FIntPoint, int32> TileFlags;  // 0x0000, size 0x50
    UPROPERTY(SaveGame) TArray<FRadarV3ScanData> RadarV3Scans;  // 0x0050, size 0x10
};
