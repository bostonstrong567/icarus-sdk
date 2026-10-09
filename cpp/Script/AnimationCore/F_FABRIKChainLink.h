// /Script/AnimationCore.FABRIKChainLink
// size 0x38, declared in Engine/Source/Runtime/AnimationCore/Public/FABRIK.h

USTRUCT()
struct FFABRIKChainLink
{
public:
    FVector Position;  // 0x0000, not reflected
    float Length;  // 0x000C, not reflected
    int32 BoneIndex;  // 0x0010, not reflected
    int32 TransformIndex;  // 0x0014, not reflected
    FVector DefaultDirToParent;  // 0x0018, not reflected
    TArray<int,TSizedDefaultAllocator<32> > ChildZeroLengthTransformIndices;  // 0x0028, not reflected
};
