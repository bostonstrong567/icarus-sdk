// /Script/SlateCore.CharacterEvent
// size 0x20, declared in Engine/Source/Runtime/SlateCore/Public/Input/Events.h

USTRUCT()
struct FCharacterEvent : public FInputEvent
{

    // Not reflected:
    wchar_t Character;  // 0x0018
};
