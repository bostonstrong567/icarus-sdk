// /Script/SlateCore.MotionEvent
// size 0x48, declared in Engine/Source/Runtime/SlateCore/Public/Input/Events.h

USTRUCT()
struct FMotionEvent : public FInputEvent
{

    // Not reflected:
    FVector Tilt;  // 0x0018
    FVector RotationRate;  // 0x0024
    FVector Gravity;  // 0x0030
    FVector Acceleration;  // 0x003C
};
