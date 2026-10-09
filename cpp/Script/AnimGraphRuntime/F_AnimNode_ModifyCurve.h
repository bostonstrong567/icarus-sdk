// /Script/AnimGraphRuntime.AnimNode_ModifyCurve
// size 0x58, declared in Engine/Source/Runtime/AnimGraphRuntime/Public/AnimNodes/AnimNode_ModifyCurve.h

USTRUCT()
struct FAnimNode_ModifyCurve : public FAnimNode_Base
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FPoseLink SourcePose;  // 0x0010, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<float> CurveValues;  // 0x0020, size 0x10
    UPROPERTY() TArray<FName> CurveNames;  // 0x0030, size 0x10
    TArray<float,TSizedDefaultAllocator<32> > LastCurveValues;  // 0x0040, not reflected
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Alpha;  // 0x0050, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) EModifyCurveApplyMode ApplyMode;  // 0x0054, size 0x1
};
