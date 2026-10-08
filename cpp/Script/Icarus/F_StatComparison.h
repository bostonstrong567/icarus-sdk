// /Script/Icarus.StatComparison
// size 0x18, declared in Icarus/Source/Icarus/Traits/Behaviours/UsableData.h

USTRUCT()
struct FStatComparison
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FStatsEnum Stat;  // 0x0000, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) EComparisonType ComparisonType;  // 0x0010, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 Value;  // 0x0014, size 0x4
};
