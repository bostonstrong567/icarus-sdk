// /Script/Engine.TextSizingParameters
// size 0x28, declared in Engine/Source/Runtime/Engine/Public/CanvasTypes.h

USTRUCT()
struct FTextSizingParameters
{
    UPROPERTY() float DrawX;  // 0x0000, size 0x4
    UPROPERTY() float DrawY;  // 0x0004, size 0x4
    UPROPERTY() float DrawXL;  // 0x0008, size 0x4
    UPROPERTY() float DrawYL;  // 0x000C, size 0x4
    UPROPERTY() FVector2D Scaling;  // 0x0010, size 0x8
    UPROPERTY() UFont* DrawFont;  // 0x0018, size 0x8
    UPROPERTY() FVector2D SpacingAdjust;  // 0x0020, size 0x8
};
