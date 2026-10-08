// /Script/Icarus.RadarV3ScanData
// size 0x28, declared in Icarus/Source/Icarus/UI/Map/MapManagerBase.h

USTRUCT()
struct FRadarV3ScanData
{
    UPROPERTY(EditAnywhere, SaveGame, BlueprintReadWrite) FVector Location;  // 0x0000, size 0xC
    UPROPERTY(EditAnywhere, SaveGame, BlueprintReadWrite) float SizeInKM;  // 0x000C, size 0x4
    UPROPERTY(EditAnywhere, SaveGame, BlueprintReadWrite) float Direction;  // 0x0010, size 0x4
    UPROPERTY(EditAnywhere, SaveGame, BlueprintReadWrite) float ArcLengthInPercent;  // 0x0014, size 0x4
    UPROPERTY(EditAnywhere, SaveGame, BlueprintReadWrite) float RandomOffset;  // 0x0018, size 0x4
    UPROPERTY(EditAnywhere, SaveGame, BlueprintReadWrite) float Distance;  // 0x001C, size 0x4
    UPROPERTY(EditAnywhere, SaveGame, BlueprintReadWrite) float Intensity;  // 0x0020, size 0x4
    UPROPERTY(EditAnywhere, SaveGame, BlueprintReadWrite) int32 UID;  // 0x0024, size 0x4
};
