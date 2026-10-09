// /Script/Icarus.FocusableData
// size 0x1F0, declared in Icarus/Source/Icarus/Traits/Behaviours/Focusable/FocusableData.h

USTRUCT()
struct FFocusableData : public FIcarusTableRowBase
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftClassPtr<UFocusableComponent> Behaviour;  // 0x0018, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FItemAttachmentRowHandle AttachmentData;  // 0x0040, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTransform AttachmentOffset;  // 0x0060, size 0x30
    UPROPERTY(EditAnywhere, BlueprintReadWrite) EAnimOverlayState AnimOverlayType;  // 0x0090, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FItemAnimationsRowHandle AnimationData;  // 0x0094, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bApplyAutomaticSpineBend;  // 0x00AC, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<UAnimMontage> FPFocusedMontage;  // 0x00B0, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<UBlendSpace1D> FPLocoBlendSpaceOverride;  // 0x00D8, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<UAnimSequence> FPIdleAnim;  // 0x0100, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<UAnimMontage> TPFocusedMontage;  // 0x0128, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<UAnimSequence> TPUprightIdle;  // 0x0150, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<UAnimSequence> TPCrouchedIdle;  // 0x0178, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<UAnimSequence> TPPoses;  // 0x01A0, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<UAnimMontage> ItemFocusedMontage;  // 0x01C8, size 0x28
};
