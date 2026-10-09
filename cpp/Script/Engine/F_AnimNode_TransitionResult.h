// /Script/Engine.AnimNode_TransitionResult
// size 0x28, declared in Engine/Source/Runtime/Engine/Classes/Animation/AnimNode_TransitionResult.h

USTRUCT()
struct FAnimNode_TransitionResult : public FAnimNode_Base
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bCanEnterTransition;  // 0x0010, size 0x1
    TDelegate<bool __cdecl(void),FDefaultDelegateUserPolicy> NativeTransitionDelegate;  // 0x0018, not reflected
};
