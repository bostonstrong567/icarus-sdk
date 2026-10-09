// /Script/Icarus.CriticalHitArea
// size 0xA0, declared in Icarus/Source/Icarus/DataStructs/CriticalHitArea.h

USTRUCT()
struct FCriticalHitArea : public FIcarusTableRowBase
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FStatsEnum DamageReductionStat;  // 0x0018, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FStatsEnum DamageReductionMitigatingStat;  // 0x0028, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FStatsEnum DamageMultiplierStat;  // 0x0038, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FStatsEnum DamageIgnoreStat;  // 0x0048, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float ReductionStatMultiplier;  // 0x0058, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MultiplierStatMultiplier;  // 0x005C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<EIcarusDamageType> WhitelistedDamageTypes;  // 0x0060, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FModifierStatesRowHandle> ModifiersToApply;  // 0x0070, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 Priority;  // 0x0080, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FCriticalHitAreaAudioDataRowHandle AudioData;  // 0x0084, size 0x18
};
