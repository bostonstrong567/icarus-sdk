// /Script/Engine.AnimUpdateRateParameters
// size 0x88, declared in Engine/Source/Runtime/Engine/Classes/Engine/EngineTypes.h

USTRUCT()
struct FAnimUpdateRateParameters
{
public:
    FAnimUpdateRateParameters::EOptimizeMode OptimizeMode;  // 0x0000, not reflected
    UPROPERTY() EUpdateRateShiftBucket ShiftBucket;  // 0x0001, size 0x1
    UPROPERTY() uint8 bInterpolateSkippedFrames : 1;  // 0x0002, mask 0x01
    UPROPERTY() uint8 bShouldUseLodMap : 1;  // 0x0002, mask 0x02
    UPROPERTY() uint8 bShouldUseMinLod : 1;  // 0x0002, mask 0x04
    UPROPERTY() uint8 bSkipUpdate : 1;  // 0x0002, mask 0x08
    UPROPERTY() uint8 bSkipEvaluation : 1;  // 0x0002, mask 0x10
    UPROPERTY() int32 UpdateRate;  // 0x0004, size 0x4
    UPROPERTY() int32 EvaluationRate;  // 0x0008, size 0x4
    UPROPERTY(Transient) float TickedPoseOffestTime;  // 0x000C, size 0x4
    UPROPERTY(Transient) float AdditionalTime;  // 0x0010, size 0x4
    float ThisTickDelta;  // 0x0014, not reflected
    UPROPERTY() int32 BaseNonRenderedUpdateRate;  // 0x0018, size 0x4
    UPROPERTY() int32 MaxEvalRateForInterpolation;  // 0x001C, size 0x4
    UPROPERTY() TArray<float> BaseVisibleDistanceFactorThesholds;  // 0x0020, size 0x10
    UPROPERTY() TMap<int32, int32> LODToFrameSkipMap;  // 0x0030, size 0x50
    UPROPERTY() int32 SkippedUpdateFrames;  // 0x0080, size 0x4
    UPROPERTY() int32 SkippedEvalFrames;  // 0x0084, size 0x4
};
