// /Script/SlateCore.InputEvent
// size 0x18, declared in Engine/Source/Runtime/SlateCore/Public/Input/Events.h

USTRUCT()
struct FInputEvent
{
protected:
    FModifierKeysState ModifierKeys;  // 0x0008, not reflected
    bool bIsRepeat;  // 0x000A, not reflected
    uint32 UserIndex;  // 0x000C, not reflected
    const FWidgetPath * EventPath;  // 0x0010, not reflected
};
