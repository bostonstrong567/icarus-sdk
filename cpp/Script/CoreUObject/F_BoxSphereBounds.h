// /Script/CoreUObject.BoxSphereBounds
// size 0x1C, declared in Engine/Source/Runtime/Core/Public/Math/BoxSphereBounds.h

USTRUCT()
struct FBoxSphereBounds
{
    UPROPERTY(EditAnywhere, SaveGame, BlueprintReadWrite) FVector Origin;  // 0x0000, size 0xC
    UPROPERTY(EditAnywhere, SaveGame, BlueprintReadWrite) FVector BoxExtent;  // 0x000C, size 0xC
    UPROPERTY(EditAnywhere, SaveGame, BlueprintReadWrite) float SphereRadius;  // 0x0018, size 0x4
};
