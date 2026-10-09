// /Script/AnimGraphRuntime.AnimNode_CopyBoneDelta
// size 0xF8, declared in Engine/Source/Runtime/AnimGraphRuntime/Public/BoneControllers/AnimNode_CopyBoneDelta.h

USTRUCT()
struct FAnimNode_CopyBoneDelta : public FAnimNode_SkeletalControlBase
{
public:
    UPROPERTY(EditAnywhere) FBoneReference SourceBone;  // 0x00C8, size 0x10
    UPROPERTY(EditAnywhere) FBoneReference TargetBone;  // 0x00D8, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bCopyTranslation;  // 0x00E8, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bCopyRotation;  // 0x00E9, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bCopyScale;  // 0x00EA, size 0x1
    UPROPERTY(EditAnywhere) CopyBoneDeltaMode CopyMode;  // 0x00EB, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float TranslationMultiplier;  // 0x00EC, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float RotationMultiplier;  // 0x00F0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float ScaleMultiplier;  // 0x00F4, size 0x4
};
