// /Script/AnimGraphRuntime.AnimNode_CopyBone
// size 0xF0, declared in Engine/Source/Runtime/AnimGraphRuntime/Public/BoneControllers/AnimNode_CopyBone.h

USTRUCT()
struct FAnimNode_CopyBone : public FAnimNode_SkeletalControlBase
{
    UPROPERTY(EditAnywhere) FBoneReference SourceBone;  // 0x00C8, size 0x10
    UPROPERTY(EditAnywhere) FBoneReference TargetBone;  // 0x00D8, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bCopyTranslation;  // 0x00E8, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bCopyRotation;  // 0x00E9, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bCopyScale;  // 0x00EA, size 0x1
    UPROPERTY(EditAnywhere) TEnumAsByte<EBoneControlSpace> ControlSpace;  // 0x00EB, size 0x1
};
