// /Script/SlateCore.InputEvent
// size 0x18, declared in Engine/Source/Runtime/SlateCore/Public/Input/Events.h

USTRUCT()
struct FInputEvent
{

    // Not reflected:
    FModifierKeysState ModifierKeys;  // 0x0008
    bool bIsRepeat;  // 0x000A
    uint32 UserIndex;  // 0x000C
    const FWidgetPath * EventPath;  // 0x0010
};
