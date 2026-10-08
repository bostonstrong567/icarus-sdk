// /Script/AnimationCore.FABRIKChainLink
// size 0x38, declared in Engine/Source/Runtime/AnimationCore/Public/FABRIK.h

USTRUCT()
struct FFABRIKChainLink
{

    // Not reflected:
    FVector Position;  // 0x0000
    float Length;  // 0x000C
    int32 BoneIndex;  // 0x0010
    int32 TransformIndex;  // 0x0014
    FVector DefaultDirToParent;  // 0x0018
    TArray<int,TSizedDefaultAllocator<32> > ChildZeroLengthTransformIndices;  // 0x0028
};
