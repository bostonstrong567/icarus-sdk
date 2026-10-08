// /Script/AnimGraphRuntime.AnimLegIKData
// size 0xA0, declared in Engine/Source/Runtime/AnimGraphRuntime/Public/BoneControllers/AnimNode_LegIK.h

USTRUCT()
struct FAnimLegIKData
{

    // Not reflected:
    FTransform IKFootTransform;  // 0x0000
    FAnimLegIKDefinition * LegDefPtr;  // 0x0030
    FCompactPoseBoneIndex IKFootBoneIndex;  // 0x0038
    int32 NumBones;  // 0x003C
    TArray<FCompactPoseBoneIndex,TSizedDefaultAllocator<32> > FKLegBoneIndices;  // 0x0040
    TArray<FTransform,TSizedDefaultAllocator<32> > FKLegBoneTransforms;  // 0x0050
    FIKChain IKChain;  // 0x0060
};
