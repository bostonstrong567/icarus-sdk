// /Script/AnimGraphRuntime.AnimNode_BlendSpaceEvaluator
// size 0xF0, declared in Engine/Source/Runtime/AnimGraphRuntime/Public/AnimNodes/AnimNode_BlendSpaceEvaluator.h

USTRUCT()
struct FAnimNode_BlendSpaceEvaluator : public FAnimNode_BlendSpacePlayer
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float NormalizedTime;  // 0x00E8, size 0x4
};
