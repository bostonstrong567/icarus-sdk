// /Script/Engine.AnimationPotentialTransition
// size 0x30, declared in Engine/Source/Runtime/Engine/Classes/Animation/AnimNode_StateMachine.h

USTRUCT()
struct FAnimationPotentialTransition
{

    // Not reflected:
    int32 TargetState;  // 0x0000
    const FBakedStateExitTransition * TransitionRule;  // 0x0008
    TArray<int,TInlineAllocator<3,TSizedDefaultAllocator<32> > > SourceTransitionIndices;  // 0x0010
};
