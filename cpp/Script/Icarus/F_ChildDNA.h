// /Script/Icarus.ChildDNA
// size 0x50, declared in Icarus/Source/Icarus/AI/Mounts/GeneticsComponent.h

USTRUCT()
struct FChildDNA
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FCreatureGenetics> Genetics;  // 0x0000, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ECreatureSex Sex;  // 0x0010, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FGeneticLineagesRowHandle Lineage;  // 0x0014, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 UniqueVariation;  // 0x002C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FString Mother;  // 0x0030, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FString Father;  // 0x0040, size 0x10
};
