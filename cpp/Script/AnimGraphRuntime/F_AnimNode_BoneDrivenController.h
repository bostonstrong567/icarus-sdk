// /Script/AnimGraphRuntime.AnimNode_BoneDrivenController
// size 0x118, declared in Engine/Source/Runtime/AnimGraphRuntime/Public/BoneControllers/AnimNode_BoneDrivenController.h

USTRUCT()
struct FAnimNode_BoneDrivenController : public FAnimNode_SkeletalControlBase
{
public:
    UPROPERTY(EditAnywhere) FBoneReference SourceBone;  // 0x00C8, size 0x10
    UPROPERTY(EditAnywhere) UCurveFloat* DrivingCurve;  // 0x00D8, size 0x8
    UPROPERTY(EditAnywhere) float Multiplier;  // 0x00E0, size 0x4
    UPROPERTY(EditAnywhere) float RangeMin;  // 0x00E4, size 0x4
    UPROPERTY(EditAnywhere) float RangeMax;  // 0x00E8, size 0x4
    UPROPERTY(EditAnywhere) float RemappedMin;  // 0x00EC, size 0x4
    UPROPERTY(EditAnywhere) float RemappedMax;  // 0x00F0, size 0x4
    UPROPERTY(EditAnywhere) FName ParameterName;  // 0x00F4, size 0x8
    UPROPERTY(EditAnywhere) FBoneReference TargetBone;  // 0x00FC, size 0x10
    UPROPERTY(EditAnywhere) EDrivenDestinationMode DestinationMode;  // 0x010C, size 0x1
    UPROPERTY(EditAnywhere) EDrivenBoneModificationMode ModificationMode;  // 0x010D, size 0x1
    UPROPERTY(EditAnywhere) TEnumAsByte<EComponentType> SourceComponent;  // 0x010E, size 0x1
    UPROPERTY(EditAnywhere) uint8 bUseRange : 1;  // 0x010F, mask 0x01
    UPROPERTY(EditAnywhere) uint8 bAffectTargetTranslationX : 1;  // 0x010F, mask 0x02
    UPROPERTY(EditAnywhere) uint8 bAffectTargetTranslationY : 1;  // 0x010F, mask 0x04
    UPROPERTY(EditAnywhere) uint8 bAffectTargetTranslationZ : 1;  // 0x010F, mask 0x08
    UPROPERTY(EditAnywhere) uint8 bAffectTargetRotationX : 1;  // 0x010F, mask 0x10
    UPROPERTY(EditAnywhere) uint8 bAffectTargetRotationY : 1;  // 0x010F, mask 0x20
    UPROPERTY(EditAnywhere) uint8 bAffectTargetRotationZ : 1;  // 0x010F, mask 0x40
    UPROPERTY(EditAnywhere) uint8 bAffectTargetScaleX : 1;  // 0x010F, mask 0x80
    UPROPERTY(EditAnywhere) uint8 bAffectTargetScaleY : 1;  // 0x0110, mask 0x01
    UPROPERTY(EditAnywhere) uint8 bAffectTargetScaleZ : 1;  // 0x0110, mask 0x02
};
