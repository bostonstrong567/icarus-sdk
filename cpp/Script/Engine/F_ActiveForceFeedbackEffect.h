// /Script/Engine.ActiveForceFeedbackEffect
// size 0x18, declared in Engine/Source/Runtime/Engine/Classes/GameFramework/ForceFeedbackEffect.h

USTRUCT()
struct FActiveForceFeedbackEffect
{
public:
    UPROPERTY() UForceFeedbackEffect* ForceFeedbackEffect;  // 0x0000, size 0x8
    FForceFeedbackParameters Parameters;  // 0x0008, not reflected
    float PlayTime;  // 0x0014, not reflected
};
