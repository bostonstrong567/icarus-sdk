// /Script/Icarus.SettlementWallConfig
// size 0x18, declared in Icarus/Source/Icarus/Settlement/SettlementWallLibrary.h

USTRUCT()
struct FSettlementWallConfig
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float SegmentSpacing;  // 0x0000, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float ExtensionDistance;  // 0x0004, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float RadialVariation;  // 0x0008, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float VariationFrequency;  // 0x000C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float VariationSeed;  // 0x0010, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bIncludeBuildingBounds;  // 0x0014, size 0x1
};
