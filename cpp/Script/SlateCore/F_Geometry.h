// /Script/SlateCore.Geometry
// size 0x38, declared in Engine/Source/Runtime/SlateCore/Public/Layout/Geometry.h

USTRUCT()
struct FGeometry
{

    // Not reflected:
    const FVector2D Size;  // 0x0000
    const float Scale;  // 0x0008
    const FVector2D AbsolutePosition;  // 0x000C
    const FVector2D Position;  // 0x0014
    FTransform2D AccumulatedRenderTransform;  // 0x001C
    const uint8 : 1 bHasRenderTransform;  // 0x0034
};
