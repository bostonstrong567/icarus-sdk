// /Script/SlateCore.PointerEvent
// size 0x70, declared in Engine/Source/Runtime/SlateCore/Public/Input/Events.h

USTRUCT()
struct FPointerEvent : public FInputEvent
{

    // Not reflected:
    FVector2D ScreenSpacePosition;  // 0x0018
    FVector2D LastScreenSpacePosition;  // 0x0020
    FVector2D CursorDelta;  // 0x0028
    const TSet<FKey,DefaultKeyFuncs<FKey,0>,FDefaultSetAllocator> * PressedButtons;  // 0x0030
    FKey EffectingButton;  // 0x0038
    uint32 PointerIndex;  // 0x0050
    uint32 TouchpadIndex;  // 0x0054
    float Force;  // 0x0058
    bool bIsTouchEvent;  // 0x005C
    EGestureEvent GestureType;  // 0x005D
    FVector2D WheelOrGestureDelta;  // 0x0060
    bool bIsDirectionInvertedFromDevice;  // 0x0068
    bool bIsTouchForceChanged;  // 0x0069
    bool bIsTouchFirstMove;  // 0x006A
};
