// /Script/AIModule.IntervalCountdown
// size 0x8, declared in Engine/Source/Runtime/AIModule/Classes/AITypes.h

USTRUCT()
struct FIntervalCountdown
{
    UPROPERTY(EditAnywhere) float Interval;  // 0x0000, size 0x4

    // Not reflected:
    float TimeLeft;  // 0x0004
};
