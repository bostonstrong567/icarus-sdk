// /Script/SlateCore.KeyEvent
// size 0x38, declared in Engine/Source/Runtime/SlateCore/Public/Input/Events.h

USTRUCT()
struct FKeyEvent : public FInputEvent
{

    // Not reflected:
    FKey Key;  // 0x0018
    uint32 CharacterCode;  // 0x0030
    uint32 KeyCode;  // 0x0034
};
