// /Script/Engine.AnimationState
// size 0x28, declared in Engine/Source/Runtime/Engine/Classes/Animation/AnimStateMachineTypes.h

USTRUCT()
struct FAnimationState : public FAnimationStateBase
{
    UPROPERTY() TArray<FAnimationTransitionRule> Transitions;  // 0x0008, size 0x10
    UPROPERTY() int32 StateRootNodeIndex;  // 0x0018, size 0x4
    UPROPERTY() int32 StartNotify;  // 0x001C, size 0x4
    UPROPERTY() int32 EndNotify;  // 0x0020, size 0x4
    UPROPERTY() int32 FullyBlendedNotify;  // 0x0024, size 0x4
};
