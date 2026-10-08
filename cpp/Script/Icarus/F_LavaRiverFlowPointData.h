// /Script/Icarus.LavaRiverFlowPointData
// size 0x18, declared in Icarus/Source/Icarus/World/LavaRiverFlowPointData.h

USTRUCT()
struct FLavaRiverFlowPointData
{
    UPROPERTY(BlueprintReadWrite) FVector2D Location;  // 0x0000, size 0x8
    UPROPERTY(BlueprintReadWrite) FVector2D Extent;  // 0x0008, size 0x8
    UPROPERTY(BlueprintReadWrite) float FlowSpeed;  // 0x0010, size 0x4
    UPROPERTY(BlueprintReadWrite) float BaseToFlowing;  // 0x0014, size 0x4
};
