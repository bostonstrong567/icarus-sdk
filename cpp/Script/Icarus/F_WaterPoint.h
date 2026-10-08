// /Script/Icarus.WaterPoint
// size 0x10, declared in Icarus/Source/Icarus/World/WaterBody.h

USTRUCT()
struct FWaterPoint
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FIntVector Top;  // 0x0000, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 Bottom;  // 0x000C, size 0x4
};
