// /Script/Engine.BakedAnimationStateMachine
// size 0x30, declared in Engine/Source/Runtime/Engine/Classes/Animation/AnimStateMachineTypes.h

USTRUCT()
struct FBakedAnimationStateMachine
{
    UPROPERTY() FName MachineName;  // 0x0000, size 0x8
    UPROPERTY() int32 InitialState;  // 0x0008, size 0x4
    UPROPERTY() TArray<FBakedAnimationState> States;  // 0x0010, size 0x10
    UPROPERTY() TArray<FAnimationTransitionBetweenStates> Transitions;  // 0x0020, size 0x10
};
