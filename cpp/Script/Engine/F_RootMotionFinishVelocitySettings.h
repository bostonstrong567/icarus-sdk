// /Script/Engine.RootMotionFinishVelocitySettings
// size 0x14, declared in Engine/Source/Runtime/Engine/Classes/GameFramework/RootMotionSource.h

USTRUCT()
struct FRootMotionFinishVelocitySettings
{
public:
    UPROPERTY() ERootMotionFinishVelocityMode Mode;  // 0x0000, size 0x1
    UPROPERTY() FVector SetVelocity;  // 0x0004, size 0xC
    UPROPERTY() float ClampVelocity;  // 0x0010, size 0x4
};
