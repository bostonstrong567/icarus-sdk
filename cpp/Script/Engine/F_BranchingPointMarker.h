// /Script/Engine.BranchingPointMarker
// size 0xC, declared in Engine/Source/Runtime/Engine/Classes/Animation/AnimMontage.h

USTRUCT()
struct FBranchingPointMarker
{
    UPROPERTY() int32 NotifyIndex;  // 0x0000, size 0x4
    UPROPERTY() float TriggerTime;  // 0x0004, size 0x4
    UPROPERTY() TEnumAsByte<EAnimNotifyEventType> NotifyEventType;  // 0x0008, size 0x1
};
