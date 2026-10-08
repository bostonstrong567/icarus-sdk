// /Script/Engine.AnimNode_TransitionPoseEvaluator
// size 0xF8, declared in Engine/Source/Runtime/Engine/Classes/Animation/AnimNode_TransitionPoseEvaluator.h

USTRUCT()
struct FAnimNode_TransitionPoseEvaluator : public FAnimNode_Base
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 FramesToCachePose;  // 0x00E8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TEnumAsByte<EEvaluatorDataSource> DataSource;  // 0x00F0, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TEnumAsByte<EEvaluatorMode> EvaluatorMode;  // 0x00F1, size 0x1

    // Not reflected:
    FCompactHeapPose CachedPose;  // 0x0010
    FBlendedHeapCurve CachedCurve;  // 0x0028
    FStackCustomAttributes CachedAttributes;  // 0x0058
    int32 CacheFramesRemaining;  // 0x00EC
};
