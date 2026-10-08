// /Script/Engine.AnimationErrorStats
// size 0x10, declared in Engine/Source/Runtime/Engine/Public/Animation/AnimCompressionTypes.h

USTRUCT()
struct FAnimationErrorStats
{

    // Not reflected:
    float AverageError;  // 0x0000
    float MaxError;  // 0x0004
    float MaxErrorTime;  // 0x0008
    int32 MaxErrorBone;  // 0x000C
};
