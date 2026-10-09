// /Script/Engine.AnimationTransitionRule
// size 0x10, declared in Engine/Source/Runtime/Engine/Classes/Animation/AnimStateMachineTypes.h

USTRUCT()
struct FAnimationTransitionRule
{
public:
    UPROPERTY() FName RuleToExecute;  // 0x0000, size 0x8
    UPROPERTY() bool TransitionReturnVal;  // 0x0008, size 0x1
    UPROPERTY() int32 TransitionIndex;  // 0x000C, size 0x4
};
