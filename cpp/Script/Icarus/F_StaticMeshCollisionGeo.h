// /Script/Icarus.StaticMeshCollisionGeo
// size 0x30, declared in Icarus/Source/Icarus/IcarusFunctionLibrary.h

USTRUCT()
struct FStaticMeshCollisionGeo
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FStaticMeshSphereCollider> Spheres;  // 0x0000, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FStaticMeshBoxCollider> Boxes;  // 0x0010, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FStaticMeshCapsuleCollider> Capsules;  // 0x0020, size 0x10
};
