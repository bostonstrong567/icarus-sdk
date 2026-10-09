// /Script/Engine.AnimNotifyEventReference
// size 0x10, declared in Engine/Source/Runtime/Engine/Public/Animation/AnimNotifyQueue.h

USTRUCT()
struct FAnimNotifyEventReference
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
private:
    const FAnimNotifyEvent * Notify;  // 0x0000, not reflected
    UPROPERTY(Transient) UObject* NotifySource;  // 0x0008, size 0x8
};
