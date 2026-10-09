// /Script/Engine.AnimationErrorStats
// size 0x10, declared in Engine/Source/Runtime/Engine/Public/Animation/AnimCompressionTypes.h

USTRUCT()
struct FAnimationErrorStats
{
public:
    float AverageError;  // 0x0000, not reflected
    float MaxError;  // 0x0004, not reflected
    float MaxErrorTime;  // 0x0008, not reflected
    int32 MaxErrorBone;  // 0x000C, not reflected
};
