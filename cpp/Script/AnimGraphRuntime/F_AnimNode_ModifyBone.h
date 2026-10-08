// /Script/AnimGraphRuntime.AnimNode_ModifyBone
// size 0x108, declared in Engine/Source/Runtime/AnimGraphRuntime/Public/BoneControllers/AnimNode_ModifyBone.h

USTRUCT()
struct FAnimNode_ModifyBone : public FAnimNode_SkeletalControlBase
{
    UPROPERTY(EditAnywhere) FBoneReference BoneToModify;  // 0x00C8, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector Translation;  // 0x00D8, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FRotator Rotation;  // 0x00E4, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector Scale;  // 0x00F0, size 0xC
    UPROPERTY(EditAnywhere) TEnumAsByte<EBoneModificationMode> TranslationMode;  // 0x00FC, size 0x1
    UPROPERTY(EditAnywhere) TEnumAsByte<EBoneModificationMode> RotationMode;  // 0x00FD, size 0x1
    UPROPERTY(EditAnywhere) TEnumAsByte<EBoneModificationMode> ScaleMode;  // 0x00FE, size 0x1
    UPROPERTY(EditAnywhere) TEnumAsByte<EBoneControlSpace> TranslationSpace;  // 0x00FF, size 0x1
    UPROPERTY(EditAnywhere) TEnumAsByte<EBoneControlSpace> RotationSpace;  // 0x0100, size 0x1
    UPROPERTY(EditAnywhere) TEnumAsByte<EBoneControlSpace> ScaleSpace;  // 0x0101, size 0x1
};
