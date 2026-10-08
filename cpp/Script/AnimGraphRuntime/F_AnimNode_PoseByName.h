// /Script/AnimGraphRuntime.AnimNode_PoseByName
// size 0x98, declared in Engine/Source/Runtime/AnimGraphRuntime/Public/AnimNodes/AnimNode_PoseByName.h

USTRUCT()
struct FAnimNode_PoseByName : public FAnimNode_PoseHandler
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName PoseName;  // 0x0080, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float PoseWeight;  // 0x0088, size 0x4

    // Not reflected:
    FName CurrentPoseName;  // 0x008C
};
