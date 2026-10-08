// /Script/SlateCore.FocusEvent
// size 0x8, declared in Engine/Source/Runtime/SlateCore/Public/Input/Events.h

USTRUCT()
struct FFocusEvent
{

    // Not reflected:
    EFocusCause Cause;  // 0x0000
    uint32 UserIndex;  // 0x0004
};
