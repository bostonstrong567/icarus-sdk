// /Script/Engine.AnimTickRecord
// size 0x48, declared in Engine/Source/Runtime/Engine/Classes/Animation/AnimationAsset.h

USTRUCT()
struct FAnimTickRecord
{
    UPROPERTY() UAnimationAsset* SourceAsset;  // 0x0000, size 0x8

    // Not reflected:
    float * TimeAccumulator;  // 0x0008
    float PlayRateMultiplier;  // 0x0010
    float EffectiveBlendWeight;  // 0x0014
    float RootMotionWeightModifier;  // 0x0018
    bool bLooping;  // 0x001C
    FAnimTickRecord::<unnamed-tag>::<unnamed-type-BlendSpace> BlendSpace;  // 0x0020
    FAnimTickRecord::<unnamed-tag>::<unnamed-type-Montage> Montage;  // 0x0020
    FMarkerTickRecord * MarkerTickRecord;  // 0x0038
    bool bCanUseMarkerSync;  // 0x0040
    float LeaderScore;  // 0x0044
};
