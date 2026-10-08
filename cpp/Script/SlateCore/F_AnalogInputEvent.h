// /Script/SlateCore.AnalogInputEvent
// size 0x40, declared in Engine/Source/Runtime/SlateCore/Public/Input/Events.h

USTRUCT()
struct FAnalogInputEvent : public FKeyEvent
{

    // Not reflected:
    float AnalogValue;  // 0x0038
};
