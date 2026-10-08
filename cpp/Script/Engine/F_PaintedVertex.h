// /Script/Engine.PaintedVertex
// size 0x20, declared in Engine/Source/Runtime/Engine/Classes/Components/StaticMeshComponent.h

USTRUCT()
struct FPaintedVertex
{
    UPROPERTY() FVector Position;  // 0x0000, size 0xC
    UPROPERTY() FColor Color;  // 0x000C, size 0x4
    UPROPERTY() FVector4 Normal;  // 0x0010, size 0x10
};
