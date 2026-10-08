// /Script/Icarus.CreatureGenetics
// size 0x1C, declared in Icarus/Source/Icarus/AI/Mounts/GeneticsComponent.h

USTRUCT()
struct FCreatureGenetics
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FGeneticValuesRowHandle GeneticValue;  // 0x0000, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 Value;  // 0x0018, size 0x4
};
