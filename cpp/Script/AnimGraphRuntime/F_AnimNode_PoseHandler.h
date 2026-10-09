// /Script/AnimGraphRuntime.AnimNode_PoseHandler
// size 0x80, declared in Engine/Source/Runtime/AnimGraphRuntime/Public/AnimNodes/AnimNode_PoseHandler.h

USTRUCT()
struct FAnimNode_PoseHandler : public FAnimNode_AssetPlayerBase
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UPoseAsset* PoseAsset;  // 0x0038, size 0x8
protected:
    TWeakObjectPtr<UPoseAsset,FWeakObjectPtr> CurrentPoseAsset;  // 0x0040, not reflected
    FAnimExtractContext PoseExtractContext;  // 0x0048, not reflected
    TArray<float,TSizedDefaultAllocator<32> > BoneBlendWeights;  // 0x0070, not reflected
};
