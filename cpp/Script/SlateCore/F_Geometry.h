// /Script/SlateCore.Geometry
// size 0x38, declared in Engine/Source/Runtime/SlateCore/Public/Layout/Geometry.h

USTRUCT()
struct FGeometry
{
public:
    const FVector2D Size;  // 0x0000, not reflected
    const float Scale;  // 0x0008, not reflected
    const FVector2D AbsolutePosition;  // 0x000C, not reflected
    const FVector2D Position;  // 0x0014, not reflected
private:
    FTransform2D AccumulatedRenderTransform;  // 0x001C, not reflected
    const uint8 : 1 bHasRenderTransform;  // 0x0034, not reflected
};
