// /Script/Icarus.StaticMeshBoxCollider
// size 0x24, declared in Icarus/Source/Icarus/IcarusFunctionLibrary.h

USTRUCT()
struct FStaticMeshBoxCollider
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector Center;  // 0x0000, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FRotator Rotation;  // 0x000C, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector Extents;  // 0x0018, size 0xC
};
