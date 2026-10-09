// /Script/SlateCore.AnalogInputEvent
// size 0x40, declared in Engine/Source/Runtime/SlateCore/Public/Input/Events.h

USTRUCT()
struct FAnalogInputEvent : public FKeyEvent
{
private:
    float AnalogValue;  // 0x0038, not reflected
};
