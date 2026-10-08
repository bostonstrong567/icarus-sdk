// /Script/Engine.AnimNotifyEventReference
// size 0x10, declared in Engine/Source/Runtime/Engine/Public/Animation/AnimNotifyQueue.h

USTRUCT()
struct FAnimNotifyEventReference
{
    UPROPERTY(Transient) UObject* NotifySource;  // 0x0008, size 0x8

    // Not reflected:
    const FAnimNotifyEvent * Notify;  // 0x0000
};
