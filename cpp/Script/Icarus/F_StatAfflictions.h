// /Script/Icarus.StatAfflictions
// size 0x90, declared in Icarus/Source/Icarus/IcarusGenerated/StatAfflictions/StatAfflictionsTable.h

USTRUCT()
struct FStatAfflictions : public FIcarusTableRowBase
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FStatsEnum AfflictionStat;  // 0x0018, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FStatsEnum CriticalHitAfflictionStat;  // 0x0028, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FStatsEnum ResistanceStat;  // 0x0038, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 DurationInSeconds;  // 0x0048, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FStatsEnum StatBasedDuration;  // 0x0050, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FModifierStatesRowHandle Modifier;  // 0x0060, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FStatsEnum LookupStat;  // 0x0078, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bApplyToAttacker;  // 0x0088, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bRequiresDamage;  // 0x0089, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bTreatStatAsBoolean;  // 0x008A, size 0x1
};
