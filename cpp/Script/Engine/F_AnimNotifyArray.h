// /Script/Engine.AnimNotifyArray
// size 0x10, declared in Engine/Source/Runtime/Engine/Public/Animation/AnimNotifyQueue.h

USTRUCT()
struct FAnimNotifyArray
{
    UPROPERTY(Transient) TArray<FAnimNotifyEventReference> Notifies;  // 0x0000, size 0x10
};
