// /Script/Icarus.DamageTypeInfo
// size 0x90, declared in Icarus/Intermediate/Build/Win64/IcarusServer/Inc/Icarus/DamageTypeInfoLibrary.generated.h

USTRUCT()
struct FDamageTypeInfo : public FIcarusTableRowBase
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) EIcarusDamageType DamageType;  // 0x0018, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FColor Color;  // 0x001C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTagQueriesRowHandle RequiredDefenderQuery;  // 0x0020, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FStatsEnum DamageStat;  // 0x0038, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FStatsEnum DamageVariationStat;  // 0x0048, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FStatsEnum ResistanceStat;  // 0x0058, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FDamageTypeInfoModifier> ResistanceOverride;  // 0x0068, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FDamageTypeInfoModifier> DefenderMultipliers;  // 0x0078, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bAddStealthMultiplier;  // 0x0088, size 0x1
};
