// /Script/Engine.BatchedPoint
// size 0x28, declared in Engine/Source/Runtime/Engine/Classes/Components/LineBatchComponent.h

USTRUCT()
struct FBatchedPoint
{
    UPROPERTY() FVector Position;  // 0x0000, size 0xC
    UPROPERTY() FLinearColor Color;  // 0x000C, size 0x10
    UPROPERTY() float PointSize;  // 0x001C, size 0x4
    UPROPERTY() float RemainingLifeTime;  // 0x0020, size 0x4
    UPROPERTY() uint8 DepthPriority;  // 0x0024, size 0x1
};
