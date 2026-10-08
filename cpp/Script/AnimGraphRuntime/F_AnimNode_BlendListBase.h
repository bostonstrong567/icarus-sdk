// /Script/AnimGraphRuntime.AnimNode_BlendListBase
// size 0x98, declared in Engine/Source/Runtime/AnimGraphRuntime/Public/AnimNodes/AnimNode_BlendListBase.h

USTRUCT()
struct FAnimNode_BlendListBase : public FAnimNode_Base
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FPoseLink> BlendPose;  // 0x0010, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<float> BlendTime;  // 0x0020, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) EBlendListTransitionType TransitionType;  // 0x0030, size 0x1
    UPROPERTY(EditAnywhere) EAlphaBlendOption BlendType;  // 0x0031, size 0x1
    UPROPERTY(EditAnywhere) bool bResetChildOnActivation;  // 0x0032, size 0x1
    UPROPERTY(EditAnywhere) UCurveFloat* CustomBlendCurve;  // 0x0038, size 0x8
    UPROPERTY(EditAnywhere) UBlendProfile* BlendProfile;  // 0x0040, size 0x8

    // Not reflected:
    int32 LastActiveChildIndex;  // 0x0034
    TArray<FAlphaBlend,TSizedDefaultAllocator<32> > Blends;  // 0x0048
    TArray<float,TSizedDefaultAllocator<32> > BlendWeights;  // 0x0058
    TArray<float,TSizedDefaultAllocator<32> > RemainingBlendTimes;  // 0x0068
    TArray<FBlendSampleData,TSizedDefaultAllocator<32> > PerBoneSampleData;  // 0x0078
    TArray<int,TSizedDefaultAllocator<32> > PosesToEvaluate;  // 0x0088
};
