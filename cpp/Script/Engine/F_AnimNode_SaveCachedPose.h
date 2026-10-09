// /Script/Engine.AnimNode_SaveCachedPose
// size 0x158, declared in Engine/Source/Runtime/Engine/Classes/Animation/AnimNode_SaveCachedPose.h

USTRUCT()
struct FAnimNode_SaveCachedPose : public FAnimNode_Base
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FPoseLink Pose;  // 0x0010, size 0x10
    UPROPERTY() FName CachePoseName;  // 0x0020, size 0x8
    float GlobalWeight;  // 0x0028, not reflected
protected:
    FCompactPose CachedPose;  // 0x0030, not reflected
    FBlendedCurve CachedCurve;  // 0x0048, not reflected
    FStackCustomAttributes CachedAttributes;  // 0x0078, not reflected
    TArray<FAnimNode_SaveCachedPose::FCachedUpdateContext,TSizedDefaultAllocator<32> > CachedUpdateContexts;  // 0x0108, not reflected
    FGraphTraversalCounter InitializationCounter;  // 0x0118, not reflected
    FGraphTraversalCounter CachedBonesCounter;  // 0x0128, not reflected
    FGraphTraversalCounter UpdateCounter;  // 0x0138, not reflected
    FGraphTraversalCounter EvaluationCounter;  // 0x0148, not reflected
};
