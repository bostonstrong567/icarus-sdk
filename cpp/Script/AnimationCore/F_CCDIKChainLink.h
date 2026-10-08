// /Script/AnimationCore.CCDIKChainLink
// size 0x80, declared in Engine/Source/Runtime/AnimationCore/Public/CCDIK.h

USTRUCT()
struct FCCDIKChainLink
{

    // Not reflected:
    FTransform Transform;  // 0x0000
    FTransform LocalTransform;  // 0x0030
    int32 TransformIndex;  // 0x0060
    TArray<int,TSizedDefaultAllocator<32> > ChildZeroLengthTransformIndices;  // 0x0068
    float CurrentAngleDelta;  // 0x0078
};
