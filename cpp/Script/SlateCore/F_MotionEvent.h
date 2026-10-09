// /Script/SlateCore.MotionEvent
// size 0x48, declared in Engine/Source/Runtime/SlateCore/Public/Input/Events.h

USTRUCT()
struct FMotionEvent : public FInputEvent
{
private:
    FVector Tilt;  // 0x0018, not reflected
    FVector RotationRate;  // 0x0024, not reflected
    FVector Gravity;  // 0x0030, not reflected
    FVector Acceleration;  // 0x003C, not reflected
};
