// /Script/Engine.CameraShakeDuration
// size 0x8, declared in Engine/Source/Runtime/Engine/Classes/Camera/CameraShakeBase.h

USTRUCT()
struct FCameraShakeDuration
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
private:
    UPROPERTY() float Duration;  // 0x0000, size 0x4
    UPROPERTY() ECameraShakeDurationType Type;  // 0x0004, size 0x1
};
