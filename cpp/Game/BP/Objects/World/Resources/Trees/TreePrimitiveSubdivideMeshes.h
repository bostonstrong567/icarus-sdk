// /Game/BP/Objects/World/Resources/Trees/TreePrimitiveSubdivideMeshes.TreePrimitiveSubdivideMeshes
// size 0x30

USTRUCT()
struct TreePrimitiveSubdivideMeshes
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<TSoftObjectPtr<UStaticMesh>> StaticMeshes;  // 0x0000, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FName> Sockets;  // 0x0010, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FTransform> SocketOffsets;  // 0x0020, size 0x10
};
