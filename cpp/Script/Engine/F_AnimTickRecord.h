// /Script/Engine.AnimTickRecord
// size 0x48, declared in Engine/Source/Runtime/Engine/Classes/Animation/AnimationAsset.h

USTRUCT()
struct FAnimTickRecord
{
public:
    UPROPERTY() UAnimationAsset* SourceAsset;  // 0x0000, size 0x8
    float * TimeAccumulator;  // 0x0008, not reflected
    float PlayRateMultiplier;  // 0x0010, not reflected
    float EffectiveBlendWeight;  // 0x0014, not reflected
    float RootMotionWeightModifier;  // 0x0018, not reflected
    bool bLooping;  // 0x001C, not reflected
    FAnimTickRecord::<unnamed-tag>::<unnamed-type-BlendSpace> BlendSpace;  // 0x0020, not reflected
    FAnimTickRecord::<unnamed-tag>::<unnamed-type-Montage> Montage;  // 0x0020, not reflected
    FMarkerTickRecord * MarkerTickRecord;  // 0x0038, not reflected
    bool bCanUseMarkerSync;  // 0x0040, not reflected
    float LeaderScore;  // 0x0044, not reflected
};
