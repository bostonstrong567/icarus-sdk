// /Script/AnimGraphRuntime.AnimNode_ResetRoot
// size 0xD8, declared in Engine/Source/Runtime/AnimGraphRuntime/Public/BoneControllers/AnimNode_ResetRoot.h

USTRUCT()
struct FAnimNode_ResetRoot : public FAnimNode_SkeletalControlBase
{

    // Not reflected:
    TArray<FCompactPoseBoneIndex,TSizedDefaultAllocator<32> > RootChildren;  // 0x00C8
};
