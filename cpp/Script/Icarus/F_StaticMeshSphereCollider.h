// /Script/Icarus.StaticMeshSphereCollider
// size 0x10, declared in Icarus/Source/Icarus/IcarusFunctionLibrary.h

USTRUCT()
struct FStaticMeshSphereCollider
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector Center;  // 0x0000, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Radius;  // 0x000C, size 0x4
};
