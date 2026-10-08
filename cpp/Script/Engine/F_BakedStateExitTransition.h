// /Script/Engine.BakedStateExitTransition
// size 0x20, declared in Engine/Source/Runtime/Engine/Classes/Animation/AnimStateMachineTypes.h

USTRUCT()
struct FBakedStateExitTransition
{
    UPROPERTY() int32 CanTakeDelegateIndex;  // 0x0000, size 0x4
    UPROPERTY() int32 CustomResultNodeIndex;  // 0x0004, size 0x4
    UPROPERTY() int32 TransitionIndex;  // 0x0008, size 0x4
    UPROPERTY() bool bDesiredTransitionReturnValue;  // 0x000C, size 0x1
    UPROPERTY() bool bAutomaticRemainingTimeRule;  // 0x000D, size 0x1
    UPROPERTY() TArray<int32> PoseEvaluatorLinks;  // 0x0010, size 0x10
};
