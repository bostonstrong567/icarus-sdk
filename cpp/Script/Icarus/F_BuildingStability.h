// /Script/Icarus.BuildingStability
// size 0x40, declared in Icarus/Intermediate/Build/Win64/IcarusServer/Inc/Icarus/BuildingBase.generated.h

USTRUCT()
struct FBuildingStability : public FIcarusTableRowBase
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float BuildingTier;  // 0x0018, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MaxHardStability;  // 0x001C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 HardStabilityMaxRange;  // 0x0020, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MinimumUnstableStability;  // 0x0024, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float StabilityPassMultiplier;  // 0x0028, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MaxAnchoredStability;  // 0x002C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float LowestGreenStability;  // 0x0030, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float YellowStability;  // 0x0034, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float HighestRedStability;  // 0x0038, size 0x4
};
