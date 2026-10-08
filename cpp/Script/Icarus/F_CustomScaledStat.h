// /Script/Icarus.CustomScaledStat
// size 0x18, declared in Icarus/Source/Icarus/AI/AIGrowth.h

USTRUCT()
struct FCustomScaledStat
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FBaseStatsEnum Stat;  // 0x0000, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UCurveFloat* Curve;  // 0x0010, size 0x8
};
