// /Script/AnimGraphRuntime.AnimNode_CurveSource
// size 0x40, declared in Engine/Source/Runtime/AnimGraphRuntime/Public/AnimNodes/AnimNode_CurveSource.h

USTRUCT()
struct FAnimNode_CurveSource : public FAnimNode_Base
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FPoseLink SourcePose;  // 0x0010, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName SourceBinding;  // 0x0020, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Alpha;  // 0x0028, size 0x4
    UPROPERTY(Transient) TScriptInterface<ICurveSourceInterface> CurveSource;  // 0x0030, size 0x10
};
