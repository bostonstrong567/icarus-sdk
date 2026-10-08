// /Script/Engine.ObjectTraceWorldSubsystem
// Derives from: UWorldSubsystem > USubsystem > UObject
// size 0x38, declared in Engine/Source/Runtime/Engine/Public/ObjectTrace.h

UCLASS()
class UObjectTraceWorldSubsystem : public UWorldSubsystem
{
public:

    // Not reflected: the engine's scripting cannot see these.
    uint16 FrameIndex;  // 0x0030
};
