// /Script/AnimGraphRuntime.AnimLegIKData
// size 0xA0, declared in Engine/Source/Runtime/AnimGraphRuntime/Public/BoneControllers/AnimNode_LegIK.h

USTRUCT()
struct FAnimLegIKData
{
public:
    FTransform IKFootTransform;  // 0x0000, not reflected
    FAnimLegIKDefinition * LegDefPtr;  // 0x0030, not reflected
    FCompactPoseBoneIndex IKFootBoneIndex;  // 0x0038, not reflected
    int32 NumBones;  // 0x003C, not reflected
    TArray<FCompactPoseBoneIndex,TSizedDefaultAllocator<32> > FKLegBoneIndices;  // 0x0040, not reflected
    TArray<FTransform,TSizedDefaultAllocator<32> > FKLegBoneTransforms;  // 0x0050, not reflected
    FIKChain IKChain;  // 0x0060, not reflected
};
