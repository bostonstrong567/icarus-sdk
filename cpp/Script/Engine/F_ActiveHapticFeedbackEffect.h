// /Script/Engine.ActiveHapticFeedbackEffect
// size 0x18, declared in Engine/Source/Runtime/Engine/Classes/Haptics/HapticFeedbackEffect_Base.h

USTRUCT()
struct FActiveHapticFeedbackEffect
{
public:
    UPROPERTY() UHapticFeedbackEffect_Base* HapticEffect;  // 0x0000, size 0x8
    bool bLoop;  // 0x0008, not reflected
private:
    float PlayTime;  // 0x000C, not reflected
    float Scale;  // 0x0010, not reflected
};
