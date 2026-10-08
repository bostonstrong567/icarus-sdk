// /Script/Icarus.TreeRuntimeCreateArguments
// size 0x80, declared in Icarus/Source/Icarus/Objects/TreePrefab.h

USTRUCT()
struct FTreeRuntimeCreateArguments
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AActor* Owner;  // 0x0000, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTransform Transform;  // 0x0010, size 0x30
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTreeRuntimeConstructArguments ConstructArgs;  // 0x0040, size 0x38
};
