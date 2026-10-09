// /Script/SlateCore.FocusEvent
// size 0x8, declared in Engine/Source/Runtime/SlateCore/Public/Input/Events.h

USTRUCT()
struct FFocusEvent
{
private:
    EFocusCause Cause;  // 0x0000, not reflected
    uint32 UserIndex;  // 0x0004, not reflected
};
