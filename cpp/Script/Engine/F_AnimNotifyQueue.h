// /Script/Engine.AnimNotifyQueue
// size 0x70, declared in Engine/Source/Runtime/Engine/Public/Animation/AnimNotifyQueue.h

USTRUCT()
struct FAnimNotifyQueue
{
public:
    int32 PredictedLODLevel;  // 0x0000, not reflected
    FRandomStream RandomStream;  // 0x0004, not reflected
    UPROPERTY(Transient) TArray<FAnimNotifyEventReference> AnimNotifies;  // 0x0010, size 0x10
    UPROPERTY(Transient) TMap<FName, FAnimNotifyArray> UnfilteredMontageAnimNotifies;  // 0x0020, size 0x50
};
