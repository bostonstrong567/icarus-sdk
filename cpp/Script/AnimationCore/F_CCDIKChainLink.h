// /Script/AnimationCore.CCDIKChainLink
// size 0x80, declared in Engine/Source/Runtime/AnimationCore/Public/CCDIK.h

USTRUCT()
struct FCCDIKChainLink
{
public:
    FTransform Transform;  // 0x0000, not reflected
    FTransform LocalTransform;  // 0x0030, not reflected
    int32 TransformIndex;  // 0x0060, not reflected
    TArray<int,TSizedDefaultAllocator<32> > ChildZeroLengthTransformIndices;  // 0x0068, not reflected
    float CurrentAngleDelta;  // 0x0078, not reflected
};
