// /Script/SlateCore.KeyEvent
// size 0x38, declared in Engine/Source/Runtime/SlateCore/Public/Input/Events.h

USTRUCT()
struct FKeyEvent : public FInputEvent
{
private:
    FKey Key;  // 0x0018, not reflected
    uint32 CharacterCode;  // 0x0030, not reflected
    uint32 KeyCode;  // 0x0034, not reflected
};
