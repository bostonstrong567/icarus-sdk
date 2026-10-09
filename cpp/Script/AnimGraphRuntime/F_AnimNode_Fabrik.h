// /Script/AnimGraphRuntime.AnimNode_Fabrik
// size 0x190, declared in Engine/Source/Runtime/AnimGraphRuntime/Public/BoneControllers/AnimNode_Fabrik.h

USTRUCT()
struct FAnimNode_Fabrik : public FAnimNode_SkeletalControlBase
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTransform EffectorTransform;  // 0x00D0, size 0x30
    UPROPERTY(EditAnywhere) FBoneSocketTarget EffectorTarget;  // 0x0100, size 0x60
    UPROPERTY(EditAnywhere) FBoneReference TipBone;  // 0x0160, size 0x10
    UPROPERTY(EditAnywhere) FBoneReference RootBone;  // 0x0170, size 0x10
    UPROPERTY(EditAnywhere) float Precision;  // 0x0180, size 0x4
    UPROPERTY(EditAnywhere) int32 MaxIterations;  // 0x0184, size 0x4
    UPROPERTY(EditAnywhere) TEnumAsByte<EBoneControlSpace> EffectorTransformSpace;  // 0x0188, size 0x1
    UPROPERTY(EditAnywhere) TEnumAsByte<EBoneRotationSource> EffectorRotationSource;  // 0x0189, size 0x1
};
