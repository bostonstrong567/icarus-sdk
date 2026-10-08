// /Script/Engine.EventTrackKey
// size 0xC, declared in Engine/Source/Runtime/Engine/Classes/Matinee/InterpTrackEvent.h

USTRUCT()
struct FEventTrackKey
{
    UPROPERTY() float Time;  // 0x0000, size 0x4
    UPROPERTY(EditAnywhere) FName EventName;  // 0x0004, size 0x8
};
