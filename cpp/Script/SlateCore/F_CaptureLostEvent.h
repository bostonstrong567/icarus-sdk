// /Script/SlateCore.CaptureLostEvent
// size 0x8, declared in Engine/Source/Runtime/SlateCore/Public/Input/Events.h

USTRUCT()
struct FCaptureLostEvent
{
public:
    int32 UserIndex;  // 0x0000, not reflected
    int32 PointerIndex;  // 0x0004, not reflected
};
