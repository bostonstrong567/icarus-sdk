// /Script/Engine.AnimNode_SaveCachedPose
// size 0x158, declared in Engine/Source/Runtime/Engine/Classes/Animation/AnimNode_SaveCachedPose.h

USTRUCT()
struct FAnimNode_SaveCachedPose : public FAnimNode_Base
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FPoseLink Pose;  // 0x0010, size 0x10
    UPROPERTY() FName CachePoseName;  // 0x0020, size 0x8

    // Not reflected:
    float GlobalWeight;  // 0x0028
    FCompactPose CachedPose;  // 0x0030
    FBlendedCurve CachedCurve;  // 0x0048
    FStackCustomAttributes CachedAttributes;  // 0x0078
    TArray<FAnimNode_SaveCachedPose::FCachedUpdateContext,TSizedDefaultAllocator<32> > CachedUpdateContexts;  // 0x0108
    FGraphTraversalCounter InitializationCounter;  // 0x0118
    FGraphTraversalCounter CachedBonesCounter;  // 0x0128
    FGraphTraversalCounter UpdateCounter;  // 0x0138
    FGraphTraversalCounter EvaluationCounter;  // 0x0148
};
