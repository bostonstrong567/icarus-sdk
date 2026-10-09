// /Script/Icarus.StaticMeshCapsuleCollider
// size 0x20, declared in Icarus/Source/Icarus/IcarusFunctionLibrary.h

USTRUCT()
struct FStaticMeshCapsuleCollider
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector Center;  // 0x0000, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FRotator Rotation;  // 0x000C, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Radius;  // 0x0018, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Length;  // 0x001C, size 0x4
};
