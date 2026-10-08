// /Script/Icarus.GeneticLineage
// size 0xD8, declared in Icarus/Source/Icarus/AI/Mounts/GeneticLineage.h

USTRUCT()
struct FGeneticLineage : public FIcarusTableRowBase
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText Title;  // 0x0018, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 Weighting;  // 0x0030, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<FBaseStatsEnum, UCurveFloat*> Growth;  // 0x0038, size 0x50
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<FBaseStatsEnum, int32> Stats;  // 0x0088, size 0x50
};
