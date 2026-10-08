// /Script/Strider.AnimNode_StrideWarp
// size 0x190, declared in Engine/Plugins/Marketplace/Strider/Source/Strider/Public/AnimNode_StrideWarp.h

USTRUCT()
struct FAnimNode_StrideWarp : public FAnimNode_SkeletalControlBase
{
    UPROPERTY(EditAnywhere) float StrideScale;  // 0x00C8, size 0x4
    UPROPERTY(EditAnywhere) float Direction;  // 0x00CC, size 0x4
    UPROPERTY(EditAnywhere) float Twist;  // 0x00D0, size 0x4
    UPROPERTY(EditAnywhere) float AllowExtensionPercent;  // 0x00D4, size 0x4
    UPROPERTY(EditAnywhere) FStridePivot StridePivot;  // 0x00E0, size 0x60
    UPROPERTY(EditAnywhere) FHipAdjustment HipAdjustment;  // 0x0140, size 0x18
    UPROPERTY(EditAnywhere) TArray<FLimbDefinition> Limbs;  // 0x0158, size 0x10
    UPROPERTY(EditAnywhere) TArray<FBoneReference> AdditionalBonesToAdjustWithHips;  // 0x0168, size 0x10

    // Not reflected:
    float LastHipShift;  // 0x0178
    float DeltaTime;  // 0x017C
    bool bValidCheckResult;  // 0x0180
    FAnimInstanceProxy * AnimInstanceProxy;  // 0x0188
};
