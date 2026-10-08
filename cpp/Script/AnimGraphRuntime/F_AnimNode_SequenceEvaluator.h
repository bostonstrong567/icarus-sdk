// /Script/AnimGraphRuntime.AnimNode_SequenceEvaluator
// size 0x50, declared in Engine/Source/Runtime/AnimGraphRuntime/Public/AnimNodes/AnimNode_SequenceEvaluator.h

USTRUCT()
struct FAnimNode_SequenceEvaluator : public FAnimNode_AssetPlayerBase
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UAnimSequenceBase* Sequence;  // 0x0038, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float ExplicitTime;  // 0x0040, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bShouldLoop;  // 0x0044, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bTeleportToExplicitTime;  // 0x0045, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TEnumAsByte<ESequenceEvalReinit> ReinitializationBehavior;  // 0x0046, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float StartPosition;  // 0x0048, size 0x4

    // Not reflected:
    bool bReinitialized;  // 0x0047
};
