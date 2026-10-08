// /Script/Engine.BatchedLine
// size 0x34, declared in Engine/Source/Runtime/Engine/Classes/Components/LineBatchComponent.h

USTRUCT()
struct FBatchedLine
{
    UPROPERTY() FVector Start;  // 0x0000, size 0xC
    UPROPERTY() FVector End;  // 0x000C, size 0xC
    UPROPERTY() FLinearColor Color;  // 0x0018, size 0x10
    UPROPERTY() float Thickness;  // 0x0028, size 0x4
    UPROPERTY() float RemainingLifeTime;  // 0x002C, size 0x4
    UPROPERTY() uint8 DepthPriority;  // 0x0030, size 0x1
};
