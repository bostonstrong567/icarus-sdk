// /Script/DragonIKPlugin.CCDIK_Modified_ChainLink
// size 0x70, declared in Engine/Plugins/Marketplace/DragonIK/Source/DragonIKPlugin/Public/DragonIK_Library.h

USTRUCT()
struct FCCDIK_Modified_ChainLink
{
public:
    FVector Position;  // 0x0000, not reflected
    FVector solverLocalPositions;  // 0x000C, not reflected
    FQuat BoneRotation;  // 0x0020, not reflected
    float Length;  // 0x0030, not reflected
    FVector axis;  // 0x0034, not reflected
    int32 BoneIndex;  // 0x0040, not reflected
    int32 TransformIndex;  // 0x0044, not reflected
    FVector DefaultDirToParent;  // 0x0048, not reflected
    TArray<int,TSizedDefaultAllocator<32> > ChildZeroLengthTransformIndices;  // 0x0058, not reflected
};
