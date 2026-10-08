// /Script/Icarus.TreeRuntimeConstructArguments
// size 0x38, declared in Icarus/Intermediate/Build/Win64/IcarusServer/Inc/Icarus/TreePrefab.generated.h

USTRUCT()
struct FTreeRuntimeConstructArguments
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSubclassOf<ATreePrefab> TreePrefabClass;  // 0x0000, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName RootName;  // 0x0008, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<int32> TreePrimitivesMask;  // 0x0010, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bIsPhysicsDynamic;  // 0x0020, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UStaticMesh* ProxyMesh;  // 0x0028, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ATreeBase* InstigatorTree;  // 0x0030, size 0x8
};
