// /Script/SlateCore.PointerEvent
// size 0x70, declared in Engine/Source/Runtime/SlateCore/Public/Input/Events.h

USTRUCT()
struct FPointerEvent : public FInputEvent
{
private:
    FVector2D ScreenSpacePosition;  // 0x0018, not reflected
    FVector2D LastScreenSpacePosition;  // 0x0020, not reflected
    FVector2D CursorDelta;  // 0x0028, not reflected
    const TSet<FKey,DefaultKeyFuncs<FKey,0>,FDefaultSetAllocator> * PressedButtons;  // 0x0030, not reflected
    FKey EffectingButton;  // 0x0038, not reflected
    uint32 PointerIndex;  // 0x0050, not reflected
    uint32 TouchpadIndex;  // 0x0054, not reflected
    float Force;  // 0x0058, not reflected
    bool bIsTouchEvent;  // 0x005C, not reflected
    EGestureEvent GestureType;  // 0x005D, not reflected
    FVector2D WheelOrGestureDelta;  // 0x0060, not reflected
    bool bIsDirectionInvertedFromDevice;  // 0x0068, not reflected
    bool bIsTouchForceChanged;  // 0x0069, not reflected
    bool bIsTouchFirstMove;  // 0x006A, not reflected
};
