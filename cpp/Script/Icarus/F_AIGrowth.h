// /Script/Icarus.AIGrowth
// size 0xA0, declared in Icarus/Source/Icarus/AI/AIGrowth.h

USTRUCT()
struct FAIGrowth : public FIcarusTableRowBase
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<FBaseStatsEnum, int32> Base;  // 0x0018, size 0x50
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UCurveFloat* Health;  // 0x0068, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UCurveFloat* MeleeDamage;  // 0x0070, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UCurveFloat* MovementSpeed;  // 0x0078, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FCustomScaledStat> CustomStats;  // 0x0080, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UCurveFloat* ExperienceMultiplier;  // 0x0090, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UCurveFloat* ProtectiveThreatOverDistance;  // 0x0098, size 0x8
};
