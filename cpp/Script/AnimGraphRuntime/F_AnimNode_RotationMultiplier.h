// /Script/AnimGraphRuntime.AnimNode_RotationMultiplier
// size 0xF0, declared in Engine/Source/Runtime/AnimGraphRuntime/Public/BoneControllers/AnimNode_RotationMultiplier.h

USTRUCT()
struct FAnimNode_RotationMultiplier : public FAnimNode_SkeletalControlBase
{
public:
    UPROPERTY(EditAnywhere) FBoneReference TargetBone;  // 0x00C8, size 0x10
    UPROPERTY(EditAnywhere) FBoneReference SourceBone;  // 0x00D8, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Multiplier;  // 0x00E8, size 0x4
    UPROPERTY(EditAnywhere) TEnumAsByte<EBoneAxis> RotationAxisToRefer;  // 0x00EC, size 0x1
    UPROPERTY(EditAnywhere) bool bIsAdditive;  // 0x00ED, size 0x1
};
