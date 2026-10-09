// /Script/Engine.ForceFeedbackParameters
// size 0xC, declared in Engine/Source/Runtime/Engine/Classes/GameFramework/ForceFeedbackEffect.h

USTRUCT()
struct FForceFeedbackParameters
{
public:
    UPROPERTY() FName Tag;  // 0x0000, size 0x8
    UPROPERTY() bool bLooping;  // 0x0008, size 0x1
    UPROPERTY() bool bIgnoreTimeDilation;  // 0x0009, size 0x1
    UPROPERTY() bool bPlayWhilePaused;  // 0x000A, size 0x1
};
