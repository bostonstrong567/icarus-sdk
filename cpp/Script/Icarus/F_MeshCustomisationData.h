// /Script/Icarus.MeshCustomisationData
// size 0x38, declared in Icarus/Source/Icarus/Traits/Behaviours/LivingItem/LivingItemData.h

USTRUCT()
struct FMeshCustomisationData
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName SocketName;  // 0x0000, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<UStaticMesh> StaticMeshToSocket;  // 0x0008, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bHABPreviewOnly;  // 0x0030, size 0x1
};
