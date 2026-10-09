// /Script/Engine.TimerHandle
// size 0x8, declared in Engine/Source/Runtime/Engine/Classes/Engine/EngineTypes.h

USTRUCT()
struct FTimerHandle
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
private:
    UPROPERTY(Transient) uint64 Handle;  // 0x0000, size 0x8
};
