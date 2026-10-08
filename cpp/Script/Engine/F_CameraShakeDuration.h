// /Script/Engine.CameraShakeDuration
// size 0x8, declared in Engine/Source/Runtime/Engine/Classes/Camera/CameraShakeBase.h

USTRUCT()
struct FCameraShakeDuration
{
    UPROPERTY() float Duration;  // 0x0000, size 0x4
    UPROPERTY() ECameraShakeDurationType Type;  // 0x0004, size 0x1
};
