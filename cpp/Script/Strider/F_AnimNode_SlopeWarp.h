// /Script/Strider.AnimNode_SlopeWarp
// size 0x1B0, declared in Engine/Plugins/Marketplace/Strider/Source/Strider/Public/AnimNode_SlopeWarp.h

USTRUCT()
struct FAnimNode_SlopeWarp : public FAnimNode_SkeletalControlBase
{
    UPROPERTY(EditAnywhere) FVector SlopeNormal;  // 0x00C8, size 0xC
    UPROPERTY(EditAnywhere) FVector SlopePoint;  // 0x00D4, size 0xC
    UPROPERTY(EditAnywhere) ESlopeDetectionMode SlopeDetectionMode;  // 0x00E0, size 0x1
    UPROPERTY(EditAnywhere) ESlopeRollCompensation SlopeRollCompensation;  // 0x00E1, size 0x1
    UPROPERTY(EditAnywhere) FVector IKRootLeftVector;  // 0x00E4, size 0xC
    UPROPERTY(EditAnywhere) float MaxSlopeAngle;  // 0x00F0, size 0x4
    UPROPERTY(EditAnywhere) float HeightOffset;  // 0x00F4, size 0x4
    UPROPERTY(EditAnywhere) float SlopeSmoothingRate;  // 0x00F8, size 0x4
    UPROPERTY(EditAnywhere) float AllowExtensionPercent;  // 0x00FC, size 0x4
    UPROPERTY(EditAnywhere) float DownSlopeShiftRate;  // 0x0100, size 0x4
    UPROPERTY(EditAnywhere) FBoneReference IkRoot;  // 0x0104, size 0x10
    UPROPERTY(EditAnywhere) FHipAdjustment HipAdjustment;  // 0x0114, size 0x18
    UPROPERTY(EditAnywhere) TArray<FLimbDefinition> Limbs;  // 0x0130, size 0x10
    UPROPERTY(EditAnywhere) TArray<FBoneReference> AdditionalBonesToAdjustWithHips;  // 0x0140, size 0x10

    // Not reflected:
    FVector LastHipShift;  // 0x0150
    FVector CurrentSlopeNormal;  // 0x015C
    FVector CurrentSlopePoint;  // 0x0168
    FQuat IKRootOffset;  // 0x0180
    float DeltaTime;  // 0x0190
    bool bValidCheckResult;  // 0x0194
    ACharacter * Character;  // 0x0198
    UCharacterMovementComponent * CharMoveComponent;  // 0x01A0
    FAnimInstanceProxy * AnimInstanceProxy;  // 0x01A8
};
