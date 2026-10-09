// /Script/Engine.CameraShakeInfo
// size 0x10, declared in Engine/Source/Runtime/Engine/Classes/Camera/CameraShakeBase.h

USTRUCT()
struct FCameraShakeInfo
{
public:
    UPROPERTY() FCameraShakeDuration Duration;  // 0x0000, size 0x8
    UPROPERTY() float BlendIn;  // 0x0008, size 0x4
    UPROPERTY() float BlendOut;  // 0x000C, size 0x4
};
