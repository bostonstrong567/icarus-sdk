// /Script/DragonIKPlugin.CCDIK_Modified_ChainLink
// size 0x70, declared in Engine/Plugins/Marketplace/DragonIK/Source/DragonIKPlugin/Public/DragonIK_Library.h

USTRUCT()
struct FCCDIK_Modified_ChainLink
{

    // Not reflected:
    FVector Position;  // 0x0000
    FVector solverLocalPositions;  // 0x000C
    FQuat BoneRotation;  // 0x0020
    float Length;  // 0x0030
    FVector axis;  // 0x0034
    int32 BoneIndex;  // 0x0040
    int32 TransformIndex;  // 0x0044
    FVector DefaultDirToParent;  // 0x0048
    TArray<int,TSizedDefaultAllocator<32> > ChildZeroLengthTransformIndices;  // 0x0058
};
