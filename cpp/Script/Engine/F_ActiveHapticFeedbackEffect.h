// /Script/Engine.ActiveHapticFeedbackEffect
// size 0x18, declared in Engine/Source/Runtime/Engine/Classes/Haptics/HapticFeedbackEffect_Base.h

USTRUCT()
struct FActiveHapticFeedbackEffect
{
    UPROPERTY() UHapticFeedbackEffect_Base* HapticEffect;  // 0x0000, size 0x8

    // Not reflected:
    bool bLoop;  // 0x0008
    float PlayTime;  // 0x000C
    float Scale;  // 0x0010
};
