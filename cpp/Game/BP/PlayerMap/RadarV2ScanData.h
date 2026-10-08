// /Game/BP/PlayerMap/RadarV2ScanData.RadarV2ScanData
// size 0x18

USTRUCT()
struct RadarV2ScanData
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector Location;  // 0x0000, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float SizeInKM;  // 0x000C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Intensity;  // 0x0010, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 UID;  // 0x0014, size 0x4
};
