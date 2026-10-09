// /Script/Engine.AnimNode_TransitionPoseEvaluator
// size 0xF8, declared in Engine/Source/Runtime/Engine/Classes/Animation/AnimNode_TransitionPoseEvaluator.h

USTRUCT()
struct FAnimNode_TransitionPoseEvaluator : public FAnimNode_Base
{
public:
    FCompactHeapPose CachedPose;  // 0x0010, not reflected
    FBlendedHeapCurve CachedCurve;  // 0x0028, not reflected
    FStackCustomAttributes CachedAttributes;  // 0x0058, not reflected
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 FramesToCachePose;  // 0x00E8, size 0x4
    int32 CacheFramesRemaining;  // 0x00EC, not reflected
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TEnumAsByte<EEvaluatorDataSource> DataSource;  // 0x00F0, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TEnumAsByte<EEvaluatorMode> EvaluatorMode;  // 0x00F1, size 0x1
};
