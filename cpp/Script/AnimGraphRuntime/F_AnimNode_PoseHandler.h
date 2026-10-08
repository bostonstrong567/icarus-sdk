// /Script/AnimGraphRuntime.AnimNode_PoseHandler
// size 0x80, declared in Engine/Source/Runtime/AnimGraphRuntime/Public/AnimNodes/AnimNode_PoseHandler.h

USTRUCT()
struct FAnimNode_PoseHandler : public FAnimNode_AssetPlayerBase
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UPoseAsset* PoseAsset;  // 0x0038, size 0x8

    // Not reflected:
    TWeakObjectPtr<UPoseAsset,FWeakObjectPtr> CurrentPoseAsset;  // 0x0040
    FAnimExtractContext PoseExtractContext;  // 0x0048
    TArray<float,TSizedDefaultAllocator<32> > BoneBlendWeights;  // 0x0070
};
