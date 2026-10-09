// /Script/Icarus.GeneticValue
// size 0x98, declared in Icarus/Source/Icarus/AI/Mounts/GeneticValue.h

USTRUCT()
struct FGeneticValue : public FIcarusTableRowBase
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText Title;  // 0x0018, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText Short;  // 0x0030, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<FBaseStatsEnum, UCurveFloat*> Base;  // 0x0048, size 0x50
};
