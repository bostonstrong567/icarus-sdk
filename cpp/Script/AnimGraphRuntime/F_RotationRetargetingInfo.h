// /Script/AnimGraphRuntime.RotationRetargetingInfo
// size 0x130, declared in Engine/Source/Runtime/AnimGraphRuntime/Public/CommonAnimationTypes.h

USTRUCT()
struct FRotationRetargetingInfo
{
public:
    UPROPERTY(EditAnywhere) bool bEnabled;  // 0x0000, size 0x1
    UPROPERTY(EditAnywhere) FTransform Source;  // 0x0010, size 0x30
    UPROPERTY(EditAnywhere) FTransform Target;  // 0x0040, size 0x30
    UPROPERTY(EditAnywhere) ERotationComponent RotationComponent;  // 0x0070, size 0x1
    UPROPERTY(EditAnywhere) FVector TwistAxis;  // 0x0074, size 0xC
    UPROPERTY(EditAnywhere) bool bUseAbsoluteAngle;  // 0x0080, size 0x1
    UPROPERTY(EditAnywhere) float SourceMinimum;  // 0x0084, size 0x4
    UPROPERTY(EditAnywhere) float SourceMaximum;  // 0x0088, size 0x4
    UPROPERTY(EditAnywhere) float TargetMinimum;  // 0x008C, size 0x4
    UPROPERTY(EditAnywhere) float TargetMaximum;  // 0x0090, size 0x4
    UPROPERTY(EditAnywhere) EEasingFuncType EasingType;  // 0x0094, size 0x1
    UPROPERTY(EditAnywhere) FRuntimeFloatCurve CustomCurve;  // 0x0098, size 0x88
    UPROPERTY(EditAnywhere) bool bFlipEasing;  // 0x0120, size 0x1
    UPROPERTY(EditAnywhere) float EasingWeight;  // 0x0124, size 0x4
    UPROPERTY(EditAnywhere) bool bClamp;  // 0x0128, size 0x1
};
